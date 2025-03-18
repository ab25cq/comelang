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

extern struct list$1sRightValueObject$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1char$ph* multiple_assign;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare;
    char* attribute;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNode$phsNode$ph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNode$phsNode$ph$ph
{
    struct tuple2$2sNode$phsNode$ph* item;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* next;
};

struct list$1tuple2$2sNode$phsNode$ph$ph
{
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* head;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNode$phsNode$ph$ph* initializer;
};

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct tuple3$3sType$phchar$phvoid$p
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self);
static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self);
static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static unsigned int tuple2$2sNode$phsNode$ph_get_hash_key(struct tuple2$2sNode$phsNode$ph* self);
static _Bool tuple2$2sNode$phsNode$ph_equals(struct tuple2$2sNode$phsNode$ph* left, struct tuple2$2sNode$phsNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self);
static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self);
static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self);
static _Bool tuple3$3sType$phchar$phsNode$ph_equals(struct tuple3$3sType$phchar$phsNode$ph* left, struct tuple3$3sType$phchar$phsNode$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self);
static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self);
static _Bool tuple3$3sType$phchar$phvoid$p_equals(struct tuple3$3sType$phchar$phvoid$p* left, struct tuple3$3sType$phchar$phvoid$p* right);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
char* __dec_obj23;
void* __right_value271 = (void*)0;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
void* __right_value272 = (void*)0;
struct list$1char$ph* __dec_obj50;
void* __right_value284 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj57;
char* __dec_obj58;
struct sStoreNode* __result_obj__218;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value231,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj23=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj48=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj49=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    ((void*)0);
    __dec_obj50=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, multiple_assign));
    /*b*/ come_call_finalizer3(__dec_obj50,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    ((void*)0);
    __dec_obj57=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, multiple_declare));
    /*b*/ come_call_finalizer3(__dec_obj57,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj58=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__218 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__218,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value285 = (void*)0;
char* __result_obj__219;
    __result_obj__219 = come_increment_ref_count(((char*)(__right_value285=__builtin_string("sStoreNode"))));
    (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__219;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sVar* var__311;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_333=0;
char* Err_334=0;
_Bool _if_conditional1;
_Bool __result_obj__229;
void* __right_value291 = (void*)0;
struct sType* type_335;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_336;
struct tuple3$3sType$phchar$phsNode$ph* it_339;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var2 = (void*)0;
struct sType* type_342=0;
char* var_name_343=0;
struct sNode* right_value_344=0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_2_345=0;
char* Err_346=0;
_Bool _if_conditional2;
_Bool __result_obj__236;
void* __right_value298 = (void*)0;
struct sType* left_type_347;
_Bool Value_348;
_Bool __result_obj__237;
void* __right_value299 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
_Bool Value_350;
void* __right_value303 = (void*)0;
struct CVALUE* right_value_351;
struct sType* right_type_352;
int i_353;
struct list$1char$ph* o2_saved_354;
char* it_357;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sVar* var__360;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sType* right_type2_361;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
char* multiple_var_name_366;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
char* __dec_obj59;
struct list$1char$ph* o2_saved_367;
char* it_368;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* right_type2_369;
struct sVar* var__370;
void* __right_value315 = (void*)0;
struct sType* var_type_371;
void* __right_value316 = (void*)0;
struct sType* left_type_372;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct CVALUE* right_value2_373;
void* __right_value319 = (void*)0;
char* __dec_obj60;
void* __right_value320 = (void*)0;
struct sType* __dec_obj61;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value_374;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_375=0;
char* Err_376=0;
_Bool _if_conditional3;
_Bool __result_obj__246;
void* __right_value326 = (void*)0;
char* __dec_obj62;
void* __right_value327 = (void*)0;
char* __dec_obj63;
void* __right_value328 = (void*)0;
struct sType* __dec_obj64;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sVar* var__377;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_4_378=0;
char* Err_379=0;
_Bool _if_conditional4;
_Bool __result_obj__247;
void* __right_value335 = (void*)0;
struct sType* type_380;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_5_381=0;
char* Err_382=0;
_Bool _if_conditional5;
_Bool __result_obj__248;
void* __right_value338 = (void*)0;
struct sType* left_type_383;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1sNode$ph* o2_saved_384;
struct sNode* it_387;
_Bool Value_390;
void* __right_value341 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c1_391=0;
char* Err_392=0;
void* __right_value342 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value347 = (void*)0;
char* __dec_obj65;
void* __right_value348 = (void*)0;
struct sType* __dec_obj66;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sVar* var__398;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* type_399;
void* __right_value357 = (void*)0;
_Bool Value_400;
void* __right_value358 = (void*)0;
_Bool array_initializer_401;
void* __right_value359 = (void*)0;
_Bool struct_initializer_402;
void* __right_value360 = (void*)0;
_Bool new_channel_403;
void* __right_value361 = (void*)0;
struct CVALUE* right_value_404;
struct sType* right_type_405;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* var_type_406;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* left_type_407;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sVar* var__408;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_409;
void* __right_value371 = (void*)0;
char* __dec_obj70;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sVar* var__410;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_411;
void* __right_value377 = (void*)0;
char* __dec_obj71;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_6_412=0;
char* Err_413=0;
_Bool _if_conditional6;
_Bool __result_obj__256;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value384 = (void*)0;
char* __dec_obj72;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var9 = (void*)0;
_Bool come_exception_var_7_415=0;
char* Err_416=0;
_Bool _if_conditional7;
_Bool __result_obj__257;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value391 = (void*)0;
char* __dec_obj73;
void* __right_value392 = (void*)0;
struct sType* __dec_obj74;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value396 = (void*)0;
char* __dec_obj75;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sType* __dec_obj76;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_8_419=0;
char* Err_420=0;
_Bool _if_conditional8;
_Bool __result_obj__258;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_421;
void* __right_value406 = (void*)0;
char* __dec_obj77;
void* __right_value407 = (void*)0;
struct sType* __dec_obj78;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_9_422=0;
char* Err_423=0;
_Bool _if_conditional9;
_Bool __result_obj__259;
void* __right_value411 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_10_424=0;
char* Err_425=0;
_Bool _if_conditional10;
_Bool __result_obj__260;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct CVALUE* come_value_426;
void* __right_value415 = (void*)0;
char* __dec_obj79;
void* __right_value416 = (void*)0;
struct sType* __dec_obj80;
_Bool Value_427;
void* __right_value417 = (void*)0;
_Bool new_channel_428;
void* __right_value418 = (void*)0;
struct CVALUE* right_value_429;
struct sType* right_type_430;
struct sClass* current_stack_frame_struct_431;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
_Bool _if_conditional11;
struct sVar* parent_var_432;
struct sType* left_type_433;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_11_434=0;
char* Err_435=0;
_Bool _if_conditional12;
_Bool __result_obj__261;
void* __right_value424 = (void*)0;
char* c_value_436;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value427 = (void*)0;
char* __dec_obj81;
void* __right_value428 = (void*)0;
char* __dec_obj82;
void* __right_value429 = (void*)0;
struct sType* __dec_obj83;
_Bool __result_obj__262;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_12_438=0;
char* Err_439=0;
_Bool _if_conditional13;
_Bool __result_obj__263;
void* __right_value433 = (void*)0;
char* c_value_440;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value436 = (void*)0;
char* __dec_obj84;
void* __right_value437 = (void*)0;
char* __dec_obj85;
void* __right_value438 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__264;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_13_442=0;
char* Err_443=0;
_Bool _if_conditional14;
_Bool __result_obj__265;
void* __right_value442 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_14_444=0;
char* Err_445=0;
_Bool _if_conditional15;
_Bool __result_obj__266;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_446;
void* __right_value445 = (void*)0;
char* __dec_obj87;
void* __right_value446 = (void*)0;
char* __dec_obj88;
void* __right_value447 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__267;
struct sVar* var__447;
void* __right_value448 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_15_448=0;
char* Err_449=0;
_Bool _if_conditional16;
_Bool __result_obj__268;
void* __right_value449 = (void*)0;
struct sType* __dec_obj90;
void* __right_value450 = (void*)0;
struct sType* left_type_450;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_16_451=0;
char* Err_452=0;
_Bool _if_conditional17;
_Bool __result_obj__269;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct CVALUE* come_value_453;
void* __right_value456 = (void*)0;
char* __dec_obj91;
void* __right_value457 = (void*)0;
struct sType* __dec_obj92;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_17_454=0;
char* Err_455=0;
_Bool _if_conditional18;
_Bool __result_obj__270;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct CVALUE* come_value_456;
void* __right_value463 = (void*)0;
char* __dec_obj93;
void* __right_value464 = (void*)0;
struct sType* __dec_obj94;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_18_457=0;
char* Err_458=0;
_Bool _if_conditional19;
_Bool __result_obj__271;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_459;
void* __right_value470 = (void*)0;
char* __dec_obj95;
void* __right_value471 = (void*)0;
struct sType* __dec_obj96;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value474 = (void*)0;
char* __dec_obj97;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* __dec_obj98;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var21 = (void*)0;
_Bool come_exception_var_19_461=0;
char* Err_462=0;
_Bool _if_conditional20;
_Bool __result_obj__272;
void* __right_value481 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_20_463=0;
char* Err_464=0;
_Bool _if_conditional21;
_Bool __result_obj__273;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value484 = (void*)0;
char* __dec_obj99;
void* __right_value485 = (void*)0;
struct sType* __dec_obj100;
    if(    self->multiple_declare) {
        var__311=((struct sVar*)(__right_value287=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value286=__builtin_string(self->name))))));
        (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value287,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__311) {
            if(            var__311->mType->mHeap) {
                free_object(((struct sType*)(__right_value288=come_call_cloner(sType_clone, var__311->mType))),var__311->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value288,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value289=__builtin_string(self->name))));
            (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value290=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_1_333=multiple_assign_var1->v1;
            Err_334=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            (_if_conditional1=(Err_334)),            /*c*/ come_call_finalizer3(__right_value290,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                __result_obj__229 = (_Bool)1;
                (Err_334 = come_decrement_ref_count(Err_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__229;
            }
            else {
            }
            (Err_334 = come_decrement_ref_count(Err_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_335=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        for(        o2_saved_336=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_339=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin((o2_saved_336));        !list$1tuple3$3sType$phchar$phsNode$ph$ph_end((o2_saved_336));        it_339=list$1tuple3$3sType$phchar$phsNode$ph$ph_next((o2_saved_336))        ){
            multiple_assign_var2=it_339;
            type_342=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            var_name_343=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            right_value_344=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v3);
            var__311=((struct sVar*)(__right_value293=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value292=__builtin_string(var_name_343))))));
            (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value293,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            var__311) {
                if(                var__311->mType->mHeap) {
                    free_object(((struct sType*)(__right_value294=come_call_cloner(sType_clone, var__311->mType))),var__311->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value294,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value295=__builtin_string(var_name_343))));
                (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_variable_to_table(var_name_343,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_342)),info,(_Bool)0);
            var__311=get_variable_from_table(info->lv_table,var_name_343);
            if(            var__311==((void*)0)) {
                multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value297=err_msg(info,"var not found(%s)(ZY) at definition of variable",it_339)));
                come_exception_var_2_345=multiple_assign_var3->v1;
                Err_346=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_346)),                /*c*/ come_call_finalizer3(__right_value297,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    __result_obj__236 = (_Bool)1;
                    (Err_346 = come_decrement_ref_count(Err_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_343 = come_decrement_ref_count(var_name_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_344) ? right_value_344 = come_decrement_ref_count(right_value_344, ((struct sNode*)right_value_344)->finalize, ((struct sNode*)right_value_344)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_336,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_335,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__236;
                }
                else {
                }
                (Err_346 = come_decrement_ref_count(Err_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            left_type_347=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__311->mType));
            if(            right_value_344) {
                Value_348=node_compile(right_value_344,info);
                if(                !Value_348) {
                    __result_obj__237 = (_Bool)0;
                    /*c*/ come_call_finalizer3(type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_343 = come_decrement_ref_count(var_name_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_344) ? right_value_344 = come_decrement_ref_count(right_value_344, ((struct sNode*)right_value_344)->finalize, ((struct sNode*)right_value_344)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(left_type_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_336,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_335,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__237;
                }
                else {
                }
                come_value_349=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value300=make_define_var(left_type_347,var__311->mCValueName,(_Bool)0,info))),come_value_349->c_value);
                (__right_value300 = come_decrement_ref_count(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__311->mCValueName,((char*)(__right_value301=make_type_name_string(left_type_347,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value302=make_define_var(left_type_347,var__311->mCValueName,(_Bool)0,info))));
                (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_343 = come_decrement_ref_count(var_name_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_value_344) ? right_value_344 = come_decrement_ref_count(right_value_344, ((struct sNode*)right_value_344)->finalize, ((struct sNode*)right_value_344)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_type_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_336,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_335,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_350=node_compile(self->right_value,info);
        if(        !Value_350) {
            return (_Bool)0;
        }
        else {
        }
        right_value_351=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_352=right_value_351->type;
        if(        right_type_352->mNoSolvedGenericsType) {
            right_type_352=right_type_352->mNoSolvedGenericsType;
        }
        i_353=0;
        for(        o2_saved_354=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_357=list$1char$ph_begin((o2_saved_354));        !list$1char$ph_end((o2_saved_354));        it_357=list$1char$ph_next((o2_saved_354))        ){
            if(            i_353<list$1sType$ph_length(right_type_352->mGenericsTypes)) {
                var__360=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value304=__builtin_string(it_357)))));
                (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                var__360) {
                    if(                    var__360->mType->mHeap) {
                        free_object(((struct sType*)(__right_value306=come_call_cloner(sType_clone, var__360->mType))),var__360->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value306,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value307=__builtin_string(it_357))));
                    (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                right_type2_361=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(right_type_352->mGenericsTypes,i_353));
                add_variable_to_table(it_357,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_361)),info,(_Bool)0);
                /*c*/ come_call_finalizer3(var__360,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_361,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            i_353++;
        }
        /*c*/ come_call_finalizer3(o2_saved_354,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        static int num_multiple_var_365=0;
        multiple_var_name_366=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_365));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value311=make_define_var(right_value_351->type,multiple_var_name_366,(_Bool)0,info))));
        (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_366,right_value_351->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_366,right_value_351->c_value);
        }
        __dec_obj59=right_value_351->c_value,
        right_value_351->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, multiple_var_name_366));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        i_353=0;
        for(        o2_saved_367=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_368=list$1char$ph_begin((o2_saved_367));        !list$1char$ph_end((o2_saved_367));        it_368=list$1char$ph_next((o2_saved_367))        ){
            if(            i_353<list$1sType$ph_length(right_type_352->mGenericsTypes)) {
                right_type2_369=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value313=list$1sType$ph$p_operator_load_element(right_type_352->mGenericsTypes,i_353)))));
                /*c*/ come_call_finalizer3(__right_value313,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                var__370=get_variable_from_table(info->lv_table,it_368);
                var_type_371=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__370->mType));
                var_type_371->mStatic=(_Bool)0;
                left_type_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__370->mType));
                right_value2_373=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 139, "struct CVALUE*"))));
                __dec_obj60=right_value2_373->c_value,
                right_value2_373->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_351->c_value,i_353+1));
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj61=right_value2_373->type,
                right_value2_373->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_369));
                /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                right_value2_373->var=((void*)0);
                come_value_374=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 145, "struct CVALUE*"))));
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value325=check_assign_type(((char*)(__right_value324=xsprintf("\%s is assining to}",((char*)(__right_value323=string_to_string(self->name)))))),left_type_372,right_type2_369,come_value_374,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_3_375=multiple_assign_var4->v1;
                Err_376=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_376)),                (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value325,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    __result_obj__246 = (_Bool)1;
                    /*c*/ come_call_finalizer3(right_type2_369,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(var_type_371,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_value2_373,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_374,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (Err_376 = come_decrement_ref_count(Err_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(o2_saved_367,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_value_351,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (multiple_var_name_366 = come_decrement_ref_count(multiple_var_name_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__246;
                }
                else {
                }
                if(                right_type2_369->mHeap&&left_type_372->mHeap&&left_type_372->mPointerNum>0&&right_type2_369->mPointerNum>0) {
                    std_move(left_type_372,right_type2_369,right_value2_373,info,(_Bool)0);
                    __dec_obj62=come_value_374->c_value,
                    come_value_374->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__370->mCValueName,right_value2_373->c_value));
                    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj63=come_value_374->c_value,
                    come_value_374->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__370->mCValueName,right_value2_373->c_value));
                    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj64=come_value_374->type,
                come_value_374->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_372));
                /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_374->var=var__370;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value329=make_define_var(left_type_372,var__370->mCValueName,(_Bool)0,info))));
                (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_374->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_374->c_value);
                }
                /*c*/ come_call_finalizer3(right_type2_369,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_371,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value2_373,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_374,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_376 = come_decrement_ref_count(Err_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            i_353++;
        }
        /*c*/ come_call_finalizer3(o2_saved_367,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_value_351,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (multiple_var_name_366 = come_decrement_ref_count(multiple_var_name_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)) {
        var__377=((struct sVar*)(__right_value331=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value330=__builtin_string(self->name))))));
        (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value331,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__377) {
            if(            var__377->mType->mHeap) {
                free_object(((struct sType*)(__right_value332=come_call_cloner(sType_clone, var__377->mType))),var__377->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value332,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value333=__builtin_string(self->name))));
            (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value334=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_4_378=multiple_assign_var5->v1;
            Err_379=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            if(            (_if_conditional4=(Err_379)),            /*c*/ come_call_finalizer3(__right_value334,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__247 = (_Bool)1;
                (Err_379 = come_decrement_ref_count(Err_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__247;
            }
            else {
            }
            (Err_379 = come_decrement_ref_count(Err_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_380=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_380)),info,(_Bool)0);
        var__377=get_variable_from_table(info->lv_table,self->name);
        if(        var__377==((void*)0)) {
            var__377=get_variable_from_table(info->gv_table,self->name);
            if(            var__377==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value337=err_msg(info,"var not found(%s)(Y) at definition of variable",self->name)));
                come_exception_var_5_381=multiple_assign_var6->v1;
                Err_382=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_382)),                /*c*/ come_call_finalizer3(__right_value337,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional5) {
                    __result_obj__248 = (_Bool)1;
                    (Err_382 = come_decrement_ref_count(Err_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_380,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__248;
                }
                else {
                }
                (Err_382 = come_decrement_ref_count(Err_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_383=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__377->mType));
        if(        left_type_383->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__377->mCValueName);
        }
        else if(        list$1sNode$ph_length(left_type_383->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value339=make_define_var(left_type_383,var__377->mCValueName,(_Bool)0,info))));
            (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__377->mCValueName,((char*)(__right_value340=make_type_name_string(left_type_383,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            for(            o2_saved_384=(struct list$1sNode$ph*)come_increment_ref_count((left_type_383->mArrayNum)),it_387=list$1sNode$ph_begin((o2_saved_384));            !list$1sNode$ph_end((o2_saved_384));            it_387=list$1sNode$ph_next((o2_saved_384))            ){
                Value_390=node_compile(it_387,info);
                if(                !Value_390) {
                    multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value341=err_msg(info,"invalid array num")));
                    come_exception_var_c1_391=multiple_assign_var7->v1;
                    Err_392=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    ((Err_392)?(puts(Err_392),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value341,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_392 = come_decrement_ref_count(Err_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                }
                come_value_393=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"*(%s)",come_value_393->c_value);
                /*c*/ come_call_finalizer3(come_value_393,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_384,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value343=make_define_var(left_type_383,var__377->mCValueName,(_Bool)0,info))));
            (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_383->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__377->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__377->mCValueName,((char*)(__right_value344=make_type_name_string(left_type_383,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 253, "struct CVALUE*"))));
            __dec_obj65=come_value_394->c_value,
            come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__377->mCValueName));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj66=come_value_394->type,
            come_value_394->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_383));
            /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_394->var=var__377;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
            /*c*/ come_call_finalizer3(come_value_394,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !left_type_383->mClass->mNumber&&left_type_383->mPointerNum==0) {
            var__377->mType->mAllocaValue=(_Bool)1;
            if(            var__377->mType->mNoSolvedGenericsType) {
                var__377->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        /*c*/ come_call_finalizer3(type_380,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->alloc) {
        var__398=((struct sVar*)(__right_value353=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value352=__builtin_string(self->name))))));
        (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value353,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__398) {
            if(            var__398->mType->mHeap) {
                free_object(((struct sType*)(__right_value354=come_call_cloner(sType_clone, var__398->mType))),var__398->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value354,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value355=__builtin_string(self->name))));
            (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_399=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_399)),info,(_Bool)0);
            /*c*/ come_call_finalizer3(type_399,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        Value_400=node_compile(self->right_value,info);
        if(        !Value_400) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_401=string_operator_equals(((char*)(__right_value358=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        struct_initializer_402=string_operator_equals(((char*)(__right_value359=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        new_channel_403=string_operator_equals(((char*)(__right_value360=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_405=right_value_404->type;
        if(        self->type==((void*)0)) {
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_405)),info,(_Bool)0);
        }
        else {
        }
        var__398=get_variable_from_table(info->lv_table,self->name);
        var_type_406=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__398->mType));
        var_type_406->mStatic=(_Bool)0;
        if(        !array_initializer_401&&!struct_initializer_402&&!var__398->mType->mStatic&&!var_type_406->mConstant&&list$1sNode$ph_length(var_type_406->mArrayNum)==0) {
            if(            var_type_406->mClass->mNumber) {
            }
            else if(            (var_type_406->mClass->mStruct||var_type_406->mClass->mUnion||var_type_406->mClass->mEnum)||var_type_406->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__398->mCValueName,((char*)(__right_value364=make_type_name_string(var_type_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_407=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__398->mType));
        if(        array_initializer_401) {
            var__408=((struct sVar*)(__right_value367=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value366=__builtin_string(self->name))))));
            (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value367,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value368=make_define_var(var__408->mType,var__408->mCValueName,(_Bool)0,info))),right_value_404->c_value);
            (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_409=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 332, "struct CVALUE*"))));
            __dec_obj70=come_value_409->c_value,
            come_value_409->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_409));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_409,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        struct_initializer_402) {
            var__410=((struct sVar*)(__right_value373=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value372=__builtin_string(self->name))))));
            (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value373,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value374=make_define_var(var__410->mType,var__410->mCValueName,(_Bool)0,info))),right_value_404->c_value);
            (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_411=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 349, "struct CVALUE*"))));
            __dec_obj71=come_value_411->c_value,
            come_value_411->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_411));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_411,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        var__398->mType->mStatic||var__398->mType->mConstant) {
            multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value380=check_assign_type(((char*)(__right_value379=xsprintf("\%s is assining to",((char*)(__right_value378=string_to_string(self->name)))))),left_type_407,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_6_412=multiple_assign_var8->v1;
            Err_413=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            (_if_conditional6=(Err_413)),            (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value380,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                __result_obj__256 = (_Bool)1;
                (Err_413 = come_decrement_ref_count(Err_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_407,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__256;
            }
            else {
            }
            add_come_code(info,"%s=%s;\n",((char*)(__right_value381=make_define_var(left_type_407,var__398->mCValueName,(_Bool)0,info))),right_value_404->c_value);
            (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 369, "struct CVALUE*"))));
            __dec_obj72=come_value_414->c_value,
            come_value_414->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
            transpiler_clear_last_code(info);
            (Err_413 = come_decrement_ref_count(Err_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_414,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_405->mHeap&&left_type_407->mHeap&&left_type_407->mPointerNum>0&&right_type_405->mPointerNum>0) {
            multiple_assign_var9=((struct tuple2$2bool$char$ph*)(__right_value387=check_assign_type(((char*)(__right_value386=xsprintf("\%s is assining to",((char*)(__right_value385=string_to_string(self->name)))))),left_type_407,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_7_415=multiple_assign_var9->v1;
            Err_416=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional7=(Err_416)),            (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value387,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __result_obj__257 = (_Bool)1;
                (Err_416 = come_decrement_ref_count(Err_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_407,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__257;
            }
            else {
            }
            std_move(left_type_407,right_type_405,right_value_404,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value388=make_define_var(left_type_407,var__398->mCValueName,(_Bool)0,info))));
            (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 392, "struct CVALUE*"))));
            __dec_obj73=come_value_417->c_value,
            come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__398->mCValueName,right_value_404->c_value));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj74=come_value_417->type,
            come_value_417->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_407));
            /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_417->var=var__398;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
            add_come_last_code(info,"%s",come_value_417->c_value);
            (Err_416 = come_decrement_ref_count(Err_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_407->mChannel&&new_channel_403) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value393=make_define_var(left_type_407,var__398->mCValueName,(_Bool)0,info))));
            (__right_value393 = come_decrement_ref_count(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__398->mCValueName);
            come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 406, "struct CVALUE*"))));
            __dec_obj75=come_value_418->c_value,
            come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__398->mCValueName));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj76=come_value_418->type,
            come_value_418->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 408, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_418->type->mPointerNum=1;
            come_value_418->var=var__398;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
            add_come_last_code(info,"%s",come_value_418->c_value);
            /*c*/ come_call_finalizer3(come_value_418,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_407->mPointerNum>0&&left_type_407->mHeap&&string_operator_equals(right_type_405->mClass->mName,"void")&&right_type_405->mPointerNum>0) {
            multiple_assign_var10=((struct tuple2$2bool$char$ph*)(__right_value402=check_assign_type(((char*)(__right_value401=xsprintf("\%s is assining to",((char*)(__right_value400=string_to_string(self->name)))))),left_type_407,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_8_419=multiple_assign_var10->v1;
            Err_420=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional8=(Err_420)),            (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value402,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional8) {
                __result_obj__258 = (_Bool)1;
                (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_407,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__258;
            }
            else {
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value403=make_define_var(left_type_407,var__398->mCValueName,(_Bool)0,info))));
            (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_421=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "struct CVALUE*"))));
            __dec_obj77=come_value_421->c_value,
            come_value_421->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__398->mCValueName,right_value_404->c_value));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj78=come_value_421->type,
            come_value_421->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_407));
            /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_421->var=var__398;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_421));
            add_come_last_code(info,"%s",come_value_421->c_value);
            (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_421,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value410=check_assign_type(((char*)(__right_value409=xsprintf("\%s is assining to",((char*)(__right_value408=string_to_string(self->name)))))),left_type_407,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_9_422=multiple_assign_var11->v1;
            Err_423=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            (_if_conditional9=(Err_423)),            (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value409 = come_decrement_ref_count(__right_value409, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value410,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __result_obj__259 = (_Bool)1;
                (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_407,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__259;
            }
            else {
            }
            if(            right_type_405->mHeap&&left_type_407->mHeap&&left_type_407->mPointerNum>0&&right_type_405->mPointerNum>0) {
                std_move(left_type_407,right_type_405,right_value_404,info,(_Bool)0);
            }
            if(            left_type_407->mHeap&&!right_value_404->type->mHeap) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value411=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_10_424=multiple_assign_var12->v1;
                Err_425=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_425)),                /*c*/ come_call_finalizer3(__right_value411,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    __result_obj__260 = (_Bool)1;
                    (Err_425 = come_decrement_ref_count(Err_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(var_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_407,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__260;
                }
                else {
                }
                (Err_425 = come_decrement_ref_count(Err_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value412=make_define_var(left_type_407,var__398->mCValueName,(_Bool)0,info))));
            (__right_value412 = come_decrement_ref_count(__right_value412, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 459, "struct CVALUE*"))));
            __dec_obj79=come_value_426->c_value,
            come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__398->mCValueName,right_value_404->c_value));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj80=come_value_426->type,
            come_value_426->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_407));
            /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_426->var=var__398;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_426));
            add_come_last_code(info,"%s",come_value_426->c_value);
            (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_426,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(var_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_407,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        Value_427=node_compile(self->right_value,info);
        if(        !Value_427) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_428=string_operator_equals(((char*)(__right_value417=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value417 = come_decrement_ref_count(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_429=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_430=right_value_429->type;
        current_stack_frame_struct_431=info->current_stack_frame_struct;
        if(        (_if_conditional11=(current_stack_frame_struct_431&&((struct sVar*)(__right_value420=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value419=__builtin_string(self->name))))))==((void*)0))),        (__right_value419 = come_decrement_ref_count(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value420,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional11) {
            parent_var_432=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_432!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_432->mFunName,info->come_fun->mName)) {
                    left_type_433=parent_var_432->mType;
                    if(                    left_type_433->mPointerNum>0&&right_type_430->mPointerNum>0&&right_type_430->mHeap&&left_type_433->mHeap) {
                        multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value423=check_assign_type(((char*)(__right_value422=xsprintf("\%s is assigning to",((char*)(__right_value421=string_to_string(self->name)))))),left_type_433,right_type_430,right_value_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_11_434=multiple_assign_var13->v1;
                        Err_435=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        if(                        (_if_conditional12=(Err_435)),                        (__right_value421 = come_decrement_ref_count(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value423,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional12) {
                            __result_obj__261 = (_Bool)1;
                            (Err_435 = come_decrement_ref_count(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__261;
                        }
                        else {
                        }
                        c_value_436=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_432->mCValueName));
                        decrement_ref_count_object(parent_var_432->mType,c_value_436,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_433,right_type_430,right_value_429,info,(_Bool)0);
                        come_value_437=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 499, "struct CVALUE*"))));
                        if(                        parent_var_432->mType->mOriginIsArray) {
                            __dec_obj81=come_value_437->c_value,
                            come_value_437->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_432->mCValueName,right_value_429->c_value));
                            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj82=come_value_437->c_value,
                            come_value_437->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_432->mCValueName,right_value_429->c_value));
                            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj83=come_value_437->type,
                        come_value_437->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_433));
                        /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_437->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_437->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_437));
                        __result_obj__262 = (_Bool)1;
                        (Err_435 = come_decrement_ref_count(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_436 = come_decrement_ref_count(c_value_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__262;
                        (Err_435 = come_decrement_ref_count(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_436 = come_decrement_ref_count(c_value_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else if(                    left_type_433->mPointerNum>0&&right_type_430->mPointerNum>0&&string_operator_equals(right_type_430->mClass->mName,"void")&&left_type_433->mHeap) {
                        multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value432=check_assign_type(((char*)(__right_value431=xsprintf("\%s is assigning to",((char*)(__right_value430=string_to_string(self->name)))))),left_type_433,right_type_430,right_value_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_12_438=multiple_assign_var14->v1;
                        Err_439=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        if(                        (_if_conditional13=(Err_439)),                        (__right_value430 = come_decrement_ref_count(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value431 = come_decrement_ref_count(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value432,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional13) {
                            __result_obj__263 = (_Bool)1;
                            (Err_439 = come_decrement_ref_count(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__263;
                        }
                        else {
                        }
                        c_value_440=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_432->mCValueName));
                        decrement_ref_count_object(parent_var_432->mType,c_value_440,info,(_Bool)0,(_Bool)0);
                        come_value_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 525, "struct CVALUE*"))));
                        if(                        parent_var_432->mType->mOriginIsArray) {
                            __dec_obj84=come_value_441->c_value,
                            come_value_441->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_432->mCValueName,right_value_429->c_value));
                            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj85=come_value_441->c_value,
                            come_value_441->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_432->mCValueName,right_value_429->c_value));
                            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj86=come_value_441->type,
                        come_value_441->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_433));
                        /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_441->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_441->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_441));
                        __result_obj__264 = (_Bool)1;
                        (Err_439 = come_decrement_ref_count(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_440 = come_decrement_ref_count(c_value_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_441,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__264;
                        (Err_439 = come_decrement_ref_count(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_440 = come_decrement_ref_count(c_value_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_441,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value441=check_assign_type(((char*)(__right_value440=xsprintf("\%s is assigning to",((char*)(__right_value439=string_to_string(self->name)))))),left_type_433,right_type_430,right_value_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_13_442=multiple_assign_var15->v1;
                        Err_443=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        if(                        (_if_conditional14=(Err_443)),                        (__right_value439 = come_decrement_ref_count(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value440 = come_decrement_ref_count(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value441,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional14) {
                            __result_obj__265 = (_Bool)1;
                            (Err_443 = come_decrement_ref_count(Err_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__265;
                        }
                        else {
                        }
                        if(                        left_type_433->mHeap&&!right_value_429->type->mHeap) {
                            multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value442=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_exception_var_14_444=multiple_assign_var16->v1;
                            Err_445=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            if(                            (_if_conditional15=(Err_445)),                            /*c*/ come_call_finalizer3(__right_value442,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional15) {
                                __result_obj__266 = (_Bool)1;
                                (Err_445 = come_decrement_ref_count(Err_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (Err_443 = come_decrement_ref_count(Err_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__266;
                            }
                            else {
                            }
                            (Err_445 = come_decrement_ref_count(Err_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_value_446=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 553, "struct CVALUE*"))));
                        if(                        parent_var_432->mType->mOriginIsArray) {
                            __dec_obj87=come_value_446->c_value,
                            come_value_446->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_432->mCValueName,right_value_429->c_value));
                            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj88=come_value_446->c_value,
                            come_value_446->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_432->mCValueName,right_value_429->c_value));
                            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj89=come_value_446->type,
                        come_value_446->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_433));
                        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_446->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_446->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_446));
                        __result_obj__267 = (_Bool)1;
                        (Err_443 = come_decrement_ref_count(Err_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_446,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__267;
                        (Err_443 = come_decrement_ref_count(Err_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_446,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
            }
        }
        var__447=get_variable_from_table(info->lv_table,self->name);
        if(        var__447==((void*)0)) {
            var__447=get_variable_from_table(info->gv_table,self->name);
            if(            var__447==((void*)0)) {
                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value448=err_msg(info,"var not found(%s)(X) at storing variable",self->name)));
                come_exception_var_15_448=multiple_assign_var17->v1;
                Err_449=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional16=(Err_449)),                /*c*/ come_call_finalizer3(__right_value448,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    __result_obj__268 = (_Bool)1;
                    (Err_449 = come_decrement_ref_count(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__268;
                }
                else {
                }
                (Err_449 = come_decrement_ref_count(Err_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        var__447->mType==((void*)0)) {
            __dec_obj90=var__447->mType,
            var__447->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_430));
            /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_450=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__447->mType));
        if(        (var__447->mType->mStatic||var__447->mType->mConstant)&&!var__447->mGlobal) {
            multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value453=check_assign_type(((char*)(__right_value452=xsprintf("\%s is assining to",((char*)(__right_value451=string_to_string(self->name)))))),left_type_450,right_type_430,right_value_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_16_451=multiple_assign_var18->v1;
            Err_452=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            (_if_conditional17=(Err_452)),            (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value453,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                __result_obj__269 = (_Bool)1;
                (Err_452 = come_decrement_ref_count(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__269;
            }
            else {
            }
            come_value_453=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 597, "struct CVALUE*"))));
            __dec_obj91=come_value_453->c_value,
            come_value_453->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__447->mCValueName,right_value_429->c_value));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj92=come_value_453->type,
            come_value_453->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_450));
            /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_453->var=var__447;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_453));
            add_come_last_code(info,"%s",come_value_453->c_value);
            (Err_452 = come_decrement_ref_count(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_453,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_430->mHeap&&left_type_450->mHeap&&left_type_450->mPointerNum>0&&right_type_430->mPointerNum>0) {
            multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value460=check_assign_type(((char*)(__right_value459=xsprintf("\%s is assining to",((char*)(__right_value458=string_to_string(self->name)))))),left_type_450,right_type_430,right_value_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_454=multiple_assign_var19->v1;
            Err_455=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional18=(Err_455)),            (__right_value458 = come_decrement_ref_count(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value459 = come_decrement_ref_count(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value460,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                __result_obj__270 = (_Bool)1;
                (Err_455 = come_decrement_ref_count(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__270;
            }
            else {
            }
            decrement_ref_count_object(left_type_450,var__447->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_450,right_type_430,right_value_429,info,(_Bool)0);
            come_value_456=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 616, "struct CVALUE*"))));
            __dec_obj93=come_value_456->c_value,
            come_value_456->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__447->mCValueName,right_value_429->c_value));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj94=come_value_456->type,
            come_value_456->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_450));
            /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_456->var=var__447;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_456));
            add_come_last_code(info,"%s",come_value_456->c_value);
            (Err_455 = come_decrement_ref_count(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_456,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_450->mPointerNum>0&&left_type_450->mHeap&&string_operator_equals(right_type_430->mClass->mName,"void")&&right_type_430->mPointerNum>0) {
            multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value467=check_assign_type(((char*)(__right_value466=xsprintf("\%s is assining to",((char*)(__right_value465=string_to_string(self->name)))))),left_type_450,right_type_430,right_value_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_18_457=multiple_assign_var20->v1;
            Err_458=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional19=(Err_458)),            (__right_value465 = come_decrement_ref_count(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value467,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                __result_obj__271 = (_Bool)1;
                (Err_458 = come_decrement_ref_count(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__271;
            }
            else {
            }
            decrement_ref_count_object(left_type_450,var__447->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_459=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 634, "struct CVALUE*"))));
            __dec_obj95=come_value_459->c_value,
            come_value_459->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__447->mCValueName,right_value_429->c_value));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj96=come_value_459->type,
            come_value_459->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_450));
            /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_459->var=var__447;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_459));
            add_come_last_code(info,"%s",come_value_459->c_value);
            (Err_458 = come_decrement_ref_count(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_459,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_450->mChannel&&new_channel_428) {
            come_value_460=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 645, "struct CVALUE*"))));
            __dec_obj97=come_value_460->c_value,
            come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__447->mCValueName));
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj98=come_value_460->type,
            come_value_460->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 647, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_460->type->mPointerNum=1;
            come_value_460->var=var__447;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_460));
            add_come_last_code(info,"%s",come_value_460->c_value);
            /*c*/ come_call_finalizer3(come_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var21=((struct tuple2$2bool$char$ph*)(__right_value480=check_assign_type(((char*)(__right_value479=xsprintf("\%s is assining to",((char*)(__right_value478=string_to_string(self->name)))))),left_type_450,right_type_430,right_value_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_19_461=multiple_assign_var21->v1;
            Err_462=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional20=(Err_462)),            (__right_value478 = come_decrement_ref_count(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value479 = come_decrement_ref_count(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value480,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional20) {
                __result_obj__272 = (_Bool)1;
                (Err_462 = come_decrement_ref_count(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__272;
            }
            else {
            }
            if(            left_type_450->mHeap&&!right_value_429->type->mHeap) {
                multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value481=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_20_463=multiple_assign_var22->v1;
                Err_464=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                if(                (_if_conditional21=(Err_464)),                /*c*/ come_call_finalizer3(__right_value481,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional21) {
                    __result_obj__273 = (_Bool)1;
                    (Err_464 = come_decrement_ref_count(Err_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_462 = come_decrement_ref_count(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__273;
                }
                else {
                }
                (Err_464 = come_decrement_ref_count(Err_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_value_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 666, "struct CVALUE*"))));
            __dec_obj99=come_value_465->c_value,
            come_value_465->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__447->mCValueName,right_value_429->c_value));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj100=come_value_465->type,
            come_value_465->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_450));
            /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_465->var=var__447;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_465));
            add_come_last_code(info,"%s",come_value_465->c_value);
            (Err_462 = come_decrement_ref_count(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_465,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__197;
void* __right_value233 = (void*)0;
struct sType* result_278;
void* __right_value234 = (void*)0;
struct sType* __dec_obj24;
void* __right_value235 = (void*)0;
struct sType* __dec_obj25;
void* __right_value243 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value244 = (void*)0;
struct sType* __dec_obj30;
void* __right_value245 = (void*)0;
struct sType* __dec_obj31;
void* __right_value247 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value248 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value249 = (void*)0;
char* __dec_obj34;
void* __right_value250 = (void*)0;
char* __dec_obj35;
void* __right_value251 = (void*)0;
char* __dec_obj36;
void* __right_value259 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value260 = (void*)0;
char* __dec_obj41;
void* __right_value261 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value269 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value270 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__211;
    if(    self==(void*)0) {
        __result_obj__197 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__197,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__197;
    }
    result_278=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_278->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_278->mOriginalLoadVarType,
        result_278->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_278->mChannelType,
        result_278->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_278->mGenericsTypes,
        result_278->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_278->mNoSolvedGenericsType,
        result_278->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_278->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_278->mAnyOriginalType,
        result_278->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_278->mSizeNum,
        result_278->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_278->mAlignas,
        result_278->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_278->mTupleName,
        result_278->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_278->mAttribute,
        result_278->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_278->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_278->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_278->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_278->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_278->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_278->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_278->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_278->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_278->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_278->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_278->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_278->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_278->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_278->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_278->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_278->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_278->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_278->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_278->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_278->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_278->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_278->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_278->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_278->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_278->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_278->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_278->mAsmName,
        result_278->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_278->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_278->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_278->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_278->mArrayNum,
        result_278->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_278->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_278->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_278->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_278->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_278->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_278->mOriginalTypeName,
        result_278->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_278->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_278->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_278->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_278->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_278->mParamTypes,
        result_278->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_278->mParamNames,
        result_278->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_278->mResultType,
        result_278->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_278->mVarArgs=self->mVarArgs;
    }
    __result_obj__211 = come_increment_ref_count(result_278);
    /*c*/ come_call_finalizer3(result_278,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
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
struct list_item$1sType$ph* it_274;
struct list_item$1sType$ph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*c*/ come_call_finalizer3(prev_it_275,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__198;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct list$1sType$ph* result_279;
struct list_item$1sType$ph* it_280;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct list$1sType$ph* __result_obj__201;
    if(    self==((void*)0)) {
        __result_obj__198 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__198,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__198;
    }
    result_279=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1185, "struct list$1sType$ph*"))));
    it_280=self->head;
    while(it_280!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_279,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_280->item)));
        }
        else {
            list$1sType$ph_add(result_279,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_280->item)));
        }
        it_280=it_280->next;
    }
    __result_obj__201 = come_increment_ref_count(result_279);
    /*c*/ come_call_finalizer3(result_279,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__199;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__199 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value238 = (void*)0;
struct list_item$1sType$ph* litem_281;
struct sType* __dec_obj26;
void* __right_value239 = (void*)0;
struct list_item$1sType$ph* litem_282;
struct sType* __dec_obj27;
void* __right_value240 = (void*)0;
struct list_item$1sType$ph* litem_283;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__200;
    if(    self->len==0) {
        litem_281=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value238=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1204, "struct list_item$1sType$ph*"))));
        litem_281->prev=((void*)0);
        litem_281->next=((void*)0);
        __dec_obj26=litem_281->item,
        litem_281->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_281;
        self->head=litem_281;
    }
    else if(    self->len==1) {
        litem_282=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value239=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1214, "struct list_item$1sType$ph*"))));
        litem_282->prev=self->head;
        litem_282->next=((void*)0);
        __dec_obj27=litem_282->item,
        litem_282->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_282;
        self->head->next=litem_282;
    }
    else {
        litem_283=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value240=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1224, "struct list_item$1sType$ph*"))));
        litem_283->prev=self->tail;
        litem_283->next=((void*)0);
        __dec_obj28=litem_283->item,
        litem_283->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_283;
        self->tail=litem_283;
    }
    self->len++;
    __result_obj__200 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_284;
