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
    struct sMemHeaderTiny* mFreeMem[4096];
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
    struct list$1char$ph* key_list;
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
    struct list$1char$ph* key_list;
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
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
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

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNode$ph* mElifExpressionNodes;
    struct list$1sBlock$ph* mElifBlocks;
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
    struct list$1sNode$ph* multiple_node;
    _Bool in_rescue;
};

struct list$1sRightValueObject$ph* gExceptionRightValueObjects=(void*)0;
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
static struct smart_pointer$1char$* smart_pointer$1char$_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
int transpile(struct sInfo* info);
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
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
struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNode$ph* multiple_node, _Bool in_rescue, struct sInfo* info);
_Bool sMultipleNode_terminated(struct sMultipleNode* self);
char* sMultipleNode_kind(struct sMultipleNode* self);
_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info);
static void sMultipleNode_finalize(struct sMultipleNode* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info);
_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self);
char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self);
_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info);
static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info);
_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self);
char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self);
_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info);
static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self);
static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list_item$1sNode$ph_equals(struct list_item$1sNode$ph* left, struct list_item$1sNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
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

static struct smart_pointer$1char$* smart_pointer$1char$_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__62;
    __dec_obj13=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__62 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__65;
    __dec_obj14=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__65 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__67;
    __dec_obj15=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__67 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__67,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__67;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__69;
    __dec_obj16=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__69 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__72;
    __dec_obj17=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__72 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__77;
    __dec_obj18=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__77 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__79;
    __dec_obj19=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__79 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__79,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__79;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_139;
struct list$1char$* __result_obj__82;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1char$_push_back(self,values[i_139]);
    }
    __result_obj__82 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_140;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_141;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_142;
struct list$1char$* __result_obj__81;
    if(    self->len==0) {
        litem_140=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1274, "struct list_item$1char$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1284, "struct list_item$1char$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1294, "struct list_item$1char$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__81 = self;
    return __result_obj__81;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_143;
struct list_item$1char$* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_145;
struct list$1char$p* __result_obj__85;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1char$p_push_back(self,values[i_145]);
    }
    __result_obj__85 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_146;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_147;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_148;
struct list$1char$p* __result_obj__84;
    if(    self->len==0) {
        litem_146=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1274, "struct list_item$1char$p*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1284, "struct list_item$1char$p*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1294, "struct list_item$1char$p*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__84 = self;
    return __result_obj__84;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_149;
struct list_item$1char$p* prev_it_150;
    it_149=self->head;
    while(it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_151;
struct list$1short$* __result_obj__88;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1short$_push_back(self,values[i_151]);
    }
    __result_obj__88 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_152;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_153;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_154;
struct list$1short$* __result_obj__87;
    if(    self->len==0) {
        litem_152=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1274, "struct list_item$1short$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1284, "struct list_item$1short$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1294, "struct list_item$1short$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__87 = self;
    return __result_obj__87;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_155;
struct list_item$1short$* prev_it_156;
    it_155=self->head;
    while(it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_157;
struct list$1int$* __result_obj__91;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1int$_push_back(self,values[i_157]);
    }
    __result_obj__91 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__91,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_158;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_159;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_160;
struct list$1int$* __result_obj__90;
    if(    self->len==0) {
        litem_158=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1274, "struct list_item$1int$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1284, "struct list_item$1int$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1294, "struct list_item$1int$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_161;
struct list_item$1int$* prev_it_162;
    it_161=self->head;
    while(it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_163;
struct list$1long$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_163=0;    i_163<num_value;    i_163++    ){
        list$1long$_push_back(self,values[i_163]);
    }
    __result_obj__94 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__94,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_164;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_165;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_166;
struct list$1long$* __result_obj__93;
    if(    self->len==0) {
        litem_164=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1274, "struct list_item$1long$*"))));
        litem_164->prev=((void*)0);
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head=litem_164;
    }
    else if(    self->len==1) {
        litem_165=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1284, "struct list_item$1long$*"))));
        litem_165->prev=self->head;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head->next=litem_165;
    }
    else {
        litem_166=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1294, "struct list_item$1long$*"))));
        litem_166->prev=self->tail;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail->next=litem_166;
        self->tail=litem_166;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_167;
struct list_item$1long$* prev_it_168;
    it_167=self->head;
    while(it_167!=((void*)0)) {
        prev_it_168=it_167;
        it_167=it_167->next;
        /*c*/ come_call_finalizer3(prev_it_168,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_169;
struct list$1float$* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_169=0;    i_169<num_value;    i_169++    ){
        list$1float$_push_back(self,values[i_169]);
    }
    __result_obj__97 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__97,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_170;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_171;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_172;
struct list$1float$* __result_obj__96;
    if(    self->len==0) {
        litem_170=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1274, "struct list_item$1float$*"))));
        litem_170->prev=((void*)0);
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head=litem_170;
    }
    else if(    self->len==1) {
        litem_171=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1284, "struct list_item$1float$*"))));
        litem_171->prev=self->head;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head->next=litem_171;
    }
    else {
        litem_172=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1294, "struct list_item$1float$*"))));
        litem_172->prev=self->tail;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail->next=litem_172;
        self->tail=litem_172;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_173;
struct list_item$1float$* prev_it_174;
    it_173=self->head;
    while(it_173!=((void*)0)) {
        prev_it_174=it_173;
        it_173=it_173->next;
        /*c*/ come_call_finalizer3(prev_it_174,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_175;
struct list$1double$* __result_obj__100;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1double$_push_back(self,values[i_175]);
    }
    __result_obj__100 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__100,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_176;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_177;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_178;
struct list$1double$* __result_obj__99;
    if(    self->len==0) {
        litem_176=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1274, "struct list_item$1double$*"))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1284, "struct list_item$1double$*"))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1294, "struct list_item$1double$*"))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__99 = self;
    return __result_obj__99;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_179;
struct list_item$1double$* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*c*/ come_call_finalizer3(prev_it_180,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__138;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__138 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__138,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__138;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_214;
struct list_item$1char$ph* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        /*c*/ come_call_finalizer3(prev_it_215,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value173 = (void*)0;
struct list_item$1char$ph* litem_219;
char* __dec_obj20;
void* __right_value174 = (void*)0;
struct list_item$1char$ph* litem_220;
char* __dec_obj21;
void* __right_value175 = (void*)0;
struct list_item$1char$ph* litem_221;
char* __dec_obj22;
struct list$1char$ph* __result_obj__140;
    if(    self->len==0) {
        litem_219=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value173=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1274, "struct list_item$1char$ph*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        __dec_obj20=litem_219->item,
        litem_219->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1) {
        litem_220=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value174=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1284, "struct list_item$1char$ph*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        __dec_obj21=litem_220->item,
        litem_220->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value175=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1294, "struct list_item$1char$ph*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        __dec_obj22=litem_221->item,
        litem_221->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__140 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__140;
}

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __right_value231 = (void*)0;
void* __right_value233 = (void*)0;
struct sNode* __dec_obj23;
void* __right_value306 = (void*)0;
struct sBlock* __dec_obj57;
void* __right_value307 = (void*)0;
struct list$1sNode$ph* __dec_obj58;
void* __right_value315 = (void*)0;
struct list$1sBlock$ph* __dec_obj62;
void* __right_value316 = (void*)0;
struct sBlock* __dec_obj63;
struct sBlock* __dec_obj64;
struct sIfNode* __result_obj__249;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value231,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj23=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj57=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    /*b*/ come_call_finalizer3(__dec_obj57,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj58=self->mElifExpressionNodes,
    self->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, elif_expression_nodes));
    /*b*/ come_call_finalizer3(__dec_obj58,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj62=self->mElifBlocks,
    self->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, elif_blocks));
    /*b*/ come_call_finalizer3(__dec_obj62,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj63=self->mElseBlock,
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, else_block));
        /*b*/ come_call_finalizer3(__dec_obj63,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj64=self->mElseBlock,
        self->mElseBlock=((void*)0);
        /*b*/ come_call_finalizer3(__dec_obj64,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__249 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sIfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __right_value317 = (void*)0;
char* __result_obj__250;
    __result_obj__250 = come_increment_ref_count(((char*)(__right_value317=__builtin_string("sIfNode"))));
    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__250 = come_decrement_ref_count(__result_obj__250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__250;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_365;
int i_366;
void* __right_value318 = (void*)0;
_Bool _if_conditional1;
void* __right_value319 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_370=0;
char* Err_371=0;
_Bool _if_conditional2;
_Bool __result_obj__253;
struct sBlock* else_block_372;
int elif_num_373;
_Bool guard__374;
char* if_result_var_name_375;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sType* if_result_type_376;
void* __right_value323 = (void*)0;
char* __dec_obj65;
void* __right_value324 = (void*)0;
struct sVar* var__378;
void* __right_value325 = (void*)0;
struct sNode* expression_node_379;
int sline_380;
char* sname_381;
_Bool comma_instead_of_semicolon_before_382;
_Bool without_semicolon_383;
_Bool Value_384;
_Bool __result_obj__254;
struct sBlock* if_block_385;
_Bool normal_if_386;
void* __right_value326 = (void*)0;
struct CVALUE* conditional_value_387;
struct sVar* var__388;
int num_if_conditional_stack_390;
void* __right_value327 = (void*)0;
struct CVALUE* conditional_value_391;
struct sVar* var__392;
int i_393;
void* __right_value328 = (void*)0;
struct sNode* expression_node2_394;
_Bool comma_instead_of_semicolon_before_398;
_Bool without_semicolon_399;
_Bool Value_400;
_Bool __result_obj__257;
void* __right_value329 = (void*)0;
struct sBlock* elif_node_block_401;
_Bool normal_if_402;
void* __right_value330 = (void*)0;
struct CVALUE* conditional_value_403;
void* __right_value331 = (void*)0;
struct CVALUE* conditional_value_404;
int num_elif_conditional_stack_406;
struct sVar* var__407;
int __exception_result_var_b1;
void* __right_value332 = (void*)0;
struct sNode* result_node_408;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sNode* __dec_obj66;
_Bool Value_409;
_Bool __result_obj__258;
void* __right_value335 = (void*)0;
struct CVALUE* come_value2_410;
void* __right_value336 = (void*)0;
struct sType* __dec_obj67;
char* __dec_obj71;
_Bool __result_obj__260;
    existance_of_result_value_365=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_365=(_Bool)0;
        }
        for(        i_366=0;        i_366<self->mElifNum;        i_366++        ){
            if(            (_if_conditional1=(!((struct sBlock*)(__right_value318=list$1sBlock$ph$p_operator_load_element(self->mElifBlocks,i_366)))->mOmitSemicolon)),            /*c*/ come_call_finalizer3(__right_value318,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                existance_of_result_value_365=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_365=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value319=err_msg(info,"In conditional operator comelang can't use if statment")));
        come_exception_var_1_370=multiple_assign_var1->v1;
        Err_371=(char*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        (_if_conditional2=(Err_371)),        /*c*/ come_call_finalizer3(__right_value319,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            __result_obj__253 = (_Bool)1;
            (Err_371 = come_decrement_ref_count(Err_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__253;
        }
        else {
        }
        (Err_371 = come_decrement_ref_count(Err_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else_block_372=self->mElseBlock;
    elif_num_373=self->mElifNum;
    guard__374=self->mGuard;
    if_result_var_name_375=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_365) {
        if_result_type_376=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "08if.c", 70, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        static int var_num_377=0;
        __dec_obj65=info->if_result_var_name,
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_377++));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, if_result_type_376)),info,(_Bool)0);
        var__378=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value325=make_define_var(var__378->mType,var__378->mCValueName,(_Bool)0,info))));
        (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(if_result_type_376,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    expression_node_379=self->mExpressionNode;
    sline_380=info->sline;
    sname_381=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_382=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    without_semicolon_383=info->without_semicolon;
    info->without_semicolon=(_Bool)1;
    Value_384=node_compile(expression_node_379,info);
    if(    !Value_384) {
        __result_obj__254 = (_Bool)0;
        (if_result_var_name_375 = come_decrement_ref_count(if_result_var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__254;
    }
    else {
    }
    info->without_semicolon=without_semicolon_383;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_382;
    if_block_385=self->mIfBlock;
    normal_if_386=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_386=(_Bool)0;
    }
    if(    normal_if_386) {
        conditional_value_387=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        guard__374) {
            var__388=conditional_value_387->var;
            if(            var__388) {
                var__388->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"%s) {\n",conditional_value_387->c_value);
        /*c*/ come_call_finalizer3(conditional_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        static int num_if_conditional_389=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_389);
        num_if_conditional_stack_390=num_if_conditional_389;
        conditional_value_391=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        guard__374) {
            var__392=conditional_value_391->var;
            if(            var__392) {
                var__392->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_389,conditional_value_391->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_390);
        /*c*/ come_call_finalizer3(conditional_value_391,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_block(if_block_385,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_365);
    add_come_code(info,"}\n");
    if(    elif_num_373>0) {
        for(        i_393=0;        i_393<elif_num_373;        i_393++        ){
            expression_node2_394=((struct sNode*)(__right_value328=list$1sNode$ph$p_operator_load_element(self->mElifExpressionNodes,i_393)));
            ((__right_value328) ? __right_value328 = come_decrement_ref_count(__right_value328, ((struct sNode*)__right_value328)->finalize, ((struct sNode*)__right_value328)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_398=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            without_semicolon_399=info->without_semicolon;
            info->without_semicolon=(_Bool)1;
            Value_400=node_compile(expression_node2_394,info);
            if(            !Value_400) {
                __result_obj__257 = (_Bool)0;
                (if_result_var_name_375 = come_decrement_ref_count(if_result_var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__257;
            }
            else {
            }
            info->without_semicolon=without_semicolon_399;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_398;
            elif_node_block_401=((struct sBlock*)(__right_value329=list$1sBlock$ph$p_operator_load_element(self->mElifBlocks,i_393)));
            /*c*/ come_call_finalizer3(__right_value329,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            normal_if_402=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_402=(_Bool)0;
            }
            if(            normal_if_402) {
                conditional_value_403=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s) {\n",conditional_value_403->c_value);
                /*c*/ come_call_finalizer3(conditional_value_403,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                conditional_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                static int num_elif_conditional_405=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_405);
                num_elif_conditional_stack_406=num_elif_conditional_405;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_405,conditional_value_404->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_406);
                /*c*/ come_call_finalizer3(conditional_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            transpile_block(elif_node_block_401,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_365);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_372) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_372,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_365);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_365) {
        var__407=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 206, 0),__exception_result_var_b1=assert_v2(var__407!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_408=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj66=result_node_408,
        result_node_408=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__407->mType)),(struct sNode*)come_increment_ref_count(result_node_408),info));
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        Value_409=node_compile(result_node_408,info);
        if(        !Value_409) {
            __result_obj__258 = (_Bool)0;
            ((result_node_408) ? result_node_408 = come_decrement_ref_count(result_node_408, ((struct sNode*)result_node_408)->finalize, ((struct sNode*)result_node_408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (if_result_var_name_375 = come_decrement_ref_count(if_result_var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__258;
        }
        else {
        }
        come_value2_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj67=come_value2_410->type,
        come_value2_410->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__407->mType));
        /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_410));
        ((result_node_408) ? result_node_408 = come_decrement_ref_count(result_node_408, ((struct sNode*)result_node_408)->finalize, ((struct sNode*)result_node_408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value2_410,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __dec_obj71=info->if_result_var_name,
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_375);
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__260 = (_Bool)1;
    (if_result_var_name_375 = come_decrement_ref_count(if_result_var_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__260;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__197;
void* __right_value232 = (void*)0;
struct sNode* result_274;
struct sNode* __result_obj__198;
    if(    self==(void*)0) {
        __result_obj__197 = come_increment_ref_count((void*)0);
        ((__result_obj__197) ? __result_obj__197 = come_decrement_ref_count(__result_obj__197, ((struct sNode*)__result_obj__197)->finalize, ((struct sNode*)__result_obj__197)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__197;
    }
    result_274=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_274->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_274->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_274->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_274->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_274->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_274->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_274->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_274->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_274->kind=self->kind;
    }
    __result_obj__198 = come_increment_ref_count(result_274);
    ((result_274) ? result_274 = come_decrement_ref_count(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__198) ? __result_obj__198 = come_decrement_ref_count(__result_obj__198, ((struct sNode*)__result_obj__198)->finalize, ((struct sNode*)__result_obj__198)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__198;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__199;
void* __right_value234 = (void*)0;
struct sBlock* result_275;
void* __right_value242 = (void*)0;
struct list$1sNode$ph* __dec_obj27;
void* __right_value305 = (void*)0;
struct sVarTable* __dec_obj56;
struct sBlock* __result_obj__244;
    if(    self==(void*)0) {
        __result_obj__199 = (void*)0;
        return __result_obj__199;
    }
    result_275=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj27=result_275->mNodes,
        result_275->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj27,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj56=result_275->mVarTable,
        result_275->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj56,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__244 = result_275;
    /*c*/ come_call_finalizer3(result_275,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__200;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1sNode$ph* result_278;
struct list_item$1sNode$ph* it_279;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1sNode$ph* __result_obj__203;
    if(    self==((void*)0)) {
        __result_obj__200 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__200,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__200;
    }
    result_278=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_279=self->head;
    while(it_279!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_278,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_279->item)));
        }
        else {
            list$1sNode$ph_add(result_278,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_279->item)));
        }
        it_279=it_279->next;
    }
    __result_obj__203 = come_increment_ref_count(result_278);
    /*c*/ come_call_finalizer3(result_278,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_276;
struct list_item$1sNode$ph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        /*c*/ come_call_finalizer3(prev_it_277,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__201;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__201 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value237 = (void*)0;
struct list_item$1sNode$ph* litem_280;
struct sNode* __dec_obj24;
void* __right_value238 = (void*)0;
struct list_item$1sNode$ph* litem_281;
struct sNode* __dec_obj25;
void* __right_value239 = (void*)0;
struct list_item$1sNode$ph* litem_282;
struct sNode* __dec_obj26;
struct list$1sNode$ph* __result_obj__202;
    if(    self->len==0) {
        litem_280=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value237=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1204, "struct list_item$1sNode$ph*"))));
        litem_280->prev=((void*)0);
        litem_280->next=((void*)0);
        __dec_obj24=litem_280->item,
        litem_280->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_280;
        self->head=litem_280;
    }
    else if(    self->len==1) {
        litem_281=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value238=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1214, "struct list_item$1sNode$ph*"))));
        litem_281->prev=self->head;
        litem_281->next=((void*)0);
        __dec_obj25=litem_281->item,
        litem_281->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_281;
        self->head->next=litem_281;
    }
    else {
        litem_282=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value239=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1224, "struct list_item$1sNode$ph*"))));
        litem_282->prev=self->tail;
        litem_282->next=((void*)0);
        __dec_obj26=litem_282->item,
        litem_282->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_282;
        self->tail=litem_282;
    }
    self->len++;
    __result_obj__202 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__202;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_283;
