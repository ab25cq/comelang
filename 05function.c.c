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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
    struct sMemHeaderTiny* mFreeMem[(2*1024*1024)];
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
    _Bool emb_cpp;
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
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
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
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
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
_Bool strmemcmp(char* p, char* p2);
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
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
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
char* skip_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self);
static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self);
static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph$p_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph$p_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph$p_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph$p_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
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
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list_item$1sType$ph_equals(struct list_item$1sType$ph* left, struct list_item$1sType$ph* right);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right);
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
unsigned int result_155;
    result_155=0;
    result_155+=int_get_hash_key(((int)self->buf));
    result_155+=int_get_hash_key(((int)self->len));
    result_155+=int_get_hash_key(((int)self->size));
    return result_155;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__78;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__78 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__78,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__81;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__83;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__83 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__83,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__83;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__85;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__85 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__85,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__88;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__93;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__93 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__93,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__93;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__95;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__95 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__95,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__95;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_177;
struct list$1char$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_177=0;    i_177<num_value;    i_177++    ){
        list$1char$$p_push_back(self,values[i_177]);
    }
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__98,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__98;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_178;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_179;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_180;
struct list$1char$* __result_obj__97;
    if(    self->len==0) {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1466, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=((void*)0);
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head=litem_178;
    }
    else if(    self->len==1) {
        litem_179=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1476, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_179->prev=self->head;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head->next=litem_179;
    }
    else {
        litem_180=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1486, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_180->prev=self->tail;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail->next=litem_180;
        self->tail=litem_180;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_181;
struct list_item$1char$* prev_it_182;
    it_181=self->head;
    while(it_181!=((void*)0)) {
        prev_it_182=it_181;
        it_181=it_181->next;
        come_call_finalizer3(prev_it_182,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_183;
struct list$1char$p* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_183=0;    i_183<num_value;    i_183++    ){
        list$1char$p$p_push_back(self,values[i_183]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__101;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_184;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_185;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_186;
struct list$1char$p* __result_obj__100;
    if(    self->len==0) {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1466, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=((void*)0);
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head=litem_184;
    }
    else if(    self->len==1) {
        litem_185=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1476, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1486, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_187;
struct list_item$1char$p* prev_it_188;
    it_187=self->head;
    while(it_187!=((void*)0)) {
        prev_it_188=it_187;
        it_187=it_187->next;
        come_call_finalizer3(prev_it_188,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_189;
struct list$1short$* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_189=0;    i_189<num_value;    i_189++    ){
        list$1short$$p_push_back(self,values[i_189]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__104,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__104;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_190;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_191;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_192;
struct list$1short$* __result_obj__103;
    if(    self->len==0) {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1466, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1) {
        litem_191=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1476, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1486, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_193;
struct list_item$1short$* prev_it_194;
    it_193=self->head;
    while(it_193!=((void*)0)) {
        prev_it_194=it_193;
        it_193=it_193->next;
        come_call_finalizer3(prev_it_194,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_195;
struct list$1int$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_195=0;    i_195<num_value;    i_195++    ){
        list$1int$$p_push_back(self,values[i_195]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__107,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__107;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_196;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_197;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_198;
struct list$1int$* __result_obj__106;
    if(    self->len==0) {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1466, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1) {
        litem_197=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1476, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1486, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_199;
struct list_item$1int$* prev_it_200;
    it_199=self->head;
    while(it_199!=((void*)0)) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer3(prev_it_200,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_201;
struct list$1long$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_201=0;    i_201<num_value;    i_201++    ){
        list$1long$$p_push_back(self,values[i_201]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__110,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__110;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_202;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_203;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_204;
struct list$1long$* __result_obj__109;
    if(    self->len==0) {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1466, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=((void*)0);
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head=litem_202;
    }
    else if(    self->len==1) {
        litem_203=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1476, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=self->head;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head->next=litem_203;
    }
    else {
        litem_204=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1486, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->tail;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail->next=litem_204;
        self->tail=litem_204;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_205;
struct list_item$1long$* prev_it_206;
    it_205=self->head;
    while(it_205!=((void*)0)) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer3(prev_it_206,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_207;
struct list$1float$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_207=0;    i_207<num_value;    i_207++    ){
        list$1float$$p_push_back(self,values[i_207]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__113,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__113;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_208;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_209;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_210;
struct list$1float$* __result_obj__112;
    if(    self->len==0) {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1466, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head=litem_208;
    }
    else if(    self->len==1) {
        litem_209=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1476, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        litem_210=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1486, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_211;
struct list_item$1float$* prev_it_212;
    it_211=self->head;
    while(it_211!=((void*)0)) {
        prev_it_212=it_211;
        it_211=it_211->next;
        come_call_finalizer3(prev_it_212,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_213;
struct list$1double$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_213=0;    i_213<num_value;    i_213++    ){
        list$1double$$p_push_back(self,values[i_213]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__116,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__116;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_214;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_215;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_216;
struct list$1double$* __result_obj__115;
    if(    self->len==0) {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1466, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=((void*)0);
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head=litem_214;
    }
    else if(    self->len==1) {
        litem_215=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1476, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_215->prev=self->head;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head->next=litem_215;
    }
    else {
        litem_216=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1486, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_216->prev=self->tail;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail->next=litem_216;
        self->tail=litem_216;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_217;
struct list_item$1double$* prev_it_218;
    it_217=self->head;
    while(it_217!=((void*)0)) {
        prev_it_218=it_217;
        it_217=it_217->next;
        come_call_finalizer3(prev_it_218,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_219;
struct vector$1char$* __result_obj__119;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2283, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_219=0;    i_219<num_value;    i_219++    ){
        vector$1char$$p_add(self,values[i_219]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__119,vector$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__119;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_220;
char* items_221;
void* __right_value128 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__118;
memset(&i_222, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_220=self->size*2;
        items_221=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_220)), "./comelang.h", 2410, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_222=0;        i_222<self->size;        i_222++        ){
            self->items[i_222]=items_221[i_222];
        }
        self->size=new_size_220;
        come_free(items_221);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_224;
struct vector$1char$p* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2283, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_224=0;    i_224<num_value;    i_224++    ){
        vector$1char$p$p_add(self,values[i_224]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__122;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_225;
char** items_226;
void* __right_value132 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__121;
memset(&i_227, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_225=self->size*2;
        items_226=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_225)), "./comelang.h", 2410, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_227=0;        i_227<self->size;        i_227++        ){
            self->items[i_227]=items_226[i_227];
        }
        self->size=new_size_225;
        come_free(items_226);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_228;
    if(    0) {
        for(        i_228=0;        i_228<self->len;        i_228++        ){
            (self->items[i_228] = come_decrement_ref_count(self->items[i_228], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_229;
struct vector$1short$* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2283, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_229=0;    i_229<num_value;    i_229++    ){
        vector$1short$$p_add(self,values[i_229]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__125;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_230;
short* items_231;
void* __right_value136 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__124;
memset(&i_232, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_230=self->size*2;
        items_231=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_230)), "./comelang.h", 2410, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_232=0;        i_232<self->size;        i_232++        ){
            self->items[i_232]=items_231[i_232];
        }
        self->size=new_size_230;
        come_free(items_231);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_233;
    if(    0) {
        for(        i_233=0;        i_233<self->len;        i_233++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_234;
struct vector$1int$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2283, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_234=0;    i_234<num_value;    i_234++    ){
        vector$1int$$p_add(self,values[i_234]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__128;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_235;
int* items_236;
void* __right_value140 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__127;
memset(&i_237, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_235=self->size*2;
        items_236=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_235)), "./comelang.h", 2410, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_237=0;        i_237<self->size;        i_237++        ){
            self->items[i_237]=items_236[i_237];
        }
        self->size=new_size_235;
        come_free(items_236);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_238;
    if(    0) {
        for(        i_238=0;        i_238<self->len;        i_238++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_239;
struct vector$1long$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2283, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_239=0;    i_239<num_value;    i_239++    ){
        vector$1long$$p_add(self,values[i_239]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__131;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_240;
long* items_241;
void* __right_value144 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__130;
memset(&i_242, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_240=self->size*2;
        items_241=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_240)), "./comelang.h", 2410, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_242=0;        i_242<self->size;        i_242++        ){
            self->items[i_242]=items_241[i_242];
        }
        self->size=new_size_240;
        come_free(items_241);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_243;
    if(    0) {
        for(        i_243=0;        i_243<self->len;        i_243++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_244;
struct vector$1float$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2283, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_244=0;    i_244<num_value;    i_244++    ){
        vector$1float$$p_add(self,values[i_244]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__134;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_245;
float* items_246;
void* __right_value148 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__133;
memset(&i_247, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_245=self->size*2;
        items_246=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_245)), "./comelang.h", 2410, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_247=0;        i_247<self->size;        i_247++        ){
            self->items[i_247]=items_246[i_247];
        }
        self->size=new_size_245;
        come_free(items_246);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_248;
    if(    0) {
        for(        i_248=0;        i_248<self->len;        i_248++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_249;
struct vector$1double$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2283, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_249=0;    i_249<num_value;    i_249++    ){
        vector$1double$$p_add(self,values[i_249]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__137;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_250;
double* items_251;
void* __right_value152 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__136;
memset(&i_252, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_250=self->size*2;
        items_251=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_250)), "./comelang.h", 2410, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_252=0;        i_252<self->size;        i_252++        ){
            self->items[i_252]=items_251[i_252];
        }
        self->size=new_size_250;
        come_free(items_251);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_253;
    if(    0) {
        for(        i_253=0;        i_253<self->len;        i_253++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__175;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__175,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_287;
struct list_item$1char$ph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        come_call_finalizer3(prev_it_288,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_293;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_294;
char* __dec_obj22;
struct list$1char$ph* __result_obj__177;
    if(    self->len==0) {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1466, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj20=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1476, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj21=litem_293->item;
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1486, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj22=litem_294->item;
        litem_294->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_294;
        self->tail=litem_294;
    }
    self->len++;
    __result_obj__177 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sSemicolonNode* __result_obj__234;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__234 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__234,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value260 = (void*)0;
char* __result_obj__235;
    __result_obj__235 = come_increment_ref_count(((char*)(__right_value260=__builtin_string("sSemicolonNode"))));
    (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__235;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value261 = (void*)0;
struct sLambdaNode* __result_obj__236;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value261,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mFun=fun;
    __result_obj__236 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__236,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__236;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__237;
    __result_obj__237 = come_increment_ref_count(((char*)(__right_value262=__builtin_string("sLambdaNode"))));
    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__237 = come_decrement_ref_count(__result_obj__237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__237;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_347;
int block_level_348;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value265 = (void*)0;
char* __dec_obj23;
void* __right_value304 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__254;
    come_fun_347=info->come_fun;
    info->come_fun=self->mFun;
    block_level_348=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_348;
    come_value_349=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj23=come_value_349->c_value;
    come_value_349->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_349->type;
    come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_349->var=((void*)0);
    add_come_last_code(info,"%s",come_value_349->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_349));
    info->come_fun=come_fun_347;
    __result_obj__254 = (_Bool)1;
    come_call_finalizer3(come_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__238;
void* __right_value266 = (void*)0;
struct sType* result_354;
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
struct sType* __result_obj__252;
    if(    self==(void*)0) {
        __result_obj__238 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__238,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__238;
    }
    result_354=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_354->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_354->mOriginalLoadVarType;
        result_354->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_354->mChannelType;
        result_354->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_354->mGenericsTypes;
        result_354->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_354->mNoSolvedGenericsType;
        result_354->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_354->mAnyOriginalType;
        result_354->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_354->mSizeNum;
        result_354->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_354->mAlignas;
        result_354->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_354->mTupleName;
        result_354->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_354->mAttribute;
        result_354->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_354->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_354->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_354->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_354->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_354->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_354->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_354->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_354->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_354->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_354->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_354->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_354->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_354->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_354->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_354->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_354->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_354->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_354->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_354->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_354->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_354->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_354->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_354->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_354->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_354->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_354->mAsmName;
        result_354->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_354->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_354->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_354->mArrayNum;
        result_354->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_354->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_354->mOriginalTypeName;
        result_354->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_354->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_354->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_354->mParamTypes;
        result_354->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_354->mParamNames;
        result_354->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_354->mResultType;
        result_354->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mVarArgs=self->mVarArgs;
    }
    __result_obj__252 = come_increment_ref_count(result_354);
    come_call_finalizer3(result_354,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_350;
struct list_item$1sType$ph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_352;
struct list_item$1sNode$ph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__239;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sType$ph* result_355;
struct list_item$1sType$ph* it_356;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sType$ph* __result_obj__242;
    if(    self==((void*)0)) {
        __result_obj__239 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__239,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__239;
    }
    result_355=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1377, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_356=self->head;
    while(it_356!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_355,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_356->item)));
        }
        else {
            list$1sType$ph$p_add(result_355,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_356->item)));
        }
        it_356=it_356->next;
    }
    __result_obj__242 = come_increment_ref_count(result_355);
    come_call_finalizer3(result_355,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__242,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__240;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__240 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__240,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value271 = (void*)0;
struct list_item$1sType$ph* litem_357;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1sType$ph* litem_358;
struct sType* __dec_obj27;
void* __right_value273 = (void*)0;
struct list_item$1sType$ph* litem_359;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__241;
    if(    self->len==0) {
        litem_357=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value271=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1396, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=((void*)0);
        litem_357->next=((void*)0);
        __dec_obj26=litem_357->item;
        litem_357->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_357;
        self->head=litem_357;
    }
    else if(    self->len==1) {
        litem_358=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value272=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1406, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->head;
        litem_358->next=((void*)0);
        __dec_obj27=litem_358->item;
        litem_358->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_358;
        self->head->next=litem_358;
    }
    else {
        litem_359=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value273=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1416, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=self->tail;
        litem_359->next=((void*)0);
        __dec_obj28=litem_359->item;
        litem_359->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_359;
        self->tail=litem_359;
    }
    self->len++;
    __result_obj__241 = self;
    come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_360;
struct list_item$1sType$ph* prev_it_361;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__243;
void* __right_value279 = (void*)0;
struct sNode* result_362;
struct sNode* __result_obj__244;
    if(    self==(void*)0) {
        __result_obj__243 = come_increment_ref_count((void*)0);
        ((__result_obj__243) ? __result_obj__243 = come_decrement_ref_count(__result_obj__243, ((struct sNode*)__result_obj__243)->finalize, ((struct sNode*)__result_obj__243)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__243;
    }
    result_362=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_362->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_362->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_362->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_362->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_362->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_362->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_362->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_362->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_362->kind=self->kind;
    }
    __result_obj__244 = come_increment_ref_count(result_362);
    ((result_362) ? result_362 = come_decrement_ref_count(result_362, ((struct sNode*)result_362)->finalize, ((struct sNode*)result_362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__244;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__245;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* result_363;
struct list_item$1sNode$ph* it_364;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __result_obj__248;
    if(    self==((void*)0)) {
        __result_obj__245 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__245,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__245;
    }
    result_363=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1377, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_364=self->head;
    while(it_364!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_363,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_364->item)));
        }
        else {
            list$1sNode$ph$p_add(result_363,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_364->item)));
        }
        it_364=it_364->next;
    }
    __result_obj__248 = come_increment_ref_count(result_363);
    come_call_finalizer3(result_363,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__248,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__246;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__246 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__246,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_365;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_366;
struct sNode* __dec_obj38;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_367;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__247;
    if(    self->len==0) {
        litem_365=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1396, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_365->prev=((void*)0);
        litem_365->next=((void*)0);
        __dec_obj37=litem_365->item;
        litem_365->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_365;
        self->head=litem_365;
    }
    else if(    self->len==1) {
        litem_366=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1406, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=self->head;
        litem_366->next=((void*)0);
        __dec_obj38=litem_366->item;
        litem_366->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_366;
        self->head->next=litem_366;
    }
    else {
        litem_367=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1416, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=self->tail;
        litem_367->next=((void*)0);
        __dec_obj39=litem_367->item;
        litem_367->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail->next=litem_367;
        self->tail=litem_367;
    }
    self->len++;
    __result_obj__247 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__247;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_368;
struct list_item$1sNode$ph* prev_it_369;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        come_call_finalizer3(prev_it_369,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__249;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* result_370;
struct list_item$1char$ph* it_371;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1char$ph* __result_obj__251;
    if(    self==((void*)0)) {
        __result_obj__249 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__249,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__249;
    }
    result_370=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1377, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_371=self->head;
    while(it_371!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_370,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_371->item)));
        }
        else {
            list$1char$ph$p_add(result_370,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_371->item)));
        }
        it_371=it_371->next;
    }
    __result_obj__251 = come_increment_ref_count(result_370);
    come_call_finalizer3(result_370,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__251,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_372;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_373;
char* __dec_obj44;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_374;
char* __dec_obj45;
struct list$1char$ph* __result_obj__250;
    if(    self->len==0) {
        litem_372=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1396, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj43=litem_372->item;
        litem_372->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1406, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj44=litem_373->item;
        litem_373->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1416, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj45=litem_374->item;
        litem_374->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result_obj__250 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__250;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_375;
struct list_item$1char$ph* prev_it_376;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        come_call_finalizer3(prev_it_376,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_377;
struct CVALUE* __dec_obj49;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_378;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_379;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__253;
    if(    self->len==0) {
        litem_377=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1466, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=((void*)0);
        litem_377->next=((void*)0);
        __dec_obj49=litem_377->item;
        litem_377->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_377;
        self->head=litem_377;
    }
    else if(    self->len==1) {
        litem_378=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1476, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->head;
        litem_378->next=((void*)0);
        __dec_obj50=litem_378->item;
        litem_378->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_378;
        self->head->next=litem_378;
    }
    else {
        litem_379=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1486, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=self->tail;
        litem_379->next=((void*)0);
        __dec_obj51=litem_379->item;
        litem_379->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_379;
        self->tail=litem_379;
    }
    self->len++;
    __result_obj__253 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value308 = (void*)0;
struct sFun* __dec_obj52;
struct sFunNode* __result_obj__255;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value308,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj52=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj52,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__255 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__255,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__256;
    __result_obj__256 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sFunNode"))));
    (__right_value309 = come_decrement_ref_count(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__256 = come_decrement_ref_count(__result_obj__256, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__256;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_380;
int block_level_381;
void* __right_value310 = (void*)0;
    come_fun_380=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_381=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_381;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value310=xsprintf("come_heap_final();\n"))));
            (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_380;
    return (_Bool)1;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer3(self->mFun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sBlock* result_382;
int sline_top_383;
int block_level_384;
char* p_saved_385;
int sline_saved_386;
char* sname_saved_387;
void* __right_value313 = (void*)0;
char* __dec_obj53;
char* __dec_obj54;
struct map$2char$phchar$ph* __dec_obj55;
char* p_390;
int sline_391;
void* __right_value314 = (void*)0;
char* sname_392;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* module_name_393;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1char$ph* params_394;
void* __right_value319 = (void*)0;
char* word_395;
void* __right_value320 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_396=0;
char* Err_397=0;
void* __right_value321 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_398=0;
char* Err_399=0;
void* __right_value322 = (void*)0;
char* __dec_obj56;
void* __right_value323 = (void*)0;
char* __dec_obj57;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
_Bool _if_conditional1;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_403=0;
char* Err_404=0;
struct sBlock* __result_obj__261;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sClassModule* module_405;
void* __right_value329 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_406=0;
char* Err_407=0;
void* __right_value330 = (void*)0;
void* __right_value336 = (void*)0;
struct map$2char$phchar$ph* __dec_obj59;
int i_413;
struct list$1char$ph* o2_saved_414;
char* it_417;
void* __right_value337 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* __dec_obj60;
void* __right_value346 = (void*)0;
struct sNode* node_464;
void* __right_value347 = (void*)0;
char* __dec_obj61;
void* __right_value348 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_465=0;
char* Err_466=0;
_Bool omit_semicolon_470;
void* __right_value352 = (void*)0;
char* __dec_obj65;
char* head_485;
void* __right_value353 = (void*)0;
struct sNode* value_486;
char* tail_487;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* node_489;
void* __right_value357 = (void*)0;
char* __dec_obj67;
struct sNode* node_490;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value363 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value364 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_492=0;
char* Err_493=0;
_Bool omit_semicolon_494;
char* p_495;
char* head_496;
void* __right_value365 = (void*)0;
char* source_497;
void* __right_value366 = (void*)0;
struct sNode* node_498;
void* __right_value367 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_499=0;
char* Err_500=0;
struct sBlock* __result_obj__299;
node_490 = (void*)0;
    result_382=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 117, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_383=info->sline_top;
    info->sline_top=info->sline;
    block_level_384=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_385=((void*)0);
        sline_saved_386=0;
        sname_saved_387=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_385) {
                if(                *info->p==0) {
                    info->p=p_saved_385;
                    info->sline=sline_saved_386;
                    __dec_obj53=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_387));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_385=((void*)0);
                    sline_saved_386=0;
                    __dec_obj54=sname_saved_387;
                    sname_saved_387=((void*)0);
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj55=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj55,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            p_390=info->p;
            sline_391=info->sline;
            sname_392=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_391;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value315=parse_word(info)));
                (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_393=(char*)come_increment_ref_count(parse_word(info));
                params_394=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 173, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_395=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_394,(char*)come_increment_ref_count(word_395));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value320=err_msg(info,"invalid source end")));
                            come_exception_var_c1_396=multiple_assign_var1->v1;
                            Err_397=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_397)?(puts(Err_397),exit(0)):(0));
                            come_call_finalizer3(__right_value320,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_397 = come_decrement_ref_count(Err_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_395 = come_decrement_ref_count(word_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value321=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_398=multiple_assign_var2->v1;
                            Err_399=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_399)?(puts(Err_399),exit(0)):(0));
                            come_call_finalizer3(__right_value321,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_399 = come_decrement_ref_count(Err_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_395 = come_decrement_ref_count(word_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_385=info->p;
                sline_saved_386=info->sline;
                __dec_obj56=sname_saved_387;
                sname_saved_387=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj57=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_393));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value325=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value324=__builtin_string(module_name_393))))))==((void*)0))),                (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value325,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"module not found")));
                    come_exception_var_c3_403=multiple_assign_var3->v1;
                    Err_404=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_404)?(puts(Err_404),exit(0)):(0));
                    come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__261 = come_increment_ref_count(((void*)0));
                    (Err_404 = come_decrement_ref_count(Err_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_393 = come_decrement_ref_count(module_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_394,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_392 = come_decrement_ref_count(sname_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_387 = come_decrement_ref_count(sname_saved_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_382,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__261,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__261;
                    (Err_404 = come_decrement_ref_count(Err_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_405=((struct sClassModule*)(__right_value328=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value327=__builtin_string(module_name_393))))));
                (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value328,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph$p_length(module_405->mParams)!=list$1char$ph$p_length(params_394)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value329=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_406=multiple_assign_var4->v1;
                    Err_407=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_407)?(puts(Err_407),exit(0)):(0));
                    come_call_finalizer3(__right_value329,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_407 = come_decrement_ref_count(Err_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj59=info->module_params;
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 227, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj59,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_413=0;
                for(                o2_saved_414=(struct list$1char$ph*)come_increment_ref_count((module_405->mParams)),it_417=list$1char$ph$p_begin((o2_saved_414));                !list$1char$ph$p_end((o2_saved_414));                it_417=list$1char$ph$p_next((o2_saved_414))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_417)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value343=list$1char$ph$p_operator_load_element(params_394,i_413))))));
                    (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_413++;
                }
                come_call_finalizer3(o2_saved_414,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_405->mText;
                info->sline=module_405->mSLine;
                __dec_obj60=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_405->mSName));
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_393 = come_decrement_ref_count(module_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_394,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            node_464=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj61=info->sname;
            info->sname=(char*)come_increment_ref_count(node_464->sname(node_464->_protocol_obj));
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=node_464->sline(node_464->_protocol_obj);
            if(            node_464==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value348=err_msg(info,"Invalid expression")));
                come_exception_var_c5_465=multiple_assign_var5->v1;
                Err_466=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_466)?(puts(Err_466),exit(0)):(0));
                come_call_finalizer3(__right_value348,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_466 = come_decrement_ref_count(Err_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_382->mNodes,(struct sNode*)come_increment_ref_count(node_464));
            parse_sharp_v5(info);
            if(            node_464->terminated(node_464->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_470=(_Bool)1;
            if(            node_464->terminated(node_464->_protocol_obj)) {
                omit_semicolon_470=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_470=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_382->mOmitSemicolon=omit_semicolon_470;
                if(                omit_semicolon_470&&in_function) {
                    list$1sNode$ph$p_delete(result_382->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_390;
                    info->sline=sline_391;
                    __dec_obj65=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_392));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    head_485=info->p;
                    value_486=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_487=info->p;
                    __dec_obj66=value_486;
                    value_486=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_486),info));
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
                    char buf_488[tail_487-head_485+1];
                    memset(&buf_488, 0, sizeof(char)                    *(tail_487-head_485+1)                    );
                    memcpy(buf_488,head_485,tail_487-head_485);
                    buf_488[tail_487-head_485]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_489=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_486),(char*)come_increment_ref_count(__builtin_string(buf_488)),info));
                    list$1sNode$ph$p_push_back(result_382->mNodes,(struct sNode*)come_increment_ref_count(node_489));
                    ((value_486) ? value_486 = come_decrement_ref_count(value_486, ((struct sNode*)value_486)->finalize, ((struct sNode*)value_486)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_489) ? node_489 = come_decrement_ref_count(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_392 = come_decrement_ref_count(sname_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_464) ? node_464 = come_decrement_ref_count(node_464, ((struct sNode*)node_464)->finalize, ((struct sNode*)node_464)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_486) ? value_486 = come_decrement_ref_count(value_486, ((struct sNode*)value_486)->finalize, ((struct sNode*)value_486)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_489) ? node_489 = come_decrement_ref_count(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_392 = come_decrement_ref_count(sname_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_464) ? node_464 = come_decrement_ref_count(node_464, ((struct sNode*)node_464)->finalize, ((struct sNode*)node_464)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_392 = come_decrement_ref_count(sname_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_464) ? node_464 = come_decrement_ref_count(node_464, ((struct sNode*)node_464)->finalize, ((struct sNode*)node_464)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_385) {
            if(            info->p==0) {
                info->p=p_saved_385;
                info->sline=sline_saved_386;
                __dec_obj67=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_387));
                __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_385=((void*)0);
                sline_saved_386=0;
            }
        }
        (sname_saved_387 = come_decrement_ref_count(sname_saved_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 331, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value359=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 331, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj69=node_490;
            node_490=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            come_call_finalizer3(__right_value359,sSemicolonNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1sNode$ph$p_push_back(result_382->mNodes,(struct sNode*)come_increment_ref_count(node_490));
        }
        else {
            __dec_obj70=node_490;
            node_490=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            parse_sharp_v5(info);
            if(            node_490==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value364=err_msg(info,"Invalid expression")));
                come_exception_var_c6_492=multiple_assign_var6->v1;
                Err_493=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_493)?(puts(Err_493),exit(0)):(0));
                come_call_finalizer3(__right_value364,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_493 = come_decrement_ref_count(Err_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_490->terminated(node_490->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_494=(_Bool)1;
            if(            node_490->terminated(node_490->_protocol_obj)) {
                omit_semicolon_494=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_494=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_382->mOmitSemicolon=omit_semicolon_494;
            list$1sNode$ph$p_push_back(result_382->mNodes,(struct sNode*)come_increment_ref_count(node_490));
        }
        ((node_490) ? node_490 = come_decrement_ref_count(node_490, ((struct sNode*)node_490)->finalize, ((struct sNode*)node_490)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_495=info->p;
        head_496=info->head;
        source_497=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_497;
        info->head=source_497;
        node_498=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_498==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value367=err_msg(info,"Invalid expression")));
            come_exception_var_c7_499=multiple_assign_var7->v1;
            Err_500=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_500)?(puts(Err_500),exit(0)):(0));
            come_call_finalizer3(__right_value367,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_500 = come_decrement_ref_count(Err_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_382->mNodes,(struct sNode*)come_increment_ref_count(node_498));
        info->p=p_495;
        info->head=head_496;
        (source_497 = come_decrement_ref_count(source_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_498) ? node_498 = come_decrement_ref_count(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_384;
    __result_obj__299 = come_increment_ref_count(result_382);
    come_call_finalizer3(result_382,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__299,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_388;
int i_389;
    for(    i_388=0;    i_388<self->size;    i_388++    ){
        if(        self->item_existance[i_388]) {
            if(            1) {
                (self->items[i_388] = come_decrement_ref_count(self->items[i_388], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_389=0;    i_389<self->size;    i_389++    ){
        if(        self->item_existance[i_389]) {
            if(            1) {
                (self->keys[i_389] = come_decrement_ref_count(self->keys[i_389], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_400;
unsigned int hash_401;
unsigned int it_402;
struct sClassModule* __result_obj__257;
struct sClassModule* __result_obj__258;
struct sClassModule* __result_obj__259;
struct sClassModule* __result_obj__260;
default_value_400 = (void*)0;
    memset(&default_value_400,0,sizeof(struct sClassModule*));
    hash_401=string_get_hash_key(((char*)key))%self->size;
    it_402=hash_401;
    while((_Bool)1) {
        if(        self->item_existance[it_402]) {
            if(            string_equals(self->keys[it_402],key)) {
                __result_obj__257 = come_increment_ref_count(self->items[it_402]);
                come_call_finalizer3(default_value_400,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__257,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__257;
            }
            it_402++;
            if(            it_402>=self->size) {
                it_402=0;
            }
            else if(            it_402==hash_401) {
                __result_obj__258 = come_increment_ref_count(default_value_400);
                come_call_finalizer3(default_value_400,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__258,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__258;
            }
        }
        else {
            __result_obj__259 = come_increment_ref_count(default_value_400);
            come_call_finalizer3(default_value_400,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__259,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__259;
        }
    }
    __result_obj__260 = come_increment_ref_count(default_value_400);
    come_call_finalizer3(default_value_400,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__260,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self){
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
int i_408;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct list$1char$p* __dec_obj58;
struct map$2char$phchar$ph* __result_obj__263;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value331=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2672, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value332=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2673, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value333=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2674, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_408=0;    i_408<128;    i_408++    ){
        self->item_existance[i_408]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj58=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2684, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj58,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__263 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__263,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__262;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__262 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__262,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_409;
struct list_item$1char$p* prev_it_410;
    it_409=self->head;
    while(it_409!=((void*)0)) {
        prev_it_410=it_409;
        it_409=it_409->next;
        come_call_finalizer3(prev_it_410,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_411;
int i_412;
    for(    i_411=0;    i_411<self->size;    i_411++    ){
        if(        self->item_existance[i_411]) {
            if(            1) {
                (self->items[i_411] = come_decrement_ref_count(self->items[i_411], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_412=0;    i_412<self->size;    i_412++    ){
        if(        self->item_existance[i_412]) {
            if(            1) {
                (self->keys[i_412] = come_decrement_ref_count(self->keys[i_412], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_415;
char* __result_obj__264;
char* __result_obj__265;
char* result_416;
char* __result_obj__266;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_415,0,sizeof(char*));
        __result_obj__264 = result_415;
        return __result_obj__264;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__265 = self->it->item;
        return __result_obj__265;
    }
    memset(&result_416,0,sizeof(char*));
    __result_obj__266 = result_416;
    return __result_obj__266;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_418;
char* __result_obj__267;
char* __result_obj__268;
char* result_419;
char* __result_obj__269;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_418,0,sizeof(char*));
        __result_obj__267 = result_418;
        return __result_obj__267;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__268 = self->it->item;
        return __result_obj__268;
    }
    memset(&result_419,0,sizeof(char*));
    __result_obj__269 = result_419;
    return __result_obj__269;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph$p_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_437;
unsigned int it_438;
_Bool same_key_exist_455;
char* it2_458;
struct map$2char$phchar$ph* __result_obj__290;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph$p_rehash(self);
    }
    hash_437=string_get_hash_key(((char*)key))%self->size;
    it_438=hash_437;
    while((_Bool)1) {
        if(        self->item_existance[it_438]) {
            if(            string_equals(self->keys[it_438],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_438]);
                    (self->keys[it_438] = come_decrement_ref_count(self->keys[it_438], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_438]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_438]);
                    self->keys[it_438]=key;
                }
                if(                1) {
                    (self->items[it_438] = come_decrement_ref_count(self->items[it_438], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_438]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_438]=item;
                }
                break;
            }
            it_438++;
            if(            it_438>=self->size) {
                it_438=0;
            }
            else if(            it_438==hash_437) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_438]=(_Bool)1;
            if(            1) {
                self->keys[it_438]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_438]=key;
            }
            if(            1) {
                self->items[it_438]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_438]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_455=(_Bool)0;
    for(    it2_458=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_458=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_458,key)) {
            same_key_exist_455=(_Bool)1;
        }
    }
    if(    !same_key_exist_455) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__290 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__290;
}

static void map$2char$phchar$ph$p_rehash(struct map$2char$phchar$ph* self){
int size_420;
void* __right_value338 = (void*)0;
char** keys_421;
void* __right_value339 = (void*)0;
char** items_422;
void* __right_value340 = (void*)0;
_Bool* item_existance_423;
int len_424;
char* it_427;
char* default_value_430;
void* __right_value341 = (void*)0;
char* it2_431;
unsigned int hash_434;
int n_435;
char* default_value_436;
void* __right_value342 = (void*)0;
default_value_430 = (void*)0;
default_value_436 = (void*)0;
    size_420=self->size*10;
    keys_421=(char**)come_increment_ref_count(((char**)(__right_value338=(char**)come_calloc(1, sizeof(char*)*(1*(size_420)), "./comelang.h", 2911, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_422=(char**)come_increment_ref_count(((char**)(__right_value339=(char**)come_calloc(1, sizeof(char*)*(1*(size_420)), "./comelang.h", 2912, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_423=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value340=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_420)), "./comelang.h", 2913, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_424=0;
    for(    it_427=map$2char$phchar$ph$p_begin(self);    !map$2char$phchar$ph$p_end(self);    it_427=map$2char$phchar$ph$p_next(self)    ){
        memset(&default_value_430,0,sizeof(char*));
        it2_431=((char*)(__right_value341=map$2char$phchar$ph$p_at(self,it_427,(char*)come_increment_ref_count(default_value_430))));
        (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_434=string_get_hash_key(((char*)it_427))%size_420;
        n_435=hash_434;
        while((_Bool)1) {
            if(            item_existance_423[n_435]) {
                n_435++;
                if(                n_435>=size_420) {
                    n_435=0;
                }
                else if(                n_435==hash_434) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_423[n_435]=(_Bool)1;
                keys_421[n_435]=it_427;
                items_422[n_435]=((char*)(__right_value342=map$2char$phchar$ph$p_at(self,it_427,(char*)come_increment_ref_count(default_value_436))));
                (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_424++;
                (default_value_436 = come_decrement_ref_count(default_value_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_436 = come_decrement_ref_count(default_value_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_430 = come_decrement_ref_count(default_value_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_421;
    self->items=items_422;
    self->item_existance=item_existance_423;
    self->size=size_420;
    self->len=len_424;
}

static char* map$2char$phchar$ph$p_begin(struct map$2char$phchar$ph* self){
char* result_425;
char* __result_obj__270;
char* __result_obj__271;
char* result_426;
char* __result_obj__272;
result_425 = (void*)0;
result_426 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_425,0,sizeof(char*));
        __result_obj__270 = result_425;
        return __result_obj__270;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__271 = self->key_list->it->item;
        return __result_obj__271;
    }
    memset(&result_426,0,sizeof(char*));
    __result_obj__272 = result_426;
    return __result_obj__272;
}

static _Bool map$2char$phchar$ph$p_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph$p_next(struct map$2char$phchar$ph* self){
char* result_428;
char* __result_obj__273;
char* __result_obj__274;
char* result_429;
char* __result_obj__275;
result_428 = (void*)0;
result_429 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_428,0,sizeof(char*));
        __result_obj__273 = result_428;
        return __result_obj__273;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__274 = self->key_list->it->item;
        return __result_obj__274;
    }
    memset(&result_429,0,sizeof(char*));
    __result_obj__275 = result_429;
    return __result_obj__275;
}

static char* map$2char$phchar$ph$p_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_432;
unsigned int it_433;
char* __result_obj__276;
char* __result_obj__277;
char* __result_obj__278;
char* __result_obj__279;
    hash_432=string_get_hash_key(((char*)key))%self->size;
    it_433=hash_432;
    while((_Bool)1) {
        if(        self->item_existance[it_433]) {
            if(            string_equals(self->keys[it_433],key)) {
                __result_obj__276 = come_increment_ref_count(self->items[it_433]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__276 = come_decrement_ref_count(__result_obj__276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__276;
            }
            it_433++;
            if(            it_433>=self->size) {
                it_433=0;
            }
            else if(            it_433==hash_432) {
                __result_obj__277 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__277 = come_decrement_ref_count(__result_obj__277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__277;
            }
        }
        else {
            __result_obj__278 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__278 = come_decrement_ref_count(__result_obj__278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__278;
        }
    }
    __result_obj__279 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__279 = come_decrement_ref_count(__result_obj__279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__279;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_439;
struct list_item$1char$p* it_440;
struct list$1char$p* __result_obj__283;
    it2_439=0;
    it_440=self->head;
    while(it_440!=((void*)0)) {
        if(        charp_equals(it_440->item,item)) {
            list$1char$p$p_delete(self,it2_439,it2_439+1);
            break;
        }
        it2_439++;
        it_440=it_440->next;
    }
    __result_obj__283 = self;
    return __result_obj__283;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_441;
struct list$1char$p* __result_obj__280;
struct list_item$1char$p* it_444;
int i_445;
struct list_item$1char$p* prev_it_446;
struct list_item$1char$p* it_447;
int i_448;
struct list_item$1char$p* prev_it_449;
struct list_item$1char$p* it_450;
struct list_item$1char$p* head_prev_it_451;
struct list_item$1char$p* tail_it_452;
int i_453;
struct list_item$1char$p* prev_it_454;
struct list$1char$p* __result_obj__282;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_441=tail;
        tail=head;
        head=tmp_441;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__280 = self;
        return __result_obj__280;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_444=self->head;
        i_445=0;
        while(it_444!=((void*)0)) {
            if(            i_445<tail) {
                prev_it_446=it_444;
                it_444=it_444->next;
                i_445++;
                come_call_finalizer3(prev_it_446,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_445==tail) {
                self->head=it_444;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_444=it_444->next;
                i_445++;
            }
        }
    }
    else if(    tail==self->len) {
        it_447=self->head;
        i_448=0;
        while(it_447!=((void*)0)) {
            if(            i_448==head) {
                self->tail=it_447->prev;
                self->tail->next=((void*)0);
            }
            if(            i_448>=head) {
                prev_it_449=it_447;
                it_447=it_447->next;
                i_448++;
                come_call_finalizer3(prev_it_449,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_447=it_447->next;
                i_448++;
            }
        }
    }
    else {
        it_450=self->head;
        head_prev_it_451=((void*)0);
        tail_it_452=((void*)0);
        i_453=0;
        while(it_450!=((void*)0)) {
            if(            i_453==head) {
                head_prev_it_451=it_450->prev;
            }
            if(            i_453==tail) {
                tail_it_452=it_450;
            }
            if(            i_453>=head&&i_453<tail) {
                prev_it_454=it_450;
                it_450=it_450->next;
                i_453++;
                come_call_finalizer3(prev_it_454,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_450=it_450->next;
                i_453++;
            }
        }
        if(        head_prev_it_451!=((void*)0)) {
            head_prev_it_451->next=tail_it_452;
        }
        if(        tail_it_452!=((void*)0)) {
            tail_it_452->prev=head_prev_it_451;
        }
    }
    __result_obj__282 = self;
    return __result_obj__282;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_442;
struct list_item$1char$p* prev_it_443;
struct list$1char$p* __result_obj__281;
    it_442=self->head;
    while(it_442!=((void*)0)) {
        prev_it_443=it_442;
        it_442=it_442->next;
        come_call_finalizer3(prev_it_443,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__281 = self;
    return __result_obj__281;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_456;
char* __result_obj__284;
char* __result_obj__285;
char* result_457;
char* __result_obj__286;
result_456 = (void*)0;
result_457 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_456,0,sizeof(char*));
        __result_obj__284 = result_456;
        return __result_obj__284;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__285 = self->it->item;
        return __result_obj__285;
    }
    memset(&result_457,0,sizeof(char*));
    __result_obj__286 = result_457;
    return __result_obj__286;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_459;
char* __result_obj__287;
char* __result_obj__288;
char* result_460;
char* __result_obj__289;
result_459 = (void*)0;
result_460 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_459,0,sizeof(char*));
        __result_obj__287 = result_459;
        return __result_obj__287;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__288 = self->it->item;
        return __result_obj__288;
    }
    memset(&result_460,0,sizeof(char*));
    __result_obj__289 = result_460;
    return __result_obj__289;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_461;
int i_462;
char* __result_obj__291;
char* default_value_463;
char* __result_obj__292;
default_value_463 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_461=self->head;
    i_462=0;
    while(it_461!=((void*)0)) {
        if(        position==i_462) {
            __result_obj__291 = come_increment_ref_count(it_461->item);
            (__result_obj__291 = come_decrement_ref_count(__result_obj__291, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__291;
        }
        it_461=it_461->next;
        i_462++;
    }
    memset(&default_value_463,0,sizeof(char*));
    __result_obj__292 = come_increment_ref_count(default_value_463);
    (default_value_463 = come_decrement_ref_count(default_value_463, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__292 = come_decrement_ref_count(__result_obj__292, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__292;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value349 = (void*)0;
struct list_item$1sNode$ph* litem_467;
struct sNode* __dec_obj62;
void* __right_value350 = (void*)0;
struct list_item$1sNode$ph* litem_468;
struct sNode* __dec_obj63;
void* __right_value351 = (void*)0;
struct list_item$1sNode$ph* litem_469;
struct sNode* __dec_obj64;
struct list$1sNode$ph* __result_obj__293;
    if(    self->len==0) {
        litem_467=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value349=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1466, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_467->prev=((void*)0);
        litem_467->next=((void*)0);
        __dec_obj62=litem_467->item;
        litem_467->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_467;
        self->head=litem_467;
    }
    else if(    self->len==1) {
        litem_468=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value350=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1476, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_468->prev=self->head;
        litem_468->next=((void*)0);
        __dec_obj63=litem_468->item;
        litem_468->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_468;
        self->head->next=litem_468;
    }
    else {
        litem_469=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value351=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1486, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_469->prev=self->tail;
        litem_469->next=((void*)0);
        __dec_obj64=litem_469->item;
        litem_469->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail->next=litem_469;
        self->tail=litem_469;
    }
    self->len++;
    __result_obj__293 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__293;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_471;
struct list$1sNode$ph* __result_obj__294;
struct list_item$1sNode$ph* it_474;
int i_475;
struct list_item$1sNode$ph* prev_it_476;
struct list_item$1sNode$ph* it_477;
int i_478;
struct list_item$1sNode$ph* prev_it_479;
struct list_item$1sNode$ph* it_480;
struct list_item$1sNode$ph* head_prev_it_481;
struct list_item$1sNode$ph* tail_it_482;
int i_483;
struct list_item$1sNode$ph* prev_it_484;
struct list$1sNode$ph* __result_obj__296;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_471=tail;
        tail=head;
        head=tmp_471;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__294 = self;
        return __result_obj__294;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph$p_reset(self);
    }
    else if(    head==0) {
        it_474=self->head;
        i_475=0;
        while(it_474!=((void*)0)) {
            if(            i_475<tail) {
                prev_it_476=it_474;
                it_474=it_474->next;
                i_475++;
                come_call_finalizer3(prev_it_476,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_475==tail) {
                self->head=it_474;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_474=it_474->next;
                i_475++;
            }
        }
    }
    else if(    tail==self->len) {
        it_477=self->head;
        i_478=0;
        while(it_477!=((void*)0)) {
            if(            i_478==head) {
                self->tail=it_477->prev;
                self->tail->next=((void*)0);
            }
            if(            i_478>=head) {
                prev_it_479=it_477;
                it_477=it_477->next;
                i_478++;
                come_call_finalizer3(prev_it_479,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_477=it_477->next;
                i_478++;
            }
        }
    }
    else {
        it_480=self->head;
        head_prev_it_481=((void*)0);
        tail_it_482=((void*)0);
        i_483=0;
        while(it_480!=((void*)0)) {
            if(            i_483==head) {
                head_prev_it_481=it_480->prev;
            }
            if(            i_483==tail) {
                tail_it_482=it_480;
            }
            if(            i_483>=head&&i_483<tail) {
                prev_it_484=it_480;
                it_480=it_480->next;
                i_483++;
                come_call_finalizer3(prev_it_484,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_480=it_480->next;
                i_483++;
            }
        }
        if(        head_prev_it_481!=((void*)0)) {
            head_prev_it_481->next=tail_it_482;
        }
        if(        tail_it_482!=((void*)0)) {
            tail_it_482->prev=head_prev_it_481;
        }
    }
    __result_obj__296 = self;
    return __result_obj__296;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_472;
struct list_item$1sNode$ph* prev_it_473;
struct list$1sNode$ph* __result_obj__295;
    it_472=self->head;
    while(it_472!=((void*)0)) {
        prev_it_473=it_472;
        it_472=it_472->next;
        come_call_finalizer3(prev_it_473,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__295 = self;
    return __result_obj__295;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__297;
void* __right_value360 = (void*)0;
struct sSemicolonNode* result_491;
void* __right_value361 = (void*)0;
char* __dec_obj68;
struct sSemicolonNode* __result_obj__298;
    if(    self==(void*)0) {
        __result_obj__297 = (void*)0;
        return __result_obj__297;
    }
    result_491=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_491->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj68=result_491->sname;
        result_491->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_491->sline_real=self->sline_real;
    }
    __result_obj__298 = result_491;
    come_call_finalizer3(result_491,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_501;
struct sVarTable* old_table_502;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sVarTable* __dec_obj71;
struct sVarTable* current_loop_vtable_503;
int i_504;
struct list$1char$ph* o2_saved_505;
char* name_506;
void* __right_value370 = (void*)0;
struct sType* type_507;
void* __right_value371 = (void*)0;
int block_level_511;
int i_512;
struct list$1sNode$ph* o2_saved_513;
struct sNode* node_516;
struct list$1sRightValueObject$ph* right_value_objects_519;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj72;
char* __dec_obj73;
char* __dec_obj74;
int stack_num_before_524;
int sline_525;
void* __right_value374 = (void*)0;
char* sname_526;
void* __right_value375 = (void*)0;
char* __dec_obj75;
_Bool Value_527;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_528;
void* __right_value382 = (void*)0;
struct CVALUE* come_value2_529;
void* __right_value383 = (void*)0;
char* __dec_obj80;
void* __right_value384 = (void*)0;
struct CVALUE* come_value2_531;
struct sVar* var__532;
void* __right_value385 = (void*)0;
struct CVALUE* come_value3_533;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_558=0;
char* Err_559=0;
_Bool _if_conditional2;
int __result_obj__311;
void* __right_value388 = (void*)0;
struct sType* __dec_obj81;
void* __right_value389 = (void*)0;
char* c_value_560;
void* __right_value390 = (void*)0;
char* __dec_obj82;
void* __right_value391 = (void*)0;
char* __dec_obj83;
void* __right_value392 = (void*)0;
char* __dec_obj84;
_Bool Value_561;
void* __right_value393 = (void*)0;
char* __dec_obj85;
struct list$1sRightValueObject$ph* __dec_obj86;
void* __if_result__0_564 = (void*)0;
struct list$1sVar$ph* o2_saved_565;
struct sVar* it_568;
void* __right_value394 = (void*)0;
struct list$1sVar$ph* __dec_obj87;
memset(&i_504, 0, sizeof(int));
memset(&i_512, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_501=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_502=info->lv_table;
    if(    !no_var_table) {
        __dec_obj71=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 405, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,old_table_502));
        come_call_finalizer3(__dec_obj71,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_503=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_505=(param_names),name_506=list$1char$ph$p_begin((o2_saved_505));        !list$1char$ph$p_end((o2_saved_505));        name_506=list$1char$ph$p_next((o2_saved_505))        ){
            type_507=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types,i_504));
            type_507->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_506,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_507)),info,(_Bool)1);
            i_504++;
            come_call_finalizer3(type_507,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    block_level_511=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_513=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_516=list$1sNode$ph$p_begin((o2_saved_513));        !list$1sNode$ph$p_end((o2_saved_513));        node_516=list$1sNode$ph$p_next((o2_saved_513))        ){
            right_value_objects_519=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj72=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 435, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj72,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj73=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj74=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            stack_num_before_524=list$1CVALUE$ph$p_length(info->stack);
            sline_525=info->sline;
            sname_526=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_516->sline(node_516->_protocol_obj);
            __dec_obj75=info->sname;
            info->sname=(char*)come_increment_ref_count(node_516->sname(node_516->_protocol_obj));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            i_512==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_527=node_compile(node_516,info);
                if(                !Value_527) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_524+1) {
                    come_value_528=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_528->type->mClass->mName,"void")&&come_value_528->type->mPointerNum==0) {
                        come_value2_529=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_528));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_529));
                        __dec_obj80=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_529->c_value));
                        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        come_call_finalizer3(come_value2_529,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        come_value2_531=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_528));
                        var__532=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__532) {
                            come_value3_533=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 470, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__532->mType->mClass=="void"&&var__532->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value387=check_assign_type("invalid if result value",var__532->mType,((struct sType*)(__right_value386=come_call_cloner(sType_clone, come_value_528->type))),come_value3_533,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_558=multiple_assign_var8->v1;
                                Err_559=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_559)),                                come_call_finalizer3(__right_value386,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                come_call_finalizer3(__right_value387,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                _if_conditional2) {
                                    __result_obj__311 = (_Bool)1;
                                    (Err_559 = come_decrement_ref_count(Err_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_533,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    come_call_finalizer3(come_value2_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    come_call_finalizer3(come_value_528,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    come_call_finalizer3(right_value_objects_519,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    (sname_526 = come_decrement_ref_count(sname_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_513,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    return __result_obj__311;
                                }
                                else {
                                }
                                (Err_559 = come_decrement_ref_count(Err_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj81=var__532->mType;
                            var__532->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_528->type));
                            come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_528->type->mHeap) {
                                c_value_560=(char*)come_increment_ref_count(increment_ref_count_object(come_value_528->type,come_value_528->c_value,info));
                                __dec_obj82=come_value2_531->c_value;
                                come_value2_531->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__532->mCValueName,c_value_560));
                                __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                (c_value_560 = come_decrement_ref_count(c_value_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj83=come_value2_531->c_value;
                                come_value2_531->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__532->mCValueName,come_value_528->c_value));
                                __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            come_call_finalizer3(come_value3_533,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_531));
                        __dec_obj84=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_531->c_value));
                        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        come_call_finalizer3(come_value2_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    come_call_finalizer3(come_value_528,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            else {
                Value_561=node_compile(node_516,info);
                if(                !Value_561) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_525;
            __dec_obj85=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_526));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_524);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph$p_reset(info->right_value_objects);
            }
            __dec_obj86=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_519);
            come_call_finalizer3(__dec_obj86,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_512++;
            come_call_finalizer3(right_value_objects_519,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_526 = come_decrement_ref_count(sname_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_513,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_511==0) {
            for(            o2_saved_565=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_568=list$1sVar$ph$p_begin((o2_saved_565));            !list$1sVar$ph$p_end((o2_saved_565));            it_568=list$1sVar$ph$p_next((o2_saved_565))            ){
                free_object(((struct sType*)(__right_value394=come_call_cloner(sType_clone, it_568->mType))),it_568->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value394,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_565,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj87=info->match_it_var;
            __if_result__0_564=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj87,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_564,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->lv_table=old_table_502;
    info->block_level=block_level_511;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_503;
    info->inhibits_output_code=inhibits_output_code_501;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_508;
int i_509;
struct sType* __result_obj__300;
struct sType* default_value_510;
struct sType* __result_obj__301;
default_value_510 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_508=self->head;
    i_509=0;
    while(it_508!=((void*)0)) {
        if(        position==i_509) {
            __result_obj__300 = come_increment_ref_count(it_508->item);
            come_call_finalizer3(__result_obj__300,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__300;
        }
        it_508=it_508->next;
        i_509++;
    }
    memset(&default_value_510,0,sizeof(struct sType*));
    __result_obj__301 = come_increment_ref_count(default_value_510);
    come_call_finalizer3(default_value_510,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__301,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_514;
struct sNode* __result_obj__302;
struct sNode* __result_obj__303;
struct sNode* result_515;
struct sNode* __result_obj__304;
result_514 = (void*)0;
result_515 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_514,0,sizeof(struct sNode*));
        __result_obj__302 = result_514;
        return __result_obj__302;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__303 = self->it->item;
        return __result_obj__303;
    }
    memset(&result_515,0,sizeof(struct sNode*));
    __result_obj__304 = result_515;
    return __result_obj__304;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_517;
struct sNode* __result_obj__305;
struct sNode* __result_obj__306;
struct sNode* result_518;
struct sNode* __result_obj__307;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_517,0,sizeof(struct sNode*));
        __result_obj__305 = result_517;
        return __result_obj__305;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__306 = self->it->item;
        return __result_obj__306;
    }
    memset(&result_518,0,sizeof(struct sNode*));
    __result_obj__307 = result_518;
    return __result_obj__307;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__308;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__308 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__308,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_520;
struct list_item$1sRightValueObject$ph* prev_it_521;
    it_520=self->head;
    while(it_520!=((void*)0)) {
        prev_it_521=it_520;
        it_520=it_520->next;
        come_call_finalizer3(prev_it_521,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_522;
struct list_item$1sRightValueObject$ph* prev_it_523;
    it_522=self->head;
    while(it_522!=((void*)0)) {
        prev_it_523=it_522;
        it_522=it_522->next;
        come_call_finalizer3(prev_it_523,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__309;
void* __right_value377 = (void*)0;
struct CVALUE* result_530;
void* __right_value378 = (void*)0;
char* __dec_obj76;
void* __right_value379 = (void*)0;
struct sType* __dec_obj77;
void* __right_value380 = (void*)0;
char* __dec_obj78;
void* __right_value381 = (void*)0;
char* __dec_obj79;
struct CVALUE* __result_obj__310;
    if(    self==(void*)0) {
        __result_obj__309 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__309,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__309;
    }
    result_530=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj76=result_530->c_value;
        result_530->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj77=result_530->type;
        result_530->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_530->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj78=result_530->c_value_without_right_value_objects;
        result_530->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj79=result_530->c_value_without_cast_object_value;
        result_530->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__310 = come_increment_ref_count(result_530);
    come_call_finalizer3(result_530,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__310,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_534;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_535;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_534=left->head;
    it2_535=right->head;
    while(it_534!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_534->item,it2_535->item)) {
            return (_Bool)0;
        }
        it_534=it_534->next;
        it2_535=it2_535->next;
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
struct list_item$1sType$ph* it_536;
struct list_item$1sType$ph* it2_537;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_536=left->head;
    it2_537=right->head;
    while(it_536!=((void*)0)) {
        if(        !sType_equals(it_536->item,it2_537->item)) {
            return (_Bool)0;
        }
        it_536=it_536->next;
        it2_537=it2_537->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_538;
struct list_item$1sNode$ph* it2_539;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_538=left->head;
    it2_539=right->head;
    while(it_538!=((void*)0)) {
        if(        !sNode_equals(it_538->item,it2_539->item)) {
            return (_Bool)0;
        }
        it_538=it_538->next;
        it2_539=it2_539->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_540;
struct list_item$1char$ph* it2_541;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_540=left->head;
    it2_541=right->head;
    while(it_540!=((void*)0)) {
        if(        !string_equals(it_540->item,it2_541->item)) {
            return (_Bool)0;
        }
        it_540=it_540->next;
        it2_541=it2_541->next;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_542;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_543;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_542=left->head;
    it2_543=right->head;
    while(it_542!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_542->item,it2_543->item))) {
            return (_Bool)0;
        }
        it_542=it_542->next;
        it2_543=it2_543->next;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_544;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_545;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_544=left->head;
    it2_545=right->head;
    while(it_544!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_544->item,it2_545->item))) {
            return (_Bool)0;
        }
        it_544=it_544->next;
        it2_545=it2_545->next;
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
struct list_item$1sType$ph* it_546;
struct list_item$1sType$ph* it2_547;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_546=left->head;
    it2_547=right->head;
    while(it_546!=((void*)0)) {
        if(        !(sType_operator_equals(it_546->item,it2_547->item))) {
            return (_Bool)0;
        }
        it_546=it_546->next;
        it2_547=it2_547->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_548;
struct list_item$1sNode$ph* it2_549;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_548=left->head;
    it2_549=right->head;
    while(it_548!=((void*)0)) {
        if(        !(sNode_operator_equals(it_548->item,it2_549->item))) {
            return (_Bool)0;
        }
        it_548=it_548->next;
        it2_549=it2_549->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_550;
struct list_item$1char$ph* it2_551;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_550=left->head;
    it2_551=right->head;
    while(it_550!=((void*)0)) {
        if(        !(string_operator_equals(it_550->item,it2_551->item))) {
            return (_Bool)0;
        }
        it_550=it_550->next;
        it2_551=it2_551->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    return !list$1sType$ph$p_operator_equals(left,right);
}

static _Bool list$1sType$ph$p_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_552;
struct list_item$1sType$ph* it2_553;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_552=left->head;
    it2_553=right->head;
    while(it_552!=((void*)0)) {
        if(        !(sType_operator_equals(it_552->item,it2_553->item))) {
            return (_Bool)0;
        }
        it_552=it_552->next;
        it2_553=it2_553->next;
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
struct list_item$1sNode$ph* it_554;
struct list_item$1sNode$ph* it2_555;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_554=left->head;
    it2_555=right->head;
    while(it_554!=((void*)0)) {
        if(        !(sNode_operator_equals(it_554->item,it2_555->item))) {
            return (_Bool)0;
        }
        it_554=it_554->next;
        it2_555=it2_555->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    return !list$1char$ph$p_operator_equals(left,right);
}

static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_556;
struct list_item$1char$ph* it2_557;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_556=left->head;
    it2_557=right->head;
    while(it_556!=((void*)0)) {
        if(        !(string_operator_equals(it_556->item,it2_557->item))) {
            return (_Bool)0;
        }
        it_556=it_556->next;
        it2_557=it2_557->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_562;
struct list_item$1sRightValueObject$ph* prev_it_563;
struct list$1sRightValueObject$ph* __result_obj__312;
    it_562=self->head;
    while(it_562!=((void*)0)) {
        prev_it_563=it_562;
        it_562=it_562->next;
        come_call_finalizer3(prev_it_563,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__312 = self;
    return __result_obj__312;
}

static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self){
struct sVar* result_566;
struct sVar* __result_obj__313;
struct sVar* __result_obj__314;
struct sVar* result_567;
struct sVar* __result_obj__315;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_566,0,sizeof(struct sVar*));
        __result_obj__313 = result_566;
        return __result_obj__313;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__314 = self->it->item;
        return __result_obj__314;
    }
    memset(&result_567,0,sizeof(struct sVar*));
    __result_obj__315 = result_567;
    return __result_obj__315;
}

static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self){
struct sVar* result_569;
struct sVar* __result_obj__316;
struct sVar* __result_obj__317;
struct sVar* result_570;
struct sVar* __result_obj__318;
result_569 = (void*)0;
result_570 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_569,0,sizeof(struct sVar*));
        __result_obj__316 = result_569;
        return __result_obj__316;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__317 = self->it->item;
        return __result_obj__317;
    }
    memset(&result_570,0,sizeof(struct sVar*));
    __result_obj__318 = result_570;
    return __result_obj__318;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_571;
struct list_item$1sVar$ph* prev_it_572;
    it_571=self->head;
    while(it_571!=((void*)0)) {
        prev_it_572=it_571;
        it_571=it_571->next;
        come_call_finalizer3(prev_it_572,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_573;
struct list_item$1sVar$ph* prev_it_574;
    it_573=self->head;
    while(it_573!=((void*)0)) {
        prev_it_574=it_573;
        it_573=it_573->next;
        come_call_finalizer3(prev_it_574,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

char* skip_block(struct sInfo* info){
char* head_575;
_Bool dquort_576;
_Bool squort_577;
int sline_578;
int nest_579;
void* __right_value395 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_580=0;
char* Err_581=0;
void* __right_value396 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_582=0;
char* Err_583=0;
void* __right_value397 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_584=0;
char* Err_585=0;
void* __right_value398 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_586=0;
char* Err_587=0;
void* __right_value399 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_588=0;
char* Err_589=0;
void* __right_value400 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_590=0;
char* Err_591=0;
void* __right_value401 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_592=0;
char* Err_593=0;
void* __right_value402 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_594=0;
char* Err_595=0;
char* tail_596;
void* __right_value403 = (void*)0;
char* buf_597;
void* __right_value404 = (void*)0;
char* __result_obj__319;
    head_575=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_576=(_Bool)0;
        squort_577=(_Bool)0;
        sline_578=0;
        nest_579=0;
        while(1) {
            if(            dquort_576) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value395=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_578)));
                        come_exception_var_c8_580=multiple_assign_var9->v1;
                        Err_581=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                        ((Err_581)?(puts(Err_581),exit(0)):(0));
                        come_call_finalizer3(__right_value395,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_581 = come_decrement_ref_count(Err_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_576=!dquort_576;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value396=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_578)));
                        come_exception_var_c9_582=multiple_assign_var10->v1;
                        Err_583=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_583)?(puts(Err_583),exit(0)):(0));
                        come_call_finalizer3(__right_value396,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_583 = come_decrement_ref_count(Err_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value397=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_578)));
                        come_exception_var_c10_584=multiple_assign_var11->v1;
                        Err_585=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_585)?(puts(Err_585),exit(0)):(0));
                        come_call_finalizer3(__right_value397,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_585 = come_decrement_ref_count(Err_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_577) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value398=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_578)));
                        come_exception_var_c11_586=multiple_assign_var12->v1;
                        Err_587=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_587)?(puts(Err_587),exit(0)):(0));
                        come_call_finalizer3(__right_value398,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_587 = come_decrement_ref_count(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_577=!squort_577;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value399=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_578)));
                        come_exception_var_c12_588=multiple_assign_var13->v1;
                        Err_589=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_589)?(puts(Err_589),exit(0)):(0));
                        come_call_finalizer3(__right_value399,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_589 = come_decrement_ref_count(Err_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value400=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_578)));
                        come_exception_var_c13_590=multiple_assign_var14->v1;
                        Err_591=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_591)?(puts(Err_591),exit(0)):(0));
                        come_call_finalizer3(__right_value400,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_591 = come_decrement_ref_count(Err_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_578=info->sline;
                info->p++;
                squort_577=!squort_577;
            }
            else if(            *info->p==34) {
                sline_578=info->sline;
                info->p++;
                dquort_576=!dquort_576;
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
                nest_579++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_579==0) {
                    break;
                }
                nest_579--;
            }
            else if(            *info->p==0) {
                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value401=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c14_592=multiple_assign_var15->v1;
                Err_593=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                ((Err_593)?(puts(Err_593),exit(0)):(0));
                come_call_finalizer3(__right_value401,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_593 = come_decrement_ref_count(Err_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value402=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c15_594=multiple_assign_var16->v1;
        Err_595=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        ((Err_595)?(puts(Err_595),exit(0)):(0));
        come_call_finalizer3(__right_value402,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (Err_595 = come_decrement_ref_count(Err_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_596=info->p;
    buf_597=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_596-head_575+1)), "05function.c", 686, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_597,head_575,tail_596-head_575);
    buf_597[tail_596-head_575]=0;
    skip_spaces_and_lf(info);
    __result_obj__319 = come_increment_ref_count(((char*)(__right_value404=__builtin_string(buf_597))));
    (buf_597 = come_decrement_ref_count(buf_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__319 = come_decrement_ref_count(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__319;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct buffer* asm_fun_name_598;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct buffer* result_599;
char* head_600;
int brace_num_601;
char* tail_602;
char* head_603;
int brace_num_604;
char* tail_605;
char* head_606;
char* tail_607;
char* head_608;
char* tail_609;
int len_610;
_Bool in_dquort_611;
int brace_num_612;
char* head_613;
char* tail_614;
char* head_615;
char* tail_616;
char* head_617;
char* tail_618;
char* head_619;
int nest_620;
char* tail_621;
char* head_622;
int nest_623;
char* tail_624;
char* head_625;
int nest_626;
char* tail_627;
char* head_628;
int nest_629;
char* tail_630;
char* head_631;
int nest_632;
char* tail_633;
char* head_634;
char* tail_635;
char* head_636;
char* tail_637;
char* head_638;
char* tail_639;
char* head_640;
char* tail_641;
char* head_642;
char* tail_643;
char* head_644;
int brace_num_645;
char* tail_646;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__323;
    asm_fun_name_598=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 697, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    result_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 698, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_600=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_601=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_601++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_601--;
                        if(                        brace_num_601==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_602=info->p;
            buffer_append(result_599,head_600,tail_602-head_600);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_603=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_604=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_604++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_604--;
                        if(                        brace_num_604==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_605=info->p;
            buffer_append(result_599,head_603,tail_605-head_603);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_606=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_607=info->p;
            buffer_append(result_599,head_606,tail_607-head_606);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_608=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_609=info->p;
            buffer_append(result_599,head_608,tail_609-head_608);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_610=0;
            if(            *info->p==40) {
                in_dquort_611=(_Bool)0;
                brace_num_612=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_611=!in_dquort_611;
                    }
                    else if(                    in_dquort_611) {
                        buffer_append_char(asm_fun_name_598,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
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
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_613=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_614=info->p;
            buffer_append(result_599,head_613,tail_614-head_613);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_615=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_616=info->p;
            buffer_append(result_599,head_615,tail_616-head_615);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_617=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_618=info->p;
            buffer_append(result_599,head_617,tail_618-head_617);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_619=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_620=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_620++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_620--;
                        if(                        nest_620==0) {
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
            tail_621=info->p;
            buffer_append(result_599,head_619,tail_621-head_619);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_622=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_623=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_623++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_623--;
                        if(                        nest_623==0) {
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
            tail_624=info->p;
            buffer_append(result_599,head_622,tail_624-head_622);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_625=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_626=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_626++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_626--;
                        if(                        nest_626==0) {
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
            tail_627=info->p;
            buffer_append(result_599,head_625,tail_627-head_625);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_628=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_629=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_629++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_629--;
                        if(                        nest_629==0) {
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
            tail_630=info->p;
            buffer_append(result_599,head_628,tail_630-head_628);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_631=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_632=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632--;
                        if(                        nest_632==0) {
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
            tail_633=info->p;
            buffer_append(result_599,head_631,tail_633-head_631);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_634=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_635=info->p;
            buffer_append(result_599,head_634,tail_635-head_634);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_636=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_637=info->p;
            buffer_append(result_599,head_636,tail_637-head_636);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_638=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_639=info->p;
            buffer_append(result_599,head_638,tail_639-head_638);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_640=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_641=info->p;
            buffer_append(result_599,head_640,tail_641-head_640);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_642=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_643=info->p;
            buffer_append(result_599,head_642,tail_643-head_642);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_644=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_645=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_645++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_645--;
                        if(                        brace_num_645==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_646=info->p;
            buffer_append(result_599,head_644,tail_646-head_644);
        }
        else {
            break;
        }
    }
    __result_obj__323 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value415=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1112, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_598)),(char*)come_increment_ref_count(buffer_to_string(result_599))))));
    come_call_finalizer3(asm_fun_name_598,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(result_599,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value415,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__323,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__323;
}

static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self){
struct tuple2$2char$phchar$ph* __result_obj__320;
void* __right_value411 = (void*)0;
struct tuple2$2char$phchar$ph* result_647;
void* __right_value412 = (void*)0;
char* __dec_obj88;
void* __right_value413 = (void*)0;
char* __dec_obj89;
struct tuple2$2char$phchar$ph* __result_obj__321;
    if(    self==(void*)0) {
        __result_obj__320 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__320,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__320;
    }
    result_647=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj88=result_647->v1;
        result_647->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj89=result_647->v2;
        result_647->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__321 = come_increment_ref_count(result_647);
    come_call_finalizer3(result_647,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__321,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_648;
    result_648=0;
    result_648+=int_get_hash_key(((int)self->v1));
    result_648+=int_get_hash_key(((int)self->v2));
    return result_648;
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
char* __dec_obj90;
char* __dec_obj91;
struct tuple2$2char$phchar$ph* __result_obj__322;
    __dec_obj90=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj91=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__322 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__322,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct buffer* asm_fun_name_649;
void* __right_value418 = (void*)0;
char* attribute_650;
int nest_651;
int nest_652;
int nest_653;
int nest_654;
int nest_655;
void* __right_value419 = (void*)0;
char* __dec_obj92;
int len_656;
_Bool in_dquort_657;
int brace_num_658;
int brace_num_659;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__324;
    asm_fun_name_649=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1117, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    attribute_650=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_651=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_651++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_651--;
                        if(                        nest_651==0) {
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
                nest_652=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_652++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_652--;
                        if(                        nest_652==0) {
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
                nest_653=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_653++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_653--;
                        if(                        nest_653==0) {
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
                nest_654=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_654++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_654--;
                        if(                        nest_654==0) {
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
                nest_655=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_655++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_655--;
                        if(                        nest_655==0) {
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
            __dec_obj92=attribute_650;
            attribute_650=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_656=0;
            if(            *info->p==40) {
                in_dquort_657=(_Bool)0;
                brace_num_658=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_657=!in_dquort_657;
                    }
                    else if(                    in_dquort_657) {
                        buffer_append_char(asm_fun_name_649,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_658++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_658--;
                        if(                        brace_num_658==0) {
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
                brace_num_659=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_659++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_659--;
                        if(                        brace_num_659==0) {
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
    __result_obj__324 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value422=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1386, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_649)),(char*)come_increment_ref_count(attribute_650)))));
    come_call_finalizer3(asm_fun_name_649,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute_650 = come_decrement_ref_count(attribute_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value422,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__324,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value423 = (void*)0;
char* __dec_obj93;
char* head_660;
int head_sline_661;
void* __right_value424 = (void*)0;
char* buf_662;
void* __right_value425 = (void*)0;
struct sNode* node_663;
_Bool Value_664;
    while(*info->p) {
        __dec_obj93=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        head_660=info->p;
        head_sline_661=info->sline;
        buf_662=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_662 = come_decrement_ref_count(buf_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_663=(struct sNode*)come_increment_ref_count(top_level_v99(buf_662,head_660,head_sline_661,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_663!=((void*)0)) {
            Value_664=node_compile(node_663,info);
            if(            !Value_664) {
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
            (buf_662 = come_decrement_ref_count(buf_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_663) ? node_663 = come_decrement_ref_count(node_663, ((struct sNode*)node_663)->finalize, ((struct sNode*)node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_662 = come_decrement_ref_count(buf_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_663) ? node_663 = come_decrement_ref_count(node_663, ((struct sNode*)node_663)->finalize, ((struct sNode*)node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value426 = (void*)0;
char* name_665;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sType* result_type_666;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1sType$ph* param_types_667;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1char$ph* param_names_668;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1char$ph* param_default_parametors_669;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* fun_670;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* name_692;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* result_type_693;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1sType$ph* param_types_694;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1char$ph* param_names_695;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1char$ph* param_default_parametors_696;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sFun* fun_697;
void* __right_value460 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_665=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_666=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1442, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_667=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1443, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_668=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1444, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_669=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1445, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_670=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1446, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_665),(struct sType*)come_increment_ref_count(result_type_666),(struct list$1sType$ph*)come_increment_ref_count(param_types_667),(struct list$1char$ph*)come_increment_ref_count(param_names_668),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_669),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_665)),(struct sFun*)come_increment_ref_count(fun_670));
        (name_665 = come_decrement_ref_count(name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_666,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_667,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_668,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_669,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun_670,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_692=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_693=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_694=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1456, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_695=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1457, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_696=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1458, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_697=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1459, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_692),(struct sType*)come_increment_ref_count(result_type_693),(struct list$1sType$ph*)come_increment_ref_count(param_types_694),(struct list$1char$ph*)come_increment_ref_count(param_names_695),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_696),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_692)),(struct sFun*)come_increment_ref_count(fun_697));
        (name_692 = come_decrement_ref_count(name_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_693,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_694,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_695,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_696,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun_697,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_688;
unsigned int it_689;
_Bool same_key_exist_690;
char* it2_691;
struct map$2char$phsFun$ph* __result_obj__335;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph$p_rehash(self);
    }
    hash_688=string_get_hash_key(((char*)key))%self->size;
    it_689=hash_688;
    while((_Bool)1) {
        if(        self->item_existance[it_689]) {
            if(            string_equals(self->keys[it_689],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_689]);
                    (self->keys[it_689] = come_decrement_ref_count(self->keys[it_689], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_689]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_689]);
                    self->keys[it_689]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_689],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_689]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_689]=item;
                }
                break;
            }
            it_689++;
            if(            it_689>=self->size) {
                it_689=0;
            }
            else if(            it_689==hash_688) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_689]=(_Bool)1;
            if(            1) {
                self->keys[it_689]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_689]=key;
            }
            if(            1) {
                self->items[it_689]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_689]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_690=(_Bool)0;
    for(    it2_691=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_691=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_691,key)) {
            same_key_exist_690=(_Bool)1;
        }
    }
    if(    !same_key_exist_690) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__335 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

static void map$2char$phsFun$ph$p_rehash(struct map$2char$phsFun$ph* self){
int size_671;
void* __right_value440 = (void*)0;
char** keys_672;
void* __right_value441 = (void*)0;
struct sFun** items_673;
void* __right_value442 = (void*)0;
_Bool* item_existance_674;
int len_675;
char* it_678;
struct sFun* default_value_681;
void* __right_value443 = (void*)0;
struct sFun* it2_682;
unsigned int hash_685;
int n_686;
struct sFun* default_value_687;
void* __right_value444 = (void*)0;
default_value_681 = (void*)0;
default_value_687 = (void*)0;
    size_671=self->size*10;
    keys_672=(char**)come_increment_ref_count(((char**)(__right_value440=(char**)come_calloc(1, sizeof(char*)*(1*(size_671)), "./comelang.h", 2911, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_673=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value441=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_671)), "./comelang.h", 2912, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_674=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value442=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_671)), "./comelang.h", 2913, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_675=0;
    for(    it_678=map$2char$phsFun$ph$p_begin(self);    !map$2char$phsFun$ph$p_end(self);    it_678=map$2char$phsFun$ph$p_next(self)    ){
        memset(&default_value_681,0,sizeof(struct sFun*));
        it2_682=((struct sFun*)(__right_value443=map$2char$phsFun$ph$p_at(self,it_678,(struct sFun*)come_increment_ref_count(default_value_681))));
        come_call_finalizer3(__right_value443,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_685=string_get_hash_key(((char*)it_678))%size_671;
        n_686=hash_685;
        while((_Bool)1) {
            if(            item_existance_674[n_686]) {
                n_686++;
                if(                n_686>=size_671) {
                    n_686=0;
                }
                else if(                n_686==hash_685) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_674[n_686]=(_Bool)1;
                keys_672[n_686]=it_678;
                items_673[n_686]=((struct sFun*)(__right_value444=map$2char$phsFun$ph$p_at(self,it_678,(struct sFun*)come_increment_ref_count(default_value_687))));
                come_call_finalizer3(__right_value444,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_675++;
                come_call_finalizer3(default_value_687,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                come_call_finalizer3(default_value_687,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        come_call_finalizer3(default_value_681,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_672;
    self->items=items_673;
    self->item_existance=item_existance_674;
    self->size=size_671;
    self->len=len_675;
}

static char* map$2char$phsFun$ph$p_begin(struct map$2char$phsFun$ph* self){
char* result_676;
char* __result_obj__325;
char* __result_obj__326;
char* result_677;
char* __result_obj__327;
result_676 = (void*)0;
result_677 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_676,0,sizeof(char*));
        __result_obj__325 = result_676;
        return __result_obj__325;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__326 = self->key_list->it->item;
        return __result_obj__326;
    }
    memset(&result_677,0,sizeof(char*));
    __result_obj__327 = result_677;
    return __result_obj__327;
}

static _Bool map$2char$phsFun$ph$p_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph$p_next(struct map$2char$phsFun$ph* self){
char* result_679;
char* __result_obj__328;
char* __result_obj__329;
char* result_680;
char* __result_obj__330;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_679,0,sizeof(char*));
        __result_obj__328 = result_679;
        return __result_obj__328;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__329 = self->key_list->it->item;
        return __result_obj__329;
    }
    memset(&result_680,0,sizeof(char*));
    __result_obj__330 = result_680;
    return __result_obj__330;
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_683;
unsigned int it_684;
struct sFun* __result_obj__331;
struct sFun* __result_obj__332;
struct sFun* __result_obj__333;
struct sFun* __result_obj__334;
    hash_683=string_get_hash_key(((char*)key))%self->size;
    it_684=hash_683;
    while((_Bool)1) {
        if(        self->item_existance[it_684]) {
            if(            string_equals(self->keys[it_684],key)) {
                __result_obj__331 = come_increment_ref_count(self->items[it_684]);
                come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__331,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__331;
            }
            it_684++;
            if(            it_684>=self->size) {
                it_684=0;
            }
            else if(            it_684==hash_683) {
                __result_obj__332 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__332,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__332;
            }
        }
        else {
            __result_obj__333 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__333,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__333;
        }
    }
    __result_obj__334 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__334,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_698;
_Bool is_type_name_flag_699;
int sline_700;
_Bool define_struct_nobody_701;
char* p_702;
int sline_703;
void* __right_value461 = (void*)0;
char* word_704;
_Bool define_function_pointer_result_function_705;
_Bool define_variable_between_brace_706;
char* p_707;
void* __right_value462 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* result_type_708=0;
char* fun_name_709=0;
_Bool err_710=0;
void* __right_value463 = (void*)0;
char* word_711;
_Bool define_function_flag_712;
char* p_713;
void* __right_value464 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_714=0;
char* fun_name_715=0;
_Bool err_716=0;
char* word_717;
void* __right_value465 = (void*)0;
char* __dec_obj94;
void* __right_value466 = (void*)0;
char* __dec_obj95;
char* __dec_obj96;
void* __right_value467 = (void*)0;
char* __dec_obj97;
_Bool define_variable_718;
char* p_719;
void* __right_value468 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_720=0;
char* fun_name_721=0;
_Bool err_722=0;
void* __right_value469 = (void*)0;
char* word_723;
void* __right_value470 = (void*)0;
char* word_724;
char* p_725;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* word_726;
void* __right_value474 = (void*)0;
char* __dec_obj98;
void* __right_value475 = (void*)0;
char* word_727;
void* __right_value476 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c16_730=0;
char* Err_731=0;
void* __right_value477 = (void*)0;
char* word_732;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sNode* node_733;
struct sNode* __result_obj__337;
void* __right_value480 = (void*)0;
struct sNode* __result_obj__338;
char* header_head_734;
void* __right_value481 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* result_type_735=0;
char* fun_name_736=0;
_Bool err_737=0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1sType$ph* param_types_738;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1char$ph* param_names_739;
void* __right_value486 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* param_type_740=0;
char* param_name_741=0;
_Bool err_742=0;
void* __right_value487 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_c17_743=0;
char* Err_744=0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_749=0;
char* Err_750=0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct list$1sType$ph* param_types2_751;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1char$ph* param_names2_752;
void* __right_value498 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var25 = (void*)0;
struct sType* param_type_753=0;
char* param_name_754=0;
_Bool err_755=0;
void* __right_value499 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c19_756=0;
char* Err_757=0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_759=0;
char* Err_760=0;
char* header_tail_761;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* result_type2_762;
struct sType* __dec_obj102;
void* __right_value506 = (void*)0;
struct list$1sType$ph* __dec_obj103;
void* __right_value507 = (void*)0;
struct list$1char$ph* __dec_obj104;
_Bool var_args_763;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1char$ph* param_default_parametors_764;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sFun* fun_765;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sFun* fun2_769;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value568 = (void*)0;
struct sNode* result_770;
struct sNode* __result_obj__368;
void* __right_value569 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_806=0;
char* Err_807=0;
void* __right_value570 = (void*)0;
struct sNode* node_808;
struct sNode* __result_obj__369;
void* __right_value571 = (void*)0;
struct sNode* node_809;
struct sNode* __result_obj__370;
void* __right_value572 = (void*)0;
struct sNode* node_810;
char* source_tail_811;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct buffer* header_812;
struct sNode* __result_obj__371;
void* __right_value575 = (void*)0;
char* buf2_813;
void* __right_value576 = (void*)0;
struct sNode* __result_obj__372;
    info->in_top_level=(_Bool)1;
    source_head_698=info->p;
    is_type_name_flag_699=is_type_name(buf,info);
    sline_700=info->sline;
    define_struct_nobody_701=(_Bool)0;
    {
        p_702=info->p;
        sline_703=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_704=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_701=(_Bool)1;
                }
                (word_704 = come_decrement_ref_count(word_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_703;
    }
    define_function_pointer_result_function_705=(_Bool)0;
    define_variable_between_brace_706=(_Bool)0;
    if(    is_type_name_flag_699) {
        p_707=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value462=backtrace_parse_type((_Bool)0,info)));
            result_type_708=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            fun_name_709=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_710=multiple_assign_var17->v3;
            come_call_finalizer3(__right_value462,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_705=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_711=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_711,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_706=(_Bool)1;
                            }
                        }
                        (word_711 = come_decrement_ref_count(word_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_708,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_709 = come_decrement_ref_count(fun_name_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_700;
    }
    define_function_flag_712=(_Bool)0;
    if(    is_type_name_flag_699&&!define_function_pointer_result_function_705&&charp_operator_not_equals(buf,"__typeof__")) {
        p_713=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value464=backtrace_parse_type((_Bool)0,info)));
            result_type_714=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_715=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_716=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value464,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(result_type_714,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_715 = come_decrement_ref_count(fun_name_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_717=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj94=word_717;
                word_717=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(word_717,"extern")) {
                    __dec_obj95=word_717;
                    word_717=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj96=word_717;
                word_717=((void*)0);
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_717) {
                if(                is_type_name(word_717,info)) {
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
                        __dec_obj97=word_717;
                        word_717=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                }
                if(                strlen(word_717)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_699) {
                        define_function_flag_712=(_Bool)1;
                    }
                }
            }
            (word_717 = come_decrement_ref_count(word_717, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_713;
        info->sline=sline_700;
    }
    define_variable_718=(_Bool)1;
    if(    is_type_name_flag_699&&!define_function_pointer_result_function_705) {
        p_719=info->p;
        info->p=head;
        if(        !is_type_name_flag_699) {
            define_variable_718=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value468=backtrace_parse_type((_Bool)0,info)));
            result_type_720=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_721=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_722=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value468,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_723=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_718=(_Bool)1;
                            }
                        }
                        (word_723 = come_decrement_ref_count(word_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_724=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_724,info)&&*info->p!=40) {
                            define_variable_718=(_Bool)1;
                        }
                    }
                    (word_724 = come_decrement_ref_count(word_724, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_720,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_721 = come_decrement_ref_count(fun_name_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_718=(_Bool)0;
        }
        else if(        define_variable_718) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_718=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_718=(_Bool)0;
            }
        }
        info->p=p_719;
        info->sline=sline_700;
    }
    else {
        define_variable_718=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_705) {
        p_725=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value471=parse_struct_attribute(info)));
            (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value472=parse_word(info)));
                (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_726=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj98=word_726;
                        word_726=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_726,"extends")) {
                            define_variable_718=(_Bool)0;
                        }
                    }
                    (word_726 = come_decrement_ref_count(word_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_718=(_Bool)0;
        }
        else if(        define_variable_718) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_718=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_718=(_Bool)0;
            }
        }
        info->p=p_725;
        info->sline=sline_700;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_727=(char*)come_increment_ref_count(parse_word(info));
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
                    multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value476=err_msg(info,"unexpected source end")));
                    come_exception_var_c16_730=multiple_assign_var20->v1;
                    Err_731=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                    ((Err_731)?(puts(Err_731),exit(0)):(0));
                    come_call_finalizer3(__right_value476,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_731 = come_decrement_ref_count(Err_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_732=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_732)));
                    (word_732 = come_decrement_ref_count(word_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_733=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result_obj__337 = come_increment_ref_count(node_733);
            ((node_733) ? node_733 = come_decrement_ref_count(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_727 = come_decrement_ref_count(word_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__337) ? __result_obj__337 = come_decrement_ref_count(__result_obj__337, ((struct sNode*)__result_obj__337)->finalize, ((struct sNode*)__result_obj__337)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__337;
            ((node_733) ? node_733 = come_decrement_ref_count(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_727 = come_decrement_ref_count(word_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_701) {
    }
    else if(    define_variable_between_brace_706) {
        info->p=head;
        info->sline=sline_700;
        __result_obj__338 = come_increment_ref_count(((struct sNode*)(__right_value480=parse_global_variable(info))));
        ((__right_value480) ? __right_value480 = come_decrement_ref_count(__right_value480, ((struct sNode*)__right_value480)->finalize, ((struct sNode*)__right_value480)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__338) ? __result_obj__338 = come_decrement_ref_count(__result_obj__338, ((struct sNode*)__result_obj__338)->finalize, ((struct sNode*)__result_obj__338)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__338;
    }
    else if(    define_function_pointer_result_function_705) {
        header_head_734=info->p;
        multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value481=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_735=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
        fun_name_736=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        err_737=multiple_assign_var21->v3;
        come_call_finalizer3(__right_value481,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_738=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1783, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            param_names_739=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1784, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value486=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_740=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                    param_name_741=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    err_742=multiple_assign_var22->v3;
                    come_call_finalizer3(__right_value486,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_742) {
                        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value487=err_msg(info,"parse_type is failed")));
                        come_exception_var_c17_743=multiple_assign_var23->v1;
                        Err_744=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                        ((Err_744)?(puts(Err_744),exit(0)):(0));
                        come_call_finalizer3(__right_value487,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_744 = come_decrement_ref_count(Err_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph$p_push_back(param_types_738,(struct sType*)come_increment_ref_count(param_type_740));
                    static int num_function_pointer_result_var_name_a_748=0;
                    list$1char$ph$p_push_back(param_names_739,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_748)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value492=parse_word(info)));
                        (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_740,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_741 = come_decrement_ref_count(param_name_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value493=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c18_749=multiple_assign_var24->v1;
                        Err_750=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_750)?(puts(Err_750),exit(0)):(0));
                        come_call_finalizer3(__right_value493,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_750 = come_decrement_ref_count(Err_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_740,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_741 = come_decrement_ref_count(param_name_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_751=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1830, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                param_names2_752=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1831, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var25=((struct tuple3$3sType$phchar$phbool$*)(__right_value498=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_753=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                        param_name_754=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        err_755=multiple_assign_var25->v3;
                        come_call_finalizer3(__right_value498,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        !err_755) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value499=err_msg(info,"parse_type is failed")));
                            come_exception_var_c19_756=multiple_assign_var26->v1;
                            Err_757=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_757)?(puts(Err_757),exit(0)):(0));
                            come_call_finalizer3(__right_value499,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_757 = come_decrement_ref_count(Err_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph$p_push_back(param_types2_751,(struct sType*)come_increment_ref_count(param_type_753));
                        static int num_function_pointer_result_var_name_b_758=0;
                        list$1char$ph$p_push_back(param_names2_752,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_758)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value501=parse_word(info)));
                            (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_753,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (param_name_754 = come_decrement_ref_count(param_name_754, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value502=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c20_759=multiple_assign_var27->v1;
                            Err_760=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_760)?(puts(Err_760),exit(0)):(0));
                            come_call_finalizer3(__right_value502,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_760 = come_decrement_ref_count(Err_760, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_753,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_754 = come_decrement_ref_count(param_name_754, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_761=info->p;
                result_type2_762=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1873, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj102=result_type2_762->mResultType;
                result_type2_762->mResultType=(struct sType*)come_increment_ref_count(result_type_735);
                come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj103=result_type2_762->mParamTypes;
                result_type2_762->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types2_751));
                come_call_finalizer3(__dec_obj103,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj104=result_type2_762->mParamNames;
                result_type2_762->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_752));
                come_call_finalizer3(__dec_obj104,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_762->mVarArgs=(_Bool)0;
                result_type2_762->mStatic=(_Bool)0;
                var_args_763=(_Bool)0;
                param_default_parametors_764=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1883, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_765=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1885, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_736)),(struct sType*)come_increment_ref_count(result_type2_762),(struct list$1sType$ph*)come_increment_ref_count(param_types_738),(struct list$1char$ph*)come_increment_ref_count(param_names_739),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_764),(_Bool)1,var_args_763,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_769=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value515=__builtin_string(fun_name_736)))));
                (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_769==((void*)0)||fun2_769->mExternal) {
                    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_736)),(struct sFun*)come_increment_ref_count(fun_765));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1898, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value519=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1898, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_765),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_770=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer3(__right_value519,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__368 = come_increment_ref_count(result_770);
                come_call_finalizer3(param_types2_751,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(param_names2_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(result_type2_762,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(param_default_parametors_764,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(fun_765,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(fun2_769,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_770) ? result_770 = come_decrement_ref_count(result_770, ((struct sNode*)result_770)->finalize, ((struct sNode*)result_770)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(param_types_738,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(param_names_739,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(result_type_735,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_736 = come_decrement_ref_count(fun_name_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__368;
                come_call_finalizer3(param_types2_751,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(param_names2_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(result_type2_762,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(param_default_parametors_764,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(fun_765,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(fun2_769,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_770) ? result_770 = come_decrement_ref_count(result_770, ((struct sNode*)result_770)->finalize, ((struct sNode*)result_770)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value569=err_msg(info,"require (")));
                come_exception_var_c21_806=multiple_assign_var28->v1;
                Err_807=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_807)?(puts(Err_807),exit(0)):(0));
                come_call_finalizer3(__right_value569,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_807 = come_decrement_ref_count(Err_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_738,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_names_739,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        come_call_finalizer3(result_type_735,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_736 = come_decrement_ref_count(fun_name_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_700;
        node_808=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__369 = come_increment_ref_count(node_808);
        ((node_808) ? node_808 = come_decrement_ref_count(node_808, ((struct sNode*)node_808)->finalize, ((struct sNode*)node_808)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__369) ? __result_obj__369 = come_decrement_ref_count(__result_obj__369, ((struct sNode*)__result_obj__369)->finalize, ((struct sNode*)__result_obj__369)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__369;
        ((node_808) ? node_808 = come_decrement_ref_count(node_808, ((struct sNode*)node_808)->finalize, ((struct sNode*)node_808)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_712) {
        info->p=head;
        info->sline=sline_700;
        node_809=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__370 = come_increment_ref_count(node_809);
        ((node_809) ? node_809 = come_decrement_ref_count(node_809, ((struct sNode*)node_809)->finalize, ((struct sNode*)node_809)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__370) ? __result_obj__370 = come_decrement_ref_count(__result_obj__370, ((struct sNode*)__result_obj__370)->finalize, ((struct sNode*)__result_obj__370)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__370;
        ((node_809) ? node_809 = come_decrement_ref_count(node_809, ((struct sNode*)node_809)->finalize, ((struct sNode*)node_809)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_718) {
        info->p=head;
        info->sline=sline_700;
        node_810=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_811=info->p;
        header_812=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1932, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append(header_812,source_head_698,source_tail_811-source_head_698);
        __result_obj__371 = come_increment_ref_count(node_810);
        ((node_810) ? node_810 = come_decrement_ref_count(node_810, ((struct sNode*)node_810)->finalize, ((struct sNode*)node_810)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_812,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__result_obj__371) ? __result_obj__371 = come_decrement_ref_count(__result_obj__371, ((struct sNode*)__result_obj__371)->finalize, ((struct sNode*)__result_obj__371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__371;
        ((node_810) ? node_810 = come_decrement_ref_count(node_810, ((struct sNode*)node_810)->finalize, ((struct sNode*)node_810)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_812,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->p=head;
    info->sline=sline_700;
    buf2_813=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__372 = come_increment_ref_count(((struct sNode*)(__right_value576=top_level_v98(buf2_813,head,head_sline,info))));
    (buf2_813 = come_decrement_ref_count(buf2_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value576) ? __right_value576 = come_decrement_ref_count(__right_value576, ((struct sNode*)__right_value576)->finalize, ((struct sNode*)__right_value576)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__372) ? __result_obj__372 = come_decrement_ref_count(__result_obj__372, ((struct sNode*)__result_obj__372)->finalize, ((struct sNode*)__result_obj__372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__372;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_728;
struct list_item$1char$ph* prev_it_729;
struct list$1char$ph* __result_obj__336;
    it_728=self->head;
    while(it_728!=((void*)0)) {
        prev_it_729=it_728;
        it_728=it_728->next;
        come_call_finalizer3(prev_it_729,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__336 = self;
    return __result_obj__336;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value488 = (void*)0;
struct list_item$1sType$ph* litem_745;
struct sType* __dec_obj99;
void* __right_value489 = (void*)0;
struct list_item$1sType$ph* litem_746;
struct sType* __dec_obj100;
void* __right_value490 = (void*)0;
struct list_item$1sType$ph* litem_747;
struct sType* __dec_obj101;
struct list$1sType$ph* __result_obj__339;
    if(    self->len==0) {
        litem_745=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value488=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1466, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_745->prev=((void*)0);
        litem_745->next=((void*)0);
        __dec_obj99=litem_745->item;
        litem_745->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_745;
        self->head=litem_745;
    }
    else if(    self->len==1) {
        litem_746=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value489=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1476, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_746->prev=self->head;
        litem_746->next=((void*)0);
        __dec_obj100=litem_746->item;
        litem_746->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_746;
        self->head->next=litem_746;
    }
    else {
        litem_747=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value490=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1486, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_747->prev=self->tail;
        litem_747->next=((void*)0);
        __dec_obj101=litem_747->item;
        litem_747->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_747;
        self->tail=litem_747;
    }
    self->len++;
    __result_obj__339 = self;
    come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__339;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_766;
unsigned int hash_767;
unsigned int it_768;
struct sFun* __result_obj__340;
struct sFun* __result_obj__341;
struct sFun* __result_obj__342;
struct sFun* __result_obj__343;
default_value_766 = (void*)0;
    memset(&default_value_766,0,sizeof(struct sFun*));
    hash_767=string_get_hash_key(((char*)key))%self->size;
    it_768=hash_767;
    while((_Bool)1) {
        if(        self->item_existance[it_768]) {
            if(            string_equals(self->keys[it_768],key)) {
                __result_obj__340 = come_increment_ref_count(self->items[it_768]);
                come_call_finalizer3(default_value_766,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__340,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__340;
            }
            it_768++;
            if(            it_768>=self->size) {
                it_768=0;
            }
            else if(            it_768==hash_767) {
                __result_obj__341 = come_increment_ref_count(default_value_766);
                come_call_finalizer3(default_value_766,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__341,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__341;
            }
        }
        else {
            __result_obj__342 = come_increment_ref_count(default_value_766);
            come_call_finalizer3(default_value_766,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__342,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__342;
        }
    }
    __result_obj__343 = come_increment_ref_count(default_value_766);
    come_call_finalizer3(default_value_766,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__343,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__344;
void* __right_value520 = (void*)0;
struct sFunNode* result_771;
void* __right_value521 = (void*)0;
char* __dec_obj105;
void* __right_value567 = (void*)0;
struct sFun* __dec_obj128;
struct sFunNode* __result_obj__367;
    if(    self==(void*)0) {
        __result_obj__344 = (void*)0;
        return __result_obj__344;
    }
    result_771=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_771->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_771->sname;
        result_771->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_771->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj128=result_771->mFun;
        result_771->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj128,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__367 = result_771;
    come_call_finalizer3(result_771,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__367;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__345;
void* __right_value522 = (void*)0;
struct sFun* result_772;
void* __right_value523 = (void*)0;
char* __dec_obj106;
void* __right_value524 = (void*)0;
struct sType* __dec_obj107;
void* __right_value525 = (void*)0;
struct list$1sType$ph* __dec_obj108;
void* __right_value526 = (void*)0;
struct list$1char$ph* __dec_obj109;
void* __right_value527 = (void*)0;
struct list$1char$ph* __dec_obj110;
void* __right_value528 = (void*)0;
struct sType* __dec_obj111;
void* __right_value560 = (void*)0;
struct sBlock* __dec_obj121;
void* __right_value561 = (void*)0;
struct buffer* __dec_obj122;
void* __right_value562 = (void*)0;
struct buffer* __dec_obj123;
void* __right_value563 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value564 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value565 = (void*)0;
char* __dec_obj126;
void* __right_value566 = (void*)0;
char* __dec_obj127;
struct sFun* __result_obj__366;
    if(    self==(void*)0) {
        __result_obj__345 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__345,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__345;
    }
    result_772=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj106=result_772->mName;
        result_772->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj107=result_772->mResultType;
        result_772->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj108=result_772->mParamTypes;
        result_772->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj108,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj109=result_772->mParamNames;
        result_772->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj109,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj110=result_772->mParamDefaultParametors;
        result_772->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj110,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj111=result_772->mLambdaType;
        result_772->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj121=result_772->mBlock;
        result_772->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj121,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj122=result_772->mSource;
        result_772->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj122,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj123=result_772->mSourceHead;
        result_772->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj123,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj124=result_772->mSourceHead2;
        result_772->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj125=result_772->mSourceDefer;
        result_772->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_772->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_772->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_772->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_772->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_772->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_772->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_772->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj126=result_772->mAttribute;
        result_772->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj127=result_772->mFunAttribute;
        result_772->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__366 = come_increment_ref_count(result_772);
    come_call_finalizer3(result_772,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__366,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__366;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__346;
void* __right_value529 = (void*)0;
struct sBlock* result_773;
void* __right_value530 = (void*)0;
struct list$1sNode$ph* __dec_obj112;
void* __right_value559 = (void*)0;
struct sVarTable* __dec_obj120;
struct sBlock* __result_obj__365;
    if(    self==(void*)0) {
        __result_obj__346 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__346,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__346;
    }
    result_773=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj112=result_773->mNodes;
        result_773->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj112,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj120=result_773->mVarTable;
        result_773->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj120,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_773->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__365 = come_increment_ref_count(result_773);
    come_call_finalizer3(result_773,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__365,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__365;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__347;
void* __right_value531 = (void*)0;
struct sVarTable* result_774;
void* __right_value558 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj119;
struct sVarTable* __result_obj__364;
    if(    self==(void*)0) {
        __result_obj__347 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__347,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__347;
    }
    result_774=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj119=result_774->mVars;
        result_774->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj119,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_774->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_774->mParent=self->mParent;
    }
    __result_obj__364 = come_increment_ref_count(result_774);
    come_call_finalizer3(result_774,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__364,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__364;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__348;
void* __right_value532 = (void*)0;
void* __right_value538 = (void*)0;
struct map$2char$phsVar$ph* result_778;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1char$p* __dec_obj114;
char* it_781;
struct sVar* default_value_784;
void* __right_value541 = (void*)0;
struct sVar* it2_787;
void* __right_value547 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__363;
default_value_784 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__348 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__348,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__348;
    }
    result_778=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2743, "struct map$2char$phsVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj114=result_778->key_list;
    result_778->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2745, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj114,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_781=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_781=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_784,0,sizeof(struct sVar*));
        it2_787=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_at(self,it_781,(struct sVar*)come_increment_ref_count(default_value_784)));
        if(        1&&1) {
            map$2char$phsVar$ph$p_put(result_778,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_781)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_787)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_778,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_781)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_787)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_778,(char*)come_increment_ref_count(it_781),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_787)));
        }
        else {
            map$2char$phsVar$ph$p_put(result_778,(char*)come_increment_ref_count(it_781),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_787)));
        }
        come_call_finalizer3(default_value_784,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(it2_787,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__363 = come_increment_ref_count(result_778);
    come_call_finalizer3(result_778,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__363,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__363;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_775;
int i_776;
    for(    i_775=0;    i_775<self->size;    i_775++    ){
        if(        self->item_existance[i_775]) {
            if(            1) {
                come_call_finalizer3(self->items[i_775],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_776=0;    i_776<self->size;    i_776++    ){
        if(        self->item_existance[i_776]) {
            if(            1) {
                (self->keys[i_776] = come_decrement_ref_count(self->keys[i_776], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self){
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
int i_777;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct list$1char$p* __dec_obj113;
struct map$2char$phsVar$ph* __result_obj__349;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value533=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2672, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value534=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2673, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value535=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2674, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_777=0;    i_777<128;    i_777++    ){
        self->item_existance[i_777]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj113=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2684, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj113,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__349 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__349,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__349;
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_779;
char* __result_obj__350;
char* __result_obj__351;
char* result_780;
char* __result_obj__352;
result_779 = (void*)0;
result_780 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_779,0,sizeof(char*));
        __result_obj__350 = result_779;
        return __result_obj__350;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__351 = self->key_list->it->item;
        return __result_obj__351;
    }
    memset(&result_780,0,sizeof(char*));
    __result_obj__352 = result_780;
    return __result_obj__352;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_782;
char* __result_obj__353;
char* __result_obj__354;
char* result_783;
char* __result_obj__355;
result_782 = (void*)0;
result_783 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_782,0,sizeof(char*));
        __result_obj__353 = result_782;
        return __result_obj__353;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__354 = self->key_list->it->item;
        return __result_obj__354;
    }
    memset(&result_783,0,sizeof(char*));
    __result_obj__355 = result_783;
    return __result_obj__355;
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_785;
unsigned int it_786;
struct sVar* __result_obj__356;
struct sVar* __result_obj__357;
struct sVar* __result_obj__358;
struct sVar* __result_obj__359;
    hash_785=string_get_hash_key(((char*)key))%self->size;
    it_786=hash_785;
    while((_Bool)1) {
        if(        self->item_existance[it_786]) {
            if(            string_equals(self->keys[it_786],key)) {
                __result_obj__356 = come_increment_ref_count(self->items[it_786]);
                come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__356,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__356;
            }
            it_786++;
            if(            it_786>=self->size) {
                it_786=0;
            }
            else if(            it_786==hash_785) {
                __result_obj__357 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__357,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__357;
            }
        }
        else {
            __result_obj__358 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__358,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__358;
        }
    }
    __result_obj__359 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__359,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__359;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_799;
int it_800;
_Bool same_key_exist_801;
char* it2_802;
struct map$2char$phsVar$ph* __result_obj__360;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_799=string_get_hash_key(((char*)key))%self->size;
    it_800=hash_799;
    while((_Bool)1) {
        if(        self->item_existance[it_800]) {
            if(            string_equals(self->keys[it_800],key)) {
                if(                1) {
                    (self->keys[it_800] = come_decrement_ref_count(self->keys[it_800], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$p$p_remove(self->key_list,self->keys[it_800]);
                    self->keys[it_800]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_800]);
                    self->keys[it_800]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_800],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_800]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_800]=item;
                }
                break;
            }
            it_800++;
            if(            it_800>=self->size) {
                it_800=0;
            }
            else if(            it_800==hash_799) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_800]=(_Bool)1;
            if(            1) {
                self->keys[it_800]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_800]=key;
            }
            if(            1) {
                self->items[it_800]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_800]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_801=(_Bool)0;
    for(    it2_802=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_802=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_802,key)) {
            same_key_exist_801=(_Bool)1;
        }
    }
    if(    !same_key_exist_801) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__360 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__360;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_788;
void* __right_value542 = (void*)0;
char** keys_789;
void* __right_value543 = (void*)0;
struct sVar** items_790;
void* __right_value544 = (void*)0;
_Bool* item_existance_791;
int len_792;
char* it_793;
struct sVar* default_value_794;
void* __right_value545 = (void*)0;
struct sVar* it2_795;
unsigned int hash_796;
int n_797;
struct sVar* default_value_798;
void* __right_value546 = (void*)0;
default_value_794 = (void*)0;
default_value_798 = (void*)0;
    size_788=self->size*10;
    keys_789=(char**)come_increment_ref_count(((char**)(__right_value542=(char**)come_calloc(1, sizeof(char*)*(1*(size_788)), "./comelang.h", 2911, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_790=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value543=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_788)), "./comelang.h", 2912, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_791=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value544=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_788)), "./comelang.h", 2913, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_792=0;
    for(    it_793=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_793=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_794,0,sizeof(struct sVar*));
        it2_795=((struct sVar*)(__right_value545=map$2char$phsVar$ph$p_at(self,it_793,(struct sVar*)come_increment_ref_count(default_value_794))));
        come_call_finalizer3(__right_value545,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_796=string_get_hash_key(((char*)it_793))%size_788;
        n_797=hash_796;
        while((_Bool)1) {
            if(            item_existance_791[n_797]) {
                n_797++;
                if(                n_797>=size_788) {
                    n_797=0;
                }
                else if(                n_797==hash_796) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_791[n_797]=(_Bool)1;
                keys_789[n_797]=it_793;
                items_790[n_797]=((struct sVar*)(__right_value546=map$2char$phsVar$ph$p_at(self,it_793,(struct sVar*)come_increment_ref_count(default_value_798))));
                come_call_finalizer3(__right_value546,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_792++;
                come_call_finalizer3(default_value_798,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                come_call_finalizer3(default_value_798,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        come_call_finalizer3(default_value_794,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_789;
    self->items=items_790;
    self->item_existance=item_existance_791;
    self->size=size_788;
    self->len=len_792;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__361;
void* __right_value548 = (void*)0;
struct sVar* result_803;
void* __right_value549 = (void*)0;
char* __dec_obj115;
void* __right_value550 = (void*)0;
char* __dec_obj116;
void* __right_value551 = (void*)0;
struct sType* __dec_obj117;
void* __right_value552 = (void*)0;
char* __dec_obj118;
struct sVar* __result_obj__362;
    if(    self==(void*)0) {
        __result_obj__361 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__361,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__361;
    }
    result_803=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_803->mName;
        result_803->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj116=result_803->mCValueName;
        result_803->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj117=result_803->mType;
        result_803->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_803->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_803->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_803->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj118=result_803->mFunName;
        result_803->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__362 = come_increment_ref_count(result_803);
    come_call_finalizer3(result_803,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__362,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_804;
int i_805;
    for(    i_804=0;    i_804<self->size;    i_804++    ){
        if(        self->item_existance[i_804]) {
            if(            1) {
                come_call_finalizer3(self->items[i_804],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_805=0;    i_805<self->size;    i_805++    ){
        if(        self->item_existance[i_805]) {
            if(            1) {
                (self->keys[i_805] = come_decrement_ref_count(self->keys[i_805], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_814;
int caller_line_815;
char* caller_sname_816;
_Bool comma_instead_of_semicolon_817;
char* last_code_818;
char* __dec_obj129;
char* last_code2_819;
char* __dec_obj130;
void* __right_value577 = (void*)0;
char* sname_top_820;
int sline_top_821;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sFun* funX_822;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__376;
void* __right_value584 = (void*)0;
struct sType* result_type_825;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1sType$ph* param_types_826;
struct list$1sType$ph* o2_saved_827;
struct sType* it_830;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* param_type_833;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1char$ph* param_names_834;
void* __right_value591 = (void*)0;
struct list$1char$ph* param_default_parametors_835;
char* p_836;
int sline_837;
char* sname_838;
char* head_839;
struct buffer* source_840;
void* __right_value592 = (void*)0;
struct buffer* __dec_obj133;
struct sType* generics_type_saved_841;
void* __right_value593 = (void*)0;
struct sType* __dec_obj134;
struct list$1char$ph* method_generics_type_names_842;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1char$ph* __dec_obj135;
struct list$1char$ph* o2_saved_843;
char* it_844;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1char$ph* __dec_obj136;
char* __dec_obj137;
void* __right_value598 = (void*)0;
struct sBlock* block_845;
struct buffer* __dec_obj138;
char* __dec_obj139;
_Bool var_args_846;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sFun* fun_847;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value606 = (void*)0;
struct sNode* node_848;
_Bool in_generics_fun_849;
_Bool Value_850;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__383;
struct sType* __dec_obj140;
struct list$1char$ph* __dec_obj141;
void* __right_value610 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__384;
    caller_fun_814=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_815=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_816=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_817=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_818=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj129=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_819=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj130=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_820=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_821=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_822=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value578=__builtin_string(fun_name)))));
    (__right_value578 = come_decrement_ref_count(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_822) {
        __result_obj__376 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value583=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1971, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_818 = come_decrement_ref_count(last_code_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_819 = come_decrement_ref_count(last_code2_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_820 = come_decrement_ref_count(sname_top_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_822,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__right_value583,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__result_obj__376,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__376;
    }
    result_type_825=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_826=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1977, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_827=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_830=list$1sType$ph$p_begin((o2_saved_827));    !list$1sType$ph$p_end((o2_saved_827));    it_830=list$1sType$ph$p_next((o2_saved_827))    ){
        param_type_833=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value587=come_call_cloner(sType_clone, it_830))),generics_type,info));
        come_call_finalizer3(__right_value587,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph$p_add(param_types_826,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_833)));
        come_call_finalizer3(param_type_833,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_call_finalizer3(o2_saved_827,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_834=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_835=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_836=info->p;
    sline_837=info->sline;
    sname_838=(char*)come_increment_ref_count(info->sname);
    head_839=info->head;
    source_840=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj133=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj133,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_841=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj134=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_842=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj135=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2005, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj135,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_843=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_844=list$1char$ph$p_begin((o2_saved_843));    !list$1char$ph$p_end((o2_saved_843));    it_844=list$1char$ph$p_next((o2_saved_843))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_844)));
    }
    come_call_finalizer3(o2_saved_843,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj136=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj136,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj137=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_845=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_839;
    __dec_obj138=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_840);
    come_call_finalizer3(__dec_obj138,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_836;
    info->sline=sline_837;
    __dec_obj139=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_838);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_825->mInline=(_Bool)0;
    result_type_825->mStatic=(_Bool)0;
    result_type_825->mUniq=(_Bool)0;
    var_args_846=generics_fun->mVarArgs;
    fun_847=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2029, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_825),(struct list$1sType$ph*)come_increment_ref_count(param_types_826),(struct list$1char$ph*)come_increment_ref_count(param_names_834),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_835),(_Bool)0,var_args_846,(struct sBlock*)come_increment_ref_count(block_845),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_847));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2036, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value605=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2036, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_847),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_848=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value605,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    in_generics_fun_849=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_850=node_compile(node_848,info);
    if(    !Value_850) {
        __result_obj__383 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value609=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2041, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_818 = come_decrement_ref_count(last_code_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_819 = come_decrement_ref_count(last_code2_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_820 = come_decrement_ref_count(sname_top_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_822,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_825,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_826,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_834,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_835,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_838 = come_decrement_ref_count(sname_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_840,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(generics_type_saved_841,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(method_generics_type_names_842,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_845,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun_847,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_848) ? node_848 = come_decrement_ref_count(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value609,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__result_obj__383,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__383;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_849;
    __dec_obj140=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_841);
    come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj141=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_842);
    come_call_finalizer3(__dec_obj141,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj142=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_820));
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_821;
    __dec_obj143=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_818);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj144=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_819);
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_814;
    info->caller_line=caller_line_815;
    info->caller_sname=caller_sname_816;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_817;
    __result_obj__384 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value613=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2061, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_818 = come_decrement_ref_count(last_code_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_819 = come_decrement_ref_count(last_code2_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_820 = come_decrement_ref_count(sname_top_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_822,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(result_type_825,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_types_826,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_names_834,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_default_parametors_835,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_838 = come_decrement_ref_count(sname_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_840,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(generics_type_saved_841,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(method_generics_type_names_842,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(block_845,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(fun_847,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_848) ? node_848 = come_decrement_ref_count(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value613,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__384,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__384;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__373;
void* __right_value580 = (void*)0;
struct tuple2$2char$phbool$* result_823;
void* __right_value581 = (void*)0;
char* __dec_obj131;
struct tuple2$2char$phbool$* __result_obj__374;
    if(    self==(void*)0) {
        __result_obj__373 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__373,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__373;
    }
    result_823=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj131=result_823->v1;
        result_823->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_823->v2=self->v2;
    }
    __result_obj__374 = come_increment_ref_count(result_823);
    come_call_finalizer3(result_823,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__374,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__374;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_824;
    result_824=0;
    result_824+=int_get_hash_key(((int)self->v1));
    result_824+=int_get_hash_key(((int)self->v2));
    return result_824;
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
char* __dec_obj132;
struct tuple2$2char$phbool$* __result_obj__375;
    __dec_obj132=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__375 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__375,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__375;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_828;
struct sType* __result_obj__377;
struct sType* __result_obj__378;
struct sType* result_829;
struct sType* __result_obj__379;
result_828 = (void*)0;
result_829 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_828,0,sizeof(struct sType*));
        __result_obj__377 = result_828;
        return __result_obj__377;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__378 = self->it->item;
        return __result_obj__378;
    }
    memset(&result_829,0,sizeof(struct sType*));
    __result_obj__379 = result_829;
    return __result_obj__379;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_831;
struct sType* __result_obj__380;
struct sType* __result_obj__381;
struct sType* result_832;
struct sType* __result_obj__382;
result_831 = (void*)0;
result_832 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_831,0,sizeof(struct sType*));
        __result_obj__380 = result_831;
        return __result_obj__380;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__381 = self->it->item;
        return __result_obj__381;
    }
    memset(&result_832,0,sizeof(struct sType*));
    __result_obj__382 = result_832;
    return __result_obj__382;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_851;
int caller_line_852;
char* caller_sname_853;
_Bool comma_instead_of_semicolon_854;
char* last_code_855;
char* __dec_obj145;
char* last_code2_856;
char* __dec_obj146;
void* __right_value614 = (void*)0;
char* sname_top_857;
int sline_top_858;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sFun* funX_859;
_Bool __result_obj__385;
void* __right_value617 = (void*)0;
struct sType* result_type_860;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1sType$ph* param_types_861;
struct list$1sType$ph* o2_saved_862;
struct sType* it_863;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sType* param_type_864;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1char$ph* param_names_865;
void* __right_value624 = (void*)0;
struct list$1char$ph* param_default_parametors_866;
char* p_867;
int sline_868;
char* sname_869;
char* head_870;
struct buffer* source_871;
void* __right_value625 = (void*)0;
struct buffer* __dec_obj147;
struct list$1char$ph* method_generics_type_names_872;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1char$ph* __dec_obj148;
struct list$1char$ph* o2_saved_873;
char* it_874;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1char$ph* __dec_obj149;
char* __dec_obj150;
void* __right_value630 = (void*)0;
struct sBlock* block_875;
struct buffer* __dec_obj151;
char* __dec_obj152;
_Bool generate__876;
_Bool var_args_877;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sFun* fun_878;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value639 = (void*)0;
struct sNode* node_879;
_Bool Value_880;
void* __if_result__1_881 = (void*)0;
_Bool __result_obj__386;
struct list$1char$ph* __dec_obj153;
void* __right_value640 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
_Bool __result_obj__387;
    caller_fun_851=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_852=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_853=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_854=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_855=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj145=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_856=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj146=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_857=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_858=info->sline;
    funX_859=((struct sFun*)(__right_value616=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value615=__builtin_string(fun_name))))));
    (__right_value615 = come_decrement_ref_count(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value616,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    funX_859) {
        __result_obj__385 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_855 = come_decrement_ref_count(last_code_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_856 = come_decrement_ref_count(last_code2_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_857 = come_decrement_ref_count(sname_top_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__385;
    }
    result_type_860=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_861=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2090, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_862=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_863=list$1sType$ph$p_begin((o2_saved_862));    !list$1sType$ph$p_end((o2_saved_862));    it_863=list$1sType$ph$p_next((o2_saved_862))    ){
        param_type_864=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value620=come_call_cloner(sType_clone, it_863))),info));
        come_call_finalizer3(__right_value620,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph$p_add(param_types_861,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_864)));
        come_call_finalizer3(param_type_864,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_call_finalizer3(o2_saved_862,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_865=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_866=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_867=info->p;
    sline_868=info->sline;
    sname_869=(char*)come_increment_ref_count(info->sname);
    head_870=info->head;
    source_871=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj147=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_872=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj148=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2112, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj148,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_873=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_874=list$1char$ph$p_begin((o2_saved_873));    !list$1char$ph$p_end((o2_saved_873));    it_874=list$1char$ph$p_next((o2_saved_873))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_874)));
    }
    come_call_finalizer3(o2_saved_873,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj149=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj149,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj150=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_875=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_870;
    __dec_obj151=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_871);
    come_call_finalizer3(__dec_obj151,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_867;
    info->sline=sline_868;
    __dec_obj152=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_869);
    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_860->mInline=(_Bool)0;
    result_type_860->mStatic=(_Bool)0;
    result_type_860->mUniq=(_Bool)0;
    generate__876=(_Bool)0;
    if(    result_type_860->mGenerate) {
        result_type_860->mGenerate=(_Bool)0;
        generate__876=(_Bool)1;
    }
    var_args_877=generics_fun->mVarArgs;
    fun_878=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2142, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_860),(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_861)),(struct list$1char$ph*)come_increment_ref_count(param_names_865),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_866),(_Bool)0,var_args_877,(struct sBlock*)come_increment_ref_count(block_875),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__876,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_878));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2149, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value638=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2149, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_878),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_879=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value638,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_880=node_compile(node_879,info);
    if(    !Value_880) {
        __result_obj__386 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_855 = come_decrement_ref_count(last_code_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_856 = come_decrement_ref_count(last_code2_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_857 = come_decrement_ref_count(sname_top_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_860,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_861,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_865,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_866,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_869 = come_decrement_ref_count(sname_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_871,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(method_generics_type_names_872,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_875,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun_878,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_879) ? node_879 = come_decrement_ref_count(node_879, ((struct sNode*)node_879)->finalize, ((struct sNode*)node_879)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__386;
    }
    else {
        __if_result__1_881=(void*)(Value_880);
;
    }
    __dec_obj153=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_872);
    come_call_finalizer3(__dec_obj153,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj154=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_857));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_858;
    __dec_obj155=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_855);
    __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj156=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_856);
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_851;
    info->caller_line=caller_line_852;
    info->caller_sname=caller_sname_853;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_854;
    __result_obj__387 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_855 = come_decrement_ref_count(last_code_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_856 = come_decrement_ref_count(last_code2_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_857 = come_decrement_ref_count(sname_top_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_860,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_types_861,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_names_865,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_default_parametors_866,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_869 = come_decrement_ref_count(sname_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_871,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(method_generics_type_names_872,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(block_875,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(fun_878,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_879) ? node_879 = come_decrement_ref_count(node_879, ((struct sNode*)node_879)->finalize, ((struct sNode*)node_879)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__387;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_882;
char* source_head_883;
void* __right_value641 = (void*)0;
char* attribute_884;
struct sType* result_type_885;
char* var_name_886;
_Bool constructor__887;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sType* __dec_obj157;
void* __right_value644 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* result_type2_888=0;
char* var_name2_889=0;
_Bool err_890=0;
struct sType* __dec_obj158;
char* __dec_obj159;
_Bool method_definition_891;
char* p_892;
int sline_893;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct buffer* buf2_894;
char* fun_name_895;
char* base_fun_name_896;
struct sType* obj_type2_897;
void* __right_value647 = (void*)0;
char* __dec_obj160;
void* __right_value648 = (void*)0;
char* __dec_obj161;
void* __right_value649 = (void*)0;
struct sType* __dec_obj162;
void* __right_value650 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* obj_type_898=0;
char* name_899=0;
_Bool err_900=0;
void* __right_value651 = (void*)0;
char* __dec_obj163;
void* __right_value652 = (void*)0;
char* __dec_obj164;
void* __right_value653 = (void*)0;
struct sType* __dec_obj165;
void* __right_value654 = (void*)0;
char* __dec_obj166;
void* __right_value655 = (void*)0;
char* __dec_obj167;
void* __right_value656 = (void*)0;
struct sType* __dec_obj168;
void* __right_value657 = (void*)0;
char* __dec_obj169;
void* __right_value658 = (void*)0;
char* __dec_obj170;
void* __right_value659 = (void*)0;
struct sType* __dec_obj171;
void* __right_value660 = (void*)0;
char* __dec_obj172;
void* __right_value661 = (void*)0;
char* __dec_obj173;
void* __right_value662 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var31 = (void*)0;
struct list$1sType$ph* param_types_901=0;
struct list$1char$ph* param_names_902=0;
struct list$1char$ph* param_default_parametors_903=0;
_Bool var_args_904=0;
char* header_tail_905;
int version_906;
int n_907;
void* __right_value663 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var32 = (void*)0;
char* asm_fun_908=0;
char* fun_attribute_909=0;
void* __right_value664 = (void*)0;
char* __dec_obj174;
_Bool in_top_level_910;
void* __right_value665 = (void*)0;
struct sBlock* block_911;
void* __right_value666 = (void*)0;
char* fun_name_913;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sFun* fun_914;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sFun* fun2_915;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value679 = (void*)0;
struct sNode* __result_obj__390;
void* __right_value680 = (void*)0;
char* none_generics_name_917;
void* __right_value681 = (void*)0;
char* generics_sname_918;
int generics_sline_919;
void* __right_value682 = (void*)0;
char* block_920;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sGenericsFun* fun_921;
void* __right_value689 = (void*)0;
char* fun_name3_922;
void* __right_value695 = (void*)0;
struct sNode* __result_obj__402;
void* __right_value696 = (void*)0;
char* generics_sname_944;
int generics_sline_945;
void* __right_value697 = (void*)0;
char* block_946;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sGenericsFun* fun_947;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sNode* __result_obj__403;
char* source_tail_948;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
char* new_fun_name_949;
void* __right_value708 = (void*)0;
char* __dec_obj176;
void* __right_value709 = (void*)0;
struct sBlock* block_950;
_Bool static_fun_951;
_Bool inline_fun_952;
_Bool uniq_fun_953;
_Bool generate_fun_954;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sFun* fun_955;
void* __right_value714 = (void*)0;
char* header_956;
void* __right_value715 = (void*)0;
char* id_957;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sFun* fun2_958;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value722 = (void*)0;
struct sNode* __result_obj__404;
void* __right_value723 = (void*)0;
char* new_fun_name_959;
void* __right_value724 = (void*)0;
char* __dec_obj177;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sFun* fun_960;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* fun2_961;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* header_962;
void* __right_value732 = (void*)0;
char* id_963;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value735 = (void*)0;
struct sNode* __result_obj__405;
void* __right_value736 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_964=0;
char* fun_attribute2_965=0;
void* __right_value737 = (void*)0;
char* __dec_obj178;
void* __right_value738 = (void*)0;
char* __dec_obj179;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sFun* fun_966;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sFun* fun2_967;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
char* header_968;
void* __right_value746 = (void*)0;
char* id_969;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value749 = (void*)0;
struct sNode* __result_obj__406;
void* __right_value750 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c22_970=0;
char* Err_971=0;
struct sNode* __result_obj__407;
fun_name_895 = (void*)0;
    header_head_882=info->p;
    source_head_883=info->p;
    attribute_884=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_885=((void*)0);
    var_name_886=((void*)0);
    constructor__887=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value642=parse_word(info)));
        (__right_value642 = come_decrement_ref_count(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj157=result_type_885;
        result_type_885=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_885->mHeap=(_Bool)1;
        constructor__887=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value644=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_888=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
        var_name2_889=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        err_890=multiple_assign_var29->v3;
        come_call_finalizer3(__right_value644,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj158=result_type_885;
        result_type_885=(struct sType*)come_increment_ref_count(result_type2_888);
        come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj159=var_name_886;
        var_name_886=(char*)come_increment_ref_count(var_name2_889);
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !err_890) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_888,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name2_889 = come_decrement_ref_count(var_name2_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_891=(_Bool)0;
    {
        p_892=info->p;
        sline_893=info->sline;
        buf2_894=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2210, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_894,*info->p);
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
        if(        buffer_length(buf2_894)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_891=(_Bool)1;
        }
        info->p=p_892;
        info->sline=sline_893;
        come_call_finalizer3(buf2_894,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    base_fun_name_896=((void*)0);
    obj_type2_897=((void*)0);
    if(    constructor__887) {
        __dec_obj160=base_fun_name_896;
        base_fun_name_896=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj161=fun_name_895;
        fun_name_895=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_896,info,(_Bool)1));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj162=obj_type2_897;
        obj_type2_897=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_891) {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value650=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_898=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        name_899=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_900=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value650,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_900) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj163=base_fun_name_896;
        base_fun_name_896=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj164=fun_name_895;
        fun_name_895=(char*)come_increment_ref_count(create_method_name(obj_type_898,(_Bool)0,base_fun_name_896,info,(_Bool)1));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj165=obj_type2_897;
        obj_type2_897=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_type_898));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(obj_type_898,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_899 = come_decrement_ref_count(name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj166=base_fun_name_896;
        base_fun_name_896=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj167=fun_name_895;
        fun_name_895=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_896,info,(_Bool)1));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj168=obj_type2_897;
        obj_type2_897=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj169=base_fun_name_896;
        base_fun_name_896=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj170=fun_name_895;
        fun_name_895=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_896,info,(_Bool)1));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj171=obj_type2_897;
        obj_type2_897=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj172=fun_name_895;
        fun_name_895=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj173=base_fun_name_896;
        base_fun_name_896=(char*)come_increment_ref_count(__builtin_string(fun_name_895));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_896,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var31=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value662=parse_params(info,constructor__887)));
    param_types_901=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var31->v1);
    param_names_902=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v2);
    param_default_parametors_903=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v3);
    var_args_904=multiple_assign_var31->v4;
    come_call_finalizer3(__right_value662,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    header_tail_905=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_896,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_906=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_907=0;
        while(xisdigit(*info->p)) {
            n_907=n_907*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_906=n_907;
    }
    multiple_assign_var32=((struct tuple2$2char$phchar$ph*)(__right_value663=parse_function_attribute(info)));
    asm_fun_908=(char*)come_increment_ref_count(multiple_assign_var32->v1);
    fun_attribute_909=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    come_call_finalizer3(__right_value663,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(asm_fun_908,"")) {
        __dec_obj174=fun_name_895;
        fun_name_895=(char*)come_increment_ref_count(__builtin_string(asm_fun_908));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    in_top_level_910=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_896,"lambda")) {
        block_911=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_912=0;
        lambda_num_912++;
        fun_name_913=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_912));
        result_type_885->mInline=(_Bool)0;
        result_type_885->mStatic=(_Bool)0;
        result_type_885->mUniq=(_Bool)0;
        result_type_885->mGenerate=(_Bool)0;
        fun_914=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2330, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_913)),(struct sType*)come_increment_ref_count(result_type_885),(struct list$1sType$ph*)come_increment_ref_count(param_types_901),(struct list$1char$ph*)come_increment_ref_count(param_names_902),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_903),(_Bool)0,var_args_904,(struct sBlock*)come_increment_ref_count(block_911),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_915=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value672=__builtin_string(fun_name_913)))));
        (__right_value672 = come_decrement_ref_count(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_915==((void*)0)||fun2_915->mExternal) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_913)),(struct sFun*)come_increment_ref_count(fun_914));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2340, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value676=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2340, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_914,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__390 = come_increment_ref_count(((struct sNode*)(__right_value679=_inf_value5)));
        come_call_finalizer3(block_911,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_913 = come_decrement_ref_count(fun_name_913, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_914,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_915,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_884 = come_decrement_ref_count(attribute_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_886 = come_decrement_ref_count(var_name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_895 = come_decrement_ref_count(fun_name_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_896 = come_decrement_ref_count(base_fun_name_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_897,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_901,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_902,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_903,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_908 = come_decrement_ref_count(asm_fun_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_909 = come_decrement_ref_count(fun_attribute_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value676,sLambdaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value679) ? __right_value679 = come_decrement_ref_count(__right_value679, ((struct sNode*)__right_value679)->finalize, ((struct sNode*)__right_value679)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__390) ? __result_obj__390 = come_decrement_ref_count(__result_obj__390, ((struct sNode*)__result_obj__390)->finalize, ((struct sNode*)__result_obj__390)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__390;
        come_call_finalizer3(block_911,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_913 = come_decrement_ref_count(fun_name_913, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_914,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_915,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_917=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_918=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_919=info->sline;
        block_920=(char*)come_increment_ref_count(skip_block(info));
        fun_921=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2350, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value684=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value685=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sType*)come_increment_ref_count(result_type_885),(struct list$1sType$ph*)come_increment_ref_count(param_types_901),(struct list$1char$ph*)come_increment_ref_count(param_names_902),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_903),var_args_904,(char*)come_increment_ref_count(block_920),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_918)),generics_sline_919));
        come_call_finalizer3(__right_value684,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__right_value685,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fun_name3_922=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_917,base_fun_name_896));
        map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_922)),(struct sGenericsFun*)come_increment_ref_count(fun_921));
        __result_obj__402 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_917 = come_decrement_ref_count(none_generics_name_917, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_918 = come_decrement_ref_count(generics_sname_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_920 = come_decrement_ref_count(block_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_921,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_922 = come_decrement_ref_count(fun_name3_922, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_884 = come_decrement_ref_count(attribute_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_886 = come_decrement_ref_count(var_name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_895 = come_decrement_ref_count(fun_name_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_896 = come_decrement_ref_count(base_fun_name_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_897,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_901,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_902,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_903,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_908 = come_decrement_ref_count(asm_fun_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_909 = come_decrement_ref_count(fun_attribute_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__402) ? __result_obj__402 = come_decrement_ref_count(__result_obj__402, ((struct sNode*)__result_obj__402)->finalize, ((struct sNode*)__result_obj__402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__402;
        (none_generics_name_917 = come_decrement_ref_count(none_generics_name_917, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_918 = come_decrement_ref_count(generics_sname_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_920 = come_decrement_ref_count(block_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_921,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_922 = come_decrement_ref_count(fun_name3_922, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_944=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_945=info->sline;
        block_946=(char*)come_increment_ref_count(skip_block(info));
        fun_947=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2364, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value699=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value700=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sType*)come_increment_ref_count(result_type_885),(struct list$1sType$ph*)come_increment_ref_count(param_types_901),(struct list$1char$ph*)come_increment_ref_count(param_names_902),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_903),var_args_904,(char*)come_increment_ref_count(block_946),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_944)),generics_sline_945));
        come_call_finalizer3(__right_value699,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__right_value700,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        method_definition_891) {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sGenericsFun*)come_increment_ref_count(fun_947));
        }
        else {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_896)),(struct sGenericsFun*)come_increment_ref_count(fun_947));
        }
        __result_obj__403 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_944 = come_decrement_ref_count(generics_sname_944, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_946 = come_decrement_ref_count(block_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_947,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_884 = come_decrement_ref_count(attribute_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_886 = come_decrement_ref_count(var_name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_895 = come_decrement_ref_count(fun_name_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_896 = come_decrement_ref_count(base_fun_name_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_897,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_901,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_902,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_903,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_908 = come_decrement_ref_count(asm_fun_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_909 = come_decrement_ref_count(fun_attribute_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__403;
        (generics_sname_944 = come_decrement_ref_count(generics_sname_944, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_946 = come_decrement_ref_count(block_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_947,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_948=info->p-1;
        if(        version_906>0) {
            new_fun_name_949=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value706=__builtin_string(fun_name_895))),version_906));
            (__right_value706 = come_decrement_ref_count(__right_value706, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj176=fun_name_895;
            fun_name_895=(char*)come_increment_ref_count(__builtin_string(new_fun_name_949));
            __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_949 = come_decrement_ref_count(new_fun_name_949, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_950=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__887,(_Bool)1));
        static_fun_951=(_Bool)0;
        if(        result_type_885->mStatic) {
            result_type_885->mStatic=(_Bool)0;
            result_type_885->mUniq=(_Bool)0;
            static_fun_951=(_Bool)1;
        }
        inline_fun_952=(_Bool)0;
        if(        result_type_885->mInline) {
            result_type_885->mInline=(_Bool)0;
            result_type_885->mUniq=(_Bool)0;
            inline_fun_952=(_Bool)1;
        }
        uniq_fun_953=(_Bool)0;
        if(        result_type_885->mUniq) {
            result_type_885->mUniq=(_Bool)0;
            result_type_885->mInline=(_Bool)0;
            result_type_885->mStatic=(_Bool)0;
            uniq_fun_953=(_Bool)1;
        }
        generate_fun_954=(_Bool)0;
        if(        result_type_885->mUniq) {
            result_type_885->mUniq=(_Bool)0;
            result_type_885->mInline=(_Bool)0;
            result_type_885->mStatic=(_Bool)0;
            generate_fun_954=(_Bool)1;
        }
        fun_955=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2414, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sType*)come_increment_ref_count(result_type_885),(struct list$1sType$ph*)come_increment_ref_count(param_types_901),(struct list$1char$ph*)come_increment_ref_count(param_names_902),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_903),(_Bool)0,var_args_904,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_950)),static_fun_951,info,inline_fun_952,uniq_fun_953,generate_fun_954,(char*)come_increment_ref_count(attribute_884),(char*)come_increment_ref_count(fun_attribute_909)));
        if(        info->output_header_file) {
            if(            !result_type_885->mStatic&&!info->no_output_come_code) {
                header_956=(char*)come_increment_ref_count(make_come_header_function(fun_955,(char*)come_increment_ref_count(base_fun_name_896),(struct sType*)come_increment_ref_count(obj_type2_897),version_906,info));
                id_957=(char*)come_increment_ref_count(__builtin_string(fun_name_895));
                add_come_code_at_come_header(info,id_957,"%s",header_956);
                (header_956 = come_decrement_ref_count(header_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_957 = come_decrement_ref_count(id_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        info->in_class) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sFun*)come_increment_ref_count(fun_955));
        }
        else {
            fun2_958=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value717=__builtin_string(fun_name_895)))));
            (__right_value717 = come_decrement_ref_count(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_958==((void*)0)||fun2_958->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sFun*)come_increment_ref_count(fun_955));
            }
            come_call_finalizer3(fun2_958,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2440, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value721=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2440, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_955),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__404 = come_increment_ref_count(((struct sNode*)(__right_value722=_inf_value6)));
        come_call_finalizer3(block_950,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun_955,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_884 = come_decrement_ref_count(attribute_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_886 = come_decrement_ref_count(var_name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_895 = come_decrement_ref_count(fun_name_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_896 = come_decrement_ref_count(base_fun_name_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type2_897,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_901,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_902,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_903,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_908 = come_decrement_ref_count(asm_fun_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_909 = come_decrement_ref_count(fun_attribute_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value721,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value722) ? __right_value722 = come_decrement_ref_count(__right_value722, ((struct sNode*)__right_value722)->finalize, ((struct sNode*)__right_value722)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__404) ? __result_obj__404 = come_decrement_ref_count(__result_obj__404, ((struct sNode*)__result_obj__404)->finalize, ((struct sNode*)__result_obj__404)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__404;
        come_call_finalizer3(block_950,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun_955,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_906>0) {
            new_fun_name_959=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_895,version_906));
            __dec_obj177=fun_name_895;
            fun_name_895=(char*)come_increment_ref_count(__builtin_string(new_fun_name_959));
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_959 = come_decrement_ref_count(new_fun_name_959, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_885->mStatic=(_Bool)0;
            result_type_885->mUniq=(_Bool)0;
            result_type_885->mInline=(_Bool)0;
            result_type_885->mGenerate=(_Bool)0;
            fun_960=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2457, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sType*)come_increment_ref_count(result_type_885),(struct list$1sType$ph*)come_increment_ref_count(param_types_901),(struct list$1char$ph*)come_increment_ref_count(param_names_902),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_903),(_Bool)1,var_args_904,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_884),(char*)come_increment_ref_count(fun_attribute_909)));
            fun2_961=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value728=__builtin_string(fun_name_895)))));
            (__right_value728 = come_decrement_ref_count(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_961==((void*)0)||fun2_961->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sFun*)come_increment_ref_count(fun_960));
            }
            if(            info->output_header_file) {
                if(                !result_type_885->mStatic&&!info->no_output_come_code) {
                    header_962=(char*)come_increment_ref_count(make_come_header_function(fun_960,(char*)come_increment_ref_count(base_fun_name_896),(struct sType*)come_increment_ref_count(obj_type2_897),version_906,info));
                    id_963=(char*)come_increment_ref_count(__builtin_string(fun_name_895));
                    add_come_code_at_come_header(info,id_963,"%s",header_962);
                    (header_962 = come_decrement_ref_count(header_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_963 = come_decrement_ref_count(id_963, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2477, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value734=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2477, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_960),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__405 = come_increment_ref_count(((struct sNode*)(__right_value735=_inf_value7)));
            come_call_finalizer3(fun_960,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(fun2_961,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_884 = come_decrement_ref_count(attribute_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_886 = come_decrement_ref_count(var_name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_895 = come_decrement_ref_count(fun_name_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_896 = come_decrement_ref_count(base_fun_name_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(obj_type2_897,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_types_901,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_names_902,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_default_parametors_903,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_908 = come_decrement_ref_count(asm_fun_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_909 = come_decrement_ref_count(fun_attribute_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value734,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value735) ? __right_value735 = come_decrement_ref_count(__right_value735, ((struct sNode*)__right_value735)->finalize, ((struct sNode*)__right_value735)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__405) ? __result_obj__405 = come_decrement_ref_count(__result_obj__405, ((struct sNode*)__result_obj__405)->finalize, ((struct sNode*)__result_obj__405)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__405;
            come_call_finalizer3(fun_960,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(fun2_961,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value736=parse_function_attribute(info)));
            asm_fun_964=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute2_965=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value736,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            string_operator_not_equals(asm_fun_964,"")) {
                __dec_obj178=fun_name_895;
                fun_name_895=(char*)come_increment_ref_count(__builtin_string(asm_fun_964));
                __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            __dec_obj179=fun_attribute_909;
            fun_attribute_909=(char*)come_increment_ref_count(string_operator_add(fun_attribute_909,fun_attribute2_965));
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            result_type_885->mStatic=(_Bool)0;
            result_type_885->mUniq=(_Bool)0;
            result_type_885->mInline=(_Bool)0;
            result_type_885->mGenerate=(_Bool)0;
            fun_966=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2493, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sType*)come_increment_ref_count(result_type_885),(struct list$1sType$ph*)come_increment_ref_count(param_types_901),(struct list$1char$ph*)come_increment_ref_count(param_names_902),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_903),(_Bool)1,var_args_904,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_884),(char*)come_increment_ref_count(fun_attribute_909)));
            fun2_967=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value742=__builtin_string(fun_name_895)))));
            (__right_value742 = come_decrement_ref_count(__right_value742, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_967==((void*)0)||fun2_967->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sFun*)come_increment_ref_count(fun_966));
            }
            if(            info->output_header_file) {
                if(                !result_type_885->mStatic&&!info->no_output_come_code) {
                    header_968=(char*)come_increment_ref_count(make_come_header_function(fun_966,(char*)come_increment_ref_count(base_fun_name_896),(struct sType*)come_increment_ref_count(obj_type2_897),version_906,info));
                    id_969=(char*)come_increment_ref_count(__builtin_string(fun_name_895));
                    add_come_code_at_come_header(info,id_969,"%s",header_968);
                    (header_968 = come_decrement_ref_count(header_968, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_969 = come_decrement_ref_count(id_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2515, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value748=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2515, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_966),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__406 = come_increment_ref_count(((struct sNode*)(__right_value749=_inf_value8)));
            (asm_fun_964 = come_decrement_ref_count(asm_fun_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_965 = come_decrement_ref_count(fun_attribute2_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(fun_966,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(fun2_967,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_884 = come_decrement_ref_count(attribute_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_886 = come_decrement_ref_count(var_name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_895 = come_decrement_ref_count(fun_name_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_896 = come_decrement_ref_count(base_fun_name_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(obj_type2_897,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_types_901,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_names_902,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_default_parametors_903,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_908 = come_decrement_ref_count(asm_fun_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_909 = come_decrement_ref_count(fun_attribute_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value748,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value749) ? __right_value749 = come_decrement_ref_count(__right_value749, ((struct sNode*)__right_value749)->finalize, ((struct sNode*)__right_value749)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__406) ? __result_obj__406 = come_decrement_ref_count(__result_obj__406, ((struct sNode*)__result_obj__406)->finalize, ((struct sNode*)__result_obj__406)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__406;
            (asm_fun_964 = come_decrement_ref_count(asm_fun_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_965 = come_decrement_ref_count(fun_attribute2_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(fun_966,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(fun2_967,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value750=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_exception_var_c22_970=multiple_assign_var34->v1;
        Err_971=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_971)?(puts(Err_971),exit(0)):(0));
        come_call_finalizer3(__right_value750,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
        (Err_971 = come_decrement_ref_count(Err_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_910;
    __result_obj__407 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_884 = come_decrement_ref_count(attribute_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_886 = come_decrement_ref_count(var_name_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_895 = come_decrement_ref_count(fun_name_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_896 = come_decrement_ref_count(base_fun_name_896, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(obj_type2_897,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_types_901,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_names_902,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_default_parametors_903,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (asm_fun_908 = come_decrement_ref_count(asm_fun_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute_909 = come_decrement_ref_count(fun_attribute_909, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__407) ? __result_obj__407 = come_decrement_ref_count(__result_obj__407, ((struct sNode*)__result_obj__407)->finalize, ((struct sNode*)__result_obj__407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__407;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__388;
void* __right_value677 = (void*)0;
struct sLambdaNode* result_916;
void* __right_value678 = (void*)0;
char* __dec_obj175;
struct sLambdaNode* __result_obj__389;
    if(    self==(void*)0) {
        __result_obj__388 = (void*)0;
        return __result_obj__388;
    }
    result_916=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_916->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_916->sname;
        result_916->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_916->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_916->mFun=self->mFun;
    }
    __result_obj__389 = result_916;
    come_call_finalizer3(result_916,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__389;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_940;
unsigned int it_941;
_Bool same_key_exist_942;
char* it2_943;
struct map$2char$phsGenericsFun$ph* __result_obj__401;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph$p_rehash(self);
    }
    hash_940=string_get_hash_key(((char*)key))%self->size;
    it_941=hash_940;
    while((_Bool)1) {
        if(        self->item_existance[it_941]) {
            if(            string_equals(self->keys[it_941],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_941]);
                    (self->keys[it_941] = come_decrement_ref_count(self->keys[it_941], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_941]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_941]);
                    self->keys[it_941]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_941],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_941]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_941]=item;
                }
                break;
            }
            it_941++;
            if(            it_941>=self->size) {
                it_941=0;
            }
            else if(            it_941==hash_940) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_941]=(_Bool)1;
            if(            1) {
                self->keys[it_941]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_941]=key;
            }
            if(            1) {
                self->items[it_941]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_941]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_942=(_Bool)0;
    for(    it2_943=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_943=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_943,key)) {
            same_key_exist_942=(_Bool)1;
        }
    }
    if(    !same_key_exist_942) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__401 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__401;
}

static void map$2char$phsGenericsFun$ph$p_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_923;
void* __right_value690 = (void*)0;
char** keys_924;
void* __right_value691 = (void*)0;
struct sGenericsFun** items_925;
void* __right_value692 = (void*)0;
_Bool* item_existance_926;
int len_927;
char* it_930;
struct sGenericsFun* default_value_933;
void* __right_value693 = (void*)0;
struct sGenericsFun* it2_934;
unsigned int hash_937;
int n_938;
struct sGenericsFun* default_value_939;
void* __right_value694 = (void*)0;
default_value_933 = (void*)0;
default_value_939 = (void*)0;
    size_923=self->size*10;
    keys_924=(char**)come_increment_ref_count(((char**)(__right_value690=(char**)come_calloc(1, sizeof(char*)*(1*(size_923)), "./comelang.h", 2911, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_925=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value691=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_923)), "./comelang.h", 2912, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_926=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value692=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_923)), "./comelang.h", 2913, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_927=0;
    for(    it_930=map$2char$phsGenericsFun$ph$p_begin(self);    !map$2char$phsGenericsFun$ph$p_end(self);    it_930=map$2char$phsGenericsFun$ph$p_next(self)    ){
        memset(&default_value_933,0,sizeof(struct sGenericsFun*));
        it2_934=((struct sGenericsFun*)(__right_value693=map$2char$phsGenericsFun$ph$p_at(self,it_930,(struct sGenericsFun*)come_increment_ref_count(default_value_933))));
        come_call_finalizer3(__right_value693,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_937=string_get_hash_key(((char*)it_930))%size_923;
        n_938=hash_937;
        while((_Bool)1) {
            if(            item_existance_926[n_938]) {
                n_938++;
                if(                n_938>=size_923) {
                    n_938=0;
                }
                else if(                n_938==hash_937) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_926[n_938]=(_Bool)1;
                keys_924[n_938]=it_930;
                items_925[n_938]=((struct sGenericsFun*)(__right_value694=map$2char$phsGenericsFun$ph$p_at(self,it_930,(struct sGenericsFun*)come_increment_ref_count(default_value_939))));
                come_call_finalizer3(__right_value694,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_927++;
                come_call_finalizer3(default_value_939,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                come_call_finalizer3(default_value_939,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        come_call_finalizer3(default_value_933,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_924;
    self->items=items_925;
    self->item_existance=item_existance_926;
    self->size=size_923;
    self->len=len_927;
}

static char* map$2char$phsGenericsFun$ph$p_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_928;
char* __result_obj__391;
char* __result_obj__392;
char* result_929;
char* __result_obj__393;
result_928 = (void*)0;
result_929 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_928,0,sizeof(char*));
        __result_obj__391 = result_928;
        return __result_obj__391;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__392 = self->key_list->it->item;
        return __result_obj__392;
    }
    memset(&result_929,0,sizeof(char*));
    __result_obj__393 = result_929;
    return __result_obj__393;
}

static _Bool map$2char$phsGenericsFun$ph$p_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph$p_next(struct map$2char$phsGenericsFun$ph* self){
char* result_931;
char* __result_obj__394;
char* __result_obj__395;
char* result_932;
char* __result_obj__396;
result_931 = (void*)0;
result_932 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_931,0,sizeof(char*));
        __result_obj__394 = result_931;
        return __result_obj__394;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__395 = self->key_list->it->item;
        return __result_obj__395;
    }
    memset(&result_932,0,sizeof(char*));
    __result_obj__396 = result_932;
    return __result_obj__396;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_935;
unsigned int it_936;
struct sGenericsFun* __result_obj__397;
struct sGenericsFun* __result_obj__398;
struct sGenericsFun* __result_obj__399;
struct sGenericsFun* __result_obj__400;
    hash_935=string_get_hash_key(((char*)key))%self->size;
    it_936=hash_935;
    while((_Bool)1) {
        if(        self->item_existance[it_936]) {
            if(            string_equals(self->keys[it_936],key)) {
                __result_obj__397 = come_increment_ref_count(self->items[it_936]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__397,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__397;
            }
            it_936++;
            if(            it_936>=self->size) {
                it_936=0;
            }
            else if(            it_936==hash_935) {
                __result_obj__398 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__398,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__398;
            }
        }
        else {
            __result_obj__399 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__399,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__399;
        }
    }
    __result_obj__400 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__400,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__400;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer3(self->mImplType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_972;
char* __dec_obj180;
char* last_code2_973;
char* __dec_obj181;
_Bool comma_instead_of_semicolon_974;
struct sClass* current_stack_frame_struct_975;
char* real_fun_name_976;
struct sFun* finalizer_977;
void* __right_value751 = (void*)0;
struct sType* type_before_978;
void* __right_value752 = (void*)0;
struct sType* type2_979;
void* __right_value753 = (void*)0;
char* fun_name2_980;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
char* none_generics_name_981;
void* __right_value756 = (void*)0;
char* generics_fun_name_982;
void* __right_value757 = (void*)0;
struct sGenericsFun* generics_fun_983;
void* __right_value758 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_987=0;
_Bool err_988=0;
void* __right_value759 = (void*)0;
char* __dec_obj182;
int i_989;
void* __right_value760 = (void*)0;
char* new_fun_name_990;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
char* __dec_obj183;
void* __right_value763 = (void*)0;
char* __dec_obj184;
void* __right_value764 = (void*)0;
char* __dec_obj185;
void* __right_value765 = (void*)0;
char* user_real_fun_name_991;
void* __right_value766 = (void*)0;
struct sFun* user_finalizer_992;
void* __right_value767 = (void*)0;
struct sType* type2_993;
struct sClass* klass_994;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct buffer* source_995;
void* __right_value770 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1002;
struct tuple2$2char$phsType$ph* it_1005;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1008=0;
struct sType* field_type_1009=0;
char* p_1012;
int sline_1013;
char* sname_1014;
char* head_1015;
struct buffer* source3_1016;
struct buffer* __dec_obj186;
void* __right_value771 = (void*)0;
char* __dec_obj187;
void* __right_value772 = (void*)0;
struct sBlock* block_1017;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sType* result_type_1018;
void* __right_value776 = (void*)0;
char* name_1019;
void* __right_value777 = (void*)0;
struct sType* self_type_1020;
struct sType* __list_values1___1022[1];
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct list$1sType$ph* param_types_1021;
void* __right_value781 = (void*)0;
char* __list_values2___1026[1];
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct list$1char$ph* param_names_1030;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1char$ph* param_default_parametors_1031;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sFun* fun2_1032;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sFun* fun_1033;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value796 = (void*)0;
struct sNode* node_1034;
_Bool Value_1035;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__433;
memset(&i_989, 0, sizeof(int));
    last_code_972=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj180=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_973=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj181=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_974=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_975=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_976=((void*)0);
    finalizer_977=((void*)0);
    type_before_978=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_979=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_979->mHeap=(_Bool)0;
    fun_name2_980=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_977=((struct sFun*)(__right_value754=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_980)));
        come_call_finalizer3(__right_value754,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        finalizer_977==((void*)0)) {
            none_generics_name_981=(char*)come_increment_ref_count(get_none_generics_name(type2_979->mClass->mName));
            generics_fun_name_982=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_981,fun_name));
            generics_fun_983=((struct sGenericsFun*)(__right_value757=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_982)));
            come_call_finalizer3(__right_value757,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_983) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value758=create_generics_fun((char*)come_increment_ref_count(fun_name2_980),generics_fun_983,type,info)));
                name_987=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_988=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value758,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_988) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_977=((struct sFun*)(__right_value759=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_987)));
                come_call_finalizer3(__right_value759,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_987 = come_decrement_ref_count(name_987, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_981 = come_decrement_ref_count(none_generics_name_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_982 = come_decrement_ref_count(generics_fun_name_982, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj182=real_fun_name_976;
        real_fun_name_976=(char*)come_increment_ref_count(fun_name2_980);
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        for(        i_989=128-1;        i_989>=1;        i_989--        ){
            new_fun_name_990=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_980,i_989));
            finalizer_977=((struct sFun*)(__right_value761=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_990)));
            come_call_finalizer3(__right_value761,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_977) {
                __dec_obj183=fun_name2_980;
                fun_name2_980=(char*)come_increment_ref_count(__builtin_string(new_fun_name_990));
                __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_990 = come_decrement_ref_count(new_fun_name_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_990 = come_decrement_ref_count(new_fun_name_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_977==((void*)0)) {
            finalizer_977=((struct sFun*)(__right_value763=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_980)));
            come_call_finalizer3(__right_value763,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj184=real_fun_name_976;
        real_fun_name_976=(char*)come_increment_ref_count(fun_name2_980);
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    finalizer_977==((void*)0)) {
        type=type_before_978;
        __dec_obj185=real_fun_name_976;
        real_fun_name_976=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        user_real_fun_name_991=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_992=((struct sFun*)(__right_value766=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_991)));
        come_call_finalizer3(__right_value766,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_993=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_993;
        klass_994=type->mClass;
        if(        type->mPointerNum>0&&klass_994->mStruct||type->mAllocaValue) {
            source_995=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2615, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_char(source_995,123);
            if(            user_finalizer_992) {
                char source2_996[1024];
                memset(&source2_996, 0, sizeof(char)                *(1024)                );
                snprintf(source2_996,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_991);
                buffer_append_str(source_995,source2_996);
            }
            klass_994=((struct sClass*)(__right_value770=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_994->mName)));
            come_call_finalizer3(__right_value770,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1002=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_994->mFields)),it_1005=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1002));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1002));            it_1005=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1002))            ){
                multiple_assign_var36=it_1005;
                name_1008=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1009=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1009->mHeap) {
                    char source2_1010[1024];
                    memset(&source2_1010, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1010,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_1008,name_1008,name_1008,name_1008);
                    buffer_append_str(source_995,source2_1010);
                }
                else if(                field_type_1009->mChannel) {
                    char source2_1011[1024];
                    memset(&source2_1011, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1011,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1008,name_1008);
                    buffer_append_str(source_995,source2_1011);
                    snprintf(source2_1011,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1008,name_1008);
                    buffer_append_str(source_995,source2_1011);
                }
                (name_1008 = come_decrement_ref_count(name_1008, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1009,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_1002,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_char(source_995,125);
            p_1012=info->p;
            sline_1013=info->sline;
            sname_1014=(char*)come_increment_ref_count(info->sname);
            head_1015=info->head;
            source3_1016=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj186=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_995);
            come_call_finalizer3(__dec_obj186,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_995->buf;
            info->head=source_995->buf;
            __dec_obj187=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_976));
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=0;
            block_1017=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1018=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2664, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_1019=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_976));
            self_type_1020=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1020->mHeap=(_Bool)0;
            if(            self_type_1020->mPointerNum==0) {
                self_type_1020->mPointerNum=1;
            }
            if(            self_type_1020->mPointerNum>1) {
                self_type_1020->mPointerNum=1;
            }
            param_types_1021=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___1022[0]=self_type_1020,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2674, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values1___1022)));
            param_names_1030=(struct list$1char$ph*)come_increment_ref_count((__list_values2___1026[0]=((char*)(__right_value781=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2675, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values2___1026)));
            (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_1031=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2676, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1031,((void*)0));
            result_type_1018->mStatic=(_Bool)0;
            result_type_1018->mUniq=(_Bool)0;
            result_type_1018->mInline=(_Bool)0;
            result_type_1018->mGenerate=(_Bool)0;
            fun2_1032=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value787=__builtin_string(name_1019)))));
            (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1032==((void*)0)||fun2_1032->mExternal) {
                fun_1033=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2686, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1019),(struct sType*)come_increment_ref_count(result_type_1018),(struct list$1sType$ph*)come_increment_ref_count(param_types_1021),(struct list$1char$ph*)come_increment_ref_count(param_names_1030),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1031),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1017),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1019)),(struct sFun*)come_increment_ref_count(fun_1033));
                finalizer_977=fun_1033;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2696, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value795=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2696, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1033),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1034=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value795,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_1035=node_compile(node_1034,info);
                if(                !Value_1035) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1033,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_1034) ? node_1034 = come_decrement_ref_count(node_1034, ((struct sNode*)node_1034)->finalize, ((struct sNode*)node_1034)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_977=fun2_1032;
            }
            __dec_obj188=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1016);
            come_call_finalizer3(__dec_obj188,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1012;
            info->head=head_1015;
            info->sline=sline_1013;
            __dec_obj189=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1014);
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            come_call_finalizer3(source_995,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_1014 = come_decrement_ref_count(sname_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1016,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(block_1017,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(result_type_1018,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1019 = come_decrement_ref_count(name_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1020,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_types_1021,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_names_1030,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(param_default_parametors_1031,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(fun2_1032,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (user_real_fun_name_991 = come_decrement_ref_count(user_real_fun_name_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_993,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_975;
    __dec_obj190=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_972);
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj191=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_973);
    __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_974;
    __result_obj__433 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value802=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2721, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_977,(char*)come_increment_ref_count(real_fun_name_976)))));
    (last_code_972 = come_decrement_ref_count(last_code_972, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_973 = come_decrement_ref_count(last_code2_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_976 = come_decrement_ref_count(real_fun_name_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_978,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(type2_979,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_980 = come_decrement_ref_count(fun_name2_980, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value802,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__433,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__433;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_984;
unsigned int hash_985;
unsigned int it_986;
struct sGenericsFun* __result_obj__408;
struct sGenericsFun* __result_obj__409;
struct sGenericsFun* __result_obj__410;
struct sGenericsFun* __result_obj__411;
default_value_984 = (void*)0;
    memset(&default_value_984,0,sizeof(struct sGenericsFun*));
    hash_985=string_get_hash_key(((char*)key))%self->size;
    it_986=hash_985;
    while((_Bool)1) {
        if(        self->item_existance[it_986]) {
            if(            string_equals(self->keys[it_986],key)) {
                __result_obj__408 = come_increment_ref_count(self->items[it_986]);
                come_call_finalizer3(default_value_984,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__408,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__408;
            }
            it_986++;
            if(            it_986>=self->size) {
                it_986=0;
            }
            else if(            it_986==hash_985) {
                __result_obj__409 = come_increment_ref_count(default_value_984);
                come_call_finalizer3(default_value_984,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__409,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__409;
            }
        }
        else {
            __result_obj__410 = come_increment_ref_count(default_value_984);
            come_call_finalizer3(default_value_984,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__410,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__410;
        }
    }
    __result_obj__411 = come_increment_ref_count(default_value_984);
    come_call_finalizer3(default_value_984,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__411,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__411;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_997;
unsigned int hash_998;
unsigned int it_999;
struct sClass* __result_obj__412;
struct sClass* __result_obj__413;
struct sClass* __result_obj__414;
struct sClass* __result_obj__415;
default_value_997 = (void*)0;
    memset(&default_value_997,0,sizeof(struct sClass*));
    hash_998=string_get_hash_key(((char*)key))%self->size;
    it_999=hash_998;
    while((_Bool)1) {
        if(        self->item_existance[it_999]) {
            if(            string_equals(self->keys[it_999],key)) {
                __result_obj__412 = come_increment_ref_count(self->items[it_999]);
                come_call_finalizer3(default_value_997,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__412,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__412;
            }
            it_999++;
            if(            it_999>=self->size) {
                it_999=0;
            }
            else if(            it_999==hash_998) {
                __result_obj__413 = come_increment_ref_count(default_value_997);
                come_call_finalizer3(default_value_997,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__413,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__413;
            }
        }
        else {
            __result_obj__414 = come_increment_ref_count(default_value_997);
            come_call_finalizer3(default_value_997,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__414,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__414;
        }
    }
    __result_obj__415 = come_increment_ref_count(default_value_997);
    come_call_finalizer3(default_value_997,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__415,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__415;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_1000;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_1001;
    it_1000=self->head;
    while(it_1000!=((void*)0)) {
        prev_it_1001=it_1000;
        it_1000=it_1000->next;
        come_call_finalizer3(prev_it_1001,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_1003;
struct tuple2$2char$phsType$ph* __result_obj__416;
struct tuple2$2char$phsType$ph* __result_obj__417;
struct tuple2$2char$phsType$ph* result_1004;
struct tuple2$2char$phsType$ph* __result_obj__418;
result_1003 = (void*)0;
result_1004 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1003,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__416 = result_1003;
        return __result_obj__416;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__417 = self->it->item;
        return __result_obj__417;
    }
    memset(&result_1004,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__418 = result_1004;
    return __result_obj__418;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_1006;
struct tuple2$2char$phsType$ph* __result_obj__419;
struct tuple2$2char$phsType$ph* __result_obj__420;
struct tuple2$2char$phsType$ph* result_1007;
struct tuple2$2char$phsType$ph* __result_obj__421;
result_1006 = (void*)0;
result_1007 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_1006,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__419 = result_1006;
        return __result_obj__419;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__420 = self->it->item;
        return __result_obj__420;
    }
    memset(&result_1007,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__421 = result_1007;
    return __result_obj__421;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_1023;
struct list$1sType$ph* __result_obj__422;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_1023=0;    i_1023<num_value;    i_1023++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_1023]));
    }
    __result_obj__422 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__422,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__422;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__423;
void* __right_value778 = (void*)0;
struct list$1sType$ph* result_1024;
struct list$1sType$ph* __result_obj__424;
    if(    self==(void*)0) {
        __result_obj__423 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__423,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__423;
    }
    result_1024=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1024->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_1024->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_1024->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_1024->it=self->it;
    }
    __result_obj__424 = come_increment_ref_count(result_1024);
    come_call_finalizer3(result_1024,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__424,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__424;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_1025;
    result_1025=0;
    result_1025+=int_get_hash_key(((int)self->head));
    result_1025+=int_get_hash_key(((int)self->tail));
    result_1025+=int_get_hash_key(((int)self->len));
    result_1025+=int_get_hash_key(((int)self->it));
    return result_1025;
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
int i_1027;
struct list$1char$ph* __result_obj__425;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_1027=0;    i_1027<num_value;    i_1027++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_1027]));
    }
    __result_obj__425 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__425,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__425;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__426;
void* __right_value782 = (void*)0;
struct list$1char$ph* result_1028;
struct list$1char$ph* __result_obj__427;
    if(    self==(void*)0) {
        __result_obj__426 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__426,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__426;
    }
    result_1028=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1028->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_1028->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_1028->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_1028->it=self->it;
    }
    __result_obj__427 = come_increment_ref_count(result_1028);
    come_call_finalizer3(result_1028,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__427,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__427;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_1029;
    result_1029=0;
    result_1029+=int_get_hash_key(((int)self->head));
    result_1029+=int_get_hash_key(((int)self->tail));
    result_1029+=int_get_hash_key(((int)self->len));
    result_1029+=int_get_hash_key(((int)self->it));
    return result_1029;
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

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__428;
void* __right_value797 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1036;
void* __right_value798 = (void*)0;
char* __dec_obj192;
struct tuple2$2sFun$pchar$ph* __result_obj__429;
    if(    self==(void*)0) {
        __result_obj__428 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__428,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__428;
    }
    result_1036=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1036->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj192=result_1036->v2;
        result_1036->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__429 = come_increment_ref_count(result_1036);
    come_call_finalizer3(result_1036,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__429,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__429;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1037;
    result_1037=0;
    result_1037+=int_get_hash_key(((int)self->v1));
    result_1037+=int_get_hash_key(((int)self->v2));
    return result_1037;
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
int n_1038;
_Bool result_1039;
char* it_1040;
char* default_value_1041;
char* it2_1042;
struct sVar* default_value2_1045;
void* __right_value799 = (void*)0;
struct sVar* item_1046;
void* __right_value800 = (void*)0;
struct sVar* item2_1047;
default_value_1041 = (void*)0;
default_value2_1045 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_1038=0;
    result_1039=(_Bool)1;
    for(    it_1040=list$1char$p$p_begin(left->key_list);    !list$1char$p$p_end(left->key_list);    it_1040=list$1char$p$p_next(left->key_list)    ){
        memset(&default_value_1041,0,sizeof(char*));
        it2_1042=list$1char$p$p_item(right->key_list,n_1038,default_value_1041);
        if(        string_equals(it_1040,it2_1042)) {
            memset(&default_value2_1045,0,sizeof(struct sVar*));
            item_1046=((struct sVar*)(__right_value799=map$2char$phsVar$ph$p_at(left,it_1040,(struct sVar*)come_increment_ref_count(default_value2_1045))));
            come_call_finalizer3(__right_value799,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_1047=((struct sVar*)(__right_value800=map$2char$phsVar$ph$p_at(right,it2_1042,(struct sVar*)come_increment_ref_count(default_value2_1045))));
            come_call_finalizer3(__right_value800,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_1046,item2_1047)) {
                result_1039=(_Bool)0;
            }
            come_call_finalizer3(default_value2_1045,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_1039=(_Bool)0;
        }
        n_1038++;
        (default_value_1041 = come_decrement_ref_count(default_value_1041, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_1039;
}

static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value){
struct list_item$1char$p* it_1043;
int i_1044;
char* __result_obj__430;
char* __result_obj__431;
    if(    position<0) {
        position+=self->len;
    }
    it_1043=self->head;
    i_1044=0;
    while(it_1043!=((void*)0)) {
        if(        position==i_1044) {
            __result_obj__430 = it_1043->item;
            return __result_obj__430;
        }
        it_1043=it_1043->next;
        i_1044++;
    }
    __result_obj__431 = default_value;
    return __result_obj__431;
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
char* __dec_obj193;
struct tuple2$2sFun$pchar$ph* __result_obj__432;
    self->v1=v1;
    __dec_obj193=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__432 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__432,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__432;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1048;
char* __dec_obj194;
char* last_code2_1049;
char* __dec_obj195;
_Bool comma_instead_of_semicolon_1050;
struct sClass* current_stack_frame_struct_1051;
struct sFun* equaler_1052;
void* __right_value803 = (void*)0;
char* real_fun_name_1053;
void* __right_value804 = (void*)0;
struct sType* type2_1054;
struct sClass* klass_1055;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct buffer* source_1056;
char* name_1057;
void* __right_value807 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1059;
struct tuple2$2char$phsType$ph* it_1060;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_1061=0;
struct sType* field_type_1062=0;
char* p_1064;
int sline_1065;
char* sname_1066;
char* head_1067;
struct buffer* source3_1068;
struct buffer* __dec_obj196;
void* __right_value808 = (void*)0;
char* __dec_obj197;
void* __right_value809 = (void*)0;
struct sBlock* block_1069;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sType* result_type_1070;
void* __right_value813 = (void*)0;
char* name_1071;
void* __right_value814 = (void*)0;
struct sType* left_type_1072;
void* __right_value815 = (void*)0;
struct sType* right_type_1073;
struct sType* __list_values3___1075[2];
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct list$1sType$ph* param_types_1074;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
char* __list_values4___1076[2];
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1char$ph* param_names_1077;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct list$1char$ph* param_default_parametors_1078;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sFun* fun2_1079;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sFun* fun_1080;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value833 = (void*)0;
struct sNode* node_1081;
_Bool Value_1082;
void* __right_value834 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c23_1083=0;
char* Err_1084=0;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__434;
    last_code_1048=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj194=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1049=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj195=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1050=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1051=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1052=((void*)0);
    real_fun_name_1053=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1054=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1054;
    klass_1055=type->mClass;
    if(    type->mPointerNum>0&&!klass_1055->mNumber) {
        source_1056=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2747, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1056,123);
        if(        klass_1055->mProtocol) {
            name_1057="_protocol_obj";
            char source2_1058[1024];
            memset(&source2_1058, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1058,1024,"return left.%s.equals(right.%s);\n",name_1057,name_1057);
            buffer_append_str(source_1056,source2_1058);
        }
        else {
            klass_1055=((struct sClass*)(__right_value807=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1055->mName)));
            come_call_finalizer3(__right_value807,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1059=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1055->mFields)),it_1060=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1059));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1059));            it_1060=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1059))            ){
                multiple_assign_var37=it_1060;
                name_1061=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1062=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1063[1024];
                memset(&source2_1063, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1063,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1061,name_1061,name_1061);
                buffer_append_str(source_1056,source2_1063);
                (name_1061 = come_decrement_ref_count(name_1061, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1062,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_1059,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_1056,"return true;");
        buffer_append_char(source_1056,125);
        p_1064=info->p;
        sline_1065=info->sline;
        sname_1066=(char*)come_increment_ref_count(info->sname);
        head_1067=info->head;
        source3_1068=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1056);
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1056->buf;
        info->head=source_1056->buf;
        __dec_obj197=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1053));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1069=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1070=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2787, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1071=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1053));
        left_type_1072=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1072->mHeap=(_Bool)0;
        right_type_1073=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1073->mHeap=(_Bool)0;
        param_types_1074=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___1075[0]=left_type_1072,
__list_values3___1075[1]=right_type_1073,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2793, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values3___1075)));
        param_names_1077=(struct list$1char$ph*)come_increment_ref_count((__list_values4___1076[0]=((char*)(__right_value818=__builtin_string("left"))),
__list_values4___1076[1]=((char*)(__right_value819=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2794, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values4___1076)));
        (__right_value818 = come_decrement_ref_count(__right_value818, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value819 = come_decrement_ref_count(__right_value819, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1078=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2795, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1078,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1078,((void*)0));
        result_type_1070->mStatic=(_Bool)0;
        result_type_1070->mUniq=(_Bool)0;
        result_type_1070->mInline=(_Bool)0;
        result_type_1070->mGenerate=(_Bool)0;
        fun2_1079=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value824=__builtin_string(name_1071)))));
        (__right_value824 = come_decrement_ref_count(__right_value824, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1079==((void*)0)||fun2_1079->mExternal) {
            fun_1080=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2806, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1071),(struct sType*)come_increment_ref_count(result_type_1070),(struct list$1sType$ph*)come_increment_ref_count(param_types_1074),(struct list$1char$ph*)come_increment_ref_count(param_names_1077),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1078),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1069),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1071)),(struct sFun*)come_increment_ref_count(fun_1080));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2814, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value832=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2814, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1080),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1081=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value832,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1082=node_compile(node_1081,info);
            if(            !Value_1082) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value834=err_msg(info,"compiling error")));
                come_exception_var_c23_1083=multiple_assign_var38->v1;
                Err_1084=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1084)?(puts(Err_1084),exit(0)):(0));
                come_call_finalizer3(__right_value834,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1084 = come_decrement_ref_count(Err_1084, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1052=fun_1080;
            come_call_finalizer3(fun_1080,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1081) ? node_1081 = come_decrement_ref_count(node_1081, ((struct sNode*)node_1081)->finalize, ((struct sNode*)node_1081)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1052=fun2_1079;
        }
        __dec_obj198=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1068);
        come_call_finalizer3(__dec_obj198,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1064;
        info->head=head_1067;
        info->sline=sline_1065;
        __dec_obj199=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1066);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        come_call_finalizer3(source_1056,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1066 = come_decrement_ref_count(sname_1066, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1068,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_1069,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_1070,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1071 = come_decrement_ref_count(name_1071, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1072,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(right_type_1073,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_1074,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_1077,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_1078,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_1079,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1051;
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1048);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1049);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1050;
    __result_obj__434 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value836=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2840, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1052,(char*)come_increment_ref_count(real_fun_name_1053)))));
    (last_code_1048 = come_decrement_ref_count(last_code_1048, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1049 = come_decrement_ref_count(last_code2_1049, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1053 = come_decrement_ref_count(real_fun_name_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1054,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value836,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__434,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__434;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1085;
char* __dec_obj202;
char* last_code2_1086;
char* __dec_obj203;
_Bool comma_instead_of_semicolon_1087;
struct sClass* current_stack_frame_struct_1088;
struct sFun* equaler_1089;
void* __right_value837 = (void*)0;
char* real_fun_name_1090;
void* __right_value838 = (void*)0;
struct sType* type2_1091;
struct sClass* klass_1092;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct buffer* source_1093;
char* name_1094;
int i_1097;
void* __right_value841 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1098;
struct tuple2$2char$phsType$ph* it_1099;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1100=0;
struct sType* field_type_1101=0;
char* p_1105;
int sline_1106;
char* sname_1107;
char* head_1108;
struct buffer* source3_1109;
struct buffer* __dec_obj204;
void* __right_value842 = (void*)0;
char* __dec_obj205;
void* __right_value843 = (void*)0;
struct sBlock* block_1110;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sType* result_type_1111;
void* __right_value847 = (void*)0;
char* name_1112;
void* __right_value848 = (void*)0;
struct sType* left_type_1113;
void* __right_value849 = (void*)0;
struct sType* right_type_1114;
struct sType* __list_values5___1116[2];
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct list$1sType$ph* param_types_1115;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
char* __list_values6___1117[2];
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1char$ph* param_names_1118;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct list$1char$ph* param_default_parametors_1119;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sFun* fun2_1120;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sFun* fun_1121;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value867 = (void*)0;
struct sNode* node_1122;
_Bool Value_1123;
void* __right_value868 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c24_1124=0;
char* Err_1125=0;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__435;
    last_code_1085=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj202=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1086=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj203=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1087=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1088=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1089=((void*)0);
    real_fun_name_1090=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1091=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1091;
    klass_1092=type->mClass;
    if(    type->mPointerNum>0&&!klass_1092->mNumber) {
        source_1093=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2865, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1093,123);
        if(        klass_1092->mProtocol) {
            name_1094="_protocol_obj";
            char source2_1095[1024];
            memset(&source2_1095, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1095,1024,"return left.%s !== right.%s;\n",name_1094,name_1094);
            buffer_append_str(source_1093,source2_1095);
        }
        else {
            char source2_1096[1024];
            memset(&source2_1096, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1096,1024,"return !(");
            buffer_append_str(source_1093,source2_1096);
            snprintf(source2_1096,1024,"( ");
            buffer_append_str(source_1093,source2_1096);
            i_1097=0;
            klass_1092=((struct sClass*)(__right_value841=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1092->mName)));
            come_call_finalizer3(__right_value841,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1098=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1092->mFields)),it_1099=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1098));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1098));            it_1099=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1098))            ){
                multiple_assign_var39=it_1099;
                name_1100=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1101=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1102[1024];
                memset(&source2_1102, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1102,1024,"(left.%s === right.%s)",name_1100,name_1100,name_1100);
                buffer_append_str(source_1093,source2_1102);
                if(                i_1097==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1092->mFields)-1) {
                    char source2_1103[1024];
                    memset(&source2_1103, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1103,1024,"));");
                    buffer_append_str(source_1093,source2_1103);
                }
                else {
                    char source2_1104[1024];
                    memset(&source2_1104, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1104,1024," && ");
                    buffer_append_str(source_1093,source2_1104);
                }
                i_1097++;
                (name_1100 = come_decrement_ref_count(name_1100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1101,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_1098,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_1093,125);
        p_1105=info->p;
        sline_1106=info->sline;
        sname_1107=(char*)come_increment_ref_count(info->sname);
        head_1108=info->head;
        source3_1109=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj204=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1093);
        come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1093->buf;
        info->head=source_1093->buf;
        __dec_obj205=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1090));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1110=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1111=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2925, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1112=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1090));
        left_type_1113=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1113->mHeap=(_Bool)0;
        right_type_1114=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1114->mHeap=(_Bool)0;
        param_types_1115=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___1116[0]=left_type_1113,
__list_values5___1116[1]=right_type_1114,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2931, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values5___1116)));
        param_names_1118=(struct list$1char$ph*)come_increment_ref_count((__list_values6___1117[0]=((char*)(__right_value852=__builtin_string("left"))),
__list_values6___1117[1]=((char*)(__right_value853=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2932, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values6___1117)));
        (__right_value852 = come_decrement_ref_count(__right_value852, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value853 = come_decrement_ref_count(__right_value853, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1119=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2933, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1119,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1119,((void*)0));
        result_type_1111->mStatic=(_Bool)0;
        result_type_1111->mUniq=(_Bool)0;
        result_type_1111->mInline=(_Bool)0;
        result_type_1111->mGenerate=(_Bool)0;
        fun2_1120=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value858=__builtin_string(name_1112)))));
        (__right_value858 = come_decrement_ref_count(__right_value858, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1120==((void*)0)||fun2_1120->mExternal) {
            fun_1121=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2944, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1112),(struct sType*)come_increment_ref_count(result_type_1111),(struct list$1sType$ph*)come_increment_ref_count(param_types_1115),(struct list$1char$ph*)come_increment_ref_count(param_names_1118),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1119),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1110),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1112)),(struct sFun*)come_increment_ref_count(fun_1121));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2952, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value866=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2952, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1121),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1122=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value866,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1123=node_compile(node_1122,info);
            if(            !Value_1123) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value868=err_msg(info,"compiling error")));
                come_exception_var_c24_1124=multiple_assign_var40->v1;
                Err_1125=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1125)?(puts(Err_1125),exit(0)):(0));
                come_call_finalizer3(__right_value868,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1125 = come_decrement_ref_count(Err_1125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1089=fun_1121;
            come_call_finalizer3(fun_1121,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1122) ? node_1122 = come_decrement_ref_count(node_1122, ((struct sNode*)node_1122)->finalize, ((struct sNode*)node_1122)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1089=fun2_1120;
        }
        __dec_obj206=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1109);
        come_call_finalizer3(__dec_obj206,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1105;
        info->head=head_1108;
        info->sline=sline_1106;
        __dec_obj207=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1107);
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        come_call_finalizer3(source_1093,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1107 = come_decrement_ref_count(sname_1107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1109,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_1110,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_1111,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1112 = come_decrement_ref_count(name_1112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1113,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(right_type_1114,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_1115,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_1118,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_1119,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_1120,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1088;
    __dec_obj208=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1085);
    __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj209=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1086);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1087;
    __result_obj__435 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value870=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2978, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1089,(char*)come_increment_ref_count(real_fun_name_1090)))));
    (last_code_1085 = come_decrement_ref_count(last_code_1085, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1086 = come_decrement_ref_count(last_code2_1086, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1090 = come_decrement_ref_count(real_fun_name_1090, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1091,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value870,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__435,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__435;
}

static int list$1tuple2$2char$phsType$ph$ph$p_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1126;
char* __dec_obj210;
char* last_code2_1127;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_1128;
struct sClass* current_stack_frame_struct_1129;
struct sFun* equaler_1130;
void* __right_value871 = (void*)0;
char* real_fun_name_1131;
void* __right_value872 = (void*)0;
struct sType* type2_1132;
struct sClass* klass_1133;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct buffer* source_1134;
char* name_1135;
int i_1138;
void* __right_value875 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1139;
struct tuple2$2char$phsType$ph* it_1140;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1141=0;
struct sType* field_type_1142=0;
char* p_1146;
int sline_1147;
char* sname_1148;
char* head_1149;
struct buffer* source3_1150;
struct buffer* __dec_obj212;
void* __right_value876 = (void*)0;
char* __dec_obj213;
void* __right_value877 = (void*)0;
struct sBlock* block_1151;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct sType* result_type_1152;
void* __right_value881 = (void*)0;
char* name_1153;
void* __right_value882 = (void*)0;
struct sType* left_type_1154;
void* __right_value883 = (void*)0;
struct sType* right_type_1155;
struct sType* __list_values7___1157[2];
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct list$1sType$ph* param_types_1156;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
char* __list_values8___1158[2];
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct list$1char$ph* param_names_1159;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct list$1char$ph* param_default_parametors_1160;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sFun* fun2_1161;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct sFun* fun_1162;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value901 = (void*)0;
struct sNode* node_1163;
_Bool Value_1164;
void* __right_value902 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c25_1165=0;
char* Err_1166=0;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__436;
    last_code_1126=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1127=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1128=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1129=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1130=((void*)0);
    real_fun_name_1131=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1132=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1132;
    klass_1133=type->mClass;
    if(    type->mPointerNum>0&&!klass_1133->mNumber) {
        source_1134=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3003, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1134,123);
        if(        klass_1133->mProtocol) {
            name_1135="_protocol_obj";
            char source2_1136[1024];
            memset(&source2_1136, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1136,1024,"return !left.%s.equals(right.%s);\n",name_1135,name_1135);
            buffer_append_str(source_1134,source2_1136);
        }
        else {
            char source2_1137[1024];
            memset(&source2_1137, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1137,1024,"return !(");
            buffer_append_str(source_1134,source2_1137);
            i_1138=0;
            klass_1133=((struct sClass*)(__right_value875=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1133->mName)));
            come_call_finalizer3(__right_value875,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1139=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1133->mFields)),it_1140=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1139));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1139));            it_1140=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1139))            ){
                multiple_assign_var41=it_1140;
                name_1141=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1142=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1143[1024];
                memset(&source2_1143, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1143,1024,"left.%s.equals(right.%s)",name_1141,name_1141);
                buffer_append_str(source_1134,source2_1143);
                if(                i_1138==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1133->mFields)-1) {
                    char source2_1144[1024];
                    memset(&source2_1144, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1144,1024,");");
                    buffer_append_str(source_1134,source2_1144);
                }
                else {
                    char source2_1145[1024];
                    memset(&source2_1145, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1145,1024," && ");
                    buffer_append_str(source_1134,source2_1145);
                }
                i_1138++;
                (name_1141 = come_decrement_ref_count(name_1141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1142,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_1139,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_1134,125);
        p_1146=info->p;
        sline_1147=info->sline;
        sname_1148=(char*)come_increment_ref_count(info->sname);
        head_1149=info->head;
        source3_1150=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1134);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1134->buf;
        info->head=source_1134->buf;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1131));
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1151=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1152=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3060, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1153=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1131));
        left_type_1154=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1154->mHeap=(_Bool)0;
        right_type_1155=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1155->mHeap=(_Bool)0;
        param_types_1156=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___1157[0]=left_type_1154,
__list_values7___1157[1]=right_type_1155,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3066, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values7___1157)));
        param_names_1159=(struct list$1char$ph*)come_increment_ref_count((__list_values8___1158[0]=((char*)(__right_value886=__builtin_string("left"))),
__list_values8___1158[1]=((char*)(__right_value887=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3067, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values8___1158)));
        (__right_value886 = come_decrement_ref_count(__right_value886, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value887 = come_decrement_ref_count(__right_value887, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1160=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3068, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1160,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1160,((void*)0));
        result_type_1152->mStatic=(_Bool)0;
        result_type_1152->mUniq=(_Bool)0;
        result_type_1152->mInline=(_Bool)0;
        result_type_1152->mGenerate=(_Bool)0;
        fun2_1161=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value892=__builtin_string(name_1153)))));
        (__right_value892 = come_decrement_ref_count(__right_value892, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1161==((void*)0)||fun2_1161->mExternal) {
            fun_1162=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3079, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1153),(struct sType*)come_increment_ref_count(result_type_1152),(struct list$1sType$ph*)come_increment_ref_count(param_types_1156),(struct list$1char$ph*)come_increment_ref_count(param_names_1159),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1160),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1151),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1153)),(struct sFun*)come_increment_ref_count(fun_1162));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3087, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value900=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3087, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1162),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1163=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value900,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1164=node_compile(node_1163,info);
            if(            !Value_1164) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value902=err_msg(info,"compiling error")));
                come_exception_var_c25_1165=multiple_assign_var42->v1;
                Err_1166=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1166)?(puts(Err_1166),exit(0)):(0));
                come_call_finalizer3(__right_value902,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1166 = come_decrement_ref_count(Err_1166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1130=fun_1162;
            come_call_finalizer3(fun_1162,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1163) ? node_1163 = come_decrement_ref_count(node_1163, ((struct sNode*)node_1163)->finalize, ((struct sNode*)node_1163)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1130=fun2_1161;
        }
        __dec_obj214=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1150);
        come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1146;
        info->head=head_1149;
        info->sline=sline_1147;
        __dec_obj215=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1148);
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        come_call_finalizer3(source_1134,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1148 = come_decrement_ref_count(sname_1148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1150,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_1151,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_1152,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1153 = come_decrement_ref_count(name_1153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1154,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(right_type_1155,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_1156,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_1159,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_1160,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_1161,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1129;
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1126);
    __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1127);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1128;
    __result_obj__436 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value904=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3113, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1130,(char*)come_increment_ref_count(real_fun_name_1131)))));
    (last_code_1126 = come_decrement_ref_count(last_code_1126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1127 = come_decrement_ref_count(last_code2_1127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1131 = come_decrement_ref_count(real_fun_name_1131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1132,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value904,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__436,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__436;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1167;
char* __dec_obj218;
char* last_code2_1168;
char* __dec_obj219;
_Bool comma_instead_of_semicolon_1169;
struct sClass* current_stack_frame_struct_1170;
struct sFun* equaler_1171;
void* __right_value905 = (void*)0;
char* real_fun_name_1172;
void* __right_value906 = (void*)0;
struct sType* type2_1173;
struct sClass* klass_1174;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct buffer* source_1175;
char* name_1176;
void* __right_value909 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1179;
struct tuple2$2char$phsType$ph* it_1180;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1181=0;
struct sType* field_type_1182=0;
char* p_1184;
int sline_1185;
char* sname_1186;
char* head_1187;
struct buffer* source3_1188;
struct buffer* __dec_obj220;
void* __right_value910 = (void*)0;
char* __dec_obj221;
void* __right_value911 = (void*)0;
struct sBlock* block_1189;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sType* result_type_1190;
void* __right_value915 = (void*)0;
char* name_1191;
void* __right_value916 = (void*)0;
struct sType* left_type_1192;
void* __right_value917 = (void*)0;
struct sType* right_type_1193;
struct sType* __list_values9___1195[2];
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct list$1sType$ph* param_types_1194;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
char* __list_values10___1196[2];
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct list$1char$ph* param_names_1197;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct list$1char$ph* param_default_parametors_1198;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sFun* fun2_1199;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sFun* fun_1200;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value935 = (void*)0;
struct sNode* node_1201;
_Bool Value_1202;
void* __right_value936 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c26_1203=0;
char* Err_1204=0;
struct buffer* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__437;
    last_code_1167=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1168=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1169=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1170=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1171=((void*)0);
    real_fun_name_1172=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1173=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1173;
    klass_1174=type->mClass;
    if(    type->mPointerNum>0&&!klass_1174->mNumber) {
        source_1175=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3138, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1175,123);
        if(        klass_1174->mProtocol) {
            name_1176="_protocol_obj";
            char source2_1177[1024];
            memset(&source2_1177, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1177,1024,"return left.%s === right.%s;\n",name_1176,name_1176);
            buffer_append_str(source_1175,source2_1177);
        }
        else {
            char source2_1178[1024];
            memset(&source2_1178, 0, sizeof(char)            *(1024)            );
            klass_1174=((struct sClass*)(__right_value909=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1174->mName)));
            come_call_finalizer3(__right_value909,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1179=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1174->mFields)),it_1180=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1179));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1179));            it_1180=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1179))            ){
                multiple_assign_var43=it_1180;
                name_1181=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1182=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1183[1024];
                memset(&source2_1183, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1183,1024,"if(left.%s !== right.%s) { return false; }\n",name_1181,name_1181,name_1181);
                buffer_append_str(source_1175,source2_1183);
                (name_1181 = come_decrement_ref_count(name_1181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1182,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_1179,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_1175,"return true;\n");
        buffer_append_char(source_1175,125);
        p_1184=info->p;
        sline_1185=info->sline;
        sname_1186=(char*)come_increment_ref_count(info->sname);
        head_1187=info->head;
        source3_1188=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1175);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1175->buf;
        info->head=source_1175->buf;
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1172));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1189=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1190=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3180, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1191=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1172));
        left_type_1192=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1192->mHeap=(_Bool)0;
        right_type_1193=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1193->mHeap=(_Bool)0;
        param_types_1194=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___1195[0]=left_type_1192,
__list_values9___1195[1]=right_type_1193,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3186, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values9___1195)));
        param_names_1197=(struct list$1char$ph*)come_increment_ref_count((__list_values10___1196[0]=((char*)(__right_value920=__builtin_string("left"))),
__list_values10___1196[1]=((char*)(__right_value921=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3187, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values10___1196)));
        (__right_value920 = come_decrement_ref_count(__right_value920, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value921 = come_decrement_ref_count(__right_value921, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1198=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3188, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1198,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1198,((void*)0));
        result_type_1190->mStatic=(_Bool)0;
        result_type_1190->mUniq=(_Bool)0;
        result_type_1190->mInline=(_Bool)0;
        result_type_1190->mGenerate=(_Bool)0;
        fun2_1199=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value926=__builtin_string(name_1191)))));
        (__right_value926 = come_decrement_ref_count(__right_value926, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1199==((void*)0)||fun2_1199->mExternal) {
            fun_1200=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3199, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1191),(struct sType*)come_increment_ref_count(result_type_1190),(struct list$1sType$ph*)come_increment_ref_count(param_types_1194),(struct list$1char$ph*)come_increment_ref_count(param_names_1197),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1198),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1189),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1191)),(struct sFun*)come_increment_ref_count(fun_1200));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3207, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value934=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3207, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1200),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1201=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value934,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1202=node_compile(node_1201,info);
            if(            !Value_1202) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value936=err_msg(info,"compiling error(X)")));
                come_exception_var_c26_1203=multiple_assign_var44->v1;
                Err_1204=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1204)?(puts(Err_1204),exit(0)):(0));
                come_call_finalizer3(__right_value936,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1204 = come_decrement_ref_count(Err_1204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1171=fun_1200;
            come_call_finalizer3(fun_1200,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1201) ? node_1201 = come_decrement_ref_count(node_1201, ((struct sNode*)node_1201)->finalize, ((struct sNode*)node_1201)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1171=fun2_1199;
        }
        __dec_obj222=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1188);
        come_call_finalizer3(__dec_obj222,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1184;
        info->head=head_1187;
        info->sline=sline_1185;
        __dec_obj223=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1186);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        come_call_finalizer3(source_1175,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1186 = come_decrement_ref_count(sname_1186, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1188,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_1189,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_1190,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1191 = come_decrement_ref_count(name_1191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1192,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(right_type_1193,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_1194,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_1197,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_1198,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_1199,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1170;
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1167);
    __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1168);
    __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1169;
    __result_obj__437 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value938=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3233, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1171,(char*)come_increment_ref_count(real_fun_name_1172)))));
    (last_code_1167 = come_decrement_ref_count(last_code_1167, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1168 = come_decrement_ref_count(last_code2_1168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1172 = come_decrement_ref_count(real_fun_name_1172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1173,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value938,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__437,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__437;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__438;
char* last_code_1205;
char* __dec_obj226;
char* last_code2_1206;
char* __dec_obj227;
_Bool comma_instead_of_semicolon_1207;
struct sClass* current_stack_frame_struct_1208;
struct sFun* cloner_1209;
void* __right_value941 = (void*)0;
char* real_fun_name_1210;
void* __right_value942 = (void*)0;
struct sType* type2_1211;
struct sClass* klass_1212;
char* fun_name2_1213;
void* __right_value943 = (void*)0;
char* none_generics_name_1214;
void* __right_value944 = (void*)0;
struct sType* obj_type_1215;
void* __right_value945 = (void*)0;
char* __dec_obj228;
void* __right_value946 = (void*)0;
char* fun_name3_1216;
void* __right_value947 = (void*)0;
struct sGenericsFun* generics_fun_1217;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1218=0;
_Bool err_1219=0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__439;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
char* __dec_obj229;
void* __right_value954 = (void*)0;
char* __dec_obj230;
int i_1220;
void* __right_value955 = (void*)0;
char* new_fun_name_1221;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
char* __dec_obj231;
void* __right_value958 = (void*)0;
char* __dec_obj232;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct buffer* source_1222;
void* __right_value961 = (void*)0;
char* name_1223;
void* __right_value962 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1225;
struct tuple2$2char$phsType$ph* it_1226;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1227=0;
struct sType* field_type_1228=0;
void* __right_value963 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1231;
struct tuple2$2char$phsType$ph* it_1232;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1233=0;
struct sType* field_type_1234=0;
void* __right_value964 = (void*)0;
char* user_real_fun_name_1238;
void* __right_value965 = (void*)0;
struct sFun* user_cloner_1239;
char* p_1241;
int sline_1242;
char* sname_1243;
struct buffer* source3_1244;
char* head_1245;
struct buffer* __dec_obj233;
void* __right_value966 = (void*)0;
char* __dec_obj234;
void* __right_value967 = (void*)0;
struct sBlock* block_1246;
void* __right_value968 = (void*)0;
struct sType* result_type_1247;
void* __right_value969 = (void*)0;
char* name_1248;
void* __right_value970 = (void*)0;
struct sType* self_type_1249;
struct sType* __list_values11___1251[1];
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct list$1sType$ph* param_types_1250;
void* __right_value973 = (void*)0;
char* __list_values12___1252[1];
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct list$1char$ph* param_names_1253;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct list$1char$ph* param_default_parametors_1254;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sFun* fun2_1255;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct sFun* fun_1256;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value987 = (void*)0;
struct sNode* node_1257;
_Bool Value_1258;
void* __right_value988 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c27_1259=0;
char* Err_1260=0;
char* __dec_obj235;
struct buffer* __dec_obj236;
char* __dec_obj237;
char* __dec_obj238;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__440;
fun_name2_1213 = (void*)0;
memset(&i_1220, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__438 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value940=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3239, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer3(__right_value940,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__result_obj__438,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__438;
    }
    last_code_1205=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1206=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1207=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1208=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1209=((void*)0);
    real_fun_name_1210=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1211=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1211;
    klass_1212=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1214=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1215=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj228=fun_name2_1213;
        fun_name2_1213=(char*)come_increment_ref_count(create_method_name(obj_type_1215,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1216=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1214,fun_name));
        generics_fun_1217=((struct sGenericsFun*)(__right_value947=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_1216,((void*)0))));
        come_call_finalizer3(__right_value947,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1217) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value949=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1213)),generics_fun_1217,obj_type_1215,info)));
            name_1218=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1219=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value949,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1219) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__439 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value951=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3279, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1218 = come_decrement_ref_count(name_1218, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1214 = come_decrement_ref_count(none_generics_name_1214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1215,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name3_1216 = come_decrement_ref_count(fun_name3_1216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1205 = come_decrement_ref_count(last_code_1205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1206 = come_decrement_ref_count(last_code2_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1210 = come_decrement_ref_count(real_fun_name_1210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1211,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_1213 = come_decrement_ref_count(fun_name2_1213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value951,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__439,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__439;
                }
            }
            cloner_1209=((struct sFun*)(__right_value952=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1218)));
            come_call_finalizer3(__right_value952,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1218 = come_decrement_ref_count(name_1218, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1209=((struct sFun*)(__right_value953=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1213)));
            come_call_finalizer3(__right_value953,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj229=real_fun_name_1210;
        real_fun_name_1210=(char*)come_increment_ref_count(fun_name2_1213);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (none_generics_name_1214 = come_decrement_ref_count(none_generics_name_1214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1215,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1216 = come_decrement_ref_count(fun_name3_1216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj230=fun_name2_1213;
        fun_name2_1213=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1220=128-1;        i_1220>=1;        i_1220--        ){
            new_fun_name_1221=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1213,i_1220));
            cloner_1209=((struct sFun*)(__right_value956=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1221)));
            come_call_finalizer3(__right_value956,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1209) {
                __dec_obj231=fun_name2_1213;
                fun_name2_1213=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1221));
                __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1221 = come_decrement_ref_count(new_fun_name_1221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1221 = come_decrement_ref_count(new_fun_name_1221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1209==((void*)0)) {
            cloner_1209=((struct sFun*)(__right_value958=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1213)));
            come_call_finalizer3(__right_value958,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj232=real_fun_name_1210;
        real_fun_name_1210=(char*)come_increment_ref_count(fun_name2_1213);
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    cloner_1209==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1222=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3314, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1222,"{\n");
        buffer_append_str(source_1222,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1222,"var result = new %s;\n",((char*)(__right_value961=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value961 = come_decrement_ref_count(__right_value961, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1212->mProtocol) {
            name_1223="_protocol_obj";
            char source2_1224[1024];
            memset(&source2_1224, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1224,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1222,source2_1224);
            klass_1212=((struct sClass*)(__right_value962=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1212->mName)));
            come_call_finalizer3(__right_value962,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1225=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1212->mFields)),it_1226=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1225));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1225));            it_1226=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1225))            ){
                multiple_assign_var46=it_1226;
                name_1227=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1228=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1227,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1228->mArrayNum)>0) {
                    char source2_1229[1024];
                    memset(&source2_1229, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1229,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1227,name_1227,name_1227);
                    buffer_append_str(source_1222,source2_1229);
                }
                else {
                    char source2_1230[1024];
                    memset(&source2_1230, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1230,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1227,name_1227);
                    buffer_append_str(source_1222,source2_1230);
                }
                (name_1227 = come_decrement_ref_count(name_1227, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1228,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_1225,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_1212=((struct sClass*)(__right_value963=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1212->mName)));
            come_call_finalizer3(__right_value963,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1231=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1212->mFields)),it_1232=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1231));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1231));            it_1232=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1231))            ){
                multiple_assign_var47=it_1232;
                name_1233=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1234=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1234->mHeap) {
                    char source2_1235[1024];
                    memset(&source2_1235, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1235,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1233,name_1233,name_1233);
                    buffer_append_str(source_1222,source2_1235);
                }
                else if(                list$1sNode$ph$p_length(field_type_1234->mArrayNum)>0) {
                    char source2_1236[1024];
                    memset(&source2_1236, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1236,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1233,name_1233,name_1233);
                    buffer_append_str(source_1222,source2_1236);
                }
                else {
                    char source2_1237[1024];
                    memset(&source2_1237, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1237,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1233,name_1233);
                    buffer_append_str(source_1222,source2_1237);
                }
                (name_1233 = come_decrement_ref_count(name_1233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1234,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_1231,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        user_real_fun_name_1238=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1239=((struct sFun*)(__right_value965=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1238)));
        come_call_finalizer3(__right_value965,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        user_cloner_1239) {
            char source2_1240[1024];
            memset(&source2_1240, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1240,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1238);
            buffer_append_str(source_1222,source2_1240);
        }
        buffer_append_format(source_1222,"return result;");
        buffer_append_char(source_1222,125);
        p_1241=info->p;
        sline_1242=info->sline;
        sname_1243=(char*)come_increment_ref_count(info->sname);
        source3_1244=(struct buffer*)come_increment_ref_count(info->source);
        head_1245=info->head;
        __dec_obj233=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1222);
        come_call_finalizer3(__dec_obj233,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj234=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1210));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1246=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1247=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1248=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1210));
        self_type_1249=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1249->mHeap=(_Bool)0;
        param_types_1250=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___1251[0]=self_type_1249,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3405, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values11___1251)));
        param_names_1253=(struct list$1char$ph*)come_increment_ref_count((__list_values12___1252[0]=((char*)(__right_value973=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3406, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values12___1252)));
        (__right_value973 = come_decrement_ref_count(__right_value973, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1254=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3407, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1254,((void*)0));
        result_type_1247->mStatic=(_Bool)0;
        result_type_1247->mUniq=(_Bool)0;
        result_type_1247->mInline=(_Bool)0;
        result_type_1247->mGenerate=(_Bool)0;
        fun2_1255=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value978=__builtin_string(name_1248)))));
        (__right_value978 = come_decrement_ref_count(__right_value978, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1255==((void*)0)||fun2_1255->mExternal) {
            fun_1256=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3418, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1248),(struct sType*)come_increment_ref_count(result_type_1247),(struct list$1sType$ph*)come_increment_ref_count(param_types_1250),(struct list$1char$ph*)come_increment_ref_count(param_names_1253),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1254),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1246),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1248)),(struct sFun*)come_increment_ref_count(fun_1256));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3426, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value986=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3426, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1256),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1257=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value986,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1258=node_compile(node_1257,info);
            if(            !Value_1258) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value988=err_msg(info,"compiling error(Y)")));
                come_exception_var_c27_1259=multiple_assign_var48->v1;
                Err_1260=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1260)?(puts(Err_1260),exit(0)):(0));
                come_call_finalizer3(__right_value988,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1260 = come_decrement_ref_count(Err_1260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1209=fun_1256;
            come_call_finalizer3(fun_1256,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1257) ? node_1257 = come_decrement_ref_count(node_1257, ((struct sNode*)node_1257)->finalize, ((struct sNode*)node_1257)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1209=fun2_1255;
        }
        __dec_obj235=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1243);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1242;
        __dec_obj236=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1244);
        come_call_finalizer3(__dec_obj236,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1241;
        info->head=head_1245;
        info->sline=sline_1242;
        come_call_finalizer3(source_1222,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (user_real_fun_name_1238 = come_decrement_ref_count(user_real_fun_name_1238, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1243 = come_decrement_ref_count(sname_1243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1244,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_1246,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_1247,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1248 = come_decrement_ref_count(name_1248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_1250,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_1253,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_1254,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_1255,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1208;
    __dec_obj237=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1205);
    __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj238=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1206);
    __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1207;
    __result_obj__440 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value990=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3454, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1209,(char*)come_increment_ref_count(real_fun_name_1210)))));
    (last_code_1205 = come_decrement_ref_count(last_code_1205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1206 = come_decrement_ref_count(last_code2_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1210 = come_decrement_ref_count(real_fun_name_1210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1211,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1213 = come_decrement_ref_count(fun_name2_1213, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value990,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__440,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__440;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1261;
char* __dec_obj239;
char* last_code2_1262;
char* __dec_obj240;
_Bool comma_instead_of_semicolon_1263;
struct sClass* current_stack_frame_struct_1264;
struct sFun* cloner_1265;
void* __right_value991 = (void*)0;
char* real_fun_name_1266;
void* __right_value992 = (void*)0;
struct sType* type2_1267;
struct sClass* klass_1268;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct buffer* source_1269;
int i_1270;
void* __right_value995 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1271;
struct tuple2$2char$phsType$ph* it_1272;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1273=0;
struct sType* field_type_1274=0;
char* p_1277;
int sline_1278;
char* sname_1279;
struct buffer* source3_1280;
char* head_1281;
struct buffer* __dec_obj241;
void* __right_value996 = (void*)0;
char* __dec_obj242;
void* __right_value997 = (void*)0;
struct sBlock* block_1282;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sType* result_type_1283;
void* __right_value1001 = (void*)0;
char* name_1284;
void* __right_value1002 = (void*)0;
struct sType* self_type_1285;
struct sType* __list_values13___1287[1];
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct list$1sType$ph* param_types_1286;
void* __right_value1005 = (void*)0;
char* __list_values14___1288[1];
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct list$1char$ph* param_names_1289;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct list$1char$ph* param_default_parametors_1290;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct sFun* fun2_1291;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sFun* fun_1292;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1019 = (void*)0;
struct sNode* node_1293;
_Bool Value_1294;
void* __right_value1020 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c28_1295=0;
char* Err_1296=0;
char* __dec_obj243;
struct buffer* __dec_obj244;
char* __dec_obj245;
char* __dec_obj246;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__441;
    last_code_1261=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj239=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1262=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj240=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1263=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1264=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1265=((void*)0);
    real_fun_name_1266=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1267=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1267;
    klass_1268=type->mClass;
    if(    type->mPointerNum>0&&!klass_1268->mNumber) {
        source_1269=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3479, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1269,"{\n");
        buffer_append_str(source_1269,"var result = new buffer();\n");
        buffer_append_format(source_1269,"result.append_str(\"%s {\");\n",klass_1268->mName);
        i_1270=0;
        klass_1268=((struct sClass*)(__right_value995=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1268->mName)));
        come_call_finalizer3(__right_value995,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1271=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1268->mFields)),it_1272=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1271));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1271));        it_1272=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1271))        ){
            multiple_assign_var49=it_1272;
            name_1273=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1274=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1270==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1268->mFields)-1) {
                char source2_1275[1024];
                memset(&source2_1275, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1275,1024,"result.append_str(\"%s:\");\n",name_1273);
                buffer_append_str(source_1269,source2_1275);
                snprintf(source2_1275,1024,"result.append_str(self.%s.to_string());\n",name_1273);
                buffer_append_str(source_1269,source2_1275);
            }
            else {
                char source2_1276[1024];
                memset(&source2_1276, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1276,1024,"result.append_str(\"%s:\");\n",name_1273);
                buffer_append_str(source_1269,source2_1276);
                snprintf(source2_1276,1024,"result.append_str(self.%s.to_string());\n",name_1273);
                buffer_append_str(source_1269,source2_1276);
                snprintf(source2_1276,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1269,source2_1276);
            }
            i_1270++;
            (name_1273 = come_decrement_ref_count(name_1273, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1274,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        come_call_finalizer3(o2_saved_1271,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(source_1269,"result.append_str(\"}\");\n");
        buffer_append_format(source_1269,"return result.to_string();\n");
        buffer_append_char(source_1269,125);
        p_1277=info->p;
        sline_1278=info->sline;
        sname_1279=(char*)come_increment_ref_count(info->sname);
        source3_1280=(struct buffer*)come_increment_ref_count(info->source);
        head_1281=info->head;
        __dec_obj241=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1269);
        come_call_finalizer3(__dec_obj241,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj242=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1266));
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1282=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3540, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1283->mHeap=(_Bool)1;
        name_1284=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1266));
        self_type_1285=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1285->mHeap=(_Bool)0;
        param_types_1286=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___1287[0]=self_type_1285,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3545, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values13___1287)));
        param_names_1289=(struct list$1char$ph*)come_increment_ref_count((__list_values14___1288[0]=((char*)(__right_value1005=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3546, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values14___1288)));
        (__right_value1005 = come_decrement_ref_count(__right_value1005, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1290=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3547, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1290,((void*)0));
        result_type_1283->mStatic=(_Bool)0;
        result_type_1283->mUniq=(_Bool)0;
        result_type_1283->mInline=(_Bool)0;
        result_type_1283->mGenerate=(_Bool)0;
        fun2_1291=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1010=__builtin_string(name_1284)))));
        (__right_value1010 = come_decrement_ref_count(__right_value1010, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1291==((void*)0)||fun2_1291->mExternal) {
            fun_1292=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3557, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1284),(struct sType*)come_increment_ref_count(result_type_1283),(struct list$1sType$ph*)come_increment_ref_count(param_types_1286),(struct list$1char$ph*)come_increment_ref_count(param_names_1289),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1290),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1282),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1284)),(struct sFun*)come_increment_ref_count(fun_1292));
            cloner_1265=fun_1292;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3567, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1018=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3567, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1292),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1293=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1018,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1294=node_compile(node_1293,info);
            if(            !Value_1294) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value1020=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1295=multiple_assign_var50->v1;
                Err_1296=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1296)?(puts(Err_1296),exit(0)):(0));
                come_call_finalizer3(__right_value1020,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1296 = come_decrement_ref_count(Err_1296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1292,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1293) ? node_1293 = come_decrement_ref_count(node_1293, ((struct sNode*)node_1293)->finalize, ((struct sNode*)node_1293)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1265=fun2_1291;
        }
        __dec_obj243=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1279);
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1278;
        __dec_obj244=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1280);
        come_call_finalizer3(__dec_obj244,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1277;
        info->head=head_1281;
        info->sline=sline_1278;
        come_call_finalizer3(source_1269,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1279 = come_decrement_ref_count(sname_1279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_1282,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_1283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1284 = come_decrement_ref_count(name_1284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1285,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_1286,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_1289,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_1290,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_1291,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1264;
    __dec_obj245=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1261);
    __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj246=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1262);
    __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1263;
    __result_obj__441 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1022=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3593, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1265,(char*)come_increment_ref_count(real_fun_name_1266)))));
    (last_code_1261 = come_decrement_ref_count(last_code_1261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1262 = come_decrement_ref_count(last_code2_1262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1266 = come_decrement_ref_count(real_fun_name_1266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1267,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value1022,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__441,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__441;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1342;
char* __dec_obj257;
char* last_code2_1343;
char* __dec_obj258;
_Bool comma_instead_of_semicolon_1344;
struct sClass* current_stack_frame_struct_1345;
struct sFun* get_hash_key_fun_1346;
void* __right_value1067 = (void*)0;
char* real_fun_name_1347;
void* __right_value1068 = (void*)0;
struct sType* type2_1348;
struct sClass* klass_1349;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
char* none_generics_name_1350;
void* __right_value1071 = (void*)0;
char* generics_fun_name_1351;
void* __right_value1072 = (void*)0;
struct sGenericsFun* generics_fun_1352;
void* __right_value1073 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1353=0;
_Bool err_1354=0;
void* __right_value1074 = (void*)0;
int i_1355;
void* __right_value1075 = (void*)0;
char* new_fun_name_1356;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
char* __dec_obj259;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct buffer* source_1357;
int i_1358;
void* __right_value1081 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1359;
struct tuple2$2char$phsType$ph* it_1360;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1361=0;
struct sType* field_type_1362=0;
char* p_1364;
int sline_1365;
char* sname_1366;
struct buffer* source3_1367;
char* head_1368;
struct buffer* __dec_obj260;
void* __right_value1082 = (void*)0;
char* __dec_obj261;
void* __right_value1083 = (void*)0;
struct sBlock* block_1369;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct sType* result_type_1370;
void* __right_value1087 = (void*)0;
char* name_1371;
void* __right_value1088 = (void*)0;
struct sType* self_type_1372;
struct sType* __list_values17___1374[1];
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct list$1sType$ph* param_types_1373;
void* __right_value1091 = (void*)0;
char* __list_values18___1375[1];
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct list$1char$ph* param_names_1376;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct list$1char$ph* param_default_parametors_1377;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
struct sFun* fun2_1378;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct sFun* fun_1379;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1105 = (void*)0;
struct sNode* node_1380;
_Bool Value_1381;
void* __right_value1106 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c30_1382=0;
char* Err_1383=0;
char* __dec_obj262;
struct buffer* __dec_obj263;
char* __dec_obj264;
char* __dec_obj265;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__443;
memset(&i_1355, 0, sizeof(int));
    last_code_1342=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj257=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1343=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj258=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1344=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1345=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1346=((void*)0);
    real_fun_name_1347=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1348=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1348;
    klass_1349=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1346=((struct sFun*)(__right_value1069=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1347)));
        come_call_finalizer3(__right_value1069,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        get_hash_key_fun_1346==((void*)0)) {
            none_generics_name_1350=(char*)come_increment_ref_count(get_none_generics_name(type2_1348->mClass->mName));
            generics_fun_name_1351=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1350,fun_name));
            generics_fun_1352=((struct sGenericsFun*)(__right_value1072=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1351)));
            come_call_finalizer3(__right_value1072,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1352) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1073=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1347),generics_fun_1352,type,info)));
                name_1353=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1354=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1073,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1354) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1346=((struct sFun*)(__right_value1074=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1353)));
                come_call_finalizer3(__right_value1074,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1353 = come_decrement_ref_count(name_1353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1350 = come_decrement_ref_count(none_generics_name_1350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1351 = come_decrement_ref_count(generics_fun_name_1351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1355=128-1;        i_1355>=1;        i_1355--        ){
            new_fun_name_1356=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1347,i_1355));
            get_hash_key_fun_1346=((struct sFun*)(__right_value1076=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1356)));
            come_call_finalizer3(__right_value1076,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            get_hash_key_fun_1346) {
                __dec_obj259=real_fun_name_1347;
                real_fun_name_1347=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1356));
                __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1356 = come_decrement_ref_count(new_fun_name_1356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1356 = come_decrement_ref_count(new_fun_name_1356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1346==((void*)0)) {
            get_hash_key_fun_1346=((struct sFun*)(__right_value1078=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1347)));
            come_call_finalizer3(__right_value1078,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    get_hash_key_fun_1346==((void*)0)&&type->mPointerNum>0&&!klass_1349->mNumber&&!klass_1349->mProtocol) {
        source_1357=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3856, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1357,"{\n");
        buffer_append_str(source_1357,"unsigned int result = 0;\n");
        i_1358=0;
        klass_1349=((struct sClass*)(__right_value1081=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1349->mName)));
        come_call_finalizer3(__right_value1081,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1359=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1349->mFields)),it_1360=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1359));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1359));        it_1360=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1359))        ){
            multiple_assign_var55=it_1360;
            name_1361=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1362=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1363[1024];
            memset(&source2_1363, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1363,1024,"result += ((int)self.%s).get_hash_key();\n",name_1361);
            buffer_append_str(source_1357,source2_1363);
            i_1358++;
            (name_1361 = come_decrement_ref_count(name_1361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        come_call_finalizer3(o2_saved_1359,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_format(source_1357,"return result;\n");
        buffer_append_char(source_1357,125);
        p_1364=info->p;
        sline_1365=info->sline;
        sname_1366=(char*)come_increment_ref_count(info->sname);
        source3_1367=(struct buffer*)come_increment_ref_count(info->source);
        head_1368=info->head;
        __dec_obj260=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1357);
        come_call_finalizer3(__dec_obj260,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj261=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1347));
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1369=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1370=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3893, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1370->mUnsigned=(_Bool)1;
        name_1371=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1347));
        self_type_1372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1372->mHeap=(_Bool)0;
        param_types_1373=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___1374[0]=self_type_1372,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3898, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values17___1374)));
        param_names_1376=(struct list$1char$ph*)come_increment_ref_count((__list_values18___1375[0]=((char*)(__right_value1091=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3899, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values18___1375)));
        (__right_value1091 = come_decrement_ref_count(__right_value1091, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1377=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3900, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1377,((void*)0));
        result_type_1370->mStatic=(_Bool)0;
        result_type_1370->mUniq=(_Bool)0;
        result_type_1370->mInline=(_Bool)0;
        result_type_1370->mGenerate=(_Bool)0;
        fun2_1378=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1096=__builtin_string(name_1371)))));
        (__right_value1096 = come_decrement_ref_count(__right_value1096, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1378==((void*)0)||fun2_1378->mExternal) {
            fun_1379=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3910, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1371),(struct sType*)come_increment_ref_count(result_type_1370),(struct list$1sType$ph*)come_increment_ref_count(param_types_1373),(struct list$1char$ph*)come_increment_ref_count(param_names_1376),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1377),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1369),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1371)),(struct sFun*)come_increment_ref_count(fun_1379));
            get_hash_key_fun_1346=fun_1379;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3920, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1104=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3920, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1379),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1380=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1104,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1381=node_compile(node_1380,info);
            if(            !Value_1381) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1106=err_msg(info,"compiling error(Y)")));
                come_exception_var_c30_1382=multiple_assign_var56->v1;
                Err_1383=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1383)?(puts(Err_1383),exit(0)):(0));
                come_call_finalizer3(__right_value1106,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1383 = come_decrement_ref_count(Err_1383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1379,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1380) ? node_1380 = come_decrement_ref_count(node_1380, ((struct sNode*)node_1380)->finalize, ((struct sNode*)node_1380)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1346=fun2_1378;
        }
        __dec_obj262=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1366);
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1365;
        __dec_obj263=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1367);
        come_call_finalizer3(__dec_obj263,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1364;
        info->head=head_1368;
        info->sline=sline_1365;
        come_call_finalizer3(source_1357,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1366 = come_decrement_ref_count(sname_1366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1367,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(block_1369,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(result_type_1370,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1371 = come_decrement_ref_count(name_1371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_1373,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_1376,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_1377,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(fun2_1378,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1345;
    __dec_obj264=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1342);
    __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj265=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1343);
    __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1344;
    __result_obj__443 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1108=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3946, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1346,(char*)come_increment_ref_count(real_fun_name_1347)))));
    (last_code_1342 = come_decrement_ref_count(last_code_1342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1343 = come_decrement_ref_count(last_code2_1343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1347 = come_decrement_ref_count(real_fun_name_1347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1348,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value1108,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__443,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__443;
}