struct list_item$1sType$ph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        /*c*/ come_call_finalizer3(prev_it_285,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__202;
void* __right_value246 = (void*)0;
struct sNode* result_286;
struct sNode* __result_obj__203;
    if(    self==(void*)0) {
        __result_obj__202 = come_increment_ref_count((void*)0);
        ((__result_obj__202) ? __result_obj__202 = come_decrement_ref_count(__result_obj__202, ((struct sNode*)__result_obj__202)->finalize, ((struct sNode*)__result_obj__202)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__202;
    }
    result_286=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_286->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_286->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_286->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_286->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_286->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_286->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_286->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_286->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_286->kind=self->kind;
    }
    __result_obj__203 = come_increment_ref_count(result_286);
    ((result_286) ? result_286 = come_decrement_ref_count(result_286, ((struct sNode*)result_286)->finalize, ((struct sNode*)result_286)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__203) ? __result_obj__203 = come_decrement_ref_count(__result_obj__203, ((struct sNode*)__result_obj__203)->finalize, ((struct sNode*)__result_obj__203)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__203;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__204;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1sNode$ph* result_287;
struct list_item$1sNode$ph* it_288;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sNode$ph* __result_obj__207;
    if(    self==((void*)0)) {
        __result_obj__204 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__204,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__204;
    }
    result_287=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_288=self->head;
    while(it_288!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_287,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_288->item)));
        }
        else {
            list$1sNode$ph_add(result_287,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_288->item)));
        }
        it_288=it_288->next;
    }
    __result_obj__207 = come_increment_ref_count(result_287);
    /*c*/ come_call_finalizer3(result_287,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__205;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__205 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value254 = (void*)0;
struct list_item$1sNode$ph* litem_289;
struct sNode* __dec_obj37;
void* __right_value255 = (void*)0;
struct list_item$1sNode$ph* litem_290;
struct sNode* __dec_obj38;
void* __right_value256 = (void*)0;
struct list_item$1sNode$ph* litem_291;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__206;
    if(    self->len==0) {
        litem_289=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value254=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1204, "struct list_item$1sNode$ph*"))));
        litem_289->prev=((void*)0);
        litem_289->next=((void*)0);
        __dec_obj37=litem_289->item,
        litem_289->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_289;
        self->head=litem_289;
    }
    else if(    self->len==1) {
        litem_290=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value255=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1214, "struct list_item$1sNode$ph*"))));
        litem_290->prev=self->head;
        litem_290->next=((void*)0);
        __dec_obj38=litem_290->item,
        litem_290->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_290;
        self->head->next=litem_290;
    }
    else {
        litem_291=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value256=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1224, "struct list_item$1sNode$ph*"))));
        litem_291->prev=self->tail;
        litem_291->next=((void*)0);
        __dec_obj39=litem_291->item,
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_291;
        self->tail=litem_291;
    }
    self->len++;
    __result_obj__206 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__206;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_292;