struct list_item$1sNode$ph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        /*c*/ come_call_finalizer3(prev_it_284,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__204;
void* __right_value243 = (void*)0;
struct sVarTable* result_285;
void* __right_value304 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj55;
struct sVarTable* __result_obj__243;
    if(    self==(void*)0) {
        __result_obj__204 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__204,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__204;
    }
    result_285=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj55=result_285->mVars,
        result_285->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj55,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_285->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_285->mParent=self->mParent;
    }
    __result_obj__243 = come_increment_ref_count(result_285);
    /*c*/ come_call_finalizer3(result_285,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__205;
void* __right_value244 = (void*)0;
void* __right_value250 = (void*)0;
struct map$2char$phsVar$ph* result_293;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1char$ph* __dec_obj29;
char* it_296;
struct sVar* default_value_299;
void* __right_value253 = (void*)0;
struct sVar* it2_302;
void* __right_value259 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__242;
default_value_299 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__205 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__205,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__205;
    }
    result_293=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2160, "struct map$2char$phsVar$ph*"))));
    __dec_obj29=result_293->key_list,
    result_293->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2162, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj29,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_296=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_296=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_299,0,sizeof(struct sVar*));
        it2_302=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_296,(struct sVar*)come_increment_ref_count(default_value_299)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_293,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_296)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_302)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_293,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_296)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_302)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_293,(char*)come_increment_ref_count(it_296),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_302)));
        }
        else {
            map$2char$phsVar$ph_put(result_293,(char*)come_increment_ref_count(it_296),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_302)));
        }
        /*c*/ come_call_finalizer3(default_value_299,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_302,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__242 = come_increment_ref_count(result_293);
    /*c*/ come_call_finalizer3(result_293,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__242,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_286;
int i_289;
    for(    i_286=0;    i_286<self->size;    i_286++    ){
        if(        self->item_existance[i_286]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_286],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_289=0;    i_289<self->size;    i_289++    ){
        if(        self->item_existance[i_289]) {
            if(            1) {
                (self->keys[i_289] = come_decrement_ref_count(self->keys[i_289], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_287;
struct list_item$1sType$ph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        /*c*/ come_call_finalizer3(prev_it_288,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
int i_290;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1char$ph* __dec_obj28;
struct map$2char$phsVar$ph* __result_obj__207;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value245=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2089, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value246=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2090, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value247=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2091, "_Bool*"))));
    for(    i_290=0;    i_290<128;    i_290++    ){
        self->item_existance[i_290]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj28=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2101, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj28,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__207 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__206;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__206 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__206,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_291;
struct list_item$1char$ph* prev_it_292;
    it_291=self->head;
    while(it_291!=((void*)0)) {
        prev_it_292=it_291;
        it_291=it_291->next;
        /*c*/ come_call_finalizer3(prev_it_292,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_294;
char* __result_obj__208;
char* __result_obj__209;
char* result_295;
char* __result_obj__210;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_294,0,sizeof(char*));
        __result_obj__208 = result_294;
        return __result_obj__208;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__209 = self->key_list->it->item;
        return __result_obj__209;
    }
    memset(&result_295,0,sizeof(char*));
    __result_obj__210 = result_295;
    return __result_obj__210;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_297;
char* __result_obj__211;
char* __result_obj__212;
char* result_298;
char* __result_obj__213;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_297,0,sizeof(char*));
        __result_obj__211 = result_297;
        return __result_obj__211;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__212 = self->key_list->it->item;
        return __result_obj__212;
    }
    memset(&result_298,0,sizeof(char*));
    __result_obj__213 = result_298;
    return __result_obj__213;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_300;
unsigned int it_301;
struct sVar* __result_obj__214;
struct sVar* __result_obj__215;
struct sVar* __result_obj__216;
struct sVar* __result_obj__217;
    hash_300=string_get_hash_key(((char*)key))%self->size;
    it_301=hash_300;
    while((_Bool)1) {
        if(        self->item_existance[it_301]) {
            if(            string_equals(self->keys[it_301],key)) {
                __result_obj__214 = come_increment_ref_count(self->items[it_301]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__214,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__214;
            }
            it_301++;
            if(            it_301>=self->size) {
                it_301=0;
            }
            else if(            it_301==hash_300) {
                __result_obj__215 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__215,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__215;
            }
        }
        else {
            __result_obj__216 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__216,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__216;
        }
    }
    __result_obj__217 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_314;
int it_315;
_Bool same_key_exist_332;
char* it2_335;
struct map$2char$phsVar$ph* __result_obj__228;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_314=string_get_hash_key(((char*)key))%self->size;
    it_315=hash_314;
    while((_Bool)1) {
        if(        self->item_existance[it_315]) {
            if(            string_equals(self->keys[it_315],key)) {
                if(                1) {
                    (self->keys[it_315] = come_decrement_ref_count(self->keys[it_315], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_315]);
                    self->keys[it_315]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_315]);
                    self->keys[it_315]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_315],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_315]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_315]=item;
                }
                break;
            }
            it_315++;
            if(            it_315>=self->size) {
                it_315=0;
            }
            else if(            it_315==hash_314) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_315]=(_Bool)1;
            if(            1) {
                self->keys[it_315]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_315]=key;
            }
            if(            1) {
                self->items[it_315]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_315]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_332=(_Bool)0;
    for(    it2_335=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_335=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_335,key)) {
            same_key_exist_332=(_Bool)1;
        }
    }
    if(    !same_key_exist_332) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__228 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_303;
