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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2char$phvoid$p
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sType* use_any_type(struct sType* type);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
struct sType* remove_any_type(struct sType* type);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self);
static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self);
static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self);
static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self);
static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sCurrentNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__237,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value260 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value260=__builtin_string(self->sname))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__239;
    __result_obj__239 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sCurrentNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__239 = come_decrement_ref_count2(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__239;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
char* class_name_350;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sClass* current_stack_351;
struct sVarTable* vtable_400;
struct map$2char$phsVar$ph* o2_saved_401;
char* it_404;
char* key_407;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sVar* value_408;
void* __right_value320 = (void*)0;
struct sType* type2_412;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2char$phsType$ph* item_413;
void* __right_value324 = (void*)0;
struct sType* type3_415;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct tuple2$2char$phsType$ph* item2_418;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_465;
char* it_466;
char* key_467;
void* __right_value338 = (void*)0;
struct sVar* value_468;
void* __right_value339 = (void*)0;
struct sType* type2_469;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct tuple2$2char$phsType$ph* item_470;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_471;
void* __right_value344 = (void*)0;
char* __dec_obj61;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__298;
    info->current_stack_num++;
    class_name_350=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_351=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),(char*)come_increment_ref_count(class_name_350),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_400=info->lv_table;
    while(vtable_400) {
        for(        o2_saved_401=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_400->mVars)),it_404=map$2char$phsVar$ph$p_begin((o2_saved_401));        !map$2char$phsVar$ph$p_end((o2_saved_401));        it_404=map$2char$phsVar$ph$p_next((o2_saved_401))        ){
            key_407=it_404;
            value_408=((struct sVar*)(__right_value319=map$2char$phsVar$ph$p_operator_load_element(vtable_400->mVars,((char*)(__right_value318=__builtin_string(key_407))))));
            (__right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value319,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_412=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_408->mType));
            type2_412->mPointerNum++;
            item_413=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 438, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_408->mCValueName)),(struct sType*)come_increment_ref_count(type2_412)));
            if(            value_408->mCValueName!=((void*)0)) {
                if(                strcmp(value_408->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_408->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_408->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_408->mType->mClass->mName,"va_list")||string_operator_equals(value_408->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_412->mArrayNum)==1) {
                    type3_415=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_412));
                    list$1sNode$ph$p_reset(type3_415->mArrayNum);
                    type3_415->mPointerNum=1;
                    type3_415->mOriginIsArray=(_Bool)1;
                    item2_418=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 458, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_408->mCValueName)),(struct sType*)come_increment_ref_count(type3_415)));
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_351->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_418)));
                    value_408->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_415,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_418,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph$p_push_back(current_stack_351->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_413)));
                }
            }
            come_call_finalizer3(type2_412,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_413,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_401,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_400=vtable_400->mParent;
    }
    output_struct(current_stack_351,info);
    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_350),(struct sClass*)come_increment_ref_count(current_stack_351));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_350,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_350);
    vtable_400=info->lv_table;
    while(vtable_400) {
        for(        o2_saved_465=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_400->mVars)),it_466=map$2char$phsVar$ph$p_begin((o2_saved_465));        !map$2char$phsVar$ph$p_end((o2_saved_465));        it_466=map$2char$phsVar$ph$p_next((o2_saved_465))        ){
            key_467=it_466;
            value_468=((struct sVar*)(__right_value338=map$2char$phsVar$ph$p_operator_load_element(vtable_400->mVars,key_467)));
            come_call_finalizer3(__right_value338,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_469=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_468->mType));
            item_470=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 487, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_468->mCValueName),(struct sType*)come_increment_ref_count(type2_469)));
            if(            value_468->mCValueName!=((void*)0)) {
                if(                strcmp(value_468->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_468->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_468->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_468->mType->mClass->mName,"va_list")||string_operator_equals(value_468->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_469->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_468->mCValueName,value_468->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_468->mCValueName,value_468->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_469,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_470,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_465,map$2char$phsVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_400=vtable_400->mParent;
    }
    come_value_471=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj61=come_value_471->c_value;
    come_value_471->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj62=come_value_471->type;
    come_value_471->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(class_name_350),(_Bool)0,info));
    come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_471->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_471->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_471));
    __result_obj__298 = (_Bool)1;
    (class_name_350 = come_decrement_ref_count2(class_name_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_351,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__298;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_352;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sType$ph* it_354;
struct list_item$1sType$ph* prev_it_355;
    it_354=self->head;
    while(it_354!=((void*)0)) {
        prev_it_355=it_354;
        it_354=it_354->next;
        come_call_finalizer3(prev_it_355,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_356;
struct list_item$1sNode$ph* prev_it_357;
    it_356=self->head;
    while(it_356!=((void*)0)) {
        prev_it_357=it_356;
        it_356=it_356->next;
        come_call_finalizer3(prev_it_357,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__240;
void* __right_value263 = (void*)0;
struct sClass* result_367;
void* __right_value264 = (void*)0;
char* __dec_obj23;
void* __right_value313 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj53;
void* __right_value314 = (void*)0;
char* __dec_obj54;
void* __right_value315 = (void*)0;
char* __dec_obj55;
struct sClass* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__240 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__240,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_367=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_367->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_367->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_367->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_367->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_367->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_367->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_367->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_367->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj23=result_367->mName;
        result_367->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_367->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj53=result_367->mFields;
        result_367->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsType$ph$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj53,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj54=result_367->mParentClassName;
        result_367->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj55=result_367->mAttribute;
        result_367->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mDynamic=self->mDynamic;
    }
    __result_obj__262 = come_increment_ref_count(result_367);
    come_call_finalizer3(result_367,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__262,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__262;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_358;
    result_358=0;
    result_358+=int_get_hash_key(((int)self->mStruct));
    result_358+=int_get_hash_key(((int)self->mFloat));
    result_358+=int_get_hash_key(((int)self->mUnion));
    result_358+=int_get_hash_key(((int)self->mGenerics));
    result_358+=int_get_hash_key(((int)self->mMethodGenerics));
    result_358+=int_get_hash_key(((int)self->mEnum));
    result_358+=int_get_hash_key(((int)self->mProtocol));
    result_358+=int_get_hash_key(((int)self->mNumber));
    result_358+=int_get_hash_key(((int)self->mName));
    result_358+=int_get_hash_key(((int)self->mGenericsNum));
    result_358+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_358+=int_get_hash_key(((int)self->mFields));
    result_358+=int_get_hash_key(((int)self->mParentClassName));
    result_358+=int_get_hash_key(((int)self->mAttribute));
    result_358+=int_get_hash_key(((int)self->mDynamic));
    return result_358;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_359;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_360;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_359=left->head;
    it2_360=right->head;
    while(it_359!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_359->item,it2_360->item)) {
            return (_Bool)0;
        }
        it_359=it_359->next;
        it2_360=it2_360->next;
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
struct list_item$1sType$ph* it_361;
struct list_item$1sType$ph* it2_362;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_361=left->head;
    it2_362=right->head;
    while(it_361!=((void*)0)) {
        if(        !sType_equals(it_361->item,it2_362->item)) {
            return (_Bool)0;
        }
        it_361=it_361->next;
        it2_362=it2_362->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_363;
struct list_item$1sNode$ph* it2_364;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_363=left->head;
    it2_364=right->head;
    while(it_363!=((void*)0)) {
        if(        !sNode_equals(it_363->item,it2_364->item)) {
            return (_Bool)0;
        }
        it_363=it_363->next;
        it2_364=it2_364->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_365;
struct list_item$1char$ph* it2_366;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_365=left->head;
    it2_366=right->head;
    while(it_365!=((void*)0)) {
        if(        !string_equals(it_365->item,it2_366->item)) {
            return (_Bool)0;
        }
        it_365=it_365->next;
        it2_366=it2_366->next;
    }
    return (_Bool)1;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__241;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result_368;
struct list_item$1tuple2$2char$phsType$ph$ph* it_369;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__261;
    if(    self==((void*)0)) {
        __result_obj__241 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__241,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__241;
    }
    result_368=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1404, "struct list$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_369=self->head;
    while(it_369!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsType$ph$ph$p_add(result_368,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_369->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph$p_add(result_368,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_369->item)));
        }
        it_369=it_369->next;
    }
    __result_obj__261 = come_increment_ref_count(result_368);
    come_call_finalizer3(result_368,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__261,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__261;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__242;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__242 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__242,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__242;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value267 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_370;
struct tuple2$2char$phsType$ph* __dec_obj24;
void* __right_value268 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_371;
struct tuple2$2char$phsType$ph* __dec_obj25;
void* __right_value269 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_372;
struct tuple2$2char$phsType$ph* __dec_obj26;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__243;
    if(    self->len==0) {
        litem_370=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value267=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1423, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj24=litem_370->item;
        litem_370->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj24,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1) {
        litem_371=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value268=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1433, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj25=litem_371->item;
        litem_371->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj25,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value269=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1443, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj26=litem_372->item;
        litem_372->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result_obj__243 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__243;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__244;
void* __right_value270 = (void*)0;
struct tuple2$2char$phsType$ph* result_373;
void* __right_value271 = (void*)0;
char* __dec_obj27;
void* __right_value310 = (void*)0;
struct sType* __dec_obj52;
struct tuple2$2char$phsType$ph* __result_obj__260;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__244,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__244;
    }
    result_373=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj27=result_373->v1;
        result_373->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj52=result_373->v2;
        result_373->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__260 = come_increment_ref_count(result_373);
    come_call_finalizer3(result_373,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__260,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__260;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__245;
void* __right_value272 = (void*)0;
struct sType* result_375;
void* __right_value273 = (void*)0;
struct sType* __dec_obj28;
void* __right_value274 = (void*)0;
struct sType* __dec_obj29;
void* __right_value282 = (void*)0;
struct list$1sType$ph* __dec_obj33;
void* __right_value283 = (void*)0;
struct sType* __dec_obj34;
void* __right_value284 = (void*)0;
struct sType* __dec_obj35;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj36;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
char* __dec_obj38;
void* __right_value289 = (void*)0;
char* __dec_obj39;
void* __right_value290 = (void*)0;
char* __dec_obj40;
void* __right_value298 = (void*)0;
struct list$1sNode$ph* __dec_obj44;
void* __right_value299 = (void*)0;
char* __dec_obj45;
void* __right_value300 = (void*)0;
struct list$1sType$ph* __dec_obj46;
void* __right_value308 = (void*)0;
struct list$1char$ph* __dec_obj50;
void* __right_value309 = (void*)0;
struct sType* __dec_obj51;
struct sType* __result_obj__259;
    if(    self==(void*)0) {
        __result_obj__245 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__245,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__245;
    }
    result_375=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_375->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj28=result_375->mOriginalLoadVarType;
        result_375->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj29=result_375->mChannelType;
        result_375->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj33=result_375->mGenericsTypes;
        result_375->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj33,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj34=result_375->mNoSolvedGenericsType;
        result_375->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj35=result_375->mAnyOriginalType;
        result_375->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj36=result_375->mSizeNum;
        result_375->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj37=result_375->mAlignas;
        result_375->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj38=result_375->mTupleName;
        result_375->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj39=result_375->mAttribute;
        result_375->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_375->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_375->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_375->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_375->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_375->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_375->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_375->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_375->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_375->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_375->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_375->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_375->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_375->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_375->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_375->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_375->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_375->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_375->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_375->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_375->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_375->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_375->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_375->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_375->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_375->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj40=result_375->mAsmName;
        result_375->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_375->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_375->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj44=result_375->mArrayNum;
        result_375->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj44,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_375->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj45=result_375->mOriginalTypeName;
        result_375->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_375->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_375->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_375->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj46=result_375->mParamTypes;
        result_375->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj46,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj50=result_375->mParamNames;
        result_375->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj50,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj51=result_375->mResultType;
        result_375->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_375->mVarArgs=self->mVarArgs;
    }
    __result_obj__259 = come_increment_ref_count(result_375);
    come_call_finalizer3(result_375,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__259,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__259;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_374;
    result_374=0;
    result_374+=int_get_hash_key(((int)self->mClass));
    result_374+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_374+=int_get_hash_key(((int)self->mChannelType));
    result_374+=int_get_hash_key(((int)self->mGenericsTypes));
    result_374+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_374+=int_get_hash_key(((int)self->mAnyClass));
    result_374+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_374+=int_get_hash_key(((int)self->mSizeNum));
    result_374+=int_get_hash_key(((int)self->mAlignas));
    result_374+=int_get_hash_key(((int)self->mTupleName));
    result_374+=int_get_hash_key(((int)self->mAttribute));
    result_374+=int_get_hash_key(((int)self->mAllocaValue));
    result_374+=int_get_hash_key(((int)self->mUnsigned));
    result_374+=int_get_hash_key(((int)self->mShort));
    result_374+=int_get_hash_key(((int)self->mLong));
    result_374+=int_get_hash_key(((int)self->mLongLong));
    result_374+=int_get_hash_key(((int)self->mConstant));
    result_374+=int_get_hash_key(((int)self->mAtomic));
    result_374+=int_get_hash_key(((int)self->mRegister));
    result_374+=int_get_hash_key(((int)self->mVolatile));
    result_374+=int_get_hash_key(((int)self->mStatic));
    result_374+=int_get_hash_key(((int)self->mUniq));
    result_374+=int_get_hash_key(((int)self->mRecord));
    result_374+=int_get_hash_key(((int)self->mExtern));
    result_374+=int_get_hash_key(((int)self->mRestrict));
    result_374+=int_get_hash_key(((int)self->mImmutable));
    result_374+=int_get_hash_key(((int)self->mHeap));
    result_374+=int_get_hash_key(((int)self->mChannel));
    result_374+=int_get_hash_key(((int)self->mNoHeap));
    result_374+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_374+=int_get_hash_key(((int)self->mException));
    result_374+=int_get_hash_key(((int)self->mGenerate));
    result_374+=int_get_hash_key(((int)self->mCreateVTable));
    result_374+=int_get_hash_key(((int)self->mDynamic));
    result_374+=int_get_hash_key(((int)self->mInline));
    result_374+=int_get_hash_key(((int)self->mNullValue));
    result_374+=int_get_hash_key(((int)self->mGuardValue));
    result_374+=int_get_hash_key(((int)self->mAsmName));
    result_374+=int_get_hash_key(((int)self->mTypedef));
    result_374+=int_get_hash_key(((int)self->mMultipleTypes));
    result_374+=int_get_hash_key(((int)self->mOriginIsArray));
    result_374+=int_get_hash_key(((int)self->mArrayNum));
    result_374+=int_get_hash_key(((int)self->mPointerNum));
    result_374+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_374+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_374+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_374+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_374+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_374+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_374+=int_get_hash_key(((int)self->mArrayPointerType));
    result_374+=int_get_hash_key(((int)self->mLambdaArray));
    result_374+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_374+=int_get_hash_key(((int)self->mParamTypes));
    result_374+=int_get_hash_key(((int)self->mParamNames));
    result_374+=int_get_hash_key(((int)self->mResultType));
    result_374+=int_get_hash_key(((int)self->mVarArgs));
    return result_374;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__246;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1sType$ph* result_376;
struct list_item$1sType$ph* it_377;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1sType$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_376=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1404, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_377=self->head;
    while(it_377!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_376,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_377->item)));
        }
        else {
            list$1sType$ph$p_add(result_376,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_377->item)));
        }
        it_377=it_377->next;
    }
    __result_obj__249 = come_increment_ref_count(result_376);
    come_call_finalizer3(result_376,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__247;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__247 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value277 = (void*)0;
struct list_item$1sType$ph* litem_378;
struct sType* __dec_obj30;
void* __right_value278 = (void*)0;
struct list_item$1sType$ph* litem_379;
struct sType* __dec_obj31;
void* __right_value279 = (void*)0;
struct list_item$1sType$ph* litem_380;
struct sType* __dec_obj32;
struct list$1sType$ph* __result_obj__248;
    if(    self->len==0) {
        litem_378=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value277=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1423, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj30=litem_378->item;
        litem_378->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value278=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1433, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj31=litem_379->item;
        litem_379->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value279=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1443, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj32=litem_380->item;
        litem_380->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result_obj__248 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__248;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_381;
struct list_item$1sType$ph* prev_it_382;
    it_381=self->head;
    while(it_381!=((void*)0)) {
        prev_it_382=it_381;
        it_381=it_381->next;
        come_call_finalizer3(prev_it_382,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__250;
void* __right_value285 = (void*)0;
struct sNode* result_383;
struct sNode* __result_obj__251;
    if(    self==(void*)0) {
        __result_obj__250 = come_increment_ref_count((void*)0);
        ((__result_obj__250) ? __result_obj__250 = come_decrement_ref_count2(__result_obj__250, ((struct sNode*)__result_obj__250)->finalize, ((struct sNode*)__result_obj__250)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__250;
    }
    result_383=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_383->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_383->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_383->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_383->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_383->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_383->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_383->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_383->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_383->kind=self->kind;
    }
    __result_obj__251 = come_increment_ref_count(result_383);
    ((result_383) ? result_383 = come_decrement_ref_count2(result_383, ((struct sNode*)result_383)->finalize, ((struct sNode*)result_383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__251) ? __result_obj__251 = come_decrement_ref_count2(__result_obj__251, ((struct sNode*)__result_obj__251)->finalize, ((struct sNode*)__result_obj__251)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__252;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1sNode$ph* result_384;
struct list_item$1sNode$ph* it_385;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1sNode$ph* __result_obj__255;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_384=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_385=self->head;
    while(it_385!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_384,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_385->item)));
        }
        else {
            list$1sNode$ph$p_add(result_384,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_385->item)));
        }
        it_385=it_385->next;
    }
    __result_obj__255 = come_increment_ref_count(result_384);
    come_call_finalizer3(result_384,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__255,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__255;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__253;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__253 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value293 = (void*)0;
struct list_item$1sNode$ph* litem_386;
struct sNode* __dec_obj41;
void* __right_value294 = (void*)0;
struct list_item$1sNode$ph* litem_387;
struct sNode* __dec_obj42;
void* __right_value295 = (void*)0;
struct list_item$1sNode$ph* litem_388;
struct sNode* __dec_obj43;
struct list$1sNode$ph* __result_obj__254;
    if(    self->len==0) {
        litem_386=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value293=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=((void*)0);
        litem_386->next=((void*)0);
        __dec_obj41=litem_386->item;
        litem_386->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_386;
        self->head=litem_386;
    }
    else if(    self->len==1) {
        litem_387=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value294=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=self->head;
        litem_387->next=((void*)0);
        __dec_obj42=litem_387->item;
        litem_387->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_387;
        self->head->next=litem_387;
    }
    else {
        litem_388=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value295=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->tail;
        litem_388->next=((void*)0);
        __dec_obj43=litem_388->item;
        litem_388->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_388;
        self->tail=litem_388;
    }
    self->len++;
    __result_obj__254 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__254;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_389;
struct list_item$1sNode$ph* prev_it_390;
    it_389=self->head;
    while(it_389!=((void*)0)) {
        prev_it_390=it_389;
        it_389=it_389->next;
        come_call_finalizer3(prev_it_390,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__256;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1char$ph* result_391;
struct list_item$1char$ph* it_392;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1char$ph* __result_obj__258;
    if(    self==((void*)0)) {
        __result_obj__256 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__256,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__256;
    }
    result_391=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_392=self->head;
    while(it_392!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_391,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_392->item)));
        }
        else {
            list$1char$ph$p_add(result_391,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_392->item)));
        }
        it_392=it_392->next;
    }
    __result_obj__258 = come_increment_ref_count(result_391);
    come_call_finalizer3(result_391,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value303 = (void*)0;
struct list_item$1char$ph* litem_393;
char* __dec_obj47;
void* __right_value304 = (void*)0;
struct list_item$1char$ph* litem_394;
char* __dec_obj48;
void* __right_value305 = (void*)0;
struct list_item$1char$ph* litem_395;
char* __dec_obj49;
struct list$1char$ph* __result_obj__257;
    if(    self->len==0) {
        litem_393=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value303=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_393->prev=((void*)0);
        litem_393->next=((void*)0);
        __dec_obj47=litem_393->item;
        litem_393->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_393;
        self->head=litem_393;
    }
    else if(    self->len==1) {
        litem_394=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value304=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=self->head;
        litem_394->next=((void*)0);
        __dec_obj48=litem_394->item;
        litem_394->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_394;
        self->head->next=litem_394;
    }
    else {
        litem_395=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value305=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=self->tail;
        litem_395->next=((void*)0);
        __dec_obj49=litem_395->item;
        litem_395->item=(char*)come_increment_ref_count(item);
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_395;
        self->tail=litem_395;
    }
    self->len++;
    __result_obj__257 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__257;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_396;
struct list_item$1char$ph* prev_it_397;
    it_396=self->head;
    while(it_396!=((void*)0)) {
        prev_it_397=it_396;
        it_396=it_396->next;
        come_call_finalizer3(prev_it_397,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_398;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_399;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        come_call_finalizer3(prev_it_399,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_402;
char* __result_obj__263;
char* __result_obj__264;
char* result_403;
char* __result_obj__265;
result_402 = (void*)0;
result_403 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_402,0,sizeof(char*));
        __result_obj__263 = result_402;
        return __result_obj__263;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__264 = self->key_list->it->item;
        return __result_obj__264;
    }
    memset(&result_403,0,sizeof(char*));
    __result_obj__265 = result_403;
    return __result_obj__265;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_405;
char* __result_obj__266;
char* __result_obj__267;
char* result_406;
char* __result_obj__268;
result_405 = (void*)0;
result_406 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_405,0,sizeof(char*));
        __result_obj__266 = result_405;
        return __result_obj__266;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__267 = self->key_list->it->item;
        return __result_obj__267;
    }
    memset(&result_406,0,sizeof(char*));
    __result_obj__268 = result_406;
    return __result_obj__268;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_409;