struct list_item$1sNode$ph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        /*c*/ come_call_finalizer3(prev_it_293,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__208;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1char$ph* result_294;
struct list_item$1char$ph* it_295;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1char$ph* __result_obj__210;
    if(    self==((void*)0)) {
        __result_obj__208 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__208,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__208;
    }
    result_294=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1185, "struct list$1char$ph*"))));
    it_295=self->head;
    while(it_295!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_294,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_295->item)));
        }
        else {
            list$1char$ph_add(result_294,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_295->item)));
        }
        it_295=it_295->next;
    }
    __result_obj__210 = come_increment_ref_count(result_294);
    /*c*/ come_call_finalizer3(result_294,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__210,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value264 = (void*)0;
struct list_item$1char$ph* litem_296;
char* __dec_obj43;
void* __right_value265 = (void*)0;
struct list_item$1char$ph* litem_297;
char* __dec_obj44;
void* __right_value266 = (void*)0;
struct list_item$1char$ph* litem_298;
char* __dec_obj45;
struct list$1char$ph* __result_obj__209;
    if(    self->len==0) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value264=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1204, "struct list_item$1char$ph*"))));
        litem_296->prev=((void*)0);
        litem_296->next=((void*)0);
        __dec_obj43=litem_296->item,
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_296;
        self->head=litem_296;
    }
    else if(    self->len==1) {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value265=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1214, "struct list_item$1char$ph*"))));
        litem_297->prev=self->head;
        litem_297->next=((void*)0);
        __dec_obj44=litem_297->item,
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_297;
        self->head->next=litem_297;
    }
    else {
        litem_298=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value266=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1224, "struct list_item$1char$ph*"))));
        litem_298->prev=self->tail;
        litem_298->next=((void*)0);
        __dec_obj45=litem_298->item,
        litem_298->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_298;
        self->tail=litem_298;
    }
    self->len++;
    __result_obj__209 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__209;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_299;