void* __right_value254 = (void*)0;
char** keys_304;
void* __right_value255 = (void*)0;
struct sVar** items_305;
void* __right_value256 = (void*)0;
_Bool* item_existance_306;
int len_307;
char* it_308;
struct sVar* default_value_309;
void* __right_value257 = (void*)0;
struct sVar* it2_310;
unsigned int hash_311;
int n_312;
struct sVar* default_value_313;
void* __right_value258 = (void*)0;
default_value_309 = (void*)0;
default_value_313 = (void*)0;
    size_303=self->size*10;
    keys_304=(char**)come_increment_ref_count(((char**)(__right_value254=(char**)come_calloc(1, sizeof(char*)*(1*(size_303)), "./comelang.h", 2328, "char**"))));
    items_305=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value255=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_303)), "./comelang.h", 2329, "struct sVar**"))));
    item_existance_306=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value256=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_303)), "./comelang.h", 2330, "_Bool*"))));
    len_307=0;
    for(    it_308=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_308=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_309,0,sizeof(struct sVar*));
        it2_310=((struct sVar*)(__right_value257=map$2char$phsVar$ph_at(self,it_308,(struct sVar*)come_increment_ref_count(default_value_309))));
        /*c*/ come_call_finalizer3(__right_value257,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_311=string_get_hash_key(((char*)it_308))%size_303;
        n_312=hash_311;
        while((_Bool)1) {
            if(            item_existance_306[n_312]) {
                n_312++;
                if(                n_312>=size_303) {
                    n_312=0;
                }
                else if(                n_312==hash_311) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_306[n_312]=(_Bool)1;
                keys_304[n_312]=it_308;
                items_305[n_312]=((struct sVar*)(__right_value258=map$2char$phsVar$ph_at(self,it_308,(struct sVar*)come_increment_ref_count(default_value_313))));
                /*c*/ come_call_finalizer3(__right_value258,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_307++;
                /*c*/ come_call_finalizer3(default_value_313,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_313,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_309,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_304;
    self->items=items_305;
    self->item_existance=item_existance_306;
    self->size=size_303;
    self->len=len_307;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_316;
struct list_item$1char$ph* it_317;
struct list$1char$ph* __result_obj__221;
    it2_316=0;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        if(        string_equals(it_317->item,item)) {
            list$1char$ph_delete(self,it2_316,it2_316+1);
            break;
        }
        it2_316++;
        it_317=it_317->next;
    }
    __result_obj__221 = self;
    return __result_obj__221;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_318;
struct list$1char$ph* __result_obj__218;
struct list_item$1char$ph* it_321;
int i_322;
struct list_item$1char$ph* prev_it_323;
struct list_item$1char$ph* it_324;
int i_325;
struct list_item$1char$ph* prev_it_326;
struct list_item$1char$ph* it_327;
struct list_item$1char$ph* head_prev_it_328;
struct list_item$1char$ph* tail_it_329;
int i_330;
struct list_item$1char$ph* prev_it_331;
struct list$1char$ph* __result_obj__220;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_318=tail;
        tail=head;
        head=tmp_318;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__218 = self;
        return __result_obj__218;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_321=self->head;
        i_322=0;
        while(it_321!=((void*)0)) {
            if(            i_322<tail) {
                prev_it_323=it_321;
                it_321=it_321->next;
                i_322++;
                /*c*/ come_call_finalizer3(prev_it_323,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_322==tail) {
                self->head=it_321;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_321=it_321->next;
                i_322++;
            }
        }
    }
    else if(    tail==self->len) {
        it_324=self->head;
        i_325=0;
        while(it_324!=((void*)0)) {
            if(            i_325==head) {
                self->tail=it_324->prev;
                self->tail->next=((void*)0);
            }
            if(            i_325>=head) {
                prev_it_326=it_324;
                it_324=it_324->next;
                i_325++;
                /*c*/ come_call_finalizer3(prev_it_326,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_324=it_324->next;
                i_325++;
            }
        }
    }
    else {
        it_327=self->head;
        head_prev_it_328=((void*)0);
        tail_it_329=((void*)0);
        i_330=0;
        while(it_327!=((void*)0)) {
            if(            i_330==head) {
                head_prev_it_328=it_327->prev;
            }
            if(            i_330==tail) {
                tail_it_329=it_327;
            }
            if(            i_330>=head&&i_330<tail) {
                prev_it_331=it_327;
                it_327=it_327->next;
                i_330++;
                /*c*/ come_call_finalizer3(prev_it_331,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_327=it_327->next;
                i_330++;
            }
        }
        if(        head_prev_it_328!=((void*)0)) {
            head_prev_it_328->next=tail_it_329;
        }
        if(        tail_it_329!=((void*)0)) {
            tail_it_329->prev=head_prev_it_328;
        }
    }
    __result_obj__220 = self;
    return __result_obj__220;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_319;
struct list_item$1char$ph* prev_it_320;
struct list$1char$ph* __result_obj__219;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        /*c*/ come_call_finalizer3(prev_it_320,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__219 = self;
    return __result_obj__219;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_333;
char* __result_obj__222;
char* __result_obj__223;
char* result_334;
char* __result_obj__224;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_333,0,sizeof(char*));
        __result_obj__222 = result_333;
        return __result_obj__222;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__223 = self->it->item;
        return __result_obj__223;
    }
    memset(&result_334,0,sizeof(char*));
    __result_obj__224 = result_334;
    return __result_obj__224;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_336;
char* __result_obj__225;
char* __result_obj__226;
char* result_337;
char* __result_obj__227;
result_336 = (void*)0;
result_337 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_336,0,sizeof(char*));
        __result_obj__225 = result_336;
        return __result_obj__225;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__226 = self->it->item;
        return __result_obj__226;
    }
    memset(&result_337,0,sizeof(char*));
    __result_obj__227 = result_337;
    return __result_obj__227;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__229;
void* __right_value260 = (void*)0;
struct sVar* result_338;
void* __right_value261 = (void*)0;
char* __dec_obj30;
void* __right_value262 = (void*)0;
char* __dec_obj31;
void* __right_value297 = (void*)0;
struct sType* __dec_obj53;
void* __right_value298 = (void*)0;
char* __dec_obj54;
struct sVar* __result_obj__241;
    if(    self==(void*)0) {
        __result_obj__229 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__229,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__229;
    }
    result_338=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj30=result_338->mName,
        result_338->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj31=result_338->mCValueName,
        result_338->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj53=result_338->mType,
        result_338->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_338->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_338->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_338->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj54=result_338->mFunName,
        result_338->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__241 = come_increment_ref_count(result_338);
    /*c*/ come_call_finalizer3(result_338,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__230;
void* __right_value263 = (void*)0;
struct sType* result_339;
void* __right_value264 = (void*)0;
struct sType* __dec_obj32;
void* __right_value265 = (void*)0;
struct sType* __dec_obj33;
void* __right_value273 = (void*)0;
struct list$1sType$ph* __dec_obj37;
void* __right_value274 = (void*)0;
struct sType* __dec_obj38;
void* __right_value275 = (void*)0;
struct sType* __dec_obj39;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj40;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value278 = (void*)0;
char* __dec_obj42;
void* __right_value279 = (void*)0;
char* __dec_obj43;
void* __right_value280 = (void*)0;
char* __dec_obj44;
void* __right_value285 = (void*)0;
struct list$1sNode$ph* __dec_obj45;
void* __right_value286 = (void*)0;
char* __dec_obj46;
void* __right_value287 = (void*)0;
struct list$1sType$ph* __dec_obj47;
void* __right_value295 = (void*)0;
struct list$1char$ph* __dec_obj51;
void* __right_value296 = (void*)0;
struct sType* __dec_obj52;
struct sType* __result_obj__240;
    if(    self==(void*)0) {
        __result_obj__230 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__230,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__230;
    }
    result_339=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_339->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj32=result_339->mOriginalLoadVarType,
        result_339->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj33=result_339->mChannelType,
        result_339->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj37=result_339->mGenericsTypes,
        result_339->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj37,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj38=result_339->mNoSolvedGenericsType,
        result_339->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj39=result_339->mAnyOriginalType,
        result_339->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj40=result_339->mSizeNum,
        result_339->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj41=result_339->mAlignas,
        result_339->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj42=result_339->mTupleName,
        result_339->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj43=result_339->mAttribute,
        result_339->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_339->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_339->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_339->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_339->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_339->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_339->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_339->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_339->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_339->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_339->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_339->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_339->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_339->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_339->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_339->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_339->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_339->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_339->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_339->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_339->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_339->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_339->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_339->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_339->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_339->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj44=result_339->mAsmName,
        result_339->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_339->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_339->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj45=result_339->mArrayNum,
        result_339->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj45,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_339->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj46=result_339->mOriginalTypeName,
        result_339->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_339->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_339->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_339->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj47=result_339->mParamTypes,
        result_339->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj47,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj51=result_339->mParamNames,
        result_339->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj52=result_339->mResultType,
        result_339->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_339->mVarArgs=self->mVarArgs;
    }
    __result_obj__240 = come_increment_ref_count(result_339);
    /*c*/ come_call_finalizer3(result_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__231;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sType$ph* result_340;
struct list_item$1sType$ph* it_341;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sType$ph* __result_obj__234;
    if(    self==((void*)0)) {
        __result_obj__231 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__231,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__231;
    }
    result_340=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1185, "struct list$1sType$ph*"))));
    it_341=self->head;
    while(it_341!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_340,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_341->item)));
        }
        else {
            list$1sType$ph_add(result_340,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_341->item)));
        }
        it_341=it_341->next;
    }
    __result_obj__234 = come_increment_ref_count(result_340);
    /*c*/ come_call_finalizer3(result_340,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__234,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__232;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__232 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__232,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__232;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value268 = (void*)0;
struct list_item$1sType$ph* litem_342;
struct sType* __dec_obj34;
void* __right_value269 = (void*)0;
struct list_item$1sType$ph* litem_343;
struct sType* __dec_obj35;
void* __right_value270 = (void*)0;
struct list_item$1sType$ph* litem_344;
struct sType* __dec_obj36;
struct list$1sType$ph* __result_obj__233;
    if(    self->len==0) {
        litem_342=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value268=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1204, "struct list_item$1sType$ph*"))));
        litem_342->prev=((void*)0);
        litem_342->next=((void*)0);
        __dec_obj34=litem_342->item,
        litem_342->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_342;
        self->head=litem_342;
    }
    else if(    self->len==1) {
        litem_343=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value269=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1214, "struct list_item$1sType$ph*"))));
        litem_343->prev=self->head;
        litem_343->next=((void*)0);
        __dec_obj35=litem_343->item,
        litem_343->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_343;
        self->head->next=litem_343;
    }
    else {
        litem_344=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value270=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1224, "struct list_item$1sType$ph*"))));
        litem_344->prev=self->tail;
        litem_344->next=((void*)0);
        __dec_obj36=litem_344->item,
        litem_344->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_344;
        self->tail=litem_344;
    }
    self->len++;
    __result_obj__233 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_345;
struct list_item$1sType$ph* prev_it_346;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        /*c*/ come_call_finalizer3(prev_it_346,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__235;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* result_347;
struct list_item$1sNode$ph* it_348;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sNode$ph* __result_obj__236;
    if(    self==((void*)0)) {
        __result_obj__235 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__235,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__235;
    }
    result_347=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_348=self->head;
    while(it_348!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_347,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_348->item)));
        }
        else {
            list$1sNode$ph_add(result_347,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_348->item)));
        }
        it_348=it_348->next;
    }
    __result_obj__236 = come_increment_ref_count(result_347);
    /*c*/ come_call_finalizer3(result_347,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__236,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__236;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__237;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1char$ph* result_349;
struct list_item$1char$ph* it_350;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1char$ph* __result_obj__239;
    if(    self==((void*)0)) {
        __result_obj__237 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__237,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__237;
    }
    result_349=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1185, "struct list$1char$ph*"))));
    it_350=self->head;
    while(it_350!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_349,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_350->item)));
        }
        else {
            list$1char$ph_add(result_349,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_350->item)));
        }
        it_350=it_350->next;
    }
    __result_obj__239 = come_increment_ref_count(result_349);
    /*c*/ come_call_finalizer3(result_349,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__239,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value290 = (void*)0;
struct list_item$1char$ph* litem_351;
char* __dec_obj48;
void* __right_value291 = (void*)0;
struct list_item$1char$ph* litem_352;
char* __dec_obj49;
void* __right_value292 = (void*)0;
struct list_item$1char$ph* litem_353;
char* __dec_obj50;
struct list$1char$ph* __result_obj__238;
    if(    self->len==0) {
        litem_351=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value290=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1204, "struct list_item$1char$ph*"))));
        litem_351->prev=((void*)0);
        litem_351->next=((void*)0);
        __dec_obj48=litem_351->item,
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_351;
        self->head=litem_351;
    }
    else if(    self->len==1) {
        litem_352=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value291=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1214, "struct list_item$1char$ph*"))));
        litem_352->prev=self->head;
        litem_352->next=((void*)0);
        __dec_obj49=litem_352->item,
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_352;
        self->head->next=litem_352;
    }
    else {
        litem_353=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value292=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1224, "struct list_item$1char$ph*"))));
        litem_353->prev=self->tail;
        litem_353->next=((void*)0);
        __dec_obj50=litem_353->item,
        litem_353->item=(char*)come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_353;
        self->tail=litem_353;
    }
    self->len++;
    __result_obj__238 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_354;
int i_355;
    for(    i_354=0;    i_354<self->size;    i_354++    ){
        if(        self->item_existance[i_354]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_354],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_355=0;    i_355<self->size;    i_355++    ){
        if(        self->item_existance[i_355]) {
            if(            1) {
                (self->keys[i_355] = come_decrement_ref_count(self->keys[i_355], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__245;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1sBlock$ph* result_358;
struct list_item$1sBlock$ph* it_359;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1sBlock$ph* __result_obj__248;
    if(    self==((void*)0)) {
        __result_obj__245 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__245,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__245;
    }
    result_358=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1185, "struct list$1sBlock$ph*"))));
    it_359=self->head;
    while(it_359!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_358,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_359->item)));
        }
        else {
            list$1sBlock$ph_add(result_358,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_359->item)));
        }
        it_359=it_359->next;
    }
    __result_obj__248 = come_increment_ref_count(result_358);
    /*c*/ come_call_finalizer3(result_358,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__248,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_356;
struct list_item$1sBlock$ph* prev_it_357;
    it_356=self->head;
    while(it_356!=((void*)0)) {
        prev_it_357=it_356;
        it_356=it_356->next;
        /*c*/ come_call_finalizer3(prev_it_357,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__246;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__246 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value310 = (void*)0;
struct list_item$1sBlock$ph* litem_360;
struct sBlock* __dec_obj59;
void* __right_value311 = (void*)0;
struct list_item$1sBlock$ph* litem_361;
struct sBlock* __dec_obj60;
void* __right_value312 = (void*)0;
struct list_item$1sBlock$ph* litem_362;
struct sBlock* __dec_obj61;
struct list$1sBlock$ph* __result_obj__247;
    if(    self->len==0) {
        litem_360=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value310=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1204, "struct list_item$1sBlock$ph*"))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj59=litem_360->item,
        litem_360->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value311=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1214, "struct list_item$1sBlock$ph*"))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj60=litem_361->item,
        litem_361->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value312=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1224, "struct list_item$1sBlock$ph*"))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj61=litem_362->item,
        litem_362->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result_obj__247 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_363;
