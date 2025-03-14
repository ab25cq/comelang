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
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self);
static void list$1char$p_finalize(struct list$1char$p* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct list$1sVar$ph* list$1sVar$ph$p_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph$p_add(struct list$1sVar$ph* self, struct sVar* item);
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
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info);
_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self);
char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self);
_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info);
static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self);
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
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
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
static struct list$1sBlock$ph* list$1sBlock$ph$p_push_back(struct list$1sBlock$ph* self, struct sBlock* item);
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
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1489, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1499, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1509, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1489, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1499, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1509, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1489, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1499, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1509, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1489, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1499, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1509, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1489, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1499, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1509, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1489, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1499, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1509, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1489, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1499, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1509, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2306, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "./comelang.h", 2433, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2306, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "./comelang.h", 2433, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2306, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "./comelang.h", 2433, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2306, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "./comelang.h", 2433, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2306, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "./comelang.h", 2433, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2306, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "./comelang.h", 2433, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2306, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "./comelang.h", 2433, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1489, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1499, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1509, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __right_value259 = (void*)0;
void* __right_value261 = (void*)0;
struct sNode* __dec_obj23;
void* __right_value334 = (void*)0;
struct sBlock* __dec_obj57;
void* __right_value335 = (void*)0;
struct list$1sNode$ph* __dec_obj58;
void* __right_value343 = (void*)0;
struct list$1sBlock$ph* __dec_obj62;
void* __right_value344 = (void*)0;
struct sBlock* __dec_obj63;
struct sBlock* __dec_obj64;
struct sIfNode* __result_obj__289;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj23=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj57=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj57,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj58=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, elif_expression_nodes));
    come_call_finalizer3(__dec_obj58,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj62=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, elif_blocks));
    come_call_finalizer3(__dec_obj62,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj63=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, else_block));
        come_call_finalizer3(__dec_obj63,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj64=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer3(__dec_obj64,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__289 = come_increment_ref_count(self);
    come_call_finalizer3(self,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__289,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__289;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __right_value345 = (void*)0;
char* __result_obj__290;
    __result_obj__290 = come_increment_ref_count(((char*)(__right_value345=__builtin_string("sIfNode"))));
    (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__290 = come_decrement_ref_count2(__result_obj__290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__290;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_443;
int i_444;
void* __right_value346 = (void*)0;
_Bool _if_conditional1;
void* __right_value347 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_448=0;
char* Err_449=0;
_Bool _if_conditional2;
_Bool __result_obj__293;
struct sBlock* else_block_450;
int elif_num_451;
_Bool guard__452;
char* if_result_var_name_453;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* if_result_type_454;
void* __right_value351 = (void*)0;
char* __dec_obj65;
void* __right_value352 = (void*)0;
struct sVar* var__456;
void* __right_value353 = (void*)0;
struct sNode* expression_node_457;
int sline_458;
char* sname_459;
_Bool comma_instead_of_semicolon_before_460;
_Bool Value_461;
_Bool __result_obj__294;
struct sBlock* if_block_462;
_Bool normal_if_463;
void* __right_value354 = (void*)0;
struct CVALUE* conditional_value_464;
struct sVar* var__465;
int num_if_conditional_stack_467;
void* __right_value355 = (void*)0;
struct CVALUE* conditional_value_468;
struct sVar* var__469;
int i_470;
void* __right_value356 = (void*)0;
struct sNode* expression_node2_471;
_Bool comma_instead_of_semicolon_before_475;
_Bool Value_476;
_Bool __result_obj__297;
void* __right_value357 = (void*)0;
struct sBlock* elif_node_block_477;
_Bool normal_if_478;
void* __right_value358 = (void*)0;
struct CVALUE* conditional_value_479;
void* __right_value359 = (void*)0;
struct CVALUE* conditional_value_480;
int num_elif_conditional_stack_482;
struct sVar* var__483;
int __exception_result_var_b1;
void* __right_value360 = (void*)0;
struct sNode* result_node_484;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj66;
_Bool Value_485;
_Bool __result_obj__298;
void* __right_value363 = (void*)0;
struct CVALUE* come_value2_486;
void* __right_value364 = (void*)0;
struct sType* __dec_obj67;
char* __dec_obj71;
_Bool __result_obj__300;
    existance_of_result_value_443=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_443=(_Bool)0;
        }
        for(        i_444=0;        i_444<self->mElifNum;        i_444++        ){
            if(            (_if_conditional1=(!((struct sBlock*)(__right_value346=list$1sBlock$ph$p_operator_load_element(self->mElifBlocks,i_444)))->mOmitSemicolon)),            come_call_finalizer3(__right_value346,sBlock_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                existance_of_result_value_443=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_443=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value347=err_msg(info,"In conditional operator comelang can't use if statment")));
        come_exception_var_1_448=multiple_assign_var1->v1;
        Err_449=(char*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        (_if_conditional2=(Err_449)),        come_call_finalizer3(__right_value347,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            __result_obj__293 = (_Bool)1;
            (Err_449 = come_decrement_ref_count2(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__293;
        }
        else {
        }
        (Err_449 = come_decrement_ref_count2(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else_block_450=self->mElseBlock;
    elif_num_451=self->mElifNum;
    guard__452=self->mGuard;
    if_result_var_name_453=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_443) {
        if_result_type_454=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "08if.c", 70, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        static int var_num_455=0;
        __dec_obj65=info->if_result_var_name;
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_455++));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, if_result_type_454)),info,(_Bool)0);
        var__456=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value353=make_define_var(var__456->mType,var__456->mCValueName,(_Bool)0,info))));
        (__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(if_result_type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    expression_node_457=self->mExpressionNode;
    sline_458=info->sline;
    sname_459=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_460=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    Value_461=node_compile(expression_node_457,info);
    if(    !Value_461) {
        __result_obj__294 = (_Bool)0;
        (if_result_var_name_453 = come_decrement_ref_count2(if_result_var_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__294;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_460;
    if_block_462=self->mIfBlock;
    normal_if_463=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_463=(_Bool)0;
    }
    if(    normal_if_463) {
        conditional_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        guard__452) {
            var__465=conditional_value_464->var;
            if(            var__465) {
                var__465->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"%s) {\n",conditional_value_464->c_value);
        come_call_finalizer3(conditional_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        static int num_if_conditional_466=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_466);
        num_if_conditional_stack_467=num_if_conditional_466;
        conditional_value_468=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        guard__452) {
            var__469=conditional_value_468->var;
            if(            var__469) {
                var__469->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_466,conditional_value_468->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_467);
        come_call_finalizer3(conditional_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_462,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_443);
    add_come_code(info,"}\n");
    if(    elif_num_451>0) {
        for(        i_470=0;        i_470<elif_num_451;        i_470++        ){
            expression_node2_471=((struct sNode*)(__right_value356=list$1sNode$ph$p_operator_load_element(self->mElifExpressionNodes,i_470)));
            ((__right_value356) ? __right_value356 = come_decrement_ref_count2(__right_value356, ((struct sNode*)__right_value356)->finalize, ((struct sNode*)__right_value356)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_475=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            Value_476=node_compile(expression_node2_471,info);
            if(            !Value_476) {
                __result_obj__297 = (_Bool)0;
                (if_result_var_name_453 = come_decrement_ref_count2(if_result_var_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__297;
            }
            else {
            }
            info->without_semicolon=(_Bool)0;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_475;
            elif_node_block_477=((struct sBlock*)(__right_value357=list$1sBlock$ph$p_operator_load_element(self->mElifBlocks,i_470)));
            come_call_finalizer3(__right_value357,sBlock_finalize, 0, 1, 0, 0, (void*)0);
            normal_if_478=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_478=(_Bool)0;
            }
            if(            normal_if_478) {
                conditional_value_479=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s) {\n",conditional_value_479->c_value);
                come_call_finalizer3(conditional_value_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_480=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                static int num_elif_conditional_481=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_481);
                num_elif_conditional_stack_482=num_elif_conditional_481;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_481,conditional_value_480->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_482);
                come_call_finalizer3(conditional_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_477,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_443);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_450) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_450,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_443);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_443) {
        var__483=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 204, 0),__exception_result_var_b1=assert_v2(var__483!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_484=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj66=result_node_484;
        result_node_484=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__483->mType)),(struct sNode*)come_increment_ref_count(result_node_484),info));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        Value_485=node_compile(result_node_484,info);
        if(        !Value_485) {
            __result_obj__298 = (_Bool)0;
            ((result_node_484) ? result_node_484 = come_decrement_ref_count2(result_node_484, ((struct sNode*)result_node_484)->finalize, ((struct sNode*)result_node_484)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (if_result_var_name_453 = come_decrement_ref_count2(if_result_var_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__298;
        }
        else {
        }
        come_value2_486=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj67=come_value2_486->type;
        come_value2_486->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__483->mType));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_486));
        ((result_node_484) ? result_node_484 = come_decrement_ref_count2(result_node_484, ((struct sNode*)result_node_484)->finalize, ((struct sNode*)result_node_484)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value2_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj71=info->if_result_var_name;
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_453);
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__300 = (_Bool)1;
    (if_result_var_name_453 = come_decrement_ref_count2(if_result_var_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__300;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__237;
void* __right_value260 = (void*)0;
struct sNode* result_350;
struct sNode* __result_obj__238;
    if(    self==(void*)0) {
        __result_obj__237 = come_increment_ref_count((void*)0);
        ((__result_obj__237) ? __result_obj__237 = come_decrement_ref_count2(__result_obj__237, ((struct sNode*)__result_obj__237)->finalize, ((struct sNode*)__result_obj__237)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__237;
    }
    result_350=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_350->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_350->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_350->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_350->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_350->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_350->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_350->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_350->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_350->kind=self->kind;
    }
    __result_obj__238 = come_increment_ref_count(result_350);
    ((result_350) ? result_350 = come_decrement_ref_count2(result_350, ((struct sNode*)result_350)->finalize, ((struct sNode*)result_350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__238) ? __result_obj__238 = come_decrement_ref_count2(__result_obj__238, ((struct sNode*)__result_obj__238)->finalize, ((struct sNode*)__result_obj__238)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__238;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__239;
void* __right_value262 = (void*)0;
struct sBlock* result_351;
void* __right_value270 = (void*)0;
struct list$1sNode$ph* __dec_obj27;
void* __right_value333 = (void*)0;
struct sVarTable* __dec_obj56;
struct sBlock* __result_obj__284;
    if(    self==(void*)0) {
        __result_obj__239 = (void*)0;
        return __result_obj__239;
    }
    result_351=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj27=result_351->mNodes;
        result_351->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj27,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj56=result_351->mVarTable;
        result_351->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj56,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_351->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__284 = result_351;
    come_call_finalizer3(result_351,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__284;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__240;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1sNode$ph* result_354;
struct list_item$1sNode$ph* it_355;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNode$ph* __result_obj__243;
    if(    self==((void*)0)) {
        __result_obj__240 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__240,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_354=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_355=self->head;
    while(it_355!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_354,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_355->item)));
        }
        else {
            list$1sNode$ph$p_add(result_354,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_355->item)));
        }
        it_355=it_355->next;
    }
    __result_obj__243 = come_increment_ref_count(result_354);
    come_call_finalizer3(result_354,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_352;
struct list_item$1sNode$ph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__241;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value265 = (void*)0;
struct list_item$1sNode$ph* litem_356;
struct sNode* __dec_obj24;
void* __right_value266 = (void*)0;
struct list_item$1sNode$ph* litem_357;
struct sNode* __dec_obj25;
void* __right_value267 = (void*)0;
struct list_item$1sNode$ph* litem_358;
struct sNode* __dec_obj26;
struct list$1sNode$ph* __result_obj__242;
    if(    self->len==0) {
        litem_356=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value265=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1419, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_356->prev=((void*)0);
        litem_356->next=((void*)0);
        __dec_obj24=litem_356->item;
        litem_356->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value266=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1429, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj25=litem_357->item;
        litem_357->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value267=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1439, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj26=litem_358->item;
        litem_358->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_358;
        self->tail=litem_358;
    }
    self->len++;
    __result_obj__242 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__242;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_359;
struct list_item$1sNode$ph* prev_it_360;
    it_359=self->head;
    while(it_359!=((void*)0)) {
        prev_it_360=it_359;
        it_359=it_359->next;
        come_call_finalizer3(prev_it_360,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__244;
void* __right_value271 = (void*)0;
struct sVarTable* result_361;
void* __right_value332 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj55;
struct sVarTable* __result_obj__283;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__244,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__244;
    }
    result_361=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj55=result_361->mVars;
        result_361->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj55,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_361->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_361->mParent=self->mParent;
    }
    __result_obj__283 = come_increment_ref_count(result_361);
    come_call_finalizer3(result_361,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__283,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__283;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__245;
void* __right_value272 = (void*)0;
void* __right_value278 = (void*)0;
struct map$2char$phsVar$ph* result_369;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1char$p* __dec_obj29;
char* it_372;
struct sVar* default_value_375;
void* __right_value281 = (void*)0;
struct sVar* it2_378;
void* __right_value287 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__282;
default_value_375 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__245 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__245,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__245;
    }
    result_369=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2766, "struct map$2char$phsVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj29=result_369->key_list;
    result_369->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2768, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj29,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_372=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_372=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_375,0,sizeof(struct sVar*));
        it2_378=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_at(self,it_372,(struct sVar*)come_increment_ref_count(default_value_375)));
        if(        1&&1) {
            map$2char$phsVar$ph$p_put(result_369,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_372)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_378)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_369,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_372)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_378)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_369,(char*)come_increment_ref_count(it_372),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_378)));
        }
        else {
            map$2char$phsVar$ph$p_put(result_369,(char*)come_increment_ref_count(it_372),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_378)));
        }
        come_call_finalizer3(default_value_375,sVar_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(it2_378,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__282 = come_increment_ref_count(result_369);
    come_call_finalizer3(result_369,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__282,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__282;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_362;
int i_365;
    for(    i_362=0;    i_362<self->size;    i_362++    ){
        if(        self->item_existance[i_362]) {
            if(            1) {
                come_call_finalizer3(self->items[i_362],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_365=0;    i_365<self->size;    i_365++    ){
        if(        self->item_existance[i_365]) {
            if(            1) {
                (self->keys[i_365] = come_decrement_ref_count2(self->keys[i_365], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct list_item$1sType$ph* it_363;
struct list_item$1sType$ph* prev_it_364;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        prev_it_364=it_363;
        it_363=it_363->next;
        come_call_finalizer3(prev_it_364,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self){
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
int i_366;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1char$p* __dec_obj28;
struct map$2char$phsVar$ph* __result_obj__247;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value273=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2695, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value274=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2696, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value275=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_366=0;    i_366<128;    i_366++    ){
        self->item_existance[i_366]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj28=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2707, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj28,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__247 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__246;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__246 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__246,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__246;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_367;
struct list_item$1char$p* prev_it_368;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        prev_it_368=it_367;
        it_367=it_367->next;
        come_call_finalizer3(prev_it_368,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_370;
char* __result_obj__248;
char* __result_obj__249;
char* result_371;
char* __result_obj__250;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_370,0,sizeof(char*));
        __result_obj__248 = result_370;
        return __result_obj__248;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__249 = self->key_list->it->item;
        return __result_obj__249;
    }
    memset(&result_371,0,sizeof(char*));
    __result_obj__250 = result_371;
    return __result_obj__250;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_373;
char* __result_obj__251;
char* __result_obj__252;
char* result_374;
char* __result_obj__253;
result_373 = (void*)0;
result_374 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_373,0,sizeof(char*));
        __result_obj__251 = result_373;
        return __result_obj__251;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__252 = self->key_list->it->item;
        return __result_obj__252;
    }
    memset(&result_374,0,sizeof(char*));
    __result_obj__253 = result_374;
    return __result_obj__253;
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_376;
unsigned int it_377;
struct sVar* __result_obj__254;
struct sVar* __result_obj__255;
struct sVar* __result_obj__256;
struct sVar* __result_obj__257;
    hash_376=string_get_hash_key(((char*)key))%self->size;
    it_377=hash_376;
    while((_Bool)1) {
        if(        self->item_existance[it_377]) {
            if(            string_equals(self->keys[it_377],key)) {
                __result_obj__254 = come_increment_ref_count(self->items[it_377]);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__254,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__254;
            }
            it_377++;
            if(            it_377>=self->size) {
                it_377=0;
            }
            else if(            it_377==hash_376) {
                __result_obj__255 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__255,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__255;
            }
        }
        else {
            __result_obj__256 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__256,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__256;
        }
    }
    __result_obj__257 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__257,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__257;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_390;
int it_391;
_Bool same_key_exist_408;
char* it2_411;
struct map$2char$phsVar$ph* __result_obj__268;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_390=string_get_hash_key(((char*)key))%self->size;
    it_391=hash_390;
    while((_Bool)1) {
        if(        self->item_existance[it_391]) {
            if(            string_equals(self->keys[it_391],key)) {
                if(                1) {
                    (self->keys[it_391] = come_decrement_ref_count2(self->keys[it_391], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$p$p_remove(self->key_list,self->keys[it_391]);
                    self->keys[it_391]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_391]);
                    self->keys[it_391]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_391],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_391]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_391]=item;
                }
                break;
            }
            it_391++;
            if(            it_391>=self->size) {
                it_391=0;
            }
            else if(            it_391==hash_390) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_391]=(_Bool)1;
            if(            1) {
                self->keys[it_391]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_391]=key;
            }
            if(            1) {
                self->items[it_391]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_391]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_408=(_Bool)0;
    for(    it2_411=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_411=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_411,key)) {
            same_key_exist_408=(_Bool)1;
        }
    }
    if(    !same_key_exist_408) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__268 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__268;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_379;
void* __right_value282 = (void*)0;
char** keys_380;
void* __right_value283 = (void*)0;
struct sVar** items_381;
void* __right_value284 = (void*)0;
_Bool* item_existance_382;
int len_383;
char* it_384;
struct sVar* default_value_385;
void* __right_value285 = (void*)0;
struct sVar* it2_386;
unsigned int hash_387;
int n_388;
struct sVar* default_value_389;
void* __right_value286 = (void*)0;
default_value_385 = (void*)0;
default_value_389 = (void*)0;
    size_379=self->size*10;
    keys_380=(char**)come_increment_ref_count(((char**)(__right_value282=(char**)come_calloc(1, sizeof(char*)*(1*(size_379)), "./comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_381=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value283=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_379)), "./comelang.h", 2935, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_382=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value284=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_379)), "./comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_383=0;
    for(    it_384=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_384=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_385,0,sizeof(struct sVar*));
        it2_386=((struct sVar*)(__right_value285=map$2char$phsVar$ph$p_at(self,it_384,(struct sVar*)come_increment_ref_count(default_value_385))));
        come_call_finalizer3(__right_value285,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_387=string_get_hash_key(((char*)it_384))%size_379;
        n_388=hash_387;
        while((_Bool)1) {
            if(            item_existance_382[n_388]) {
                n_388++;
                if(                n_388>=size_379) {
                    n_388=0;
                }
                else if(                n_388==hash_387) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_382[n_388]=(_Bool)1;
                keys_380[n_388]=it_384;
                items_381[n_388]=((struct sVar*)(__right_value286=map$2char$phsVar$ph$p_at(self,it_384,(struct sVar*)come_increment_ref_count(default_value_389))));
                come_call_finalizer3(__right_value286,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_383++;
                come_call_finalizer3(default_value_389,sVar_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_389,sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_385,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_380;
    self->items=items_381;
    self->item_existance=item_existance_382;
    self->size=size_379;
    self->len=len_383;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_392;
struct list_item$1char$p* it_393;
struct list$1char$p* __result_obj__261;
    it2_392=0;
    it_393=self->head;
    while(it_393!=((void*)0)) {
        if(        charp_equals(it_393->item,item)) {
            list$1char$p$p_delete(self,it2_392,it2_392+1);
            break;
        }
        it2_392++;
        it_393=it_393->next;
    }
    __result_obj__261 = self;
    return __result_obj__261;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_394;
struct list$1char$p* __result_obj__258;
struct list_item$1char$p* it_397;
int i_398;
struct list_item$1char$p* prev_it_399;
struct list_item$1char$p* it_400;
int i_401;
struct list_item$1char$p* prev_it_402;
struct list_item$1char$p* it_403;
struct list_item$1char$p* head_prev_it_404;
struct list_item$1char$p* tail_it_405;
int i_406;
struct list_item$1char$p* prev_it_407;
struct list$1char$p* __result_obj__260;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_394=tail;
        tail=head;
        head=tmp_394;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__258 = self;
        return __result_obj__258;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_397=self->head;
        i_398=0;
        while(it_397!=((void*)0)) {
            if(            i_398<tail) {
                prev_it_399=it_397;
                it_397=it_397->next;
                i_398++;
                come_call_finalizer3(prev_it_399,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_398==tail) {
                self->head=it_397;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_397=it_397->next;
                i_398++;
            }
        }
    }
    else if(    tail==self->len) {
        it_400=self->head;
        i_401=0;
        while(it_400!=((void*)0)) {
            if(            i_401==head) {
                self->tail=it_400->prev;
                self->tail->next=((void*)0);
            }
            if(            i_401>=head) {
                prev_it_402=it_400;
                it_400=it_400->next;
                i_401++;
                come_call_finalizer3(prev_it_402,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_400=it_400->next;
                i_401++;
            }
        }
    }
    else {
        it_403=self->head;
        head_prev_it_404=((void*)0);
        tail_it_405=((void*)0);
        i_406=0;
        while(it_403!=((void*)0)) {
            if(            i_406==head) {
                head_prev_it_404=it_403->prev;
            }
            if(            i_406==tail) {
                tail_it_405=it_403;
            }
            if(            i_406>=head&&i_406<tail) {
                prev_it_407=it_403;
                it_403=it_403->next;
                i_406++;
                come_call_finalizer3(prev_it_407,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_403=it_403->next;
                i_406++;
            }
        }
        if(        head_prev_it_404!=((void*)0)) {
            head_prev_it_404->next=tail_it_405;
        }
        if(        tail_it_405!=((void*)0)) {
            tail_it_405->prev=head_prev_it_404;
        }
    }
    __result_obj__260 = self;
    return __result_obj__260;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_395;
struct list_item$1char$p* prev_it_396;
struct list$1char$p* __result_obj__259;
    it_395=self->head;
    while(it_395!=((void*)0)) {
        prev_it_396=it_395;
        it_395=it_395->next;
        come_call_finalizer3(prev_it_396,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__259 = self;
    return __result_obj__259;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_409;
char* __result_obj__262;
char* __result_obj__263;
char* result_410;
char* __result_obj__264;
result_409 = (void*)0;
result_410 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_409,0,sizeof(char*));
        __result_obj__262 = result_409;
        return __result_obj__262;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__263 = self->it->item;
        return __result_obj__263;
    }
    memset(&result_410,0,sizeof(char*));
    __result_obj__264 = result_410;
    return __result_obj__264;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_412;
char* __result_obj__265;
char* __result_obj__266;
char* result_413;
char* __result_obj__267;
result_412 = (void*)0;
result_413 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_412,0,sizeof(char*));
        __result_obj__265 = result_412;
        return __result_obj__265;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__266 = self->it->item;
        return __result_obj__266;
    }
    memset(&result_413,0,sizeof(char*));
    __result_obj__267 = result_413;
    return __result_obj__267;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__269;
void* __right_value288 = (void*)0;
struct sVar* result_414;
void* __right_value289 = (void*)0;
char* __dec_obj30;
void* __right_value290 = (void*)0;
char* __dec_obj31;
void* __right_value325 = (void*)0;
struct sType* __dec_obj53;
void* __right_value326 = (void*)0;
char* __dec_obj54;
struct sVar* __result_obj__281;
    if(    self==(void*)0) {
        __result_obj__269 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__269,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__269;
    }
    result_414=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj30=result_414->mName;
        result_414->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj31=result_414->mCValueName;
        result_414->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj53=result_414->mType;
        result_414->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_414->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_414->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_414->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj54=result_414->mFunName;
        result_414->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__281 = come_increment_ref_count(result_414);
    come_call_finalizer3(result_414,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__281,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__281;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__270;
void* __right_value291 = (void*)0;
struct sType* result_415;
void* __right_value292 = (void*)0;
struct sType* __dec_obj32;
void* __right_value293 = (void*)0;
struct sType* __dec_obj33;
void* __right_value301 = (void*)0;
struct list$1sType$ph* __dec_obj37;
void* __right_value302 = (void*)0;
struct sType* __dec_obj38;
void* __right_value303 = (void*)0;
struct sType* __dec_obj39;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj40;
void* __right_value305 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value306 = (void*)0;
char* __dec_obj42;
void* __right_value307 = (void*)0;
char* __dec_obj43;
void* __right_value308 = (void*)0;
char* __dec_obj44;
void* __right_value313 = (void*)0;
struct list$1sNode$ph* __dec_obj45;
void* __right_value314 = (void*)0;
char* __dec_obj46;
void* __right_value315 = (void*)0;
struct list$1sType$ph* __dec_obj47;
void* __right_value323 = (void*)0;
struct list$1char$ph* __dec_obj51;
void* __right_value324 = (void*)0;
struct sType* __dec_obj52;
struct sType* __result_obj__280;
    if(    self==(void*)0) {
        __result_obj__270 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__270,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__270;
    }
    result_415=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_415->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj32=result_415->mOriginalLoadVarType;
        result_415->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj33=result_415->mChannelType;
        result_415->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj37=result_415->mGenericsTypes;
        result_415->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj37,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj38=result_415->mNoSolvedGenericsType;
        result_415->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj39=result_415->mAnyOriginalType;
        result_415->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj40=result_415->mSizeNum;
        result_415->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj41=result_415->mAlignas;
        result_415->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj42=result_415->mTupleName;
        result_415->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj43=result_415->mAttribute;
        result_415->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mAllocaValue=self->mAllocaValue;
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
        result_415->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_415->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_415->mDynamic=self->mDynamic;
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
        __dec_obj44=result_415->mAsmName;
        result_415->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj45=result_415->mArrayNum;
        result_415->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj45,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
        result_415->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_415->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj46=result_415->mOriginalTypeName;
        result_415->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mOriginalPointerNum=self->mOriginalPointerNum;
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
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj47=result_415->mParamTypes;
        result_415->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj47,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj51=result_415->mParamNames;
        result_415->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj52=result_415->mResultType;
        result_415->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mVarArgs=self->mVarArgs;
    }
    __result_obj__280 = come_increment_ref_count(result_415);
    come_call_finalizer3(result_415,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__280,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__280;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__271;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sType$ph* result_416;
struct list_item$1sType$ph* it_417;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1sType$ph* __result_obj__274;
    if(    self==((void*)0)) {
        __result_obj__271 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__271,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__271;
    }
    result_416=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1400, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_417=self->head;
    while(it_417!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_416,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_417->item)));
        }
        else {
            list$1sType$ph$p_add(result_416,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_417->item)));
        }
        it_417=it_417->next;
    }
    __result_obj__274 = come_increment_ref_count(result_416);
    come_call_finalizer3(result_416,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__274,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__274;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__272;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__272 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__272,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__272;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value296 = (void*)0;
struct list_item$1sType$ph* litem_418;
struct sType* __dec_obj34;
void* __right_value297 = (void*)0;
struct list_item$1sType$ph* litem_419;
struct sType* __dec_obj35;
void* __right_value298 = (void*)0;
struct list_item$1sType$ph* litem_420;
struct sType* __dec_obj36;
struct list$1sType$ph* __result_obj__273;
    if(    self->len==0) {
        litem_418=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value296=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1419, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_418->prev=((void*)0);
        litem_418->next=((void*)0);
        __dec_obj34=litem_418->item;
        litem_418->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_418;
        self->head=litem_418;
    }
    else if(    self->len==1) {
        litem_419=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value297=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1429, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_419->prev=self->head;
        litem_419->next=((void*)0);
        __dec_obj35=litem_419->item;
        litem_419->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_419;
        self->head->next=litem_419;
    }
    else {
        litem_420=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value298=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1439, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=self->tail;
        litem_420->next=((void*)0);
        __dec_obj36=litem_420->item;
        litem_420->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_420;
        self->tail=litem_420;
    }
    self->len++;
    __result_obj__273 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__273;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_421;
struct list_item$1sType$ph* prev_it_422;
    it_421=self->head;
    while(it_421!=((void*)0)) {
        prev_it_422=it_421;
        it_421=it_421->next;
        come_call_finalizer3(prev_it_422,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__275;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1sNode$ph* result_423;
struct list_item$1sNode$ph* it_424;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1sNode$ph* __result_obj__276;
    if(    self==((void*)0)) {
        __result_obj__275 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__275,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__275;
    }
    result_423=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_424=self->head;
    while(it_424!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_423,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_424->item)));
        }
        else {
            list$1sNode$ph$p_add(result_423,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_424->item)));
        }
        it_424=it_424->next;
    }
    __result_obj__276 = come_increment_ref_count(result_423);
    come_call_finalizer3(result_423,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__276,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__276;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__277;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct list$1char$ph* result_425;
struct list_item$1char$ph* it_426;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1char$ph* __result_obj__279;
    if(    self==((void*)0)) {
        __result_obj__277 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__277,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__277;
    }
    result_425=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1400, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_426=self->head;
    while(it_426!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_425,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_426->item)));
        }
        else {
            list$1char$ph$p_add(result_425,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_426->item)));
        }
        it_426=it_426->next;
    }
    __result_obj__279 = come_increment_ref_count(result_425);
    come_call_finalizer3(result_425,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__279,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__279;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value318 = (void*)0;
struct list_item$1char$ph* litem_427;
char* __dec_obj48;
void* __right_value319 = (void*)0;
struct list_item$1char$ph* litem_428;
char* __dec_obj49;
void* __right_value320 = (void*)0;
struct list_item$1char$ph* litem_429;
char* __dec_obj50;
struct list$1char$ph* __result_obj__278;
    if(    self->len==0) {
        litem_427=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value318=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1419, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_427->prev=((void*)0);
        litem_427->next=((void*)0);
        __dec_obj48=litem_427->item;
        litem_427->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_427;
        self->head=litem_427;
    }
    else if(    self->len==1) {
        litem_428=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value319=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1429, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_428->prev=self->head;
        litem_428->next=((void*)0);
        __dec_obj49=litem_428->item;
        litem_428->item=(char*)come_increment_ref_count(item);
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_428;
        self->head->next=litem_428;
    }
    else {
        litem_429=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value320=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1439, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_429->prev=self->tail;
        litem_429->next=((void*)0);
        __dec_obj50=litem_429->item;
        litem_429->item=(char*)come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_429;
        self->tail=litem_429;
    }
    self->len++;
    __result_obj__278 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__278;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_430;
struct list_item$1char$ph* prev_it_431;
    it_430=self->head;
    while(it_430!=((void*)0)) {
        prev_it_431=it_430;
        it_430=it_430->next;
        come_call_finalizer3(prev_it_431,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_432;
int i_433;
    for(    i_432=0;    i_432<self->size;    i_432++    ){
        if(        self->item_existance[i_432]) {
            if(            1) {
                come_call_finalizer3(self->items[i_432],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_433=0;    i_433<self->size;    i_433++    ){
        if(        self->item_existance[i_433]) {
            if(            1) {
                (self->keys[i_433] = come_decrement_ref_count2(self->keys[i_433], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__285;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct list$1sBlock$ph* result_436;
struct list_item$1sBlock$ph* it_437;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1sBlock$ph* __result_obj__288;
    if(    self==((void*)0)) {
        __result_obj__285 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__285,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__285;
    }
    result_436=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./comelang.h", 1400, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_437=self->head;
    while(it_437!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph$p_add(result_436,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_437->item)));
        }
        else {
            list$1sBlock$ph$p_add(result_436,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_437->item)));
        }
        it_437=it_437->next;
    }
    __result_obj__288 = come_increment_ref_count(result_436);
    come_call_finalizer3(result_436,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__288,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__288;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_434;
struct list_item$1sBlock$ph* prev_it_435;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        prev_it_435=it_434;
        it_434=it_434->next;
        come_call_finalizer3(prev_it_435,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__286;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__286 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__286,list$1sBlock$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__286;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value338 = (void*)0;
struct list_item$1sBlock$ph* litem_438;
struct sBlock* __dec_obj59;
void* __right_value339 = (void*)0;
struct list_item$1sBlock$ph* litem_439;
struct sBlock* __dec_obj60;
void* __right_value340 = (void*)0;
struct list_item$1sBlock$ph* litem_440;
struct sBlock* __dec_obj61;
struct list$1sBlock$ph* __result_obj__287;
    if(    self->len==0) {
        litem_438=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value338=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1419, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_438->prev=((void*)0);
        litem_438->next=((void*)0);
        __dec_obj59=litem_438->item;
        litem_438->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_438;
        self->head=litem_438;
    }
    else if(    self->len==1) {
        litem_439=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value339=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1429, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_439->prev=self->head;
        litem_439->next=((void*)0);
        __dec_obj60=litem_439->item;
        litem_439->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_439;
        self->head->next=litem_439;
    }
    else {
        litem_440=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value340=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1439, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_440->prev=self->tail;
        litem_440->next=((void*)0);
        __dec_obj61=litem_440->item;
        litem_440->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_440;
        self->tail=litem_440;
    }
    self->len++;
    __result_obj__287 = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__287;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_441;
struct list_item$1sBlock$ph* prev_it_442;
    it_441=self->head;
    while(it_441!=((void*)0)) {
        prev_it_442=it_441;
        it_441=it_441->next;
        come_call_finalizer3(prev_it_442,list_item$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        come_call_finalizer3(self->mElifExpressionNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        come_call_finalizer3(self->mElifBlocks,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_445;
int i_446;
struct sBlock* __result_obj__291;
struct sBlock* default_value_447;
struct sBlock* __result_obj__292;
default_value_447 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_445=self->head;
    i_446=0;
    while(it_445!=((void*)0)) {
        if(        position==i_446) {
            __result_obj__291 = come_increment_ref_count(it_445->item);
            come_call_finalizer3(__result_obj__291,sBlock_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__291;
        }
        it_445=it_445->next;
        i_446++;
    }
    memset(&default_value_447,0,sizeof(struct sBlock*));
    __result_obj__292 = come_increment_ref_count(default_value_447);
    come_call_finalizer3(default_value_447,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__292,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__292;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_472;
int i_473;
struct sNode* __result_obj__295;
struct sNode* default_value_474;
struct sNode* __result_obj__296;
default_value_474 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_472=self->head;
    i_473=0;
    while(it_472!=((void*)0)) {
        if(        position==i_473) {
            __result_obj__295 = come_increment_ref_count(it_472->item);
            ((__result_obj__295) ? __result_obj__295 = come_decrement_ref_count2(__result_obj__295, ((struct sNode*)__result_obj__295)->finalize, ((struct sNode*)__result_obj__295)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__295;
        }
        it_472=it_472->next;
        i_473++;
    }
    memset(&default_value_474,0,sizeof(struct sNode*));
    __result_obj__296 = come_increment_ref_count(default_value_474);
    ((default_value_474) ? default_value_474 = come_decrement_ref_count2(default_value_474, ((struct sNode*)default_value_474)->finalize, ((struct sNode*)default_value_474)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__296) ? __result_obj__296 = come_decrement_ref_count2(__result_obj__296, ((struct sNode*)__result_obj__296)->finalize, ((struct sNode*)__result_obj__296)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__296;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value365 = (void*)0;
struct list_item$1CVALUE$ph* litem_487;
struct CVALUE* __dec_obj68;
void* __right_value366 = (void*)0;
struct list_item$1CVALUE$ph* litem_488;
struct CVALUE* __dec_obj69;
void* __right_value367 = (void*)0;
struct list_item$1CVALUE$ph* litem_489;
struct CVALUE* __dec_obj70;
struct list$1CVALUE$ph* __result_obj__299;
    if(    self->len==0) {
        litem_487=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value365=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1489, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_487->prev=((void*)0);
        litem_487->next=((void*)0);
        __dec_obj68=litem_487->item;
        litem_487->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_487;
        self->head=litem_487;
    }
    else if(    self->len==1) {
        litem_488=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value366=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1499, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_488->prev=self->head;
        litem_488->next=((void*)0);
        __dec_obj69=litem_488->item;
        litem_488->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_488;
        self->head->next=litem_488;
    }
    else {
        litem_489=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value367=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1509, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_489->prev=self->tail;
        litem_489->next=((void*)0);
        __dec_obj70=litem_489->item;
        litem_489->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_489;
        self->tail=litem_489;
    }
    self->len++;
    __result_obj__299 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__299;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj73;
struct sMatchNode* __result_obj__301;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj72=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj73=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__301 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__301,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__301;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __right_value371 = (void*)0;
char* __result_obj__302;
    __result_obj__302 = come_increment_ref_count(((char*)(__right_value371=__builtin_string("sMatch"))));
    (__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__302 = come_decrement_ref_count2(__result_obj__302, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__302;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_490;
struct sNode* match_node_491;
_Bool Value_492;
_Bool __result_obj__303;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_493;
_Bool Value_494;
_Bool __result_obj__304;
struct sVar* var__495;
int __exception_result_var_b2;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct list$1sVar$ph* __dec_obj74;
void* __right_value378 = (void*)0;
_Bool __result_obj__307;
    it_node_490=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_491=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_492=node_compile(it_node_490,info);
    if(    !Value_492) {
        __result_obj__303 = (_Bool)0;
        ((it_node_490) ? it_node_490 = come_decrement_ref_count2(it_node_490, ((struct sNode*)it_node_490)->finalize, ((struct sNode*)it_node_490)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_491) ? match_node_491 = come_decrement_ref_count2(match_node_491, ((struct sNode*)match_node_491)->finalize, ((struct sNode*)match_node_491)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__303;
    }
    else {
    }
    come_value_493=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_493->c_value);
    Value_494=node_compile(match_node_491,info);
    if(    !Value_494) {
        __result_obj__304 = (_Bool)0;
        ((it_node_490) ? it_node_490 = come_decrement_ref_count2(it_node_490, ((struct sNode*)it_node_490)->finalize, ((struct sNode*)it_node_490)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_491) ? match_node_491 = come_decrement_ref_count2(match_node_491, ((struct sNode*)match_node_491)->finalize, ((struct sNode*)match_node_491)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__304;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__495=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 263, 1),__exception_result_var_b2=assert_v2(var__495!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj74=info->match_it_var;
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 266, "struct list$1sVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj74,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        list$1sVar$ph$p_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__495)));
    }
    __result_obj__307 = (_Bool)1;
    ((it_node_490) ? it_node_490 = come_decrement_ref_count2(it_node_490, ((struct sNode*)it_node_490)->finalize, ((struct sNode*)it_node_490)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node_491) ? match_node_491 = come_decrement_ref_count2(match_node_491, ((struct sNode*)match_node_491)->finalize, ((struct sNode*)match_node_491)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__307;
}

static void sMatchNode_finalize(struct sMatchNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph$p_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__305;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__305 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__305,list$1sVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__305;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_496;
struct list_item$1sVar$ph* prev_it_497;
    it_496=self->head;
    while(it_496!=((void*)0)) {
        prev_it_497=it_496;
        it_496=it_496->next;
        come_call_finalizer3(prev_it_497,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_498;
struct list_item$1sVar$ph* prev_it_499;
    it_498=self->head;
    while(it_498!=((void*)0)) {
        prev_it_499=it_498;
        it_498=it_498->next;
        come_call_finalizer3(prev_it_499,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph$p_add(struct list$1sVar$ph* self, struct sVar* item){
void* __right_value375 = (void*)0;
struct list_item$1sVar$ph* litem_500;
struct sVar* __dec_obj75;
void* __right_value376 = (void*)0;
struct list_item$1sVar$ph* litem_501;
struct sVar* __dec_obj76;
void* __right_value377 = (void*)0;
struct list_item$1sVar$ph* litem_502;
struct sVar* __dec_obj77;
struct list$1sVar$ph* __result_obj__306;
    if(    self->len==0) {
        litem_500=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value375=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1419, "struct list_item$1sVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_500->prev=((void*)0);
        litem_500->next=((void*)0);
        __dec_obj75=litem_500->item;
        litem_500->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_500;
        self->head=litem_500;
    }
    else if(    self->len==1) {
        litem_501=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value376=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1429, "struct list_item$1sVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_501->prev=self->head;
        litem_501->next=((void*)0);
        __dec_obj76=litem_501->item;
        litem_501->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_501;
        self->head->next=litem_501;
    }
    else {
        litem_502=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value377=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./comelang.h", 1439, "struct list_item$1sVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_502->prev=self->tail;
        litem_502->next=((void*)0);
        __dec_obj77=litem_502->item;
        litem_502->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,sVar_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_502;
        self->tail=litem_502;
    }
    self->len++;
    __result_obj__306 = self;
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__306;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value381 = (void*)0;
struct sNode* __dec_obj79;
struct sIfMethodNode* __result_obj__308;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value379,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj78=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj79=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__308 = come_increment_ref_count(self);
    come_call_finalizer3(self,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__308,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __right_value382 = (void*)0;
char* __result_obj__309;
    __result_obj__309 = come_increment_ref_count(((char*)(__right_value382=__builtin_string("sMatch"))));
    (__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__309 = come_decrement_ref_count2(__result_obj__309, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__309;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_503;
struct sNode* match_node_504;
_Bool Value_505;
_Bool __result_obj__310;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_506;
_Bool Value_507;
_Bool __result_obj__311;
struct sVar* var__508;
int __exception_result_var_b3;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1sVar$ph* __dec_obj80;
void* __right_value386 = (void*)0;
_Bool __result_obj__312;
    it_node_503=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_504=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_505=node_compile(it_node_503,info);
    if(    !Value_505) {
        __result_obj__310 = (_Bool)0;
        ((it_node_503) ? it_node_503 = come_decrement_ref_count2(it_node_503, ((struct sNode*)it_node_503)->finalize, ((struct sNode*)it_node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_504) ? match_node_504 = come_decrement_ref_count2(match_node_504, ((struct sNode*)match_node_504)->finalize, ((struct sNode*)match_node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__310;
    }
    else {
    }
    come_value_506=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_506->c_value);
    Value_507=node_compile(match_node_504,info);
    if(    !Value_507) {
        __result_obj__311 = (_Bool)0;
        ((it_node_503) ? it_node_503 = come_decrement_ref_count2(it_node_503, ((struct sNode*)it_node_503)->finalize, ((struct sNode*)it_node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((match_node_504) ? match_node_504 = come_decrement_ref_count2(match_node_504, ((struct sNode*)match_node_504)->finalize, ((struct sNode*)match_node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__311;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__508=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 314, 2),__exception_result_var_b3=assert_v2(var__508!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj80=info->match_it_var;
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 317, "struct list$1sVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj80,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        list$1sVar$ph$p_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__508)));
    }
    __result_obj__312 = (_Bool)1;
    ((it_node_503) ? it_node_503 = come_decrement_ref_count2(it_node_503, ((struct sNode*)it_node_503)->finalize, ((struct sNode*)it_node_503)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((match_node_504) ? match_node_504 = come_decrement_ref_count2(match_node_504, ((struct sNode*)match_node_504)->finalize, ((struct sNode*)match_node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__312;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value389 = (void*)0;
struct sBlock* __dec_obj82;
struct sOrStatmentNode* __result_obj__313;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj81=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj82=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj82,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__313 = come_increment_ref_count(self);
    come_call_finalizer3(self,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__313,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __right_value390 = (void*)0;
char* __result_obj__314;
    __result_obj__314 = come_increment_ref_count(((char*)(__right_value390=__builtin_string("sOrStatmentNode"))));
    (__right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__314 = come_decrement_ref_count2(__result_obj__314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__314;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_509;
_Bool Value_510;
void* __right_value391 = (void*)0;
struct CVALUE* conditional_value_511;
struct sBlock* if_block_512;
int num_or_conditional_stack_514;
_Bool __result_obj__315;
    expression_node_509=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_510=node_compile(expression_node_509,info);
    if(    !Value_510) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if_block_512=self->mIfBlock;
    static int num_or_conditional_513=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_513);
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_513,conditional_value_511->c_value);
    num_or_conditional_stack_514=num_or_conditional_513;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_514);
    transpile_block(if_block_512,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__315 = (_Bool)1;
    come_call_finalizer3(conditional_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__315;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value394 = (void*)0;
struct sBlock* __dec_obj84;
struct sAndStatmentNode* __result_obj__316;
    ((struct sNodeBase*)(__right_value392=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value392,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj83=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj84=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj84,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__316 = come_increment_ref_count(self);
    come_call_finalizer3(self,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__316,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__316;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __right_value395 = (void*)0;
char* __result_obj__317;
    __result_obj__317 = come_increment_ref_count(((char*)(__right_value395=__builtin_string("sAndStatmentNode"))));
    (__right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__317 = come_decrement_ref_count2(__result_obj__317, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__317;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_515;
_Bool Value_516;
void* __right_value396 = (void*)0;
struct CVALUE* conditional_value_517;
struct sBlock* if_block_518;
int num_and_conditional_stack_520;
_Bool __result_obj__318;
    expression_node_515=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_516=node_compile(expression_node_515,info);
    if(    !Value_516) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_517=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if_block_518=self->mIfBlock;
    static int num_and_conditional_519=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_519);
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_519,conditional_value_517->c_value);
    num_and_conditional_stack_520=num_and_conditional_519;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_520);
    transpile_block(if_block_518,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__318 = (_Bool)1;
    come_call_finalizer3(conditional_value_517,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__318;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNode$ph* multiple_node, _Bool in_rescue, struct sInfo* info){
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1sNode$ph* __dec_obj85;
struct sMultipleNode* __result_obj__319;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj85=self->multiple_node;
    self->multiple_node=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, multiple_node));
    come_call_finalizer3(__dec_obj85,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->in_rescue=in_rescue;
    __result_obj__319 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_node,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__319,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__319;
}

_Bool sMultipleNode_terminated(struct sMultipleNode* self){
    return (_Bool)1;
}

char* sMultipleNode_kind(struct sMultipleNode* self){
void* __right_value399 = (void*)0;
char* __result_obj__320;
    __result_obj__320 = come_increment_ref_count(((char*)(__right_value399=__builtin_string("sMultipleNode"))));
    (__right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__320 = come_decrement_ref_count2(__result_obj__320, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__320;
}

_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info){
_Bool in_exception_value_521;
struct list$1sNode$ph* multiple_node_522;
struct CVALUE* come_value_523;
struct list$1sNode$ph* o2_saved_524;
struct sNode* it_527;
_Bool Value_530;
_Bool __result_obj__327;
void* __right_value400 = (void*)0;
struct CVALUE* __dec_obj86;
_Bool __result_obj__328;
    in_exception_value_521=info->in_exception_value;
    info->in_exception_value=(_Bool)1;
    multiple_node_522=(struct list$1sNode$ph*)come_increment_ref_count(self->multiple_node);
    come_value_523=((void*)0);
    for(    o2_saved_524=(struct list$1sNode$ph*)come_increment_ref_count((multiple_node_522)),it_527=list$1sNode$ph$p_begin((o2_saved_524));    !list$1sNode$ph$p_end((o2_saved_524));    it_527=list$1sNode$ph$p_next((o2_saved_524))    ){
        Value_530=node_compile(it_527,info);
        if(        !Value_530) {
            __result_obj__327 = (_Bool)0;
            come_call_finalizer3(o2_saved_524,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_node_522,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__327;
        }
        else {
        }
        add_last_code_to_source(info);
        if(        list$1CVALUE$ph$p_length(info->stack)>0) {
            __dec_obj86=come_value_523;
            come_value_523=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_524,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    come_value_523) {
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_523));
    }
    info->in_exception_value=in_exception_value_521;
    __result_obj__328 = (_Bool)1;
    come_call_finalizer3(multiple_node_522,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__328;
}

static void sMultipleNode_finalize(struct sMultipleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        come_call_finalizer3(self->multiple_node,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_525;
struct sNode* __result_obj__321;
struct sNode* __result_obj__322;
struct sNode* result_526;
struct sNode* __result_obj__323;
result_525 = (void*)0;
result_526 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_525,0,sizeof(struct sNode*));
        __result_obj__321 = result_525;
        return __result_obj__321;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__322 = self->it->item;
        return __result_obj__322;
    }
    memset(&result_526,0,sizeof(struct sNode*));
    __result_obj__323 = result_526;
    return __result_obj__323;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_528;
struct sNode* __result_obj__324;
struct sNode* __result_obj__325;
struct sNode* result_529;
struct sNode* __result_obj__326;
result_528 = (void*)0;
result_529 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_528,0,sizeof(struct sNode*));
        __result_obj__324 = result_528;
        return __result_obj__324;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__325 = self->it->item;
        return __result_obj__325;
    }
    memset(&result_529,0,sizeof(struct sNode*));
    __result_obj__326 = result_529;
    return __result_obj__326;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info){
void* __right_value401 = (void*)0;
struct sSaveRightValueObjects* __result_obj__329;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value401,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__329 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__329,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__329;
}

_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self){
    return (_Bool)0;
}

char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self){
void* __right_value402 = (void*)0;
char* __result_obj__330;
    __result_obj__330 = come_increment_ref_count(((char*)(__right_value402=__builtin_string("sSaveRightValueObjects"))));
    (__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__330 = come_decrement_ref_count2(__result_obj__330, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__330;
}

_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObject$ph* __dec_obj87;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj88;
    __dec_obj87=gExceptionRightValueObjects;
    gExceptionRightValueObjects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
    come_call_finalizer3(__dec_obj87,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj88=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "08if.c", 508, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj88,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    return (_Bool)1;
}

static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_531;
struct list_item$1sRightValueObject$ph* prev_it_532;
    it_531=self->head;
    while(it_531!=((void*)0)) {
        prev_it_532=it_531;
        it_531=it_531->next;
        come_call_finalizer3(prev_it_532,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__331;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__331 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__331,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__331;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_533;
struct list_item$1sRightValueObject$ph* prev_it_534;
    it_533=self->head;
    while(it_533!=((void*)0)) {
        prev_it_534=it_533;
        it_533=it_533->next;
        come_call_finalizer3(prev_it_534,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info){
void* __right_value405 = (void*)0;
struct sRestoreRightValueObjects* __result_obj__332;
    ((struct sNodeBase*)(__right_value405=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value405,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__332 = come_increment_ref_count(self);
    come_call_finalizer3(self,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__332,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__332;
}

_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self){
    return (_Bool)0;
}

char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self){
void* __right_value406 = (void*)0;
char* __result_obj__333;
    __result_obj__333 = come_increment_ref_count(((char*)(__right_value406=__builtin_string("sRestoreRightValueObjects"))));
    (__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__333 = come_decrement_ref_count2(__result_obj__333, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__333;
}

_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObject$ph* __dec_obj89;
struct list$1sRightValueObject$ph* __dec_obj90;
    free_right_value_objects(info,(_Bool)0);
    __dec_obj89=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(gExceptionRightValueObjects);
    come_call_finalizer3(__dec_obj89,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj90=gExceptionRightValueObjects;
    gExceptionRightValueObjects=((void*)0);
    come_call_finalizer3(__dec_obj90,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    return (_Bool)1;
}

static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value407 = (void*)0;
char* sname_535;
int sline_536;
int var_num_stack_538;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* __list_values1___539[2];
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1char$ph* multiple_assign_542;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sNode* get_return_value_543;
void* __right_value415 = (void*)0;
struct sBlock* if_block_544;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_545;
int elif_num_546;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct list$1sBlock$ph* elif_blocks_547;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sBlock* else_block_548;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* expression_node2_552;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value439 = (void*)0;
struct sNode* if_node_553;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* _inf_value2;
struct sSaveRightValueObjects* _inf_obj_value2;
void* __right_value444 = (void*)0;
struct sNode* save_right_value_objects_555;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sNode* _inf_value3;
struct sRestoreRightValueObjects* _inf_obj_value3;
void* __right_value449 = (void*)0;
struct sNode* restore_right_value_objects_557;
struct sNode* __list_values2___560[2];
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1sNode$ph* multiple_node_559;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sNode* _inf_value4;
struct sMultipleNode* _inf_obj_value4;
void* __right_value457 = (void*)0;
struct sNode* __result_obj__345;
    sname_535=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_536=info->sline;
    parse_sharp_v5(info);
    static int var_num_537=0;
    var_num_537++;
    var_num_stack_538=var_num_537;
    multiple_assign_542=(struct list$1char$ph*)come_increment_ref_count((__list_values1___539[0]=((char*)(__right_value409=xsprintf("come_exception_var_\%s",((char*)(__right_value408=int_to_string(var_num_stack_538)))))),
__list_values1___539[1]=((char*)(__right_value410=xsprintf("Err"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "08if.c", 553, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values1___539)));
    (__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    get_return_value_543=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_542),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    if_block_544=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_545=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 560, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_546=0;
    elif_blocks_547=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 563, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    else_block_548=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 565, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    else_block_548->mOmitSemicolon=(_Bool)1;
    list$1sNode$ph$p_push_back(else_block_548->mNodes,(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value426=xsprintf("come_exception_var_\%s",((char*)(__right_value425=int_to_string(var_num_stack_538)))))),info)));
    (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    expression_node2_552=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value428=xsprintf("Err"))),info));
    (__right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 571, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value431=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 571, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_552),if_block_544,elif_expression_nodes_545,elif_blocks_547,elif_num_546,else_block_548,(_Bool)0,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    if_node_553=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value431,sIfNode_finalize, 0, 1, 0, 0, (void*)0);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 573, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value441=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 573, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value2->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value2->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value2->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_555=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value441,sSaveRightValueObjects_finalize, 0, 1, 0, 0, (void*)0);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 574, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value446=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 574, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value3->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value3->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value3->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_557=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value446,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, (void*)0);
    multiple_node_559=(struct list$1sNode$ph*)come_increment_ref_count((__list_values2___560[0]=get_return_value_543,
__list_values2___560[1]=if_node_553,
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 576, "struct list$1sNode$ph", list$1sNode$ph_finalize, list$1sNode$ph_clone, list$1sNode$ph_get_hash_key, list$1sNode$ph_equals)),2,__list_values2___560)));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 578, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value453=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 578, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(multiple_node_559),(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMultipleNode_finalize;
    _inf_value4->clone=(void*)sMultipleNode_clone;
    _inf_value4->compile=(void*)sMultipleNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMultipleNode_terminated;
    _inf_value4->kind=(void*)sMultipleNode_kind;
    __result_obj__345 = come_increment_ref_count(((struct sNode*)(__right_value457=_inf_value4)));
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_535 = come_decrement_ref_count2(sname_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign_542,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((get_return_value_543) ? get_return_value_543 = come_decrement_ref_count2(get_return_value_543, ((struct sNode*)get_return_value_543)->finalize, ((struct sNode*)get_return_value_543)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(if_block_544,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_545,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_547,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_548,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    ((expression_node2_552) ? expression_node2_552 = come_decrement_ref_count2(expression_node2_552, ((struct sNode*)expression_node2_552)->finalize, ((struct sNode*)expression_node2_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((if_node_553) ? if_node_553 = come_decrement_ref_count2(if_node_553, ((struct sNode*)if_node_553)->finalize, ((struct sNode*)if_node_553)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((save_right_value_objects_555) ? save_right_value_objects_555 = come_decrement_ref_count2(save_right_value_objects_555, ((struct sNode*)save_right_value_objects_555)->finalize, ((struct sNode*)save_right_value_objects_555)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((restore_right_value_objects_557) ? restore_right_value_objects_557 = come_decrement_ref_count2(restore_right_value_objects_557, ((struct sNode*)restore_right_value_objects_557)->finalize, ((struct sNode*)restore_right_value_objects_557)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(multiple_node_559,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value453,sMultipleNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value457) ? __right_value457 = come_decrement_ref_count2(__right_value457, ((struct sNode*)__right_value457)->finalize, ((struct sNode*)__right_value457)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__345) ? __result_obj__345 = come_decrement_ref_count2(__result_obj__345, ((struct sNode*)__result_obj__345)->finalize, ((struct sNode*)__result_obj__345)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__345;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_540;
struct list$1char$ph* __result_obj__334;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_540=0;    i_540<num_value;    i_540++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_540]));
    }
    __result_obj__334 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__334,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_541;
    result_541=0;
    result_541+=int_get_hash_key(((int)self->head));
    result_541+=int_get_hash_key(((int)self->tail));
    result_541+=int_get_hash_key(((int)self->len));
    result_541+=int_get_hash_key(((int)self->it));
    return result_541;
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

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value422 = (void*)0;
struct list_item$1sNode$ph* litem_549;
struct sNode* __dec_obj91;
void* __right_value423 = (void*)0;
struct list_item$1sNode$ph* litem_550;
struct sNode* __dec_obj92;
void* __right_value424 = (void*)0;
struct list_item$1sNode$ph* litem_551;
struct sNode* __dec_obj93;
struct list$1sNode$ph* __result_obj__335;
    if(    self->len==0) {
        litem_549=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value422=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1489, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_549->prev=((void*)0);
        litem_549->next=((void*)0);
        __dec_obj91=litem_549->item;
        litem_549->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_549;
        self->head=litem_549;
    }
    else if(    self->len==1) {
        litem_550=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value423=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1499, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_550->prev=self->head;
        litem_550->next=((void*)0);
        __dec_obj92=litem_550->item;
        litem_550->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_550;
        self->head->next=litem_550;
    }
    else {
        litem_551=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value424=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1509, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_551->prev=self->tail;
        litem_551->next=((void*)0);
        __dec_obj93=litem_551->item;
        litem_551->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_551;
        self->tail=litem_551;
    }
    self->len++;
    __result_obj__335 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__335;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
struct sIfNode* __result_obj__336;
void* __right_value432 = (void*)0;
struct sIfNode* result_554;
void* __right_value433 = (void*)0;
char* __dec_obj94;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj95;
void* __right_value435 = (void*)0;
struct sBlock* __dec_obj96;
void* __right_value436 = (void*)0;
struct list$1sNode$ph* __dec_obj97;
void* __right_value437 = (void*)0;
struct list$1sBlock$ph* __dec_obj98;
void* __right_value438 = (void*)0;
struct sBlock* __dec_obj99;
struct sIfNode* __result_obj__337;
    if(    self==(void*)0) {
        __result_obj__336 = (void*)0;
        return __result_obj__336;
    }
    result_554=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj94=result_554->sname;
        result_554->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj95=result_554->mExpressionNode;
        result_554->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj96=result_554->mIfBlock;
        result_554->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj96,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj97=result_554->mElifExpressionNodes;
        result_554->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mElifExpressionNodes));
        come_call_finalizer3(__dec_obj97,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj98=result_554->mElifBlocks;
        result_554->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(come_call_cloner(list$1sBlock$ph$p_clone, self->mElifBlocks));
        come_call_finalizer3(__dec_obj98,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_554->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj99=result_554->mElseBlock;
        result_554->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mElseBlock));
        come_call_finalizer3(__dec_obj99,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__337 = result_554;
    come_call_finalizer3(result_554,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__337;
}

static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self){
struct sSaveRightValueObjects* __result_obj__338;
void* __right_value442 = (void*)0;
struct sSaveRightValueObjects* result_556;
void* __right_value443 = (void*)0;
char* __dec_obj100;
struct sSaveRightValueObjects* __result_obj__339;
    if(    self==(void*)0) {
        __result_obj__338 = (void*)0;
        return __result_obj__338;
    }
    result_556=(struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "sSaveRightValueObjects_clone", 3, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_556->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj100=result_556->sname;
        result_556->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->sline_real=self->sline_real;
    }
    __result_obj__339 = result_556;
    come_call_finalizer3(result_556,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
}

static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self){
struct sRestoreRightValueObjects* __result_obj__340;
void* __right_value447 = (void*)0;
struct sRestoreRightValueObjects* result_558;
void* __right_value448 = (void*)0;
char* __dec_obj101;
struct sRestoreRightValueObjects* __result_obj__341;
    if(    self==(void*)0) {
        __result_obj__340 = (void*)0;
        return __result_obj__340;
    }
    result_558=(struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "sRestoreRightValueObjects_clone", 3, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_558->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj101=result_558->sname;
        result_558->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_558->sline_real=self->sline_real;
    }
    __result_obj__341 = result_558;
    come_call_finalizer3(result_558,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__341;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_561;
struct list$1sNode$ph* __result_obj__342;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_561=0;    i_561<num_value;    i_561++    ){
        list$1sNode$ph$p_push_back(self,(struct sNode*)come_increment_ref_count(values[i_561]));
    }
    __result_obj__342 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__342,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__342;
}

static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self){
unsigned int result_562;
    result_562=0;
    result_562+=int_get_hash_key(((int)self->head));
    result_562+=int_get_hash_key(((int)self->tail));
    result_562+=int_get_hash_key(((int)self->len));
    result_562+=int_get_hash_key(((int)self->it));
    return result_562;
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
struct sMultipleNode* __result_obj__343;
void* __right_value454 = (void*)0;
struct sMultipleNode* result_563;
void* __right_value455 = (void*)0;
char* __dec_obj102;
void* __right_value456 = (void*)0;
struct list$1sNode$ph* __dec_obj103;
struct sMultipleNode* __result_obj__344;
    if(    self==(void*)0) {
        __result_obj__343 = (void*)0;
        return __result_obj__343;
    }
    result_563=(struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "sMultipleNode_clone", 3, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_563->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj102=result_563->sname;
        result_563->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_563->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        __dec_obj103=result_563->multiple_node;
        result_563->multiple_node=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->multiple_node));
        come_call_finalizer3(__dec_obj103,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_563->in_rescue=self->in_rescue;
    }
    __result_obj__344 = result_563;
    come_call_finalizer3(result_563,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__344;
}

struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info){
void* __right_value458 = (void*)0;
char* sname_564;
int sline_565;
void* __right_value459 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_566=0;
char* Err_567=0;
int var_num_stack_569;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
char* __list_values3___570[2];
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1char$ph* multiple_assign_571;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sNode* get_return_value_572;
struct buffer* source_573;
char* p_574;
char* head_575;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct buffer* buf_576;
struct buffer* __dec_obj104;
void* __right_value469 = (void*)0;
struct sBlock* if_block_577;
struct buffer* __dec_obj105;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_578;
int elif_num_579;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1sBlock$ph* elif_blocks_580;
struct sBlock* else_block_581;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sNode* expression_node2_582;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* _inf_value5;
struct sIfNode* _inf_obj_value5;
void* __right_value478 = (void*)0;
struct sNode* if_node_583;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* load_var_584;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sNode* _inf_value6;
struct sSaveRightValueObjects* _inf_obj_value6;
void* __right_value484 = (void*)0;
struct sNode* save_right_value_objects_585;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* _inf_value7;
struct sRestoreRightValueObjects* _inf_obj_value7;
void* __right_value487 = (void*)0;
struct sNode* restore_right_value_objects_586;
struct sNode* __list_values4___588[5];
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct list$1sNode$ph* multiple_node_587;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value8;
struct sMultipleNode* _inf_obj_value8;
void* __right_value492 = (void*)0;
struct sNode* __result_obj__346;
    sname_564=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_565=info->sline;
    if(    info->comma_instead_of_semicolon) {
        multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value459=err_msg(info,"can't be called exception_throw in conditional expression")));
        come_exception_var_c1_566=multiple_assign_var2->v1;
        Err_567=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        ((Err_567)?(puts(Err_567),exit(0)):(0));
        come_call_finalizer3(__right_value459,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        exit(1);
        (Err_567 = come_decrement_ref_count2(Err_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    static int var_num_568=0;
    var_num_568++;
    var_num_stack_569=var_num_568;
    multiple_assign_571=(struct list$1char$ph*)come_increment_ref_count((__list_values3___570[0]=((char*)(__right_value461=xsprintf("come_exception_var_b\%s",((char*)(__right_value460=int_to_string(var_num_stack_569)))))),
__list_values3___570[1]=((char*)(__right_value462=xsprintf("Err"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "08if.c", 598, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values3___570)));
    (__right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    get_return_value_572=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_571),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_573=(struct buffer*)come_increment_ref_count(info->source);
    p_574=info->p;
    head_575=info->head;
    buf_576=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 607, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(buf_576,"{ return none(Err); }");
    __dec_obj104=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_576);
    come_call_finalizer3(__dec_obj104,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_565;
    if_block_577=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj105=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_573);
    come_call_finalizer3(__dec_obj105,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_574;
    info->head=head_575;
    info->sline=sline_565;
    elif_expression_nodes_578=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 623, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_579=0;
    elif_blocks_580=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 626, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    else_block_581=((void*)0);
    expression_node2_582=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value474=xsprintf("Err"))),info));
    (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 632, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value477=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 632, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_582),if_block_577,elif_expression_nodes_578,elif_blocks_580,elif_num_579,else_block_581,(_Bool)0,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sIfNode_finalize;
    _inf_value5->clone=(void*)sIfNode_clone;
    _inf_value5->compile=(void*)sIfNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sIfNode_terminated;
    _inf_value5->kind=(void*)sIfNode_kind;
    if_node_583=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value477,sIfNode_finalize, 0, 1, 0, 0, (void*)0);
    load_var_584=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value480=xsprintf("come_exception_var_b\%s",((char*)(__right_value479=int_to_string(var_num_stack_569)))))),info));
    (__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 635, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value483=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 635, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value6->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value6->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value6->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_585=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value483,sSaveRightValueObjects_finalize, 0, 1, 0, 0, (void*)0);
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 636, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value486=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 636, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value7->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value7->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value7->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_586=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer3(__right_value486,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, (void*)0);
    multiple_node_587=(struct list$1sNode$ph*)come_increment_ref_count((__list_values4___588[0]=save_right_value_objects_585,
__list_values4___588[1]=get_return_value_572,
__list_values4___588[2]=if_node_583,
__list_values4___588[3]=restore_right_value_objects_586,
__list_values4___588[4]=load_var_584,
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 638, "struct list$1sNode$ph", list$1sNode$ph_finalize, list$1sNode$ph_clone, list$1sNode$ph_get_hash_key, list$1sNode$ph_equals)),5,__list_values4___588)));
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 640, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value8=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value491=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 640, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(multiple_node_587),(_Bool)0,info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sMultipleNode_finalize;
    _inf_value8->clone=(void*)sMultipleNode_clone;
    _inf_value8->compile=(void*)sMultipleNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sMultipleNode_terminated;
    _inf_value8->kind=(void*)sMultipleNode_kind;
    __result_obj__346 = come_increment_ref_count(((struct sNode*)(__right_value492=_inf_value8)));
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_564 = come_decrement_ref_count2(sname_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign_571,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((get_return_value_572) ? get_return_value_572 = come_decrement_ref_count2(get_return_value_572, ((struct sNode*)get_return_value_572)->finalize, ((struct sNode*)get_return_value_572)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(source_573,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_576,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_577,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_578,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_580,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_581,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    ((expression_node2_582) ? expression_node2_582 = come_decrement_ref_count2(expression_node2_582, ((struct sNode*)expression_node2_582)->finalize, ((struct sNode*)expression_node2_582)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((if_node_583) ? if_node_583 = come_decrement_ref_count2(if_node_583, ((struct sNode*)if_node_583)->finalize, ((struct sNode*)if_node_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((load_var_584) ? load_var_584 = come_decrement_ref_count2(load_var_584, ((struct sNode*)load_var_584)->finalize, ((struct sNode*)load_var_584)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((save_right_value_objects_585) ? save_right_value_objects_585 = come_decrement_ref_count2(save_right_value_objects_585, ((struct sNode*)save_right_value_objects_585)->finalize, ((struct sNode*)save_right_value_objects_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((restore_right_value_objects_586) ? restore_right_value_objects_586 = come_decrement_ref_count2(restore_right_value_objects_586, ((struct sNode*)restore_right_value_objects_586)->finalize, ((struct sNode*)restore_right_value_objects_586)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(multiple_node_587,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value491,sMultipleNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value492) ? __right_value492 = come_decrement_ref_count2(__right_value492, ((struct sNode*)__right_value492)->finalize, ((struct sNode*)__right_value492)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count2(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__346;
}

struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info){
void* __right_value493 = (void*)0;
char* sname_589;
int sline_590;
int var_num_stack_592;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* __list_values5___593[2];
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1char$ph* multiple_assign_594;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* get_return_value_595;
struct buffer* source_596;
char* p_597;
char* head_598;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct buffer* buf_599;
struct buffer* __dec_obj106;
_Bool no_comma_600;
void* __right_value503 = (void*)0;
struct sNode* exp_601;
struct buffer* __dec_obj107;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* expression_node2_602;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sNode* cond_603;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* load_var_604;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* _inf_value9;
struct sSaveRightValueObjects* _inf_obj_value9;
void* __right_value513 = (void*)0;
struct sNode* save_right_value_objects_605;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value10;
struct sRestoreRightValueObjects* _inf_obj_value10;
void* __right_value516 = (void*)0;
struct sNode* restore_right_value_objects_606;
struct sNode* __list_values6___608[5];
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct list$1sNode$ph* multiple_node_607;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* _inf_value11;
struct sMultipleNode* _inf_obj_value11;
void* __right_value521 = (void*)0;
struct sNode* __result_obj__347;
    sname_589=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_590=info->sline;
    parse_sharp_v5(info);
    static int var_num_591=0;
    var_num_591++;
    var_num_stack_592=var_num_591;
    multiple_assign_594=(struct list$1char$ph*)come_increment_ref_count((__list_values5___593[0]=((char*)(__right_value495=xsprintf("come_exception_var_c\%s",((char*)(__right_value494=int_to_string(var_num_stack_592)))))),
__list_values5___593[1]=((char*)(__right_value496=xsprintf("Err"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "08if.c", 655, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values5___593)));
    (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    get_return_value_595=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_594),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_596=(struct buffer*)come_increment_ref_count(info->source);
    p_597=info->p;
    head_598=info->head;
    buf_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 664, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_599,"puts(Err), exit(0)");
    __dec_obj106=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_599);
    come_call_finalizer3(__dec_obj106,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_590;
    no_comma_600=info->no_comma;
    info->no_comma=(_Bool)0;
    exp_601=(struct sNode*)come_increment_ref_count(expression_v13(info));
    info->no_comma=no_comma_600;
    __dec_obj107=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_596);
    come_call_finalizer3(__dec_obj107,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_597;
    info->head=head_598;
    info->sline=sline_590;
    expression_node2_602=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value504=xsprintf("Err"))),info));
    (__right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    cond_603=(struct sNode*)come_increment_ref_count(conditional_node((struct sNode*)come_increment_ref_count(expression_node2_602),(struct sNode*)come_increment_ref_count(exp_601),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    load_var_604=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value509=xsprintf("come_exception_var_c\%s",((char*)(__right_value508=int_to_string(var_num_stack_592)))))),info));
    (__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 688, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value9=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value512=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 688, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value9->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value9->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value9->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_605=(struct sNode*)come_increment_ref_count(_inf_value9);
    come_call_finalizer3(__right_value512,sSaveRightValueObjects_finalize, 0, 1, 0, 0, (void*)0);
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 689, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value10=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value515=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 689, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value10->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value10->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value10->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_606=(struct sNode*)come_increment_ref_count(_inf_value10);
    come_call_finalizer3(__right_value515,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, (void*)0);
    multiple_node_607=(struct list$1sNode$ph*)come_increment_ref_count((__list_values6___608[0]=save_right_value_objects_605,
__list_values6___608[1]=get_return_value_595,
__list_values6___608[2]=cond_603,
__list_values6___608[3]=restore_right_value_objects_606,
__list_values6___608[4]=load_var_604,
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 691, "struct list$1sNode$ph", list$1sNode$ph_finalize, list$1sNode$ph_clone, list$1sNode$ph_get_hash_key, list$1sNode$ph_equals)),5,__list_values6___608)));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 693, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value11=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value520=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 693, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(multiple_node_607),(_Bool)0,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sMultipleNode_finalize;
    _inf_value11->clone=(void*)sMultipleNode_clone;
    _inf_value11->compile=(void*)sMultipleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sMultipleNode_terminated;
    _inf_value11->kind=(void*)sMultipleNode_kind;
    __result_obj__347 = come_increment_ref_count(((struct sNode*)(__right_value521=_inf_value11)));
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_589 = come_decrement_ref_count2(sname_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign_594,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((get_return_value_595) ? get_return_value_595 = come_decrement_ref_count2(get_return_value_595, ((struct sNode*)get_return_value_595)->finalize, ((struct sNode*)get_return_value_595)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(source_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((exp_601) ? exp_601 = come_decrement_ref_count2(exp_601, ((struct sNode*)exp_601)->finalize, ((struct sNode*)exp_601)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((expression_node2_602) ? expression_node2_602 = come_decrement_ref_count2(expression_node2_602, ((struct sNode*)expression_node2_602)->finalize, ((struct sNode*)expression_node2_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((cond_603) ? cond_603 = come_decrement_ref_count2(cond_603, ((struct sNode*)cond_603)->finalize, ((struct sNode*)cond_603)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((load_var_604) ? load_var_604 = come_decrement_ref_count2(load_var_604, ((struct sNode*)load_var_604)->finalize, ((struct sNode*)load_var_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((save_right_value_objects_605) ? save_right_value_objects_605 = come_decrement_ref_count2(save_right_value_objects_605, ((struct sNode*)save_right_value_objects_605)->finalize, ((struct sNode*)save_right_value_objects_605)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((restore_right_value_objects_606) ? restore_right_value_objects_606 = come_decrement_ref_count2(restore_right_value_objects_606, ((struct sNode*)restore_right_value_objects_606)->finalize, ((struct sNode*)restore_right_value_objects_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(multiple_node_607,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value520,sMultipleNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value521) ? __right_value521 = come_decrement_ref_count2(__right_value521, ((struct sNode*)__right_value521)->finalize, ((struct sNode*)__right_value521)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count2(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__347;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value522 = (void*)0;
char* sname_609;
int sline_610;
int sline_real_611;
void* __right_value523 = (void*)0;
struct sNode* expression_node_612;
void* __right_value524 = (void*)0;
struct sBlock* if_block_613;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_614;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1sBlock$ph* elif_blocks_615;
int elif_num_616;
struct sBlock* else_block_617;
char* saved_p_618;
int saved_sline_619;
void* __right_value529 = (void*)0;
char* buf_620;
int sline_real_621;
void* __right_value530 = (void*)0;
struct sNode* expression_node_622;
void* __right_value531 = (void*)0;
struct sBlock* elif_block_623;
void* __right_value535 = (void*)0;
struct sBlock* __dec_obj111;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value538 = (void*)0;
struct sNode* result_627;
struct sNode* __result_obj__349;
void* __right_value539 = (void*)0;
struct sNode* __result_obj__350;
    if(    charp_operator_equals(buf,"if")) {
        sname_609=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        sline_610=info->sline;
        sline_real_611=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_612=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_613=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_614=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 716, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        elif_blocks_615=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 718, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        elif_num_616=0;
        else_block_617=((void*)0);
        while(1) {
            saved_p_618=info->p;
            saved_sline_619=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                break;
            }
            parse_sharp_v5(info);
            buf_620=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_620,"else")) {
                sline_real_621=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_622=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_push_back(elif_expression_nodes_614,(struct sNode*)come_increment_ref_count(expression_node_622));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_623=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlock$ph$p_push_back(elif_blocks_615,(struct sBlock*)come_increment_ref_count(elif_block_623));
                    elif_num_616++;
                    ((expression_node_622) ? expression_node_622 = come_decrement_ref_count2(expression_node_622, ((struct sNode*)expression_node_622)->finalize, ((struct sNode*)expression_node_622)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(elif_block_623,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj111=else_block_617;
                    else_block_617=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj111,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (buf_620 = come_decrement_ref_count2(buf_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                info->sline_real=sline_real_621;
            }
            else {
                info->p=saved_p_618;
                info->sline=saved_sline_619;
                (buf_620 = come_decrement_ref_count2(buf_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (buf_620 = come_decrement_ref_count2(buf_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 781, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value537=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 781, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node_612),if_block_613,elif_expression_nodes_614,elif_blocks_615,elif_num_616,else_block_617,(_Bool)0,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sIfNode_finalize;
        _inf_value12->clone=(void*)sIfNode_clone;
        _inf_value12->compile=(void*)sIfNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sIfNode_terminated;
        _inf_value12->kind=(void*)sIfNode_kind;
        result_627=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer3(__right_value537,sIfNode_finalize, 0, 1, 0, 0, (void*)0);
        info->sline_real=sline_real_611;
        __result_obj__349 = come_increment_ref_count(result_627);
        (sname_609 = come_decrement_ref_count2(sname_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((expression_node_612) ? expression_node_612 = come_decrement_ref_count2(expression_node_612, ((struct sNode*)expression_node_612)->finalize, ((struct sNode*)expression_node_612)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(if_block_613,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_614,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_615,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_617,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        ((result_627) ? result_627 = come_decrement_ref_count2(result_627, ((struct sNode*)result_627)->finalize, ((struct sNode*)result_627)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__349) ? __result_obj__349 = come_decrement_ref_count2(__result_obj__349, ((struct sNode*)__result_obj__349)->finalize, ((struct sNode*)__result_obj__349)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__349;
        (sname_609 = come_decrement_ref_count2(sname_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((expression_node_612) ? expression_node_612 = come_decrement_ref_count2(expression_node_612, ((struct sNode*)expression_node_612)->finalize, ((struct sNode*)expression_node_612)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(if_block_613,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_614,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_615,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_617,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        ((result_627) ? result_627 = come_decrement_ref_count2(result_627, ((struct sNode*)result_627)->finalize, ((struct sNode*)result_627)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__350 = come_increment_ref_count(((struct sNode*)(__right_value539=string_node_v7(buf,head,head_sline,info))));
    ((__right_value539) ? __right_value539 = come_decrement_ref_count2(__right_value539, ((struct sNode*)__right_value539)->finalize, ((struct sNode*)__right_value539)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count2(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__350;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_push_back(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value532 = (void*)0;
struct list_item$1sBlock$ph* litem_624;
struct sBlock* __dec_obj108;
void* __right_value533 = (void*)0;
struct list_item$1sBlock$ph* litem_625;
struct sBlock* __dec_obj109;
void* __right_value534 = (void*)0;
struct list_item$1sBlock$ph* litem_626;
struct sBlock* __dec_obj110;
struct list$1sBlock$ph* __result_obj__348;
    if(    self->len==0) {
        litem_624=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value532=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1489, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_624->prev=((void*)0);
        litem_624->next=((void*)0);
        __dec_obj108=litem_624->item;
        litem_624->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_624;
        self->head=litem_624;
    }
    else if(    self->len==1) {
        litem_625=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value533=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1499, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_625->prev=self->head;
        litem_625->next=((void*)0);
        __dec_obj109=litem_625->item;
        litem_625->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_625;
        self->head->next=litem_625;
    }
    else {
        litem_626=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value534=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./comelang.h", 1509, "struct list_item$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_626->prev=self->tail;
        litem_626->next=((void*)0);
        __dec_obj110=litem_626->item;
        litem_626->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj110,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_626;
        self->tail=litem_626;
    }
    self->len++;
    __result_obj__348 = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__348;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value540 = (void*)0;
char* sname_628;
int sline_629;
void* __right_value541 = (void*)0;
struct sBlock* if_block_630;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sNode* _inf_value13;
struct sOrStatmentNode* _inf_obj_value13;
void* __right_value548 = (void*)0;
struct sNode* __result_obj__353;
    sname_628=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_629=info->sline;
    parse_sharp_v5(info);
    if_block_630=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 799, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value13=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value543=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 799, "struct sOrStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_630,info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value13->clone=(void*)sOrStatmentNode_clone;
    _inf_value13->compile=(void*)sOrStatmentNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value13->kind=(void*)sOrStatmentNode_kind;
    __result_obj__353 = come_increment_ref_count(((struct sNode*)(__right_value548=_inf_value13)));
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_628 = come_decrement_ref_count2(sname_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(if_block_630,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value543,sOrStatmentNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value548) ? __right_value548 = come_decrement_ref_count2(__right_value548, ((struct sNode*)__right_value548)->finalize, ((struct sNode*)__right_value548)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count2(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__353;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
struct sOrStatmentNode* __result_obj__351;
void* __right_value544 = (void*)0;
struct sOrStatmentNode* result_631;
void* __right_value545 = (void*)0;
char* __dec_obj112;
void* __right_value546 = (void*)0;
struct sNode* __dec_obj113;
void* __right_value547 = (void*)0;
struct sBlock* __dec_obj114;
struct sOrStatmentNode* __result_obj__352;
    if(    self==(void*)0) {
        __result_obj__351 = (void*)0;
        return __result_obj__351;
    }
    result_631=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_631->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj112=result_631->sname;
        result_631->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj113=result_631->mExpressionNode;
        result_631->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj114=result_631->mIfBlock;
        result_631->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj114,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__352 = result_631;
    come_call_finalizer3(result_631,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__352;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value549 = (void*)0;
char* sname_632;
int sline_633;
void* __right_value550 = (void*)0;
struct sBlock* if_block_634;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sNode* _inf_value14;
struct sAndStatmentNode* _inf_obj_value14;
void* __right_value557 = (void*)0;
struct sNode* __result_obj__356;
    sname_632=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_633=info->sline;
    parse_sharp_v5(info);
    if_block_634=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 811, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value14=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value552=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 811, "struct sAndStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_634,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value14->clone=(void*)sAndStatmentNode_clone;
    _inf_value14->compile=(void*)sAndStatmentNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value14->kind=(void*)sAndStatmentNode_kind;
    __result_obj__356 = come_increment_ref_count(((struct sNode*)(__right_value557=_inf_value14)));
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_632 = come_decrement_ref_count2(sname_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(if_block_634,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value552,sAndStatmentNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value557) ? __right_value557 = come_decrement_ref_count2(__right_value557, ((struct sNode*)__right_value557)->finalize, ((struct sNode*)__right_value557)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count2(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__356;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
struct sAndStatmentNode* __result_obj__354;
void* __right_value553 = (void*)0;
struct sAndStatmentNode* result_635;
void* __right_value554 = (void*)0;
char* __dec_obj115;
void* __right_value555 = (void*)0;
struct sNode* __dec_obj116;
void* __right_value556 = (void*)0;
struct sBlock* __dec_obj117;
struct sAndStatmentNode* __result_obj__355;
    if(    self==(void*)0) {
        __result_obj__354 = (void*)0;
        return __result_obj__354;
    }
    result_635=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_635->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_635->sname;
        result_635->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj116=result_635->mExpressionNode;
        result_635->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj117=result_635->mIfBlock;
        result_635->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj117,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__355 = result_635;
    come_call_finalizer3(result_635,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__355;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __right_value558 = (void*)0;
char* sname_636;
int sline_637;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* it_node_638;
void* __right_value561 = (void*)0;
struct sNode* conditional_value_639;
void* __right_value562 = (void*)0;
struct sBlock* if_block_640;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_641;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct list$1sBlock$ph* elif_blocks_642;
int elif_num_643;
struct sBlock* else_block_644;
void* __right_value567 = (void*)0;
struct sBlock* __dec_obj118;
void* __right_value568 = (void*)0;
struct sNode* conditional_value_645;
void* __right_value569 = (void*)0;
struct sBlock* elif_block_646;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sBlock* __dec_obj119;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* _inf_value15;
struct sIfNode* _inf_obj_value15;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* _inf_value16;
struct sMatchNode* _inf_obj_value16;
void* __right_value582 = (void*)0;
struct sNode* __result_obj__359;
    sname_636=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_637=info->sline;
    expected_next_character(123,info);
    it_node_638=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    expected_next_character(40,info);
    conditional_value_639=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_640=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_641=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 832, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_642=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 833, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_643=0;
    else_block_644=((void*)0);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj118=else_block_644;
            else_block_644=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer3(__dec_obj118,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_645=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph$p_add(elif_expression_nodes_641,(struct sNode*)come_increment_ref_count(conditional_value_645));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_646=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlock$ph$p_add(elif_blocks_642,(struct sBlock*)come_increment_ref_count(elif_block_646));
            elif_num_643++;
            ((conditional_value_645) ? conditional_value_645 = come_decrement_ref_count2(conditional_value_645, ((struct sNode*)conditional_value_645)->finalize, ((struct sNode*)conditional_value_645)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(elif_block_646,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_644==((void*)0)) {
        __dec_obj119=else_block_644;
        else_block_644=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 871, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj119,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_644->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph$p_push_back(else_block_644->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 877, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value15=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value575=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 877, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_value_639),if_block_640,elif_expression_nodes_641,elif_blocks_642,elif_num_643,else_block_644,(_Bool)0,info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfNode_finalize;
    _inf_value15->clone=(void*)sIfNode_clone;
    _inf_value15->compile=(void*)sIfNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfNode_terminated;
    _inf_value15->kind=(void*)sIfNode_kind;
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 877, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value16=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value577=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "08if.c", 877, "struct sMatchNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_638),(struct sNode*)come_increment_ref_count(_inf_value15),info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sMatchNode_finalize;
    _inf_value16->clone=(void*)sMatchNode_clone;
    _inf_value16->compile=(void*)sMatchNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sMatchNode_terminated;
    _inf_value16->kind=(void*)sMatchNode_kind;
    __result_obj__359 = come_increment_ref_count(((struct sNode*)(__right_value582=_inf_value16)));
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_636 = come_decrement_ref_count2(sname_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_638) ? it_node_638 = come_decrement_ref_count2(it_node_638, ((struct sNode*)it_node_638)->finalize, ((struct sNode*)it_node_638)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_value_639) ? conditional_value_639 = come_decrement_ref_count2(conditional_value_639, ((struct sNode*)conditional_value_639)->finalize, ((struct sNode*)conditional_value_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(if_block_640,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_641,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_642,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_644,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value575,sIfNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value577,sMatchNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value582) ? __right_value582 = come_decrement_ref_count2(__right_value582, ((struct sNode*)__right_value582)->finalize, ((struct sNode*)__right_value582)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__359) ? __result_obj__359 = come_decrement_ref_count2(__result_obj__359, ((struct sNode*)__result_obj__359)->finalize, ((struct sNode*)__result_obj__359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__359;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
struct sMatchNode* __result_obj__357;
void* __right_value578 = (void*)0;
struct sMatchNode* result_647;
void* __right_value579 = (void*)0;
char* __dec_obj120;
void* __right_value580 = (void*)0;
struct sNode* __dec_obj121;
void* __right_value581 = (void*)0;
struct sNode* __dec_obj122;
struct sMatchNode* __result_obj__358;
    if(    self==(void*)0) {
        __result_obj__357 = (void*)0;
        return __result_obj__357;
    }
    result_647=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_647->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj120=result_647->sname;
        result_647->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_647->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj121=result_647->it_node;
        result_647->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj122=result_647->match_node;
        result_647->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__358 = result_647;
    come_call_finalizer3(result_647,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__358;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value583 = (void*)0;
char* sname_648;
int sline_649;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sNode* it_node_650;
void* __right_value586 = (void*)0;
struct sNode* conditional_node_651;
void* __right_value587 = (void*)0;
struct sBlock* if_block_652;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_653;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1sBlock$ph* elif_blocks_654;
int elif_num_655;
struct sBlock* else_block_656;
char* saved_p_657;
int saved_sline_658;
void* __right_value592 = (void*)0;
char* buf_659;
void* __right_value593 = (void*)0;
struct sNode* expression_node_660;
void* __right_value594 = (void*)0;
struct sBlock* elif_block_661;
void* __right_value595 = (void*)0;
struct sBlock* __dec_obj123;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sBlock* __dec_obj124;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sNode* _inf_value17;
struct sIfNode* _inf_obj_value17;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value18;
struct sIfMethodNode* _inf_obj_value18;
void* __right_value608 = (void*)0;
struct sNode* result_662;
struct sNode* __result_obj__362;
    sname_648=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_649=info->sline;
    it_node_650=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_651=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_652=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_653=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 893, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_654=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 895, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_655=0;
    else_block_656=((void*)0);
    while(1) {
        saved_p_657=info->p;
        saved_sline_658=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_659=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_659,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_660=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph$p_push_back(elif_expression_nodes_653,(struct sNode*)come_increment_ref_count(expression_node_660));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_661=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph$p_push_back(elif_blocks_654,(struct sBlock*)come_increment_ref_count(elif_block_661));
                elif_num_655++;
                ((expression_node_660) ? expression_node_660 = come_decrement_ref_count2(expression_node_660, ((struct sNode*)expression_node_660)->finalize, ((struct sNode*)expression_node_660)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(elif_block_661,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj123=else_block_656;
                else_block_656=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj123,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_659 = come_decrement_ref_count2(buf_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_657;
            info->sline=saved_sline_658;
            (buf_659 = come_decrement_ref_count2(buf_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_659 = come_decrement_ref_count2(buf_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_656==((void*)0)) {
        __dec_obj124=else_block_656;
        else_block_656=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 956, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj124,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_656->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph$p_push_back(else_block_656->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 962, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value601=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 962, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node_651),if_block_652,elif_expression_nodes_653,elif_blocks_654,elif_num_655,else_block_656,(_Bool)0,info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sIfNode_finalize;
    _inf_value17->clone=(void*)sIfNode_clone;
    _inf_value17->compile=(void*)sIfNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sIfNode_terminated;
    _inf_value17->kind=(void*)sIfNode_kind;
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 962, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value603=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 962, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_650),(struct sNode*)come_increment_ref_count(_inf_value17),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIfMethodNode_finalize;
    _inf_value18->clone=(void*)sIfMethodNode_clone;
    _inf_value18->compile=(void*)sIfMethodNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sIfMethodNode_terminated;
    _inf_value18->kind=(void*)sIfMethodNode_kind;
    result_662=(struct sNode*)come_increment_ref_count(_inf_value18);
    come_call_finalizer3(__right_value601,sIfNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value603,sIfMethodNode_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__362 = come_increment_ref_count(result_662);
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_648 = come_decrement_ref_count2(sname_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_650) ? it_node_650 = come_decrement_ref_count2(it_node_650, ((struct sNode*)it_node_650)->finalize, ((struct sNode*)it_node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_651) ? conditional_node_651 = come_decrement_ref_count2(conditional_node_651, ((struct sNode*)conditional_node_651)->finalize, ((struct sNode*)conditional_node_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(if_block_652,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_653,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_654,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_656,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    ((result_662) ? result_662 = come_decrement_ref_count2(result_662, ((struct sNode*)result_662)->finalize, ((struct sNode*)result_662)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count2(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__362;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
struct sIfMethodNode* __result_obj__360;
void* __right_value604 = (void*)0;
struct sIfMethodNode* result_663;
void* __right_value605 = (void*)0;
char* __dec_obj125;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj126;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj127;
struct sIfMethodNode* __result_obj__361;
    if(    self==(void*)0) {
        __result_obj__360 = (void*)0;
        return __result_obj__360;
    }
    result_663=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_663->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj125=result_663->sname;
        result_663->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_663->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj126=result_663->it_node;
        result_663->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj127=result_663->match_node;
        result_663->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__361 = result_663;
    come_call_finalizer3(result_663,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__361;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value609 = (void*)0;
char* sname_664;
int sline_665;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* it_node_666;
void* __right_value612 = (void*)0;
struct sNode* conditional_node_667;
void* __right_value613 = (void*)0;
struct sNode* conditional_node2_668;
void* __right_value614 = (void*)0;
struct sBlock* if_block_669;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_670;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct list$1sBlock$ph* elif_blocks_671;
int elif_num_672;
struct sBlock* else_block_673;
char* saved_p_674;
int saved_sline_675;
void* __right_value619 = (void*)0;
char* buf_676;
void* __right_value620 = (void*)0;
struct sNode* expression_node_677;
void* __right_value621 = (void*)0;
struct sBlock* elif_block_678;
void* __right_value622 = (void*)0;
struct sBlock* __dec_obj128;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sBlock* __dec_obj129;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sNode* _inf_value19;
struct sIfNode* _inf_obj_value19;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sNode* _inf_value20;
struct sIfMethodNode* _inf_obj_value20;
void* __right_value631 = (void*)0;
struct sNode* result_679;
struct sNode* __result_obj__363;
    sname_664=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_665=info->sline;
    it_node_666=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_667=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_668=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_667),info));
    parse_sharp_v5(info);
    if_block_669=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_670=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 981, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_671=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 983, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_672=0;
    else_block_673=((void*)0);
    while(1) {
        saved_p_674=info->p;
        saved_sline_675=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_676=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_676,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_677=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph$p_push_back(elif_expression_nodes_670,(struct sNode*)come_increment_ref_count(expression_node_677));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_678=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph$p_push_back(elif_blocks_671,(struct sBlock*)come_increment_ref_count(elif_block_678));
                elif_num_672++;
                ((expression_node_677) ? expression_node_677 = come_decrement_ref_count2(expression_node_677, ((struct sNode*)expression_node_677)->finalize, ((struct sNode*)expression_node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(elif_block_678,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj128=else_block_673;
                else_block_673=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj128,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_676 = come_decrement_ref_count2(buf_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_674;
            info->sline=saved_sline_675;
            (buf_676 = come_decrement_ref_count2(buf_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_676 = come_decrement_ref_count2(buf_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_673==((void*)0)) {
        __dec_obj129=else_block_673;
        else_block_673=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1044, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj129,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_673->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph$p_push_back(else_block_673->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1050, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value628=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1050, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_668),if_block_669,elif_expression_nodes_670,elif_blocks_671,elif_num_672,else_block_673,(_Bool)0,info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sIfNode_finalize;
    _inf_value19->clone=(void*)sIfNode_clone;
    _inf_value19->compile=(void*)sIfNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sIfNode_terminated;
    _inf_value19->kind=(void*)sIfNode_kind;
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1050, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value630=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1050, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_666),(struct sNode*)come_increment_ref_count(_inf_value19),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sIfMethodNode_finalize;
    _inf_value20->clone=(void*)sIfMethodNode_clone;
    _inf_value20->compile=(void*)sIfMethodNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sIfMethodNode_terminated;
    _inf_value20->kind=(void*)sIfMethodNode_kind;
    result_679=(struct sNode*)come_increment_ref_count(_inf_value20);
    come_call_finalizer3(__right_value628,sIfNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value630,sIfMethodNode_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__363 = come_increment_ref_count(result_679);
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_664 = come_decrement_ref_count2(sname_664, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_666) ? it_node_666 = come_decrement_ref_count2(it_node_666, ((struct sNode*)it_node_666)->finalize, ((struct sNode*)it_node_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_667) ? conditional_node_667 = come_decrement_ref_count2(conditional_node_667, ((struct sNode*)conditional_node_667)->finalize, ((struct sNode*)conditional_node_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_668) ? conditional_node2_668 = come_decrement_ref_count2(conditional_node2_668, ((struct sNode*)conditional_node2_668)->finalize, ((struct sNode*)conditional_node2_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(if_block_669,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_670,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_671,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_673,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    ((result_679) ? result_679 = come_decrement_ref_count2(result_679, ((struct sNode*)result_679)->finalize, ((struct sNode*)result_679)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count2(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__363;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value632 = (void*)0;
char* sname_680;
int sline_681;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* it_node_682;
void* __right_value635 = (void*)0;
struct sNode* conditional_node_683;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sNode* conditional_node2_684;
void* __right_value638 = (void*)0;
struct sBlock* if_block_685;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_686;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct list$1sBlock$ph* elif_blocks_687;
int elif_num_688;
struct sBlock* else_block_689;
char* saved_p_690;
int saved_sline_691;
void* __right_value643 = (void*)0;
char* buf_692;
void* __right_value644 = (void*)0;
struct sNode* expression_node_693;
void* __right_value645 = (void*)0;
struct sBlock* elif_block_694;
void* __right_value646 = (void*)0;
struct sBlock* __dec_obj130;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sBlock* __dec_obj131;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sNode* _inf_value21;
struct sIfNode* _inf_obj_value21;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value22;
struct sIfMethodNode* _inf_obj_value22;
void* __right_value655 = (void*)0;
struct sNode* result_695;
struct sNode* __result_obj__364;
    sname_680=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_681=info->sline;
    it_node_682=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_683=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_684=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_683),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_685=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_686=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 1069, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_687=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 1071, "struct list$1sBlock$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_688=0;
    else_block_689=((void*)0);
    while(1) {
        saved_p_690=info->p;
        saved_sline_691=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)) {
            break;
        }
        parse_sharp_v5(info);
        buf_692=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_692,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_693=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph$p_push_back(elif_expression_nodes_686,(struct sNode*)come_increment_ref_count(expression_node_693));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_694=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph$p_push_back(elif_blocks_687,(struct sBlock*)come_increment_ref_count(elif_block_694));
                elif_num_688++;
                ((expression_node_693) ? expression_node_693 = come_decrement_ref_count2(expression_node_693, ((struct sNode*)expression_node_693)->finalize, ((struct sNode*)expression_node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(elif_block_694,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj130=else_block_689;
                else_block_689=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj130,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (buf_692 = come_decrement_ref_count2(buf_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_690;
            info->sline=saved_sline_691;
            (buf_692 = come_decrement_ref_count2(buf_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        (buf_692 = come_decrement_ref_count2(buf_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    else_block_689==((void*)0)) {
        __dec_obj131=else_block_689;
        else_block_689=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1132, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj131,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        else_block_689->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph$p_push_back(else_block_689->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1138, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value21=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value652=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1138, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_684),if_block_685,elif_expression_nodes_686,elif_blocks_687,elif_num_688,else_block_689,(_Bool)0,info))));
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sIfNode_finalize;
    _inf_value21->clone=(void*)sIfNode_clone;
    _inf_value21->compile=(void*)sIfNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sline_real=(void*)sNodeBase_sline_real;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sIfNode_terminated;
    _inf_value21->kind=(void*)sIfNode_kind;
    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1138, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value22=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value654=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1138, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_682),(struct sNode*)come_increment_ref_count(_inf_value21),info))));
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sIfMethodNode_finalize;
    _inf_value22->clone=(void*)sIfMethodNode_clone;
    _inf_value22->compile=(void*)sIfMethodNode_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sline_real=(void*)sNodeBase_sline_real;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sIfMethodNode_terminated;
    _inf_value22->kind=(void*)sIfMethodNode_kind;
    result_695=(struct sNode*)come_increment_ref_count(_inf_value22);
    come_call_finalizer3(__right_value652,sIfNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value654,sIfMethodNode_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__364 = come_increment_ref_count(result_695);
    ((expression_node) ? expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (sname_680 = come_decrement_ref_count2(sname_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((it_node_682) ? it_node_682 = come_decrement_ref_count2(it_node_682, ((struct sNode*)it_node_682)->finalize, ((struct sNode*)it_node_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node_683) ? conditional_node_683 = come_decrement_ref_count2(conditional_node_683, ((struct sNode*)conditional_node_683)->finalize, ((struct sNode*)conditional_node_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((conditional_node2_684) ? conditional_node2_684 = come_decrement_ref_count2(conditional_node2_684, ((struct sNode*)conditional_node2_684)->finalize, ((struct sNode*)conditional_node2_684)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(if_block_685,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_686,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_687,list$1sBlock$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_689,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    ((result_695) ? result_695 = come_decrement_ref_count2(result_695, ((struct sNode*)result_695)->finalize, ((struct sNode*)result_695)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__364) ? __result_obj__364 = come_decrement_ref_count2(__result_obj__364, ((struct sNode*)__result_obj__364)->finalize, ((struct sNode*)__result_obj__364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__364;
}