struct list_item$1char$ph* prev_it_300;
    it_299=self->head;
    while(it_299!=((void*)0)) {
        prev_it_300=it_299;
        it_299=it_299->next;
        /*c*/ come_call_finalizer3(prev_it_300,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__212;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_303;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_304;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__217;
    if(    self==((void*)0)) {
        __result_obj__212 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__212,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__212;
    }
    result_303=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1185, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        if(        1) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_303,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_304->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_303,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_304->item)));
        }
        it_304=it_304->next;
    }
    __result_obj__217 = come_increment_ref_count(result_303);
    /*c*/ come_call_finalizer3(result_303,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_301;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_302;
    it_301=self->head;
    while(it_301!=((void*)0)) {
        prev_it_302=it_301;
        it_301=it_301->next;
        /*c*/ come_call_finalizer3(prev_it_302,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__213;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__213 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__213,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value275 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_305;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj51;
void* __right_value276 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_306;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj52;
void* __right_value277 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_307;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj53;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__214;
    if(    self->len==0) {
        litem_305=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value275=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1204, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj51=litem_305->item,
        litem_305->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value276=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1214, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj52=litem_306->item,
        litem_306->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value277=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1224, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj53=litem_307->item,
        litem_307->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result_obj__214 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__215;
void* __right_value278 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_308;
void* __right_value279 = (void*)0;
struct sType* __dec_obj54;
void* __right_value280 = (void*)0;
char* __dec_obj55;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj56;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__216;
    if(    self==(void*)0) {
        __result_obj__215 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__215,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__215;
    }
    result_308=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_308->v1,
        result_308->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_308->v2,
        result_308->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj56=result_308->v3,
        result_308->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__216 = come_increment_ref_count(result_308);
    /*c*/ come_call_finalizer3(result_308,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__216,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_309;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_310;
    it_309=self->head;
    while(it_309!=((void*)0)) {
        prev_it_310=it_309;
        it_309=it_309->next;
        /*c*/ come_call_finalizer3(prev_it_310,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_312;
unsigned int hash_313;
unsigned int it_314;
struct sVar* __result_obj__220;
struct sVar* __result_obj__221;
struct sVar* __result_obj__222;
struct sVar* __result_obj__223;
default_value_312 = (void*)0;
    memset(&default_value_312,0,sizeof(struct sVar*));
    hash_313=string_get_hash_key(((char*)key))%self->size;
    it_314=hash_313;
    while((_Bool)1) {
        if(        self->item_existance[it_314]) {
            if(            string_equals(self->keys[it_314],key)) {
                __result_obj__220 = come_increment_ref_count(self->items[it_314]);
                /*c*/ come_call_finalizer3(default_value_312,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__220,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__220;
            }
            it_314++;
            if(            it_314>=self->size) {
                it_314=0;
            }
            else if(            it_314==hash_313) {
                __result_obj__221 = come_increment_ref_count(default_value_312);
                /*c*/ come_call_finalizer3(default_value_312,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__221,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__221;
            }
        }
        else {
            __result_obj__222 = come_increment_ref_count(default_value_312);
            /*c*/ come_call_finalizer3(default_value_312,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__222,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__222;
        }
    }
    __result_obj__223 = come_increment_ref_count(default_value_312);
    /*c*/ come_call_finalizer3(default_value_312,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash_315;
unsigned int it_316;
struct map$2char$phsVar$ph* __result_obj__228;
    hash_315=string_get_hash_key(((char*)key))%self->size;
    it_316=hash_315;
    while((_Bool)1) {
        if(        self->item_existance[it_316]) {
            if(            string_equals(self->keys[it_316],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_316]);
                self->item_existance[it_316]=(_Bool)0;
                if(                1) {
                    (self->keys[it_316] = come_decrement_ref_count(self->keys[it_316], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_316]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_316],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_316]=((void*)0);
                self->len--;
                break;
            }
            it_316++;
            if(            it_316>=self->size) {
                it_316=0;
            }
            else if(            it_316==hash_315) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__228 = self;
    return __result_obj__228;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_317;
struct list_item$1char$ph* it_318;
struct list$1char$ph* __result_obj__227;
    it2_317=0;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        if(        string_equals(it_318->item,item)) {
            list$1char$ph_delete(self,it2_317,it2_317+1);
            break;
        }
        it2_317++;
        it_318=it_318->next;
    }
    __result_obj__227 = self;
    return __result_obj__227;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_319;
struct list$1char$ph* __result_obj__224;
struct list_item$1char$ph* it_322;
int i_323;
struct list_item$1char$ph* prev_it_324;
struct list_item$1char$ph* it_325;
int i_326;
struct list_item$1char$ph* prev_it_327;
struct list_item$1char$ph* it_328;
struct list_item$1char$ph* head_prev_it_329;
struct list_item$1char$ph* tail_it_330;
int i_331;
struct list_item$1char$ph* prev_it_332;
struct list$1char$ph* __result_obj__226;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_319=tail;
        tail=head;
        head=tmp_319;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__224 = self;
        return __result_obj__224;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_322=self->head;
        i_323=0;
        while(it_322!=((void*)0)) {
            if(            i_323<tail) {
                prev_it_324=it_322;
                it_322=it_322->next;
                i_323++;
                /*c*/ come_call_finalizer3(prev_it_324,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_323==tail) {
                self->head=it_322;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_322=it_322->next;
                i_323++;
            }
        }
    }
    else if(    tail==self->len) {
        it_325=self->head;
        i_326=0;
        while(it_325!=((void*)0)) {
            if(            i_326==head) {
                self->tail=it_325->prev;
                self->tail->next=((void*)0);
            }
            if(            i_326>=head) {
                prev_it_327=it_325;
                it_325=it_325->next;
                i_326++;
                /*c*/ come_call_finalizer3(prev_it_327,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_325=it_325->next;
                i_326++;
            }
        }
    }
    else {
        it_328=self->head;
        head_prev_it_329=((void*)0);
        tail_it_330=((void*)0);
        i_331=0;
        while(it_328!=((void*)0)) {
            if(            i_331==head) {
                head_prev_it_329=it_328->prev;
            }
            if(            i_331==tail) {
                tail_it_330=it_328;
            }
            if(            i_331>=head&&i_331<tail) {
                prev_it_332=it_328;
                it_328=it_328->next;
                i_331++;
                /*c*/ come_call_finalizer3(prev_it_332,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_328=it_328->next;
                i_331++;
            }
        }
        if(        head_prev_it_329!=((void*)0)) {
            head_prev_it_329->next=tail_it_330;
        }
        if(        tail_it_330!=((void*)0)) {
            tail_it_330->prev=head_prev_it_329;
        }
    }
    __result_obj__226 = self;
    return __result_obj__226;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_320;
struct list_item$1char$ph* prev_it_321;
struct list$1char$ph* __result_obj__225;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        /*c*/ come_call_finalizer3(prev_it_321,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__225 = self;
    return __result_obj__225;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_337;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__230;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__231;
struct tuple3$3sType$phchar$phsNode$ph* result_338;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__232;
result_337 = (void*)0;
result_338 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_337,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__230 = result_337;
        return __result_obj__230;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__231 = self->it->item;
        return __result_obj__231;
    }
    memset(&result_338,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__232 = result_338;
    return __result_obj__232;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_340;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__233;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__234;
struct tuple3$3sType$phchar$phsNode$ph* result_341;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__235;
result_340 = (void*)0;
result_341 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_340,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__233 = result_340;
        return __result_obj__233;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__234 = self->it->item;
        return __result_obj__234;
    }
    memset(&result_341,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__235 = result_341;
    return __result_obj__235;
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

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_355;
char* __result_obj__238;
char* __result_obj__239;
char* result_356;
char* __result_obj__240;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_355,0,sizeof(char*));
        __result_obj__238 = result_355;
        return __result_obj__238;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__239 = self->it->item;
        return __result_obj__239;
    }
    memset(&result_356,0,sizeof(char*));
    __result_obj__240 = result_356;
    return __result_obj__240;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_358;
char* __result_obj__241;
char* __result_obj__242;
char* result_359;
char* __result_obj__243;
result_358 = (void*)0;
result_359 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_358,0,sizeof(char*));
        __result_obj__241 = result_358;
        return __result_obj__241;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__242 = self->it->item;
        return __result_obj__242;
    }
    memset(&result_359,0,sizeof(char*));
    __result_obj__243 = result_359;
    return __result_obj__243;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_362;
int i_363;
struct sType* __result_obj__244;
struct sType* default_value_364;
struct sType* __result_obj__245;
default_value_364 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_362=self->head;
    i_363=0;
    while(it_362!=((void*)0)) {
        if(        position==i_363) {
            __result_obj__244 = come_increment_ref_count(it_362->item);
            /*c*/ come_call_finalizer3(__result_obj__244,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__244;
        }
        it_362=it_362->next;
        i_363++;
    }
    memset(&default_value_364,0,sizeof(struct sType*));
    __result_obj__245 = come_increment_ref_count(default_value_364);
    /*c*/ come_call_finalizer3(default_value_364,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__245,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_385;
struct sNode* __result_obj__249;
struct sNode* __result_obj__250;
struct sNode* result_386;
struct sNode* __result_obj__251;
result_385 = (void*)0;
result_386 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_385,0,sizeof(struct sNode*));
        __result_obj__249 = result_385;
        return __result_obj__249;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__250 = self->it->item;
        return __result_obj__250;
    }
    memset(&result_386,0,sizeof(struct sNode*));
    __result_obj__251 = result_386;
    return __result_obj__251;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_388;
struct sNode* __result_obj__252;
struct sNode* __result_obj__253;
struct sNode* result_389;
struct sNode* __result_obj__254;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_388,0,sizeof(struct sNode*));
        __result_obj__252 = result_388;
        return __result_obj__252;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__253 = self->it->item;
        return __result_obj__253;
    }
    memset(&result_389,0,sizeof(struct sNode*));
    __result_obj__254 = result_389;
    return __result_obj__254;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value349 = (void*)0;
struct list_item$1CVALUE$ph* litem_395;
struct CVALUE* __dec_obj67;
void* __right_value350 = (void*)0;
struct list_item$1CVALUE$ph* litem_396;
struct CVALUE* __dec_obj68;
void* __right_value351 = (void*)0;
struct list_item$1CVALUE$ph* litem_397;
struct CVALUE* __dec_obj69;
struct list$1CVALUE$ph* __result_obj__255;
    if(    self->len==0) {
        litem_395=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value349=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1274, "struct list_item$1CVALUE$ph*"))));
        litem_395->prev=((void*)0);
        litem_395->next=((void*)0);
        __dec_obj67=litem_395->item,
        litem_395->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj67,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_395;
        self->head=litem_395;
    }
    else if(    self->len==1) {
        litem_396=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value350=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1284, "struct list_item$1CVALUE$ph*"))));
        litem_396->prev=self->head;
        litem_396->next=((void*)0);
        __dec_obj68=litem_396->item,
        litem_396->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_396;
        self->head->next=litem_396;
    }
    else {
        litem_397=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value351=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1294, "struct list_item$1CVALUE$ph*"))));
        litem_397->prev=self->tail;
        litem_397->next=((void*)0);
        __dec_obj69=litem_397->item,
        litem_397->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_397;
        self->tail=litem_397;
    }
    self->len++;
    __result_obj__255 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value486 = (void*)0;