struct list_item$1sBlock$ph* prev_it_364;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        prev_it_364=it_363;
        it_363=it_363->next;
        /*c*/ come_call_finalizer3(prev_it_364,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mElifExpressionNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mElifBlocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_367;
int i_368;
struct sBlock* __result_obj__251;
struct sBlock* default_value_369;
struct sBlock* __result_obj__252;
default_value_369 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_367=self->head;
    i_368=0;
    while(it_367!=((void*)0)) {
        if(        position==i_368) {
            __result_obj__251 = come_increment_ref_count(it_367->item);
            /*c*/ come_call_finalizer3(__result_obj__251,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__251;
        }
        it_367=it_367->next;
        i_368++;
    }
    memset(&default_value_369,0,sizeof(struct sBlock*));
    __result_obj__252 = come_increment_ref_count(default_value_369);
    /*c*/ come_call_finalizer3(default_value_369,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__252,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_395;
int i_396;
struct sNode* __result_obj__255;
struct sNode* default_value_397;
struct sNode* __result_obj__256;
default_value_397 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_395=self->head;
    i_396=0;
    while(it_395!=((void*)0)) {
        if(        position==i_396) {
            __result_obj__255 = come_increment_ref_count(it_395->item);
            ((__result_obj__255) ? __result_obj__255 = come_decrement_ref_count(__result_obj__255, ((struct sNode*)__result_obj__255)->finalize, ((struct sNode*)__result_obj__255)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__255;
        }
        it_395=it_395->next;
        i_396++;
    }
    memset(&default_value_397,0,sizeof(struct sNode*));
    __result_obj__256 = come_increment_ref_count(default_value_397);
    ((default_value_397) ? default_value_397 = come_decrement_ref_count(default_value_397, ((struct sNode*)default_value_397)->finalize, ((struct sNode*)default_value_397)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__256) ? __result_obj__256 = come_decrement_ref_count(__result_obj__256, ((struct sNode*)__result_obj__256)->finalize, ((struct sNode*)__result_obj__256)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__256;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value337 = (void*)0;
struct list_item$1CVALUE$ph* litem_411;
struct CVALUE* __dec_obj68;
void* __right_value338 = (void*)0;
struct list_item$1CVALUE$ph* litem_412;
struct CVALUE* __dec_obj69;
void* __right_value339 = (void*)0;
struct list_item$1CVALUE$ph* litem_413;
struct CVALUE* __dec_obj70;
struct list$1CVALUE$ph* __result_obj__259;
    if(    self->len==0) {
        litem_411=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value337=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1274, "struct list_item$1CVALUE$ph*"))));
        litem_411->prev=((void*)0);
        litem_411->next=((void*)0);
        __dec_obj68=litem_411->item,
        litem_411->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_411;
        self->head=litem_411;
    }
    else if(    self->len==1) {
        litem_412=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value338=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1284, "struct list_item$1CVALUE$ph*"))));
        litem_412->prev=self->head;
        litem_412->next=((void*)0);
        __dec_obj69=litem_412->item,
        litem_412->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_412;
        self->head->next=litem_412;
    }
    else {
        litem_413=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value339=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1294, "struct list_item$1CVALUE$ph*"))));
        litem_413->prev=self->tail;
        litem_413->next=((void*)0);
        __dec_obj70=litem_413->item,
        litem_413->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj70,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_413;
        self->tail=litem_413;
    }
    self->len++;
    __result_obj__259 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj73;