unsigned int hash_410;
unsigned int it_411;
struct sVar* __result_obj__269;
struct sVar* __result_obj__270;
struct sVar* __result_obj__271;
struct sVar* __result_obj__272;
default_value_409 = (void*)0;
    memset(&default_value_409,0,sizeof(struct sVar*));
    hash_410=string_get_hash_key(((char*)key))%self->size;
    it_411=hash_410;
    while((_Bool)1) {
        if(        self->item_existance[it_411]) {
            if(            string_equals(self->keys[it_411],key)) {
                __result_obj__269 = come_increment_ref_count(self->items[it_411]);
                come_call_finalizer3(default_value_409,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__269,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__269;
            }
            it_411++;
            if(            it_411>=self->size) {
                it_411=0;
            }
            else if(            it_411==hash_410) {
                __result_obj__270 = come_increment_ref_count(default_value_409);
                come_call_finalizer3(default_value_409,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__270,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__270;
            }
        }
        else {
            __result_obj__271 = come_increment_ref_count(default_value_409);
            come_call_finalizer3(default_value_409,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__271,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__271;
        }
    }
    __result_obj__272 = come_increment_ref_count(default_value_409);
    come_call_finalizer3(default_value_409,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__272,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__272;
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

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_414;
    result_414=0;
    result_414+=int_get_hash_key(((int)self->v1));
    result_414+=int_get_hash_key(((int)self->v2));
    return result_414;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj56;
struct sType* __dec_obj57;
struct tuple2$2char$phsType$ph* __result_obj__273;
    __dec_obj56=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__273 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__273,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__273;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_416;
struct list_item$1sNode$ph* prev_it_417;
struct list$1sNode$ph* __result_obj__274;
    it_416=self->head;
    while(it_416!=((void*)0)) {
        prev_it_417=it_416;
        it_416=it_416->next;
        come_call_finalizer3(prev_it_417,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__274 = self;
    return __result_obj__274;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value328 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_419;
struct tuple2$2char$phsType$ph* __dec_obj58;
void* __right_value329 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_420;
struct tuple2$2char$phsType$ph* __dec_obj59;
void* __right_value330 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_421;
struct tuple2$2char$phsType$ph* __dec_obj60;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__275;
    if(    self->len==0) {
        litem_419=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value328=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1493, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_419->prev=((void*)0);
        litem_419->next=((void*)0);
        __dec_obj58=litem_419->item;
        litem_419->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_419;
        self->head=litem_419;
    }
    else if(    self->len==1) {
        litem_420=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value329=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1503, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=self->head;
        litem_420->next=((void*)0);
        __dec_obj59=litem_420->item;
        litem_420->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_420;
        self->head->next=litem_420;
    }
    else {
        litem_421=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value330=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1513, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_421->prev=self->tail;
        litem_421->next=((void*)0);
        __dec_obj60=litem_421->item;
        litem_421->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_421;
        self->tail=litem_421;
    }
    self->len++;
    __result_obj__275 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__275;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_422;
int i_423;
    for(    i_422=0;    i_422<self->size;    i_422++    ){
        if(        self->item_existance[i_422]) {
            if(            1) {
                come_call_finalizer3(self->items[i_422],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_423=0;    i_423<self->size;    i_423++    ){
        if(        self->item_existance[i_423]) {
            if(            1) {
                (self->keys[i_423] = come_decrement_ref_count2(self->keys[i_423], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_441;
unsigned int it_442;
_Bool same_key_exist_459;
char* it2_462;
struct map$2char$phsClass$ph* __result_obj__296;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_441=string_get_hash_key(((char*)key))%self->size;
    it_442=hash_441;
    while((_Bool)1) {
        if(        self->item_existance[it_442]) {
            if(            string_equals(self->keys[it_442],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_442]);
                    (self->keys[it_442] = come_decrement_ref_count2(self->keys[it_442], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_442]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_442]);
                    self->keys[it_442]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_442],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_442]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_442]=item;
                }
                break;
            }
            it_442++;
            if(            it_442>=self->size) {
                it_442=0;
            }
            else if(            it_442==hash_441) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_442]=(_Bool)1;
            if(            1) {
                self->keys[it_442]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_442]=key;
            }
            if(            1) {
                self->items[it_442]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_442]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_459=(_Bool)0;
    for(    it2_462=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_462=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_462,key)) {
            same_key_exist_459=(_Bool)1;
        }
    }
    if(    !same_key_exist_459) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__296 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__296;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_424;
void* __right_value333 = (void*)0;
char** keys_425;
void* __right_value334 = (void*)0;
struct sClass** items_426;
void* __right_value335 = (void*)0;
_Bool* item_existance_427;
int len_428;
char* it_431;
struct sClass* default_value_434;
void* __right_value336 = (void*)0;
struct sClass* it2_435;
unsigned int hash_438;
int n_439;
struct sClass* default_value_440;
void* __right_value337 = (void*)0;
default_value_434 = (void*)0;
default_value_440 = (void*)0;
    size_424=self->size*10;
    keys_425=(char**)come_increment_ref_count(((char**)(__right_value333=(char**)come_calloc(1, sizeof(char*)*(1*(size_424)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_426=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value334=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_424)), "./comelang.h", 2939, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_427=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value335=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_424)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_428=0;
    for(    it_431=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_431=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_434,0,sizeof(struct sClass*));
        it2_435=((struct sClass*)(__right_value336=map$2char$phsClass$ph$p_at(self,it_431,(struct sClass*)come_increment_ref_count(default_value_434))));
        come_call_finalizer3(__right_value336,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_438=string_get_hash_key(((char*)it_431))%size_424;
        n_439=hash_438;
        while((_Bool)1) {
            if(            item_existance_427[n_439]) {
                n_439++;
                if(                n_439>=size_424) {
                    n_439=0;
                }
                else if(                n_439==hash_438) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_427[n_439]=(_Bool)1;
                keys_425[n_439]=it_431;
                items_426[n_439]=((struct sClass*)(__right_value337=map$2char$phsClass$ph$p_at(self,it_431,(struct sClass*)come_increment_ref_count(default_value_440))));
                come_call_finalizer3(__right_value337,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_428++;
                come_call_finalizer3(default_value_440,sClass_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_440,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_434,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_425;
    self->items=items_426;
    self->item_existance=item_existance_427;
    self->size=size_424;
    self->len=len_428;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_429;
char* __result_obj__276;
char* __result_obj__277;
char* result_430;
char* __result_obj__278;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_429,0,sizeof(char*));
        __result_obj__276 = result_429;
        return __result_obj__276;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__277 = self->key_list->it->item;
        return __result_obj__277;
    }
    memset(&result_430,0,sizeof(char*));
    __result_obj__278 = result_430;
    return __result_obj__278;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_432;
char* __result_obj__279;
char* __result_obj__280;
char* result_433;
char* __result_obj__281;
result_432 = (void*)0;
result_433 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_432,0,sizeof(char*));
        __result_obj__279 = result_432;
        return __result_obj__279;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__280 = self->key_list->it->item;
        return __result_obj__280;
    }
    memset(&result_433,0,sizeof(char*));
    __result_obj__281 = result_433;
    return __result_obj__281;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_436;
unsigned int it_437;
struct sClass* __result_obj__282;
struct sClass* __result_obj__283;
struct sClass* __result_obj__284;
struct sClass* __result_obj__285;
    hash_436=string_get_hash_key(((char*)key))%self->size;
    it_437=hash_436;
    while((_Bool)1) {
        if(        self->item_existance[it_437]) {
            if(            string_equals(self->keys[it_437],key)) {
                __result_obj__282 = come_increment_ref_count(self->items[it_437]);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__282,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__282;
            }
            it_437++;
            if(            it_437>=self->size) {
                it_437=0;
            }
            else if(            it_437==hash_436) {
                __result_obj__283 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__283,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__283;
            }
        }
        else {
            __result_obj__284 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__284,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__284;
        }
    }
    __result_obj__285 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__285,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__285;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_443;
struct list_item$1char$p* it_444;
struct list$1char$p* __result_obj__289;
    it2_443=0;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        if(        charp_equals(it_444->item,item)) {
            list$1char$p$p_delete(self,it2_443,it2_443+1);
            break;
        }
        it2_443++;
        it_444=it_444->next;
    }
    __result_obj__289 = self;
    return __result_obj__289;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_445;
struct list$1char$p* __result_obj__286;
struct list_item$1char$p* it_448;
int i_449;
struct list_item$1char$p* prev_it_450;
struct list_item$1char$p* it_451;
int i_452;
struct list_item$1char$p* prev_it_453;
struct list_item$1char$p* it_454;
struct list_item$1char$p* head_prev_it_455;
struct list_item$1char$p* tail_it_456;
int i_457;
struct list_item$1char$p* prev_it_458;
struct list$1char$p* __result_obj__288;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_445=tail;
        tail=head;
        head=tmp_445;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__286 = self;
        return __result_obj__286;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_448=self->head;
        i_449=0;
        while(it_448!=((void*)0)) {
            if(            i_449<tail) {
                prev_it_450=it_448;
                it_448=it_448->next;
                i_449++;
                come_call_finalizer3(prev_it_450,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_449==tail) {
                self->head=it_448;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_448=it_448->next;
                i_449++;
            }
        }
    }
    else if(    tail==self->len) {
        it_451=self->head;
        i_452=0;
        while(it_451!=((void*)0)) {
            if(            i_452==head) {
                self->tail=it_451->prev;
                self->tail->next=((void*)0);
            }
            if(            i_452>=head) {
                prev_it_453=it_451;
                it_451=it_451->next;
                i_452++;
                come_call_finalizer3(prev_it_453,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_451=it_451->next;
                i_452++;
            }
        }
    }
    else {
        it_454=self->head;
        head_prev_it_455=((void*)0);
        tail_it_456=((void*)0);
        i_457=0;
        while(it_454!=((void*)0)) {
            if(            i_457==head) {
                head_prev_it_455=it_454->prev;
            }
            if(            i_457==tail) {
                tail_it_456=it_454;
            }
            if(            i_457>=head&&i_457<tail) {
                prev_it_458=it_454;
                it_454=it_454->next;
                i_457++;
                come_call_finalizer3(prev_it_458,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_454=it_454->next;
                i_457++;
            }
        }
        if(        head_prev_it_455!=((void*)0)) {
            head_prev_it_455->next=tail_it_456;
        }
        if(        tail_it_456!=((void*)0)) {
            tail_it_456->prev=head_prev_it_455;
        }
    }
    __result_obj__288 = self;
    return __result_obj__288;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_446;
struct list_item$1char$p* prev_it_447;
struct list$1char$p* __result_obj__287;
    it_446=self->head;
    while(it_446!=((void*)0)) {
        prev_it_447=it_446;
        it_446=it_446->next;
        come_call_finalizer3(prev_it_447,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__287 = self;
    return __result_obj__287;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_460;
char* __result_obj__290;
char* __result_obj__291;
char* result_461;
char* __result_obj__292;
result_460 = (void*)0;
result_461 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_460,0,sizeof(char*));
        __result_obj__290 = result_460;
        return __result_obj__290;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__291 = self->it->item;
        return __result_obj__291;
    }
    memset(&result_461,0,sizeof(char*));
    __result_obj__292 = result_461;
    return __result_obj__292;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_463;
char* __result_obj__293;
char* __result_obj__294;
char* result_464;
char* __result_obj__295;
result_463 = (void*)0;
result_464 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_463,0,sizeof(char*));
        __result_obj__293 = result_463;
        return __result_obj__293;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__294 = self->it->item;
        return __result_obj__294;
    }
    memset(&result_464,0,sizeof(char*));
    __result_obj__295 = result_464;
    return __result_obj__295;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value347 = (void*)0;
struct list_item$1CVALUE$ph* litem_472;
struct CVALUE* __dec_obj63;
void* __right_value348 = (void*)0;
struct list_item$1CVALUE$ph* litem_473;
struct CVALUE* __dec_obj64;
void* __right_value349 = (void*)0;
struct list_item$1CVALUE$ph* litem_474;
struct CVALUE* __dec_obj65;
struct list$1CVALUE$ph* __result_obj__297;
    if(    self->len==0) {
        litem_472=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value347=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1493, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_472->prev=((void*)0);
        litem_472->next=((void*)0);
        __dec_obj63=litem_472->item;
        litem_472->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_472;
        self->head=litem_472;
    }
    else if(    self->len==1) {
        litem_473=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value348=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1503, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_473->prev=self->head;
        litem_473->next=((void*)0);
        __dec_obj64=litem_473->item;
        litem_473->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_473;
        self->head->next=litem_473;
    }
    else {
        litem_474=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value349=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1513, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_474->prev=self->tail;
        litem_474->next=((void*)0);
        __dec_obj65=litem_474->item;
        litem_474->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_474;
        self->tail=litem_474;
    }
    self->len++;
    __result_obj__297 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__297;
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

struct sType* use_any_type(struct sType* type){
struct sType* __dec_obj66;
int i_475;
struct list$1sType$ph* o2_saved_476;
struct sType* it_479;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __result_obj__308;
    if(    type->mAnyOriginalType) {
        __dec_obj66=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_475=0;
    for(    o2_saved_476=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_479=list$1sType$ph$p_begin((o2_saved_476));    !list$1sType$ph$p_end((o2_saved_476));    it_479=list$1sType$ph$p_next((o2_saved_476))    ){
        list$1sType$ph$p_operator_store_element(type->mGenericsTypes,i_475,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_479)))));
        i_475++;
    }
    come_call_finalizer3(o2_saved_476,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__308 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__308,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_477;
struct sType* __result_obj__299;
struct sType* __result_obj__300;
struct sType* result_478;
struct sType* __result_obj__301;
result_477 = (void*)0;
result_478 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_477,0,sizeof(struct sType*));
        __result_obj__299 = result_477;
        return __result_obj__299;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        return __result_obj__300;
    }
    memset(&result_478,0,sizeof(struct sType*));
    __result_obj__301 = result_478;
    return __result_obj__301;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_480;
struct sType* __result_obj__302;
struct sType* __result_obj__303;
struct sType* result_481;
struct sType* __result_obj__304;
result_480 = (void*)0;
result_481 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_480,0,sizeof(struct sType*));
        __result_obj__302 = result_480;
        return __result_obj__302;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__303 = self->it->item;
        return __result_obj__303;
    }
    memset(&result_481,0,sizeof(struct sType*));
    __result_obj__304 = result_481;
    return __result_obj__304;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_482;
int i_483;
struct sType* default_value_484;
struct list$1sType$ph* __result_obj__306;
struct list_item$1sType$ph* it_488;
int i_489;
struct sType* __dec_obj70;
struct list$1sType$ph* __result_obj__307;
default_value_484 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_482=self->len;
        for(        i_483=0;        i_483<position-len_482;        i_483++        ){
            memset(&default_value_484,0,sizeof(struct sType*));
            list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(default_value_484));
            come_call_finalizer3(default_value_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__306 = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__306;
    }
    it_488=self->head;
    i_489=0;
    while(it_488!=((void*)0)) {
        if(        position==i_489) {
            __dec_obj70=it_488->item;
            it_488->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_488=it_488->next;
        i_489++;
    }
    __result_obj__307 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__307;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value350 = (void*)0;
struct list_item$1sType$ph* litem_485;
struct sType* __dec_obj67;
void* __right_value351 = (void*)0;
struct list_item$1sType$ph* litem_486;
struct sType* __dec_obj68;
void* __right_value352 = (void*)0;
struct list_item$1sType$ph* litem_487;
struct sType* __dec_obj69;
struct list$1sType$ph* __result_obj__305;
    if(    self->len==0) {
        litem_485=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value350=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1493, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_485->prev=((void*)0);
        litem_485->next=((void*)0);
        __dec_obj67=litem_485->item;
        litem_485->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_485;
        self->head=litem_485;
    }
    else if(    self->len==1) {
        litem_486=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value351=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1503, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_486->prev=self->head;
        litem_486->next=((void*)0);
        __dec_obj68=litem_486->item;
        litem_486->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_486;
        self->head->next=litem_486;
    }
    else {
        litem_487=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value352=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1513, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_487->prev=self->tail;
        litem_487->next=((void*)0);
        __dec_obj69=litem_487->item;
        litem_487->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_487;
        self->tail=litem_487;
    }
    self->len++;
    __result_obj__305 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__305;
}

struct sType* remove_any_type(struct sType* type){
struct sType* __dec_obj71;
struct sType* __dec_obj72;
int i_490;
struct list$1sType$ph* o2_saved_491;
struct sType* it_492;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* __result_obj__309;
    if(    type->mAnyOriginalType) {
        __dec_obj71=type->mAnyOriginalType;
        type->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        __dec_obj72=type->mNoSolvedGenericsType->mAnyOriginalType;
        type->mNoSolvedGenericsType->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_490=0;
    for(    o2_saved_491=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_492=list$1sType$ph$p_begin((o2_saved_491));    !list$1sType$ph$p_end((o2_saved_491));    it_492=list$1sType$ph$p_next((o2_saved_491))    ){
        list$1sType$ph$p_operator_store_element(type->mGenericsTypes,i_490,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_492)))));
        i_490++;
    }
    come_call_finalizer3(o2_saved_491,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__309 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__309,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__309;
}

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value357 = (void*)0;
char* none_generics_name_493;
void* __right_value358 = (void*)0;
char* fun_name2_494;
void* __right_value359 = (void*)0;
char* fun_name3_495;
void* __right_value360 = (void*)0;
struct sGenericsFun* generics_fun_496;
_Bool generics_any_child_499;
void* __right_value361 = (void*)0;
struct sType* no_solved_type_500;
struct sType* __dec_obj73;
struct list$1sType$ph* o2_saved_501;
struct sType* it_502;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* type2_503;
void* __right_value364 = (void*)0;
struct sType* type_before_504;
void* __right_value365 = (void*)0;
char* __dec_obj74;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_505=0;
_Bool err_506=0;
void* __right_value368 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_507=0;
char* Err_508=0;
void* __right_value369 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__317;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sType* type2_511;
void* __right_value376 = (void*)0;
struct sType* type_before_512;
void* __right_value377 = (void*)0;
char* __dec_obj77;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_513=0;
_Bool err_514=0;
void* __right_value380 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c2_515=0;
char* Err_516=0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__318;
void* __right_value384 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__322;
    none_generics_name_493=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_494=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_495=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_493,fun_name));
    generics_fun_496=((struct sGenericsFun*)(__right_value360=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_495,((void*)0))));
    come_call_finalizer3(__right_value360,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    generics_any_child_499=(_Bool)0;
    no_solved_type_500=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj73=no_solved_type_500;
        no_solved_type_500=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_501=(struct list$1sType$ph*)come_increment_ref_count((no_solved_type_500->mGenericsTypes)),it_502=list$1sType$ph$p_begin((o2_saved_501));        !list$1sType$ph$p_end((o2_saved_501));        it_502=list$1sType$ph$p_next((o2_saved_501))        ){
            if(            it_502->mAnyOriginalType) {
                generics_any_child_499=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_501,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_496) {
        if(        generics_fun_496->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_499)) {
            type2_503=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_500))));
            type_before_504=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj74=fun_name2_494;
            fun_name2_494=(char*)come_increment_ref_count(create_method_name(type2_503,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value367=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_494)),generics_fun_496,type2_503,info)));
            name_505=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_506=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value367,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_506) {
                multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value368=err_msg(info,"%s not found",fun_name3_495)));
                come_exception_var_c1_507=multiple_assign_var2->v1;
                Err_508=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                ((Err_508)?(puts(Err_508),exit(0)):(0));
                come_call_finalizer3(__right_value368,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__317 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value373=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 74, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_508 = come_decrement_ref_count2(Err_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_503,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_504,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_505 = come_decrement_ref_count2(name_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_493 = come_decrement_ref_count2(none_generics_name_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_494 = come_decrement_ref_count2(fun_name2_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_495 = come_decrement_ref_count2(fun_name3_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value373,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__317,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__317;
                (Err_508 = come_decrement_ref_count2(Err_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_504;
            come_call_finalizer3(type2_503,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_504,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_505 = come_decrement_ref_count2(name_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            type2_511=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_500))));
            type_before_512=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj77=fun_name2_494;
            fun_name2_494=(char*)come_increment_ref_count(create_method_name(type2_511,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value379=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_494)),generics_fun_496,type2_511,info)));
            name_513=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            err_514=multiple_assign_var3->v2;
            come_call_finalizer3(__right_value379,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_514) {
                multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value380=err_msg(info,"%s not found",fun_name3_495)));
                come_exception_var_c2_515=multiple_assign_var4->v1;
                Err_516=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                ((Err_516)?(puts(Err_516),exit(0)):(0));
                come_call_finalizer3(__right_value380,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__318 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value383=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 90, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_516 = come_decrement_ref_count2(Err_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_511,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_512,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_513 = come_decrement_ref_count2(name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_493 = come_decrement_ref_count2(none_generics_name_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_494 = come_decrement_ref_count2(fun_name2_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_495 = come_decrement_ref_count2(fun_name3_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value383,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__318,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__318;
                (Err_516 = come_decrement_ref_count2(Err_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_512;
            come_call_finalizer3(type2_511,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_512,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_513 = come_decrement_ref_count2(name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__322 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value388=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 97, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_494)),generics_fun_496))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_493 = come_decrement_ref_count2(none_generics_name_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_494 = come_decrement_ref_count2(fun_name2_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_495 = come_decrement_ref_count2(fun_name3_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(no_solved_type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value388,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__322,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__322;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_497;
unsigned int it_498;
struct sGenericsFun* __result_obj__310;
struct sGenericsFun* __result_obj__311;
struct sGenericsFun* __result_obj__312;
struct sGenericsFun* __result_obj__313;
    hash_497=string_get_hash_key(((char*)key))%self->size;
    it_498=hash_497;
    while((_Bool)1) {
        if(        self->item_existance[it_498]) {
            if(            string_equals(self->keys[it_498],key)) {
                __result_obj__310 = come_increment_ref_count(self->items[it_498]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__310,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__310;
            }
            it_498++;
            if(            it_498>=self->size) {
                it_498=0;
            }
            else if(            it_498==hash_497) {
                __result_obj__311 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__311,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__311;
            }
        }
        else {
            __result_obj__312 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__312,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__312;
        }
    }
    __result_obj__313 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
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

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self){
struct tuple2$2char$phvoid$p* __result_obj__314;
void* __right_value370 = (void*)0;
struct tuple2$2char$phvoid$p* result_509;
void* __right_value371 = (void*)0;
char* __dec_obj75;
struct tuple2$2char$phvoid$p* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__314,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__314;
    }
    result_509=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj75=result_509->v1;
        result_509->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_509->v2=self->v2;
    }
    __result_obj__315 = come_increment_ref_count(result_509);
    come_call_finalizer3(result_509,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__315,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__315;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_510;
    result_510=0;
    result_510+=int_get_hash_key(((int)self->v1));
    result_510+=int_get_hash_key(((int)self->v2));
    return result_510;
}

static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj76;
struct tuple2$2char$phvoid$p* __result_obj__316;
    __dec_obj76=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__316 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__316,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__316;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self){
struct tuple2$2char$phsGenericsFun$p* __result_obj__319;
void* __right_value385 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_517;
void* __right_value386 = (void*)0;
char* __dec_obj78;
struct tuple2$2char$phsGenericsFun$p* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__319 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__319,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__319;
    }
    result_517=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj78=result_517->v1;
        result_517->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_517->v2=self->v2;
    }
    __result_obj__320 = come_increment_ref_count(result_517);
    come_call_finalizer3(result_517,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__320,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__320;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_518;
    result_518=0;
    result_518+=int_get_hash_key(((int)self->v1));
    result_518+=int_get_hash_key(((int)self->v2));
    return result_518;
}

static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj79;
struct tuple2$2char$phsGenericsFun$p* __result_obj__321;
    __dec_obj79=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__321 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__321,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__321;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value389 = (void*)0;
char* fun_name3_520;
struct list$1sType$ph* method_generics_types_before_521;
struct list$1sType$ph* __dec_obj80;
void* __right_value390 = (void*)0;
struct sGenericsFun* generics_fun_522;
void* __right_value391 = (void*)0;
_Bool _if_conditional1;
void* __right_value392 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c3_523=0;
char* Err_524=0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__323;
struct list$1sType$ph* __dec_obj81;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__324;
    static int num_method_generics_519=0;
    fun_name3_520=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_519++));
    method_generics_types_before_521=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj80=info->method_generics_types;
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj80,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_522=((struct sGenericsFun*)(__right_value390=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value390,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    generics_fun_522) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_520)),generics_fun_522,info))),        _if_conditional1) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value392=err_msg(info,"%s not found",fun_name3_520)));
            come_exception_var_c3_523=multiple_assign_var5->v1;
            Err_524=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_524)?(puts(Err_524),exit(0)):(0));
            come_call_finalizer3(__right_value392,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__323 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value395=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 113, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name3_520 = come_decrement_ref_count2(fun_name3_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types_before_521,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value395,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__323,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__323;
            (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj81=info->method_generics_types;
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_521);
    come_call_finalizer3(__dec_obj81,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__324 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value398=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 119, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_520)),generics_fun_522))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name3_520 = come_decrement_ref_count2(fun_name3_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types_before_521,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value398,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__324,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value403 = (void*)0;
struct sNode* current_stack_frame_node_525;
_Bool Value_527;
_Bool __result_obj__327;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_530;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct buffer* method_block2_531;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* method_block_type_532;
void* __right_value409 = (void*)0;
char* class_name_536;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sClass* current_stack_frame_struct_540;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c4_541=0;
char* Err_542=0;
_Bool __result_obj__334;
void* __right_value414 = (void*)0;
struct sType* result_type_543;
struct list$1sType$ph* param_types_544;
struct list$1char$ph* param_names_545;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct buffer* all_alhabet_sname_546;
char* p_547;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
int i_548;
struct list$1sType$ph* o2_saved_549;
struct sType* it_550;
struct sType* param_type_551;
void* __right_value419 = (void*)0;
char* param_name_552;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* param_name_553;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
char* param_name_554;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct buffer* source3_555;
char* p_556;
char* head_557;
int sline_558;
struct buffer* __dec_obj83;
void* __right_value426 = (void*)0;
struct sNode* node_559;
_Bool Value_560;
_Bool __result_obj__335;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
char* method_block_name_561;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* come_value2_562;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sFun* fun2_563;
void* __right_value433 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c5_566=0;
char* Err_567=0;
_Bool __result_obj__340;
struct sType* method_block_type2_568;
void* __right_value434 = (void*)0;
char* __dec_obj84;
void* __right_value435 = (void*)0;
struct sType* __dec_obj85;
struct buffer* __dec_obj86;
void* __right_value436 = (void*)0;
struct sType* __dec_obj87;
_Bool contained_method_generics_method_block_569;
struct list$1sType$ph* o2_saved_570;
struct sType* it_571;
void* __right_value437 = (void*)0;
_Bool __result_obj__342;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 124, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value400=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 124, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_525=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value400,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_527=node_compile(current_stack_frame_node_525,info);
    if(    !Value_527) {
        __result_obj__327 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_525) ? current_stack_frame_node_525 = come_decrement_ref_count2(current_stack_frame_node_525, ((struct sNode*)current_stack_frame_node_525)->finalize, ((struct sNode*)current_stack_frame_node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__327;
    }
    else {
    }
    come_value_530=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_530));
    dec_stack_ptr(1,info);
    method_block2_531=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 134, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    method_block_type_532=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value407=list$1sType$ph$p_operator_load_element(fun->mParamTypes,-1)))));
    come_call_finalizer3(__right_value407,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_536=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value410=list$1sType$ph$p_operator_load_element(method_block_type_532->mParamTypes,0)))->mClass=((struct sClass*)(__right_value411=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_536)));
    come_call_finalizer3(__right_value410,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value411,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_540=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value412=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_536)));
    come_call_finalizer3(__right_value412,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_532->mClass->mName,"lambda")) {
        multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value413=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_exception_var_c4_541=multiple_assign_var6->v1;
        Err_542=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        ((Err_542)?(puts(Err_542),exit(0)):(0));
        come_call_finalizer3(__right_value413,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__334 = (_Bool)0;
        (Err_542 = come_decrement_ref_count2(Err_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_525) ? current_stack_frame_node_525 = come_decrement_ref_count2(current_stack_frame_node_525, ((struct sNode*)current_stack_frame_node_525)->finalize, ((struct sNode*)current_stack_frame_node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_536 = come_decrement_ref_count2(class_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__334;
        (Err_542 = come_decrement_ref_count2(Err_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_543=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_532->mResultType));
    result_type_543->mStatic=(_Bool)0;
    param_types_544=method_block_type_532->mParamTypes;
    param_names_545=method_block_type_532->mParamNames;
    all_alhabet_sname_546=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 155, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    {
        p_547=info->sname;
        while(*p_547) {
            if(            xisalnum(*p_547)) {
                buffer_append_char(all_alhabet_sname_546,*p_547++);
            }
            else {
                p_547++;
            }
        }
    }
    buffer_append_format(method_block2_531,"%s method_block%d_%s(",((char*)(__right_value417=make_type_name_string(result_type_543,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value418=buffer_to_string(all_alhabet_sname_546))));
    (__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_548=0;
    for(    o2_saved_549=(param_types_544),it_550=list$1sType$ph$p_begin((o2_saved_549));    !list$1sType$ph$p_end((o2_saved_549));    it_550=list$1sType$ph$p_next((o2_saved_549))    ){
        param_type_551=it_550;
        if(        i_548==0) {
            param_name_552=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_531,"%s",((char*)(__right_value420=make_define_var(param_type_551,param_name_552,(_Bool)0,info))));
            (__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_552 = come_decrement_ref_count2(param_name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_548==1) {
            param_name_553=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_531,"%s",((char*)(__right_value422=make_define_var_no_solved(param_type_551,param_name_553,(_Bool)0,(_Bool)0,info))));
            (__right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_553 = come_decrement_ref_count2(param_name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_554=(char*)come_increment_ref_count(xsprintf("it%d",i_548));
            buffer_append_format(method_block2_531,"%s",((char*)(__right_value424=make_define_var_no_solved(param_type_551,param_name_554,(_Bool)0,(_Bool)0,info))));
            (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_554 = come_decrement_ref_count2(param_name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_548!=list$1sType$ph$p_length(param_types_544)-1) {
            buffer_append_str(method_block2_531,",");
        }
        i_548++;
    }
    buffer_append_str(method_block2_531,")\n");
    buffer_append_str(method_block2_531,((char*)(__right_value425=buffer_to_string(method_block))));
    (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_555=(struct buffer*)come_increment_ref_count(info->source);
    p_556=info->p;
    head_557=info->head;
    sline_558=info->sline;
    __dec_obj83=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_531);
    come_call_finalizer3(__dec_obj83,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_559=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_560=node_compile(node_559,info);
    if(    !Value_560) {
        __result_obj__335 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_525) ? current_stack_frame_node_525 = come_decrement_ref_count2(current_stack_frame_node_525, ((struct sNode*)current_stack_frame_node_525)->finalize, ((struct sNode*)current_stack_frame_node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_536 = come_decrement_ref_count2(class_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_559) ? node_559 = come_decrement_ref_count2(node_559, ((struct sNode*)node_559)->finalize, ((struct sNode*)node_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__335;
    }
    else {
    }
    method_block_name_561=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value427=buffer_to_string(all_alhabet_sname_546)))));
    (__right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_562=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 220, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    fun2_563=((struct sFun*)(__right_value432=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value431=__builtin_string(method_block_name_561))),((void*)0))));
    (__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value432,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_563==((void*)0)) {
        multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value433=err_msg(info,"method block function not found(%s)",method_block_name_561)));
        come_exception_var_c5_566=multiple_assign_var7->v1;
        Err_567=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        ((Err_567)?(puts(Err_567),exit(0)):(0));
        come_call_finalizer3(__right_value433,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__340 = (_Bool)1;
        (Err_567 = come_decrement_ref_count2(Err_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_525) ? current_stack_frame_node_525 = come_decrement_ref_count2(current_stack_frame_node_525, ((struct sNode*)current_stack_frame_node_525)->finalize, ((struct sNode*)current_stack_frame_node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_536 = come_decrement_ref_count2(class_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_559) ? node_559 = come_decrement_ref_count2(node_559, ((struct sNode*)node_559)->finalize, ((struct sNode*)node_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_561 = come_decrement_ref_count2(method_block_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__340;
        (Err_567 = come_decrement_ref_count2(Err_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_block_type2_568=fun2_563->mLambdaType;
    __dec_obj84=come_value2_562->c_value;
    come_value2_562->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_561));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj85=come_value2_562->type;
    come_value2_562->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_568));
    come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_562->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_562));
    __dec_obj86=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_555);
    come_call_finalizer3(__dec_obj86,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_556;
    info->head=head_557;
    info->sline=sline_558;
    info->current_stack_frame_struct=current_stack_frame_struct_540;
    __dec_obj87=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_569=(_Bool)0;
    for(    o2_saved_570=(param_types_544),it_571=list$1sType$ph$p_begin((o2_saved_570));    !list$1sType$ph$p_end((o2_saved_570));    it_571=list$1sType$ph$p_next((o2_saved_570))    ){
        if(        is_contained_method_generics_types(it_571,info)) {
            contained_method_generics_method_block_569=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_543,info)) {
        contained_method_generics_method_block_569=(_Bool)1;
    }
    if(    contained_method_generics_method_block_569) {
        map$2char$phsFun$ph$p_remove(info->funcs,((char*)(__right_value437=__builtin_string(method_block_name_561))));
        (__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__342 = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((current_stack_frame_node_525) ? current_stack_frame_node_525 = come_decrement_ref_count2(current_stack_frame_node_525, ((struct sNode*)current_stack_frame_node_525)->finalize, ((struct sNode*)current_stack_frame_node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_536 = come_decrement_ref_count2(class_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_559) ? node_559 = come_decrement_ref_count2(node_559, ((struct sNode*)node_559)->finalize, ((struct sNode*)node_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_561 = come_decrement_ref_count2(method_block_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value2_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__342;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__325;
void* __right_value401 = (void*)0;
struct sCurrentNode* result_526;
void* __right_value402 = (void*)0;
char* __dec_obj82;
struct sCurrentNode* __result_obj__326;
    if(    self==(void*)0) {
        __result_obj__325 = (void*)0;
        return __result_obj__325;
    }
    result_526=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_526->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj82=result_526->sname;
        result_526->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_526->sline_real=self->sline_real;
    }
    __result_obj__326 = result_526;
    come_call_finalizer3(result_526,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_528;
struct list_item$1CVALUE$ph* prev_it_529;
    it_528=self->head;
    while(it_528!=((void*)0)) {
        prev_it_529=it_528;
        it_528=it_528->next;
        come_call_finalizer3(prev_it_529,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_533;
int i_534;
struct sType* __result_obj__328;
struct sType* default_value_535;
struct sType* __result_obj__329;
default_value_535 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_533=self->head;
    i_534=0;
    while(it_533!=((void*)0)) {
        if(        position==i_534) {
            __result_obj__328 = come_increment_ref_count(it_533->item);
            come_call_finalizer3(__result_obj__328,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__328;
        }
        it_533=it_533->next;
        i_534++;
    }
    memset(&default_value_535,0,sizeof(struct sType*));
    __result_obj__329 = come_increment_ref_count(default_value_535);
    come_call_finalizer3(default_value_535,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__329,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__329;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_537;
unsigned int hash_538;
unsigned int it_539;
struct sClass* __result_obj__330;
struct sClass* __result_obj__331;
struct sClass* __result_obj__332;
struct sClass* __result_obj__333;
default_value_537 = (void*)0;
    memset(&default_value_537,0,sizeof(struct sClass*));
    hash_538=string_get_hash_key(((char*)key))%self->size;
    it_539=hash_538;
    while((_Bool)1) {
        if(        self->item_existance[it_539]) {
            if(            string_equals(self->keys[it_539],key)) {
                __result_obj__330 = come_increment_ref_count(self->items[it_539]);
                come_call_finalizer3(default_value_537,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__330,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__330;
            }
            it_539++;
            if(            it_539>=self->size) {
                it_539=0;
            }
            else if(            it_539==hash_538) {
                __result_obj__331 = come_increment_ref_count(default_value_537);
                come_call_finalizer3(default_value_537,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__331,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__331;
            }
        }
        else {
            __result_obj__332 = come_increment_ref_count(default_value_537);
            come_call_finalizer3(default_value_537,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__332,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__332;
        }
    }
    __result_obj__333 = come_increment_ref_count(default_value_537);
    come_call_finalizer3(default_value_537,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_564;
unsigned int it_565;
struct sFun* __result_obj__336;
struct sFun* __result_obj__337;
struct sFun* __result_obj__338;
struct sFun* __result_obj__339;
    hash_564=string_get_hash_key(((char*)key))%self->size;
    it_565=hash_564;
    while((_Bool)1) {
        if(        self->item_existance[it_565]) {
            if(            string_equals(self->keys[it_565],key)) {
                __result_obj__336 = come_increment_ref_count(self->items[it_565]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__336,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__336;
            }
            it_565++;
            if(            it_565>=self->size) {
                it_565=0;
            }
            else if(            it_565==hash_564) {
                __result_obj__337 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__337,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__337;
            }
        }
        else {
            __result_obj__338 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__338,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__338;
        }
    }
    __result_obj__339 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__339,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_572;
unsigned int it_573;
struct map$2char$phsFun$ph* __result_obj__341;
    hash_572=string_get_hash_key(((char*)key))%self->size;
    it_573=hash_572;
    while((_Bool)1) {
        if(        self->item_existance[it_573]) {
            if(            string_equals(self->keys[it_573],key)) {
                list$1char$p$p_remove(self->key_list,self->keys[it_573]);
                self->item_existance[it_573]=(_Bool)0;
                if(                1) {
                    (self->keys[it_573] = come_decrement_ref_count2(self->keys[it_573], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_573]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_573],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_573]=((void*)0);
                self->len--;
                break;
            }
            it_573++;
            if(            it_573>=self->size) {
                it_573=0;
            }
            else if(            it_573==hash_572) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__341 = self;
    return __result_obj__341;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sNode* __dec_obj88;
void* __right_value440 = (void*)0;
char* __dec_obj89;
void* __right_value451 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj95;
void* __right_value452 = (void*)0;
struct buffer* __dec_obj96;
void* __right_value457 = (void*)0;
struct list$1sType$ph* __dec_obj97;
struct sMethodCallNode* __result_obj__351;
    ((struct sNodeBase*)(__right_value438=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value438,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj88=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj89=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj95,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj96=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj96,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj97=self->method_generics_types;
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_generics_types));
    come_call_finalizer3(__dec_obj97,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result_obj__351 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__351,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__351;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __right_value458 = (void*)0;
char* __result_obj__352;
    __result_obj__352 = come_increment_ref_count(((char*)(__right_value458=__builtin_string("sMethodCallNode"))));
    (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__352 = come_decrement_ref_count2(__result_obj__352, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__352;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_586;
struct list$1tuple2$2char$phsNode$ph$ph* params_587;
struct sNode* obj_588;
struct buffer* method_block_589;
int method_block_sline_590;
_Bool no_infference_method_generics_591;
struct list$1sType$ph* method_generics_types_592;
_Bool recursive_593;
struct list$1sType$ph* method_generics_types_before_594;
struct list$1sType$ph* __dec_obj98;
void* __right_value459 = (void*)0;
struct list$1sType$ph* __dec_obj99;
_Bool Value_595;
_Bool __result_obj__353;
void* __right_value460 = (void*)0;
struct CVALUE* obj_value_596;
void* __right_value461 = (void*)0;
struct sType* obj_type_597;
_Bool no_output_come_code_598;
struct sType* type_599;
void* __right_value462 = (void*)0;
char* none_generics_name_600;
void* __right_value463 = (void*)0;
char* fun_name2_601;
void* __right_value464 = (void*)0;
char* fun_name3_602;
void* __right_value465 = (void*)0;
struct sGenericsFun* generics_fun_603;
_Bool method_generics_604;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_605=0;
struct sGenericsFun* gfun_606=0;
char* generics_fun_name_607;
void* __right_value468 = (void*)0;
struct sFun* fun_608;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1CVALUE$ph* come_params_609;
_Bool no_output_come_code_610;
_Bool __result_obj__355;
void* __right_value471 = (void*)0;
struct CVALUE* method_block_node_611;
void* __right_value472 = (void*)0;
struct sType* method_block_lambda_type_615;
void* __right_value473 = (void*)0;
struct sType* method_block_result_type_616;
void* __right_value474 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_617;
struct sType* generics_fun_method_block_result_type_618;
int method_generics_num_619;
void* __right_value475 = (void*)0;
int n_620;
struct list$1sType$ph* o2_saved_621;
struct sType* it_622;
int method_generics_num_623;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1CVALUE$ph* come_params_624;
int i_625;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_626;
struct tuple2$2char$phsNode$ph* it_629;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_632=0;
struct sNode* node_633=0;
_Bool Value_634;
_Bool __result_obj__364;
void* __right_value480 = (void*)0;
struct CVALUE* come_value_635;
int method_generics_num_636;
_Bool generics_any_child_637;
struct sType* obj_type2_638;
struct sType* __dec_obj100;
struct list$1sType$ph* o2_saved_639;
struct sType* it_640;
void* __right_value481 = (void*)0;
struct list$1sType$ph* o2_saved_641;
struct sType* it_642;
int method_generics_num_643;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1CVALUE$ph* come_params_644;
int i_645;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_646;
struct tuple2$2char$phsNode$ph* it_647;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_648=0;
struct sNode* node_649=0;
_Bool Value_650;
_Bool __result_obj__365;
void* __right_value486 = (void*)0;
struct CVALUE* come_value_651;
int method_generics_num_652;
void* __right_value487 = (void*)0;
int n_653;
struct list$1sType$ph* o2_saved_654;
struct sType* it_655;
int method_generics_num_656;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sClass* klass_657;
_Bool calling_dynamic_method_658;
struct sType* lambda_type_659;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_660;
struct tuple2$2char$phsType$ph* it_663;
struct tuple2$2char$phsType$ph* multiple_assign_var11 = (void*)0;
char* field_name_666=0;
struct sType* field_type_667=0;
void* __right_value490 = (void*)0;
struct sType* result_type_668;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1CVALUE$ph* come_params_669;
int i_670;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_671;
struct tuple2$2char$phsNode$ph* it_672;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label_673=0;
struct sNode* node_674=0;
_Bool Value_675;
_Bool __result_obj__372;
void* __right_value493 = (void*)0;
struct CVALUE* come_value_676;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_1_677=0;
char* Err_678=0;
_Bool _if_conditional2;
_Bool __result_obj__373;
void* __right_value499 = (void*)0;
_Bool _if_conditional3;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct buffer* buf_679;
int j_680;
struct list$1CVALUE$ph* o2_saved_681;
struct CVALUE* it_684;
void* __right_value503 = (void*)0;
char* __dec_obj101;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct CVALUE* come_value2_687;
void* __right_value506 = (void*)0;
char* __dec_obj102;
void* __right_value507 = (void*)0;
struct sType* result_type2_688;
void* __right_value508 = (void*)0;
struct sType* __dec_obj103;
struct list$1sType$ph* __dec_obj104;
struct sGenericsFun* generics_fun_689;
char* generics_fun_name_690;
struct sFun* fun_691;
void* __right_value509 = (void*)0;
char* __dec_obj105;
struct sClass* klass_692;
void* __right_value510 = (void*)0;
_Bool _while_condtional1;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __dec_obj106;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var14 = (void*)0;
char* name_693=0;
struct sGenericsFun* gfun_694=0;
char* __dec_obj107;
void* __right_value517 = (void*)0;
char* none_generics_name_695;
void* __right_value518 = (void*)0;
char* fun_name3_696;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var15 = (void*)0;
char* name_697=0;
struct sGenericsFun* gfun_698=0;
char* __dec_obj108;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_699=0;
struct sGenericsFun* gfun_700=0;
char* __dec_obj109;
int i_701;
void* __right_value523 = (void*)0;
char* new_fun_name_702;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* __dec_obj110;
struct sType* obj_array_type_706;
void* __right_value527 = (void*)0;
char* array_method_name_707;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __dec_obj111;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
char* __dec_obj112;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_2_708=0;
char* Err_709=0;
_Bool _if_conditional4;
_Bool __result_obj__384;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
char* __dec_obj113;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sClass* klass_710;
void* __right_value544 = (void*)0;
_Bool _while_condtional2;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
char* __dec_obj114;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var18 = (void*)0;
struct sFun* fun2_711=0;
char* real_fun_name_712=0;
char* __dec_obj115;
void* __right_value550 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var19 = (void*)0;
struct sFun* fun2_713=0;
char* real_fun_name_714=0;
char* __dec_obj116;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
char* original_obj_type_fun_name_715;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
char* __dec_obj117;
void* __right_value555 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_3_716=0;
char* Err_717=0;
_Bool _if_conditional5;
_Bool __result_obj__385;
void* __right_value556 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_4_718=0;
char* Err_719=0;
_Bool _if_conditional6;
_Bool __result_obj__386;
void* __right_value557 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_5_720=0;
char* Err_721=0;
_Bool _if_conditional7;
_Bool __result_obj__387;
void* __right_value558 = (void*)0;
struct sType* result_type_722;
_Bool in_exception_value_723;
void* __right_value566 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sNode* new_node_724;
_Bool Value_726;
_Bool __result_obj__390;
_Bool __result_obj__391;
_Bool in_exception_value_727;
void* __right_value569 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* new_node_728;
_Bool Value_729;
_Bool __result_obj__392;
_Bool __result_obj__393;
void* __right_value572 = (void*)0;
struct sType* result_type2_730;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sType$ph* param_types_731;
struct list$1sType$ph* o2_saved_732;
struct sType* it_733;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sType* it2_734;
struct sType* no_solved_obj_type_735;
void* __right_value577 = (void*)0;
struct sType* it3_736;
void* __right_value578 = (void*)0;
struct sType* any_type_737;
void* __right_value579 = (void*)0;
struct list$1sType$ph* type_checking_param_types_738;
int n_739;
struct list$1sType$ph* o2_saved_740;
struct sType* it_741;
struct sType* no_solved_obj_type_742;
void* __right_value580 = (void*)0;
struct sType* it3_743;
void* __right_value581 = (void*)0;
struct sType* any_type_744;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
_Bool _if_conditional8;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1CVALUE$ph* come_params_745;
int i_746;
_Bool first_param_750;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_751;
struct tuple2$2char$phsNode$ph* it_752;
struct tuple2$2char$phsNode$ph* multiple_assign_var23 = (void*)0;
char* label_753=0;
struct sNode* node_754=0;
int n_755;
struct list$1char$ph* o2_saved_756;
char* it_759;
_Bool Value_762;
_Bool __result_obj__401;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_763;
void* __right_value590 = (void*)0;
_Bool _if_conditional9;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var24 = (void*)0;
_Bool come_exception_var_6_764=0;
char* Err_765=0;
_Bool _if_conditional10;
_Bool __result_obj__402;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
_Bool _if_conditional11;
void* __right_value598 = (void*)0;
int i_771;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_772;
struct tuple2$2char$phsNode$ph* it_773;
struct tuple2$2char$phsNode$ph* multiple_assign_var25 = (void*)0;
char* label_774=0;
struct sNode* node_775=0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_7_776=0;
char* Err_777=0;
_Bool _if_conditional12;
_Bool __result_obj__405;
void* __right_value604 = (void*)0;
_Bool _if_conditional13;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
_Bool _elif_conditional1;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_8_781=0;
char* Err_782=0;
_Bool _if_conditional14;
_Bool __result_obj__408;
void* __right_value609 = (void*)0;
_Bool _if_conditional15;
_Bool Value_783;
_Bool __result_obj__409;
void* __right_value610 = (void*)0;
struct CVALUE* come_value_784;
void* __right_value611 = (void*)0;
_Bool _if_conditional16;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_9_785=0;
char* Err_786=0;
_Bool _if_conditional17;
_Bool __result_obj__410;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
_Bool _if_conditional18;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
_Bool _if_conditional19;
struct sType* obj_array_type_787;
void* __right_value621 = (void*)0;
char* array_method_name_788;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct buffer* buf_789;
int i_790;
struct list$1sNode$ph* o2_saved_791;
struct sNode* it_794;
_Bool Value_797;
void* __right_value624 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_10_798=0;
char* Err_799=0;
_Bool _if_conditional20;
_Bool __result_obj__417;
void* __right_value625 = (void*)0;
struct CVALUE* come_value_800;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct CVALUE* come_value_801;
void* __right_value628 = (void*)0;
char* __dec_obj128;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sType* __dec_obj129;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct buffer* buf_805;
int i_806;
struct list$1sNode$ph* o2_saved_807;
struct sNode* it_808;
_Bool Value_809;
void* __right_value640 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_11_810=0;
char* Err_811=0;
_Bool _if_conditional21;
_Bool __result_obj__419;
void* __right_value641 = (void*)0;
struct CVALUE* come_value_812;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value_813;
void* __right_value644 = (void*)0;
char* __dec_obj133;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* __dec_obj134;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct buffer* buf_814;
int i_815;
struct list$1sNode$ph* o2_saved_816;
struct sNode* it_817;
_Bool Value_818;
void* __right_value653 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_12_819=0;
char* Err_820=0;
_Bool _if_conditional22;
_Bool __result_obj__420;
void* __right_value654 = (void*)0;
struct CVALUE* come_value_821;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct CVALUE* come_value_822;
void* __right_value657 = (void*)0;
char* __dec_obj135;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* __dec_obj136;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct buffer* buf_823;
int i_824;
struct list$1sNode$ph* o2_saved_825;
struct sNode* it_826;
_Bool Value_827;
void* __right_value666 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_13_828=0;
char* Err_829=0;
_Bool _if_conditional23;
_Bool __result_obj__421;
void* __right_value667 = (void*)0;
struct CVALUE* come_value_830;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct CVALUE* come_value_831;
void* __right_value670 = (void*)0;
char* __dec_obj137;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sType* __dec_obj138;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct buffer* buf_832;
int i_833;
struct list$1sNode$ph* o2_saved_834;
struct sNode* it_835;
_Bool Value_836;
void* __right_value679 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_14_837=0;
char* Err_838=0;
_Bool _if_conditional24;
_Bool __result_obj__422;
void* __right_value680 = (void*)0;
struct CVALUE* come_value_839;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct CVALUE* come_value_840;
void* __right_value683 = (void*)0;
char* __dec_obj139;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sType* __dec_obj140;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
char* default_param_841;
void* __right_value692 = (void*)0;
char* param_name_842;
void* __right_value693 = (void*)0;
_Bool _if_conditional25;
struct buffer* source_843;
char* p_844;
char* head_845;
int sline_846;
void* __right_value694 = (void*)0;
struct buffer* __dec_obj141;
void* __right_value695 = (void*)0;
struct sNode* node_847;
_Bool Value_848;
_Bool __result_obj__423;
struct buffer* __dec_obj142;
void* __right_value696 = (void*)0;
struct CVALUE* come_value_849;
void* __right_value697 = (void*)0;
_Bool _if_conditional26;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var34 = (void*)0;
_Bool come_exception_var_15_850=0;
char* Err_851=0;
_Bool _if_conditional27;
_Bool __result_obj__424;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
_Bool _if_conditional28;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
_Bool _if_conditional29;
void* __right_value707 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_16_852=0;
char* Err_853=0;
_Bool _if_conditional30;
_Bool __result_obj__425;
_Bool __result_obj__426;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct buffer* buf_854;
int j_855;
struct list$1CVALUE$ph* o2_saved_856;
struct CVALUE* it_857;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct CVALUE* come_value2_858;
void* __right_value712 = (void*)0;
char* __dec_obj143;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sType* __dec_obj144;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* __dec_obj145;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sType* __dec_obj146;
void* __right_value721 = (void*)0;
char* __dec_obj147;
_Bool generics_any_child_859;
struct sType* obj_type2_860;
struct sType* __dec_obj148;
struct list$1sType$ph* o2_saved_861;
struct sType* it_862;
struct sType* obj_type2_863;
void* __right_value722 = (void*)0;
struct sType* __dec_obj149;
void* __right_value723 = (void*)0;
struct sType* __dec_obj150;
void* __right_value724 = (void*)0;
struct sType* __dec_obj151;
void* __right_value725 = (void*)0;
struct sType* __dec_obj152;
void* __right_value726 = (void*)0;
struct sType* __dec_obj153;
void* __right_value727 = (void*)0;
char* __dec_obj154;
void* __right_value728 = (void*)0;
struct CVALUE* __dec_obj155;
void* __right_value729 = (void*)0;
struct list$1sType$ph* __dec_obj156;
_Bool __result_obj__427;
    fun_name_586=(char*)come_increment_ref_count(self->fun_name);
    params_587=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_588=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_589=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_590=self->method_block_sline;
    no_infference_method_generics_591=self->no_infference_method_generics;
    method_generics_types_592=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_593=self->recursive;
    method_generics_types_before_594=((void*)0);
    __dec_obj98=method_generics_types_before_594;
    method_generics_types_before_594=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj98,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj99=info->method_generics_types;
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj99,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_595=node_compile(obj_588,info);
    if(    !Value_595) {
        __result_obj__353 = (_Bool)0;
        (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__353;
    }
    else {
    }
    obj_value_596=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_597=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_596->type));
    if(    !no_infference_method_generics_591) {
        no_output_come_code_598=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_599=(struct sType*)come_increment_ref_count(obj_type_597);
        none_generics_name_600=(char*)come_increment_ref_count(get_none_generics_name(type_599->mClass->mName));
        fun_name2_601=(char*)come_increment_ref_count(create_method_name(type_599,(_Bool)0,fun_name_586,info,(_Bool)1));
        fun_name3_602=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_600,fun_name_586));
        generics_fun_603=((struct sGenericsFun*)(__right_value465=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_602,((void*)0))));
        come_call_finalizer3(__right_value465,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_603) {
            method_generics_604=list$1char$ph$p_length(generics_fun_603->mMethodGenericsTypeNames)>0;
            if(            method_generics_604&&list$1sType$ph$p_length(info->method_generics_types)==0) {
                multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value467=make_generics_function(obj_type_597,(char*)come_increment_ref_count(__builtin_string(fun_name_586)),info,(_Bool)1)));
                name_605=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_606=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value467,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_607=(char*)come_increment_ref_count(name_605);
                fun_608=((struct sFun*)(__right_value468=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_607,((void*)0))));
                come_call_finalizer3(__right_value468,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_609=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 354, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                method_block_589) {
                    no_output_come_code_610=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_589,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_609),fun_608,fun_name3_602,method_block_sline_590,info,(_Bool)1)) {
                        __result_obj__355 = (_Bool)0;
                        (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_607 = come_decrement_ref_count2(generics_fun_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_params_609,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (none_generics_name_600 = come_decrement_ref_count2(none_generics_name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_601 = come_decrement_ref_count2(fun_name2_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_602 = come_decrement_ref_count2(fun_name3_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__355;
                    }
                    info->no_output_come_code=no_output_come_code_610;
                    method_block_node_611=((struct CVALUE*)(__right_value471=list$1CVALUE$ph$p_operator_load_element(come_params_609,-1)));
                    come_call_finalizer3(__right_value471,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_615=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_611->type));
                    method_block_result_type_616=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_617=((struct sType*)(__right_value474=list$1sType$ph$p_operator_load_element(generics_fun_603->mParamTypes,-1)));
                    come_call_finalizer3(__right_value474,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_618=generics_fun_method_block_lambda_type_617->mResultType;
                    if(                    generics_fun_method_block_result_type_618->mClass->mMethodGenerics) {
                        method_generics_num_619=generics_fun_method_block_result_type_618->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_619,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_616)));
                    }
                    n_620=0;
                    for(                    o2_saved_621=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_617->mParamTypes)),it_622=list$1sType$ph$p_begin((o2_saved_621));                    !list$1sType$ph$p_end((o2_saved_621));                    it_622=list$1sType$ph$p_next((o2_saved_621))                    ){
                        if(                        it_622->mClass->mMethodGenerics) {
                            method_generics_num_623=it_622->mClass->mMethodGenericsNum;
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_623,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value476=list$1sType$ph$p_operator_load_element(method_block_lambda_type_615->mParamTypes,n_620))))));
                            come_call_finalizer3(__right_value476,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_620++;
                    }
                    come_call_finalizer3(o2_saved_621,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_624=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 383, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_625=0;
                    for(                    o2_saved_626=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_587)),it_629=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_626));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_626));                    it_629=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_626))                    ){
                        multiple_assign_var9=it_629;
                        label_632=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_633=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_625==0) {
                            list$1CVALUE$ph$p_push_back(come_params_624,(struct CVALUE*)come_increment_ref_count(obj_value_596));
                            i_625++;
                        }
                        else {
                            Value_634=node_compile(node_633,info);
                            if(                            !Value_634) {
                                __result_obj__364 = (_Bool)0;
                                (label_632 = come_decrement_ref_count2(label_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_633) ? node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_626,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_624,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_607 = come_decrement_ref_count2(generics_fun_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_609,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_600 = come_decrement_ref_count2(none_generics_name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_601 = come_decrement_ref_count2(fun_name2_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_602 = come_decrement_ref_count2(fun_name3_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__364;
                            }
                            else {
                            }
                            come_value_635=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUE$ph$p_push_back(come_params_624,(struct CVALUE*)come_increment_ref_count(come_value_635));
                            come_call_finalizer3(come_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_632 = come_decrement_ref_count2(label_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_633) ? node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_626,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_603->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_636=generics_fun_603->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            generics_any_child_637=(_Bool)0;
                            obj_type2_638=(struct sType*)come_increment_ref_count(obj_type_597);
                            if(                            obj_type2_638->mNoSolvedGenericsType) {
                                __dec_obj100=obj_type2_638;
                                obj_type2_638=(struct sType*)come_increment_ref_count(obj_type2_638->mNoSolvedGenericsType);
                                come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                                for(                                o2_saved_639=(struct list$1sType$ph*)come_increment_ref_count((obj_type2_638->mGenericsTypes)),it_640=list$1sType$ph$p_begin((o2_saved_639));                                !list$1sType$ph$p_end((o2_saved_639));                                it_640=list$1sType$ph$p_next((o2_saved_639))                                ){
                                    if(                                    it_640->mAnyOriginalType) {
                                        generics_any_child_637=(_Bool)1;
                                    }
                                }
                                come_call_finalizer3(o2_saved_639,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_636,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                            come_call_finalizer3(obj_type2_638,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    n_620=0;
                    for(                    o2_saved_641=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_603->mParamTypes)),it_642=list$1sType$ph$p_begin((o2_saved_641));                    !list$1sType$ph$p_end((o2_saved_641));                    it_642=list$1sType$ph$p_next((o2_saved_641))                    ){
                        if(                        it_642->mClass->mMethodGenerics) {
                            method_generics_num_643=it_642->mClass->mMethodGenericsNum;
                            if(                            n_620<list$1CVALUE$ph$p_length(come_params_624)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_643,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value482=list$1CVALUE$ph$p_operator_load_element(come_params_624,n_620)))->type)));
                                come_call_finalizer3(__right_value482,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_620++;
                    }
                    come_call_finalizer3(o2_saved_641,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_624,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_644=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 433, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_645=0;
                    for(                    o2_saved_646=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_587)),it_647=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_646));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_646));                    it_647=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_646))                    ){
                        multiple_assign_var10=it_647;
                        label_648=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                        node_649=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
                        if(                        i_645==0) {
                            list$1CVALUE$ph$p_push_back(come_params_644,(struct CVALUE*)come_increment_ref_count(obj_value_596));
                            i_645++;
                        }
                        else {
                            Value_650=node_compile(node_649,info);
                            if(                            !Value_650) {
                                __result_obj__365 = (_Bool)0;
                                (label_648 = come_decrement_ref_count2(label_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_649) ? node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_646,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_644,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_607 = come_decrement_ref_count2(generics_fun_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_609,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_600 = come_decrement_ref_count2(none_generics_name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_601 = come_decrement_ref_count2(fun_name2_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_602 = come_decrement_ref_count2(fun_name3_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__365;
                            }
                            else {
                            }
                            come_value_651=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUE$ph$p_push_back(come_params_644,(struct CVALUE*)come_increment_ref_count(come_value_651));
                            come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_648 = come_decrement_ref_count2(label_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_649) ? node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_646,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_603->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_652=generics_fun_603->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_652,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_653=0;
                    for(                    o2_saved_654=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_603->mParamTypes)),it_655=list$1sType$ph$p_begin((o2_saved_654));                    !list$1sType$ph$p_end((o2_saved_654));                    it_655=list$1sType$ph$p_next((o2_saved_654))                    ){
                        if(                        it_655->mClass->mMethodGenerics) {
                            method_generics_num_656=it_655->mClass->mMethodGenericsNum;
                            if(                            n_653<list$1CVALUE$ph$p_length(come_params_644)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_656,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value488=list$1CVALUE$ph$p_operator_load_element(come_params_644,n_653)))->type)));
                                come_call_finalizer3(__right_value488,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_653++;
                    }
                    come_call_finalizer3(o2_saved_654,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_644,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2char$phsFun$ph$p_remove(info->funcs,generics_fun_name_607);
                (name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_607 = come_decrement_ref_count2(generics_fun_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_params_609,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_598;
        come_call_finalizer3(type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
        (none_generics_name_600 = come_decrement_ref_count2(none_generics_name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_601 = come_decrement_ref_count2(fun_name2_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_602 = come_decrement_ref_count2(fun_name3_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_657=obj_type_597->mClass;
    calling_dynamic_method_658=(_Bool)0;
    lambda_type_659=((void*)0);
    for(    o2_saved_660=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_657->mFields)),it_663=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_660));    !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_660));    it_663=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_660))    ){
        multiple_assign_var11=it_663;
        field_name_666=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        field_type_667=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        string_operator_equals(field_name_666,fun_name_586)&&string_operator_equals(field_type_667->mClass->mName,"lambda")) {
            calling_dynamic_method_658=(_Bool)1;
            lambda_type_659=field_type_667;
            (field_name_666 = come_decrement_ref_count2(field_name_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        (field_name_666 = come_decrement_ref_count2(field_name_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_660,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_658) {
        result_type_668=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_659->mResultType));
        result_type_668->mStatic=(_Bool)0;
        come_params_669=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 496, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_670=0;
        for(        o2_saved_671=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_587)),it_672=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_671));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_671));        it_672=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_671))        ){
            multiple_assign_var12=it_672;
            label_673=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            node_674=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            i_670==0) {
                list$1CVALUE$ph$p_push_back(come_params_669,(struct CVALUE*)come_increment_ref_count(obj_value_596));
                i_670++;
            }
            else {
                Value_675=node_compile(node_674,info);
                if(                !Value_675) {
                    __result_obj__372 = (_Bool)0;
                    (label_673 = come_decrement_ref_count2(label_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_674) ? node_674 = come_decrement_ref_count2(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_671,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__372;
                }
                else {
                }
                come_value_676=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value498=check_assign_type(((char*)(__right_value496=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value494=string_to_string(fun_name_586))),((char*)(__right_value495=int_to_string(i_670)))))),((struct sType*)(__right_value497=list$1sType$ph$p_operator_load_element(lambda_type_659->mParamTypes,i_670-1))),come_value_676->type,come_value_676,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_1_677=multiple_assign_var13->v1;
                Err_678=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                (_if_conditional2=(Err_678)),                (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value497,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value498,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result_obj__373 = (_Bool)1;
                    come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_678 = come_decrement_ref_count2(Err_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_673 = come_decrement_ref_count2(label_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_674) ? node_674 = come_decrement_ref_count2(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_671,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__373;
                }
                else {
                }
                if(                (_if_conditional3=(((struct sType*)(__right_value499=list$1sType$ph$p_operator_load_element(lambda_type_659->mParamTypes,i_670-1)))->mHeap&&come_value_676->type->mHeap)),                come_call_finalizer3(__right_value499,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)(__right_value500=list$1sType$ph$p_operator_load_element(lambda_type_659->mParamTypes,i_670-1))),come_value_676->type,come_value_676,info,(_Bool)1);
                    come_call_finalizer3(__right_value500,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_push_back(come_params_669,(struct CVALUE*)come_increment_ref_count(come_value_676));
                i_670++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_678 = come_decrement_ref_count2(Err_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (label_673 = come_decrement_ref_count2(label_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_674) ? node_674 = come_decrement_ref_count2(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_671,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buf_679=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 528, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_format(buf_679,"%s->%s",obj_value_596->c_value,fun_name_586);
        buffer_append_str(buf_679,"(");
        j_680=0;
        for(        o2_saved_681=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_669)),it_684=list$1CVALUE$ph$p_begin((o2_saved_681));        !list$1CVALUE$ph$p_end((o2_saved_681));        it_684=list$1CVALUE$ph$p_next((o2_saved_681))        ){
            if(            j_680==0) {
                __dec_obj101=it_684->c_value;
                it_684->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_684->c_value));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_679,it_684->c_value);
            if(            j_680!=list$1CVALUE$ph$p_length(come_params_669)-1) {
                buffer_append_str(buf_679,",");
            }
            j_680++;
        }
        come_call_finalizer3(o2_saved_681,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_679,")");
        come_value2_687=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 548, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj102=come_value2_687->c_value;
        come_value2_687->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_679));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_688=(struct sType*)come_increment_ref_count(solve_generics(result_type_668,info->generics_type,info));
        __dec_obj103=come_value2_687->type;
        come_value2_687->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_688));
        come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_687->type->mStatic=(_Bool)0;
        come_value2_687->var=((void*)0);
        if(        result_type2_688->mHeap) {
            append_object_to_right_values2(come_value2_687,(struct sType*)come_increment_ref_count(result_type2_688),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_687->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_687));
        come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj104=info->method_generics_types;
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_594);
        come_call_finalizer3(__dec_obj104,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_679,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_688,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_689=((void*)0);
        generics_fun_name_690=((void*)0);
        fun_691=((void*)0);
        if(        string_operator_equals(fun_name_586,"super")) {
            __dec_obj105=fun_name_586;
            fun_name_586=(char*)come_increment_ref_count(create_non_method_name(obj_type_597,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_692=obj_type_597->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value510=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_692->mParentClassName))))),            come_call_finalizer3(__right_value510,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_692=((struct sClass*)(__right_value511=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_692->mParentClassName)));
                come_call_finalizer3(__right_value511,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj106=generics_fun_name_690;
                generics_fun_name_690=(char*)come_increment_ref_count(create_method_name_using_class(klass_692,(_Bool)0,fun_name_586,info,(_Bool)1));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_691=((struct sFun*)(__right_value514=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value513=__builtin_string(generics_fun_name_690))),((void*)0))));
                (__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value514,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_691) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_597&&obj_type_597->mNoSolvedGenericsType&&list$1sType$ph$p_length(obj_type_597->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var14=((struct tuple2$2char$phsGenericsFun$p*)(__right_value516=make_generics_function(obj_type_597,(char*)come_increment_ref_count(__builtin_string(fun_name_586)),info,(_Bool)1)));
                name_693=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                gfun_694=multiple_assign_var14->v2;
                come_call_finalizer3(__right_value516,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj107=generics_fun_name_690;
                generics_fun_name_690=(char*)come_increment_ref_count(name_693);
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_689=gfun_694;
                (name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1sType$ph$p_length(info->method_generics_types)>0) {
                none_generics_name_695=(char*)come_increment_ref_count(get_none_generics_name(obj_type_597->mClass->mName));
                fun_name3_696=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_695,fun_name_586));
                multiple_assign_var15=((struct tuple2$2char$phsGenericsFun$p*)(__right_value520=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_696)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
                name_697=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                gfun_698=multiple_assign_var15->v2;
                come_call_finalizer3(__right_value520,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj108=generics_fun_name_690;
                generics_fun_name_690=(char*)come_increment_ref_count(name_697);
                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_689=gfun_698;
                (none_generics_name_695 = come_decrement_ref_count2(none_generics_name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_696 = come_decrement_ref_count2(fun_name3_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_697 = come_decrement_ref_count2(name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value522=make_generics_function(obj_type_597,(char*)come_increment_ref_count(__builtin_string(fun_name_586)),info,(_Bool)1)));
                name_699=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                gfun_700=multiple_assign_var16->v2;
                come_call_finalizer3(__right_value522,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj109=generics_fun_name_690;
                generics_fun_name_690=(char*)come_increment_ref_count(name_699);
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_689=gfun_700;
                (name_699 = come_decrement_ref_count2(name_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_701=128;            i_701>=1;            i_701--            ){
                new_fun_name_702=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_690,i_701));
                fun_691=((struct sFun*)(__right_value525=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value524=__builtin_string(new_fun_name_702))))));
                (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value525,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_691!=((void*)0)) {
                    __dec_obj110=generics_fun_name_690;
                    generics_fun_name_690=(char*)come_increment_ref_count(__builtin_string(new_fun_name_702));
                    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_702 = come_decrement_ref_count2(new_fun_name_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_702 = come_decrement_ref_count2(new_fun_name_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_691==((void*)0)) {
                obj_array_type_706=obj_type_597->mOriginalLoadVarType;
                if(                obj_array_type_706&&list$1sNode$ph$p_length(obj_array_type_706->mArrayNum)>0) {
                    array_method_name_707=(char*)come_increment_ref_count(create_method_name(obj_array_type_706,(_Bool)0,fun_name_586,info,(_Bool)0));
                    fun_691=((struct sFun*)(__right_value529=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value528=__builtin_string(array_method_name_707))),((void*)0))));
                    (__right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value529,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_691) {
                        __dec_obj111=generics_fun_name_690;
                        generics_fun_name_690=(char*)come_increment_ref_count(__builtin_string(array_method_name_707));
                        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_691=((struct sFun*)(__right_value532=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value531=__builtin_string(generics_fun_name_690))),((void*)0))));
                        (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value532,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_691==((void*)0)) {
                            __dec_obj112=generics_fun_name_690;
                            generics_fun_name_690=(char*)come_increment_ref_count(create_method_name(obj_type_597,(_Bool)0,((char*)(__right_value533=__builtin_string(fun_name_586))),info,(_Bool)1));
                            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (__right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_691=((struct sFun*)(__right_value536=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value535=__builtin_string(generics_fun_name_690))),((void*)0))));
                            (__right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value536,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_691==((void*)0)) {
                                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value537=err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_690,info->come_fun->mName)));
                                come_exception_var_2_708=multiple_assign_var17->v1;
                                Err_709=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                                if(                                (_if_conditional4=(Err_709)),                                come_call_finalizer3(__right_value537,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional4) {
                                    __result_obj__384 = (_Bool)1;
                                    (Err_709 = come_decrement_ref_count2(Err_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (array_method_name_707 = come_decrement_ref_count2(array_method_name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                    come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__384;
                                }
                                else {
                                }
                                (Err_709 = come_decrement_ref_count2(Err_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                        }
                    }
                    (array_method_name_707 = come_decrement_ref_count2(array_method_name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_691=((struct sFun*)(__right_value539=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value538=__builtin_string(generics_fun_name_690))),((void*)0))));
                    (__right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value539,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_691==((void*)0)) {
                        __dec_obj113=generics_fun_name_690;
                        generics_fun_name_690=(char*)come_increment_ref_count(create_method_name(obj_type_597,(_Bool)0,((char*)(__right_value540=__builtin_string(fun_name_586))),info,(_Bool)1));
                        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                        (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_691=((struct sFun*)(__right_value543=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value542=__builtin_string(generics_fun_name_690))),((void*)0))));
                        (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value543,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_691==((void*)0)) {
                            klass_710=obj_type_597->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value544=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_710->mParentClassName))))),                            come_call_finalizer3(__right_value544,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_710=((struct sClass*)(__right_value545=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_710->mParentClassName)));
                                come_call_finalizer3(__right_value545,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj114=generics_fun_name_690;
                                generics_fun_name_690=(char*)come_increment_ref_count(create_method_name_using_class(klass_710,(_Bool)0,fun_name_586,info,(_Bool)1));
                                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_691=((struct sFun*)(__right_value548=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value547=__builtin_string(generics_fun_name_690))),((void*)0))));
                                (__right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(__right_value548,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_691) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_691==((void*)0)&&string_operator_equals(fun_name_586,"to_string")) {
                            multiple_assign_var18=((struct tuple2$2sFun$pchar$ph*)(__right_value549=create_to_string_automatically(obj_type_597,fun_name_586,info)));
                            fun2_711=multiple_assign_var18->v1;
                            real_fun_name_712=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                            come_call_finalizer3(__right_value549,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_691=fun2_711;
                            __dec_obj115=generics_fun_name_690;
                            generics_fun_name_690=(char*)come_increment_ref_count(real_fun_name_712);
                            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_712 = come_decrement_ref_count2(real_fun_name_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_691==((void*)0)&&string_operator_equals(fun_name_586,"equals")) {
                            multiple_assign_var19=((struct tuple2$2sFun$pchar$ph*)(__right_value550=create_equals_automatically(obj_type_597,fun_name_586,info)));
                            fun2_713=multiple_assign_var19->v1;
                            real_fun_name_714=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                            come_call_finalizer3(__right_value550,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_691=fun2_713;
                            __dec_obj116=generics_fun_name_690;
                            generics_fun_name_690=(char*)come_increment_ref_count(real_fun_name_714);
                            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_714 = come_decrement_ref_count2(real_fun_name_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_691==((void*)0)) {
                            original_obj_type_fun_name_715=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_597,(_Bool)0,((char*)(__right_value551=__builtin_string(fun_name_586))),info,(_Bool)1));
                            (__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_691=((struct sFun*)(__right_value554=map$2char$phsFun$ph$p_at(info->funcs,((char*)(__right_value553=__builtin_string(original_obj_type_fun_name_715))),((void*)0))));
                            (__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value554,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_691) {
                                __dec_obj117=generics_fun_name_690;
                                generics_fun_name_690=(char*)come_increment_ref_count(original_obj_type_fun_name_715);
                                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            (original_obj_type_fun_name_715 = come_decrement_ref_count2(original_obj_type_fun_name_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_691==((void*)0)) {
                            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value555=err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_690,info->come_fun->mName)));
                            come_exception_var_3_716=multiple_assign_var20->v1;
                            Err_717=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            if(                            (_if_conditional5=(Err_717)),                            come_call_finalizer3(__right_value555,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional5) {
                                __result_obj__385 = (_Bool)1;
                                (Err_717 = come_decrement_ref_count2(Err_717, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__385;
                            }
                            else {
                            }
                            (Err_717 = come_decrement_ref_count2(Err_717, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
            }
        }
        if(        fun_691==((void*)0)) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value556=err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_690,info->come_fun->mName)));
            come_exception_var_4_718=multiple_assign_var21->v1;
            Err_719=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional6=(Err_719)),            come_call_finalizer3(__right_value556,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__386 = (_Bool)1;
                (Err_719 = come_decrement_ref_count2(Err_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__386;
            }
            else {
            }
            (Err_719 = come_decrement_ref_count2(Err_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph$p_length(fun_691->mParamTypes)==0) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value557=err_msg(info,"Method require function parametor")));
            come_exception_var_5_720=multiple_assign_var22->v1;
            Err_721=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional7=(Err_721)),            come_call_finalizer3(__right_value557,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result_obj__387 = (_Bool)1;
                (Err_721 = come_decrement_ref_count2(Err_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__387;
            }
            else {
            }
            (Err_721 = come_decrement_ref_count2(Err_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_722=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_691->mResultType));
        if(        info->come_fun->mResultType->mException&&result_type_722->mException&&!info->in_exception_value) {
            in_exception_value_723=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 716, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value566=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMethodCallNode_finalize;
            _inf_value2->clone=(void*)sMethodCallNode_clone;
            _inf_value2->compile=(void*)sMethodCallNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sMethodCallNode_terminated;
            _inf_value2->kind=(void*)sMethodCallNode_kind;
            new_node_724=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value2),info));
            come_call_finalizer3(__right_value566,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_726=node_compile(new_node_724,info);
            if(            !Value_726) {
                __result_obj__390 = (_Bool)0;
                ((new_node_724) ? new_node_724 = come_decrement_ref_count2(new_node_724, ((struct sNode*)new_node_724)->finalize, ((struct sNode*)new_node_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__390;
            }
            else {
            }
            info->in_exception_value=in_exception_value_723;
            __result_obj__391 = (_Bool)1;
            ((new_node_724) ? new_node_724 = come_decrement_ref_count2(new_node_724, ((struct sNode*)new_node_724)->finalize, ((struct sNode*)new_node_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__391;
            ((new_node_724) ? new_node_724 = come_decrement_ref_count2(new_node_724, ((struct sNode*)new_node_724)->finalize, ((struct sNode*)new_node_724)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        result_type_722->mException&&!info->in_exception_value) {
            in_exception_value_727=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 728, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value569=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMethodCallNode_finalize;
            _inf_value3->clone=(void*)sMethodCallNode_clone;
            _inf_value3->compile=(void*)sMethodCallNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sMethodCallNode_terminated;
            _inf_value3->kind=(void*)sMethodCallNode_kind;
            new_node_728=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value3),info));
            come_call_finalizer3(__right_value569,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_729=node_compile(new_node_728,info);
            if(            !Value_729) {
                __result_obj__392 = (_Bool)0;
                ((new_node_728) ? new_node_728 = come_decrement_ref_count2(new_node_728, ((struct sNode*)new_node_728)->finalize, ((struct sNode*)new_node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__392;
            }
            else {
            }
            info->in_exception_value=in_exception_value_727;
            __result_obj__393 = (_Bool)1;
            ((new_node_728) ? new_node_728 = come_decrement_ref_count2(new_node_728, ((struct sNode*)new_node_728)->finalize, ((struct sNode*)new_node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__393;
            ((new_node_728) ? new_node_728 = come_decrement_ref_count2(new_node_728, ((struct sNode*)new_node_728)->finalize, ((struct sNode*)new_node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        result_type_722->mStatic=(_Bool)0;
        result_type2_730=(struct sType*)come_increment_ref_count(solve_generics(result_type_722,info->generics_type,info));
        param_types_731=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 743, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_732=(struct list$1sType$ph*)come_increment_ref_count((fun_691->mParamTypes)),it_733=list$1sType$ph$p_begin((o2_saved_732));        !list$1sType$ph$p_end((o2_saved_732));        it_733=list$1sType$ph$p_next((o2_saved_732))        ){
            if(            it_733==((void*)0)) {
                list$1sType$ph$p_push_back(param_types_731,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_733)));
            }
            else {
                it2_734=(struct sType*)come_increment_ref_count(solve_generics(it_733,info->generics_type,info));
                no_solved_obj_type_735=(struct sType*)come_increment_ref_count(obj_type_597->mNoSolvedGenericsType);
                it3_736=(struct sType*)come_increment_ref_count(solve_generics(it_733,no_solved_obj_type_735,info));
                any_type_737=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_736)));
                list$1sType$ph$p_push_back(param_types_731,(struct sType*)come_increment_ref_count(it2_734));
                come_call_finalizer3(it2_734,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_obj_type_735,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(it3_736,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(any_type_737,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_732,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        type_checking_param_types_738=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_731));
        if(        generics_fun_689) {
            n_739=0;
            for(            o2_saved_740=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_689->mParamTypes)),it_741=list$1sType$ph$p_begin((o2_saved_740));            !list$1sType$ph$p_end((o2_saved_740));            it_741=list$1sType$ph$p_next((o2_saved_740))            ){
                if(                it_741==((void*)0)) {
                }
                else {
                    no_solved_obj_type_742=(struct sType*)come_increment_ref_count(obj_type_597->mNoSolvedGenericsType);
                    it3_743=(struct sType*)come_increment_ref_count(solve_generics(it_741,no_solved_obj_type_742,info));
                    any_type_744=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_743)));
                    if(                    (_if_conditional8=(string_operator_equals(((struct sType*)(__right_value582=list$1sType$ph$p_operator_load_element(param_types_731,n_739)))->mClass->mName,"void")&&((struct sType*)(__right_value583=list$1sType$ph$p_operator_load_element(param_types_731,n_739)))->mPointerNum==1)),                    come_call_finalizer3(__right_value582,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value583,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional8) {
                        list$1sType$ph$p_replace(type_checking_param_types_738,n_739,(struct sType*)come_increment_ref_count(any_type_744));
                    }
                    come_call_finalizer3(no_solved_obj_type_742,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(it3_743,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(any_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                n_739++;
            }
            come_call_finalizer3(o2_saved_740,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_params_745=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 782, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        i_746=0;        i_746<list$1sType$ph$p_length(fun_691->mParamTypes)-(((method_block_589)?(2):(0)));        i_746++        ){
            list$1CVALUE$ph$p_add(come_params_745,((void*)0));
        }
        first_param_750=(_Bool)1;
        for(        o2_saved_751=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_587)),it_752=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_751));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_751));        it_752=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_751))        ){
            multiple_assign_var23=it_752;
            label_753=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            node_754=(struct sNode*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            first_param_750) {
                first_param_750=(_Bool)0;
            }
            else if(            label_753) {
                n_755=0;
                for(                o2_saved_756=(struct list$1char$ph*)come_increment_ref_count((fun_691->mParamNames)),it_759=list$1char$ph$p_begin((o2_saved_756));                !list$1char$ph$p_end((o2_saved_756));                it_759=list$1char$ph$p_next((o2_saved_756))                ){
                    if(                    string_operator_equals(label_753,it_759)) {
                        break;
                    }
                    n_755++;
                }
                come_call_finalizer3(o2_saved_756,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                Value_762=node_compile(node_754,info);
                if(                !Value_762) {
                    __result_obj__401 = (_Bool)0;
                    (label_753 = come_decrement_ref_count2(label_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_754) ? node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_751,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__401;
                }
                else {
                }
                come_value_763=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional9=(((struct sType*)(__right_value590=list$1sType$ph$p_operator_load_element(param_types_731,n_755))))),                come_call_finalizer3(__right_value590,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    multiple_assign_var24=((struct tuple2$2bool$char$ph*)(__right_value595=check_assign_type(((char*)(__right_value593=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value591=string_to_string(fun_name_586))),((char*)(__right_value592=int_to_string(n_755)))))),((struct sType*)(__right_value594=list$1sType$ph$p_operator_load_element(type_checking_param_types_738,n_755))),come_value_763->type,come_value_763,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_6_764=multiple_assign_var24->v1;
                    Err_765=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                    if(                    (_if_conditional10=(Err_765)),                    (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value594,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value595,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional10) {
                        __result_obj__402 = (_Bool)1;
                        (Err_765 = come_decrement_ref_count2(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_763,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_753 = come_decrement_ref_count2(label_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_754) ? node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_751,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__402;
                    }
                    else {
                    }
                    (Err_765 = come_decrement_ref_count2(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional11=(((struct sType*)(__right_value596=list$1sType$ph$p_operator_load_element(param_types_731,n_755)))&&((struct sType*)(__right_value597=list$1sType$ph$p_operator_load_element(param_types_731,n_755)))->mHeap&&come_value_763->type->mHeap)),                come_call_finalizer3(__right_value596,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    std_move(((struct sType*)(__right_value598=list$1sType$ph$p_operator_load_element(param_types_731,n_755))),come_value_763->type,come_value_763,info,(_Bool)1);
                    come_call_finalizer3(__right_value598,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_745,n_755,(struct CVALUE*)come_increment_ref_count(come_value_763));
                come_call_finalizer3(come_value_763,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_753 = come_decrement_ref_count2(label_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_754) ? node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_751,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        i_771=0;
        for(        o2_saved_772=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_587)),it_773=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_772));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_772));        it_773=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_772))        ){
            multiple_assign_var25=it_773;
            label_774=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            node_775=(struct sNode*)come_increment_ref_count(multiple_assign_var25->v2);
            if(            i_771==0) {
                multiple_assign_var26=((struct tuple2$2bool$char$ph*)(__right_value603=check_assign_type(((char*)(__right_value601=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value599=string_to_string(fun_name_586))),((char*)(__right_value600=int_to_string(i_771)))))),((struct sType*)(__right_value602=list$1sType$ph$p_operator_load_element(type_checking_param_types_738,i_771))),obj_value_596->type,obj_value_596,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_776=multiple_assign_var26->v1;
                Err_777=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                if(                (_if_conditional12=(Err_777)),                (__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value602,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value603,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional12) {
                    __result_obj__405 = (_Bool)1;
                    (Err_777 = come_decrement_ref_count2(Err_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_774 = come_decrement_ref_count2(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_772,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__405;
                }
                else {
                }
                if(                (_if_conditional13=(((struct sType*)(__right_value604=list$1sType$ph$p_operator_load_element(param_types_731,i_771)))->mHeap&&obj_value_596->type->mHeap)),                come_call_finalizer3(__right_value604,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional13) {
                    std_move(((struct sType*)(__right_value605=list$1sType$ph$p_operator_load_element(param_types_731,i_771))),obj_value_596->type,obj_value_596,info,(_Bool)1);
                    come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value606=list$1sType$ph$p_operator_load_element(param_types_731,i_771)))->mHeap&&!obj_value_596->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value608=err_msg(info,"require heap parametor(%s)",((char*)(__right_value607=list$1char$ph$p_operator_load_element(fun_691->mParamNames,i_771))))));
                    come_exception_var_8_781=multiple_assign_var27->v1;
                    Err_782=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                    if(                    (_if_conditional14=(Err_782)),                    (__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value608,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        __result_obj__408 = (_Bool)1;
                        (Err_782 = come_decrement_ref_count2(Err_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (Err_777 = come_decrement_ref_count2(Err_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (label_774 = come_decrement_ref_count2(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_772,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__408;
                    }
                    else {
                    }
                    (Err_782 = come_decrement_ref_count2(Err_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUE$ph$p_replace(come_params_745,i_771,(struct CVALUE*)come_increment_ref_count(obj_value_596));
                i_771++;
                (Err_777 = come_decrement_ref_count2(Err_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            label_774) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional15=(((struct CVALUE*)(__right_value609=list$1CVALUE$ph$p_operator_load_element(come_params_745,i_771)))==((void*)0))),                    come_call_finalizer3(__right_value609,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        break;
                    }
                    else {
                        i_771++;
                    }
                }
                Value_783=node_compile(node_775,info);
                if(                !Value_783) {
                    __result_obj__409 = (_Bool)0;
                    (label_774 = come_decrement_ref_count2(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_772,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__409;
                }
                else {
                }
                come_value_784=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional16=(((struct sType*)(__right_value611=list$1sType$ph$p_operator_load_element(param_types_731,i_771))))),                come_call_finalizer3(__right_value611,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value616=check_assign_type(((char*)(__right_value614=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value612=string_to_string(fun_name_586))),((char*)(__right_value613=int_to_string(i_771)))))),((struct sType*)(__right_value615=list$1sType$ph$p_operator_load_element(type_checking_param_types_738,i_771))),come_value_784->type,come_value_784,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_9_785=multiple_assign_var28->v1;
                    Err_786=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    if(                    (_if_conditional17=(Err_786)),                    (__right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value615,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value616,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional17) {
                        __result_obj__410 = (_Bool)1;
                        (Err_786 = come_decrement_ref_count2(Err_786, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_784,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_774 = come_decrement_ref_count2(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_772,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__410;
                    }
                    else {
                    }
                    (Err_786 = come_decrement_ref_count2(Err_786, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional18=(((struct sType*)(__right_value617=list$1sType$ph$p_operator_load_element(param_types_731,i_771)))&&((struct sType*)(__right_value618=list$1sType$ph$p_operator_load_element(param_types_731,i_771)))->mHeap&&come_value_784->type->mHeap)),                come_call_finalizer3(__right_value617,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    std_move(((struct sType*)(__right_value619=list$1sType$ph$p_operator_load_element(param_types_731,i_771))),come_value_784->type,come_value_784,info,(_Bool)1);
                    come_call_finalizer3(__right_value619,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_745,i_771,(struct CVALUE*)come_increment_ref_count(come_value_784));
                i_771++;
                come_call_finalizer3(come_value_784,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_774 = come_decrement_ref_count2(label_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_772,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional19=(((struct CVALUE*)(__right_value620=list$1CVALUE$ph$p_operator_load_element(come_params_745,i_771)))==((void*)0))),            come_call_finalizer3(__right_value620,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                break;
            }
            else {
                i_771++;
            }
        }
        obj_array_type_787=obj_type_597->mOriginalLoadVarType;
        if(        obj_array_type_787&&list$1sNode$ph$p_length(obj_array_type_787->mArrayNum)>0) {
            array_method_name_788=(char*)come_increment_ref_count(create_method_name(obj_array_type_787,(_Bool)0,fun_name_586,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_690,array_method_name_788)) {
                if(                string_operator_equals(fun_name_586,"to_pointer")) {
                    buf_789=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 895, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_790=0;
                    for(                    o2_saved_791=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_787->mArrayNum)),it_794=list$1sNode$ph$p_begin((o2_saved_791));                    !list$1sNode$ph$p_end((o2_saved_791));                    it_794=list$1sNode$ph$p_next((o2_saved_791))                    ){
                        Value_797=node_compile(it_794,info);
                        if(                        !Value_797) {
                            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value624=err_msg(info,"invalid array num")));
                            come_exception_var_10_798=multiple_assign_var29->v1;
                            Err_799=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                            if(                            (_if_conditional20=(Err_799)),                            come_call_finalizer3(__right_value624,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional20) {
                                __result_obj__417 = (_Bool)1;
                                (Err_799 = come_decrement_ref_count2(Err_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_791,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_789,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_788 = come_decrement_ref_count2(array_method_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__417;
                            }
                            else {
                            }
                            (Err_799 = come_decrement_ref_count2(Err_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_800=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_789,"%s",come_value_800->c_value);
                        if(                        i_790!=list$1sNode$ph$p_length(obj_array_type_787->mArrayNum)-1) {
                            buffer_append_str(buf_789,"*");
                        }
                        i_790++;
                        come_call_finalizer3(come_value_800,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_791,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_801=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 916, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj128=come_value_801->c_value;
                    come_value_801->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_789));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_801->var=((void*)0);
                    __dec_obj129=come_value_801->type;
                    come_value_801->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 920, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_745,1,(struct CVALUE*)come_increment_ref_count(come_value_801));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_587,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 923, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_789,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_801,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_586,"length")) {
                    buf_805=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 926, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_806=0;
                    for(                    o2_saved_807=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_787->mArrayNum)),it_808=list$1sNode$ph$p_begin((o2_saved_807));                    !list$1sNode$ph$p_end((o2_saved_807));                    it_808=list$1sNode$ph$p_next((o2_saved_807))                    ){
                        Value_809=node_compile(it_808,info);
                        if(                        !Value_809) {
                            multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value640=err_msg(info,"invalid array num")));
                            come_exception_var_11_810=multiple_assign_var30->v1;
                            Err_811=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                            if(                            (_if_conditional21=(Err_811)),                            come_call_finalizer3(__right_value640,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional21) {
                                __result_obj__419 = (_Bool)1;
                                (Err_811 = come_decrement_ref_count2(Err_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_807,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_805,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_788 = come_decrement_ref_count2(array_method_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__419;
                            }
                            else {
                            }
                            (Err_811 = come_decrement_ref_count2(Err_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_812=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_805,"%s",come_value_812->c_value);
                        if(                        i_806!=list$1sNode$ph$p_length(obj_array_type_787->mArrayNum)-1) {
                            buffer_append_str(buf_805,"*");
                        }
                        i_806++;
                        come_call_finalizer3(come_value_812,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_807,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_813=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 946, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj133=come_value_813->c_value;
                    come_value_813->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_805));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_813->var=((void*)0);
                    __dec_obj134=come_value_813->type;
                    come_value_813->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 950, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_745,1,(struct CVALUE*)come_increment_ref_count(come_value_813));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_587,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 953, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_805,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_813,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_586,"to_buffer")) {
                    buf_814=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 956, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_815=0;
                    for(                    o2_saved_816=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_787->mArrayNum)),it_817=list$1sNode$ph$p_begin((o2_saved_816));                    !list$1sNode$ph$p_end((o2_saved_816));                    it_817=list$1sNode$ph$p_next((o2_saved_816))                    ){
                        Value_818=node_compile(it_817,info);
                        if(                        !Value_818) {
                            multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value653=err_msg(info,"invalid array num")));
                            come_exception_var_12_819=multiple_assign_var31->v1;
                            Err_820=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                            if(                            (_if_conditional22=(Err_820)),                            come_call_finalizer3(__right_value653,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional22) {
                                __result_obj__420 = (_Bool)1;
                                (Err_820 = come_decrement_ref_count2(Err_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_816,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_814,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_788 = come_decrement_ref_count2(array_method_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__420;
                            }
                            else {
                            }
                            (Err_820 = come_decrement_ref_count2(Err_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_821=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_814,"%s",come_value_821->c_value);
                        if(                        i_815!=list$1sNode$ph$p_length(obj_array_type_787->mArrayNum)-1) {
                            buffer_append_str(buf_814,"*");
                        }
                        i_815++;
                        come_call_finalizer3(come_value_821,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_816,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_822=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 976, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj135=come_value_822->c_value;
                    come_value_822->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_814));
                    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_822->var=((void*)0);
                    __dec_obj136=come_value_822->type;
                    come_value_822->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 980, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_745,1,(struct CVALUE*)come_increment_ref_count(come_value_822));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_587,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 983, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_814,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_822,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_586,"to_list")) {
                    buf_823=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 986, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_824=0;
                    for(                    o2_saved_825=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_787->mArrayNum)),it_826=list$1sNode$ph$p_begin((o2_saved_825));                    !list$1sNode$ph$p_end((o2_saved_825));                    it_826=list$1sNode$ph$p_next((o2_saved_825))                    ){
                        Value_827=node_compile(it_826,info);
                        if(                        !Value_827) {
                            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value666=err_msg(info,"invalid array num")));
                            come_exception_var_13_828=multiple_assign_var32->v1;
                            Err_829=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                            if(                            (_if_conditional23=(Err_829)),                            come_call_finalizer3(__right_value666,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional23) {
                                __result_obj__421 = (_Bool)1;
                                (Err_829 = come_decrement_ref_count2(Err_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_825,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_788 = come_decrement_ref_count2(array_method_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__421;
                            }
                            else {
                            }
                            (Err_829 = come_decrement_ref_count2(Err_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_830=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_823,"%s",come_value_830->c_value);
                        if(                        i_824!=list$1sNode$ph$p_length(obj_array_type_787->mArrayNum)-1) {
                            buffer_append_str(buf_823,"*");
                        }
                        i_824++;
                        come_call_finalizer3(come_value_830,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_825,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_831=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1006, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj137=come_value_831->c_value;
                    come_value_831->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_823));
                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_831->var=((void*)0);
                    __dec_obj138=come_value_831->type;
                    come_value_831->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1010, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_745,1,(struct CVALUE*)come_increment_ref_count(come_value_831));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_587,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1013, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_831,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_586,"to_vector")) {
                    buf_832=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1016, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_833=0;
                    for(                    o2_saved_834=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_787->mArrayNum)),it_835=list$1sNode$ph$p_begin((o2_saved_834));                    !list$1sNode$ph$p_end((o2_saved_834));                    it_835=list$1sNode$ph$p_next((o2_saved_834))                    ){
                        Value_836=node_compile(it_835,info);
                        if(                        !Value_836) {
                            multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value679=err_msg(info,"invalid array num")));
                            come_exception_var_14_837=multiple_assign_var33->v1;
                            Err_838=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                            if(                            (_if_conditional24=(Err_838)),                            come_call_finalizer3(__right_value679,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional24) {
                                __result_obj__422 = (_Bool)1;
                                (Err_838 = come_decrement_ref_count2(Err_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_834,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_832,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_788 = come_decrement_ref_count2(array_method_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__422;
                            }
                            else {
                            }
                            (Err_838 = come_decrement_ref_count2(Err_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_839=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_832,"%s",come_value_839->c_value);
                        if(                        i_833!=list$1sNode$ph$p_length(obj_array_type_787->mArrayNum)-1) {
                            buffer_append_str(buf_832,"*");
                        }
                        i_833++;
                        come_call_finalizer3(come_value_839,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_834,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_840=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1036, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj139=come_value_840->c_value;
                    come_value_840->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_832));
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_840->var=((void*)0);
                    __dec_obj140=come_value_840->type;
                    come_value_840->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1040, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_745,1,(struct CVALUE*)come_increment_ref_count(come_value_840));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_587,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1043, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_832,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_840,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            (array_method_name_788 = come_decrement_ref_count2(array_method_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1tuple2$2char$phsNode$ph$ph$p_length(params_587)<list$1sType$ph$p_length(fun_691->mParamTypes)+(((method_block_589)?(-2):(0)))) {
            for(            ;            i_771<list$1sType$ph$p_length(fun_691->mParamTypes)+(((method_block_589)?(-2):(0)));            i_771++            ){
                default_param_841=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value690=list$1char$ph$p_operator_load_element(fun_691->mParamDefaultParametors,i_771)))));
                (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_842=((char*)(__right_value692=list$1char$ph$p_operator_load_element(fun_691->mParamNames,i_771)));
                (__right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional25=(default_param_841&&string_operator_not_equals(default_param_841,"")&&((struct CVALUE*)(__right_value693=list$1CVALUE$ph$p_operator_load_element(come_params_745,i_771)))==((void*)0))),                come_call_finalizer3(__right_value693,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    source_843=(struct buffer*)come_increment_ref_count(info->source);
                    p_844=info->p;
                    head_845=info->head;
                    sline_846=info->sline;
                    __dec_obj141=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_841));
                    come_call_finalizer3(__dec_obj141,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_847=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_848=node_compile(node_847,info);
                    if(                    !Value_848) {
                        __result_obj__423 = (_Bool)0;
                        come_call_finalizer3(source_843,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_841 = come_decrement_ref_count2(default_param_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__423;
                    }
                    else {
                    }
                    __dec_obj142=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_843);
                    come_call_finalizer3(__dec_obj142,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_844;
                    info->head=head_845;
                    info->sline=sline_846;
                    come_value_849=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional26=(((struct sType*)(__right_value697=list$1sType$ph$p_operator_load_element(param_types_731,i_771))))),                    come_call_finalizer3(__right_value697,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional26) {
                        multiple_assign_var34=((struct tuple2$2bool$char$ph*)(__right_value702=check_assign_type(((char*)(__right_value700=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value698=string_to_string(fun_name_586))),((char*)(__right_value699=int_to_string(i_771)))))),((struct sType*)(__right_value701=list$1sType$ph$p_operator_load_element(type_checking_param_types_738,i_771))),come_value_849->type,come_value_849,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_15_850=multiple_assign_var34->v1;
                        Err_851=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                        if(                        (_if_conditional27=(Err_851)),                        (__right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value699 = come_decrement_ref_count2(__right_value699, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value701,sType_finalize, 0, 1, 0, 0, (void*)0),
                        come_call_finalizer3(__right_value702,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional27) {
                            __result_obj__424 = (_Bool)1;
                            (Err_851 = come_decrement_ref_count2(Err_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(source_843,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(come_value_849,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            (default_param_841 = come_decrement_ref_count2(default_param_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__424;
                        }
                        else {
                        }
                        (Err_851 = come_decrement_ref_count2(Err_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    (_if_conditional28=(((struct sType*)(__right_value703=list$1sType$ph$p_operator_load_element(param_types_731,i_771)))&&((struct sType*)(__right_value704=list$1sType$ph$p_operator_load_element(param_types_731,i_771)))->mHeap&&come_value_849->type->mHeap)),                    come_call_finalizer3(__right_value703,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value704,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional28) {
                        std_move(((struct sType*)(__right_value705=list$1sType$ph$p_operator_load_element(param_types_731,i_771))),come_value_849->type,come_value_849,info,(_Bool)1);
                        come_call_finalizer3(__right_value705,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUE$ph$p_replace(come_params_745,i_771,(struct CVALUE*)come_increment_ref_count(come_value_849));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_843,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_849,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional29=(((struct CVALUE*)(__right_value706=list$1CVALUE$ph$p_operator_load_element(come_params_745,i_771)))==((void*)0))),                    come_call_finalizer3(__right_value706,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional29) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value707=err_msg(info,"require parametor(%s) %d",fun_691->mName,i_771)));
                        come_exception_var_16_852=multiple_assign_var35->v1;
                        Err_853=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        if(                        (_if_conditional30=(Err_853)),                        come_call_finalizer3(__right_value707,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional30) {
                            __result_obj__425 = (_Bool)1;
                            (Err_853 = come_decrement_ref_count2(Err_853, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (default_param_841 = come_decrement_ref_count2(default_param_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__425;
                        }
                        else {
                        }
                        (Err_853 = come_decrement_ref_count2(Err_853, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                (default_param_841 = come_decrement_ref_count2(default_param_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_589) {
            if(            !compile_method_block(method_block_589,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_745),fun_691,fun_name_586,method_block_sline_590,info,(_Bool)0)) {
                __result_obj__426 = (_Bool)0;
                (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__426;
            }
        }
        buf_854=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1103, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_854,generics_fun_name_690);
        buffer_append_str(buf_854,"(");
        j_855=0;
        for(        o2_saved_856=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_745)),it_857=list$1CVALUE$ph$p_begin((o2_saved_856));        !list$1CVALUE$ph$p_end((o2_saved_856));        it_857=list$1CVALUE$ph$p_next((o2_saved_856))        ){
            buffer_append_str(buf_854,it_857->c_value);
            if(            j_855!=list$1CVALUE$ph$p_length(come_params_745)-1) {
                buffer_append_str(buf_854,",");
            }
            j_855++;
        }
        come_call_finalizer3(o2_saved_856,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_854,")");
        come_value2_858=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1122, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_value2_858->var=((void*)0);
        if(        obj_type_597->mAnyClass&&string_operator_equals(fun_name_586,"get_hash_key")) {
            __dec_obj143=come_value2_858->c_value;
            come_value2_858->c_value=(char*)come_increment_ref_count(xsprintf("come_call_get_hash_key((void*)0, %s)",obj_value_596->c_value));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj144=come_value2_858->type;
            come_value2_858->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1127, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_858->type->mUnsigned=(_Bool)1;
        }
        else if(        obj_type_597->mAnyClass&&string_operator_equals(fun_name_586,"equals")) {
            __dec_obj145=come_value2_858->c_value;
            come_value2_858->c_value=(char*)come_increment_ref_count(xsprintf("come_call_equals((void*)0, %s, %s)",obj_value_596->c_value,((struct CVALUE*)(__right_value716=list$1CVALUE$ph$p_operator_load_element(come_params_745,1)))->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(__right_value716,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj146=come_value2_858->type;
            come_value2_858->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1132, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_858->type->mUnsigned=(_Bool)1;
        }
        else {
            __dec_obj147=come_value2_858->c_value;
            come_value2_858->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_854));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            generics_any_child_859=(_Bool)0;
            obj_type2_860=(struct sType*)come_increment_ref_count(obj_type_597);
            if(            obj_type2_860->mNoSolvedGenericsType) {
                __dec_obj148=obj_type2_860;
                obj_type2_860=(struct sType*)come_increment_ref_count(obj_type2_860->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_861=(struct list$1sType$ph*)come_increment_ref_count((obj_type2_860->mGenericsTypes)),it_862=list$1sType$ph$p_begin((o2_saved_861));                !list$1sType$ph$p_end((o2_saved_861));                it_862=list$1sType$ph$p_next((o2_saved_861))                ){
                    if(                    it_862->mAnyOriginalType) {
                        generics_any_child_859=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_861,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            result_type2_730->mAnyOriginalType&&generics_fun_689&&obj_type_597->mNoSolvedGenericsType) {
                obj_type2_863=(struct sType*)come_increment_ref_count(obj_type_597->mNoSolvedGenericsType);
                __dec_obj149=result_type2_730;
                result_type2_730=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_689->mResultType,obj_type2_863,info));
                come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj150=come_value2_858->type;
                come_value2_858->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_730));
                come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_858->type->mStatic=(_Bool)0;
                if(                result_type2_730->mHeap) {
                    append_object_to_right_values2(come_value2_858,(struct sType*)come_increment_ref_count(result_type2_730),info,(_Bool)0);
                }
                come_call_finalizer3(obj_type2_863,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            generics_fun_689&&generics_any_child_859) {
                __dec_obj151=result_type2_730;
                result_type2_730=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_689->mResultType,obj_type2_860,info));
                come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj152=come_value2_858->type;
                come_value2_858->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_730));
                come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_858->type->mStatic=(_Bool)0;
                if(                result_type2_730->mHeap) {
                    append_object_to_right_values2(come_value2_858,(struct sType*)come_increment_ref_count(result_type2_730),info,(_Bool)0);
                }
            }
            else {
                __dec_obj153=come_value2_858->type;
                come_value2_858->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_730));
                come_call_finalizer3(__dec_obj153,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_858->type->mStatic=(_Bool)0;
                if(                result_type2_730->mHeap) {
                    append_object_to_right_values2(come_value2_858,(struct sType*)come_increment_ref_count(result_type2_730),info,(_Bool)0);
                }
            }
            __dec_obj154=come_value2_858->c_value;
            come_value2_858->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_858->c_value,come_value2_858->type,info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj155=come_value2_858;
            come_value2_858=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_858),info));
            come_call_finalizer3(__dec_obj155,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(obj_type2_860,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        add_come_last_code(info,"%s",come_value2_858->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_858));
        if(        is_contained_method_generics_types(obj_type_597,info)&&generics_fun_name_690) {
            map$2char$phsFun$ph$p_remove(info->funcs,((char*)(__right_value729=__builtin_string(generics_fun_name_690))));
            (__right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj156=info->method_generics_types;
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_594);
        come_call_finalizer3(__dec_obj156,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_691;
        (generics_fun_name_690 = come_decrement_ref_count2(generics_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_731,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_checking_param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_745,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_854,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_858,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__427 = (_Bool)1;
    (fun_name_586 = come_decrement_ref_count2(fun_name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_587,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((obj_588) ? obj_588 = come_decrement_ref_count2(obj_588, ((struct sNode*)obj_588)->finalize, ((struct sNode*)obj_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(method_block_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_592,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_594,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__427;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__343;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_576;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_577;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__348;
    if(    self==((void*)0)) {
        __result_obj__343 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__343,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__343;
    }
    result_576=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1404, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_577=self->head;
    while(it_577!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_576,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_577->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_576,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_577->item)));
        }
        it_577=it_577->next;
    }
    __result_obj__348 = come_increment_ref_count(result_576);
    come_call_finalizer3(result_576,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__348,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__348;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_574;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_575;
    it_574=self->head;
    while(it_574!=((void*)0)) {
        prev_it_575=it_574;
        it_574=it_574->next;
        come_call_finalizer3(prev_it_575,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__344;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__344 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__344,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__344;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value443 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_578;
struct tuple2$2char$phsNode$ph* __dec_obj90;
void* __right_value444 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_579;
struct tuple2$2char$phsNode$ph* __dec_obj91;
void* __right_value445 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_580;
struct tuple2$2char$phsNode$ph* __dec_obj92;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__345;
    if(    self->len==0) {
        litem_578=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value443=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1423, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_578->prev=((void*)0);
        litem_578->next=((void*)0);
        __dec_obj90=litem_578->item;
        litem_578->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_578;
        self->head=litem_578;
    }
    else if(    self->len==1) {
        litem_579=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value444=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1433, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_579->prev=self->head;
        litem_579->next=((void*)0);
        __dec_obj91=litem_579->item;
        litem_579->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_579;
        self->head->next=litem_579;
    }
    else {
        litem_580=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value445=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1443, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_580->prev=self->tail;
        litem_580->next=((void*)0);
        __dec_obj92=litem_580->item;
        litem_580->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_580;
        self->tail=litem_580;
    }
    self->len++;
    __result_obj__345 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__345;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__346;
void* __right_value446 = (void*)0;
struct tuple2$2char$phsNode$ph* result_581;
void* __right_value447 = (void*)0;
char* __dec_obj93;
void* __right_value448 = (void*)0;
struct sNode* __dec_obj94;
struct tuple2$2char$phsNode$ph* __result_obj__347;
    if(    self==(void*)0) {
        __result_obj__346 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__346,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__346;
    }
    result_581=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj93=result_581->v1;
        result_581->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj94=result_581->v2;
        result_581->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__347 = come_increment_ref_count(result_581);
    come_call_finalizer3(result_581,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__347,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__347;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_582;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_583;
    it_582=self->head;
    while(it_582!=((void*)0)) {
        prev_it_583=it_582;
        it_582=it_582->next;
        come_call_finalizer3(prev_it_583,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__349;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1sType$ph* result_584;
struct list_item$1sType$ph* it_585;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1sType$ph* __result_obj__350;
    if(    self==((void*)0)) {
        __result_obj__349 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__349,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__349;
    }
    result_584=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1404, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_585=self->head;
    while(it_585!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_584,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_585->item)));
        }
        else {
            list$1sType$ph$p_add(result_584,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_585->item)));
        }
        it_585=it_585->next;
    }
    __result_obj__350 = come_increment_ref_count(result_584);
    come_call_finalizer3(result_584,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__350,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__350;
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__354;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__354 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__354,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__354;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_612;
int i_613;
struct CVALUE* __result_obj__356;
struct CVALUE* default_value_614;
struct CVALUE* __result_obj__357;
default_value_614 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_612=self->head;
    i_613=0;
    while(it_612!=((void*)0)) {
        if(        position==i_613) {
            __result_obj__356 = come_increment_ref_count(it_612->item);
            come_call_finalizer3(__result_obj__356,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__356;
        }
        it_612=it_612->next;
        i_613++;
    }
    memset(&default_value_614,0,sizeof(struct CVALUE*));
    __result_obj__357 = come_increment_ref_count(default_value_614);
    come_call_finalizer3(default_value_614,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__357,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__357;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_627;
struct tuple2$2char$phsNode$ph* __result_obj__358;
struct tuple2$2char$phsNode$ph* __result_obj__359;
struct tuple2$2char$phsNode$ph* result_628;
struct tuple2$2char$phsNode$ph* __result_obj__360;
result_627 = (void*)0;
result_628 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_627,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__358 = result_627;
        return __result_obj__358;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__359 = self->it->item;
        return __result_obj__359;
    }
    memset(&result_628,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__360 = result_628;
    return __result_obj__360;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_630;
struct tuple2$2char$phsNode$ph* __result_obj__361;
struct tuple2$2char$phsNode$ph* __result_obj__362;
struct tuple2$2char$phsNode$ph* result_631;
struct tuple2$2char$phsNode$ph* __result_obj__363;
result_630 = (void*)0;
result_631 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_630,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__361 = result_630;
        return __result_obj__361;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__362 = self->it->item;
        return __result_obj__362;
    }
    memset(&result_631,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__363 = result_631;
    return __result_obj__363;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_661;
struct tuple2$2char$phsType$ph* __result_obj__366;
struct tuple2$2char$phsType$ph* __result_obj__367;
struct tuple2$2char$phsType$ph* result_662;
struct tuple2$2char$phsType$ph* __result_obj__368;
result_661 = (void*)0;
result_662 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_661,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__366 = result_661;
        return __result_obj__366;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__367 = self->it->item;
        return __result_obj__367;
    }
    memset(&result_662,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__368 = result_662;
    return __result_obj__368;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_664;
struct tuple2$2char$phsType$ph* __result_obj__369;
struct tuple2$2char$phsType$ph* __result_obj__370;
struct tuple2$2char$phsType$ph* result_665;
struct tuple2$2char$phsType$ph* __result_obj__371;
result_664 = (void*)0;
result_665 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_664,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__369 = result_664;
        return __result_obj__369;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__370 = self->it->item;
        return __result_obj__370;
    }
    memset(&result_665,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__371 = result_665;
    return __result_obj__371;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_682;
struct CVALUE* __result_obj__374;
struct CVALUE* __result_obj__375;
struct CVALUE* result_683;
struct CVALUE* __result_obj__376;
result_682 = (void*)0;
result_683 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_682,0,sizeof(struct CVALUE*));
        __result_obj__374 = result_682;
        return __result_obj__374;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__375 = self->it->item;
        return __result_obj__375;
    }
    memset(&result_683,0,sizeof(struct CVALUE*));
    __result_obj__376 = result_683;
    return __result_obj__376;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_685;
struct CVALUE* __result_obj__377;
struct CVALUE* __result_obj__378;
struct CVALUE* result_686;
struct CVALUE* __result_obj__379;
result_685 = (void*)0;
result_686 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_685,0,sizeof(struct CVALUE*));
        __result_obj__377 = result_685;
        return __result_obj__377;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__378 = self->it->item;
        return __result_obj__378;
    }
    memset(&result_686,0,sizeof(struct CVALUE*));
    __result_obj__379 = result_686;
    return __result_obj__379;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_703;
unsigned int hash_704;
unsigned int it_705;
struct sFun* __result_obj__380;
struct sFun* __result_obj__381;
struct sFun* __result_obj__382;
struct sFun* __result_obj__383;
default_value_703 = (void*)0;
    memset(&default_value_703,0,sizeof(struct sFun*));
    hash_704=string_get_hash_key(((char*)key))%self->size;
    it_705=hash_704;
    while((_Bool)1) {
        if(        self->item_existance[it_705]) {
            if(            string_equals(self->keys[it_705],key)) {
                __result_obj__380 = come_increment_ref_count(self->items[it_705]);
                come_call_finalizer3(default_value_703,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__380,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__380;
            }
            it_705++;
            if(            it_705>=self->size) {
                it_705=0;
            }
            else if(            it_705==hash_704) {
                __result_obj__381 = come_increment_ref_count(default_value_703);
                come_call_finalizer3(default_value_703,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__381,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__381;
            }
        }
        else {
            __result_obj__382 = come_increment_ref_count(default_value_703);
            come_call_finalizer3(default_value_703,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__382,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__382;
        }
    }
    __result_obj__383 = come_increment_ref_count(default_value_703);
    come_call_finalizer3(default_value_703,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__383,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__383;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__388;
void* __right_value559 = (void*)0;
struct sMethodCallNode* result_725;
void* __right_value560 = (void*)0;
char* __dec_obj118;
void* __right_value561 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value562 = (void*)0;
char* __dec_obj120;
void* __right_value563 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj121;
void* __right_value564 = (void*)0;
struct buffer* __dec_obj122;
void* __right_value565 = (void*)0;
struct list$1sType$ph* __dec_obj123;
struct sMethodCallNode* __result_obj__389;
    if(    self==(void*)0) {
        __result_obj__388 = (void*)0;
        return __result_obj__388;
    }
    result_725=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_725->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_725->sname;
        result_725->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_725->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj119=result_725->obj;
        result_725->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj120=result_725->fun_name;
        result_725->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj121=result_725->params;
        result_725->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj121,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj122=result_725->method_block;
        result_725->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj122,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_725->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj123=result_725->method_generics_types;
        result_725->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj123,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_725->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_725->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_725->fun=self->fun;
    }
    __result_obj__389 = result_725;
    come_call_finalizer3(result_725,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__389;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value586 = (void*)0;
struct list_item$1CVALUE$ph* litem_747;
struct CVALUE* __dec_obj124;
void* __right_value587 = (void*)0;
struct list_item$1CVALUE$ph* litem_748;
struct CVALUE* __dec_obj125;
void* __right_value588 = (void*)0;
struct list_item$1CVALUE$ph* litem_749;
struct CVALUE* __dec_obj126;
struct list$1CVALUE$ph* __result_obj__394;
    if(    self->len==0) {
        litem_747=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value586=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1423, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_747->prev=((void*)0);
        litem_747->next=((void*)0);
        __dec_obj124=litem_747->item;
        litem_747->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_747;
        self->head=litem_747;
    }
    else if(    self->len==1) {
        litem_748=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value587=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1433, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_748->prev=self->head;
        litem_748->next=((void*)0);
        __dec_obj125=litem_748->item;
        litem_748->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_748;
        self->head->next=litem_748;
    }
    else {
        litem_749=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value588=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1443, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_749->prev=self->tail;
        litem_749->next=((void*)0);
        __dec_obj126=litem_749->item;
        litem_749->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_749;
        self->tail=litem_749;
    }
    self->len++;
    __result_obj__394 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__394;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_757;
char* __result_obj__395;
char* __result_obj__396;
char* result_758;
char* __result_obj__397;
result_757 = (void*)0;
result_758 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_757,0,sizeof(char*));
        __result_obj__395 = result_757;
        return __result_obj__395;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__396 = self->it->item;
        return __result_obj__396;
    }
    memset(&result_758,0,sizeof(char*));
    __result_obj__397 = result_758;
    return __result_obj__397;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_760;
char* __result_obj__398;
char* __result_obj__399;
char* result_761;
char* __result_obj__400;
result_760 = (void*)0;
result_761 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_760,0,sizeof(char*));
        __result_obj__398 = result_760;
        return __result_obj__398;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__399 = self->it->item;
        return __result_obj__399;
    }
    memset(&result_761,0,sizeof(char*));
    __result_obj__400 = result_761;
    return __result_obj__400;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_766;
int i_767;
struct CVALUE* default_value_768;
struct list$1CVALUE$ph* __result_obj__403;
struct list_item$1CVALUE$ph* it_769;
int i_770;
struct CVALUE* __dec_obj127;
struct list$1CVALUE$ph* __result_obj__404;
default_value_768 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_766=self->len;
        for(        i_767=0;        i_767<position-len_766;        i_767++        ){
            memset(&default_value_768,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_768));
            come_call_finalizer3(default_value_768,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__403 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__403;
    }
    it_769=self->head;
    i_770=0;
    while(it_769!=((void*)0)) {
        if(        position==i_770) {
            __dec_obj127=it_769->item;
            it_769->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj127,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_769=it_769->next;
        i_770++;
    }
    __result_obj__404 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__404;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_778;
int i_779;
char* __result_obj__406;
char* default_value_780;
char* __result_obj__407;
default_value_780 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_778=self->head;
    i_779=0;
    while(it_778!=((void*)0)) {
        if(        position==i_779) {
            __result_obj__406 = come_increment_ref_count(it_778->item);
            (__result_obj__406 = come_decrement_ref_count2(__result_obj__406, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__406;
        }
        it_778=it_778->next;
        i_779++;
    }
    memset(&default_value_780,0,sizeof(char*));
    __result_obj__407 = come_increment_ref_count(default_value_780);
    (default_value_780 = come_decrement_ref_count2(default_value_780, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__407 = come_decrement_ref_count2(__result_obj__407, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__407;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_792;
struct sNode* __result_obj__411;
struct sNode* __result_obj__412;
struct sNode* result_793;
struct sNode* __result_obj__413;
result_792 = (void*)0;
result_793 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_792,0,sizeof(struct sNode*));
        __result_obj__411 = result_792;
        return __result_obj__411;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__412 = self->it->item;
        return __result_obj__412;
    }
    memset(&result_793,0,sizeof(struct sNode*));
    __result_obj__413 = result_793;
    return __result_obj__413;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_795;
struct sNode* __result_obj__414;
struct sNode* __result_obj__415;
struct sNode* result_796;
struct sNode* __result_obj__416;
result_795 = (void*)0;
result_796 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_795,0,sizeof(struct sNode*));
        __result_obj__414 = result_795;
        return __result_obj__414;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__415 = self->it->item;
        return __result_obj__415;
    }
    memset(&result_796,0,sizeof(struct sNode*));
    __result_obj__416 = result_796;
    return __result_obj__416;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value632 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_802;
struct tuple2$2char$phsNode$ph* __dec_obj130;
void* __right_value633 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_803;
struct tuple2$2char$phsNode$ph* __dec_obj131;
void* __right_value634 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_804;
struct tuple2$2char$phsNode$ph* __dec_obj132;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__418;
    if(    self->len==0) {
        litem_802=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value632=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1493, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_802->prev=((void*)0);
        litem_802->next=((void*)0);
        __dec_obj130=litem_802->item;
        litem_802->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj130,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_802;
        self->head=litem_802;
    }
    else if(    self->len==1) {
        litem_803=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value633=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1503, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_803->prev=self->head;
        litem_803->next=((void*)0);
        __dec_obj131=litem_803->item;
        litem_803->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj131,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_803;
        self->head->next=litem_803;
    }
    else {
        litem_804=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value634=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1513, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_804->prev=self->tail;
        litem_804->next=((void*)0);
        __dec_obj132=litem_804->item;
        litem_804->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj132,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_804;
        self->tail=litem_804;
    }
    self->len++;
    __result_obj__418 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__418;
}

static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value732 = (void*)0;
struct sNode* node_864;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj157;
struct sNode* __result_obj__428;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1204, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value731=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1204, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMethodCallNode_finalize;
    _inf_value4->clone=(void*)sMethodCallNode_clone;
    _inf_value4->compile=(void*)sMethodCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMethodCallNode_terminated;
    _inf_value4->kind=(void*)sMethodCallNode_kind;
    node_864=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value731,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj157=node_864;
    node_864=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_864),info));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__428 = come_increment_ref_count(node_864);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_864) ? node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__428) ? __result_obj__428 = come_decrement_ref_count2(__result_obj__428, ((struct sNode*)__result_obj__428)->finalize, ((struct sNode*)__result_obj__428)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__428;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_865;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
_Bool parse_method_generics_type_867;
char* p_868;
int sline_869;
void* __right_value739 = (void*)0;
char* word_870;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1sType$ph* method_generics_types_871;
void* __right_value742 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_872=0;
char* Err_873=0;
void* __right_value743 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_874=0;
char* name_875=0;
_Bool err_876=0;
void* __right_value744 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c7_877=0;
char* Err_878=0;
void* __right_value745 = (void*)0;
char* p_879;
int sline_880;
_Bool err_flag_881;
void* __right_value746 = (void*)0;
char* label_882;
void* __right_value747 = (void*)0;
char* __dec_obj160;
char* __dec_obj161;
_Bool no_comma_883;
_Bool in_fun_param_884;
void* __right_value748 = (void*)0;
struct sNode* node_885;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj162;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct buffer* method_block_886;
int method_block_sline_887;
char* head_888;
void* __right_value752 = (void*)0;
char* tail_889;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct buffer* __dec_obj163;
int len_890;
void* __right_value755 = (void*)0;
char* mem_891;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sNode* _inf_value5;
struct sMethodCallNode* _inf_obj_value5;
void* __right_value759 = (void*)0;
struct sNode* node_892;
void* __right_value760 = (void*)0;
struct sNode* __dec_obj164;
struct sNode* __result_obj__430;
    params_865=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 1213, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_865,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1214, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_867=(_Bool)0;
    {
        p_868=info->p;
        sline_869=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_870=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_870,info)) {
                    parse_method_generics_type_867=(_Bool)1;
                }
                (word_870 = come_decrement_ref_count2(word_870, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_868;
        info->sline=sline_869;
    }
    method_generics_types_871=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 1244, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    parse_method_generics_type_867&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value742=err_msg(info,"unexpected source end")));
                come_exception_var_c6_872=multiple_assign_var36->v1;
                Err_873=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                ((Err_873)?(puts(Err_873),exit(0)):(0));
                come_call_finalizer3(__right_value742,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_873 = come_decrement_ref_count2(Err_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value743=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_874=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
                name_875=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                err_876=multiple_assign_var37->v3;
                come_call_finalizer3(__right_value743,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_876) {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value744=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c7_877=multiple_assign_var38->v1;
                    Err_878=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_878)?(puts(Err_878),exit(0)):(0));
                    come_call_finalizer3(__right_value744,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_878 = come_decrement_ref_count2(Err_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph$p_push_back(method_generics_types_871,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_874)));
                come_call_finalizer3(type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_875 = come_decrement_ref_count2(name_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_879=info->p;
            sline_880=info->sline;
            err_flag_881=(_Bool)0;
            label_882=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj160=label_882;
                label_882=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_881=(_Bool)1;
            }
            if(            err_flag_881==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj161=label_882;
                label_882=((void*)0);
                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_879;
                info->sline=sline_880;
            }
            no_comma_883=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_884=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_885=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj162=node_885;
            node_885=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_885),info));
            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_884;
            info->no_comma=no_comma_883;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_865,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1320, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_882),(struct sNode*)come_increment_ref_count(node_885))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_882 = come_decrement_ref_count2(label_882, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_885) ? node_885 = come_decrement_ref_count2(node_885, ((struct sNode*)node_885)->finalize, ((struct sNode*)node_885)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_882 = come_decrement_ref_count2(label_882, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_885) ? node_885 = come_decrement_ref_count2(node_885, ((struct sNode*)node_885)->finalize, ((struct sNode*)node_885)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_886=((void*)0);
    method_block_sline_887=0;
    if(    *info->p==123) {
        head_888=info->p;
        method_block_sline_887=info->sline;
        ((char*)(__right_value752=skip_block(info)));
        (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_889=info->p;
        __dec_obj163=method_block_886;
        method_block_886=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1344, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_890=tail_889-head_888;
        mem_891=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_890+1)), "20method.c", 1347, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_891,head_888,len_890);
        mem_891[len_890]=0;
        buffer_append_str(method_block_886,mem_891);
        buffer_append_str(method_block_886,"\n");
        (mem_891 = come_decrement_ref_count2(mem_891, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1359, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value758=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1359, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_865),method_block_886,method_block_sline_887,method_generics_types_871,(_Bool)0,(_Bool)1,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    node_892=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value758,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj164=node_892;
    node_892=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_892),info));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__430 = come_increment_ref_count(node_892);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_865,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_871,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_886,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_892) ? node_892 = come_decrement_ref_count2(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__430) ? __result_obj__430 = come_decrement_ref_count2(__result_obj__430, ((struct sNode*)__result_obj__430)->finalize, ((struct sNode*)__result_obj__430)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__430;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_866;
    result_866=0;
    result_866+=int_get_hash_key(((int)self->v1));
    result_866+=int_get_hash_key(((int)self->v2));
    return result_866;
}

static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj158;
struct sNode* __dec_obj159;
struct tuple2$2char$phsNode$ph* __result_obj__429;
    __dec_obj158=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj159=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__429 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__429,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__429;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode* _inf_obj_value6;
void* __right_value763 = (void*)0;
struct sNode* __result_obj__431;
void* __right_value764 = (void*)0;
struct sNode* __result_obj__432;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1369, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value762=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1369, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sCurrentNode_finalize;
        _inf_value6->clone=(void*)sCurrentNode_clone;
        _inf_value6->compile=(void*)sCurrentNode_compile;
        _inf_value6->sline=(void*)sCurrentNode_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sCurrentNode_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sCurrentNode_kind;
        __result_obj__431 = come_increment_ref_count(((struct sNode*)(__right_value763=_inf_value6)));
        come_call_finalizer3(__right_value762,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value763) ? __right_value763 = come_decrement_ref_count2(__right_value763, ((struct sNode*)__right_value763)->finalize, ((struct sNode*)__right_value763)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__431) ? __result_obj__431 = come_decrement_ref_count2(__result_obj__431, ((struct sNode*)__result_obj__431)->finalize, ((struct sNode*)__result_obj__431)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__431;
    }
    __result_obj__432 = come_increment_ref_count(((struct sNode*)(__right_value764=string_node_v17(buf,head,head_sline,info))));
    ((__right_value764) ? __right_value764 = come_decrement_ref_count2(__right_value764, ((struct sNode*)__right_value764)->finalize, ((struct sNode*)__right_value764)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__432) ? __result_obj__432 = come_decrement_ref_count2(__result_obj__432, ((struct sNode*)__result_obj__432)->finalize, ((struct sNode*)__result_obj__432)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__432;
}