struct sNewChannel* __result_obj__274;
    ((struct sNodeBase*)(__right_value486=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value486,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__274 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value487 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = come_increment_ref_count(((char*)(__right_value487=__builtin_string("sNewChannel"))));
    (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value488 = (void*)0;
struct sNode* node_466;
_Bool Value_467;
_Bool __result_obj__276;
_Bool __result_obj__277;
    node_466=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_467=node_compile(node_466,info);
    if(    !Value_467) {
        __result_obj__276 = (_Bool)0;
        ((node_466) ? node_466 = come_decrement_ref_count(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__276;
    }
    else {
    }
    __result_obj__277 = (_Bool)1;
    ((node_466) ? node_466 = come_decrement_ref_count(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__277;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value489 = (void*)0;
struct sNode* __dec_obj101;
struct sNode* __dec_obj102;
struct sWriteChannelNode* __result_obj__278;
    ((struct sNodeBase*)(__right_value489=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value489,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj101=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj101 ? __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj102=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__278 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__278,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value490 = (void*)0;
char* __result_obj__279;
    __result_obj__279 = come_increment_ref_count(((char*)(__right_value490=__builtin_string("sWriteChannelNode"))));
    (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__279 = come_decrement_ref_count(__result_obj__279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__279;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_468;
void* __right_value491 = (void*)0;
struct CVALUE* come_value_469;
_Bool Value_470;
_Bool __result_obj__280;
void* __right_value492 = (void*)0;
struct CVALUE* right_value_471;
struct sType* right_type_472;
void* __right_value493 = (void*)0;
struct sType* left_type_473;
struct sType* channel_type_474;
void* __right_value494 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_21_476=0;
char* Err_477=0;
_Bool _if_conditional22;
_Bool __result_obj__281;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct buffer* buf_478;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct CVALUE* come_value2_479;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
char* __dec_obj103;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj104;
_Bool __result_obj__282;
    Value_468=node_compile(self->exp,info);
    if(    !Value_468) {
        return (_Bool)0;
    }
    else {
    }
    come_value_469=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_470=node_compile(self->right_value,info);
    if(    !Value_470) {
        __result_obj__280 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_value_469,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__280;
    }
    else {
    }
    right_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_472=right_value_471->type;
    left_type_473=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_469->type));
    channel_type_474=(struct sType*)come_increment_ref_count(left_type_473->mChannelType);
    static int var_num_475=0;
    var_num_475++;
    if(    right_value_471->type->mHeap) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value494=err_msg(info,"channel can't get heap type")));
        come_exception_var_21_476=multiple_assign_var23->v1;
        Err_477=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional22=(Err_477)),        /*c*/ come_call_finalizer3(__right_value494,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional22) {
            __result_obj__281 = (_Bool)1;
            (Err_477 = come_decrement_ref_count(Err_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_469,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_473,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(channel_type_474,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__281;
        }
        else {
        }
        (Err_477 = come_decrement_ref_count(Err_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buf_478=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 750, "struct buffer*"))));
    buffer_append_format(buf_478,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_475,((char*)(__right_value497=make_type_name_string(channel_type_474,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_478,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value498=make_type_name_string(channel_type_474,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_475,var_num_475);
    (__right_value498 = come_decrement_ref_count(__right_value498, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_478,"*__channel_p%d = %s;\n",var_num_475,right_value_471->c_value);
    add_come_code(info,((char*)(__right_value499=buffer_to_string(buf_478))));
    (__right_value499 = come_decrement_ref_count(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_479=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 758, "struct CVALUE*"))));
    __dec_obj103=come_value2_479->c_value,
    come_value2_479->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_469->c_value,var_num_475,((char*)(__right_value502=make_type_name_string(channel_type_474,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj104=come_value2_479->type,
    come_value2_479->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 762, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_479->type->mPointerNum=1;
    come_value2_479->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_479));
    add_come_last_code(info,"%s",come_value2_479->c_value);
    __result_obj__282 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_469,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_473,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_474,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_479,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value507 = (void*)0;
struct sNode* __dec_obj105;
struct sReadChannelNode* __result_obj__283;
    ((struct sNodeBase*)(__right_value507=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value507,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj105=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__283 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__283,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value508 = (void*)0;
char* __result_obj__284;
    __result_obj__284 = come_increment_ref_count(((char*)(__right_value508=__builtin_string("sReadChannelNode"))));
    (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__284 = come_decrement_ref_count(__result_obj__284, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__284;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_480;
_Bool Value_481;
_Bool __result_obj__285;
void* __right_value509 = (void*)0;
struct CVALUE* come_value_482;
void* __right_value510 = (void*)0;
struct sType* var_type_483;
void* __right_value511 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_22_484=0;
char* Err_485=0;
_Bool _if_conditional23;
_Bool __result_obj__286;
struct sType* channel_type_486;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct CVALUE* come_value2_488;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj106;
void* __right_value518 = (void*)0;
struct sType* __dec_obj107;
_Bool __result_obj__287;
    exp_480=(struct sNode*)come_increment_ref_count(self->exp);
    Value_481=node_compile(exp_480,info);
    if(    !Value_481) {
        __result_obj__285 = (_Bool)0;
        ((exp_480) ? exp_480 = come_decrement_ref_count(exp_480, ((struct sNode*)exp_480)->finalize, ((struct sNode*)exp_480)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__285;
    }
    else {
    }
    come_value_482=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type_483=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_482->type));
    if(    !var_type_483->mChannel) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value511=err_msg(info,"require right type is channel")));
        come_exception_var_22_484=multiple_assign_var24->v1;
        Err_485=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional23=(Err_485)),        /*c*/ come_call_finalizer3(__right_value511,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional23) {
            __result_obj__286 = (_Bool)1;
            (Err_485 = come_decrement_ref_count(Err_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_480) ? exp_480 = come_decrement_ref_count(exp_480, ((struct sNode*)exp_480)->finalize, ((struct sNode*)exp_480)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_482,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(var_type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__286;
        }
        else {
        }
        (Err_485 = come_decrement_ref_count(Err_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    channel_type_486=(struct sType*)come_increment_ref_count(var_type_483->mChannelType);
    static int var_num_487=0;
    var_num_487++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_487,((char*)(__right_value512=make_type_name_string(channel_type_486,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value512 = come_decrement_ref_count(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 814, "struct CVALUE*"))));
    __dec_obj106=come_value2_488->c_value,
    come_value2_488->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_482->c_value,var_num_487,((char*)(__right_value515=make_type_name_string(channel_type_486,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value516=make_type_name_string(channel_type_486,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_487));
    __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj107=come_value2_488->type,
    come_value2_488->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_486));
    /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_488->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_488));
    add_come_last_code(info,"%s",come_value2_488->c_value);
    __result_obj__287 = (_Bool)1;
    ((exp_480) ? exp_480 = come_decrement_ref_count(exp_480, ((struct sNode*)exp_480)->finalize, ((struct sNode*)exp_480)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_482,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(var_type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__287;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value530 = (void*)0;
struct sNode* __result_obj__290;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 831, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value521=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 831, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result_obj__290 = come_increment_ref_count(((struct sNode*)(__right_value530=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value521,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value530) ? __right_value530 = come_decrement_ref_count(__right_value530, ((struct sNode*)__right_value530)->finalize, ((struct sNode*)__right_value530)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__290;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__288;
void* __right_value522 = (void*)0;
struct sStoreNode* result_489;
void* __right_value523 = (void*)0;
char* __dec_obj108;
void* __right_value524 = (void*)0;
char* __dec_obj109;
void* __right_value525 = (void*)0;
struct sType* __dec_obj110;
void* __right_value526 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value527 = (void*)0;
struct list$1char$ph* __dec_obj112;
void* __right_value528 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj113;
void* __right_value529 = (void*)0;
char* __dec_obj114;
struct sStoreNode* __result_obj__289;
    if(    self==(void*)0) {
        __result_obj__288 = (void*)0;
        return __result_obj__288;
    }
    result_489=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(    self!=((void*)0)) {
        result_489->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj108=result_489->sname,
        result_489->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj109=result_489->name,
        result_489->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj110=result_489->type,
        result_489->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj111=result_489->right_value,
        result_489->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj112=result_489->multiple_assign,
        result_489->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->multiple_assign));
        /*b*/ come_call_finalizer3(__dec_obj112,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj113=result_489->multiple_declare,
        result_489->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, self->multiple_declare));
        /*b*/ come_call_finalizer3(__dec_obj113,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj114=result_489->attribute,
        result_489->attribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->attribute));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__289 = result_489;
    /*c*/ come_call_finalizer3(result_489,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* __dec_obj115;
struct sLoadNode* __result_obj__291;
    ((struct sNodeBase*)(__right_value531=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value531,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj115=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__291 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__291,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value533 = (void*)0;
char* __result_obj__292;
    __result_obj__292 = come_increment_ref_count(((char*)(__right_value533=__builtin_string("sLoadNode"))));
    (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__292 = come_decrement_ref_count(__result_obj__292, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__292;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_490;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
_Bool _if_conditional24;
struct sVar* parent_var_491;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct CVALUE* come_value_492;
struct sType* type_493;
void* __right_value538 = (void*)0;
char* __dec_obj116;
void* __right_value539 = (void*)0;
char* __dec_obj117;
void* __right_value540 = (void*)0;
struct sType* __dec_obj118;
_Bool __result_obj__293;
struct sVar* var__494;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sFun* fun_495;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value545 = (void*)0;
char* __dec_obj119;
struct sType* __dec_obj120;
_Bool __result_obj__298;
void* __right_value546 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_23_500=0;
char* Err_501=0;
_Bool _if_conditional25;
_Bool __result_obj__299;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value549 = (void*)0;
char* __dec_obj121;
void* __right_value550 = (void*)0;
struct sType* __dec_obj122;
void* __right_value551 = (void*)0;
struct sType* __dec_obj123;
_Bool __result_obj__301;
    current_stack_frame_struct_490=info->current_stack_frame_struct;
    if(    (_if_conditional24=(current_stack_frame_struct_490&&((struct sVar*)(__right_value535=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value534=__builtin_string(self->name))))))==((void*)0))),    (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value535,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional24) {
        parent_var_491=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_491!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_491->mFunName,info->come_fun->mName)) {
                come_value_492=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 861, "struct CVALUE*"))));
                type_493=parent_var_491->mType;
                if(                parent_var_491->mType->mOriginIsArray) {
                    __dec_obj116=come_value_492->c_value,
                    come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_491->mCValueName));
                    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj117=come_value_492->c_value,
                    come_value_492->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_491->mCValueName));
                    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj118=come_value_492->type,
                come_value_492->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_493));
                /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_492->var=((void*)0);
                add_come_last_code(info,"%s",come_value_492->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_492));
                __result_obj__293 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_492,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__293;
                /*c*/ come_call_finalizer3(come_value_492,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    var__494=get_variable_from_table(info->lv_table,self->name);
    if(    var__494==((void*)0)) {
        var__494=get_variable_from_table(info->gv_table,self->name);
        if(        var__494==((void*)0)) {
            fun_495=((struct sFun*)(__right_value542=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value541=__builtin_string(self->name))))));
            (__right_value541 = come_decrement_ref_count(__right_value541, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value542,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            fun_495) {
                come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 893, "struct CVALUE*"))));
                __dec_obj119=come_value_499->c_value,
                come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_495->mName));
                __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj120=come_value_499->type,
                come_value_499->type=(struct sType*)come_increment_ref_count(fun_495->mLambdaType);
                /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_499->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
                __result_obj__298 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_499,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__298;
                /*c*/ come_call_finalizer3(come_value_499,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value546=err_msg(info,"var not found(%s)(Z) at loading variable",self->name)));
                come_exception_var_23_500=multiple_assign_var25->v1;
                Err_501=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                if(                (_if_conditional25=(Err_501)),                /*c*/ come_call_finalizer3(__right_value546,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    __result_obj__299 = (_Bool)1;
                    (Err_501 = come_decrement_ref_count(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__299;
                }
                else {
                }
                (Err_501 = come_decrement_ref_count(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 911, "struct CVALUE*"))));
    __dec_obj121=come_value_502->c_value,
    come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__494->mCValueName));
    __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj122=come_value_502->type,
    come_value_502->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__494->mType));
    /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_502->var=var__494;
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
    if(    list$1sNode$ph_length(come_value_502->type->mArrayNum)==1) {
        __dec_obj123=come_value_502->type->mOriginalLoadVarType,
        come_value_502->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_502->type));
        /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph_reset(come_value_502->type->mArrayNum);
        come_value_502->type->mPointerNum++;
        come_value_502->type->mOriginalTypeNamePointerNum=come_value_502->type->mPointerNum;
    }
    __result_obj__301 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_502,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static void sLoadNode_finalize(struct sLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_496;
unsigned int hash_497;
unsigned int it_498;
struct sFun* __result_obj__294;
struct sFun* __result_obj__295;
struct sFun* __result_obj__296;
struct sFun* __result_obj__297;
default_value_496 = (void*)0;
    memset(&default_value_496,0,sizeof(struct sFun*));
    hash_497=string_get_hash_key(((char*)key))%self->size;
    it_498=hash_497;
    while((_Bool)1) {
        if(        self->item_existance[it_498]) {
            if(            string_equals(self->keys[it_498],key)) {
                __result_obj__294 = come_increment_ref_count(self->items[it_498]);
                /*c*/ come_call_finalizer3(default_value_496,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__294,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__294;
            }
            it_498++;
            if(            it_498>=self->size) {
                it_498=0;
            }
            else if(            it_498==hash_497) {
                __result_obj__295 = come_increment_ref_count(default_value_496);
                /*c*/ come_call_finalizer3(default_value_496,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__295,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__295;
            }
        }
        else {
            __result_obj__296 = come_increment_ref_count(default_value_496);
            /*c*/ come_call_finalizer3(default_value_496,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__296,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__296;
        }
    }
    __result_obj__297 = come_increment_ref_count(default_value_496);
    /*c*/ come_call_finalizer3(default_value_496,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_503;
struct list_item$1sNode$ph* prev_it_504;
struct list$1sNode$ph* __result_obj__300;
    it_503=self->head;
    while(it_503!=((void*)0)) {
        prev_it_504=it_503;
        it_503=it_503->next;
        /*c*/ come_call_finalizer3(prev_it_504,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__300 = self;
    return __result_obj__300;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value552 = (void*)0;
_Bool _if_conditional26;
struct sLoadNode* load_node_505;
    if(    (_if_conditional26=(string_operator_equals(((char*)(__right_value552=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value552 = come_decrement_ref_count(__right_value552, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional26) {
        load_node_505=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_505->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value559 = (void*)0;
struct sNode* __result_obj__304;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 944, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value555=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 944, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result_obj__304 = come_increment_ref_count(((struct sNode*)(__right_value559=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value555,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value559) ? __right_value559 = come_decrement_ref_count(__right_value559, ((struct sNode*)__right_value559)->finalize, ((struct sNode*)__right_value559)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__304;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__302;
void* __right_value556 = (void*)0;
struct sLoadNode* result_506;
void* __right_value557 = (void*)0;
char* __dec_obj124;
void* __right_value558 = (void*)0;
char* __dec_obj125;
struct sLoadNode* __result_obj__303;
    if(    self==(void*)0) {
        __result_obj__302 = (void*)0;
        return __result_obj__302;
    }
    result_506=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(    self!=((void*)0)) {
        result_506->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj124=result_506->sname,
        result_506->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_506->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj125=result_506->name,
        result_506->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__303 = result_506;
    /*c*/ come_call_finalizer3(result_506,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
char* __dec_obj126;
struct sFunLoadNode* __result_obj__305;
    ((struct sNodeBase*)(__right_value560=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value560,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj126=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__305 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__305,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value562 = (void*)0;
char* __result_obj__306;
    __result_obj__306 = come_increment_ref_count(((char*)(__right_value562=__builtin_string("sFunLoadNode"))));
    (__right_value562 = come_decrement_ref_count(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__306 = come_decrement_ref_count(__result_obj__306, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__306;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sFun* fun_507;
void* __right_value565 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_24_508=0;
char* Err_509=0;
_Bool _if_conditional27;
_Bool __result_obj__307;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_510;
void* __right_value568 = (void*)0;
char* __dec_obj127;
struct sType* __dec_obj128;
    fun_507=((struct sFun*)(__right_value564=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value563=__builtin_string(self->name))))));
    (__right_value563 = come_decrement_ref_count(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value564,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_507==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value565=err_msg(info,"fun not found(%s) at loading variable",self->name)));
        come_exception_var_24_508=multiple_assign_var26->v1;
        Err_509=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional27=(Err_509)),        /*c*/ come_call_finalizer3(__right_value565,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional27) {
            __result_obj__307 = (_Bool)1;
            (Err_509 = come_decrement_ref_count(Err_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__307;
        }
        else {
        }
        (Err_509 = come_decrement_ref_count(Err_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        come_value_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 971, "struct CVALUE*"))));
        __dec_obj127=come_value_510->c_value,
        come_value_510->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_507->mName));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj128=come_value_510->type,
        come_value_510->type=(struct sType*)come_increment_ref_count(fun_507->mLambdaType);
        /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_510->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_510));
        /*c*/ come_call_finalizer3(come_value_510,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value569 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj134;
struct sArrayInitializer* __result_obj__314;
    ((struct sNodeBase*)(__right_value569=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value569,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj134=self->initializer,
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, initializer));
    /*b*/ come_call_finalizer3(__dec_obj134,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__314 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__314,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__314;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value581 = (void*)0;
char* __result_obj__315;
    __result_obj__315 = come_increment_ref_count(((char*)(__right_value581=__builtin_string("sArrayInitializer"))));
    (__right_value581 = come_decrement_ref_count(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__315 = come_decrement_ref_count(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__315;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_521;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct buffer* buf_522;
int i_523;
struct sType* element_type_524;
struct list$1tuple2$2sNode$phsNode$ph$ph* o2_saved_525;
struct tuple2$2sNode$phsNode$ph* it_528;
struct tuple2$2sNode$phsNode$ph* multiple_assign_var27 = (void*)0;
struct sNode* index_531=0;
struct sNode* value_532=0;
struct CVALUE* come_value_533;
_Bool Value_534;
_Bool __result_obj__322;
void* __right_value584 = (void*)0;
struct CVALUE* __dec_obj135;
_Bool Value_535;
_Bool __result_obj__323;
void* __right_value585 = (void*)0;
struct CVALUE* come_value2_536;
void* __right_value586 = (void*)0;
struct sType* __dec_obj136;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct CVALUE* come_value_537;
void* __right_value589 = (void*)0;
char* __dec_obj137;
void* __right_value590 = (void*)0;
struct sType* __dec_obj138;
_Bool __result_obj__324;
    initializer_521=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_522=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1002, "struct buffer*"))));
    buffer_append_str(buf_522,"{");
    i_523=0;
    element_type_524=((void*)0);
    for(    o2_saved_525=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((initializer_521)),it_528=list$1tuple2$2sNode$phsNode$ph$ph_begin((o2_saved_525));    !list$1tuple2$2sNode$phsNode$ph$ph_end((o2_saved_525));    it_528=list$1tuple2$2sNode$phsNode$ph$ph_next((o2_saved_525))    ){
        multiple_assign_var27=it_528;
        index_531=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v1);
        value_532=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        come_value_533=((void*)0);
        if(        index_531) {
            Value_534=node_compile(index_531,info);
            if(            !Value_534) {
                __result_obj__322 = (_Bool)0;
                ((index_531) ? index_531 = come_decrement_ref_count(index_531, ((struct sNode*)index_531)->finalize, ((struct sNode*)index_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((value_532) ? value_532 = come_decrement_ref_count(value_532, ((struct sNode*)value_532)->finalize, ((struct sNode*)value_532)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_533,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(o2_saved_525,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(initializer_521,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_522,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_type_524,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__322;
            }
            else {
            }
            __dec_obj135=come_value_533,
            come_value_533=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            /*b*/ come_call_finalizer3(__dec_obj135,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        Value_535=node_compile(value_532,info);
        if(        !Value_535) {
            __result_obj__323 = (_Bool)0;
            ((index_531) ? index_531 = come_decrement_ref_count(index_531, ((struct sNode*)index_531)->finalize, ((struct sNode*)index_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((value_532) ? value_532 = come_decrement_ref_count(value_532, ((struct sNode*)value_532)->finalize, ((struct sNode*)value_532)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_533,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(o2_saved_525,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_521,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_522,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(element_type_524,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__323;
        }
        else {
        }
        come_value2_536=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj136=element_type_524,
        element_type_524=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_536->type));
        /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        come_value_533) {
            buffer_append_format(buf_522,"[%s] = %s",come_value_533->c_value,come_value2_536->c_value);
        }
        else {
            buffer_append_str(buf_522,come_value2_536->c_value);
        }
        i_523++;
        if(        i_523!=list$1tuple2$2sNode$phsNode$ph$ph_length(initializer_521)) {
            buffer_append_str(buf_522,",");
        }
        ((index_531) ? index_531 = come_decrement_ref_count(index_531, ((struct sNode*)index_531)->finalize, ((struct sNode*)index_531)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((value_532) ? value_532 = come_decrement_ref_count(value_532, ((struct sNode*)value_532)->finalize, ((struct sNode*)value_532)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_533,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_536,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_525,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_522,"}");
    come_value_537=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1039, "struct CVALUE*"))));
    __dec_obj137=come_value_537->c_value,
    come_value_537->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_522));
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj138=come_value_537->type,
    come_value_537->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_524));
    /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_537->type->mPointerNum++;
    come_value_537->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_537));
    __result_obj__324 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_521,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_522,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_type_524,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_537,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__308;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_513;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_514;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__313;
    if(    self==((void*)0)) {
        __result_obj__308 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__308,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__308;
    }
    result_513=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1185, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    it_514=self->head;
    while(it_514!=((void*)0)) {
        if(        1) {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_513,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2sNode$phsNode$ph_clone, it_514->item)));
        }
        else {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_513,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2sNode$phsNode$ph_clone, it_514->item)));
        }
        it_514=it_514->next;
    }
    __result_obj__313 = come_increment_ref_count(result_513);
    /*c*/ come_call_finalizer3(result_513,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__313,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_511;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_512;
    it_511=self->head;
    while(it_511!=((void*)0)) {
        prev_it_512=it_511;
        it_511=it_511->next;
        /*c*/ come_call_finalizer3(prev_it_512,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__309;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__309 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__309,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __right_value572 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_515;
struct tuple2$2sNode$phsNode$ph* __dec_obj129;
void* __right_value573 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_516;
struct tuple2$2sNode$phsNode$ph* __dec_obj130;
void* __right_value574 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_517;
struct tuple2$2sNode$phsNode$ph* __dec_obj131;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__310;
    if(    self->len==0) {
        litem_515=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value572=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1204, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_515->prev=((void*)0);
        litem_515->next=((void*)0);
        __dec_obj129=litem_515->item,
        litem_515->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj129,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_515;
        self->head=litem_515;
    }
    else if(    self->len==1) {
        litem_516=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value573=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1214, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_516->prev=self->head;
        litem_516->next=((void*)0);
        __dec_obj130=litem_516->item,
        litem_516->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj130,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_516;
        self->head->next=litem_516;
    }
    else {
        litem_517=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value574=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1224, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_517->prev=self->tail;
        litem_517->next=((void*)0);
        __dec_obj131=litem_517->item,
        litem_517->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj131,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_517;
        self->tail=litem_517;
    }
    self->len++;
    __result_obj__310 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
struct tuple2$2sNode$phsNode$ph* __result_obj__311;
void* __right_value575 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_518;
void* __right_value576 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value577 = (void*)0;
struct sNode* __dec_obj133;
struct tuple2$2sNode$phsNode$ph* __result_obj__312;
    if(    self==(void*)0) {
        __result_obj__311 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__311,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__311;
    }
    result_518=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj132=result_518->v1,
        result_518->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj133=result_518->v2,
        result_518->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__312 = come_increment_ref_count(result_518);
    /*c*/ come_call_finalizer3(result_518,tuple2$2sNode$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__312,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_519;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_520;
    it_519=self->head;
    while(it_519!=((void*)0)) {
        prev_it_520=it_519;
        it_519=it_519->next;
        /*c*/ come_call_finalizer3(prev_it_520,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_526;
struct tuple2$2sNode$phsNode$ph* __result_obj__316;
struct tuple2$2sNode$phsNode$ph* __result_obj__317;
struct tuple2$2sNode$phsNode$ph* result_527;
struct tuple2$2sNode$phsNode$ph* __result_obj__318;
result_526 = (void*)0;
result_527 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_526,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__316 = result_526;
        return __result_obj__316;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__317 = self->it->item;
        return __result_obj__317;
    }
    memset(&result_527,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__318 = result_527;
    return __result_obj__318;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_529;
struct tuple2$2sNode$phsNode$ph* __result_obj__319;
struct tuple2$2sNode$phsNode$ph* __result_obj__320;
struct tuple2$2sNode$phsNode$ph* result_530;
struct tuple2$2sNode$phsNode$ph* __result_obj__321;
result_529 = (void*)0;
result_530 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_529,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__319 = result_529;
        return __result_obj__319;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__320 = self->it->item;
        return __result_obj__320;
    }
    memset(&result_530,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__321 = result_530;
    return __result_obj__321;
}

static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_538;
void* __right_value593 = (void*)0;
struct sNode* index_539;
_Bool no_comma_540;
void* __right_value594 = (void*)0;
struct sNode* exp_541;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
_Bool no_comma_543;
void* __right_value597 = (void*)0;
struct sNode* exp_544;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* index_547;
_Bool no_comma_548;
void* __right_value603 = (void*)0;
struct sNode* exp_549;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
_Bool no_comma_550;
void* __right_value606 = (void*)0;
struct sNode* exp_551;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value614 = (void*)0;
struct sNode* __result_obj__331;
    expected_next_character(123,info);
    initializer_538=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1057, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_539=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_540=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_541=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_540;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_538,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1073, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_539),(struct sNode*)come_increment_ref_count(exp_541))));
        ((index_539) ? index_539 = come_decrement_ref_count(index_539, ((struct sNode*)index_539)->finalize, ((struct sNode*)index_539)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((exp_541) ? exp_541 = come_decrement_ref_count(exp_541, ((struct sNode*)exp_541)->finalize, ((struct sNode*)exp_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_543=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_544=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_543;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_538,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1081, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_544))));
        ((exp_544) ? exp_544 = come_decrement_ref_count(exp_544, ((struct sNode*)exp_544)->finalize, ((struct sNode*)exp_544)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_547=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_548=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_549=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_548;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_538,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1108, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_547),(struct sNode*)come_increment_ref_count(exp_549))));
            ((index_547) ? index_547 = come_decrement_ref_count(index_547, ((struct sNode*)index_547)->finalize, ((struct sNode*)index_547)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_549) ? exp_549 = come_decrement_ref_count(exp_549, ((struct sNode*)exp_549)->finalize, ((struct sNode*)exp_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_550=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_551=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_550;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_538,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1116, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_551))));
            ((exp_551) ? exp_551 = come_decrement_ref_count(exp_551, ((struct sNode*)exp_551)->finalize, ((struct sNode*)exp_551)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1122, "struct sNode");
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value610=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1122, "struct sArrayInitializer*")),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_538),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result_obj__331 = come_increment_ref_count(((struct sNode*)(__right_value614=_inf_value3)));
    /*c*/ come_call_finalizer3(initializer_538,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value610,sArrayInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value614) ? __right_value614 = come_decrement_ref_count(__right_value614, ((struct sNode*)__right_value614)->finalize, ((struct sNode*)__right_value614)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__331;
}

static unsigned int tuple2$2sNode$phsNode$ph_get_hash_key(struct tuple2$2sNode$phsNode$ph* self){
unsigned int result_542;
    result_542=0;
    result_542+=int_get_hash_key(((int)self->v1));
    result_542+=int_get_hash_key(((int)self->v2));
    return result_542;
}

static _Bool tuple2$2sNode$phsNode$ph_equals(struct tuple2$2sNode$phsNode$ph* left, struct tuple2$2sNode$phsNode$ph* right){
    if(    !sNode_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2){
struct sNode* __dec_obj139;
struct sNode* __dec_obj140;
struct tuple2$2sNode$phsNode$ph* __result_obj__325;
    __dec_obj139=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj140=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__325 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__325,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__325;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__326;
void* __right_value598 = (void*)0;
struct tuple2$2void$psNode$ph* result_545;
void* __right_value599 = (void*)0;
struct sNode* __dec_obj141;
struct tuple2$2void$psNode$ph* __result_obj__327;
    if(    self==(void*)0) {
        __result_obj__326 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__326,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__326;
    }
    result_545=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_545->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj141=result_545->v2,
        result_545->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__327 = come_increment_ref_count(result_545);
    /*c*/ come_call_finalizer3(result_545,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__327,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_546;
    result_546=0;
    result_546+=int_get_hash_key(((int)self->v1));
    result_546+=int_get_hash_key(((int)self->v2));
    return result_546;
}

static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right){
    if(    !voidp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj142;
struct tuple2$2void$psNode$ph* __result_obj__328;
    self->v1=v1;
    __dec_obj142=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__328 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__328,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__328;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
struct sArrayInitializer* __result_obj__329;
void* __right_value611 = (void*)0;
struct sArrayInitializer* result_552;
void* __right_value612 = (void*)0;
char* __dec_obj143;
void* __right_value613 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj144;
struct sArrayInitializer* __result_obj__330;
    if(    self==(void*)0) {
        __result_obj__329 = (void*)0;
        return __result_obj__329;
    }
    result_552=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*"));
    if(    self!=((void*)0)) {
        result_552->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj143=result_552->sname,
        result_552->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_552->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj144=result_552->initializer,
        result_552->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj144,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__330 = result_552;
    /*c*/ come_call_finalizer3(result_552,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__330;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value615 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj150;
struct sStructInitializer* __result_obj__338;
    ((struct sNodeBase*)(__right_value615=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value615,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj150=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, initializer));
    /*b*/ come_call_finalizer3(__dec_obj150,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__338 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__338,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value627 = (void*)0;
char* __result_obj__339;
    __result_obj__339 = come_increment_ref_count(((char*)(__right_value627=__builtin_string("sStructInitializer"))));
    (__right_value627 = come_decrement_ref_count(__right_value627, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__339 = come_decrement_ref_count(__result_obj__339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__339;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_563;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct buffer* buf_564;
int i_565;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_566;
struct tuple2$2char$phsNode$ph* it_569;
struct tuple2$2char$phsNode$ph* multiple_assign_var28 = (void*)0;
char* name_572=0;
struct sNode* value_573=0;
_Bool Value_574;
_Bool __result_obj__346;
void* __right_value630 = (void*)0;
struct CVALUE* come_value2_575;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct CVALUE* come_value_576;
void* __right_value633 = (void*)0;
char* __dec_obj151;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sType* __dec_obj152;
_Bool __result_obj__347;
    initializer_563=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_564=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1143, "struct buffer*"))));
    buffer_append_str(buf_564,"{");
    i_565=0;
    for(    o2_saved_566=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_563)),it_569=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_566));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_566));    it_569=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_566))    ){
        multiple_assign_var28=it_569;
        name_572=(char*)come_increment_ref_count(multiple_assign_var28->v1);
        value_573=(struct sNode*)come_increment_ref_count(multiple_assign_var28->v2);
        Value_574=node_compile(value_573,info);
        if(        !Value_574) {
            __result_obj__346 = (_Bool)0;
            (name_572 = come_decrement_ref_count(name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((value_573) ? value_573 = come_decrement_ref_count(value_573, ((struct sNode*)value_573)->finalize, ((struct sNode*)value_573)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(o2_saved_566,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_563,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_564,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__346;
        }
        else {
        }
        come_value2_575=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        name_572) {
            buffer_append_format(buf_564,".%s = %s",name_572,come_value2_575->c_value);
        }
        else {
            buffer_append_format(buf_564,"%s",come_value2_575->c_value);
        }
        i_565++;
        if(        i_565!=list$1tuple2$2char$phsNode$ph$ph_length(initializer_563)) {
            buffer_append_str(buf_564,",");
        }
        (name_572 = come_decrement_ref_count(name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((value_573) ? value_573 = come_decrement_ref_count(value_573, ((struct sNode*)value_573)->finalize, ((struct sNode*)value_573)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value2_575,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_566,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_564,"}");
    come_value_576=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1169, "struct CVALUE*"))));
    __dec_obj151=come_value_576->c_value,
    come_value_576->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_564));
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj152=come_value_576->type,
    come_value_576->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1172, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_576->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_576));
    __result_obj__347 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_563,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_564,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_576,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__347;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__332;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_555;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_556;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__337;
    if(    self==((void*)0)) {
        __result_obj__332 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__332,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__332;
    }
    result_555=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1185, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_556=self->head;
    while(it_556!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_555,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_556->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_555,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_556->item)));
        }
        it_556=it_556->next;
    }
    __result_obj__337 = come_increment_ref_count(result_555);
    /*c*/ come_call_finalizer3(result_555,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__337,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__337;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_553;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_554;
    it_553=self->head;
    while(it_553!=((void*)0)) {
        prev_it_554=it_553;
        it_553=it_553->next;
        /*c*/ come_call_finalizer3(prev_it_554,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__333;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__333 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__333,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__333;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value618 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_557;
struct tuple2$2char$phsNode$ph* __dec_obj145;
void* __right_value619 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_558;
struct tuple2$2char$phsNode$ph* __dec_obj146;
void* __right_value620 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_559;
struct tuple2$2char$phsNode$ph* __dec_obj147;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__334;
    if(    self->len==0) {
        litem_557=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value618=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1204, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_557->prev=((void*)0);
        litem_557->next=((void*)0);
        __dec_obj145=litem_557->item,
        litem_557->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj145,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_557;
        self->head=litem_557;
    }
    else if(    self->len==1) {
        litem_558=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value619=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1214, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_558->prev=self->head;
        litem_558->next=((void*)0);
        __dec_obj146=litem_558->item,
        litem_558->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj146,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_558;
        self->head->next=litem_558;
    }
    else {
        litem_559=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value620=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1224, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_559->prev=self->tail;
        litem_559->next=((void*)0);
        __dec_obj147=litem_559->item,
        litem_559->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj147,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_559;
        self->tail=litem_559;
    }
    self->len++;
    __result_obj__334 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__335;
void* __right_value621 = (void*)0;
struct tuple2$2char$phsNode$ph* result_560;
void* __right_value622 = (void*)0;
char* __dec_obj148;
void* __right_value623 = (void*)0;
struct sNode* __dec_obj149;
struct tuple2$2char$phsNode$ph* __result_obj__336;
    if(    self==(void*)0) {
        __result_obj__335 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__335,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__335;
    }
    result_560=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj148=result_560->v1,
        result_560->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj149=result_560->v2,
        result_560->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__336 = come_increment_ref_count(result_560);
    /*c*/ come_call_finalizer3(result_560,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__336,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__336;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_561;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_562;
    it_561=self->head;
    while(it_561!=((void*)0)) {
        prev_it_562=it_561;
        it_561=it_561->next;
        /*c*/ come_call_finalizer3(prev_it_562,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_567;
struct tuple2$2char$phsNode$ph* __result_obj__340;
struct tuple2$2char$phsNode$ph* __result_obj__341;
struct tuple2$2char$phsNode$ph* result_568;
struct tuple2$2char$phsNode$ph* __result_obj__342;
result_567 = (void*)0;
result_568 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_567,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__340 = result_567;
        return __result_obj__340;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__341 = self->it->item;
        return __result_obj__341;
    }
    memset(&result_568,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__342 = result_568;
    return __result_obj__342;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_570;
struct tuple2$2char$phsNode$ph* __result_obj__343;
struct tuple2$2char$phsNode$ph* __result_obj__344;
struct tuple2$2char$phsNode$ph* result_571;
struct tuple2$2char$phsNode$ph* __result_obj__345;
result_570 = (void*)0;
result_571 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_570,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__343 = result_570;
        return __result_obj__343;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__344 = self->it->item;
        return __result_obj__344;
    }
    memset(&result_571,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__345 = result_571;
    return __result_obj__345;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_577;
void* __right_value639 = (void*)0;
char* name_578;
_Bool no_comma_579;
void* __right_value640 = (void*)0;
struct sNode* exp_580;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
_Bool no_comma_582;
void* __right_value643 = (void*)0;
struct sNode* exp_583;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
char* name_584;
_Bool no_comma_585;
void* __right_value647 = (void*)0;
struct sNode* exp_586;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
_Bool no_comma_587;
void* __right_value650 = (void*)0;
struct sNode* exp_588;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value658 = (void*)0;
struct sNode* __result_obj__351;
    expected_next_character(123,info);
    initializer_577=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1185, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_578=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_579=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_580=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_579;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_577,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1200, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_578),(struct sNode*)come_increment_ref_count(exp_580))));
        (name_578 = come_decrement_ref_count(name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((exp_580) ? exp_580 = come_decrement_ref_count(exp_580, ((struct sNode*)exp_580)->finalize, ((struct sNode*)exp_580)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_582=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_582;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_577,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1208, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_583))));
        ((exp_583) ? exp_583 = come_decrement_ref_count(exp_583, ((struct sNode*)exp_583)->finalize, ((struct sNode*)exp_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_584=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_585=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_586=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_585;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_577,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1234, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_584),(struct sNode*)come_increment_ref_count(exp_586))));
            (name_584 = come_decrement_ref_count(name_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_586) ? exp_586 = come_decrement_ref_count(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_587=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_588=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_587;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_577,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1242, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_588))));
            ((exp_588) ? exp_588 = come_decrement_ref_count(exp_588, ((struct sNode*)exp_588)->finalize, ((struct sNode*)exp_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1248, "struct sNode");
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value654=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1248, "struct sStructInitializer*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_577),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result_obj__351 = come_increment_ref_count(((struct sNode*)(__right_value658=_inf_value4)));
    /*c*/ come_call_finalizer3(initializer_577,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value654,sStructInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value658) ? __right_value658 = come_decrement_ref_count(__right_value658, ((struct sNode*)__right_value658)->finalize, ((struct sNode*)__right_value658)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__351) ? __result_obj__351 = come_decrement_ref_count(__result_obj__351, ((struct sNode*)__result_obj__351)->finalize, ((struct sNode*)__result_obj__351)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__351;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_581;
    result_581=0;
    result_581+=int_get_hash_key(((int)self->v1));
    result_581+=int_get_hash_key(((int)self->v2));
    return result_581;
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
char* __dec_obj153;
struct sNode* __dec_obj154;
struct tuple2$2char$phsNode$ph* __result_obj__348;
    __dec_obj153=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj154=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__348 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__348,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__348;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
struct sStructInitializer* __result_obj__349;
void* __right_value655 = (void*)0;
struct sStructInitializer* result_589;
void* __right_value656 = (void*)0;
char* __dec_obj155;
void* __right_value657 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj156;
struct sStructInitializer* __result_obj__350;
    if(    self==(void*)0) {
        __result_obj__349 = (void*)0;
        return __result_obj__349;
    }
    result_589=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*"));
    if(    self!=((void*)0)) {
        result_589->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_589->sname,
        result_589->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_589->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj156=result_589->initializer,
        result_589->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj156,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__350 = result_589;
    /*c*/ come_call_finalizer3(result_589,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__350;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param){
void* __right_value659 = (void*)0;
struct sVar* self_590;
void* __right_value660 = (void*)0;
char* __dec_obj157;
void* __right_value661 = (void*)0;
struct sType* __dec_obj158;
void* __right_value662 = (void*)0;
char* __dec_obj159;
void* __right_value663 = (void*)0;
char* __dec_obj160;
void* __right_value664 = (void*)0;
char* __dec_obj161;
char* __dec_obj162;
void* __right_value670 = (void*)0;
    self_590=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1253, "struct sVar*"));
    __dec_obj157=self_590->mName,
    self_590->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj158=self_590->mType,
    self_590->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    function_param) {
        __dec_obj159=self_590->mCValueName,
        self_590->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int n_591=0;
        __dec_obj160=self_590->mCValueName,
        self_590->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_591++));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    self_590->mAllocaValue=(_Bool)0;
    self_590->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj161=self_590->mFunName,
        self_590->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->come_fun->mName));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj162=self_590->mFunName,
        self_590->mFunName=((void*)0);
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_590));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_590,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_609;
unsigned int it_610;
_Bool same_key_exist_611;
char* it2_612;
struct map$2char$phsVar$ph* __result_obj__362;
    if(    self->len*10>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_609=string_get_hash_key(((char*)key))%self->size;
    it_610=hash_609;
    while((_Bool)1) {
        if(        self->item_existance[it_610]) {
            if(            string_equals(self->keys[it_610],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_610]);
                    (self->keys[it_610] = come_decrement_ref_count(self->keys[it_610], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_610]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_610]);
                    self->keys[it_610]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_610],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_610]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_610]=item;
                }
                break;
            }
            it_610++;
            if(            it_610>=self->size) {
                it_610=0;
            }
            else if(            it_610==hash_609) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_610]=(_Bool)1;
            if(            1) {
                self->keys[it_610]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_610]=key;
            }
            if(            1) {
                self->items[it_610]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_610]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_611=(_Bool)0;
    for(    it2_612=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_612=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_612,key)) {
            same_key_exist_611=(_Bool)1;
        }
    }
    if(    !same_key_exist_611) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__362 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_592;