struct sMatchNode* __result_obj__261;
    ((struct sNodeBase*)(__right_value340=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value340,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj72=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj73=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__261 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMatchNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__261,sMatchNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __right_value343 = (void*)0;
char* __result_obj__262;
    __result_obj__262 = come_increment_ref_count(((char*)(__right_value343=__builtin_string("sMatch"))));
    (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__262 = come_decrement_ref_count(__result_obj__262, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__262;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_414;
struct sNode* match_node_415;
_Bool Value_416;
_Bool __result_obj__263;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_417;
_Bool Value_418;
_Bool __result_obj__264;
struct sVar* var__419;
int __exception_result_var_b2;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1sVar$ph* __dec_obj74;
void* __right_value350 = (void*)0;
_Bool __result_obj__267;
    it_node_414=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_415=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_416=node_compile(it_node_414,info);
    if(    !Value_416) {
        __result_obj__263 = (_Bool)0;
        ((it_node_414) ? it_node_414 = come_decrement_ref_count(it_node_414, ((struct sNode*)it_node_414)->finalize, ((struct sNode*)it_node_414)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_415) ? match_node_415 = come_decrement_ref_count(match_node_415, ((struct sNode*)match_node_415)->finalize, ((struct sNode*)match_node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__263;
    }
    else {
    }
    come_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_417->c_value);
    Value_418=node_compile(match_node_415,info);
    if(    !Value_418) {
        __result_obj__264 = (_Bool)0;
        ((it_node_414) ? it_node_414 = come_decrement_ref_count(it_node_414, ((struct sNode*)it_node_414)->finalize, ((struct sNode*)it_node_414)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_415) ? match_node_415 = come_decrement_ref_count(match_node_415, ((struct sNode*)match_node_415)->finalize, ((struct sNode*)match_node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__264;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__419=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 265, 1),__exception_result_var_b2=assert_v2(var__419!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj74=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 268, "struct list$1sVar$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj74,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__419)));
    }
    __result_obj__267 = (_Bool)1;
    ((it_node_414) ? it_node_414 = come_decrement_ref_count(it_node_414, ((struct sNode*)it_node_414)->finalize, ((struct sNode*)it_node_414)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node_415) ? match_node_415 = come_decrement_ref_count(match_node_415, ((struct sNode*)match_node_415)->finalize, ((struct sNode*)match_node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
}

static void sMatchNode_finalize(struct sMatchNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__265;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__265 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_420;
struct list_item$1sVar$ph* prev_it_421;
    it_420=self->head;
    while(it_420!=((void*)0)) {
        prev_it_421=it_420;
        it_420=it_420->next;
        /*c*/ come_call_finalizer3(prev_it_421,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_422;
struct list_item$1sVar$ph* prev_it_423;
    it_422=self->head;
    while(it_422!=((void*)0)) {
        prev_it_423=it_422;
        it_422=it_422->next;
        /*c*/ come_call_finalizer3(prev_it_423,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
void* __right_value347 = (void*)0;
struct list_item$1sVar$ph* litem_424;
struct sVar* __dec_obj75;
void* __right_value348 = (void*)0;
struct list_item$1sVar$ph* litem_425;
struct sVar* __dec_obj76;
void* __right_value349 = (void*)0;
struct list_item$1sVar$ph* litem_426;
struct sVar* __dec_obj77;
struct list$1sVar$ph* __result_obj__266;
    if(    self->len==0) {
        litem_424=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value347=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1204, "struct list_item$1sVar$ph*"))));
        litem_424->prev=((void*)0);
        litem_424->next=((void*)0);
        __dec_obj75=litem_424->item,
        litem_424->item=(struct sVar*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj75,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_424;
        self->head=litem_424;
    }
    else if(    self->len==1) {
        litem_425=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value348=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1214, "struct list_item$1sVar$ph*"))));
        litem_425->prev=self->head;
        litem_425->next=((void*)0);
        __dec_obj76=litem_425->item,
        litem_425->item=(struct sVar*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj76,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_425;
        self->head->next=litem_425;
    }
    else {
        litem_426=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value349=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1224, "struct list_item$1sVar$ph*"))));
        litem_426->prev=self->tail;
        litem_426->next=((void*)0);
        __dec_obj77=litem_426->item,
        litem_426->item=(struct sVar*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_426;
        self->tail=litem_426;
    }
    self->len++;
    __result_obj__266 = self;
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj79;
struct sIfMethodNode* __result_obj__268;
    ((struct sNodeBase*)(__right_value351=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value351,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj78=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj79=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__268 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIfMethodNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__268,sIfMethodNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __right_value354 = (void*)0;
char* __result_obj__269;
    __result_obj__269 = come_increment_ref_count(((char*)(__right_value354=__builtin_string("sMatch"))));
    (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__269 = come_decrement_ref_count(__result_obj__269, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__269;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_427;
struct sNode* match_node_428;
_Bool Value_429;
_Bool __result_obj__270;
void* __right_value355 = (void*)0;
struct CVALUE* come_value_430;
_Bool Value_431;
_Bool __result_obj__271;
struct sVar* var__432;
int __exception_result_var_b3;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1sVar$ph* __dec_obj80;
void* __right_value358 = (void*)0;
_Bool __result_obj__272;
    it_node_427=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_428=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_429=node_compile(it_node_427,info);
    if(    !Value_429) {
        __result_obj__270 = (_Bool)0;
        ((it_node_427) ? it_node_427 = come_decrement_ref_count(it_node_427, ((struct sNode*)it_node_427)->finalize, ((struct sNode*)it_node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_428) ? match_node_428 = come_decrement_ref_count(match_node_428, ((struct sNode*)match_node_428)->finalize, ((struct sNode*)match_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__270;
    }
    else {
    }
    come_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_430->c_value);
    Value_431=node_compile(match_node_428,info);
    if(    !Value_431) {
        __result_obj__271 = (_Bool)0;
        ((it_node_427) ? it_node_427 = come_decrement_ref_count(it_node_427, ((struct sNode*)it_node_427)->finalize, ((struct sNode*)it_node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_428) ? match_node_428 = come_decrement_ref_count(match_node_428, ((struct sNode*)match_node_428)->finalize, ((struct sNode*)match_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__271;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__432=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 316, 2),__exception_result_var_b3=assert_v2(var__432!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj80=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 319, "struct list$1sVar$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj80,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__432)));
    }
    __result_obj__272 = (_Bool)1;
    ((it_node_427) ? it_node_427 = come_decrement_ref_count(it_node_427, ((struct sNode*)it_node_427)->finalize, ((struct sNode*)it_node_427)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node_428) ? match_node_428 = come_decrement_ref_count(match_node_428, ((struct sNode*)match_node_428)->finalize, ((struct sNode*)match_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value361 = (void*)0;
struct sBlock* __dec_obj82;
struct sOrStatmentNode* __result_obj__273;
    ((struct sNodeBase*)(__right_value359=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value359,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj81=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj82=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    /*b*/ come_call_finalizer3(__dec_obj82,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__273 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOrStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,sOrStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __right_value362 = (void*)0;
char* __result_obj__274;
    __result_obj__274 = come_increment_ref_count(((char*)(__right_value362=__builtin_string("sOrStatmentNode"))));
    (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__274 = come_decrement_ref_count(__result_obj__274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__274;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_433;
_Bool without_semicolon_434;
_Bool Value_435;
void* __right_value363 = (void*)0;
struct CVALUE* conditional_value_436;
struct sBlock* if_block_437;
int num_or_conditional_stack_439;
_Bool __result_obj__275;
    expression_node_433=self->mExpressionNode;
    without_semicolon_434=info->without_semicolon;
    info->without_semicolon=(_Bool)1;
    Value_435=node_compile(expression_node_433,info);
    if(    !Value_435) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=without_semicolon_434;
    conditional_value_436=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if_block_437=self->mIfBlock;
    static int num_or_conditional_438=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_438);
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_438,conditional_value_436->c_value);
    num_or_conditional_stack_439=num_or_conditional_438;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_439);
    transpile_block(if_block_437,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__275 = (_Bool)1;
    /*c*/ come_call_finalizer3(conditional_value_436,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value366 = (void*)0;
struct sBlock* __dec_obj84;
struct sAndStatmentNode* __result_obj__276;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value364,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj83=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj84=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    /*b*/ come_call_finalizer3(__dec_obj84,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__276 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAndStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__276,sAndStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __right_value367 = (void*)0;
char* __result_obj__277;
    __result_obj__277 = come_increment_ref_count(((char*)(__right_value367=__builtin_string("sAndStatmentNode"))));
    (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__277 = come_decrement_ref_count(__result_obj__277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__277;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_440;
_Bool without_semicolon_441;
_Bool Value_442;
void* __right_value368 = (void*)0;
struct CVALUE* conditional_value_443;
struct sBlock* if_block_444;
int num_and_conditional_stack_446;
_Bool __result_obj__278;
    expression_node_440=self->mExpressionNode;
    without_semicolon_441=info->without_semicolon;
    info->without_semicolon=(_Bool)1;
    Value_442=node_compile(expression_node_440,info);
    if(    !Value_442) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=without_semicolon_441;
    conditional_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if_block_444=self->mIfBlock;
    static int num_and_conditional_445=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_445);
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_445,conditional_value_443->c_value);
    num_and_conditional_stack_446=num_and_conditional_445;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_446);
    transpile_block(if_block_444,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__278 = (_Bool)1;
    /*c*/ come_call_finalizer3(conditional_value_443,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNode$ph* multiple_node, _Bool in_rescue, struct sInfo* info){
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct list$1sNode$ph* __dec_obj85;
struct sMultipleNode* __result_obj__279;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value369,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj85=self->multiple_node,
    self->multiple_node=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, multiple_node));
    /*b*/ come_call_finalizer3(__dec_obj85,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->in_rescue=in_rescue;
    __result_obj__279 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMultipleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_node,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,sMultipleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

_Bool sMultipleNode_terminated(struct sMultipleNode* self){
    return (_Bool)1;
}

char* sMultipleNode_kind(struct sMultipleNode* self){
void* __right_value371 = (void*)0;
char* __result_obj__280;
    __result_obj__280 = come_increment_ref_count(((char*)(__right_value371=__builtin_string("sMultipleNode"))));
    (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__280 = come_decrement_ref_count(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__280;
}

_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info){
_Bool in_exception_value_447;
struct list$1sNode$ph* multiple_node_448;
struct CVALUE* come_value_449;
struct list$1sNode$ph* o2_saved_450;
struct sNode* it_453;
_Bool Value_456;
_Bool __result_obj__287;
void* __right_value372 = (void*)0;
struct CVALUE* __dec_obj86;
_Bool __result_obj__288;
    in_exception_value_447=info->in_exception_value;
    info->in_exception_value=(_Bool)1;
    multiple_node_448=(struct list$1sNode$ph*)come_increment_ref_count(self->multiple_node);
    come_value_449=((void*)0);
    for(    o2_saved_450=(struct list$1sNode$ph*)come_increment_ref_count((multiple_node_448)),it_453=list$1sNode$ph_begin((o2_saved_450));    !list$1sNode$ph_end((o2_saved_450));    it_453=list$1sNode$ph_next((o2_saved_450))    ){
        Value_456=node_compile(it_453,info);
        if(        !Value_456) {
            __result_obj__287 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_450,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(multiple_node_448,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_value_449,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__287;
        }
        else {
        }
        add_last_code_to_source(info);
        if(        list$1CVALUE$ph_length(info->stack)>0) {
            __dec_obj86=come_value_449,
            come_value_449=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            /*b*/ come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_450,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    come_value_449) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_449));
    }
    info->in_exception_value=in_exception_value_447;
    __result_obj__288 = (_Bool)1;
    /*c*/ come_call_finalizer3(multiple_node_448,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_449,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

static void sMultipleNode_finalize(struct sMultipleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->multiple_node,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_451;
struct sNode* __result_obj__281;
struct sNode* __result_obj__282;
struct sNode* result_452;
struct sNode* __result_obj__283;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_451,0,sizeof(struct sNode*));
        __result_obj__281 = result_451;
        return __result_obj__281;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__282 = self->it->item;
        return __result_obj__282;
    }
    memset(&result_452,0,sizeof(struct sNode*));
    __result_obj__283 = result_452;
    return __result_obj__283;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_454;
struct sNode* __result_obj__284;
struct sNode* __result_obj__285;
struct sNode* result_455;
struct sNode* __result_obj__286;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_454,0,sizeof(struct sNode*));
        __result_obj__284 = result_454;
        return __result_obj__284;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__285 = self->it->item;
        return __result_obj__285;
    }
    memset(&result_455,0,sizeof(struct sNode*));
    __result_obj__286 = result_455;
    return __result_obj__286;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info){
void* __right_value373 = (void*)0;
struct sSaveRightValueObjects* __result_obj__289;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value373,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__289 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSaveRightValueObjects_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__289,sSaveRightValueObjects_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self){
    return (_Bool)0;
}

char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self){
void* __right_value374 = (void*)0;
char* __result_obj__290;
    __result_obj__290 = come_increment_ref_count(((char*)(__right_value374=__builtin_string("sSaveRightValueObjects"))));
    (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__290 = come_decrement_ref_count(__result_obj__290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__290;
}

_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObject$ph* __dec_obj87;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj88;
    __dec_obj87=gExceptionRightValueObjects,
    gExceptionRightValueObjects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
    /*b*/ come_call_finalizer3(__dec_obj87,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj88=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "08if.c", 512, "struct list$1sRightValueObject$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj88,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    return (_Bool)1;
}

static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_457;
struct list_item$1sRightValueObject$ph* prev_it_458;
    it_457=self->head;
    while(it_457!=((void*)0)) {
        prev_it_458=it_457;
        it_457=it_457->next;
        /*c*/ come_call_finalizer3(prev_it_458,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__291;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__291 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_459;
struct list_item$1sRightValueObject$ph* prev_it_460;
    it_459=self->head;
    while(it_459!=((void*)0)) {
        prev_it_460=it_459;
        it_459=it_459->next;
        /*c*/ come_call_finalizer3(prev_it_460,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info){
void* __right_value377 = (void*)0;
struct sRestoreRightValueObjects* __result_obj__292;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value377,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__292 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRestoreRightValueObjects_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__292,sRestoreRightValueObjects_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self){
    return (_Bool)0;
}

char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self){
void* __right_value378 = (void*)0;
char* __result_obj__293;
    __result_obj__293 = come_increment_ref_count(((char*)(__right_value378=__builtin_string("sRestoreRightValueObjects"))));
    (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__293 = come_decrement_ref_count(__result_obj__293, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__293;
}

_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObject$ph* __dec_obj89;
struct list$1sRightValueObject$ph* __dec_obj90;
    free_right_value_objects(info,(_Bool)0);
    __dec_obj89=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(gExceptionRightValueObjects);
    /*b*/ come_call_finalizer3(__dec_obj89,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj90=gExceptionRightValueObjects,
    gExceptionRightValueObjects=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj90,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    return (_Bool)1;
}

static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value379 = (void*)0;
char* sname_461;
int sline_462;
int var_num_stack_464;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* __list_values1___465[2];
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1char$ph* multiple_assign_468;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* get_return_value_469;
void* __right_value387 = (void*)0;
struct sBlock* if_block_470;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_471;
int elif_num_472;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1sBlock$ph* elif_blocks_473;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sBlock* else_block_474;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sNode* expression_node2_478;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value411 = (void*)0;
struct sNode* if_node_479;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* _inf_value2;
struct sSaveRightValueObjects* _inf_obj_value2;
void* __right_value416 = (void*)0;
struct sNode* save_right_value_objects_481;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sNode* _inf_value3;
struct sRestoreRightValueObjects* _inf_obj_value3;
void* __right_value421 = (void*)0;
struct sNode* restore_right_value_objects_483;
struct sNode* __list_values2___486[2];
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1sNode$ph* multiple_node_485;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sNode* _inf_value4;
struct sMultipleNode* _inf_obj_value4;
void* __right_value429 = (void*)0;
struct sNode* __result_obj__305;
    sname_461=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_462=info->sline;
    parse_sharp_v5(info);
    static int var_num_463=0;
    var_num_463++;
    var_num_stack_464=var_num_463;
    multiple_assign_468=(struct list$1char$ph*)come_increment_ref_count((__list_values1___465[0]=((char*)(__right_value381=xsprintf("come_exception_var_\%s",((char*)(__right_value380=int_to_string(var_num_stack_464)))))),
__list_values1___465[1]=((char*)(__right_value382=xsprintf("Err"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "08if.c", 557, "struct list$1char$ph")),2,__list_values1___465)));
    (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value382 = come_decrement_ref_count(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    get_return_value_469=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_468),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    if_block_470=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_471=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 564, "struct list$1sNode$ph*"))));
    elif_num_472=0;
    elif_blocks_473=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 567, "struct list$1sBlock$ph*"))));
    else_block_474=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 569, "struct sBlock*")),info));
    else_block_474->mOmitSemicolon=(_Bool)1;
    list$1sNode$ph_push_back(else_block_474->mNodes,(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value398=xsprintf("come_exception_var_\%s",((char*)(__right_value397=int_to_string(var_num_stack_464)))))),info)));
    (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    expression_node2_478=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value400=xsprintf("Err"))),info));
    (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 575, "struct sNode");
    _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value403=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 575, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(expression_node2_478),if_block_470,elif_expression_nodes_471,elif_blocks_473,elif_num_472,else_block_474,(_Bool)0,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    if_node_479=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value403,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 577, "struct sNode");
    _inf_obj_value2=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value413=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 577, "struct sSaveRightValueObjects*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value2->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value2->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value2->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_481=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value413,sSaveRightValueObjects_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 578, "struct sNode");
    _inf_obj_value3=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value418=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 578, "struct sRestoreRightValueObjects*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value3->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value3->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value3->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_483=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value418,sRestoreRightValueObjects_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    multiple_node_485=(struct list$1sNode$ph*)come_increment_ref_count((__list_values2___486[0]=get_return_value_469,
__list_values2___486[1]=if_node_479,
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 580, "struct list$1sNode$ph")),2,__list_values2___486)));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 582, "struct sNode");
    _inf_obj_value4=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value425=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 582, "struct sMultipleNode*")),(struct list$1sNode$ph*)come_increment_ref_count(multiple_node_485),(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMultipleNode_finalize;
    _inf_value4->clone=(void*)sMultipleNode_clone;
    _inf_value4->compile=(void*)sMultipleNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMultipleNode_terminated;
    _inf_value4->kind=(void*)sMultipleNode_kind;
    __result_obj__305 = come_increment_ref_count(((struct sNode*)(__right_value429=_inf_value4)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_461 = come_decrement_ref_count(sname_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign_468,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((get_return_value_469) ? get_return_value_469 = come_decrement_ref_count(get_return_value_469, ((struct sNode*)get_return_value_469)->finalize, ((struct sNode*)get_return_value_469)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_470,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_471,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_473,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_474,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((expression_node2_478) ? expression_node2_478 = come_decrement_ref_count(expression_node2_478, ((struct sNode*)expression_node2_478)->finalize, ((struct sNode*)expression_node2_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((if_node_479) ? if_node_479 = come_decrement_ref_count(if_node_479, ((struct sNode*)if_node_479)->finalize, ((struct sNode*)if_node_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((save_right_value_objects_481) ? save_right_value_objects_481 = come_decrement_ref_count(save_right_value_objects_481, ((struct sNode*)save_right_value_objects_481)->finalize, ((struct sNode*)save_right_value_objects_481)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((restore_right_value_objects_483) ? restore_right_value_objects_483 = come_decrement_ref_count(restore_right_value_objects_483, ((struct sNode*)restore_right_value_objects_483)->finalize, ((struct sNode*)restore_right_value_objects_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(multiple_node_485,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value425,sMultipleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value429) ? __right_value429 = come_decrement_ref_count(__right_value429, ((struct sNode*)__right_value429)->finalize, ((struct sNode*)__right_value429)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__305) ? __result_obj__305 = come_decrement_ref_count(__result_obj__305, ((struct sNode*)__result_obj__305)->finalize, ((struct sNode*)__result_obj__305)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__305;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_466;
struct list$1char$ph* __result_obj__294;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_466=0;    i_466<num_value;    i_466++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_466]));
    }
    __result_obj__294 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_467;
    result_467=0;
    result_467+=int_get_hash_key(((int)self->head));
    result_467+=int_get_hash_key(((int)self->tail));
    result_467+=int_get_hash_key(((int)self->len));
    result_467+=int_get_hash_key(((int)self->it));
    return result_467;
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

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value394 = (void*)0;
struct list_item$1sNode$ph* litem_475;
struct sNode* __dec_obj91;
void* __right_value395 = (void*)0;
struct list_item$1sNode$ph* litem_476;
struct sNode* __dec_obj92;
void* __right_value396 = (void*)0;
struct list_item$1sNode$ph* litem_477;
struct sNode* __dec_obj93;
struct list$1sNode$ph* __result_obj__295;
    if(    self->len==0) {
        litem_475=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value394=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1274, "struct list_item$1sNode$ph*"))));
        litem_475->prev=((void*)0);
        litem_475->next=((void*)0);
        __dec_obj91=litem_475->item,
        litem_475->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_475;
        self->head=litem_475;
    }
    else if(    self->len==1) {
        litem_476=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value395=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1284, "struct list_item$1sNode$ph*"))));
        litem_476->prev=self->head;
        litem_476->next=((void*)0);
        __dec_obj92=litem_476->item,
        litem_476->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_476;
        self->head->next=litem_476;
    }
    else {
        litem_477=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value396=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1294, "struct list_item$1sNode$ph*"))));
        litem_477->prev=self->tail;
        litem_477->next=((void*)0);
        __dec_obj93=litem_477->item,
        litem_477->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_477;
        self->tail=litem_477;
    }
    self->len++;
    __result_obj__295 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__295;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
struct sIfNode* __result_obj__296;
void* __right_value404 = (void*)0;
struct sIfNode* result_480;
void* __right_value405 = (void*)0;
char* __dec_obj94;
void* __right_value406 = (void*)0;
struct sNode* __dec_obj95;
void* __right_value407 = (void*)0;
struct sBlock* __dec_obj96;
void* __right_value408 = (void*)0;
struct list$1sNode$ph* __dec_obj97;
void* __right_value409 = (void*)0;
struct list$1sBlock$ph* __dec_obj98;
void* __right_value410 = (void*)0;
struct sBlock* __dec_obj99;
struct sIfNode* __result_obj__297;
    if(    self==(void*)0) {
        __result_obj__296 = (void*)0;
        return __result_obj__296;
    }
    result_480=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode*"));
    if(    self!=((void*)0)) {
        result_480->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj94=result_480->sname,
        result_480->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_480->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj95=result_480->mExpressionNode,
        result_480->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj96=result_480->mIfBlock,
        result_480->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        /*b*/ come_call_finalizer3(__dec_obj96,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj97=result_480->mElifExpressionNodes,
        result_480->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mElifExpressionNodes));
        /*b*/ come_call_finalizer3(__dec_obj97,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj98=result_480->mElifBlocks,
        result_480->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->mElifBlocks));
        /*b*/ come_call_finalizer3(__dec_obj98,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_480->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_480->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj99=result_480->mElseBlock,
        result_480->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mElseBlock));
        /*b*/ come_call_finalizer3(__dec_obj99,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__297 = result_480;
    /*c*/ come_call_finalizer3(result_480,sIfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self){
struct sSaveRightValueObjects* __result_obj__298;
void* __right_value414 = (void*)0;
struct sSaveRightValueObjects* result_482;
void* __right_value415 = (void*)0;
char* __dec_obj100;
struct sSaveRightValueObjects* __result_obj__299;
    if(    self==(void*)0) {
        __result_obj__298 = (void*)0;
        return __result_obj__298;
    }
    result_482=(struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "sSaveRightValueObjects_clone", 3, "struct sSaveRightValueObjects*"));
    if(    self!=((void*)0)) {
        result_482->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj100=result_482->sname,
        result_482->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_482->sline_real=self->sline_real;
    }
    __result_obj__299 = result_482;
    /*c*/ come_call_finalizer3(result_482,sSaveRightValueObjects_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self){
struct sRestoreRightValueObjects* __result_obj__300;
void* __right_value419 = (void*)0;
struct sRestoreRightValueObjects* result_484;
void* __right_value420 = (void*)0;
char* __dec_obj101;
struct sRestoreRightValueObjects* __result_obj__301;
    if(    self==(void*)0) {
        __result_obj__300 = (void*)0;
        return __result_obj__300;
    }
    result_484=(struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "sRestoreRightValueObjects_clone", 3, "struct sRestoreRightValueObjects*"));
    if(    self!=((void*)0)) {
        result_484->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj101=result_484->sname,
        result_484->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_484->sline_real=self->sline_real;
    }
    __result_obj__301 = result_484;
    /*c*/ come_call_finalizer3(result_484,sRestoreRightValueObjects_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_487;
struct list$1sNode$ph* __result_obj__302;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_487=0;    i_487<num_value;    i_487++    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i_487]));
    }
    __result_obj__302 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__302,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self){
unsigned int result_488;
    result_488=0;
    result_488+=int_get_hash_key(((int)self->head));
    result_488+=int_get_hash_key(((int)self->tail));
    result_488+=int_get_hash_key(((int)self->len));
    result_488+=int_get_hash_key(((int)self->it));
    return result_488;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    if(    !list_item$1sNode$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sNode$ph_equals(struct list_item$1sNode$ph* left, struct list_item$1sNode$ph* right){
    if(    !sNode_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self){
struct sMultipleNode* __result_obj__303;
void* __right_value426 = (void*)0;
struct sMultipleNode* result_489;
void* __right_value427 = (void*)0;
char* __dec_obj102;
void* __right_value428 = (void*)0;
struct list$1sNode$ph* __dec_obj103;
struct sMultipleNode* __result_obj__304;
    if(    self==(void*)0) {
        __result_obj__303 = (void*)0;
        return __result_obj__303;
    }
    result_489=(struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "sMultipleNode_clone", 3, "struct sMultipleNode*"));
    if(    self!=((void*)0)) {
        result_489->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj102=result_489->sname,
        result_489->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        __dec_obj103=result_489->multiple_node,
        result_489->multiple_node=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->multiple_node));
        /*b*/ come_call_finalizer3(__dec_obj103,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->in_rescue=self->in_rescue;
    }
    __result_obj__304 = result_489;
    /*c*/ come_call_finalizer3(result_489,sMultipleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info){
void* __right_value430 = (void*)0;
char* sname_490;
int sline_491;
void* __right_value431 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_492=0;
char* Err_493=0;
int var_num_stack_495;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
char* __list_values3___496[2];
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1char$ph* multiple_assign_497;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sNode* get_return_value_498;
struct buffer* source_499;
char* p_500;
char* head_501;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct buffer* buf_502;
struct buffer* __dec_obj104;
void* __right_value441 = (void*)0;
struct sBlock* if_block_503;
struct buffer* __dec_obj105;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_504;
int elif_num_505;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1sBlock$ph* elif_blocks_506;
struct sBlock* else_block_507;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* expression_node2_508;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sNode* _inf_value5;
struct sIfNode* _inf_obj_value5;
void* __right_value450 = (void*)0;
struct sNode* if_node_509;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sNode* load_var_510;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* _inf_value6;
struct sSaveRightValueObjects* _inf_obj_value6;
void* __right_value456 = (void*)0;
struct sNode* save_right_value_objects_511;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* _inf_value7;
struct sRestoreRightValueObjects* _inf_obj_value7;
void* __right_value459 = (void*)0;
struct sNode* restore_right_value_objects_512;
struct sNode* __list_values4___514[5];
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct list$1sNode$ph* multiple_node_513;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sNode* _inf_value8;
struct sMultipleNode* _inf_obj_value8;
void* __right_value464 = (void*)0;
struct sNode* __result_obj__306;
    sname_490=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_491=info->sline;
    if(    info->comma_instead_of_semicolon) {
        multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value431=err_msg(info,"can't be called exception_throw in conditional expression")));
        come_exception_var_c1_492=multiple_assign_var2->v1;
        Err_493=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        ((Err_493)?(puts(Err_493),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value431,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(1);
        (Err_493 = come_decrement_ref_count(Err_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    static int var_num_494=0;
    var_num_494++;
    var_num_stack_495=var_num_494;
    multiple_assign_497=(struct list$1char$ph*)come_increment_ref_count((__list_values3___496[0]=((char*)(__right_value433=xsprintf("come_exception_var_b\%s",((char*)(__right_value432=int_to_string(var_num_stack_495)))))),
__list_values3___496[1]=((char*)(__right_value434=xsprintf("Err"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "08if.c", 602, "struct list$1char$ph")),2,__list_values3___496)));
    (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    get_return_value_498=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_497),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_499=(struct buffer*)come_increment_ref_count(info->source);
    p_500=info->p;
    head_501=info->head;
    buf_502=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 611, "struct buffer*"))));
    buffer_append_format(buf_502,"{ return none(Err); }");
    __dec_obj104=info->source,
    info->source=(struct buffer*)come_increment_ref_count(buf_502);
    /*b*/ come_call_finalizer3(__dec_obj104,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_491;
    if_block_503=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj105=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_499);
    /*b*/ come_call_finalizer3(__dec_obj105,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_500;
    info->head=head_501;
    info->sline=sline_491;
    elif_expression_nodes_504=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 627, "struct list$1sNode$ph*"))));
    elif_num_505=0;
    elif_blocks_506=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 630, "struct list$1sBlock$ph*"))));
    else_block_507=((void*)0);
    expression_node2_508=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value446=xsprintf("Err"))),info));
    (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 636, "struct sNode");
    _inf_obj_value5=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value449=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 636, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(expression_node2_508),if_block_503,elif_expression_nodes_504,elif_blocks_506,elif_num_505,else_block_507,(_Bool)0,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sIfNode_finalize;
    _inf_value5->clone=(void*)sIfNode_clone;
    _inf_value5->compile=(void*)sIfNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sIfNode_terminated;
    _inf_value5->kind=(void*)sIfNode_kind;
    if_node_509=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*c*/ come_call_finalizer3(__right_value449,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    load_var_510=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value452=xsprintf("come_exception_var_b\%s",((char*)(__right_value451=int_to_string(var_num_stack_495)))))),info));
    (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 639, "struct sNode");
    _inf_obj_value6=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value455=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 639, "struct sSaveRightValueObjects*")),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value6->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value6->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value6->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_511=(struct sNode*)come_increment_ref_count(_inf_value6);
    /*c*/ come_call_finalizer3(__right_value455,sSaveRightValueObjects_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 640, "struct sNode");
    _inf_obj_value7=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value458=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 640, "struct sRestoreRightValueObjects*")),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value7->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value7->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value7->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_512=(struct sNode*)come_increment_ref_count(_inf_value7);
    /*c*/ come_call_finalizer3(__right_value458,sRestoreRightValueObjects_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    multiple_node_513=(struct list$1sNode$ph*)come_increment_ref_count((__list_values4___514[0]=save_right_value_objects_511,
__list_values4___514[1]=get_return_value_498,
__list_values4___514[2]=if_node_509,
__list_values4___514[3]=restore_right_value_objects_512,
__list_values4___514[4]=load_var_510,
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 642, "struct list$1sNode$ph")),5,__list_values4___514)));
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 644, "struct sNode");
    _inf_obj_value8=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value463=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 644, "struct sMultipleNode*")),(struct list$1sNode$ph*)come_increment_ref_count(multiple_node_513),(_Bool)0,info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sMultipleNode_finalize;
    _inf_value8->clone=(void*)sMultipleNode_clone;
    _inf_value8->compile=(void*)sMultipleNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sMultipleNode_terminated;
    _inf_value8->kind=(void*)sMultipleNode_kind;
    __result_obj__306 = come_increment_ref_count(((struct sNode*)(__right_value464=_inf_value8)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_490 = come_decrement_ref_count(sname_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign_497,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((get_return_value_498) ? get_return_value_498 = come_decrement_ref_count(get_return_value_498, ((struct sNode*)get_return_value_498)->finalize, ((struct sNode*)get_return_value_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(source_499,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_502,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(if_block_503,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_504,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_506,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_507,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((expression_node2_508) ? expression_node2_508 = come_decrement_ref_count(expression_node2_508, ((struct sNode*)expression_node2_508)->finalize, ((struct sNode*)expression_node2_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((if_node_509) ? if_node_509 = come_decrement_ref_count(if_node_509, ((struct sNode*)if_node_509)->finalize, ((struct sNode*)if_node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((load_var_510) ? load_var_510 = come_decrement_ref_count(load_var_510, ((struct sNode*)load_var_510)->finalize, ((struct sNode*)load_var_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((save_right_value_objects_511) ? save_right_value_objects_511 = come_decrement_ref_count(save_right_value_objects_511, ((struct sNode*)save_right_value_objects_511)->finalize, ((struct sNode*)save_right_value_objects_511)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((restore_right_value_objects_512) ? restore_right_value_objects_512 = come_decrement_ref_count(restore_right_value_objects_512, ((struct sNode*)restore_right_value_objects_512)->finalize, ((struct sNode*)restore_right_value_objects_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(multiple_node_513,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value463,sMultipleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value464) ? __right_value464 = come_decrement_ref_count(__right_value464, ((struct sNode*)__right_value464)->finalize, ((struct sNode*)__right_value464)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__306;
}

struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info){
void* __right_value465 = (void*)0;
char* sname_515;
int sline_516;
int var_num_stack_518;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* __list_values5___519[2];
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1char$ph* multiple_assign_520;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* get_return_value_521;
struct buffer* source_522;
char* p_523;
char* head_524;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct buffer* buf_525;
struct buffer* __dec_obj106;
_Bool no_comma_526;
void* __right_value475 = (void*)0;
struct sNode* exp_527;
struct buffer* __dec_obj107;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* expression_node2_528;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sNode* cond_529;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* load_var_530;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sNode* _inf_value9;
struct sSaveRightValueObjects* _inf_obj_value9;
void* __right_value485 = (void*)0;
struct sNode* save_right_value_objects_531;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sNode* _inf_value10;
struct sRestoreRightValueObjects* _inf_obj_value10;
void* __right_value488 = (void*)0;
struct sNode* restore_right_value_objects_532;
struct sNode* __list_values6___534[5];
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1sNode$ph* multiple_node_533;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* _inf_value11;
struct sMultipleNode* _inf_obj_value11;
void* __right_value493 = (void*)0;
struct sNode* __result_obj__307;
    sname_515=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_516=info->sline;
    parse_sharp_v5(info);
    static int var_num_517=0;
    var_num_517++;
    var_num_stack_518=var_num_517;
    multiple_assign_520=(struct list$1char$ph*)come_increment_ref_count((__list_values5___519[0]=((char*)(__right_value467=xsprintf("come_exception_var_c\%s",((char*)(__right_value466=int_to_string(var_num_stack_518)))))),
__list_values5___519[1]=((char*)(__right_value468=xsprintf("Err"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "08if.c", 659, "struct list$1char$ph")),2,__list_values5___519)));
    (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value467 = come_decrement_ref_count(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    get_return_value_521=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_520),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_522=(struct buffer*)come_increment_ref_count(info->source);
    p_523=info->p;
    head_524=info->head;
    buf_525=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 668, "struct buffer*"))));
    buffer_append_str(buf_525,"puts(Err), exit(0)");
    __dec_obj106=info->source,
    info->source=(struct buffer*)come_increment_ref_count(buf_525);
    /*b*/ come_call_finalizer3(__dec_obj106,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_516;
    no_comma_526=info->no_comma;
    info->no_comma=(_Bool)0;
    exp_527=(struct sNode*)come_increment_ref_count(expression_v13(info));
    info->no_comma=no_comma_526;
    __dec_obj107=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_522);
    /*b*/ come_call_finalizer3(__dec_obj107,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_523;
    info->head=head_524;
    info->sline=sline_516;
    expression_node2_528=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value476=xsprintf("Err"))),info));
    (__right_value476 = come_decrement_ref_count(__right_value476, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cond_529=(struct sNode*)come_increment_ref_count(conditional_node((struct sNode*)come_increment_ref_count(expression_node2_528),(struct sNode*)come_increment_ref_count(exp_527),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    load_var_530=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value481=xsprintf("come_exception_var_c\%s",((char*)(__right_value480=int_to_string(var_num_stack_518)))))),info));
    (__right_value480 = come_decrement_ref_count(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value481 = come_decrement_ref_count(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 692, "struct sNode");
    _inf_obj_value9=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value484=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 692, "struct sSaveRightValueObjects*")),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value9->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value9->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value9->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_531=(struct sNode*)come_increment_ref_count(_inf_value9);
    /*c*/ come_call_finalizer3(__right_value484,sSaveRightValueObjects_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 693, "struct sNode");
    _inf_obj_value10=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value487=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 693, "struct sRestoreRightValueObjects*")),info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value10->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value10->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value10->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_532=(struct sNode*)come_increment_ref_count(_inf_value10);
    /*c*/ come_call_finalizer3(__right_value487,sRestoreRightValueObjects_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    multiple_node_533=(struct list$1sNode$ph*)come_increment_ref_count((__list_values6___534[0]=save_right_value_objects_531,
__list_values6___534[1]=get_return_value_521,
__list_values6___534[2]=cond_529,
__list_values6___534[3]=restore_right_value_objects_532,
__list_values6___534[4]=load_var_530,
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 695, "struct list$1sNode$ph")),5,__list_values6___534)));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 697, "struct sNode");
    _inf_obj_value11=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value492=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 697, "struct sMultipleNode*")),(struct list$1sNode$ph*)come_increment_ref_count(multiple_node_533),(_Bool)0,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sMultipleNode_finalize;
    _inf_value11->clone=(void*)sMultipleNode_clone;
    _inf_value11->compile=(void*)sMultipleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sMultipleNode_terminated;
    _inf_value11->kind=(void*)sMultipleNode_kind;
    __result_obj__307 = come_increment_ref_count(((struct sNode*)(__right_value493=_inf_value11)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_515 = come_decrement_ref_count(sname_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign_520,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((get_return_value_521) ? get_return_value_521 = come_decrement_ref_count(get_return_value_521, ((struct sNode*)get_return_value_521)->finalize, ((struct sNode*)get_return_value_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(source_522,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_525,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp_527) ? exp_527 = come_decrement_ref_count(exp_527, ((struct sNode*)exp_527)->finalize, ((struct sNode*)exp_527)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((expression_node2_528) ? expression_node2_528 = come_decrement_ref_count(expression_node2_528, ((struct sNode*)expression_node2_528)->finalize, ((struct sNode*)expression_node2_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((cond_529) ? cond_529 = come_decrement_ref_count(cond_529, ((struct sNode*)cond_529)->finalize, ((struct sNode*)cond_529)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((load_var_530) ? load_var_530 = come_decrement_ref_count(load_var_530, ((struct sNode*)load_var_530)->finalize, ((struct sNode*)load_var_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((save_right_value_objects_531) ? save_right_value_objects_531 = come_decrement_ref_count(save_right_value_objects_531, ((struct sNode*)save_right_value_objects_531)->finalize, ((struct sNode*)save_right_value_objects_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((restore_right_value_objects_532) ? restore_right_value_objects_532 = come_decrement_ref_count(restore_right_value_objects_532, ((struct sNode*)restore_right_value_objects_532)->finalize, ((struct sNode*)restore_right_value_objects_532)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(multiple_node_533,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value492,sMultipleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value493) ? __right_value493 = come_decrement_ref_count(__right_value493, ((struct sNode*)__right_value493)->finalize, ((struct sNode*)__right_value493)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__307;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value494 = (void*)0;
char* sname_535;
int sline_536;
int sline_real_537;
void* __right_value495 = (void*)0;
struct sNode* expression_node_538;
void* __right_value496 = (void*)0;
struct sBlock* if_block_539;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_540;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1sBlock$ph* elif_blocks_541;
int elif_num_542;
struct sBlock* else_block_543;
char* saved_p_544;
int saved_sline_545;
void* __right_value501 = (void*)0;
char* buf_546;
int sline_real_547;
void* __right_value502 = (void*)0;
struct sNode* expression_node_548;
void* __right_value503 = (void*)0;
struct sBlock* elif_block_549;
void* __right_value507 = (void*)0;
struct sBlock* __dec_obj111;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value510 = (void*)0;
struct sNode* result_553;
struct sNode* __result_obj__309;
void* __right_value511 = (void*)0;
struct sNode* __result_obj__310;
    if(    charp_operator_equals(buf,"if")) {
        sname_535=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        sline_536=info->sline;
        sline_real_537=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_538=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_539=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_540=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 720, "struct list$1sNode$ph*"))));
        elif_blocks_541=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 722, "struct list$1sBlock$ph*"))));
        elif_num_542=0;
        else_block_543=((void*)0);
        while(1) {
            saved_p_544=info->p;
            saved_sline_545=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                break;
            }
            parse_sharp_v5(info);
            buf_546=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_546,"else")) {
                sline_real_547=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_548=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(elif_expression_nodes_540,(struct sNode*)come_increment_ref_count(expression_node_548));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_549=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlock$ph_push_back(elif_blocks_541,(struct sBlock*)come_increment_ref_count(elif_block_549));
                    elif_num_542++;
                    ((expression_node_548) ? expression_node_548 = come_decrement_ref_count(expression_node_548, ((struct sNode*)expression_node_548)->finalize, ((struct sNode*)expression_node_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(elif_block_549,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    __dec_obj111=else_block_543,
                    else_block_543=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj111,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (buf_546 = come_decrement_ref_count(buf_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                info->sline_real=sline_real_547;
            }
            else {
                info->p=saved_p_544;
                info->sline=saved_sline_545;
                (buf_546 = come_decrement_ref_count(buf_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (buf_546 = come_decrement_ref_count(buf_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 785, "struct sNode");
        _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value509=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 785, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(expression_node_538),if_block_539,elif_expression_nodes_540,elif_blocks_541,elif_num_542,else_block_543,(_Bool)0,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sIfNode_finalize;
        _inf_value12->clone=(void*)sIfNode_clone;
        _inf_value12->compile=(void*)sIfNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sIfNode_terminated;
        _inf_value12->kind=(void*)sIfNode_kind;
        result_553=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*c*/ come_call_finalizer3(__right_value509,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_537;
        __result_obj__309 = come_increment_ref_count(result_553);
        (sname_535 = come_decrement_ref_count(sname_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((expression_node_538) ? expression_node_538 = come_decrement_ref_count(expression_node_538, ((struct sNode*)expression_node_538)->finalize, ((struct sNode*)expression_node_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(if_block_539,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_expression_nodes_540,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_blocks_541,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(else_block_543,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((result_553) ? result_553 = come_decrement_ref_count(result_553, ((struct sNode*)result_553)->finalize, ((struct sNode*)result_553)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__309;
        (sname_535 = come_decrement_ref_count(sname_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((expression_node_538) ? expression_node_538 = come_decrement_ref_count(expression_node_538, ((struct sNode*)expression_node_538)->finalize, ((struct sNode*)expression_node_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(if_block_539,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_expression_nodes_540,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(elif_blocks_541,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(else_block_543,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((result_553) ? result_553 = come_decrement_ref_count(result_553, ((struct sNode*)result_553)->finalize, ((struct sNode*)result_553)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__310 = come_increment_ref_count(((struct sNode*)(__right_value511=string_node_v7(buf,head,head_sline,info))));
    ((__right_value511) ? __right_value511 = come_decrement_ref_count(__right_value511, ((struct sNode*)__right_value511)->finalize, ((struct sNode*)__right_value511)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__310) ? __result_obj__310 = come_decrement_ref_count(__result_obj__310, ((struct sNode*)__result_obj__310)->finalize, ((struct sNode*)__result_obj__310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__310;
}

static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value504 = (void*)0;
struct list_item$1sBlock$ph* litem_550;
struct sBlock* __dec_obj108;
void* __right_value505 = (void*)0;
struct list_item$1sBlock$ph* litem_551;
struct sBlock* __dec_obj109;
void* __right_value506 = (void*)0;
struct list_item$1sBlock$ph* litem_552;
struct sBlock* __dec_obj110;
struct list$1sBlock$ph* __result_obj__308;
    if(    self->len==0) {
        litem_550=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value504=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1274, "struct list_item$1sBlock$ph*"))));
        litem_550->prev=((void*)0);
        litem_550->next=((void*)0);
        __dec_obj108=litem_550->item,
        litem_550->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj108,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_550;
        self->head=litem_550;
    }
    else if(    self->len==1) {
        litem_551=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value505=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1284, "struct list_item$1sBlock$ph*"))));
        litem_551->prev=self->head;
        litem_551->next=((void*)0);
        __dec_obj109=litem_551->item,
        litem_551->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj109,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_551;
        self->head->next=litem_551;
    }
    else {
        litem_552=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value506=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1294, "struct list_item$1sBlock$ph*"))));
        litem_552->prev=self->tail;
        litem_552->next=((void*)0);
        __dec_obj110=litem_552->item,
        litem_552->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj110,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_552;
        self->tail=litem_552;
    }
    self->len++;
    __result_obj__308 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value512 = (void*)0;
char* sname_554;
int sline_555;
void* __right_value513 = (void*)0;
struct sBlock* if_block_556;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value13;
struct sOrStatmentNode* _inf_obj_value13;
void* __right_value520 = (void*)0;
struct sNode* __result_obj__313;
    sname_554=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_555=info->sline;
    parse_sharp_v5(info);
    if_block_556=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 803, "struct sNode");
    _inf_obj_value13=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value515=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 803, "struct sOrStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_556,info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value13->clone=(void*)sOrStatmentNode_clone;
    _inf_value13->compile=(void*)sOrStatmentNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value13->kind=(void*)sOrStatmentNode_kind;
    __result_obj__313 = come_increment_ref_count(((struct sNode*)(__right_value520=_inf_value13)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_554 = come_decrement_ref_count(sname_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(if_block_556,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value515,sOrStatmentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value520) ? __right_value520 = come_decrement_ref_count(__right_value520, ((struct sNode*)__right_value520)->finalize, ((struct sNode*)__right_value520)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__313;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
struct sOrStatmentNode* __result_obj__311;
void* __right_value516 = (void*)0;
struct sOrStatmentNode* result_557;
void* __right_value517 = (void*)0;
char* __dec_obj112;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj113;
void* __right_value519 = (void*)0;
struct sBlock* __dec_obj114;
struct sOrStatmentNode* __result_obj__312;
    if(    self==(void*)0) {
        __result_obj__311 = (void*)0;
        return __result_obj__311;
    }
    result_557=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode*"));
    if(    self!=((void*)0)) {
        result_557->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj112=result_557->sname,
        result_557->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj113=result_557->mExpressionNode,
        result_557->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj114=result_557->mIfBlock,
        result_557->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        /*b*/ come_call_finalizer3(__dec_obj114,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__312 = result_557;
    /*c*/ come_call_finalizer3(result_557,sOrStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value521 = (void*)0;
char* sname_558;
int sline_559;
void* __right_value522 = (void*)0;
struct sBlock* if_block_560;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sNode* _inf_value14;
struct sAndStatmentNode* _inf_obj_value14;
void* __right_value529 = (void*)0;
struct sNode* __result_obj__316;
    sname_558=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_559=info->sline;
    parse_sharp_v5(info);
    if_block_560=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 815, "struct sNode");
    _inf_obj_value14=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value524=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 815, "struct sAndStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_560,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value14->clone=(void*)sAndStatmentNode_clone;
    _inf_value14->compile=(void*)sAndStatmentNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value14->kind=(void*)sAndStatmentNode_kind;
    __result_obj__316 = come_increment_ref_count(((struct sNode*)(__right_value529=_inf_value14)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_558 = come_decrement_ref_count(sname_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(if_block_560,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value524,sAndStatmentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value529) ? __right_value529 = come_decrement_ref_count(__right_value529, ((struct sNode*)__right_value529)->finalize, ((struct sNode*)__right_value529)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__316;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
struct sAndStatmentNode* __result_obj__314;
void* __right_value525 = (void*)0;
struct sAndStatmentNode* result_561;
void* __right_value526 = (void*)0;
char* __dec_obj115;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj116;
void* __right_value528 = (void*)0;
struct sBlock* __dec_obj117;
struct sAndStatmentNode* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_561=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode*"));
    if(    self!=((void*)0)) {
        result_561->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_561->sname,
        result_561->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_561->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj116=result_561->mExpressionNode,
        result_561->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj117=result_561->mIfBlock,
        result_561->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        /*b*/ come_call_finalizer3(__dec_obj117,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__315 = result_561;
    /*c*/ come_call_finalizer3(result_561,sAndStatmentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __right_value530 = (void*)0;
char* sname_562;
int sline_563;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* it_node_564;
void* __right_value533 = (void*)0;
struct sNode* conditional_value_565;
void* __right_value534 = (void*)0;
struct sBlock* if_block_566;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_567;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct list$1sBlock$ph* elif_blocks_568;
int elif_num_569;
struct sBlock* else_block_570;
void* __right_value539 = (void*)0;
struct sBlock* __dec_obj118;
void* __right_value540 = (void*)0;
struct sNode* conditional_value_571;
void* __right_value541 = (void*)0;
struct sBlock* elif_block_572;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sBlock* __dec_obj119;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sNode* _inf_value15;
struct sIfNode* _inf_obj_value15;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sNode* _inf_value16;
struct sMatchNode* _inf_obj_value16;
void* __right_value554 = (void*)0;
struct sNode* __result_obj__319;
    sname_562=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_563=info->sline;
    expected_next_character(123,info);
    it_node_564=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    expected_next_character(40,info);
    conditional_value_565=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_566=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_567=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 836, "struct list$1sNode$ph*"))));
    elif_blocks_568=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 837, "struct list$1sBlock$ph*"))));
    elif_num_569=0;
    else_block_570=((void*)0);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj118=else_block_570,
            else_block_570=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            /*b*/ come_call_finalizer3(__dec_obj118,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_571=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(elif_expression_nodes_567,(struct sNode*)come_increment_ref_count(conditional_value_571));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_572=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlock$ph_add(elif_blocks_568,(struct sBlock*)come_increment_ref_count(elif_block_572));
            elif_num_569++;
            ((conditional_value_571) ? conditional_value_571 = come_decrement_ref_count(conditional_value_571, ((struct sNode*)conditional_value_571)->finalize, ((struct sNode*)conditional_value_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(elif_block_572,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_570==((void*)0)) {
        __dec_obj119=else_block_570,
        else_block_570=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 875, "struct sBlock*")),info));
        /*b*/ come_call_finalizer3(__dec_obj119,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_570->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_570->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode");
    _inf_obj_value15=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value547=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 881, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_value_565),if_block_566,elif_expression_nodes_567,elif_blocks_568,elif_num_569,else_block_570,(_Bool)0,info))));
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
    _inf_obj_value16=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value549=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "08if.c", 881, "struct sMatchNode*")),(struct sNode*)come_increment_ref_count(it_node_564),(struct sNode*)come_increment_ref_count(_inf_value15),info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sMatchNode_finalize;
    _inf_value16->clone=(void*)sMatchNode_clone;
    _inf_value16->compile=(void*)sMatchNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sMatchNode_terminated;
    _inf_value16->kind=(void*)sMatchNode_kind;
    __result_obj__319 = come_increment_ref_count(((struct sNode*)(__right_value554=_inf_value16)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_562 = come_decrement_ref_count(sname_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_564) ? it_node_564 = come_decrement_ref_count(it_node_564, ((struct sNode*)it_node_564)->finalize, ((struct sNode*)it_node_564)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_value_565) ? conditional_value_565 = come_decrement_ref_count(conditional_value_565, ((struct sNode*)conditional_value_565)->finalize, ((struct sNode*)conditional_value_565)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_566,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_567,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_568,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_570,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value547,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value549,sMatchNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value554) ? __right_value554 = come_decrement_ref_count(__right_value554, ((struct sNode*)__right_value554)->finalize, ((struct sNode*)__right_value554)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__319;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
struct sMatchNode* __result_obj__317;
void* __right_value550 = (void*)0;
struct sMatchNode* result_573;
void* __right_value551 = (void*)0;
char* __dec_obj120;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj121;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj122;
struct sMatchNode* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__317 = (void*)0;
        return __result_obj__317;
    }
    result_573=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode*"));
    if(    self!=((void*)0)) {
        result_573->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj120=result_573->sname,
        result_573->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_573->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj121=result_573->it_node,
        result_573->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj122=result_573->match_node,
        result_573->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__318 = result_573;
    /*c*/ come_call_finalizer3(result_573,sMatchNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value555 = (void*)0;
char* sname_574;
int sline_575;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* it_node_576;
void* __right_value558 = (void*)0;
struct sNode* conditional_node_577;
void* __right_value559 = (void*)0;
struct sBlock* if_block_578;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_579;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1sBlock$ph* elif_blocks_580;
int elif_num_581;
struct sBlock* else_block_582;
char* saved_p_583;
int saved_sline_584;
void* __right_value564 = (void*)0;
char* buf_585;
void* __right_value565 = (void*)0;
struct sNode* expression_node_586;
void* __right_value566 = (void*)0;
struct sBlock* elif_block_587;
void* __right_value567 = (void*)0;
struct sBlock* __dec_obj123;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sBlock* __dec_obj124;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* _inf_value17;
struct sIfNode* _inf_obj_value17;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* _inf_value18;
struct sIfMethodNode* _inf_obj_value18;
void* __right_value580 = (void*)0;
struct sNode* result_588;
struct sNode* __result_obj__322;
    sname_574=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_575=info->sline;
    it_node_576=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_577=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_578=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_579=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 897, "struct list$1sNode$ph*"))));
    elif_blocks_580=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 899, "struct list$1sBlock$ph*"))));
    elif_num_581=0;
    else_block_582=((void*)0);
    while(1) {
        saved_p_583=info->p;
        saved_sline_584=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_585=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_585,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_586=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_579,(struct sNode*)come_increment_ref_count(expression_node_586));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_587=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_580,(struct sBlock*)come_increment_ref_count(elif_block_587));
                elif_num_581++;
                ((expression_node_586) ? expression_node_586 = come_decrement_ref_count(expression_node_586, ((struct sNode*)expression_node_586)->finalize, ((struct sNode*)expression_node_586)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_587,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj123=else_block_582,
                else_block_582=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj123,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_585 = come_decrement_ref_count(buf_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_583;
            info->sline=saved_sline_584;
            (buf_585 = come_decrement_ref_count(buf_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_585 = come_decrement_ref_count(buf_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_582==((void*)0)) {
        __dec_obj124=else_block_582,
        else_block_582=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 960, "struct sBlock*")),info));
        /*b*/ come_call_finalizer3(__dec_obj124,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_582->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_582->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode");
    _inf_obj_value17=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value573=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 966, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node_577),if_block_578,elif_expression_nodes_579,elif_blocks_580,elif_num_581,else_block_582,(_Bool)0,info))));
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
    _inf_obj_value18=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value575=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 966, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_576),(struct sNode*)come_increment_ref_count(_inf_value17),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIfMethodNode_finalize;
    _inf_value18->clone=(void*)sIfMethodNode_clone;
    _inf_value18->compile=(void*)sIfMethodNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sIfMethodNode_terminated;
    _inf_value18->kind=(void*)sIfMethodNode_kind;
    result_588=(struct sNode*)come_increment_ref_count(_inf_value18);
    /*c*/ come_call_finalizer3(__right_value573,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value575,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__322 = come_increment_ref_count(result_588);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_574 = come_decrement_ref_count(sname_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_576) ? it_node_576 = come_decrement_ref_count(it_node_576, ((struct sNode*)it_node_576)->finalize, ((struct sNode*)it_node_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_577) ? conditional_node_577 = come_decrement_ref_count(conditional_node_577, ((struct sNode*)conditional_node_577)->finalize, ((struct sNode*)conditional_node_577)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_578,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_579,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_580,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_582,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_588) ? result_588 = come_decrement_ref_count(result_588, ((struct sNode*)result_588)->finalize, ((struct sNode*)result_588)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__322;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
struct sIfMethodNode* __result_obj__320;
void* __right_value576 = (void*)0;
struct sIfMethodNode* result_589;
void* __right_value577 = (void*)0;
char* __dec_obj125;
void* __right_value578 = (void*)0;
struct sNode* __dec_obj126;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj127;
struct sIfMethodNode* __result_obj__321;
    if(    self==(void*)0) {
        __result_obj__320 = (void*)0;
        return __result_obj__320;
    }
    result_589=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode*"));
    if(    self!=((void*)0)) {
        result_589->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj125=result_589->sname,
        result_589->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_589->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj126=result_589->it_node,
        result_589->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj127=result_589->match_node,
        result_589->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__321 = result_589;
    /*c*/ come_call_finalizer3(result_589,sIfMethodNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value581 = (void*)0;
char* sname_590;
int sline_591;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* it_node_592;
void* __right_value584 = (void*)0;
struct sNode* conditional_node_593;
void* __right_value585 = (void*)0;
struct sNode* conditional_node2_594;
void* __right_value586 = (void*)0;
struct sBlock* if_block_595;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_596;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1sBlock$ph* elif_blocks_597;
int elif_num_598;
struct sBlock* else_block_599;
char* saved_p_600;
int saved_sline_601;
void* __right_value591 = (void*)0;
char* buf_602;
void* __right_value592 = (void*)0;
struct sNode* expression_node_603;
void* __right_value593 = (void*)0;
struct sBlock* elif_block_604;
void* __right_value594 = (void*)0;
struct sBlock* __dec_obj128;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sBlock* __dec_obj129;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value19;
struct sIfNode* _inf_obj_value19;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* _inf_value20;
struct sIfMethodNode* _inf_obj_value20;
void* __right_value603 = (void*)0;
struct sNode* result_605;
struct sNode* __result_obj__323;
    sname_590=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_591=info->sline;
    it_node_592=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_593=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_594=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_593),info));
    parse_sharp_v5(info);
    if_block_595=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_596=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 985, "struct list$1sNode$ph*"))));
    elif_blocks_597=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 987, "struct list$1sBlock$ph*"))));
    elif_num_598=0;
    else_block_599=((void*)0);
    while(1) {
        saved_p_600=info->p;
        saved_sline_601=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_602=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_602,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_603=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_596,(struct sNode*)come_increment_ref_count(expression_node_603));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_604=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_597,(struct sBlock*)come_increment_ref_count(elif_block_604));
                elif_num_598++;
                ((expression_node_603) ? expression_node_603 = come_decrement_ref_count(expression_node_603, ((struct sNode*)expression_node_603)->finalize, ((struct sNode*)expression_node_603)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_604,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj128=else_block_599,
                else_block_599=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj128,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_602 = come_decrement_ref_count(buf_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_600;
            info->sline=saved_sline_601;
            (buf_602 = come_decrement_ref_count(buf_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_602 = come_decrement_ref_count(buf_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_599==((void*)0)) {
        __dec_obj129=else_block_599,
        else_block_599=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1048, "struct sBlock*")),info));
        /*b*/ come_call_finalizer3(__dec_obj129,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_599->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_599->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode");
    _inf_obj_value19=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value600=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1054, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_594),if_block_595,elif_expression_nodes_596,elif_blocks_597,elif_num_598,else_block_599,(_Bool)0,info))));
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
    _inf_obj_value20=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value602=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1054, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_592),(struct sNode*)come_increment_ref_count(_inf_value19),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sIfMethodNode_finalize;
    _inf_value20->clone=(void*)sIfMethodNode_clone;
    _inf_value20->compile=(void*)sIfMethodNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sIfMethodNode_terminated;
    _inf_value20->kind=(void*)sIfMethodNode_kind;
    result_605=(struct sNode*)come_increment_ref_count(_inf_value20);
    /*c*/ come_call_finalizer3(__right_value600,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value602,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__323 = come_increment_ref_count(result_605);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_590 = come_decrement_ref_count(sname_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_592) ? it_node_592 = come_decrement_ref_count(it_node_592, ((struct sNode*)it_node_592)->finalize, ((struct sNode*)it_node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_593) ? conditional_node_593 = come_decrement_ref_count(conditional_node_593, ((struct sNode*)conditional_node_593)->finalize, ((struct sNode*)conditional_node_593)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_594) ? conditional_node2_594 = come_decrement_ref_count(conditional_node2_594, ((struct sNode*)conditional_node2_594)->finalize, ((struct sNode*)conditional_node2_594)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_595,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_596,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_597,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_599,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_605) ? result_605 = come_decrement_ref_count(result_605, ((struct sNode*)result_605)->finalize, ((struct sNode*)result_605)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__323;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value604 = (void*)0;
char* sname_606;
int sline_607;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* it_node_608;
void* __right_value607 = (void*)0;
struct sNode* conditional_node_609;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* conditional_node2_610;
void* __right_value610 = (void*)0;
struct sBlock* if_block_611;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_612;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1sBlock$ph* elif_blocks_613;
int elif_num_614;
struct sBlock* else_block_615;
char* saved_p_616;
int saved_sline_617;
void* __right_value615 = (void*)0;
char* buf_618;
void* __right_value616 = (void*)0;
struct sNode* expression_node_619;
void* __right_value617 = (void*)0;
struct sBlock* elif_block_620;
void* __right_value618 = (void*)0;
struct sBlock* __dec_obj130;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sBlock* __dec_obj131;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* _inf_value21;
struct sIfNode* _inf_obj_value21;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sNode* _inf_value22;
struct sIfMethodNode* _inf_obj_value22;
void* __right_value627 = (void*)0;
struct sNode* result_621;
struct sNode* __result_obj__324;
    sname_606=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_607=info->sline;
    it_node_608=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_609=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_610=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_609),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_611=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_612=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 1073, "struct list$1sNode$ph*"))));
    elif_blocks_613=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 1075, "struct list$1sBlock$ph*"))));
    elif_num_614=0;
    else_block_615=((void*)0);
    while(1) {
        saved_p_616=info->p;
        saved_sline_617=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_618=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_618,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_619=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_612,(struct sNode*)come_increment_ref_count(expression_node_619));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_620=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_613,(struct sBlock*)come_increment_ref_count(elif_block_620));
                elif_num_614++;
                ((expression_node_619) ? expression_node_619 = come_decrement_ref_count(expression_node_619, ((struct sNode*)expression_node_619)->finalize, ((struct sNode*)expression_node_619)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(elif_block_620,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                __dec_obj130=else_block_615,
                else_block_615=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                /*b*/ come_call_finalizer3(__dec_obj130,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_618 = come_decrement_ref_count(buf_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_616;
            info->sline=saved_sline_617;
            (buf_618 = come_decrement_ref_count(buf_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_618 = come_decrement_ref_count(buf_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_615==((void*)0)) {
        __dec_obj131=else_block_615,
        else_block_615=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1136, "struct sBlock*")),info));
        /*b*/ come_call_finalizer3(__dec_obj131,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_615->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_615->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode");
    _inf_obj_value21=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value624=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1142, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_610),if_block_611,elif_expression_nodes_612,elif_blocks_613,elif_num_614,else_block_615,(_Bool)0,info))));
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
    _inf_obj_value22=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value626=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1142, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_608),(struct sNode*)come_increment_ref_count(_inf_value21),info))));
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sIfMethodNode_finalize;
    _inf_value22->clone=(void*)sIfMethodNode_clone;
    _inf_value22->compile=(void*)sIfMethodNode_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sline_real=(void*)sNodeBase_sline_real;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sIfMethodNode_terminated;
    _inf_value22->kind=(void*)sIfMethodNode_kind;
    result_621=(struct sNode*)come_increment_ref_count(_inf_value22);
    /*c*/ come_call_finalizer3(__right_value624,sIfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value626,sIfMethodNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__324 = come_increment_ref_count(result_621);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_606 = come_decrement_ref_count(sname_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_608) ? it_node_608 = come_decrement_ref_count(it_node_608, ((struct sNode*)it_node_608)->finalize, ((struct sNode*)it_node_608)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_609) ? conditional_node_609 = come_decrement_ref_count(conditional_node_609, ((struct sNode*)conditional_node_609)->finalize, ((struct sNode*)conditional_node_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_610) ? conditional_node2_610 = come_decrement_ref_count(conditional_node2_610, ((struct sNode*)conditional_node2_610)->finalize, ((struct sNode*)conditional_node2_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(if_block_611,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_expression_nodes_612,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(elif_blocks_613,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block_615,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((result_621) ? result_621 = come_decrement_ref_count(result_621, ((struct sNode*)result_621)->finalize, ((struct sNode*)result_621)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__324;
}

