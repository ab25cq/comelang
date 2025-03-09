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
    struct list$1sNode$ph* exps;
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
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* tuple_elements;
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
    struct list$1sNode$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* sType_clone(struct sType* self);
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
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
char* __dec_obj23;
struct sStrNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj23=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__237,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sStrNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_350;
void* __right_value264 = (void*)0;
char* __dec_obj24;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__255;
    come_value_350=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj24=come_value_350->c_value;
    come_value_350->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=come_value_350->type;
    come_value_350->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_350->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_350));
    add_come_last_code(info,"%s",come_value_350->c_value);
    __result_obj__255 = (_Bool)1;
    come_call_finalizer3(come_value_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__255;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sStrNode_finalize(struct sStrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct list_item$1sType$ph* it_351;
struct list_item$1sType$ph* prev_it_352;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_353;
struct list_item$1sNode$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__239;
void* __right_value265 = (void*)0;
struct sType* result_364;
void* __right_value266 = (void*)0;
struct sType* __dec_obj25;
void* __right_value267 = (void*)0;
struct sType* __dec_obj26;
void* __right_value275 = (void*)0;
struct list$1sType$ph* __dec_obj30;
void* __right_value276 = (void*)0;
struct sType* __dec_obj31;
void* __right_value277 = (void*)0;
struct sType* __dec_obj32;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value281 = (void*)0;
char* __dec_obj35;
void* __right_value282 = (void*)0;
char* __dec_obj36;
void* __right_value283 = (void*)0;
char* __dec_obj37;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __dec_obj41;
void* __right_value292 = (void*)0;
char* __dec_obj42;
void* __right_value293 = (void*)0;
struct list$1sType$ph* __dec_obj43;
void* __right_value301 = (void*)0;
struct list$1char$ph* __dec_obj47;
void* __right_value302 = (void*)0;
struct sType* __dec_obj48;
struct sType* __result_obj__253;
    if(    self==(void*)0) {
        __result_obj__239 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__239,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__239;
    }
    result_364=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_364->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj25=result_364->mOriginalLoadVarType;
        result_364->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj26=result_364->mChannelType;
        result_364->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj30=result_364->mGenericsTypes;
        result_364->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj30,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj31=result_364->mNoSolvedGenericsType;
        result_364->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj32=result_364->mAnyOriginalType;
        result_364->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_364->mSizeNum;
        result_364->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj34=result_364->mAlignas;
        result_364->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj35=result_364->mTupleName;
        result_364->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj36=result_364->mAttribute;
        result_364->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_364->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_364->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_364->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_364->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_364->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_364->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_364->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_364->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_364->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_364->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_364->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_364->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_364->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_364->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_364->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_364->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_364->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_364->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_364->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_364->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_364->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_364->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_364->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj37=result_364->mAsmName;
        result_364->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_364->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj41=result_364->mArrayNum;
        result_364->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_364->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_364->mOriginalTypeName;
        result_364->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_364->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_364->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_364->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj43=result_364->mParamTypes;
        result_364->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj43,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj47=result_364->mParamNames;
        result_364->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj47,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj48=result_364->mResultType;
        result_364->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mVarArgs=self->mVarArgs;
    }
    __result_obj__253 = come_increment_ref_count(result_364);
    come_call_finalizer3(result_364,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_355;
    result_355=0;
    result_355+=int_get_hash_key(((int)self->mClass));
    result_355+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_355+=int_get_hash_key(((int)self->mChannelType));
    result_355+=int_get_hash_key(((int)self->mGenericsTypes));
    result_355+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_355+=int_get_hash_key(((int)self->mAnyClass));
    result_355+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_355+=int_get_hash_key(((int)self->mSizeNum));
    result_355+=int_get_hash_key(((int)self->mAlignas));
    result_355+=int_get_hash_key(((int)self->mTupleName));
    result_355+=int_get_hash_key(((int)self->mAttribute));
    result_355+=int_get_hash_key(((int)self->mAllocaValue));
    result_355+=int_get_hash_key(((int)self->mUnsigned));
    result_355+=int_get_hash_key(((int)self->mShort));
    result_355+=int_get_hash_key(((int)self->mLong));
    result_355+=int_get_hash_key(((int)self->mLongLong));
    result_355+=int_get_hash_key(((int)self->mConstant));
    result_355+=int_get_hash_key(((int)self->mAtomic));
    result_355+=int_get_hash_key(((int)self->mRegister));
    result_355+=int_get_hash_key(((int)self->mVolatile));
    result_355+=int_get_hash_key(((int)self->mStatic));
    result_355+=int_get_hash_key(((int)self->mUniq));
    result_355+=int_get_hash_key(((int)self->mRecord));
    result_355+=int_get_hash_key(((int)self->mExtern));
    result_355+=int_get_hash_key(((int)self->mRestrict));
    result_355+=int_get_hash_key(((int)self->mImmutable));
    result_355+=int_get_hash_key(((int)self->mHeap));
    result_355+=int_get_hash_key(((int)self->mChannel));
    result_355+=int_get_hash_key(((int)self->mNoHeap));
    result_355+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_355+=int_get_hash_key(((int)self->mException));
    result_355+=int_get_hash_key(((int)self->mGenerate));
    result_355+=int_get_hash_key(((int)self->mCreateVTable));
    result_355+=int_get_hash_key(((int)self->mDynamic));
    result_355+=int_get_hash_key(((int)self->mInline));
    result_355+=int_get_hash_key(((int)self->mNullValue));
    result_355+=int_get_hash_key(((int)self->mGuardValue));
    result_355+=int_get_hash_key(((int)self->mAsmName));
    result_355+=int_get_hash_key(((int)self->mTypedef));
    result_355+=int_get_hash_key(((int)self->mMultipleTypes));
    result_355+=int_get_hash_key(((int)self->mOriginIsArray));
    result_355+=int_get_hash_key(((int)self->mArrayNum));
    result_355+=int_get_hash_key(((int)self->mPointerNum));
    result_355+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_355+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_355+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_355+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_355+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_355+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_355+=int_get_hash_key(((int)self->mArrayPointerType));
    result_355+=int_get_hash_key(((int)self->mLambdaArray));
    result_355+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_355+=int_get_hash_key(((int)self->mParamTypes));
    result_355+=int_get_hash_key(((int)self->mParamNames));
    result_355+=int_get_hash_key(((int)self->mResultType));
    result_355+=int_get_hash_key(((int)self->mVarArgs));
    return result_355;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_356;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_357;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_356=left->head;
    it2_357=right->head;
    while(it_356!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_356->item,it2_357->item)) {
            return (_Bool)0;
        }
        it_356=it_356->next;
        it2_357=it2_357->next;
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
struct list_item$1sType$ph* it_358;
struct list_item$1sType$ph* it2_359;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_358=left->head;
    it2_359=right->head;
    while(it_358!=((void*)0)) {
        if(        !sType_equals(it_358->item,it2_359->item)) {
            return (_Bool)0;
        }
        it_358=it_358->next;
        it2_359=it2_359->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_360;
struct list_item$1sNode$ph* it2_361;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_360=left->head;
    it2_361=right->head;
    while(it_360!=((void*)0)) {
        if(        !sNode_equals(it_360->item,it2_361->item)) {
            return (_Bool)0;
        }
        it_360=it_360->next;
        it2_361=it2_361->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_362;
struct list_item$1char$ph* it2_363;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_362=left->head;
    it2_363=right->head;
    while(it_362!=((void*)0)) {
        if(        !string_equals(it_362->item,it2_363->item)) {
            return (_Bool)0;
        }
        it_362=it_362->next;
        it2_363=it2_363->next;
    }
    return (_Bool)1;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__240;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sType$ph* result_365;
struct list_item$1sType$ph* it_366;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1sType$ph* __result_obj__243;
    if(    self==((void*)0)) {
        __result_obj__240 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__240,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_365=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1404, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_366=self->head;
    while(it_366!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_365,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_366->item)));
        }
        else {
            list$1sType$ph$p_add(result_365,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_366->item)));
        }
        it_366=it_366->next;
    }
    __result_obj__243 = come_increment_ref_count(result_365);
    come_call_finalizer3(result_365,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__241;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value270 = (void*)0;
struct list_item$1sType$ph* litem_367;
struct sType* __dec_obj27;
void* __right_value271 = (void*)0;
struct list_item$1sType$ph* litem_368;
struct sType* __dec_obj28;
void* __right_value272 = (void*)0;
struct list_item$1sType$ph* litem_369;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__242;
    if(    self->len==0) {
        litem_367=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value270=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1423, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=((void*)0);
        litem_367->next=((void*)0);
        __dec_obj27=litem_367->item;
        litem_367->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_367;
        self->head=litem_367;
    }
    else if(    self->len==1) {
        litem_368=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value271=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1433, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->head;
        litem_368->next=((void*)0);
        __dec_obj28=litem_368->item;
        litem_368->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_368;
        self->head->next=litem_368;
    }
    else {
        litem_369=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value272=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1443, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->tail;
        litem_369->next=((void*)0);
        __dec_obj29=litem_369->item;
        litem_369->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_369;
        self->tail=litem_369;
    }
    self->len++;
    __result_obj__242 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__242;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_370;
struct list_item$1sType$ph* prev_it_371;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__244;
void* __right_value278 = (void*)0;
struct sNode* result_372;
struct sNode* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count2(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
    }
    result_372=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_372->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_372->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_372->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_372->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_372->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_372->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_372->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_372->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_372->kind=self->kind;
    }
    __result_obj__245 = come_increment_ref_count(result_372);
    ((result_372) ? result_372 = come_decrement_ref_count2(result_372, ((struct sNode*)result_372)->finalize, ((struct sNode*)result_372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count2(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__245;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__246;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sNode$ph* result_373;
struct list_item$1sNode$ph* it_374;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1sNode$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_373=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_374=self->head;
    while(it_374!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_373,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_374->item)));
        }
        else {
            list$1sNode$ph$p_add(result_373,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_374->item)));
        }
        it_374=it_374->next;
    }
    __result_obj__249 = come_increment_ref_count(result_373);
    come_call_finalizer3(result_373,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__247;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__247 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value286 = (void*)0;
struct list_item$1sNode$ph* litem_375;
struct sNode* __dec_obj38;
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_376;
struct sNode* __dec_obj39;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_377;
struct sNode* __dec_obj40;
struct list$1sNode$ph* __result_obj__248;
    if(    self->len==0) {
        litem_375=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value286=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj38=litem_375->item;
        litem_375->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj39=litem_376->item;
        litem_376->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj40=litem_377->item;
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result_obj__248 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__248;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_378;
struct list_item$1sNode$ph* prev_it_379;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        come_call_finalizer3(prev_it_379,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__250;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1char$ph* result_380;
struct list_item$1char$ph* it_381;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1char$ph* __result_obj__252;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__250,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_380=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_381=self->head;
    while(it_381!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_380,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_381->item)));
        }
        else {
            list$1char$ph$p_add(result_380,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_381->item)));
        }
        it_381=it_381->next;
    }
    __result_obj__252 = come_increment_ref_count(result_380);
    come_call_finalizer3(result_380,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value296 = (void*)0;
struct list_item$1char$ph* litem_382;
char* __dec_obj44;
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_383;
char* __dec_obj45;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_384;
char* __dec_obj46;
struct list$1char$ph* __result_obj__251;
    if(    self->len==0) {
        litem_382=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value296=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        __dec_obj44=litem_382->item;
        litem_382->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1) {
        litem_383=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        __dec_obj45=litem_383->item;
        litem_383->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        __dec_obj46=litem_384->item;
        litem_384->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result_obj__251 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_385;
struct list_item$1char$ph* prev_it_386;
    it_385=self->head;
    while(it_385!=((void*)0)) {
        prev_it_386=it_385;
        it_385=it_385->next;
        come_call_finalizer3(prev_it_386,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_387;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_388;
struct CVALUE* __dec_obj51;
void* __right_value308 = (void*)0;
struct list_item$1CVALUE$ph* litem_389;
struct CVALUE* __dec_obj52;
struct list$1CVALUE$ph* __result_obj__254;
    if(    self->len==0) {
        litem_387=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1493, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=((void*)0);
        litem_387->next=((void*)0);
        __dec_obj50=litem_387->item;
        litem_387->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_387;
        self->head=litem_387;
    }
    else if(    self->len==1) {
        litem_388=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1503, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->head;
        litem_388->next=((void*)0);
        __dec_obj51=litem_388->item;
        litem_388->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_388;
        self->head->next=litem_388;
    }
    else {
        litem_389=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value308=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1513, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->tail;
        litem_389->next=((void*)0);
        __dec_obj52=litem_389->item;
        litem_389->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_389;
        self->tail=litem_389;
    }
    self->len++;
    __result_obj__254 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__254;
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

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __right_value309 = (void*)0;
struct buffer* __dec_obj53;
struct sBufferNode* __result_obj__256;
    ((struct sNodeBase*)(__right_value309=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value309,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj53=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj53,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result_obj__256 = come_increment_ref_count(self);
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__256,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__256;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value310 = (void*)0;
char* __result_obj__257;
    __result_obj__257 = come_increment_ref_count(((char*)(__right_value310=__builtin_string("sBufferNode"))));
    (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__257 = come_decrement_ref_count2(__result_obj__257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__257;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_390;
unsigned long  int size_391;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct buffer* buf_393;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* type2_394;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* any_type_395;
void* __right_value321 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
char* finalizer_name_396=0;
char* cloner_name_397=0;
char* get_hash_key_name_398=0;
char* equaler_name_399=0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sType* type2_400;
void* __right_value326 = (void*)0;
char* __dec_obj54;
void* __right_value327 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__258;
    value_390=(struct buffer*)come_increment_ref_count(self->value);
    size_391=self->size;
    come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_393=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    type2_394=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    type2_394->mPointerNum++;
    any_type_395=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    any_type_395->mPointerNum=1;
    any_type_395->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value321=create_vtable((struct sType*)come_increment_ref_count(any_type_395),info)));
    finalizer_name_396=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_397=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_398=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_399=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    come_call_finalizer3(__right_value321,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_393,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_396,cloner_name_397,get_hash_key_name_398,equaler_name_399,((char*)(__right_value322=buffer_to_string(value_390))),size_391);
    (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_394,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_400=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info));
    type2_400->mHeap=(_Bool)1;
    __dec_obj54=come_value_392->c_value;
    come_value_392->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_393));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=come_value_392->type;
    come_value_392->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_400));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_392->var=((void*)0);
    append_object_to_right_values2(come_value_392,(struct sType*)come_increment_ref_count(type2_400),info,(_Bool)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
    add_come_last_code(info,"%s",come_value_392->c_value);
    __result_obj__258 = (_Bool)1;
    come_call_finalizer3(value_390,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_395,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_396 = come_decrement_ref_count2(finalizer_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_397 = come_decrement_ref_count2(cloner_name_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_398 = come_decrement_ref_count2(get_hash_key_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_399 = come_decrement_ref_count2(equaler_name_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_400,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__258;
}

static void sBufferNode_finalize(struct sBufferNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
char* __dec_obj56;
void* __right_value330 = (void*)0;
struct list$1sNode$ph* __dec_obj57;
struct sSStringNode* __result_obj__259;
    ((struct sNodeBase*)(__right_value328=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value328,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj56=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=self->exps;
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, exps));
    come_call_finalizer3(__dec_obj57,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__259 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__259,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__259;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value331 = (void*)0;
char* __result_obj__260;
    __result_obj__260 = come_increment_ref_count(((char*)(__right_value331=__builtin_string("sSStringNode"))));
    (__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__260 = come_decrement_ref_count2(__result_obj__260, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__260;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct buffer* buf_402;
struct list$1sNode$ph* o2_saved_403;
struct sNode* it_406;
void* __right_value336 = (void*)0;
struct sNode* obj_409;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_410;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sNode* node_418;
_Bool Value_419;
_Bool __result_obj__272;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sType* type2_421;
void* __right_value354 = (void*)0;
char* __dec_obj65;
void* __right_value355 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__273;
    come_value_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 103, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_402=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 105, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_402,"xsprintf(\"");
    buffer_append_str(buf_402,self->value);
    buffer_append_str(buf_402,"\"");
    if(    list$1sNode$ph$p_length(self->exps)>0) {
        for(        o2_saved_403=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_406=list$1sNode$ph$p_begin((o2_saved_403));        !list$1sNode$ph$p_end((o2_saved_403));        it_406=list$1sNode$ph$p_next((o2_saved_403))        ){
            obj_409=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_406));
            params_410=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 115, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_410,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 116, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_406)))));
            node_418=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_409),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_410),((void*)0),0,((void*)0),info));
            Value_419=node_compile(node_418,info);
            if(            !Value_419) {
                __result_obj__272 = (_Bool)0;
                ((obj_409) ? obj_409 = come_decrement_ref_count2(obj_409, ((struct sNode*)obj_409)->finalize, ((struct sNode*)obj_409)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_410,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((node_418) ? node_418 = come_decrement_ref_count2(node_418, ((struct sNode*)node_418)->finalize, ((struct sNode*)node_418)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(o2_saved_403,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_402,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__272;
            }
            else {
            }
            come_value_420=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_402,",");
            buffer_append_str(buf_402,come_value_420->c_value);
            ((obj_409) ? obj_409 = come_decrement_ref_count2(obj_409, ((struct sNode*)obj_409)->finalize, ((struct sNode*)obj_409)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(params_410,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((node_418) ? node_418 = come_decrement_ref_count2(node_418, ((struct sNode*)node_418)->finalize, ((struct sNode*)node_418)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_403,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_402,")");
    type2_421=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 134, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    type2_421->mHeap=(_Bool)1;
    __dec_obj65=come_value_401->c_value;
    come_value_401->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_402));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj66=come_value_401->type;
    come_value_401->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_421));
    come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_401->var=((void*)0);
    append_object_to_right_values2(come_value_401,(struct sType*)come_increment_ref_count(type2_421),info,(_Bool)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_401));
    add_come_last_code(info,"%s",come_value_401->c_value);
    __result_obj__273 = (_Bool)1;
    come_call_finalizer3(come_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_402,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__273;
}

static void sSStringNode_finalize(struct sSStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_404;
struct sNode* __result_obj__261;
struct sNode* __result_obj__262;
struct sNode* result_405;
struct sNode* __result_obj__263;
result_404 = (void*)0;
result_405 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_404,0,sizeof(struct sNode*));
        __result_obj__261 = result_404;
        return __result_obj__261;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__262 = self->it->item;
        return __result_obj__262;
    }
    memset(&result_405,0,sizeof(struct sNode*));
    __result_obj__263 = result_405;
    return __result_obj__263;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_407;
struct sNode* __result_obj__264;
struct sNode* __result_obj__265;
struct sNode* result_408;
struct sNode* __result_obj__266;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_407,0,sizeof(struct sNode*));
        __result_obj__264 = result_407;
        return __result_obj__264;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__265 = self->it->item;
        return __result_obj__265;
    }
    memset(&result_408,0,sizeof(struct sNode*));
    __result_obj__266 = result_408;
    return __result_obj__266;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__267;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__267 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__267,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__267;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_411;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_412;
    it_411=self->head;
    while(it_411!=((void*)0)) {
        prev_it_412=it_411;
        it_411=it_411->next;
        come_call_finalizer3(prev_it_412,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value339 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_413;
struct tuple2$2char$phsNode$ph* __dec_obj58;
void* __right_value340 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_414;
struct tuple2$2char$phsNode$ph* __dec_obj59;
void* __right_value341 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_415;
struct tuple2$2char$phsNode$ph* __dec_obj60;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__268;
    if(    self->len==0) {
        litem_413=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value339=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1423, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=((void*)0);
        litem_413->next=((void*)0);
        __dec_obj58=litem_413->item;
        litem_413->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_413;
        self->head=litem_413;
    }
    else if(    self->len==1) {
        litem_414=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value340=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1433, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=self->head;
        litem_414->next=((void*)0);
        __dec_obj59=litem_414->item;
        litem_414->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_414;
        self->head->next=litem_414;
    }
    else {
        litem_415=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value341=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1443, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=self->tail;
        litem_415->next=((void*)0);
        __dec_obj60=litem_415->item;
        litem_415->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_415;
        self->tail=litem_415;
    }
    self->len++;
    __result_obj__268 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__268;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__269;
void* __right_value344 = (void*)0;
struct tuple2$2char$phsNode$ph* result_416;
void* __right_value345 = (void*)0;
char* __dec_obj61;
void* __right_value346 = (void*)0;
struct sNode* __dec_obj62;
struct tuple2$2char$phsNode$ph* __result_obj__270;
    if(    self==(void*)0) {
        __result_obj__269 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__269,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__269;
    }
    result_416=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj61=result_416->v1;
        result_416->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj62=result_416->v2;
        result_416->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__270 = come_increment_ref_count(result_416);
    come_call_finalizer3(result_416,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__270,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__270;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_417;
    result_417=0;
    result_417+=int_get_hash_key(((int)self->v1));
    result_417+=int_get_hash_key(((int)self->v2));
    return result_417;
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
char* __dec_obj63;
struct sNode* __dec_obj64;
struct tuple2$2char$phsNode$ph* __result_obj__271;
    __dec_obj63=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj64=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__271 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__271,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value356 = (void*)0;
struct sCharNode* __result_obj__274;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->value=value;
    __result_obj__274 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__274,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__274;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value357 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = come_increment_ref_count(((char*)(__right_value357=__builtin_string("sCharNode"))));
    (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count2(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value360 = (void*)0;
char* __dec_obj67;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__276;
    come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 167, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj67=come_value_422->c_value;
    come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj68=come_value_422->type;
    come_value_422->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 170, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_422->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
    add_come_last_code(info,"%s",come_value_422->c_value);
    __result_obj__276 = (_Bool)1;
    come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__276;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __right_value364 = (void*)0;
struct sWCharNode* __result_obj__277;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value364,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__277 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__277,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__277;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value365 = (void*)0;
char* __result_obj__278;
    __result_obj__278 = come_increment_ref_count(((char*)(__right_value365=__builtin_string("sWCharNode"))));
    (__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__278 = come_decrement_ref_count2(__result_obj__278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__278;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value368 = (void*)0;
char* __dec_obj69;
void* __right_value369 = (void*)0;
char* __dec_obj70;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__279;
    come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 198, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj69=come_value_423->c_value;
        come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj70=come_value_423->c_value;
        come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj71=come_value_423->type;
    come_value_423->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 206, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_423->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
    add_come_last_code(info,"%s",come_value_423->c_value);
    __result_obj__279 = (_Bool)1;
    come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__279;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __right_value373 = (void*)0;
unsigned int* __dec_obj72;
struct sWStringNode* __result_obj__280;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj72=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__280 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__280,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__280;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value374 = (void*)0;
char* __result_obj__281;
    __result_obj__281 = come_increment_ref_count(((char*)(__right_value374=__builtin_string("sWStringNode"))));
    (__right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__281 = come_decrement_ref_count2(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value377 = (void*)0;
char* __dec_obj73;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* __dec_obj74;
_Bool __result_obj__282;
    come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 233, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj73=come_value_424->c_value;
    come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj74=come_value_424->type;
    come_value_424->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 236, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_424->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
    add_come_last_code(info,"%s",come_value_424->c_value);
    __result_obj__282 = (_Bool)1;
    come_call_finalizer3(come_value_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__282;
}

static void sWStringNode_finalize(struct sWStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* __dec_obj75;
struct sRegexNode* __result_obj__283;
    ((struct sNodeBase*)(__right_value381=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value381,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj75=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__283 = come_increment_ref_count(self);
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    (str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__283,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__283;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value383 = (void*)0;
char* __result_obj__284;
    __result_obj__284 = come_increment_ref_count(((char*)(__right_value383=__builtin_string("sRegexNode"))));
    (__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__284 = come_decrement_ref_count2(__result_obj__284, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__284;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value389 = (void*)0;
struct sNode* obj_node_425;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_427;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* node_428;
_Bool Value_429;
_Bool __result_obj__287;
_Bool __result_obj__288;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value385=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 265, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_425=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value385,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_427=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 267, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 269, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_425))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 270, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 271, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 272, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_427,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 277, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_428=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_425),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_427),((void*)0),info->sline,((void*)0),info));
    Value_429=node_compile(node_428,info);
    if(    !Value_429) {
        __result_obj__287 = (_Bool)0;
        ((obj_node_425) ? obj_node_425 = come_decrement_ref_count2(obj_node_425, ((struct sNode*)obj_node_425)->finalize, ((struct sNode*)obj_node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_427,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_428) ? node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__287;
    }
    else {
    }
    __result_obj__288 = (_Bool)1;
    ((obj_node_425) ? obj_node_425 = come_decrement_ref_count2(obj_node_425, ((struct sNode*)obj_node_425)->finalize, ((struct sNode*)obj_node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params_427,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_428) ? node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__288;
}

static void sRegexNode_finalize(struct sRegexNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        (self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
struct sStrNode* __result_obj__285;
void* __right_value386 = (void*)0;
struct sStrNode* result_426;
void* __right_value387 = (void*)0;
char* __dec_obj76;
void* __right_value388 = (void*)0;
char* __dec_obj77;
struct sStrNode* __result_obj__286;
    if(    self==(void*)0) {
        __result_obj__285 = (void*)0;
        return __result_obj__285;
    }
    result_426=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_426->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj76=result_426->sname;
        result_426->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_426->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj77=result_426->value;
        result_426->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__286 = result_426;
    come_call_finalizer3(result_426,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__286;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value428 = (void*)0;
struct list$1sNode$ph* __dec_obj78;
struct sListNode* __result_obj__289;
    ((struct sNodeBase*)(__right_value428=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value428,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj78=self->list_elements;
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj78,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__289 = come_increment_ref_count(self);
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__289,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__289;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value429 = (void*)0;
char* __result_obj__290;
    __result_obj__290 = come_increment_ref_count(((char*)(__right_value429=__builtin_string("sListNode"))));
    (__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__290 = come_decrement_ref_count2(__result_obj__290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__290;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_430;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1CVALUE$ph* params_431;
struct sType* list_element_type_434;
int n_435;
struct list$1sNode$ph* o2_saved_436;
struct sNode* it_437;
void* __right_value432 = (void*)0;
_Bool _if_conditional1;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sNode* value_node_438;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_439;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sNode* exp_440;
void* __right_value446 = (void*)0;
struct sNode* __dec_obj79;
_Bool Value_441;
_Bool __result_obj__292;
_Bool Value_442;
_Bool __result_obj__293;
void* __right_value447 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_444=0;
char* Err_445=0;
_Bool _if_conditional2;
_Bool __result_obj__294;
void* __right_value450 = (void*)0;
struct sType* __dec_obj80;
void* __right_value451 = (void*)0;
struct sType* type_values_446;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* var_name_451;
void* __right_value457 = (void*)0;
struct sVar* var__452;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct buffer* source_453;
int i_454;
struct list$1CVALUE$ph* o2_saved_455;
struct CVALUE* it_458;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* list_type_464;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* obj_type_468;
char* fun_name_469;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_470=0;
struct sGenericsFun* generics_fun_471=0;
char* generics_fun_name_472;
void* __right_value473 = (void*)0;
struct sFun* fun_473;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* __dec_obj87;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_2_476=0;
char* Err_477=0;
_Bool _if_conditional3;
_Bool __result_obj__309;
void* __right_value478 = (void*)0;
struct sType* result_type_478;
struct sType* type_479;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct CVALUE* obj_value_480;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct buffer* num_string_481;
void* __right_value483 = (void*)0;
struct sType* type2_482;
void* __right_value484 = (void*)0;
char* type_name_483;
struct sType* any_type_484;
void* __right_value485 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var5 = (void*)0;
char* finalizer_name_485=0;
char* cloner_name_486=0;
char* get_hash_key_name_487=0;
char* equaler_name_488=0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
char* __dec_obj88;
void* __right_value488 = (void*)0;
struct sType* type3_489;
void* __right_value489 = (void*)0;
struct sType* __dec_obj89;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1CVALUE$ph* come_params_490;
void* __right_value492 = (void*)0;
_Bool _if_conditional4;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct CVALUE* come_value2_494;
void* __right_value496 = (void*)0;
char* __dec_obj90;
struct sType* __dec_obj91;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct CVALUE* come_value3_495;
void* __right_value499 = (void*)0;
char* __dec_obj92;
struct sType* __dec_obj93;
int j_496;
struct list$1CVALUE$ph* o2_saved_497;
struct CVALUE* it_498;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct CVALUE* come_value4_499;
void* __right_value502 = (void*)0;
char* __dec_obj94;
void* __right_value503 = (void*)0;
struct sType* __dec_obj95;
_Bool __result_obj__312;
    list_elements_430=self->list_elements;
    params_431=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 309, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list_element_type_434=((void*)0);
    n_435=0;
    for(    o2_saved_436=(list_elements_430),it_437=list$1sNode$ph$p_begin((o2_saved_436));    !list$1sNode$ph$p_end((o2_saved_436));    it_437=list$1sNode$ph$p_next((o2_saved_436))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value432=it_437->kind(it_437->_protocol_obj))),"sWildCard"))),        (__right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            value_node_438=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value433=xsprintf("Value"))),info));
            (__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_439=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 317, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_439,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 318, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_438))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_439,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 319, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_435,info)))));
            exp_440=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value444=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_438),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_439),((void*)0),0,((void*)0),info));
            (__right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj79=exp_440;
            exp_440=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_440,info));
            if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
            Value_441=node_compile(exp_440,info);
            if(            !Value_441) {
                __result_obj__292 = (_Bool)0;
                ((value_node_438) ? value_node_438 = come_decrement_ref_count2(value_node_438, ((struct sNode*)value_node_438)->finalize, ((struct sNode*)value_node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_439,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((exp_440) ? exp_440 = come_decrement_ref_count2(exp_440, ((struct sNode*)exp_440)->finalize, ((struct sNode*)exp_440)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_431,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__292;
            }
            else {
            }
            ((value_node_438) ? value_node_438 = come_decrement_ref_count2(value_node_438, ((struct sNode*)value_node_438)->finalize, ((struct sNode*)value_node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(params_439,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((exp_440) ? exp_440 = come_decrement_ref_count2(exp_440, ((struct sNode*)exp_440)->finalize, ((struct sNode*)exp_440)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_442=node_compile(it_437,info);
            if(            !Value_442) {
                __result_obj__293 = (_Bool)0;
                come_call_finalizer3(params_431,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__293;
            }
            else {
            }
        }
        come_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_434) {
            multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value449=check_assign_type(((char*)(__right_value448=xsprintf("invalid list element type"))),list_element_type_434,come_value_443->type,come_value_443,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_1_444=multiple_assign_var2->v1;
            Err_445=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional2=(Err_445)),            (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value449,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                __result_obj__294 = (_Bool)1;
                (Err_445 = come_decrement_ref_count2(Err_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_431,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__294;
            }
            else {
            }
            (Err_445 = come_decrement_ref_count2(Err_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(params_431,(struct CVALUE*)come_increment_ref_count(come_value_443));
        __dec_obj80=list_element_type_434;
        list_element_type_434=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_443->type));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_435++;
        come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_446=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_434));
    list$1sNode$ph$p_push_back(type_values_446->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(params_431),info)));
    type_values_446->mHeap=(_Bool)0;
    static int list_value_num_450=0;
    var_name_451=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_450));
    add_variable_to_table(var_name_451,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_446)),info,(_Bool)0);
    var__452=get_variable_from_table(info->lv_table,var_name_451);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value458=make_define_var(type_values_446,var__452->mCValueName,(_Bool)0,info))));
    (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_453=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 362, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_453,"(");
    i_454=0;
    for(    o2_saved_455=(struct list$1CVALUE$ph*)come_increment_ref_count((params_431)),it_458=list$1CVALUE$ph$p_begin((o2_saved_455));    !list$1CVALUE$ph$p_end((o2_saved_455));    it_458=list$1CVALUE$ph$p_next((o2_saved_455))    ){
        if(        list_element_type_434->mHeap) {
            buffer_append_format(source_453,"%s[%d]=%s,\n",var__452->mCValueName,i_454,((struct CVALUE*)(__right_value461=list$1CVALUE$ph$p_operator_load_element(params_431,i_454)))->c_value);
            come_call_finalizer3(__right_value461,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_453,"%s[%d]=%s,\n",var__452->mCValueName,i_454,((struct CVALUE*)(__right_value462=list$1CVALUE$ph$p_operator_load_element(params_431,i_454)))->c_value);
            come_call_finalizer3(__right_value462,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_454++;
    }
    come_call_finalizer3(o2_saved_455,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list_type_464=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info));
    list$1sType$ph$p_push_back(list_type_464->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value469=come_call_cloner(sType_clone, list_element_type_434))))));
    come_call_finalizer3(__right_value469,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_468=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_464));
    fun_name_469="initialize_with_values";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value472=make_generics_function(obj_type_468,(char*)come_increment_ref_count(__builtin_string(fun_name_469)),info,(_Bool)1)));
    name_470=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_471=multiple_assign_var3->v2;
    come_call_finalizer3(__right_value472,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_472=(char*)come_increment_ref_count(name_470);
    fun_473=((struct sFun*)(__right_value473=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_472,((void*)0))));
    come_call_finalizer3(__right_value473,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_473==((void*)0)) {
        __dec_obj87=generics_fun_name_472;
        generics_fun_name_472=(char*)come_increment_ref_count(create_method_name(obj_type_468,(_Bool)0,((char*)(__right_value474=__builtin_string(fun_name_469))),info,(_Bool)1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_473=((struct sFun*)(__right_value476=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_472,((void*)0))));
        come_call_finalizer3(__right_value476,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_473==((void*)0)) {
            multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value477=err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_472,info->come_fun->mName)));
            come_exception_var_2_476=multiple_assign_var4->v1;
            Err_477=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            (_if_conditional3=(Err_477)),            come_call_finalizer3(__right_value477,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result_obj__309 = (_Bool)1;
                (Err_477 = come_decrement_ref_count2(Err_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_431,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_values_446,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_451 = come_decrement_ref_count2(var_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_453,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_472 = come_decrement_ref_count2(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__309;
            }
            else {
            }
            (Err_477 = come_decrement_ref_count2(Err_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_478=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_473->mResultType));
    result_type_478->mStatic=(_Bool)0;
    type_479=list_type_464;
    obj_value_480=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 410, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_481=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 412, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_481,"1");
    type2_482=(struct sType*)come_increment_ref_count(solve_generics(type_479,type_479,info));
    type_name_483=(char*)come_increment_ref_count(make_type_name_string(type2_482,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_484=(struct sType*)come_increment_ref_count(type2_482);
    any_type_484->mPointerNum=1;
    any_type_484->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value485=create_vtable((struct sType*)come_increment_ref_count(any_type_484),info)));
    finalizer_name_485=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_486=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_487=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_488=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    come_call_finalizer3(__right_value485,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj88=obj_value_480->c_value;
    obj_value_480->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_483,type_name_483,((char*)(__right_value486=buffer_to_string(num_string_481))),info->sname,info->sline,type_name_483,finalizer_name_485,cloner_name_486,get_hash_key_name_487,equaler_name_488));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_489=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_482));
    type3_489->mPointerNum++;
    type3_489->mHeap=(_Bool)1;
    type2_482->mHeap=(_Bool)1;
    __dec_obj89=obj_value_480->type;
    obj_value_480->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_482));
    come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_480->type->mPointerNum++;
    obj_value_480->var=((void*)0);
    append_object_to_right_values2(obj_value_480,(struct sType*)come_increment_ref_count(type3_489),info,(_Bool)0);
    come_params_490=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 438, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional4=(((struct sType*)(__right_value492=list$1sType$ph$p_operator_load_element(fun_473->mParamTypes,0)))->mHeap&&obj_value_480->type->mHeap)),    come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)(__right_value493=list$1sType$ph$p_operator_load_element(fun_473->mParamTypes,0))),obj_value_480->type,obj_value_480,info,(_Bool)1);
        come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_490,(struct CVALUE*)come_increment_ref_count(obj_value_480));
    come_value2_494=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 445, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj90=come_value2_494->c_value;
    come_value2_494->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph$p_length(params_431)));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=come_value2_494->type;
    come_value2_494->type=((void*)0);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_494->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_490,(struct CVALUE*)come_increment_ref_count(come_value2_494));
    come_value3_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 453, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj92=come_value3_495->c_value;
    come_value3_495->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__452->mCValueName));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value3_495->type;
    come_value3_495->type=((void*)0);
    come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_495->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_490,(struct CVALUE*)come_increment_ref_count(come_value3_495));
    buffer_append_str(source_453,generics_fun_name_472);
    buffer_append_str(source_453,"(");
    j_496=0;
    for(    o2_saved_497=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_490)),it_498=list$1CVALUE$ph$p_begin((o2_saved_497));    !list$1CVALUE$ph$p_end((o2_saved_497));    it_498=list$1CVALUE$ph$p_next((o2_saved_497))    ){
        buffer_append_str(source_453,it_498->c_value);
        if(        j_496!=list$1CVALUE$ph$p_length(come_params_490)-1) {
            buffer_append_str(source_453,",");
        }
        j_496++;
    }
    come_call_finalizer3(o2_saved_497,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_453,")");
    buffer_append_str(source_453,")");
    come_value4_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 479, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj94=come_value4_499->c_value;
    come_value4_499->c_value=(char*)come_increment_ref_count(buffer_to_string(source_453));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=come_value4_499->type;
    come_value4_499->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_478));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_499->type->mStatic=(_Bool)0;
    come_value4_499->var=((void*)0);
    if(    result_type_478->mHeap) {
        append_object_to_right_values2(come_value4_499,(struct sType*)come_increment_ref_count(result_type_478),info,(_Bool)0);
    }
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_499));
    add_come_last_code(info,"%s",come_value4_499->c_value);
    __result_obj__312 = (_Bool)1;
    come_call_finalizer3(params_431,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_446,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_451 = come_decrement_ref_count2(var_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_453,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_472 = come_decrement_ref_count2(generics_fun_name_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_481,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_483 = come_decrement_ref_count2(type_name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_485 = come_decrement_ref_count2(finalizer_name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_486 = come_decrement_ref_count2(cloner_name_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_487 = come_decrement_ref_count2(get_hash_key_name_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_488 = come_decrement_ref_count2(equaler_name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_489,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_490,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__312;
}

static void sListNode_finalize(struct sListNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        come_call_finalizer3(self->list_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__291;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__291 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__291,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__291;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_432;
struct list_item$1CVALUE$ph* prev_it_433;
    it_432=self->head;
    while(it_432!=((void*)0)) {
        prev_it_433=it_432;
        it_432=it_432->next;
        come_call_finalizer3(prev_it_433,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value452 = (void*)0;
struct list_item$1sNode$ph* litem_447;
struct sNode* __dec_obj81;
void* __right_value453 = (void*)0;
struct list_item$1sNode$ph* litem_448;
struct sNode* __dec_obj82;
void* __right_value454 = (void*)0;
struct list_item$1sNode$ph* litem_449;
struct sNode* __dec_obj83;
struct list$1sNode$ph* __result_obj__295;
    if(    self->len==0) {
        litem_447=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value452=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1493, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=((void*)0);
        litem_447->next=((void*)0);
        __dec_obj81=litem_447->item;
        litem_447->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_447;
        self->head=litem_447;
    }
    else if(    self->len==1) {
        litem_448=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value453=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1503, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=self->head;
        litem_448->next=((void*)0);
        __dec_obj82=litem_448->item;
        litem_448->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_448;
        self->head->next=litem_448;
    }
    else {
        litem_449=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value454=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1513, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_449->prev=self->tail;
        litem_449->next=((void*)0);
        __dec_obj83=litem_449->item;
        litem_449->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_449;
        self->tail=litem_449;
    }
    self->len++;
    __result_obj__295 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__295;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_456;
struct CVALUE* __result_obj__296;
struct CVALUE* __result_obj__297;
struct CVALUE* result_457;
struct CVALUE* __result_obj__298;
result_456 = (void*)0;
result_457 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_456,0,sizeof(struct CVALUE*));
        __result_obj__296 = result_456;
        return __result_obj__296;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__297 = self->it->item;
        return __result_obj__297;
    }
    memset(&result_457,0,sizeof(struct CVALUE*));
    __result_obj__298 = result_457;
    return __result_obj__298;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_459;
struct CVALUE* __result_obj__299;
struct CVALUE* __result_obj__300;
struct CVALUE* result_460;
struct CVALUE* __result_obj__301;
result_459 = (void*)0;
result_460 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_459,0,sizeof(struct CVALUE*));
        __result_obj__299 = result_459;
        return __result_obj__299;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        return __result_obj__300;
    }
    memset(&result_460,0,sizeof(struct CVALUE*));
    __result_obj__301 = result_460;
    return __result_obj__301;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_461;
int i_462;
struct CVALUE* __result_obj__302;
struct CVALUE* default_value_463;
struct CVALUE* __result_obj__303;
default_value_463 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_461=self->head;
    i_462=0;
    while(it_461!=((void*)0)) {
        if(        position==i_462) {
            __result_obj__302 = come_increment_ref_count(it_461->item);
            come_call_finalizer3(__result_obj__302,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__302;
        }
        it_461=it_461->next;
        i_462++;
    }
    memset(&default_value_463,0,sizeof(struct CVALUE*));
    __result_obj__303 = come_increment_ref_count(default_value_463);
    come_call_finalizer3(default_value_463,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__303,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value466 = (void*)0;
struct list_item$1sType$ph* litem_465;
struct sType* __dec_obj84;
void* __right_value467 = (void*)0;
struct list_item$1sType$ph* litem_466;
struct sType* __dec_obj85;
void* __right_value468 = (void*)0;
struct list_item$1sType$ph* litem_467;
struct sType* __dec_obj86;
struct list$1sType$ph* __result_obj__304;
    if(    self->len==0) {
        litem_465=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value466=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1493, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_465->prev=((void*)0);
        litem_465->next=((void*)0);
        __dec_obj84=litem_465->item;
        litem_465->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_465;
        self->head=litem_465;
    }
    else if(    self->len==1) {
        litem_466=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value467=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1503, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_466->prev=self->head;
        litem_466->next=((void*)0);
        __dec_obj85=litem_466->item;
        litem_466->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_466;
        self->head->next=litem_466;
    }
    else {
        litem_467=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value468=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1513, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_467->prev=self->tail;
        litem_467->next=((void*)0);
        __dec_obj86=litem_467->item;
        litem_467->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_467;
        self->tail=litem_467;
    }
    self->len++;
    __result_obj__304 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__304;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_474;
unsigned int it_475;
struct sFun* __result_obj__305;
struct sFun* __result_obj__306;
struct sFun* __result_obj__307;
struct sFun* __result_obj__308;
    hash_474=string_get_hash_key(((char*)key))%self->size;
    it_475=hash_474;
    while((_Bool)1) {
        if(        self->item_existance[it_475]) {
            if(            string_equals(self->keys[it_475],key)) {
                __result_obj__305 = come_increment_ref_count(self->items[it_475]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__305,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__305;
            }
            it_475++;
            if(            it_475>=self->size) {
                it_475=0;
            }
            else if(            it_475==hash_474) {
                __result_obj__306 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__306,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__306;
            }
        }
        else {
            __result_obj__307 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__307,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__307;
        }
    }
    __result_obj__308 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__308,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
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

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_491;
int i_492;
struct sType* __result_obj__310;
struct sType* default_value_493;
struct sType* __result_obj__311;
default_value_493 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_491=self->head;
    i_492=0;
    while(it_491!=((void*)0)) {
        if(        position==i_492) {
            __result_obj__310 = come_increment_ref_count(it_491->item);
            come_call_finalizer3(__result_obj__310,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__310;
        }
        it_491=it_491->next;
        i_492++;
    }
    memset(&default_value_493,0,sizeof(struct sType*));
    __result_obj__311 = come_increment_ref_count(default_value_493);
    come_call_finalizer3(default_value_493,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value504 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj96;
struct sTupleNode* __result_obj__313;
    ((struct sNodeBase*)(__right_value504=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value504,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj96=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj96,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__313 = come_increment_ref_count(self);
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value505 = (void*)0;
char* __result_obj__314;
    __result_obj__314 = come_increment_ref_count(((char*)(__right_value505=__builtin_string("sTupleNode"))));
    (__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__314 = come_decrement_ref_count2(__result_obj__314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__314;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_502;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1sType$ph* tuple_types_503;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1CVALUE$ph* tuple_values_504;
int n_505;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_506;
struct tuple2$2char$phsNode$ph* it_509;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* name_512=0;
struct sNode* node_513=0;
void* __right_value510 = (void*)0;
_Bool _if_conditional5;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* value_node_514;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sNode* exp_515;
_Bool Value_516;
_Bool __result_obj__321;
_Bool Value_517;
_Bool __result_obj__322;
void* __right_value515 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* type_520;
char* __dec_obj101;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* type_521;
struct list$1sType$ph* o2_saved_522;
struct sType* it_525;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct CVALUE* obj_value_528;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct buffer* num_string_529;
void* __right_value531 = (void*)0;
struct sType* type2_530;
void* __right_value532 = (void*)0;
char* type_name_531;
struct sType* any_type_532;
void* __right_value533 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var7 = (void*)0;
char* finalizer_name_533=0;
char* cloner_name_534=0;
char* get_hash_key_name_535=0;
char* equaler_name_536=0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
char* __dec_obj102;
void* __right_value536 = (void*)0;
struct sType* type3_537;
void* __right_value537 = (void*)0;
struct sType* __dec_obj103;
void* __right_value538 = (void*)0;
struct sType* obj_type_538;
char* fun_name_539;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_540=0;
struct sGenericsFun* generics_fun_541=0;
char* generics_fun_name_542;
void* __right_value541 = (void*)0;
struct sFun* fun_543;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* __dec_obj104;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_3_544=0;
char* Err_545=0;
_Bool _if_conditional6;
_Bool __result_obj__331;
void* __right_value546 = (void*)0;
struct sType* result_type_546;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1CVALUE$ph* come_params_547;
void* __right_value549 = (void*)0;
_Bool _if_conditional7;
void* __right_value550 = (void*)0;
int i_548;
struct list$1CVALUE$ph* o2_saved_549;
struct CVALUE* it_550;
void* __right_value551 = (void*)0;
struct CVALUE* come_value_551;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
_Bool _if_conditional8;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct buffer* buf_552;
int j_553;
struct list$1CVALUE$ph* o2_saved_554;
struct CVALUE* it_555;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct CVALUE* come_value2_556;
void* __right_value559 = (void*)0;
char* __dec_obj105;
void* __right_value560 = (void*)0;
struct sType* __dec_obj106;
_Bool __result_obj__332;
    tuple_elements_502=self->tuple_elements;
    tuple_types_503=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 516, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    tuple_values_504=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 517, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_505=0;
    for(    o2_saved_506=(tuple_elements_502),it_509=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_506));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_506));    it_509=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_506))    ){
        multiple_assign_var6=it_509;
        name_512=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_513=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value510=node_513->kind(node_513->_protocol_obj))),"sWildCard"))),        (__right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            value_node_514=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value511=xsprintf("Value"))),info));
            (__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_515=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_514),(char*)come_increment_ref_count(xsprintf("v%d",n_505+1)),info));
            Value_516=node_compile(exp_515,info);
            if(            !Value_516) {
                __result_obj__321 = (_Bool)0;
                ((value_node_514) ? value_node_514 = come_decrement_ref_count2(value_node_514, ((struct sNode*)value_node_514)->finalize, ((struct sNode*)value_node_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_515) ? exp_515 = come_decrement_ref_count2(exp_515, ((struct sNode*)exp_515)->finalize, ((struct sNode*)exp_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_513) ? node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(tuple_types_503,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_504,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__321;
            }
            else {
            }
            ((value_node_514) ? value_node_514 = come_decrement_ref_count2(value_node_514, ((struct sNode*)value_node_514)->finalize, ((struct sNode*)value_node_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_515) ? exp_515 = come_decrement_ref_count2(exp_515, ((struct sNode*)exp_515)->finalize, ((struct sNode*)exp_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_517=node_compile(node_513,info);
            if(            !Value_517) {
                __result_obj__322 = (_Bool)0;
                (name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_513) ? node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(tuple_types_503,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_504,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__322;
            }
            else {
            }
        }
        come_value_518=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_504,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_518)));
        type_520=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_518->type));
        __dec_obj101=type_520->mTupleName;
        type_520->mTupleName=(char*)come_increment_ref_count(name_512);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1sType$ph$p_push_back(tuple_types_503,(struct sType*)come_increment_ref_count(type_520));
        n_505++;
        (name_512 = come_decrement_ref_count2(name_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_513) ? node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_521=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 547, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph$p_length(tuple_types_503))),(_Bool)0,info));
    for(    o2_saved_522=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_503)),it_525=list$1sType$ph$p_begin((o2_saved_522));    !list$1sType$ph$p_end((o2_saved_522));    it_525=list$1sType$ph$p_next((o2_saved_522))    ){
        list$1sType$ph$p_push_back(type_521->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value526=come_call_cloner(sType_clone, it_525))))));
        come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_522,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 553, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 555, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_529,"1");
    type2_530=(struct sType*)come_increment_ref_count(solve_generics(type_521,type_521,info));
    type_name_531=(char*)come_increment_ref_count(make_type_name_string(type2_530,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_532=(struct sType*)come_increment_ref_count(type2_530);
    any_type_532->mPointerNum=1;
    any_type_532->mHeap=(_Bool)1;
    multiple_assign_var7=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value533=create_vtable((struct sType*)come_increment_ref_count(any_type_532),info)));
    finalizer_name_533=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_534=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_535=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_536=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    come_call_finalizer3(__right_value533,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj102=obj_value_528->c_value;
    obj_value_528->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_531,type_name_531,((char*)(__right_value534=buffer_to_string(num_string_529))),info->sname,info->sline,type_name_531,finalizer_name_533,cloner_name_534,get_hash_key_name_535,equaler_name_536));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_537=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_530));
    type3_537->mPointerNum++;
    type3_537->mHeap=(_Bool)1;
    type2_530->mHeap=(_Bool)1;
    __dec_obj103=obj_value_528->type;
    obj_value_528->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_530));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_528->type->mPointerNum++;
    obj_value_528->var=((void*)0);
    append_object_to_right_values2(obj_value_528,(struct sType*)come_increment_ref_count(type3_537),info,(_Bool)0);
    obj_type_538=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_530));
    fun_name_539="initialize";
    multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value540=make_generics_function(obj_type_538,(char*)come_increment_ref_count(__builtin_string(fun_name_539)),info,(_Bool)1)));
    name_540=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_541=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value540,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_542=(char*)come_increment_ref_count(name_540);
    fun_543=((struct sFun*)(__right_value541=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_542,((void*)0))));
    come_call_finalizer3(__right_value541,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_543==((void*)0)) {
        __dec_obj104=generics_fun_name_542;
        generics_fun_name_542=(char*)come_increment_ref_count(create_method_name(obj_type_538,(_Bool)0,((char*)(__right_value542=__builtin_string(fun_name_539))),info,(_Bool)1));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_543=((struct sFun*)(__right_value544=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_542,((void*)0))));
        come_call_finalizer3(__right_value544,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_543==((void*)0)) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value545=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_542,info->come_fun->mName)));
            come_exception_var_3_544=multiple_assign_var9->v1;
            Err_545=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional6=(Err_545)),            come_call_finalizer3(__right_value545,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__331 = (_Bool)1;
                (Err_545 = come_decrement_ref_count2(Err_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_503,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_504,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_530,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_531 = come_decrement_ref_count2(type_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(any_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                (finalizer_name_533 = come_decrement_ref_count2(finalizer_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_534 = come_decrement_ref_count2(cloner_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_535 = come_decrement_ref_count2(get_hash_key_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_536 = come_decrement_ref_count2(equaler_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_537,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_540 = come_decrement_ref_count2(name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_542 = come_decrement_ref_count2(generics_fun_name_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__331;
            }
            else {
            }
            (Err_545 = come_decrement_ref_count2(Err_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_546=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_543->mResultType));
    result_type_546->mStatic=(_Bool)0;
    come_params_547=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 604, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional7=(((struct sType*)(__right_value549=list$1sType$ph$p_operator_load_element(fun_543->mParamTypes,0)))->mHeap&&obj_value_528->type->mHeap)),    come_call_finalizer3(__right_value549,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional7) {
        std_move(((struct sType*)(__right_value550=list$1sType$ph$p_operator_load_element(fun_543->mParamTypes,0))),obj_value_528->type,obj_value_528,info,(_Bool)1);
        come_call_finalizer3(__right_value550,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_547,(struct CVALUE*)come_increment_ref_count(obj_value_528));
    i_548=1;
    for(    o2_saved_549=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_504)),it_550=list$1CVALUE$ph$p_begin((o2_saved_549));    !list$1CVALUE$ph$p_end((o2_saved_549));    it_550=list$1CVALUE$ph$p_next((o2_saved_549))    ){
        come_value_551=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_550));
        if(        (_if_conditional8=(((struct sType*)(__right_value552=list$1sType$ph$p_operator_load_element(fun_543->mParamTypes,i_548)))&&((struct sType*)(__right_value553=list$1sType$ph$p_operator_load_element(fun_543->mParamTypes,i_548)))->mHeap&&come_value_551->type->mHeap)),        come_call_finalizer3(__right_value552,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value553,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional8) {
            std_move(((struct sType*)(__right_value554=list$1sType$ph$p_operator_load_element(fun_543->mParamTypes,i_548))),come_value_551->type,come_value_551,info,(_Bool)1);
            come_call_finalizer3(__right_value554,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_547,(struct CVALUE*)come_increment_ref_count(come_value_551));
        i_548++;
        come_call_finalizer3(come_value_551,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_549,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 623, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_552,generics_fun_name_542);
    buffer_append_str(buf_552,"(");
    j_553=0;
    for(    o2_saved_554=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_547)),it_555=list$1CVALUE$ph$p_begin((o2_saved_554));    !list$1CVALUE$ph$p_end((o2_saved_554));    it_555=list$1CVALUE$ph$p_next((o2_saved_554))    ){
        buffer_append_str(buf_552,it_555->c_value);
        if(        j_553!=list$1CVALUE$ph$p_length(come_params_547)-1) {
            buffer_append_str(buf_552,",");
        }
        j_553++;
    }
    come_call_finalizer3(o2_saved_554,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_552,")");
    come_value2_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 640, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj105=come_value2_556->c_value;
    come_value2_556->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_552));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=come_value2_556->type;
    come_value2_556->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_546));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_556->type->mStatic=(_Bool)0;
    come_value2_556->var=((void*)0);
    if(    result_type_546->mHeap) {
        append_object_to_right_values2(come_value2_556,(struct sType*)come_increment_ref_count(result_type_546),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_556->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_556));
    __result_obj__332 = (_Bool)1;
    come_call_finalizer3(tuple_types_503,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_504,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_529,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_530,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_531 = come_decrement_ref_count2(type_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_533 = come_decrement_ref_count2(finalizer_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_534 = come_decrement_ref_count2(cloner_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_535 = come_decrement_ref_count2(get_hash_key_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_536 = come_decrement_ref_count2(equaler_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_540 = come_decrement_ref_count2(name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_542 = come_decrement_ref_count2(generics_fun_name_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_546,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_547,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_552,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__332;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_500;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_501;
    it_500=self->head;
    while(it_500!=((void*)0)) {
        prev_it_501=it_500;
        it_500=it_500->next;
        come_call_finalizer3(prev_it_501,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer3(self->tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_507;
struct tuple2$2char$phsNode$ph* __result_obj__315;
struct tuple2$2char$phsNode$ph* __result_obj__316;
struct tuple2$2char$phsNode$ph* result_508;
struct tuple2$2char$phsNode$ph* __result_obj__317;
result_507 = (void*)0;
result_508 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_507,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__315 = result_507;
        return __result_obj__315;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__316 = self->it->item;
        return __result_obj__316;
    }
    memset(&result_508,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__317 = result_508;
    return __result_obj__317;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_510;
struct tuple2$2char$phsNode$ph* __result_obj__318;
struct tuple2$2char$phsNode$ph* __result_obj__319;
struct tuple2$2char$phsNode$ph* result_511;
struct tuple2$2char$phsNode$ph* __result_obj__320;
result_510 = (void*)0;
result_511 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_510,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__318 = result_510;
        return __result_obj__318;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__319 = self->it->item;
        return __result_obj__319;
    }
    memset(&result_511,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__320 = result_511;
    return __result_obj__320;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__323;
void* __right_value516 = (void*)0;
struct CVALUE* result_519;
void* __right_value517 = (void*)0;
char* __dec_obj97;
void* __right_value518 = (void*)0;
struct sType* __dec_obj98;
void* __right_value519 = (void*)0;
char* __dec_obj99;
void* __right_value520 = (void*)0;
char* __dec_obj100;
struct CVALUE* __result_obj__324;
    if(    self==(void*)0) {
        __result_obj__323 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__323,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__323;
    }
    result_519=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj97=result_519->c_value;
        result_519->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj98=result_519->type;
        result_519->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_519->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_519->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj99=result_519->c_value_without_right_value_objects;
        result_519->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj100=result_519->c_value_without_cast_object_value;
        result_519->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__324 = come_increment_ref_count(result_519);
    come_call_finalizer3(result_519,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__324,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_523;
struct sType* __result_obj__325;
struct sType* __result_obj__326;
struct sType* result_524;
struct sType* __result_obj__327;
result_523 = (void*)0;
result_524 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_523,0,sizeof(struct sType*));
        __result_obj__325 = result_523;
        return __result_obj__325;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__326 = self->it->item;
        return __result_obj__326;
    }
    memset(&result_524,0,sizeof(struct sType*));
    __result_obj__327 = result_524;
    return __result_obj__327;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_526;
struct sType* __result_obj__328;
struct sType* __result_obj__329;
struct sType* result_527;
struct sType* __result_obj__330;
result_526 = (void*)0;
result_527 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_526,0,sizeof(struct sType*));
        __result_obj__328 = result_526;
        return __result_obj__328;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__329 = self->it->item;
        return __result_obj__329;
    }
    memset(&result_527,0,sizeof(struct sType*));
    __result_obj__330 = result_527;
    return __result_obj__330;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value561 = (void*)0;
struct list$1sNode$ph* __dec_obj107;
struct sSomeNode* __result_obj__333;
    ((struct sNodeBase*)(__right_value561=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value561,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj107=self->tuple_elements;
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj107,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__333 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __right_value562 = (void*)0;
char* __result_obj__334;
    __result_obj__334 = come_increment_ref_count(((char*)(__right_value562=__builtin_string("sSomeNode"))));
    (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__334 = come_decrement_ref_count2(__result_obj__334, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__334;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_557;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1sType$ph* tuple_types_558;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct list$1CVALUE$ph* tuple_values_559;
struct list$1sNode$ph* o2_saved_560;
struct sNode* it_561;
_Bool Value_562;
_Bool __result_obj__335;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_563;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sType* type_564;
struct list$1sType$ph* o2_saved_565;
struct sType* it_566;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct CVALUE* obj_value_567;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct buffer* num_string_568;
void* __right_value578 = (void*)0;
struct sType* type2_569;
void* __right_value579 = (void*)0;
char* type_name_570;
void* __right_value580 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var10 = (void*)0;
char* finalizer_name_571=0;
char* cloner_name_572=0;
char* get_hash_key_name_573=0;
char* equaler_name_574=0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
char* __dec_obj108;
void* __right_value583 = (void*)0;
struct sType* type3_575;
void* __right_value584 = (void*)0;
struct sType* __dec_obj109;
void* __right_value585 = (void*)0;
struct sType* obj_type_576;
char* fun_name_577;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var11 = (void*)0;
char* name_578=0;
struct sGenericsFun* generics_fun_579=0;
char* generics_fun_name_580;
void* __right_value588 = (void*)0;
struct sFun* fun_581;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
char* __dec_obj110;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_4_582=0;
char* Err_583=0;
_Bool _if_conditional9;
_Bool __result_obj__336;
void* __right_value593 = (void*)0;
struct sType* result_type_584;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1CVALUE$ph* come_params_585;
void* __right_value596 = (void*)0;
_Bool _if_conditional10;
void* __right_value597 = (void*)0;
int i_586;
struct list$1CVALUE$ph* o2_saved_587;
struct CVALUE* it_588;
void* __right_value598 = (void*)0;
struct CVALUE* come_value_589;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
_Bool _if_conditional11;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct buffer* buf_590;
int j_591;
struct list$1CVALUE$ph* o2_saved_592;
struct CVALUE* it_593;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct CVALUE* come_value2_594;
void* __right_value606 = (void*)0;
char* __dec_obj111;
void* __right_value607 = (void*)0;
struct sType* __dec_obj112;
_Bool __result_obj__337;
    tuple_elements_557=self->tuple_elements;
    tuple_types_558=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 677, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    tuple_values_559=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 678, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_560=(tuple_elements_557),it_561=list$1sNode$ph$p_begin((o2_saved_560));    !list$1sNode$ph$p_end((o2_saved_560));    it_561=list$1sNode$ph$p_next((o2_saved_560))    ){
        Value_562=node_compile(it_561,info);
        if(        !Value_562) {
            __result_obj__335 = (_Bool)0;
            come_call_finalizer3(tuple_types_558,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_559,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__335;
        }
        else {
        }
        come_value_563=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_559,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_563)));
        list$1sType$ph$p_push_back(tuple_types_558,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_563->type)));
        come_call_finalizer3(come_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_564=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 692, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph$p_length(tuple_types_558))),(_Bool)0,info));
    for(    o2_saved_565=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_558)),it_566=list$1sType$ph$p_begin((o2_saved_565));    !list$1sType$ph$p_end((o2_saved_565));    it_566=list$1sType$ph$p_next((o2_saved_565))    ){
        list$1sType$ph$p_push_back(type_564->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value573=come_call_cloner(sType_clone, it_566))))));
        come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_565,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_567=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 698, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 700, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_568,"1");
    type2_569=(struct sType*)come_increment_ref_count(solve_generics(type_564,type_564,info));
    type_name_570=(char*)come_increment_ref_count(make_type_name_string(type2_569,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var10=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value580=create_vtable((struct sType*)come_increment_ref_count(type2_569),info)));
    finalizer_name_571=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    cloner_name_572=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    get_hash_key_name_573=(char*)come_increment_ref_count(multiple_assign_var10->v3);
    equaler_name_574=(char*)come_increment_ref_count(multiple_assign_var10->v4);
    come_call_finalizer3(__right_value580,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj108=obj_value_567->c_value;
    obj_value_567->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_570,type_name_570,((char*)(__right_value581=buffer_to_string(num_string_568))),info->sname,info->sline,type_name_570));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_575=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_569));
    type3_575->mPointerNum++;
    type3_575->mHeap=(_Bool)1;
    type2_569->mHeap=(_Bool)1;
    __dec_obj109=obj_value_567->type;
    obj_value_567->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_569));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_567->type->mPointerNum++;
    obj_value_567->var=((void*)0);
    append_object_to_right_values2(obj_value_567,(struct sType*)come_increment_ref_count(type3_575),info,(_Bool)0);
    obj_type_576=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_569));
    fun_name_577="initialize";
    multiple_assign_var11=((struct tuple2$2char$phsGenericsFun$p*)(__right_value587=make_generics_function(obj_type_576,(char*)come_increment_ref_count(__builtin_string(fun_name_577)),info,(_Bool)1)));
    name_578=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_579=multiple_assign_var11->v2;
    come_call_finalizer3(__right_value587,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_580=(char*)come_increment_ref_count(name_578);
    fun_581=((struct sFun*)(__right_value588=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_580,((void*)0))));
    come_call_finalizer3(__right_value588,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_581==((void*)0)) {
        __dec_obj110=generics_fun_name_580;
        generics_fun_name_580=(char*)come_increment_ref_count(create_method_name(obj_type_576,(_Bool)0,((char*)(__right_value589=__builtin_string(fun_name_577))),info,(_Bool)1));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_581=((struct sFun*)(__right_value591=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_580,((void*)0))));
        come_call_finalizer3(__right_value591,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_581==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value592=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_580,info->come_fun->mName)));
            come_exception_var_4_582=multiple_assign_var12->v1;
            Err_583=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional9=(Err_583)),            come_call_finalizer3(__right_value592,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result_obj__336 = (_Bool)1;
                (Err_583 = come_decrement_ref_count2(Err_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_558,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_559,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_570 = come_decrement_ref_count2(type_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_571 = come_decrement_ref_count2(finalizer_name_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_572 = come_decrement_ref_count2(cloner_name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_573 = come_decrement_ref_count2(get_hash_key_name_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_574 = come_decrement_ref_count2(equaler_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_578 = come_decrement_ref_count2(name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_580 = come_decrement_ref_count2(generics_fun_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__336;
            }
            else {
            }
            (Err_583 = come_decrement_ref_count2(Err_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_584=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_581->mResultType));
    result_type_584->mStatic=(_Bool)0;
    come_params_585=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 745, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional10=(((struct sType*)(__right_value596=list$1sType$ph$p_operator_load_element(fun_581->mParamTypes,0)))->mHeap&&obj_value_567->type->mHeap)),    come_call_finalizer3(__right_value596,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)(__right_value597=list$1sType$ph$p_operator_load_element(fun_581->mParamTypes,0))),obj_value_567->type,obj_value_567,info,(_Bool)1);
        come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_585,(struct CVALUE*)come_increment_ref_count(obj_value_567));
    i_586=1;
    for(    o2_saved_587=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_559)),it_588=list$1CVALUE$ph$p_begin((o2_saved_587));    !list$1CVALUE$ph$p_end((o2_saved_587));    it_588=list$1CVALUE$ph$p_next((o2_saved_587))    ){
        come_value_589=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_588));
        if(        (_if_conditional11=(((struct sType*)(__right_value599=list$1sType$ph$p_operator_load_element(fun_581->mParamTypes,i_586)))&&((struct sType*)(__right_value600=list$1sType$ph$p_operator_load_element(fun_581->mParamTypes,i_586)))->mHeap&&come_value_589->type->mHeap)),        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value600,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)(__right_value601=list$1sType$ph$p_operator_load_element(fun_581->mParamTypes,i_586))),come_value_589->type,come_value_589,info,(_Bool)1);
            come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_585,(struct CVALUE*)come_increment_ref_count(come_value_589));
        i_586++;
        come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_587,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_590=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 764, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_590,generics_fun_name_580);
    buffer_append_str(buf_590,"(");
    j_591=0;
    for(    o2_saved_592=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_585)),it_593=list$1CVALUE$ph$p_begin((o2_saved_592));    !list$1CVALUE$ph$p_end((o2_saved_592));    it_593=list$1CVALUE$ph$p_next((o2_saved_592))    ){
        buffer_append_str(buf_590,it_593->c_value);
        if(        j_591!=list$1CVALUE$ph$p_length(come_params_585)-1) {
            buffer_append_str(buf_590,",");
        }
        j_591++;
    }
    come_call_finalizer3(o2_saved_592,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_590,")");
    come_value2_594=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 781, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj111=come_value2_594->c_value;
    come_value2_594->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_590));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=come_value2_594->type;
    come_value2_594->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_584));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_594->type->mStatic=(_Bool)0;
    come_value2_594->var=((void*)0);
    if(    result_type_584->mHeap) {
        append_object_to_right_values2(come_value2_594,(struct sType*)come_increment_ref_count(result_type_584),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_594->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_594));
    __result_obj__337 = (_Bool)1;
    come_call_finalizer3(tuple_types_558,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_559,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_569,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_570 = come_decrement_ref_count2(type_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_571 = come_decrement_ref_count2(finalizer_name_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_572 = come_decrement_ref_count2(cloner_name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_573 = come_decrement_ref_count2(get_hash_key_name_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_574 = come_decrement_ref_count2(equaler_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_575,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_578 = come_decrement_ref_count2(name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_580 = come_decrement_ref_count2(generics_fun_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_585,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__337;
}

static void sSomeNode_finalize(struct sSomeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value608 = (void*)0;
struct sNullReturnValue* __result_obj__338;
    ((struct sNodeBase*)(__right_value608=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value608,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__338 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__338,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__338;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __right_value609 = (void*)0;
char* __result_obj__339;
    __result_obj__339 = come_increment_ref_count(((char*)(__right_value609=__builtin_string("sNullReturnValue"))));
    (__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__339 = come_decrement_ref_count2(__result_obj__339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__339;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct CVALUE* come_value_595;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct buffer* buf_596;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
char* var_name_598;
void* __right_value616 = (void*)0;
struct sType* result_type_599;
void* __right_value617 = (void*)0;
struct sType* result_type2_600;
struct sType* left_type_601;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct CVALUE* come_value2_602;
char* __dec_obj113;
struct sType* __dec_obj114;
    if(    info->come_fun) {
        come_value_595=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 816, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_596=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 818, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_597=0;
        num_597++;
        var_name_598=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value614=int_to_string(num_597)))));
        (__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_599=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_600=(struct sType*)come_increment_ref_count(solve_generics(result_type_599,info->generics_type,info));
        left_type_601=(struct sType*)come_increment_ref_count(result_type2_600);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value618=make_define_var(left_type_601,var_name_598,(_Bool)0,info))));
        (__right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_598,((char*)(__right_value619=make_type_name_string(left_type_601,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_602=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 834, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj113=come_value2_602->c_value;
        come_value2_602->c_value=(char*)come_increment_ref_count(var_name_598);
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=come_value2_602->type;
        come_value2_602->type=(struct sType*)come_increment_ref_count(result_type2_600);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_602->type->mStatic=(_Bool)0;
        come_value2_602->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_602));
        come_call_finalizer3(come_value_595,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_596,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_598 = come_decrement_ref_count2(var_name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_602,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value626 = (void*)0;
struct sNode* __result_obj__342;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 851, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value623=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 851, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result_obj__342 = come_increment_ref_count(((struct sNode*)(__right_value626=_inf_value2)));
    come_call_finalizer3(__right_value623,sNullReturnValue_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value626) ? __right_value626 = come_decrement_ref_count2(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count2(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__342;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
struct sNullReturnValue* __result_obj__340;
void* __right_value624 = (void*)0;
struct sNullReturnValue* result_603;
void* __right_value625 = (void*)0;
char* __dec_obj115;
struct sNullReturnValue* __result_obj__341;
    if(    self==(void*)0) {
        __result_obj__340 = (void*)0;
        return __result_obj__340;
    }
    result_603=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_603->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_603->sname;
        result_603->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_603->sline_real=self->sline_real;
    }
    __result_obj__341 = result_603;
    come_call_finalizer3(result_603,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__341;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value627 = (void*)0;
struct sNullReturnValueOfException* __result_obj__343;
    ((struct sNodeBase*)(__right_value627=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value627,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__343 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__343,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__343;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __right_value628 = (void*)0;
char* __result_obj__344;
    __result_obj__344 = come_increment_ref_count(((char*)(__right_value628=__builtin_string("sNullReturnValue"))));
    (__right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__344 = come_decrement_ref_count2(__result_obj__344, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__344;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct CVALUE* come_value_604;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct buffer* buf_605;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
char* var_name_607;
void* __right_value635 = (void*)0;
struct sType* result_type_608;
void* __right_value636 = (void*)0;
struct sType* result_type2_609;
struct sType* __dec_obj116;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sType* left_type_610;
void* __right_value639 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_5_611=0;
char* Err_612=0;
_Bool _if_conditional12;
_Bool __result_obj__345;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value2_613;
char* __dec_obj117;
struct sType* __dec_obj118;
    if(    info->come_fun) {
        come_value_604=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 869, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_605=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 871, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_606=0;
        num_606++;
        var_name_607=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value633=int_to_string(num_606)))));
        (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_608=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_609=(struct sType*)come_increment_ref_count(solve_generics(result_type_608,info->generics_type,info));
        if(        result_type2_609->mNoSolvedGenericsType) {
            __dec_obj116=result_type2_609;
            result_type2_609=(struct sType*)come_increment_ref_count(result_type2_609->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_610=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value637=list$1sType$ph$p_operator_load_element(result_type2_609->mGenericsTypes,0)))));
        come_call_finalizer3(__right_value637,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        left_type_610==((void*)0)||string_operator_not_equals(result_type2_609->mClass->mName,"tuple2")) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value639=err_msg(info,"function is not exception type")));
            come_exception_var_5_611=multiple_assign_var13->v1;
            Err_612=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            (_if_conditional12=(Err_612)),            come_call_finalizer3(__right_value639,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                __result_obj__345 = (_Bool)1;
                (Err_612 = come_decrement_ref_count2(Err_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_605,buffer_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_607 = come_decrement_ref_count2(var_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_609,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__345;
            }
            else {
            }
            (Err_612 = come_decrement_ref_count2(Err_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value640=make_define_var(left_type_610,var_name_607,(_Bool)0,info))));
        (__right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_607,((char*)(__right_value641=make_type_name_string(left_type_610,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_613=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 897, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj117=come_value2_613->c_value;
        come_value2_613->c_value=(char*)come_increment_ref_count(var_name_607);
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj118=come_value2_613->type;
        come_value2_613->type=(struct sType*)come_increment_ref_count(left_type_610);
        come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_613->type->mStatic=(_Bool)0;
        come_value2_613->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_613));
        come_call_finalizer3(come_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_605,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_607 = come_decrement_ref_count2(var_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_609,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_610,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value648 = (void*)0;
struct sNode* __result_obj__348;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 914, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value645=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 914, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result_obj__348 = come_increment_ref_count(((struct sNode*)(__right_value648=_inf_value3)));
    come_call_finalizer3(__right_value645,sNullReturnValueOfException_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value648) ? __right_value648 = come_decrement_ref_count2(__right_value648, ((struct sNode*)__right_value648)->finalize, ((struct sNode*)__right_value648)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__348) ? __result_obj__348 = come_decrement_ref_count2(__result_obj__348, ((struct sNode*)__result_obj__348)->finalize, ((struct sNode*)__result_obj__348)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__348;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
struct sNullReturnValueOfException* __result_obj__346;
void* __right_value646 = (void*)0;
struct sNullReturnValueOfException* result_614;
void* __right_value647 = (void*)0;
char* __dec_obj119;
struct sNullReturnValueOfException* __result_obj__347;
    if(    self==(void*)0) {
        __result_obj__346 = (void*)0;
        return __result_obj__346;
    }
    result_614=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_614->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_614->sname;
        result_614->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_614->sline_real=self->sline_real;
    }
    __result_obj__347 = result_614;
    come_call_finalizer3(result_614,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__347;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __right_value649 = (void*)0;
struct sType* __dec_obj120;
struct sNullValue* __result_obj__349;
    ((struct sNodeBase*)(__right_value649=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value649,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj120=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__349 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__349,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__349;
}

char* sNullValue_kind(struct sNullValue* self){
void* __right_value650 = (void*)0;
char* __result_obj__350;
    __result_obj__350 = come_increment_ref_count(((char*)(__right_value650=__builtin_string("sNullValue"))));
    (__right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__350 = come_decrement_ref_count2(__result_obj__350, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__350;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct buffer* buf_616;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
char* var_name_618;
struct sType* left_type_619;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct CVALUE* come_value2_620;
char* __dec_obj121;
struct sType* __dec_obj122;
_Bool __result_obj__351;
    come_value_615=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 933, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_616=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 935, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    static int num_617=0;
    num_617++;
    var_name_618=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value655=int_to_string(num_617)))));
    (__right_value655 = come_decrement_ref_count2(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_619=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value657=make_define_var(left_type_619,var_name_618,(_Bool)0,info))));
    (__right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_618,((char*)(__right_value658=make_type_name_string(left_type_619,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_620=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 947, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj121=come_value2_620->c_value;
    come_value2_620->c_value=(char*)come_increment_ref_count(var_name_618);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=come_value2_620->type;
    come_value2_620->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_620->type->mStatic=(_Bool)0;
    come_value2_620->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_620));
    __result_obj__351 = (_Bool)1;
    come_call_finalizer3(come_value_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_616,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_618 = come_decrement_ref_count2(var_name_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_type_619,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_620,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__351;
}

static void sNullValue_finalize(struct sNullValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value666 = (void*)0;
struct sNode* __result_obj__354;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 963, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value662=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 963, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result_obj__354 = come_increment_ref_count(((struct sNode*)(__right_value666=_inf_value4)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value662,sNullValue_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value666) ? __right_value666 = come_decrement_ref_count2(__right_value666, ((struct sNode*)__right_value666)->finalize, ((struct sNode*)__right_value666)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count2(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__354;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
struct sNullValue* __result_obj__352;
void* __right_value663 = (void*)0;
struct sNullValue* result_621;
void* __right_value664 = (void*)0;
char* __dec_obj123;
void* __right_value665 = (void*)0;
struct sType* __dec_obj124;
struct sNullValue* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = (void*)0;
        return __result_obj__352;
    }
    result_621=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_621->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_621->sname;
        result_621->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_621->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj124=result_621->type;
        result_621->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__353 = result_621;
    come_call_finalizer3(result_621,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__353;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value667 = (void*)0;
struct list$1sNode$ph* __dec_obj125;
struct sNoneNode* __result_obj__355;
    ((struct sNodeBase*)(__right_value667=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value667,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj125=self->tuple_elements;
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj125,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__355 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__355,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__355;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __right_value668 = (void*)0;
char* __result_obj__356;
    __result_obj__356 = come_increment_ref_count(((char*)(__right_value668=__builtin_string("sNoneNode"))));
    (__right_value668 = come_decrement_ref_count2(__right_value668, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__356 = come_decrement_ref_count2(__result_obj__356, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__356;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_622;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1sType$ph* tuple_types_623;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct list$1CVALUE$ph* tuple_values_624;
int i_625;
struct list$1sNode$ph* o2_saved_626;
struct sNode* it_627;
_Bool Value_628;
_Bool __result_obj__357;
void* __right_value673 = (void*)0;
struct CVALUE* come_value_629;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sType* string_type_630;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_6_631=0;
char* Err_632=0;
_Bool _if_conditional13;
_Bool __result_obj__358;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sType* type_633;
struct list$1sType$ph* o2_saved_634;
struct sType* it_635;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct CVALUE* obj_value_636;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct buffer* num_string_637;
void* __right_value689 = (void*)0;
struct sType* type2_638;
void* __right_value690 = (void*)0;
char* type_name_639;
void* __right_value691 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var15 = (void*)0;
char* finalizer_name_640=0;
char* cloner_name_641=0;
char* get_hash_key_name_642=0;
char* equaler_name_643=0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
char* __dec_obj126;
void* __right_value694 = (void*)0;
struct sType* type3_644;
void* __right_value695 = (void*)0;
struct sType* __dec_obj127;
void* __right_value696 = (void*)0;
struct sType* obj_type_645;
char* fun_name_646;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_647=0;
struct sGenericsFun* generics_fun_648=0;
char* generics_fun_name_649;
void* __right_value699 = (void*)0;
struct sFun* fun_650;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
char* __dec_obj128;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_7_651=0;
char* Err_652=0;
_Bool _if_conditional14;
_Bool __result_obj__359;
void* __right_value704 = (void*)0;
struct sType* result_type_653;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1CVALUE$ph* come_params_654;
void* __right_value707 = (void*)0;
_Bool _if_conditional15;
void* __right_value708 = (void*)0;
struct list$1CVALUE$ph* o2_saved_655;
struct CVALUE* it_656;
void* __right_value709 = (void*)0;
struct CVALUE* come_value_657;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
_Bool _if_conditional16;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct buffer* buf_658;
int j_659;
struct list$1CVALUE$ph* o2_saved_660;
struct CVALUE* it_661;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct CVALUE* come_value2_662;
void* __right_value717 = (void*)0;
char* __dec_obj129;
void* __right_value718 = (void*)0;
struct sType* __dec_obj130;
_Bool __result_obj__360;
    tuple_elements_622=self->tuple_elements;
    tuple_types_623=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 983, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    tuple_values_624=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 984, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    i_625=0;
    for(    o2_saved_626=(tuple_elements_622),it_627=list$1sNode$ph$p_begin((o2_saved_626));    !list$1sNode$ph$p_end((o2_saved_626));    it_627=list$1sNode$ph$p_next((o2_saved_626))    ){
        Value_628=node_compile(it_627,info);
        if(        !Value_628) {
            __result_obj__357 = (_Bool)0;
            come_call_finalizer3(tuple_types_623,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_624,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__357;
        }
        else {
        }
        come_value_629=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_624,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_629)));
        list$1sType$ph$p_push_back(tuple_types_623,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_629->type)));
        if(        i_625==1) {
            string_type_630=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 999, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
            string_type_630->mHeap=(_Bool)1;
            multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value680=check_assign_type(((char*)(__right_value679=xsprintf("invalid none type"))),string_type_630,come_value_629->type,come_value_629,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_6_631=multiple_assign_var14->v1;
            Err_632=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            (_if_conditional13=(Err_632)),            (__right_value679 = come_decrement_ref_count2(__right_value679, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value680,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                __result_obj__358 = (_Bool)1;
                come_call_finalizer3(string_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                (Err_632 = come_decrement_ref_count2(Err_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_types_623,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_624,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__358;
            }
            else {
            }
            come_call_finalizer3(string_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
            (Err_632 = come_decrement_ref_count2(Err_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_625++;
        come_call_finalizer3(come_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_633=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1009, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph$p_length(tuple_types_623))),(_Bool)0,info));
    for(    o2_saved_634=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_623)),it_635=list$1sType$ph$p_begin((o2_saved_634));    !list$1sType$ph$p_end((o2_saved_634));    it_635=list$1sType$ph$p_next((o2_saved_634))    ){
        list$1sType$ph$p_push_back(type_633->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value684=come_call_cloner(sType_clone, it_635))))));
        come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_634,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_636=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1015, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_637=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1017, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_637,"1");
    type2_638=(struct sType*)come_increment_ref_count(solve_generics(type_633,type_633,info));
    type_name_639=(char*)come_increment_ref_count(make_type_name_string(type2_638,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var15=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value691=create_vtable((struct sType*)come_increment_ref_count(type2_638),info)));
    finalizer_name_640=(char*)come_increment_ref_count(multiple_assign_var15->v1);
    cloner_name_641=(char*)come_increment_ref_count(multiple_assign_var15->v2);
    get_hash_key_name_642=(char*)come_increment_ref_count(multiple_assign_var15->v3);
    equaler_name_643=(char*)come_increment_ref_count(multiple_assign_var15->v4);
    come_call_finalizer3(__right_value691,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj126=obj_value_636->c_value;
    obj_value_636->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_639,type_name_639,((char*)(__right_value692=buffer_to_string(num_string_637))),info->sname,info->sline,type_name_639));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_644=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_638));
    type3_644->mPointerNum++;
    type3_644->mHeap=(_Bool)1;
    type2_638->mHeap=(_Bool)1;
    __dec_obj127=obj_value_636->type;
    obj_value_636->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_638));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_636->type->mPointerNum++;
    obj_value_636->var=((void*)0);
    append_object_to_right_values2(obj_value_636,(struct sType*)come_increment_ref_count(type3_644),info,(_Bool)0);
    obj_type_645=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_638));
    fun_name_646="initialize";
    multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value698=make_generics_function(obj_type_645,(char*)come_increment_ref_count(__builtin_string(fun_name_646)),info,(_Bool)1)));
    name_647=(char*)come_increment_ref_count(multiple_assign_var16->v1);
    generics_fun_648=multiple_assign_var16->v2;
    come_call_finalizer3(__right_value698,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_649=(char*)come_increment_ref_count(name_647);
    fun_650=((struct sFun*)(__right_value699=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_649,((void*)0))));
    come_call_finalizer3(__right_value699,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_650==((void*)0)) {
        __dec_obj128=generics_fun_name_649;
        generics_fun_name_649=(char*)come_increment_ref_count(create_method_name(obj_type_645,(_Bool)0,((char*)(__right_value700=__builtin_string(fun_name_646))),info,(_Bool)1));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_650=((struct sFun*)(__right_value702=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_649,((void*)0))));
        come_call_finalizer3(__right_value702,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_650==((void*)0)) {
            multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value703=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_649,info->come_fun->mName)));
            come_exception_var_7_651=multiple_assign_var17->v1;
            Err_652=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional14=(Err_652)),            come_call_finalizer3(__right_value703,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                __result_obj__359 = (_Bool)1;
                (Err_652 = come_decrement_ref_count2(Err_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_623,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_624,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_637,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_638,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_639 = come_decrement_ref_count2(type_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_640 = come_decrement_ref_count2(finalizer_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_641 = come_decrement_ref_count2(cloner_name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_642 = come_decrement_ref_count2(get_hash_key_name_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_643 = come_decrement_ref_count2(equaler_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_644,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_647 = come_decrement_ref_count2(name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_649 = come_decrement_ref_count2(generics_fun_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__359;
            }
            else {
            }
            (Err_652 = come_decrement_ref_count2(Err_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_653=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_650->mResultType));
    result_type_653->mStatic=(_Bool)0;
    come_params_654=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1062, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional15=(((struct sType*)(__right_value707=list$1sType$ph$p_operator_load_element(fun_650->mParamTypes,0)))->mHeap&&obj_value_636->type->mHeap)),    come_call_finalizer3(__right_value707,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional15) {
        std_move(((struct sType*)(__right_value708=list$1sType$ph$p_operator_load_element(fun_650->mParamTypes,0))),obj_value_636->type,obj_value_636,info,(_Bool)1);
        come_call_finalizer3(__right_value708,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_654,(struct CVALUE*)come_increment_ref_count(obj_value_636));
    i_625=1;
    for(    o2_saved_655=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_624)),it_656=list$1CVALUE$ph$p_begin((o2_saved_655));    !list$1CVALUE$ph$p_end((o2_saved_655));    it_656=list$1CVALUE$ph$p_next((o2_saved_655))    ){
        come_value_657=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_656));
        if(        (_if_conditional16=(((struct sType*)(__right_value710=list$1sType$ph$p_operator_load_element(fun_650->mParamTypes,i_625)))&&((struct sType*)(__right_value711=list$1sType$ph$p_operator_load_element(fun_650->mParamTypes,i_625)))->mHeap&&come_value_657->type->mHeap)),        come_call_finalizer3(__right_value710,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value711,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional16) {
            std_move(((struct sType*)(__right_value712=list$1sType$ph$p_operator_load_element(fun_650->mParamTypes,i_625))),come_value_657->type,come_value_657,info,(_Bool)1);
            come_call_finalizer3(__right_value712,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_654,(struct CVALUE*)come_increment_ref_count(come_value_657));
        i_625++;
        come_call_finalizer3(come_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_655,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1081, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_658,generics_fun_name_649);
    buffer_append_str(buf_658,"(");
    j_659=0;
    for(    o2_saved_660=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_654)),it_661=list$1CVALUE$ph$p_begin((o2_saved_660));    !list$1CVALUE$ph$p_end((o2_saved_660));    it_661=list$1CVALUE$ph$p_next((o2_saved_660))    ){
        buffer_append_str(buf_658,it_661->c_value);
        if(        j_659!=list$1CVALUE$ph$p_length(come_params_654)-1) {
            buffer_append_str(buf_658,",");
        }
        j_659++;
    }
    come_call_finalizer3(o2_saved_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_658,")");
    come_value2_662=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1098, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj129=come_value2_662->c_value;
    come_value2_662->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_658));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value2_662->type;
    come_value2_662->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_653));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_662->type->mStatic=(_Bool)0;
    come_value2_662->var=((void*)0);
    if(    result_type_653->mHeap) {
        append_object_to_right_values2(come_value2_662,(struct sType*)come_increment_ref_count(result_type_653),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_662->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_662));
    __result_obj__360 = (_Bool)1;
    come_call_finalizer3(tuple_types_623,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_624,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_637,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_638,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_639 = come_decrement_ref_count2(type_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_640 = come_decrement_ref_count2(finalizer_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_641 = come_decrement_ref_count2(cloner_name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_642 = come_decrement_ref_count2(get_hash_key_name_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_643 = come_decrement_ref_count2(equaler_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_644,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_647 = come_decrement_ref_count2(name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_649 = come_decrement_ref_count2(generics_fun_name_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_653,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_654,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_662,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__360;
}

static void sNoneNode_finalize(struct sNoneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info){
void* __right_value719 = (void*)0;
struct list$1sNode$ph* __dec_obj131;
struct list$1sNode$ph* __dec_obj132;
struct sMapNode* __result_obj__361;
    ((struct sNodeBase*)(__right_value719=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value719,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj131=self->map_key_elements;
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj131,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj132=self->map_elements;
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj132,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__361 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__361,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__361;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value720 = (void*)0;
char* __result_obj__362;
    __result_obj__362 = come_increment_ref_count(((char*)(__right_value720=__builtin_string("sMapNode"))));
    (__right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__362 = come_decrement_ref_count2(__result_obj__362, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__362;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_663;
struct list$1sNode$ph* map_elements_664;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1CVALUE$ph* key_params_665;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct list$1CVALUE$ph* element_params_666;
struct sType* map_key_type_667;
struct sType* map_element_type_668;
int i_669;
void* __right_value725 = (void*)0;
struct sNode* key_elements_670;
void* __right_value726 = (void*)0;
struct sNode* elements_674;
void* __right_value727 = (void*)0;
_Bool _if_conditional17;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sNode* value_node_675;
struct sNode* exp_676;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_677;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* __dec_obj133;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_678;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value748 = (void*)0;
struct sNode* __dec_obj135;
_Bool Value_679;
_Bool __result_obj__365;
void* __right_value749 = (void*)0;
struct CVALUE* come_value_680;
void* __right_value750 = (void*)0;
struct sType* __dec_obj136;
_Bool Value_681;
_Bool __result_obj__366;
void* __right_value751 = (void*)0;
struct CVALUE* come_value_682;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_683=0;
char* Err_684=0;
_Bool _if_conditional18;
_Bool __result_obj__367;
void* __right_value754 = (void*)0;
struct sType* __dec_obj137;
void* __right_value755 = (void*)0;
_Bool _if_conditional19;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* value_node_685;
struct sNode* exp2_686;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_687;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_688;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj140;
_Bool Value_689;
_Bool __result_obj__368;
void* __right_value777 = (void*)0;
struct CVALUE* come_value2_690;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_9_691=0;
char* Err_692=0;
_Bool _if_conditional20;
_Bool __result_obj__369;
void* __right_value780 = (void*)0;
struct sType* __dec_obj141;
_Bool Value_693;
_Bool __result_obj__370;
void* __right_value781 = (void*)0;
struct CVALUE* come_value2_694;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_10_695=0;
char* Err_696=0;
_Bool _if_conditional21;
_Bool __result_obj__371;
void* __right_value784 = (void*)0;
struct sType* __dec_obj142;
void* __right_value785 = (void*)0;
struct sType* key_type_values_698;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
char* var_name_699;
void* __right_value788 = (void*)0;
struct sVar* var__700;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sType* element_type_values_701;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
char* var_name2_702;
void* __right_value793 = (void*)0;
struct sVar* var2__703;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct buffer* source_704;
int i_705;
void* __right_value797 = (void*)0;
struct CVALUE* key_param_706;
void* __right_value798 = (void*)0;
struct CVALUE* element_param_707;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sType* map_type_708;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sType* obj_type_709;
char* fun_name_710;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var21 = (void*)0;
char* name_711=0;
struct sGenericsFun* generics_fun_712=0;
char* generics_fun_name_713;
void* __right_value807 = (void*)0;
struct sFun* fun_714;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
char* __dec_obj143;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_11_715=0;
char* Err_716=0;
_Bool _if_conditional22;
_Bool __result_obj__372;
void* __right_value812 = (void*)0;
struct sType* result_type_717;
struct sType* type_718;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct CVALUE* obj_value_719;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct buffer* num_string_720;
void* __right_value817 = (void*)0;
struct sType* type2_721;
void* __right_value818 = (void*)0;
char* type_name_722;
struct sType* any_type_723;
void* __right_value819 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var23 = (void*)0;
char* finalizer_name_724=0;
char* cloner_name_725=0;
char* get_hash_key_name_726=0;
char* equaler_name_727=0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
char* __dec_obj144;
void* __right_value822 = (void*)0;
struct sType* type3_728;
void* __right_value823 = (void*)0;
struct sType* __dec_obj145;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct list$1CVALUE$ph* come_params_729;
void* __right_value826 = (void*)0;
_Bool _if_conditional23;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct CVALUE* come_value2_730;
void* __right_value830 = (void*)0;
char* __dec_obj146;
struct sType* __dec_obj147;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct CVALUE* come_value3_731;
void* __right_value833 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct CVALUE* come_value4_732;
void* __right_value836 = (void*)0;
char* __dec_obj150;
struct sType* __dec_obj151;
int j_733;
struct list$1CVALUE$ph* o2_saved_734;
struct CVALUE* it_735;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct CVALUE* come_value5_736;
void* __right_value839 = (void*)0;
char* __dec_obj152;
void* __right_value840 = (void*)0;
struct sType* __dec_obj153;
_Bool __result_obj__373;
exp_676 = (void*)0;
exp2_686 = (void*)0;
    map_key_elements_663=self->map_key_elements;
    map_elements_664=self->map_elements;
    key_params_665=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1138, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    element_params_666=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1139, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    map_key_type_667=((void*)0);
    map_element_type_668=((void*)0);
    for(    i_669=0;    i_669<list$1sNode$ph$p_length(map_key_elements_663);    i_669++    ){
        key_elements_670=((struct sNode*)(__right_value725=list$1sNode$ph$p_operator_load_element(map_key_elements_663,i_669)));
        ((__right_value725) ? __right_value725 = come_decrement_ref_count2(__right_value725, ((struct sNode*)__right_value725)->finalize, ((struct sNode*)__right_value725)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        elements_674=((struct sNode*)(__right_value726=list$1sNode$ph$p_operator_load_element(map_elements_664,i_669)));
        ((__right_value726) ? __right_value726 = come_decrement_ref_count2(__right_value726, ((struct sNode*)__right_value726)->finalize, ((struct sNode*)__right_value726)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        (_if_conditional17=(string_operator_equals(((char*)(__right_value727=key_elements_670->kind(key_elements_670->_protocol_obj))),"sWildCard"))),        (__right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional17) {
            value_node_675=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value728=xsprintf("Value"))),info));
            (__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_677=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1152, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_677,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1153, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_675))));
                __dec_obj133=exp_676;
                exp_676=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value735=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_675),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_677),((void*)0),0,((void*)0),info));
                if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_677,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_678=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1158, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_678,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1159, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_676))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_678,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1160, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_669,info)))));
                __dec_obj134=exp_676;
                exp_676=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value746=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_676),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_678),((void*)0),0,((void*)0),info));
                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj135=exp_676;
                exp_676=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_676,info));
                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_678,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_679=node_compile(exp_676,info);
            if(            !Value_679) {
                __result_obj__365 = (_Bool)0;
                ((value_node_675) ? value_node_675 = come_decrement_ref_count2(value_node_675, ((struct sNode*)value_node_675)->finalize, ((struct sNode*)value_node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_676) ? exp_676 = come_decrement_ref_count2(exp_676, ((struct sNode*)exp_676)->finalize, ((struct sNode*)exp_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__365;
            }
            else {
            }
            come_value_680=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_push_back(key_params_665,(struct CVALUE*)come_increment_ref_count(come_value_680));
            __dec_obj136=map_key_type_667;
            map_key_type_667=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_680->type));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_675) ? value_node_675 = come_decrement_ref_count2(value_node_675, ((struct sNode*)value_node_675)->finalize, ((struct sNode*)value_node_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_676) ? exp_676 = come_decrement_ref_count2(exp_676, ((struct sNode*)exp_676)->finalize, ((struct sNode*)exp_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_681=node_compile(key_elements_670,info);
            if(            !Value_681) {
                __result_obj__366 = (_Bool)0;
                come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__366;
            }
            else {
            }
            come_value_682=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_667) {
                multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value753=check_assign_type(((char*)(__right_value752=xsprintf("invalid map key type"))),map_key_type_667,come_value_682->type,come_value_682,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_8_683=multiple_assign_var18->v1;
                Err_684=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                (_if_conditional18=(Err_684)),                (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value753,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result_obj__367 = (_Bool)1;
                    (Err_684 = come_decrement_ref_count2(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_682,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__367;
                }
                else {
                }
                (Err_684 = come_decrement_ref_count2(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(key_params_665,(struct CVALUE*)come_increment_ref_count(come_value_682));
            __dec_obj137=map_key_type_667;
            map_key_type_667=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_682->type));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value_682,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional19=(string_operator_equals(((char*)(__right_value755=elements_674->kind(elements_674->_protocol_obj))),"sWildCard"))),        (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional19) {
            value_node_685=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value756=xsprintf("Value"))),info));
            (__right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_687=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1198, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_687,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1199, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_685))));
                __dec_obj138=exp2_686;
                exp2_686=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value763=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_685),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_687),((void*)0),0,((void*)0),info));
                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_687,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_688=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1204, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_688,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1205, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_686))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_688,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1206, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_669,info)))));
                __dec_obj139=exp2_686;
                exp2_686=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value774=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_686),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_688),((void*)0),0,((void*)0),info));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj140=exp2_686;
                exp2_686=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_686,info));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_688,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_689=node_compile(exp2_686,info);
            if(            !Value_689) {
                __result_obj__368 = (_Bool)0;
                ((value_node_685) ? value_node_685 = come_decrement_ref_count2(value_node_685, ((struct sNode*)value_node_685)->finalize, ((struct sNode*)value_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp2_686) ? exp2_686 = come_decrement_ref_count2(exp2_686, ((struct sNode*)exp2_686)->finalize, ((struct sNode*)exp2_686)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__368;
            }
            else {
            }
            come_value2_690=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_668) {
                multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value779=check_assign_type(((char*)(__right_value778=xsprintf("invalid map element type"))),map_element_type_668,come_value2_690->type,come_value2_690,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_9_691=multiple_assign_var19->v1;
                Err_692=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional20=(Err_692)),                (__right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value779,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional20) {
                    __result_obj__369 = (_Bool)1;
                    (Err_692 = come_decrement_ref_count2(Err_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((value_node_685) ? value_node_685 = come_decrement_ref_count2(value_node_685, ((struct sNode*)value_node_685)->finalize, ((struct sNode*)value_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((exp2_686) ? exp2_686 = come_decrement_ref_count2(exp2_686, ((struct sNode*)exp2_686)->finalize, ((struct sNode*)exp2_686)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value2_690,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__369;
                }
                else {
                }
                (Err_692 = come_decrement_ref_count2(Err_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(element_params_666,(struct CVALUE*)come_increment_ref_count(come_value2_690));
            __dec_obj141=map_element_type_668;
            map_element_type_668=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_690->type));
            come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_685) ? value_node_685 = come_decrement_ref_count2(value_node_685, ((struct sNode*)value_node_685)->finalize, ((struct sNode*)value_node_685)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_686) ? exp2_686 = come_decrement_ref_count2(exp2_686, ((struct sNode*)exp2_686)->finalize, ((struct sNode*)exp2_686)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value2_690,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_693=node_compile(elements_674,info);
            if(            !Value_693) {
                __result_obj__370 = (_Bool)0;
                come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__370;
            }
            else {
            }
            come_value2_694=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_668) {
                multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value783=check_assign_type(((char*)(__right_value782=xsprintf("invalid map element type"))),map_element_type_668,come_value2_694->type,come_value2_694,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_10_695=multiple_assign_var20->v1;
                Err_696=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                (_if_conditional21=(Err_696)),                (__right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value783,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional21) {
                    __result_obj__371 = (_Bool)1;
                    (Err_696 = come_decrement_ref_count2(Err_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value2_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__371;
                }
                else {
                }
                (Err_696 = come_decrement_ref_count2(Err_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(element_params_666,(struct CVALUE*)come_increment_ref_count(come_value2_694));
            __dec_obj142=map_element_type_668;
            map_element_type_668=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_694->type));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value2_694,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_697=0;
    key_type_values_698=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_667));
    list$1sNode$ph$p_push_back(key_type_values_698->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(key_params_665),info)));
    key_type_values_698->mHeap=(_Bool)0;
    var_name_699=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_697));
    add_variable_to_table(var_name_699,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_698)),info,(_Bool)0);
    var__700=get_variable_from_table(info->lv_table,var_name_699);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value789=make_define_var(key_type_values_698,var__700->mCValueName,(_Bool)0,info))));
    (__right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_701=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_668));
    list$1sNode$ph$p_push_back(element_type_values_701->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(element_params_666),info)));
    element_type_values_701->mHeap=(_Bool)0;
    var_name2_702=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_697));
    add_variable_to_table(var_name2_702,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_701)),info,(_Bool)0);
    var2__703=get_variable_from_table(info->lv_table,var_name2_702);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value794=make_define_var(element_type_values_701,var2__703->mCValueName,(_Bool)0,info))));
    (__right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_704=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1271, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_704,"(");
    for(    i_705=0;    i_705<list$1CVALUE$ph$p_length(key_params_665);    i_705++    ){
        key_param_706=((struct CVALUE*)(__right_value797=list$1CVALUE$ph$p_operator_load_element(key_params_665,i_705)));
        come_call_finalizer3(__right_value797,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_707=((struct CVALUE*)(__right_value798=list$1CVALUE$ph$p_operator_load_element(element_params_666,i_705)));
        come_call_finalizer3(__right_value798,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_667->mHeap) {
            buffer_append_format(source_704,"%s[%d]=%s,\n",var__700->mCValueName,i_705,key_param_706->c_value);
        }
        else {
            buffer_append_format(source_704,"%s[%d]=%s,\n",var__700->mCValueName,i_705,key_param_706->c_value);
        }
        if(        map_element_type_668->mHeap) {
            buffer_append_format(source_704,"%s[%d]=%s,\n",var2__703->mCValueName,i_705,element_param_707->c_value);
        }
        else {
            buffer_append_format(source_704,"%s[%d]=%s,\n",var2__703->mCValueName,i_705,element_param_707->c_value);
        }
    }
    map_type_708=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1296, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info));
    list$1sType$ph$p_push_back(map_type_708->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value802=come_call_cloner(sType_clone, map_key_type_667))))));
    come_call_finalizer3(__right_value802,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sType$ph$p_push_back(map_type_708->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value803=come_call_cloner(sType_clone, map_element_type_668))))));
    come_call_finalizer3(__right_value803,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_709=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_708));
    fun_name_710="initialize_with_values";
    multiple_assign_var21=((struct tuple2$2char$phsGenericsFun$p*)(__right_value806=make_generics_function(obj_type_709,(char*)come_increment_ref_count(__builtin_string(fun_name_710)),info,(_Bool)1)));
    name_711=(char*)come_increment_ref_count(multiple_assign_var21->v1);
    generics_fun_712=multiple_assign_var21->v2;
    come_call_finalizer3(__right_value806,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_713=(char*)come_increment_ref_count(name_711);
    fun_714=((struct sFun*)(__right_value807=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_713,((void*)0))));
    come_call_finalizer3(__right_value807,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_714==((void*)0)) {
        __dec_obj143=generics_fun_name_713;
        generics_fun_name_713=(char*)come_increment_ref_count(create_method_name(obj_type_709,(_Bool)0,((char*)(__right_value808=__builtin_string(fun_name_710))),info,(_Bool)1));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value808 = come_decrement_ref_count2(__right_value808, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_714=((struct sFun*)(__right_value810=map$2char$phsFun$ph$p_at(info->funcs,generics_fun_name_713,((void*)0))));
        come_call_finalizer3(__right_value810,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_714==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value811=err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_713,info->come_fun->mName)));
            come_exception_var_11_715=multiple_assign_var22->v1;
            Err_716=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional22=(Err_716)),            come_call_finalizer3(__right_value811,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional22) {
                __result_obj__372 = (_Bool)1;
                (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(key_type_values_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_699 = come_decrement_ref_count2(var_name_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(element_type_values_701,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name2_702 = come_decrement_ref_count2(var_name2_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_type_708,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_711 = come_decrement_ref_count2(name_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_713 = come_decrement_ref_count2(generics_fun_name_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__372;
            }
            else {
            }
            (Err_716 = come_decrement_ref_count2(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_717=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_714->mResultType));
    result_type_717->mStatic=(_Bool)0;
    type_718=map_type_708;
    obj_value_719=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1325, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_720=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1327, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_720,"1");
    type2_721=(struct sType*)come_increment_ref_count(solve_generics(type_718,type_718,info));
    type_name_722=(char*)come_increment_ref_count(make_type_name_string(type2_721,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_723=(struct sType*)come_increment_ref_count(type2_721);
    any_type_723->mPointerNum=1;
    any_type_723->mHeap=(_Bool)1;
    multiple_assign_var23=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value819=create_vtable((struct sType*)come_increment_ref_count(any_type_723),info)));
    finalizer_name_724=(char*)come_increment_ref_count(multiple_assign_var23->v1);
    cloner_name_725=(char*)come_increment_ref_count(multiple_assign_var23->v2);
    get_hash_key_name_726=(char*)come_increment_ref_count(multiple_assign_var23->v3);
    equaler_name_727=(char*)come_increment_ref_count(multiple_assign_var23->v4);
    come_call_finalizer3(__right_value819,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj144=obj_value_719->c_value;
    obj_value_719->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_722,type_name_722,((char*)(__right_value820=buffer_to_string(num_string_720))),info->sname,info->sline,type_name_722,finalizer_name_724,cloner_name_725,get_hash_key_name_726,equaler_name_727));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value820 = come_decrement_ref_count2(__right_value820, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_728=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_721));
    type3_728->mPointerNum++;
    type3_728->mHeap=(_Bool)1;
    type2_721->mHeap=(_Bool)1;
    __dec_obj145=obj_value_719->type;
    obj_value_719->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_721));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_719->type->mPointerNum++;
    obj_value_719->var=((void*)0);
    append_object_to_right_values2(obj_value_719,(struct sType*)come_increment_ref_count(type3_728),info,(_Bool)0);
    come_params_729=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1353, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional23=(((struct sType*)(__right_value826=list$1sType$ph$p_operator_load_element(fun_714->mParamTypes,0)))->mHeap&&obj_value_719->type->mHeap)),    come_call_finalizer3(__right_value826,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional23) {
        std_move(((struct sType*)(__right_value827=list$1sType$ph$p_operator_load_element(fun_714->mParamTypes,0))),obj_value_719->type,obj_value_719,info,(_Bool)1);
        come_call_finalizer3(__right_value827,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_729,(struct CVALUE*)come_increment_ref_count(obj_value_719));
    come_value2_730=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1360, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj146=come_value2_730->c_value;
    come_value2_730->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph$p_length(key_params_665)));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value2_730->type;
    come_value2_730->type=((void*)0);
    come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_730->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_729,(struct CVALUE*)come_increment_ref_count(come_value2_730));
    come_value3_731=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1368, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj148=come_value3_731->c_value;
    come_value3_731->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__700->mCValueName));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value3_731->type;
    come_value3_731->type=((void*)0);
    come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_731->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_729,(struct CVALUE*)come_increment_ref_count(come_value3_731));
    come_value4_732=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1376, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj150=come_value4_732->c_value;
    come_value4_732->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__703->mCValueName));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=come_value4_732->type;
    come_value4_732->type=((void*)0);
    come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_732->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_729,(struct CVALUE*)come_increment_ref_count(come_value4_732));
    buffer_append_str(source_704,generics_fun_name_713);
    buffer_append_str(source_704,"(");
    j_733=0;
    for(    o2_saved_734=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_729)),it_735=list$1CVALUE$ph$p_begin((o2_saved_734));    !list$1CVALUE$ph$p_end((o2_saved_734));    it_735=list$1CVALUE$ph$p_next((o2_saved_734))    ){
        buffer_append_str(source_704,it_735->c_value);
        if(        j_733!=list$1CVALUE$ph$p_length(come_params_729)-1) {
            buffer_append_str(source_704,",");
        }
        j_733++;
    }
    come_call_finalizer3(o2_saved_734,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_704,")");
    buffer_append_str(source_704,")");
    come_value5_736=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1402, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj152=come_value5_736->c_value;
    come_value5_736->c_value=(char*)come_increment_ref_count(buffer_to_string(source_704));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value5_736->type;
    come_value5_736->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_717));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_736->type->mStatic=(_Bool)0;
    come_value5_736->var=((void*)0);
    if(    result_type_717->mHeap) {
        append_object_to_right_values2(come_value5_736,(struct sType*)come_increment_ref_count(result_type_717),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_736->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_736));
    __result_obj__373 = (_Bool)1;
    come_call_finalizer3(key_params_665,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_666,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_698,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_699 = come_decrement_ref_count2(var_name_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(element_type_values_701,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name2_702 = come_decrement_ref_count2(var_name2_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_704,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_708,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_711 = come_decrement_ref_count2(name_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_713 = come_decrement_ref_count2(generics_fun_name_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_719,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_720,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_721,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_722 = come_decrement_ref_count2(type_name_722, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_724 = come_decrement_ref_count2(finalizer_name_724, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_725 = come_decrement_ref_count2(cloner_name_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_726 = come_decrement_ref_count2(get_hash_key_name_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_727 = come_decrement_ref_count2(equaler_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_728,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_729,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_730,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_731,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_732,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_736,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__373;
}

static void sMapNode_finalize(struct sMapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        come_call_finalizer3(self->map_key_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        come_call_finalizer3(self->map_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_671;
int i_672;
struct sNode* __result_obj__363;
struct sNode* default_value_673;
struct sNode* __result_obj__364;
default_value_673 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_671=self->head;
    i_672=0;
    while(it_671!=((void*)0)) {
        if(        position==i_672) {
            __result_obj__363 = come_increment_ref_count(it_671->item);
            ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count2(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__363;
        }
        it_671=it_671->next;
        i_672++;
    }
    memset(&default_value_673,0,sizeof(struct sNode*));
    __result_obj__364 = come_increment_ref_count(default_value_673);
    ((default_value_673) ? default_value_673 = come_decrement_ref_count2(default_value_673, ((struct sNode*)default_value_673)->finalize, ((struct sNode*)default_value_673)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__364) ? __result_obj__364 = come_decrement_ref_count2(__result_obj__364, ((struct sNode*)__result_obj__364)->finalize, ((struct sNode*)__result_obj__364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__364;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_737;
int sline_738;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1sNode$ph* exps_739;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* value_740;
char* head_of_last_line_741;
int len_742;
void* __right_value845 = (void*)0;
struct sNode* exp_743;
int sline2_744;
void* __right_value846 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c1_745=0;
char* Err_746=0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value854 = (void*)0;
struct sNode* __result_obj__376;
int sline_real_748;
int sline_749;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct buffer* value_750;
char* p_751;
int sline_752;
int sline2_753;
void* __right_value857 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c2_754=0;
char* Err_755=0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value861 = (void*)0;
struct sNode* __result_obj__377;
int sline_real_756;
int sline_757;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct buffer* value_758;
unsigned long  int size_759;
char* p_760;
int sline_761;
int len_762;
int sline2_763;
void* __right_value864 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c3_764=0;
char* Err_765=0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value870 = (void*)0;
struct sNode* __result_obj__380;
int sline_real_767;
int sline_768;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct buffer* buf_769;
void* __right_value873 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c4_770=0;
char* Err_771=0;
_Bool global_772;
_Bool ignore_case_773;
_Bool catch_exception_774;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value877 = (void*)0;
struct sNode* obj_775;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_776;
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
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct buffer* method_block_777;
int method_block_sline_778;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sType$ph* method_generics_types_779;
void* __right_value919 = (void*)0;
struct sNode* node_780;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sNode* __dec_obj159;
struct sNode* __result_obj__381;
int sline_real_781;
int sline_782;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct buffer* value_783;
char* p_784;
int sline_785;
int len_786;
int sline2_787;
void* __right_value924 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c5_788=0;
char* Err_789=0;
_Bool global_790;
_Bool ignore_case_791;
_Bool catch_exception_792;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value928 = (void*)0;
struct sNode* obj_793;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_794;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct buffer* method_block_795;
int method_block_sline_796;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct list$1sType$ph* method_generics_types_797;
void* __right_value970 = (void*)0;
struct sNode* node_798;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sNode* __dec_obj160;
struct sNode* __result_obj__382;
int sline_real_799;
int c_800;
int n_801;
int n_802;
unsigned long long int n_805;
void* __right_value973 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c6_806=0;
char* Err_807=0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value978 = (void*)0;
struct sNode* __result_obj__385;
int sline_real_809;
unsigned int c_810;
_Bool quote_811;
int n_812;
int n_813;
unsigned long long int n_816;
unsigned char p2_817;
int size_818;
void* __right_value979 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_c7_820=0;
char* Err_821=0;
void* __right_value980 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c8_822=0;
char* Err_823=0;
void* __right_value981 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c9_824=0;
char* Err_825=0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value986 = (void*)0;
struct sNode* __result_obj__388;
int sline_real_827;
int sline_828;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct buffer* value_829;
char* p_830;
int sline_831;
int sline2_832;
void* __right_value989 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c10_833=0;
char* Err_834=0;
int len_835;
void* __right_value990 = (void*)0;
unsigned int* wstr_836;
char* str_837;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value996 = (void*)0;
struct sNode* __result_obj__391;
int sline_real_839;
int sline_840;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct list$1sNode$ph* exps_841;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct buffer* value_842;
char* p_843;
int sline_844;
int len_845;
void* __right_value1001 = (void*)0;
struct sNode* exp_846;
int sline2_847;
void* __right_value1002 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c11_848=0;
char* Err_849=0;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value1006 = (void*)0;
struct sNode* __result_obj__392;
int sline_real_850;
char* p_851;
_Bool no_comma_852;
void* __right_value1007 = (void*)0;
struct sNode* node_853;
char* p2_854;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct buffer* first_element_source_855;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct list$1sNode$ph* list_elements_856;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct list$1sNode$ph* map_keys_857;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct list$1sNode$ph* map_elements_858;
_Bool no_comma_859;
void* __right_value1016 = (void*)0;
struct sNode* node2_860;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value1023 = (void*)0;
struct sNode* __result_obj__395;
_Bool no_comma_862;
void* __right_value1024 = (void*)0;
struct sNode* node2_863;
void* __right_value1025 = (void*)0;
struct sNode* node3_864;
void* __right_value1026 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c12_865=0;
char* Err_866=0;
void* __right_value1027 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c13_867=0;
char* Err_868=0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value1030 = (void*)0;
struct sNode* __result_obj__396;
_Bool no_comma_869;
void* __right_value1031 = (void*)0;
struct sNode* node2_870;
void* __right_value1032 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c14_871=0;
char* Err_872=0;
void* __right_value1033 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c15_873=0;
char* Err_874=0;
void* __right_value1034 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var39 = (void*)0;
int come_exception_var_c16_875=0;
char* Err_876=0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value1040 = (void*)0;
struct sNode* __result_obj__399;
void* __right_value1041 = (void*)0;
struct sNode* node_878;
struct sNode* __result_obj__400;
struct sNode* __result_obj__401;
memset(&c_800, 0, sizeof(int));
memset(&c_810, 0, sizeof(unsigned int));
memset(&quote_811, 0, sizeof(_Bool));
memset(&size_818, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_737=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_738=info->sline;
        exps_739=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1432, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_740=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1433, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        head_of_last_line_741=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_741) {
                    buffer_trim(value_740,info->p-head_of_last_line_741);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_740,37);
                buffer_append_char(value_740,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_740,92);
                buffer_append_char(value_740,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_740,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_742=0;
                    while(xisdigit(*info->p)&&len_742<3) {
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        len_742++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_740,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_743=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_739,(struct sNode*)come_increment_ref_count(exp_743));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_740,"%s");
                    ((exp_743) ? exp_743 = come_decrement_ref_count2(exp_743, ((struct sNode*)exp_743)->finalize, ((struct sNode*)exp_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_740,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_744=info->sline;
                info->sline=sline_738;
                multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value846=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c1_745=multiple_assign_var24->v1;
                Err_746=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                ((Err_746)?(puts(Err_746),exit(0)):(0));
                come_call_finalizer3(__right_value846,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_746 = come_decrement_ref_count2(Err_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_740,92);
                    buffer_append_char(value_740,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_741=info->p;
                }
                else {
                    buffer_append_char(value_740,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_737;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1572, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value849=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1572, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_740)),(struct list$1sNode$ph*)come_increment_ref_count(exps_739),sline_738,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result_obj__376 = come_increment_ref_count(((struct sNode*)(__right_value854=_inf_value5)));
        come_call_finalizer3(exps_739,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value849,sSStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value854) ? __right_value854 = come_decrement_ref_count2(__right_value854, ((struct sNode*)__right_value854)->finalize, ((struct sNode*)__right_value854)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__376) ? __result_obj__376 = come_decrement_ref_count2(__result_obj__376, ((struct sNode*)__result_obj__376)->finalize, ((struct sNode*)__result_obj__376)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__376;
        come_call_finalizer3(exps_739,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_748=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_749=info->sline;
        value_750=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1582, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_751=info->p;
                sline_752=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_751;
                    info->sline=sline_752;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_750,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_750,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_750,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_753=info->sline;
                info->sline=sline_749;
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value857=err_msg(info,"close \" to make c string value")));
                come_exception_var_c2_754=multiple_assign_var25->v1;
                Err_755=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                ((Err_755)?(puts(Err_755),exit(0)):(0));
                come_call_finalizer3(__right_value857,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                info->sline=sline2_753;
                exit(2);
                (Err_755 = come_decrement_ref_count2(Err_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_750,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_748;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1635, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value860=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1635, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_750)),sline_749,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result_obj__377 = come_increment_ref_count(((struct sNode*)(__right_value861=_inf_value6)));
        come_call_finalizer3(value_750,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value860,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value861) ? __right_value861 = come_decrement_ref_count2(__right_value861, ((struct sNode*)__right_value861)->finalize, ((struct sNode*)__right_value861)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__377) ? __result_obj__377 = come_decrement_ref_count2(__result_obj__377, ((struct sNode*)__result_obj__377)->finalize, ((struct sNode*)__result_obj__377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__377;
        come_call_finalizer3(value_750,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_756=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_757=info->sline;
        value_758=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1645, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        size_759=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_758,*info->p);
                info->p++;
                p_760=info->p;
                sline_761=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_760;
                    info->sline=sline_761;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_758,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_762=0;
                    while(xisdigit(*info->p)&&len_762<3) {
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        len_762++;
                    }
                    size_759++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_758,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                    }
                    size_759++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 110:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 116:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 114:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 118:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 102:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 97:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 98:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        case 92:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                        default:
                        buffer_append_char(value_758,*info->p);
                        info->p++;
                        size_759++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_763=info->sline;
                info->sline=sline_757;
                multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value864=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c3_764=multiple_assign_var26->v1;
                Err_765=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                ((Err_765)?(puts(Err_765),exit(0)):(0));
                come_call_finalizer3(__right_value864,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_765 = come_decrement_ref_count2(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_758,*info->p);
                info->p++;
                size_759++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_756;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1772, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value866=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1772, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_758),size_759,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result_obj__380 = come_increment_ref_count(((struct sNode*)(__right_value870=_inf_value7)));
        come_call_finalizer3(value_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value866,sBufferNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value870) ? __right_value870 = come_decrement_ref_count2(__right_value870, ((struct sNode*)__right_value870)->finalize, ((struct sNode*)__right_value870)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count2(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        come_call_finalizer3(value_758,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_767=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_768=info->sline;
        buf_769=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1781, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_769,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value873=err_msg(info,"require closing / for regex")));
                come_exception_var_c4_770=multiple_assign_var27->v1;
                Err_771=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                ((Err_771)?(puts(Err_771),exit(0)):(0));
                come_call_finalizer3(__right_value873,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(5);
                (Err_771 = come_decrement_ref_count2(Err_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_char(buf_769,*info->p);
                info->p++;
            }
        }
        global_772=(_Bool)0;
        ignore_case_773=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_772=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_773=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_774=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_774=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1825, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value876=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1825, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_769)),sline_768,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_775=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value876,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        params_776=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1827, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1829, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_775))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1830, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_773)?(((struct sNode*)(__right_value884=create_int_node(1,info)))):(((struct sNode*)(__right_value885=create_int_node(0,info)))))))));
        ((__right_value884) ? __right_value884 = come_decrement_ref_count2(__right_value884, ((struct sNode*)__right_value884)->finalize, ((struct sNode*)__right_value884)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value885) ? __right_value885 = come_decrement_ref_count2(__right_value885, ((struct sNode*)__right_value885)->finalize, ((struct sNode*)__right_value885)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1831, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1832, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_772)?(((struct sNode*)(__right_value893=create_int_node(1,info)))):(((struct sNode*)(__right_value894=create_int_node(0,info)))))))));
        ((__right_value893) ? __right_value893 = come_decrement_ref_count2(__right_value893, ((struct sNode*)__right_value893)->finalize, ((struct sNode*)__right_value893)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value894) ? __right_value894 = come_decrement_ref_count2(__right_value894, ((struct sNode*)__right_value894)->finalize, ((struct sNode*)__right_value894)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1833, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1834, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1835, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1836, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_776,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1837, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_777=((void*)0);
        method_block_sline_778=info->sline;
        method_generics_types_779=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1843, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        node_780=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_775),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_776),method_block_777,method_block_sline_778,method_generics_types_779,info));
        if(        !catch_exception_774) {
            __dec_obj159=node_780;
            node_780=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_780)),info));
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_767;
        __result_obj__381 = come_increment_ref_count(node_780);
        come_call_finalizer3(buf_769,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_775) ? obj_775 = come_decrement_ref_count2(obj_775, ((struct sNode*)obj_775)->finalize, ((struct sNode*)obj_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_776,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_779,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_780) ? node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count2(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
        come_call_finalizer3(buf_769,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_775) ? obj_775 = come_decrement_ref_count2(obj_775, ((struct sNode*)obj_775)->finalize, ((struct sNode*)obj_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_776,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_779,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_780) ? node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_781=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_782=info->sline;
        value_783=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1861, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_784=info->p;
                sline_785=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_784;
                    info->sline=sline_785;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_783,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_786=0;
                    while(xisdigit(*info->p)&&len_786<3) {
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        len_786++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_783,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_783,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_787=info->sline;
                info->sline=sline_782;
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value924=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c5_788=multiple_assign_var28->v1;
                Err_789=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_789)?(puts(Err_789),exit(0)):(0));
                come_call_finalizer3(__right_value924,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_789 = come_decrement_ref_count2(Err_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_783,*info->p);
                info->p++;
            }
        }
        global_790=(_Bool)0;
        ignore_case_791=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_790=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_791=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_792=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_792=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1992, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value927=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1992, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_783)),sline_782,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_793=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value927,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        params_794=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1994, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1996, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_793))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1997, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_791)?(((struct sNode*)(__right_value935=create_int_node(1,info)))):(((struct sNode*)(__right_value936=create_int_node(0,info)))))))));
        ((__right_value935) ? __right_value935 = come_decrement_ref_count2(__right_value935, ((struct sNode*)__right_value935)->finalize, ((struct sNode*)__right_value935)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value936) ? __right_value936 = come_decrement_ref_count2(__right_value936, ((struct sNode*)__right_value936)->finalize, ((struct sNode*)__right_value936)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1998, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1999, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_790)?(((struct sNode*)(__right_value944=create_int_node(1,info)))):(((struct sNode*)(__right_value945=create_int_node(0,info)))))))));
        ((__right_value944) ? __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value945) ? __right_value945 = come_decrement_ref_count2(__right_value945, ((struct sNode*)__right_value945)->finalize, ((struct sNode*)__right_value945)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2000, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2001, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2002, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2003, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_794,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2004, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_795=((void*)0);
        method_block_sline_796=info->sline;
        method_generics_types_797=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 2010, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        node_798=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_793),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_794),method_block_795,method_block_sline_796,method_generics_types_797,info));
        if(        !catch_exception_792) {
            __dec_obj160=node_798;
            node_798=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_798)),info));
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_781;
        __result_obj__382 = come_increment_ref_count(node_798);
        come_call_finalizer3(value_783,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_793) ? obj_793 = come_decrement_ref_count2(obj_793, ((struct sNode*)obj_793)->finalize, ((struct sNode*)obj_793)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_794,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_797,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_798) ? node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count2(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__382;
        come_call_finalizer3(value_783,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_793) ? obj_793 = come_decrement_ref_count2(obj_793, ((struct sNode*)obj_793)->finalize, ((struct sNode*)obj_793)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_794,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_797,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_798) ? node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==39) {
        sline_real_799=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_801=0;
                while(xisdigit(*info->p)) {
                    n_801=n_801*8+*info->p-48;
                    info->p++;
                }
                c_800=n_801;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_800=10;
                    info->p++;
                    break;
                    case 116:
                    c_800=9;
                    info->p++;
                    break;
                    case 114:
                    c_800=13;
                    info->p++;
                    break;
                    case 97:
                    c_800=7;
                    info->p++;
                    break;
                    case 102:
                    c_800=12;
                    info->p++;
                    break;
                    case 118:
                    c_800=11;
                    info->p++;
                    break;
                    case 98:
                    c_800=8;
                    info->p++;
                    break;
                    case 92:
                    c_800=92;
                    info->p++;
                    break;
                    case 48:
                    c_800=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_802=0;
                        while(xisdigit(*info->p)) {
                            n_802=n_802*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_800=n_802;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_803[128];
                        memset(&buf_803, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_803,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_804[2];
                            memset(&buf2_804, 0, sizeof(char)                            *(2)                            );
                            buf2_804[0]=*info->p;
                            buf2_804[1]=0;
                            info->p++;
                            strncat(buf_803,buf2_804,128);
                        }
                        n_805=strtoll(buf_803,((void*)0),0);
                        c_800=n_805;
                    }
                    break;
                    default:
                    c_800=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_800=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value973=err_msg(info,"close \' to make character value")));
            come_exception_var_c6_806=multiple_assign_var29->v1;
            Err_807=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            ((Err_807)?(puts(Err_807),exit(0)):(0));
            come_call_finalizer3(__right_value973,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            (Err_807 = come_decrement_ref_count2(Err_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_799;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2139, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value975=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2139, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_800,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result_obj__385 = come_increment_ref_count(((struct sNode*)(__right_value978=_inf_value10)));
            come_call_finalizer3(__right_value975,sCharNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value978) ? __right_value978 = come_decrement_ref_count2(__right_value978, ((struct sNode*)__right_value978)->finalize, ((struct sNode*)__right_value978)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__385) ? __result_obj__385 = come_decrement_ref_count2(__result_obj__385, ((struct sNode*)__result_obj__385)->finalize, ((struct sNode*)__result_obj__385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__385;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_809=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_811=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_812=0;
                while(xisdigit(*info->p)) {
                    n_812=n_812*8+*info->p-48;
                    info->p++;
                }
                c_810=n_812;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_810=10;
                    info->p++;
                    break;
                    case 116:
                    c_810=9;
                    info->p++;
                    break;
                    case 114:
                    c_810=13;
                    info->p++;
                    break;
                    case 97:
                    c_810=7;
                    info->p++;
                    break;
                    case 92:
                    c_810=92;
                    info->p++;
                    break;
                    case 48:
                    c_810=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_813=0;
                        while(xisdigit(*info->p)) {
                            n_813=n_813*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_810=n_813;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_814[128];
                        memset(&buf_814, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_814,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_815[2];
                            memset(&buf2_815, 0, sizeof(char)                            *(2)                            );
                            buf2_815[0]=*info->p;
                            buf2_815[1]=0;
                            info->p++;
                            strncat(buf_814,buf2_815,128);
                        }
                        n_816=strtoll(buf_814,((void*)0),0);
                        c_810=n_816;
                    }
                    break;
                    default:
                    c_810=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_811=(_Bool)0;
            p2_817=*(unsigned char*)info->p;
            if(            p2_817>127) {
                char str_819[4+1];
                memset(&str_819, 0, sizeof(char)                *(4+1)                );
                size_818=((p2_817&128)>>7)+((p2_817&64)>>6)+((p2_817&32)>>5)+((p2_817&16)>>4);
                if(                size_818>4) {
                    multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value979=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    come_exception_var_c7_820=multiple_assign_var30->v1;
                    Err_821=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                    ((Err_821)?(puts(Err_821),exit(0)):(0));
                    come_call_finalizer3(__right_value979,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    info->err_num++;
                    (Err_821 = come_decrement_ref_count2(Err_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    memcpy(str_819,info->p,size_818);
                    str_819[size_818]=0;
                    if(                    mbtowc(&c_810,str_819,size_818)<0) {
                        perror("mbtowc");
                        multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value980=err_msg(info,"invalid utf-8 character. mbtowc")));
                        come_exception_var_c8_822=multiple_assign_var31->v1;
                        Err_823=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        ((Err_823)?(puts(Err_823),exit(0)):(0));
                        come_call_finalizer3(__right_value980,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        info->err_num++;
                        (Err_823 = come_decrement_ref_count2(Err_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        info->p+=size_818;
                    }
                }
            }
            else {
                c_810=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value981=err_msg(info,"close \' to make character value")));
            come_exception_var_c9_824=multiple_assign_var32->v1;
            Err_825=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_825)?(puts(Err_825),exit(0)):(0));
            come_call_finalizer3(__right_value981,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            info->err_num++;
            (Err_825 = come_decrement_ref_count2(Err_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_809;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2281, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value983=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2281, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_810,quote_811,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result_obj__388 = come_increment_ref_count(((struct sNode*)(__right_value986=_inf_value11)));
            come_call_finalizer3(__right_value983,sWCharNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value986) ? __right_value986 = come_decrement_ref_count2(__right_value986, ((struct sNode*)__right_value986)->finalize, ((struct sNode*)__right_value986)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__388) ? __result_obj__388 = come_decrement_ref_count2(__result_obj__388, ((struct sNode*)__result_obj__388)->finalize, ((struct sNode*)__result_obj__388)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__388;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_827=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_828=info->sline;
        value_829=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2292, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_830=info->p;
                sline_831=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_830;
                    info->sline=sline_831;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_829,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_829,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_829,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_832=info->sline;
                info->sline=sline_828;
                multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value989=err_msg(info,"close \" to make c string value")));
                come_exception_var_c10_833=multiple_assign_var33->v1;
                Err_834=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_834)?(puts(Err_834),exit(0)):(0));
                come_call_finalizer3(__right_value989,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_834 = come_decrement_ref_count2(Err_834, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_829,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_835=value_829->len;
        wstr_836=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_835+1)), "06str.c", 2343, "unsigned int*", (void*)0, (void*)0, (void*)0, (void*)0));
        str_837=value_829->buf;
        if(        mbstowcs(wstr_836,str_837,len_835+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_836[len_835]=0;
        info->sline_real=sline_real_827;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2355, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value992=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2355, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(unsigned int*)come_increment_ref_count(wstr_836),sline_828,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result_obj__391 = come_increment_ref_count(((struct sNode*)(__right_value996=_inf_value12)));
        come_call_finalizer3(value_829,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_836 = come_decrement_ref_count2(wstr_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value992,sWStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value996) ? __right_value996 = come_decrement_ref_count2(__right_value996, ((struct sNode*)__right_value996)->finalize, ((struct sNode*)__right_value996)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__391) ? __result_obj__391 = come_decrement_ref_count2(__result_obj__391, ((struct sNode*)__result_obj__391)->finalize, ((struct sNode*)__result_obj__391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__391;
        come_call_finalizer3(value_829,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_836 = come_decrement_ref_count2(wstr_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_839=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_840=info->sline;
        exps_841=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2365, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_842=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2366, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_843=info->p;
                sline_844=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_843;
                    info->sline=sline_844;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_842,37);
                buffer_append_char(value_842,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_842,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_845=0;
                    while(xisdigit(*info->p)&&len_845<3) {
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        len_845++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_842,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_846=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_841,(struct sNode*)come_increment_ref_count(exp_846));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_842,"%s");
                    ((exp_846) ? exp_846 = come_decrement_ref_count2(exp_846, ((struct sNode*)exp_846)->finalize, ((struct sNode*)exp_846)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_842,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_847=info->sline;
                info->sline=sline_840;
                multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1002=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c11_848=multiple_assign_var34->v1;
                Err_849=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                ((Err_849)?(puts(Err_849),exit(0)):(0));
                come_call_finalizer3(__right_value1002,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_849 = come_decrement_ref_count2(Err_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_842,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_839;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2514, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value1005=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2514, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_842)),(struct list$1sNode$ph*)come_increment_ref_count(exps_841),sline_840,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result_obj__392 = come_increment_ref_count(((struct sNode*)(__right_value1006=_inf_value13)));
        come_call_finalizer3(exps_841,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_842,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1005,sSStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1006) ? __right_value1006 = come_decrement_ref_count2(__right_value1006, ((struct sNode*)__right_value1006)->finalize, ((struct sNode*)__right_value1006)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__392) ? __result_obj__392 = come_decrement_ref_count2(__result_obj__392, ((struct sNode*)__result_obj__392)->finalize, ((struct sNode*)__result_obj__392)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__392;
        come_call_finalizer3(exps_841,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_842,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_850=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_851=info->p;
        no_comma_852=info->no_comma;
        info->no_comma=(_Bool)1;
        node_853=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_852;
        p2_854=info->p;
        first_element_source_855=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2533, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(first_element_source_855,p_851,p2_854-p_851);
        buffer_append_char(first_element_source_855,0);
        list_elements_856=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2538, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_keys_857=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2540, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_elements_858=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2541, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(map_keys_857,(struct sNode*)come_increment_ref_count(node_853));
            no_comma_859=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_860=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_859;
            list$1sNode$ph$p_push_back(map_elements_858,(struct sNode*)come_increment_ref_count(node2_860));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2564, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1018=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2564, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_857),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_858),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result_obj__395 = come_increment_ref_count(((struct sNode*)(__right_value1023=_inf_value14)));
                ((node2_860) ? node2_860 = come_decrement_ref_count2(node2_860, ((struct sNode*)node2_860)->finalize, ((struct sNode*)node2_860)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_853) ? node_853 = come_decrement_ref_count2(node_853, ((struct sNode*)node_853)->finalize, ((struct sNode*)node_853)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(first_element_source_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_856,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_857,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_858,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1018,sMapNode_finalize, 0, 1, 0, 0, (void*)0);
                ((__right_value1023) ? __right_value1023 = come_decrement_ref_count2(__right_value1023, ((struct sNode*)__right_value1023)->finalize, ((struct sNode*)__right_value1023)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__395) ? __result_obj__395 = come_decrement_ref_count2(__result_obj__395, ((struct sNode*)__result_obj__395)->finalize, ((struct sNode*)__result_obj__395)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__395;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_862=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_863=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_862;
                    list$1sNode$ph$p_push_back(map_keys_857,(struct sNode*)come_increment_ref_count(node2_863));
                    expected_next_character(58,info);
                    no_comma_862=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_864=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_862;
                    list$1sNode$ph$p_push_back(map_elements_858,(struct sNode*)come_increment_ref_count(node3_864));
                    if(                    *info->p==0) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1026=err_msg(info,"invalid source end")));
                        come_exception_var_c12_865=multiple_assign_var35->v1;
                        Err_866=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        ((Err_866)?(puts(Err_866),exit(0)):(0));
                        come_call_finalizer3(__right_value1026,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_866 = come_decrement_ref_count2(Err_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_863) ? node2_863 = come_decrement_ref_count2(node2_863, ((struct sNode*)node2_863)->finalize, ((struct sNode*)node2_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        ((node3_864) ? node3_864 = come_decrement_ref_count2(node3_864, ((struct sNode*)node3_864)->finalize, ((struct sNode*)node3_864)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                    }
                    else {
                        multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1027=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        come_exception_var_c13_867=multiple_assign_var36->v1;
                        Err_868=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                        ((Err_868)?(puts(Err_868),exit(0)):(0));
                        come_call_finalizer3(__right_value1027,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_868 = come_decrement_ref_count2(Err_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_863) ? node2_863 = come_decrement_ref_count2(node2_863, ((struct sNode*)node2_863)->finalize, ((struct sNode*)node2_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node3_864) ? node3_864 = come_decrement_ref_count2(node3_864, ((struct sNode*)node3_864)->finalize, ((struct sNode*)node3_864)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2609, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1029=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2609, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_857),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_858),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result_obj__396 = come_increment_ref_count(((struct sNode*)(__right_value1030=_inf_value15)));
                ((node2_860) ? node2_860 = come_decrement_ref_count2(node2_860, ((struct sNode*)node2_860)->finalize, ((struct sNode*)node2_860)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_853) ? node_853 = come_decrement_ref_count2(node_853, ((struct sNode*)node_853)->finalize, ((struct sNode*)node_853)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(first_element_source_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_856,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_857,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_858,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1029,sMapNode_finalize, 0, 1, 0, 0, (void*)0);
                ((__right_value1030) ? __right_value1030 = come_decrement_ref_count2(__right_value1030, ((struct sNode*)__right_value1030)->finalize, ((struct sNode*)__right_value1030)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__396) ? __result_obj__396 = come_decrement_ref_count2(__result_obj__396, ((struct sNode*)__result_obj__396)->finalize, ((struct sNode*)__result_obj__396)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__396;
            }
            ((node2_860) ? node2_860 = come_decrement_ref_count2(node2_860, ((struct sNode*)node2_860)->finalize, ((struct sNode*)node2_860)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(list_elements_856,(struct sNode*)come_increment_ref_count(node_853));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(list_elements_856,(struct sNode*)come_increment_ref_count(node_853));
            while((_Bool)1) {
                no_comma_869=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_870=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_869;
                list$1sNode$ph$p_push_back(list_elements_856,(struct sNode*)come_increment_ref_count(node2_870));
                if(                *info->p==0) {
                    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1032=err_msg(info,"invalid source end")));
                    come_exception_var_c14_871=multiple_assign_var37->v1;
                    Err_872=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                    ((Err_872)?(puts(Err_872),exit(0)):(0));
                    come_call_finalizer3(__right_value1032,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_872 = come_decrement_ref_count2(Err_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_870) ? node2_870 = come_decrement_ref_count2(node2_870, ((struct sNode*)node2_870)->finalize, ((struct sNode*)node2_870)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1033=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    come_exception_var_c15_873=multiple_assign_var38->v1;
                    Err_874=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_874)?(puts(Err_874),exit(0)):(0));
                    come_call_finalizer3(__right_value1033,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_874 = come_decrement_ref_count2(Err_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                ((node2_870) ? node2_870 = come_decrement_ref_count2(node2_870, ((struct sNode*)node2_870)->finalize, ((struct sNode*)node2_870)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            multiple_assign_var39=((struct tuple2$2int$char$ph*)(__right_value1034=err_msg(info,"invalid character(5)(%c)",*info->p)));
            come_exception_var_c16_875=multiple_assign_var39->v1;
            Err_876=(char*)come_increment_ref_count(multiple_assign_var39->v2);
            ((Err_876)?(puts(Err_876),exit(0)):(0));
            come_call_finalizer3(__right_value1034,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_876 = come_decrement_ref_count2(Err_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sNode$ph$p_length(list_elements_856)>0) {
            info->sline_real=sline_real_850;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2661, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1036=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2661, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_856),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result_obj__399 = come_increment_ref_count(((struct sNode*)(__right_value1040=_inf_value16)));
            ((node_853) ? node_853 = come_decrement_ref_count2(node_853, ((struct sNode*)node_853)->finalize, ((struct sNode*)node_853)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(first_element_source_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_856,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_857,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_858,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1036,sListNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1040) ? __right_value1040 = come_decrement_ref_count2(__right_value1040, ((struct sNode*)__right_value1040)->finalize, ((struct sNode*)__right_value1040)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__399) ? __result_obj__399 = come_decrement_ref_count2(__result_obj__399, ((struct sNode*)__result_obj__399)->finalize, ((struct sNode*)__result_obj__399)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__399;
        }
        else {
        }
        ((node_853) ? node_853 = come_decrement_ref_count2(node_853, ((struct sNode*)node_853)->finalize, ((struct sNode*)node_853)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(first_element_source_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_856,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_857,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_858,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_878=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__400 = come_increment_ref_count(node_878);
        ((node_878) ? node_878 = come_decrement_ref_count2(node_878, ((struct sNode*)node_878)->finalize, ((struct sNode*)node_878)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__400) ? __result_obj__400 = come_decrement_ref_count2(__result_obj__400, ((struct sNode*)__result_obj__400)->finalize, ((struct sNode*)__result_obj__400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__400;
        ((node_878) ? node_878 = come_decrement_ref_count2(node_878, ((struct sNode*)node_878)->finalize, ((struct sNode*)node_878)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__401 = come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__401) ? __result_obj__401 = come_decrement_ref_count2(__result_obj__401, ((struct sNode*)__result_obj__401)->finalize, ((struct sNode*)__result_obj__401)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__401;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__374;
void* __right_value850 = (void*)0;
struct sSStringNode* result_747;
void* __right_value851 = (void*)0;
char* __dec_obj154;
void* __right_value852 = (void*)0;
char* __dec_obj155;
void* __right_value853 = (void*)0;
struct list$1sNode$ph* __dec_obj156;
struct sSStringNode* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = (void*)0;
        return __result_obj__374;
    }
    result_747=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_747->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_747->sname;
        result_747->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_747->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj155=result_747->value;
        result_747->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj156=result_747->exps;
        result_747->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj156,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__375 = result_747;
    come_call_finalizer3(result_747,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__375;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__378;
void* __right_value867 = (void*)0;
struct sBufferNode* result_766;
void* __right_value868 = (void*)0;
char* __dec_obj157;
void* __right_value869 = (void*)0;
struct buffer* __dec_obj158;
struct sBufferNode* __result_obj__379;
    if(    self==(void*)0) {
        __result_obj__378 = (void*)0;
        return __result_obj__378;
    }
    result_766=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_766->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_766->sname;
        result_766->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_766->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj158=result_766->value;
        result_766->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_766->size=self->size;
    }
    __result_obj__379 = result_766;
    come_call_finalizer3(result_766,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__379;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__383;
void* __right_value976 = (void*)0;
struct sCharNode* result_808;
void* __right_value977 = (void*)0;
char* __dec_obj161;
struct sCharNode* __result_obj__384;
    if(    self==(void*)0) {
        __result_obj__383 = (void*)0;
        return __result_obj__383;
    }
    result_808=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_808->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_808->sname;
        result_808->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_808->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_808->value=self->value;
    }
    __result_obj__384 = result_808;
    come_call_finalizer3(result_808,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__384;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__386;
void* __right_value984 = (void*)0;
struct sWCharNode* result_826;
void* __right_value985 = (void*)0;
char* __dec_obj162;
struct sWCharNode* __result_obj__387;
    if(    self==(void*)0) {
        __result_obj__386 = (void*)0;
        return __result_obj__386;
    }
    result_826=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_826->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_826->sname;
        result_826->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_826->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_826->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_826->quote=self->quote;
    }
    __result_obj__387 = result_826;
    come_call_finalizer3(result_826,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__387;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__389;
void* __right_value993 = (void*)0;
struct sWStringNode* result_838;
void* __right_value994 = (void*)0;
char* __dec_obj163;
void* __right_value995 = (void*)0;
unsigned int* __dec_obj164;
struct sWStringNode* __result_obj__390;
    if(    self==(void*)0) {
        __result_obj__389 = (void*)0;
        return __result_obj__389;
    }
    result_838=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_838->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_838->sname;
        result_838->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_838->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj164=result_838->value;
        result_838->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__390 = result_838;
    come_call_finalizer3(result_838,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__390;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__393;
void* __right_value1019 = (void*)0;
struct sMapNode* result_861;
void* __right_value1020 = (void*)0;
char* __dec_obj165;
void* __right_value1021 = (void*)0;
struct list$1sNode$ph* __dec_obj166;
void* __right_value1022 = (void*)0;
struct list$1sNode$ph* __dec_obj167;
struct sMapNode* __result_obj__394;
    if(    self==(void*)0) {
        __result_obj__393 = (void*)0;
        return __result_obj__393;
    }
    result_861=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_861->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj165=result_861->sname;
        result_861->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_861->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj166=result_861->map_key_elements;
        result_861->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj166,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj167=result_861->map_elements;
        result_861->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_elements));
        come_call_finalizer3(__dec_obj167,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__394 = result_861;
    come_call_finalizer3(result_861,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__394;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__397;
void* __right_value1037 = (void*)0;
struct sListNode* result_877;
void* __right_value1038 = (void*)0;
char* __dec_obj168;
void* __right_value1039 = (void*)0;
struct list$1sNode$ph* __dec_obj169;
struct sListNode* __result_obj__398;
    if(    self==(void*)0) {
        __result_obj__397 = (void*)0;
        return __result_obj__397;
    }
    result_877=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_877->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_877->sname;
        result_877->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_877->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj169=result_877->list_elements;
        result_877->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->list_elements));
        come_call_finalizer3(__dec_obj169,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__398 = result_877;
    come_call_finalizer3(result_877,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__398;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_879;
char* p_880;
char* name_881;
void* __right_value1044 = (void*)0;
char* __dec_obj170;
_Bool no_comma_882;
void* __right_value1045 = (void*)0;
struct sNode* node_883;
void* __right_value1046 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c17_887=0;
char* Err_888=0;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1063 = (void*)0;
struct sNode* __result_obj__407;
name_881 = (void*)0;
    tuple_elements_879=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2676, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_880=info->p;
        if(        named_tuple) {
            __dec_obj170=name_881;
            name_881=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_882=info->no_comma;
        info->no_comma=(_Bool)1;
        node_883=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj171=node_883;
        node_883=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_883),info));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_882;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(tuple_elements_879,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2695, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_881)),(struct sNode*)come_increment_ref_count(node_883))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_881 = come_decrement_ref_count2(name_881, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_883) ? node_883 = come_decrement_ref_count2(node_883, ((struct sNode*)node_883)->finalize, ((struct sNode*)node_883)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        else {
            multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1053=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            come_exception_var_c17_887=multiple_assign_var40->v1;
            Err_888=(char*)come_increment_ref_count(multiple_assign_var40->v2);
            ((Err_888)?(puts(Err_888),exit(0)):(0));
            come_call_finalizer3(__right_value1053,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_888 = come_decrement_ref_count2(Err_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (name_881 = come_decrement_ref_count2(name_881, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_883) ? node_883 = come_decrement_ref_count2(node_883, ((struct sNode*)node_883)->finalize, ((struct sNode*)node_883)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2712, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1055=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2712, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_879),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result_obj__407 = come_increment_ref_count(((struct sNode*)(__right_value1063=_inf_value17)));
    come_call_finalizer3(tuple_elements_879,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1055,sTupleNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1063) ? __right_value1063 = come_decrement_ref_count2(__right_value1063, ((struct sNode*)__right_value1063)->finalize, ((struct sNode*)__right_value1063)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__407) ? __result_obj__407 = come_decrement_ref_count2(__result_obj__407, ((struct sNode*)__result_obj__407)->finalize, ((struct sNode*)__result_obj__407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__407;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value1047 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_884;
struct tuple2$2char$phsNode$ph* __dec_obj172;
void* __right_value1048 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_885;
struct tuple2$2char$phsNode$ph* __dec_obj173;
void* __right_value1049 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_886;
struct tuple2$2char$phsNode$ph* __dec_obj174;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__402;
    if(    self->len==0) {
        litem_884=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1047=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1493, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_884->prev=((void*)0);
        litem_884->next=((void*)0);
        __dec_obj172=litem_884->item;
        litem_884->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj172,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_884;
        self->head=litem_884;
    }
    else if(    self->len==1) {
        litem_885=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1048=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1503, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_885->prev=self->head;
        litem_885->next=((void*)0);
        __dec_obj173=litem_885->item;
        litem_885->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj173,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_885;
        self->head->next=litem_885;
    }
    else {
        litem_886=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1049=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1513, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_886->prev=self->tail;
        litem_886->next=((void*)0);
        __dec_obj174=litem_886->item;
        litem_886->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj174,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_886;
        self->tail=litem_886;
    }
    self->len++;
    __result_obj__402 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__402;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__403;
void* __right_value1056 = (void*)0;
struct sTupleNode* result_889;
void* __right_value1057 = (void*)0;
char* __dec_obj175;
void* __right_value1062 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj176;
struct sTupleNode* __result_obj__406;
    if(    self==(void*)0) {
        __result_obj__403 = (void*)0;
        return __result_obj__403;
    }
    result_889=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_889->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_889->sname;
        result_889->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_889->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj176=result_889->tuple_elements;
        result_889->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj176,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__406 = result_889;
    come_call_finalizer3(result_889,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__406;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__404;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_890;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_891;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__405;
    if(    self==((void*)0)) {
        __result_obj__404 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__404,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__404;
    }
    result_890=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1404, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_891=self->head;
    while(it_891!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_890,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_891->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_890,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_891->item)));
        }
        it_891=it_891->next;
    }
    __result_obj__405 = come_increment_ref_count(result_890);
    come_call_finalizer3(result_890,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__405,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__405;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
struct list$1sNode$ph* tuple_elements_892;
struct sNode* node_893;
void* __right_value1066 = (void*)0;
struct sNode* node2_894;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1072 = (void*)0;
struct sNode* __result_obj__410;
    tuple_elements_892=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2717, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    node_893=(struct sNode*)come_increment_ref_count(exp);
    list$1sNode$ph$p_push_back(tuple_elements_892,(struct sNode*)come_increment_ref_count(node_893));
    node2_894=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph$p_push_back(tuple_elements_892,(struct sNode*)come_increment_ref_count(node2_894));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2727, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1068=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2727, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_892),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result_obj__410 = come_increment_ref_count(((struct sNode*)(__right_value1072=_inf_value18)));
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(tuple_elements_892,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_893) ? node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_894) ? node2_894 = come_decrement_ref_count2(node2_894, ((struct sNode*)node2_894)->finalize, ((struct sNode*)node2_894)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1068,sSomeNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1072) ? __right_value1072 = come_decrement_ref_count2(__right_value1072, ((struct sNode*)__right_value1072)->finalize, ((struct sNode*)__right_value1072)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__410) ? __result_obj__410 = come_decrement_ref_count2(__result_obj__410, ((struct sNode*)__result_obj__410)->finalize, ((struct sNode*)__result_obj__410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__410;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
struct sSomeNode* __result_obj__408;
void* __right_value1069 = (void*)0;
struct sSomeNode* result_895;
void* __right_value1070 = (void*)0;
char* __dec_obj177;
void* __right_value1071 = (void*)0;
struct list$1sNode$ph* __dec_obj178;
struct sSomeNode* __result_obj__409;
    if(    self==(void*)0) {
        __result_obj__408 = (void*)0;
        return __result_obj__408;
    }
    result_895=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_895->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj177=result_895->sname;
        result_895->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_895->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj178=result_895->tuple_elements;
        result_895->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj178,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__409 = result_895;
    come_call_finalizer3(result_895,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__409;
}

struct sNode* parse_some(struct sInfo* info){
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct list$1sNode$ph* tuple_elements_896;
void* __right_value1075 = (void*)0;
struct sNode* node_897;
void* __right_value1076 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value1077 = (void*)0;
struct sNode* node2_898;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1080 = (void*)0;
struct sNode* __result_obj__411;
    tuple_elements_896=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2732, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_897=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj179=node_897;
    node_897=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_897),info));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNode$ph$p_push_back(tuple_elements_896,(struct sNode*)come_increment_ref_count(node_897));
    node2_898=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph$p_push_back(tuple_elements_896,(struct sNode*)come_increment_ref_count(node2_898));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2745, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1079=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2745, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_896),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result_obj__411 = come_increment_ref_count(((struct sNode*)(__right_value1080=_inf_value19)));
    come_call_finalizer3(tuple_elements_896,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_897) ? node_897 = come_decrement_ref_count2(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_898) ? node2_898 = come_decrement_ref_count2(node2_898, ((struct sNode*)node2_898)->finalize, ((struct sNode*)node2_898)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1079,sSomeNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1080) ? __right_value1080 = come_decrement_ref_count2(__right_value1080, ((struct sNode*)__right_value1080)->finalize, ((struct sNode*)__right_value1080)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count2(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__411;
}

struct sNode* parse_none(struct sInfo* info){
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct list$1sNode$ph* tuple_elements_899;
void* __right_value1083 = (void*)0;
struct sNode* node_900;
void* __right_value1084 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value1085 = (void*)0;
struct sNode* node2_901;
struct sNode* node3_902;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1091 = (void*)0;
struct sNode* __result_obj__414;
    tuple_elements_899=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2750, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_900=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj180=node_900;
    node_900=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_900),info));
    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_901=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNode$ph$p_push_back(tuple_elements_899,(struct sNode*)come_increment_ref_count(node2_901));
    node3_902=(struct sNode*)come_increment_ref_count(node_900);
    list$1sNode$ph$p_push_back(tuple_elements_899,(struct sNode*)come_increment_ref_count(node3_902));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2765, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1087=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2765, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_899),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result_obj__414 = come_increment_ref_count(((struct sNode*)(__right_value1091=_inf_value20)));
    come_call_finalizer3(tuple_elements_899,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_900) ? node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_901) ? node2_901 = come_decrement_ref_count2(node2_901, ((struct sNode*)node2_901)->finalize, ((struct sNode*)node2_901)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node3_902) ? node3_902 = come_decrement_ref_count2(node3_902, ((struct sNode*)node3_902)->finalize, ((struct sNode*)node3_902)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1087,sNoneNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1091) ? __right_value1091 = come_decrement_ref_count2(__right_value1091, ((struct sNode*)__right_value1091)->finalize, ((struct sNode*)__right_value1091)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count2(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__414;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
struct sNoneNode* __result_obj__412;
void* __right_value1088 = (void*)0;
struct sNoneNode* result_903;
void* __right_value1089 = (void*)0;
char* __dec_obj181;
void* __right_value1090 = (void*)0;
struct list$1sNode$ph* __dec_obj182;
struct sNoneNode* __result_obj__413;
    if(    self==(void*)0) {
        __result_obj__412 = (void*)0;
        return __result_obj__412;
    }
    result_903=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_903->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result_903->sname;
        result_903->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_903->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj182=result_903->tuple_elements;
        result_903->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj182,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__413 = result_903;
    come_call_finalizer3(result_903,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__413;
}