void* __right_value665 = (void*)0;
char** keys_593;
void* __right_value666 = (void*)0;
struct sVar** items_594;
void* __right_value667 = (void*)0;
_Bool* item_existance_595;
int len_596;
char* it_599;
struct sVar* default_value_602;
void* __right_value668 = (void*)0;
struct sVar* it2_603;
unsigned int hash_606;
int n_607;
struct sVar* default_value_608;
void* __right_value669 = (void*)0;
default_value_602 = (void*)0;
default_value_608 = (void*)0;
    size_592=self->size*10;
    keys_593=(char**)come_increment_ref_count(((char**)(__right_value665=(char**)come_calloc(1, sizeof(char*)*(1*(size_592)), "./comelang.h", 2328, "char**"))));
    items_594=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value666=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_592)), "./comelang.h", 2329, "struct sVar**"))));
    item_existance_595=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value667=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_592)), "./comelang.h", 2330, "_Bool*"))));
    len_596=0;
    for(    it_599=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_599=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_602,0,sizeof(struct sVar*));
        it2_603=((struct sVar*)(__right_value668=map$2char$phsVar$ph_at(self,it_599,(struct sVar*)come_increment_ref_count(default_value_602))));
        /*c*/ come_call_finalizer3(__right_value668,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_606=string_get_hash_key(((char*)it_599))%size_592;
        n_607=hash_606;
        while((_Bool)1) {
            if(            item_existance_595[n_607]) {
                n_607++;
                if(                n_607>=size_592) {
                    n_607=0;
                }
                else if(                n_607==hash_606) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_595[n_607]=(_Bool)1;
                keys_593[n_607]=it_599;
                items_594[n_607]=((struct sVar*)(__right_value669=map$2char$phsVar$ph_at(self,it_599,(struct sVar*)come_increment_ref_count(default_value_608))));
                /*c*/ come_call_finalizer3(__right_value669,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_596++;
                /*c*/ come_call_finalizer3(default_value_608,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_608,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_602,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_593;
    self->items=items_594;
    self->item_existance=item_existance_595;
    self->size=size_592;
    self->len=len_596;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_597;
char* __result_obj__352;
char* __result_obj__353;
char* result_598;
char* __result_obj__354;
result_597 = (void*)0;
result_598 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_597,0,sizeof(char*));
        __result_obj__352 = result_597;
        return __result_obj__352;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__353 = self->key_list->it->item;
        return __result_obj__353;
    }
    memset(&result_598,0,sizeof(char*));
    __result_obj__354 = result_598;
    return __result_obj__354;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_600;
char* __result_obj__355;
char* __result_obj__356;
char* result_601;
char* __result_obj__357;
result_600 = (void*)0;
result_601 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_600,0,sizeof(char*));
        __result_obj__355 = result_600;
        return __result_obj__355;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__356 = self->key_list->it->item;
        return __result_obj__356;
    }
    memset(&result_601,0,sizeof(char*));
    __result_obj__357 = result_601;
    return __result_obj__357;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_604;
unsigned int it_605;
struct sVar* __result_obj__358;
struct sVar* __result_obj__359;
struct sVar* __result_obj__360;
struct sVar* __result_obj__361;
    hash_604=string_get_hash_key(((char*)key))%self->size;
    it_605=hash_604;
    while((_Bool)1) {
        if(        self->item_existance[it_605]) {
            if(            string_equals(self->keys[it_605],key)) {
                __result_obj__358 = come_increment_ref_count(self->items[it_605]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__358,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__358;
            }
            it_605++;
            if(            it_605>=self->size) {
                it_605=0;
            }
            else if(            it_605==hash_604) {
                __result_obj__359 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__359,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__359;
            }
        }
        else {
            __result_obj__360 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__360,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__360;
        }
    }
    __result_obj__361 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__361,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__361;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value671 = (void*)0;
struct sVar* self_613;
void* __right_value672 = (void*)0;
char* __dec_obj163;
void* __right_value673 = (void*)0;
struct sType* __dec_obj164;
void* __right_value674 = (void*)0;
char* __dec_obj165;
void* __right_value675 = (void*)0;
    self_613=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1280, "struct sVar*"));
    __dec_obj163=self_613->mName,
    self_613->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj164=self_613->mType,
    self_613->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_613->mGlobal=(_Bool)1;
    __dec_obj165=self_613->mCValueName,
    self_613->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_613->mAllocaValue=(_Bool)0;
    self_613->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_613));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_613,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value676 = (void*)0;
struct sVar* self_614;
void* __right_value677 = (void*)0;
char* __dec_obj166;
void* __right_value678 = (void*)0;
struct sType* __dec_obj167;
void* __right_value679 = (void*)0;
char* __dec_obj168;
void* __right_value680 = (void*)0;
    self_614=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1297, "struct sVar*"));
    __dec_obj166=self_614->mName,
    self_614->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj167=self_614->mType,
    self_614->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_614->mGlobal=(_Bool)1;
    __dec_obj168=self_614->mCValueName,
    self_614->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_614->mAllocaValue=(_Bool)0;
    self_614->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_614));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_614,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real_615;
_Bool is_type_name_flag_616;
_Bool multiple_declare_617;
char* p_618;
int sline_619;
void* __right_value681 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* type_620=0;
char* name_621=0;
_Bool err_622=0;
void* __right_value682 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var30 = (void*)0;
struct sType* type_623=0;
char* name_624=0;
void* __right_value683 = (void*)0;
_Bool no_output_err_625;
_Bool no_comma_626;
_Bool no_output_come_code_627;
void* __right_value684 = (void*)0;
struct sNode* exp_628;
_Bool attr_define_629;
char* p_630;
int sline_631;
void* __right_value685 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* type_632=0;
char* name_633=0;
_Bool err_634=0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sFun* fun_635;
void* __right_value688 = (void*)0;
char* buf2_636;
struct list$1char$ph* multiple_assign_637;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct list$1char$ph* __dec_obj169;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
char* buf3_638;
void* __right_value693 = (void*)0;
_Bool no_comma_639;
void* __right_value694 = (void*)0;
struct sNode* right_value_640;
void* __right_value695 = (void*)0;
struct sNode* __dec_obj170;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value700 = (void*)0;
struct sNode* node_641;
struct sNode* __result_obj__363;
void* __right_value701 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c2_642=0;
char* Err_643=0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value706 = (void*)0;
struct sNode* node_644;
struct sNode* __result_obj__366;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_646;
void* __right_value709 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* base_type_647=0;
char* name_648=0;
_Bool err_649=0;
void* __right_value710 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var34 = (void*)0;
struct sType* type2_650=0;
char* var_name_651=0;
_Bool no_comma_652;
void* __right_value711 = (void*)0;
struct sNode* exp_653;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
_Bool no_comma_666;
void* __right_value717 = (void*)0;
struct sNode* exp_667;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var35 = (void*)0;
struct sType* type2_670=0;
char* var_name_671=0;
_Bool no_comma_672;
void* __right_value726 = (void*)0;
struct sNode* exp_673;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
_Bool no_comma_674;
void* __right_value729 = (void*)0;
struct sNode* exp_675;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sNode* right_node_676;
void* __right_value734 = (void*)0;
char* var_name2_677;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value739 = (void*)0;
struct sNode* node_678;
struct sNode* __result_obj__372;
void* __right_value740 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var36 = (void*)0;
struct sType* type_679=0;
char* name_680=0;
_Bool err_681=0;
void* __right_value741 = (void*)0;
char* __dec_obj182;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value753 = (void*)0;
struct sNode* self_node_687;
void* __right_value754 = (void*)0;
struct sNode* right_node_688;
void* __right_value755 = (void*)0;
struct sNode* node_689;
struct sNode* __result_obj__377;
void* __right_value756 = (void*)0;
struct sNode* __result_obj__378;
void* __right_value757 = (void*)0;
struct sNode* right_value_690;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value763 = (void*)0;
struct sNode* node_691;
struct sNode* __result_obj__379;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
_Bool _elif_conditional1;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value769 = (void*)0;
struct sNode* node_692;
void* __right_value770 = (void*)0;
struct sNode* __dec_obj191;
struct sNode* __result_obj__380;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value774 = (void*)0;
struct sNode* node_693;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj192;
struct sNode* __result_obj__381;
char* word_694;
void* __right_value776 = (void*)0;
char* __dec_obj193;
void* __right_value777 = (void*)0;
char* __dec_obj194;
_Bool is_type_name_flag_695;
void* __right_value778 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_696=0;
char* name_697=0;
_Bool err_698=0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value781 = (void*)0;
struct sNode* node_699;
struct sNode* __result_obj__382;
struct sNode* right_value_700;
_Bool no_comma_701;
void* __right_value782 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value784 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value788 = (void*)0;
struct sNode* node_702;
struct sNode* __result_obj__383;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value792 = (void*)0;
struct sNode* node_703;
struct sNode* __result_obj__384;
void* __right_value793 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c3_704=0;
char* Err_705=0;
word_694 = (void*)0;
    sline_real_615=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_616=is_type_name(buf,info);
    multiple_declare_617=(_Bool)0;
    if(    is_type_name_flag_616) {
        p_618=info->p;
        sline_619=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value681=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_620=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
            name_621=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            err_622=multiple_assign_var29->v3;
            /*c*/ come_call_finalizer3(__right_value681,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            err_622) {
                parse_sharp_v5(info);
                multiple_assign_var30=((struct tuple2$2sType$phchar$ph*)(__right_value682=parse_variable_name((struct sType*)come_increment_ref_count(type_620),(_Bool)1,info)));
                type_623=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_624=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                /*c*/ come_call_finalizer3(__right_value682,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value683=skip_block(info)));
                        (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        no_output_err_625=info->no_output_err;
                        no_comma_626=info->no_comma;
                        no_output_come_code_627=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_628=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_626;
                        info->no_output_err=no_output_err_625;
                        info->no_output_come_code=no_output_come_code_627;
                        ((exp_628) ? exp_628 = come_decrement_ref_count(exp_628, ((struct sNode*)exp_628)->finalize, ((struct sNode*)exp_628)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_624,info)&&*info->p==44) {
                    multiple_declare_617=(_Bool)1;
                }
                /*c*/ come_call_finalizer3(type_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_624 = come_decrement_ref_count(name_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_620,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_621 = come_decrement_ref_count(name_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_618;
        info->sline=sline_619;
    }
    attr_define_629=(_Bool)0;
    if(    is_type_name_flag_616&&info->defining_class) {
        p_630=info->p;
        sline_631=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value685=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_632=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_633=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_634=multiple_assign_var31->v3;
        /*c*/ come_call_finalizer3(__right_value685,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        err_634&&strmemcmp(info->p,"self")) {
            attr_define_629=(_Bool)1;
        }
        info->p=p_630;
        info->sline=sline_631;
        /*c*/ come_call_finalizer3(type_632,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_633 = come_decrement_ref_count(name_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_635=((struct sFun*)(__right_value687=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value686=__builtin_string(buf))))));
    (__right_value686 = come_decrement_ref_count(__right_value686, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value687,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_636=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_637=((void*)0);
        if(        *info->p==44) {
            __dec_obj169=multiple_assign_637,
            multiple_assign_637=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1406, "struct list$1char$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj169,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1char$ph_push_back(multiple_assign_637,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf2_636)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_638=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph_push_back(multiple_assign_637,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf3_638)));
                (buf3_638 = come_decrement_ref_count(buf3_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_639=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_640=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_639;
            parse_sharp_v5(info);
            __dec_obj170=right_value_640,
            right_value_640=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_640),info));
            (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1436, "struct sNode");
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value699=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1436, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2_636)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_637),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_640),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_641=(struct sNode*)come_increment_ref_count(_inf_value5);
            /*c*/ come_call_finalizer3(__right_value699,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_615;
            __result_obj__363 = come_increment_ref_count(node_641);
            ((right_value_640) ? right_value_640 = come_decrement_ref_count(right_value_640, ((struct sNode*)right_value_640)->finalize, ((struct sNode*)right_value_640)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_641) ? node_641 = come_decrement_ref_count(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf2_636 = come_decrement_ref_count(buf2_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(multiple_assign_637,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__363;
            ((right_value_640) ? right_value_640 = come_decrement_ref_count(right_value_640, ((struct sNode*)right_value_640)->finalize, ((struct sNode*)right_value_640)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_641) ? node_641 = come_decrement_ref_count(node_641, ((struct sNode*)node_641)->finalize, ((struct sNode*)node_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value701=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_exception_var_c2_642=multiple_assign_var32->v1;
            Err_643=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_643)?(puts(Err_643),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value701,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_643 = come_decrement_ref_count(Err_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (buf2_636 = come_decrement_ref_count(buf2_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(multiple_assign_637,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1446, "struct sNode");
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value703=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1446, "struct sNewChannel*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_644=(struct sNode*)come_increment_ref_count(_inf_value6);
        /*c*/ come_call_finalizer3(__right_value703,sNewChannel_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_615;
        __result_obj__366 = come_increment_ref_count(node_644);
        ((node_644) ? node_644 = come_decrement_ref_count(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__366) ? __result_obj__366 = come_decrement_ref_count(__result_obj__366, ((struct sNode*)__result_obj__366)->finalize, ((struct sNode*)__result_obj__366)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__366;
        ((node_644) ? node_644 = come_decrement_ref_count(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    multiple_declare_617) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_646=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1454, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value709=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_647=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
        name_648=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        err_649=multiple_assign_var33->v3;
        /*c*/ come_call_finalizer3(__right_value709,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_649) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var34=((struct tuple2$2sType$phchar$ph*)(__right_value710=parse_variable_name((struct sType*)come_increment_ref_count(base_type_647),(_Bool)1,info)));
        type2_650=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
        var_name_651=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        /*c*/ come_call_finalizer3(__right_value710,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_650->mClass->mStruct&&list$1sNode$ph_length(type2_650->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_652=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_653=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_652;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_646,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1481, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_650),(char*)come_increment_ref_count(var_name_651),(struct sNode*)come_increment_ref_count(exp_653))));
                ((exp_653) ? exp_653 = come_decrement_ref_count(exp_653, ((struct sNode*)exp_653)->finalize, ((struct sNode*)exp_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_666=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_667=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_666;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_646,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1491, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_650),(char*)come_increment_ref_count(var_name_651),(struct sNode*)come_increment_ref_count(exp_667))));
                ((exp_667) ? exp_667 = come_decrement_ref_count(exp_667, ((struct sNode*)exp_667)->finalize, ((struct sNode*)exp_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_646,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1495, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_650),(char*)come_increment_ref_count(var_name_651),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var35=((struct tuple2$2sType$phchar$ph*)(__right_value725=parse_variable_name((struct sType*)come_increment_ref_count(base_type_647),(_Bool)0,info)));
            type2_670=(struct sType*)come_increment_ref_count(multiple_assign_var35->v1);
            var_name_671=(char*)come_increment_ref_count(multiple_assign_var35->v2);
            /*c*/ come_call_finalizer3(__right_value725,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_670->mClass->mStruct&&list$1sNode$ph_length(type2_670->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_672=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_673=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_672;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_646,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1517, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_670),(char*)come_increment_ref_count(var_name_671),(struct sNode*)come_increment_ref_count(exp_673))));
                    ((exp_673) ? exp_673 = come_decrement_ref_count(exp_673, ((struct sNode*)exp_673)->finalize, ((struct sNode*)exp_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    no_comma_674=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_675=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_674;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_646,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1529, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_670),(char*)come_increment_ref_count(var_name_671),(struct sNode*)come_increment_ref_count(exp_675))));
                    ((exp_675) ? exp_675 = come_decrement_ref_count(exp_675, ((struct sNode*)exp_675)->finalize, ((struct sNode*)exp_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_646,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1533, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_670),(char*)come_increment_ref_count(var_name_671),((void*)0))));
            }
            /*c*/ come_call_finalizer3(type2_670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_671 = come_decrement_ref_count(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        right_node_676=((void*)0);
        var_name2_677=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1540, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value738=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1540, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_646),(struct sType*)come_increment_ref_count(base_type_647),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_678=(struct sNode*)come_increment_ref_count(_inf_value7);
        /*c*/ come_call_finalizer3(__right_value738,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_615;
        __result_obj__372 = come_increment_ref_count(node_678);
        /*c*/ come_call_finalizer3(multiple_declare_646,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_648 = come_decrement_ref_count(name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_650,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_651 = come_decrement_ref_count(var_name_651, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_676) ? right_node_676 = come_decrement_ref_count(right_node_676, ((struct sNode*)right_node_676)->finalize, ((struct sNode*)right_node_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_677 = come_decrement_ref_count(var_name2_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_678) ? node_678 = come_decrement_ref_count(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__372) ? __result_obj__372 = come_decrement_ref_count(__result_obj__372, ((struct sNode*)__result_obj__372)->finalize, ((struct sNode*)__result_obj__372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__372;
        /*c*/ come_call_finalizer3(multiple_declare_646,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_648 = come_decrement_ref_count(name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_650,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_651 = come_decrement_ref_count(var_name_651, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_676) ? right_node_676 = come_decrement_ref_count(right_node_676, ((struct sNode*)right_node_676)->finalize, ((struct sNode*)right_node_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_677 = come_decrement_ref_count(var_name2_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_678) ? node_678 = come_decrement_ref_count(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    attr_define_629) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var36=((struct tuple3$3sType$phchar$phbool$*)(__right_value740=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_679=(struct sType*)come_increment_ref_count(multiple_assign_var36->v1);
        name_680=(char*)come_increment_ref_count(multiple_assign_var36->v2);
        err_681=multiple_assign_var36->v3;
        /*c*/ come_call_finalizer3(__right_value740,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_681) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj182=name_680,
        name_680=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1563, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_680),(struct sType*)come_increment_ref_count(type_679))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1571, "struct sNode");
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value752=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1571, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_687=(struct sNode*)come_increment_ref_count(_inf_value8);
            /*c*/ come_call_finalizer3(__right_value752,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            right_node_688=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_689=(struct sNode*)come_increment_ref_count(store_field(self_node_687,(struct sNode*)come_increment_ref_count(right_node_688),(char*)come_increment_ref_count(name_680),info));
            info->sline_real=sline_real_615;
            __result_obj__377 = come_increment_ref_count(node_689);
            ((self_node_687) ? self_node_687 = come_decrement_ref_count(self_node_687, ((struct sNode*)self_node_687)->finalize, ((struct sNode*)self_node_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_688) ? right_node_688 = come_decrement_ref_count(right_node_688, ((struct sNode*)right_node_688)->finalize, ((struct sNode*)right_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_689) ? node_689 = come_decrement_ref_count(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(type_679,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_680 = come_decrement_ref_count(name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__377) ? __result_obj__377 = come_decrement_ref_count(__result_obj__377, ((struct sNode*)__result_obj__377)->finalize, ((struct sNode*)__result_obj__377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__377;
            ((self_node_687) ? self_node_687 = come_decrement_ref_count(self_node_687, ((struct sNode*)self_node_687)->finalize, ((struct sNode*)self_node_687)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_688) ? right_node_688 = come_decrement_ref_count(right_node_688, ((struct sNode*)right_node_688)->finalize, ((struct sNode*)right_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_689) ? node_689 = come_decrement_ref_count(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real_615;
            __result_obj__378 = come_increment_ref_count(((struct sNode*)(__right_value756=create_null_node(info))));
            /*c*/ come_call_finalizer3(type_679,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_680 = come_decrement_ref_count(name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value756) ? __right_value756 = come_decrement_ref_count(__right_value756, ((struct sNode*)__right_value756)->finalize, ((struct sNode*)__right_value756)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__378) ? __result_obj__378 = come_decrement_ref_count(__result_obj__378, ((struct sNode*)__result_obj__378)->finalize, ((struct sNode*)__result_obj__378)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__378;
        }
        /*c*/ come_call_finalizer3(type_679,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_680 = come_decrement_ref_count(name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !is_type_name_flag_616&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_690=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj190=right_value_690,
        right_value_690=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_690),info));
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1596, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value762=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1596, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_690),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_691=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value762,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_615;
        __result_obj__379 = come_increment_ref_count(node_691);
        ((right_value_690) ? right_value_690 = come_decrement_ref_count(right_value_690, ((struct sNode*)right_value_690)->finalize, ((struct sNode*)right_value_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_691) ? node_691 = come_decrement_ref_count(node_691, ((struct sNode*)node_691)->finalize, ((struct sNode*)node_691)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__379) ? __result_obj__379 = come_decrement_ref_count(__result_obj__379, ((struct sNode*)__result_obj__379)->finalize, ((struct sNode*)__result_obj__379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__379;
        ((right_value_690) ? right_value_690 = come_decrement_ref_count(right_value_690, ((struct sNode*)right_value_690)->finalize, ((struct sNode*)right_value_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_691) ? node_691 = come_decrement_ref_count(node_691, ((struct sNode*)node_691)->finalize, ((struct sNode*)node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_616||((struct sFun*)(__right_value765=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value764=__builtin_string(buf)))))))),    (__right_value764 = come_decrement_ref_count(__right_value764, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value765,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1601, "struct sNode");
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value768=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1601, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_692=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*c*/ come_call_finalizer3(__right_value768,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj191=node_692,
        node_692=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_692),info));
        (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_615;
        __result_obj__380 = come_increment_ref_count(node_692);
        ((node_692) ? node_692 = come_decrement_ref_count(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        ((node_692) ? node_692 = come_decrement_ref_count(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !is_type_name_flag_616) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1609, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value773=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1609, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_693=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*c*/ come_call_finalizer3(__right_value773,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj192=node_693,
        node_693=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_693),info));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_615;
        __result_obj__381 = come_increment_ref_count(node_693);
        ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
        ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj193=word_694,
            word_694=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj194=word_694,
            word_694=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        is_type_name_flag_695=is_type_name(word_694,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_695) {
            parse_sharp_v5(info);
            multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value778=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_696=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
            name_697=(char*)come_increment_ref_count(multiple_assign_var37->v2);
            err_698=multiple_assign_var37->v3;
            /*c*/ come_call_finalizer3(__right_value778,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            !err_698) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1646, "struct sNode");
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value780=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1646, "struct sLoadNode*")),(char*)come_increment_ref_count(name_697),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_699=(struct sNode*)come_increment_ref_count(_inf_value12);
                /*c*/ come_call_finalizer3(__right_value780,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_615;
                __result_obj__382 = come_increment_ref_count(node_699);
                ((node_699) ? node_699 = come_decrement_ref_count(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_696,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_697 = come_decrement_ref_count(name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_694 = come_decrement_ref_count(word_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__382;
                ((node_699) ? node_699 = come_decrement_ref_count(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_700=((void*)0);
                if(                type_696->mClass->mStruct&&list$1sNode$ph_length(type_696->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_701=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj195=right_value_700,
                    right_value_700=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    info->no_comma=no_comma_701;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj196=right_value_700,
                    right_value_700=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj197=right_value_700,
                right_value_700=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_700),info));
                (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1675, "struct sNode");
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value787=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1675, "struct sStoreNode*")),(char*)come_increment_ref_count(name_697),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_696),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_700),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_702=(struct sNode*)come_increment_ref_count(_inf_value13);
                /*c*/ come_call_finalizer3(__right_value787,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_615;
                __result_obj__383 = come_increment_ref_count(node_702);
                ((right_value_700) ? right_value_700 = come_decrement_ref_count(right_value_700, ((struct sNode*)right_value_700)->finalize, ((struct sNode*)right_value_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_696,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_697 = come_decrement_ref_count(name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_694 = come_decrement_ref_count(word_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__383;
                ((right_value_700) ? right_value_700 = come_decrement_ref_count(right_value_700, ((struct sNode*)right_value_700)->finalize, ((struct sNode*)right_value_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1680, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value791=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1680, "struct sStoreNode*")),(char*)come_increment_ref_count(name_697),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_696),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_703=(struct sNode*)come_increment_ref_count(_inf_value14);
                /*c*/ come_call_finalizer3(__right_value791,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_615;
                __result_obj__384 = come_increment_ref_count(node_703);
                ((node_703) ? node_703 = come_decrement_ref_count(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_696,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_697 = come_decrement_ref_count(name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_694 = come_decrement_ref_count(word_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__384;
                ((node_703) ? node_703 = come_decrement_ref_count(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            /*c*/ come_call_finalizer3(type_696,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_697 = come_decrement_ref_count(name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (word_694 = come_decrement_ref_count(word_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value793=err_msg(info,"unexpected word(%s)(1)",buf)));
    come_exception_var_c3_704=multiple_assign_var38->v1;
    Err_705=(char*)come_increment_ref_count(multiple_assign_var38->v2);
    ((Err_705)?(puts(Err_705),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value793,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    (Err_705 = come_decrement_ref_count(Err_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
struct sNewChannel* __result_obj__364;
void* __right_value704 = (void*)0;
struct sNewChannel* result_645;
void* __right_value705 = (void*)0;
char* __dec_obj171;
struct sNewChannel* __result_obj__365;
    if(    self==(void*)0) {
        __result_obj__364 = (void*)0;
        return __result_obj__364;
    }
    result_645=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(    self!=((void*)0)) {
        result_645->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj171=result_645->sname,
        result_645->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_645->sline_real=self->sline_real;
    }
    __result_obj__365 = result_645;
    /*c*/ come_call_finalizer3(result_645,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__365;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value712 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_654;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj172;
void* __right_value713 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_655;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj173;
void* __right_value714 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_656;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj174;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__367;
    if(    self->len==0) {
        litem_654=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value712=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1274, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_654->prev=((void*)0);
        litem_654->next=((void*)0);
        __dec_obj172=litem_654->item,
        litem_654->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj172,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_654;
        self->head=litem_654;
    }
    else if(    self->len==1) {
        litem_655=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value713=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1284, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_655->prev=self->head;
        litem_655->next=((void*)0);
        __dec_obj173=litem_655->item,
        litem_655->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj173,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_655;
        self->head->next=litem_655;
    }
    else {
        litem_656=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value714=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1294, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_656->prev=self->tail;
        litem_656->next=((void*)0);
        __dec_obj174=litem_656->item,
        litem_656->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj174,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_656;
        self->tail=litem_656;
    }
    self->len++;
    __result_obj__367 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__367;
}

static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self){
unsigned int result_657;
    result_657=0;
    result_657+=int_get_hash_key(((int)self->v1));
    result_657+=int_get_hash_key(((int)self->v2));
    result_657+=int_get_hash_key(((int)self->v3));
    return result_657;
}

static _Bool tuple3$3sType$phchar$phsNode$ph_equals(struct tuple3$3sType$phchar$phsNode$ph* left, struct tuple3$3sType$phchar$phsNode$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v3,right->v3)) {
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
    if(    !list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_658;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_659;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_658=left->head;
    it2_659=right->head;
    while(it_658!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_658->item,it2_659->item)) {
            return (_Bool)0;
        }
        it_658=it_658->next;
        it2_659=it2_659->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_660;
struct list_item$1sType$ph* it2_661;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_660=left->head;
    it2_661=right->head;
    while(it_660!=((void*)0)) {
        if(        !sType_equals(it_660->item,it2_661->item)) {
            return (_Bool)0;
        }
        it_660=it_660->next;
        it2_661=it2_661->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_662;
struct list_item$1sNode$ph* it2_663;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_662=left->head;
    it2_663=right->head;
    while(it_662!=((void*)0)) {
        if(        !sNode_equals(it_662->item,it2_663->item)) {
            return (_Bool)0;
        }
        it_662=it_662->next;
        it2_663=it2_663->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_664;
struct list_item$1char$ph* it2_665;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_664=left->head;
    it2_665=right->head;
    while(it_664!=((void*)0)) {
        if(        !string_equals(it_664->item,it2_665->item)) {
            return (_Bool)0;
        }
        it_664=it_664->next;
        it2_665=it2_665->next;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj175;
char* __dec_obj176;
struct sNode* __dec_obj177;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__368;
    __dec_obj175=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj176=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj177=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__368 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__368,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__368;
}

static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self){
struct tuple3$3sType$phchar$phvoid$p* __result_obj__369;
void* __right_value720 = (void*)0;
struct tuple3$3sType$phchar$phvoid$p* result_668;
void* __right_value721 = (void*)0;
struct sType* __dec_obj178;
void* __right_value722 = (void*)0;
char* __dec_obj179;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__370;
    if(    self==(void*)0) {
        __result_obj__369 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__369,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__369;
    }
    result_668=(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "tuple3$3sType$phchar$phvoid$p_clone", 3, "struct tuple3$3sType$phchar$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj178=result_668->v1,
        result_668->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        /*b*/ come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj179=result_668->v2,
        result_668->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_668->v3=self->v3;
    }
    __result_obj__370 = come_increment_ref_count(result_668);
    /*c*/ come_call_finalizer3(result_668,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__370,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__370;
}

static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self){
unsigned int result_669;
    result_669=0;
    result_669+=int_get_hash_key(((int)self->v1));
    result_669+=int_get_hash_key(((int)self->v2));
    result_669+=int_get_hash_key(((int)self->v3));
    return result_669;
}

static _Bool tuple3$3sType$phchar$phvoid$p_equals(struct tuple3$3sType$phchar$phvoid$p* left, struct tuple3$3sType$phchar$phvoid$p* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3){
struct sType* __dec_obj180;
char* __dec_obj181;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__371;
    __dec_obj180=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj181=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__371 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__371,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value742 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_682;
struct tuple2$2char$phsType$ph* __dec_obj183;
void* __right_value743 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_683;
struct tuple2$2char$phsType$ph* __dec_obj184;
void* __right_value744 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_684;
struct tuple2$2char$phsType$ph* __dec_obj185;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__373;
    if(    self->len==0) {
        litem_682=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value742=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1204, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_682->prev=((void*)0);
        litem_682->next=((void*)0);
        __dec_obj183=litem_682->item,
        litem_682->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj183,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_682;
        self->head=litem_682;
    }
    else if(    self->len==1) {
        litem_683=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value743=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1214, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_683->prev=self->head;
        litem_683->next=((void*)0);
        __dec_obj184=litem_683->item,
        litem_683->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj184,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_683;
        self->head->next=litem_683;
    }
    else {
        litem_684=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value744=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1224, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_684->prev=self->tail;
        litem_684->next=((void*)0);
        __dec_obj185=litem_684->item,
        litem_684->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj185,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_684;
        self->tail=litem_684;
    }
    self->len++;
    __result_obj__373 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__373;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__374;
void* __right_value745 = (void*)0;
struct tuple2$2char$phsType$ph* result_685;
void* __right_value746 = (void*)0;
char* __dec_obj186;
void* __right_value747 = (void*)0;
struct sType* __dec_obj187;
struct tuple2$2char$phsType$ph* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__374,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__374;
    }
    result_685=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj186=result_685->v1,
        result_685->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj187=result_685->v2,
        result_685->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__375 = come_increment_ref_count(result_685);
    /*c*/ come_call_finalizer3(result_685,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__375,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__375;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_686;
    result_686=0;
    result_686+=int_get_hash_key(((int)self->v1));
    result_686+=int_get_hash_key(((int)self->v2));
    return result_686;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj188;
struct sType* __dec_obj189;
struct tuple2$2char$phsType$ph* __result_obj__376;
    __dec_obj188=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj189=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__376 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__376,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__376;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node_706;
void* __right_value794 = (void*)0;
struct sNode* exp_707;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value800 = (void*)0;
struct sNode* __result_obj__387;
void* __right_value801 = (void*)0;
struct sNode* __dec_obj200;
struct sNode* __result_obj__388;
node_706 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_707=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1706, "struct sNode");
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value796=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1706, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp_707),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result_obj__387 = come_increment_ref_count(((struct sNode*)(__right_value800=_inf_value15)));
        ((exp_707) ? exp_707 = come_decrement_ref_count(exp_707, ((struct sNode*)exp_707)->finalize, ((struct sNode*)exp_707)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_706) ? node_706 = come_decrement_ref_count(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value796,sReadChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value800) ? __right_value800 = come_decrement_ref_count(__right_value800, ((struct sNode*)__right_value800)->finalize, ((struct sNode*)__right_value800)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__387) ? __result_obj__387 = come_decrement_ref_count(__result_obj__387, ((struct sNode*)__result_obj__387)->finalize, ((struct sNode*)__result_obj__387)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__387;
        ((exp_707) ? exp_707 = come_decrement_ref_count(exp_707, ((struct sNode*)exp_707)->finalize, ((struct sNode*)exp_707)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        __dec_obj200=node_706,
        node_706=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__388 = come_increment_ref_count(node_706);
    ((node_706) ? node_706 = come_decrement_ref_count(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__388) ? __result_obj__388 = come_decrement_ref_count(__result_obj__388, ((struct sNode*)__result_obj__388)->finalize, ((struct sNode*)__result_obj__388)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__388;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__385;
void* __right_value797 = (void*)0;
struct sReadChannelNode* result_708;
void* __right_value798 = (void*)0;
char* __dec_obj198;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj199;
struct sReadChannelNode* __result_obj__386;
    if(    self==(void*)0) {
        __result_obj__385 = (void*)0;
        return __result_obj__385;
    }
    result_708=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(    self!=((void*)0)) {
        result_708->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=result_708->sname,
        result_708->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_708->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj199=result_708->exp,
        result_708->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__386 = result_708;
    /*c*/ come_call_finalizer3(result_708,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__386;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value802 = (void*)0;
struct sNode* right_value_709;
void* __right_value803 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value810 = (void*)0;
struct sNode* __result_obj__391;
void* __right_value811 = (void*)0;
struct sNode* __result_obj__392;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_709=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj201=right_value_709,
        right_value_709=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_709),info));
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1729, "struct sNode");
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value805=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1729, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_709),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result_obj__391 = come_increment_ref_count(((struct sNode*)(__right_value810=_inf_value16)));
        ((right_value_709) ? right_value_709 = come_decrement_ref_count(right_value_709, ((struct sNode*)right_value_709)->finalize, ((struct sNode*)right_value_709)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value805,sWriteChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value810) ? __right_value810 = come_decrement_ref_count(__right_value810, ((struct sNode*)__right_value810)->finalize, ((struct sNode*)__right_value810)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__391) ? __result_obj__391 = come_decrement_ref_count(__result_obj__391, ((struct sNode*)__result_obj__391)->finalize, ((struct sNode*)__result_obj__391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__391;
        ((right_value_709) ? right_value_709 = come_decrement_ref_count(right_value_709, ((struct sNode*)right_value_709)->finalize, ((struct sNode*)right_value_709)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__392 = come_increment_ref_count(((struct sNode*)(__right_value811=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value811) ? __right_value811 = come_decrement_ref_count(__right_value811, ((struct sNode*)__right_value811)->finalize, ((struct sNode*)__right_value811)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__392) ? __result_obj__392 = come_decrement_ref_count(__result_obj__392, ((struct sNode*)__result_obj__392)->finalize, ((struct sNode*)__result_obj__392)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__392;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__389;
void* __right_value806 = (void*)0;
struct sWriteChannelNode* result_710;
void* __right_value807 = (void*)0;
char* __dec_obj202;
void* __right_value808 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value809 = (void*)0;
struct sNode* __dec_obj204;
struct sWriteChannelNode* __result_obj__390;
    if(    self==(void*)0) {
        __result_obj__389 = (void*)0;
        return __result_obj__389;
    }
    result_710=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(    self!=((void*)0)) {
        result_710->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=result_710->sname,
        result_710->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_710->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj203=result_710->exp,
        result_710->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj204=result_710->right_value,
        result_710->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__390 = result_710;
    /*c*/ come_call_finalizer3(result_710,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__390;
}

