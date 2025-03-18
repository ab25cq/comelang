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

struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNilNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
_Bool bool_value(_Bool self);
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
static void sNilNode_finalize(struct sNilNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_132;
struct list$1char$* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_132=0;    i_132<num_value;    i_132++    ){
        list$1char$_push_back(self,values[i_132]);
    }
    __result_obj__63 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_133;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_134;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_135;
struct list$1char$* __result_obj__62;
    if(    self->len==0) {
        litem_133=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1227, "struct list_item$1char$*"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        litem_133->item=item;
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1) {
        litem_134=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1237, "struct list_item$1char$*"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1247, "struct list_item$1char$*"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_136;
struct list_item$1char$* prev_it_137;
    it_136=self->head;
    while(it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*c*/ come_call_finalizer3(prev_it_137,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_138;
struct list$1char$p* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_138=0;    i_138<num_value;    i_138++    ){
        list$1char$p_push_back(self,values[i_138]);
    }
    __result_obj__66 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_139;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_140;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_141;
struct list$1char$p* __result_obj__65;
    if(    self->len==0) {
        litem_139=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1227, "struct list_item$1char$p*"))));
        litem_139->prev=((void*)0);
        litem_139->next=((void*)0);
        litem_139->item=item;
        self->tail=litem_139;
        self->head=litem_139;
    }
    else if(    self->len==1) {
        litem_140=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1237, "struct list_item$1char$p*"))));
        litem_140->prev=self->head;
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head->next=litem_140;
    }
    else {
        litem_141=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1247, "struct list_item$1char$p*"))));
        litem_141->prev=self->tail;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail->next=litem_141;
        self->tail=litem_141;
    }
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_142;
struct list_item$1char$p* prev_it_143;
    it_142=self->head;
    while(it_142!=((void*)0)) {
        prev_it_143=it_142;
        it_142=it_142->next;
        /*c*/ come_call_finalizer3(prev_it_143,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_144;
struct list$1short$* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_144=0;    i_144<num_value;    i_144++    ){
        list$1short$_push_back(self,values[i_144]);
    }
    __result_obj__69 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_145;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_146;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_147;
struct list$1short$* __result_obj__68;
    if(    self->len==0) {
        litem_145=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1227, "struct list_item$1short$*"))));
        litem_145->prev=((void*)0);
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail=litem_145;
        self->head=litem_145;
    }
    else if(    self->len==1) {
        litem_146=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1237, "struct list_item$1short$*"))));
        litem_146->prev=self->head;
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head->next=litem_146;
    }
    else {
        litem_147=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1247, "struct list_item$1short$*"))));
        litem_147->prev=self->tail;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail->next=litem_147;
        self->tail=litem_147;
    }
    self->len++;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_148;
struct list_item$1short$* prev_it_149;
    it_148=self->head;
    while(it_148!=((void*)0)) {
        prev_it_149=it_148;
        it_148=it_148->next;
        /*c*/ come_call_finalizer3(prev_it_149,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_150;
struct list$1int$* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_150=0;    i_150<num_value;    i_150++    ){
        list$1int$_push_back(self,values[i_150]);
    }
    __result_obj__72 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_151;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_152;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_153;
struct list$1int$* __result_obj__71;
    if(    self->len==0) {
        litem_151=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1227, "struct list_item$1int$*"))));
        litem_151->prev=((void*)0);
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail=litem_151;
        self->head=litem_151;
    }
    else if(    self->len==1) {
        litem_152=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1237, "struct list_item$1int$*"))));
        litem_152->prev=self->head;
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head->next=litem_152;
    }
    else {
        litem_153=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1247, "struct list_item$1int$*"))));
        litem_153->prev=self->tail;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail->next=litem_153;
        self->tail=litem_153;
    }
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_154;
struct list_item$1int$* prev_it_155;
    it_154=self->head;
    while(it_154!=((void*)0)) {
        prev_it_155=it_154;
        it_154=it_154->next;
        /*c*/ come_call_finalizer3(prev_it_155,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_156;
struct list$1long$* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_156=0;    i_156<num_value;    i_156++    ){
        list$1long$_push_back(self,values[i_156]);
    }
    __result_obj__75 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__75,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__75;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_157;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_158;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_159;
struct list$1long$* __result_obj__74;
    if(    self->len==0) {
        litem_157=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1227, "struct list_item$1long$*"))));
        litem_157->prev=((void*)0);
        litem_157->next=((void*)0);
        litem_157->item=item;
        self->tail=litem_157;
        self->head=litem_157;
    }
    else if(    self->len==1) {
        litem_158=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1237, "struct list_item$1long$*"))));
        litem_158->prev=self->head;
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head->next=litem_158;
    }
    else {
        litem_159=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1247, "struct list_item$1long$*"))));
        litem_159->prev=self->tail;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail->next=litem_159;
        self->tail=litem_159;
    }
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_160;
struct list_item$1long$* prev_it_161;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        prev_it_161=it_160;
        it_160=it_160->next;
        /*c*/ come_call_finalizer3(prev_it_161,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_162;
struct list$1float$* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_162=0;    i_162<num_value;    i_162++    ){
        list$1float$_push_back(self,values[i_162]);
    }
    __result_obj__78 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__78,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_163;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_164;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_165;
struct list$1float$* __result_obj__77;
    if(    self->len==0) {
        litem_163=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1227, "struct list_item$1float$*"))));
        litem_163->prev=((void*)0);
        litem_163->next=((void*)0);
        litem_163->item=item;
        self->tail=litem_163;
        self->head=litem_163;
    }
    else if(    self->len==1) {
        litem_164=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1237, "struct list_item$1float$*"))));
        litem_164->prev=self->head;
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head->next=litem_164;
    }
    else {
        litem_165=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1247, "struct list_item$1float$*"))));
        litem_165->prev=self->tail;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail->next=litem_165;
        self->tail=litem_165;
    }
    self->len++;
    __result_obj__77 = self;
    return __result_obj__77;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_166;
struct list_item$1float$* prev_it_167;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        prev_it_167=it_166;
        it_166=it_166->next;
        /*c*/ come_call_finalizer3(prev_it_167,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_168;
struct list$1double$* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_168=0;    i_168<num_value;    i_168++    ){
        list$1double$_push_back(self,values[i_168]);
    }
    __result_obj__81 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__81,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_169;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_170;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_171;
struct list$1double$* __result_obj__80;
    if(    self->len==0) {
        litem_169=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1227, "struct list_item$1double$*"))));
        litem_169->prev=((void*)0);
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail=litem_169;
        self->head=litem_169;
    }
    else if(    self->len==1) {
        litem_170=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1237, "struct list_item$1double$*"))));
        litem_170->prev=self->head;
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head->next=litem_170;
    }
    else {
        litem_171=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1247, "struct list_item$1double$*"))));
        litem_171->prev=self->tail;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail->next=litem_171;
        self->tail=litem_171;
    }
    self->len++;
    __result_obj__80 = self;
    return __result_obj__80;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_172;
struct list_item$1double$* prev_it_173;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*c*/ come_call_finalizer3(prev_it_173,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__115 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__115,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__115;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_207;
struct list_item$1char$ph* prev_it_208;
    it_207=self->head;
    while(it_207!=((void*)0)) {
        prev_it_208=it_207;
        it_207=it_207->next;
        /*c*/ come_call_finalizer3(prev_it_208,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_212;
char* __dec_obj13;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_213;
char* __dec_obj14;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_214;
char* __dec_obj15;
struct list$1char$ph* __result_obj__117;
    if(    self->len==0) {
        litem_212=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1227, "struct list_item$1char$ph*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        __dec_obj13=litem_212->item,
        litem_212->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1237, "struct list_item$1char$ph*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        __dec_obj14=litem_213->item,
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1247, "struct list_item$1char$ph*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        __dec_obj15=litem_214->item,
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__117 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__117;
}

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value224 = (void*)0;
struct sType* generics_type_249;
struct sType* __dec_obj40;
struct sClass* klass_277;
char* class_name_278;
struct sFun* operator_fun_279;
char* fun_name2_280;
struct sGenericsFun* generics_fun_281;
void* __right_value225 = (void*)0;
char* none_generics_name_282;
void* __right_value226 = (void*)0;
struct sType* obj_type_283;
void* __right_value227 = (void*)0;
char* __dec_obj41;
void* __right_value228 = (void*)0;
char* fun_name3_284;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* no_solved_type_287;
struct sType* __dec_obj42;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_288=0;
_Bool err_289=0;
_Bool __result_obj__186;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_293=0;
char* fun_name_294=0;
void* __right_value235 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun2_295=0;
char* fun_name2_296=0;
void* __right_value236 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_297=0;
char* fun_name_298=0;
void* __right_value237 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_299=0;
char* fun_name2_300=0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
char* __dec_obj43;
int i_301;
void* __right_value240 = (void*)0;
char* new_fun_name_302;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
char* __dec_obj44;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* obj_type_303;
void* __right_value245 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var6 = (void*)0;
struct sFun* fun_304=0;
char* fun_name_305=0;
void* __right_value246 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var7 = (void*)0;
struct sFun* fun2_306=0;
char* fun_name2_307=0;
void* __right_value247 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun_308=0;
char* fun_name_309=0;
void* __right_value248 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var9 = (void*)0;
struct sFun* fun2_310=0;
char* fun_name2_311=0;
_Bool result_312;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct CVALUE* come_value_313;
char* left_value2_314;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_1_318=0;
char* Err_319=0;
_Bool _if_conditional1;
_Bool __result_obj__193;
void* __right_value255 = (void*)0;
_Bool _if_conditional2;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
char* __dec_obj45;
void* __right_value258 = (void*)0;
char* __dec_obj46;
char* right_value2_320;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_2_321=0;
char* Err_322=0;
_Bool _if_conditional3;
_Bool __result_obj__194;
void* __right_value263 = (void*)0;
_Bool _if_conditional4;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
char* __dec_obj47;
void* __right_value266 = (void*)0;
char* __dec_obj48;
void* __right_value267 = (void*)0;
struct sType* type2_323;
void* __right_value268 = (void*)0;
struct sType* type3_324;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
char* __dec_obj49;
struct sType* result_type_325;
struct sType* obj_type_326;
void* __right_value273 = (void*)0;
struct sType* __dec_obj50;
void* __right_value274 = (void*)0;
char* __dec_obj51;
_Bool __result_obj__196;
fun_name2_280 = (void*)0;
memset(&i_301, 0, sizeof(int));
left_value2_314 = (void*)0;
right_value2_320 = (void*)0;
    generics_type_249=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_249->mNoSolvedGenericsType) {
        __dec_obj40=generics_type_249,
        generics_type_249=(struct sType*)come_increment_ref_count(generics_type_249->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_277=type->mClass;
    class_name_278=klass_277->mName;
    operator_fun_279=((void*)0);
    generics_fun_281=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_282=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_283=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj41=fun_name2_280,
        fun_name2_280=(char*)come_increment_ref_count(create_method_name(obj_type_283,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_284=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_282,fun_name));
        generics_fun_281=((struct sGenericsFun*)(__right_value229=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_284,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value229,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_281) {
            no_solved_type_287=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj42=no_solved_type_287,
                no_solved_type_287=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value232=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_280)),generics_fun_281,obj_type_283,info)));
            name_288=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_289=multiple_assign_var1->v2;
            /*c*/ come_call_finalizer3(__right_value232,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_289) {
                __result_obj__186 = (_Bool)0;
                /*c*/ come_call_finalizer3(no_solved_type_287,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_288 = come_decrement_ref_count(name_288, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_282 = come_decrement_ref_count(none_generics_name_282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_284 = come_decrement_ref_count(fun_name3_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(generics_type_249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_280 = come_decrement_ref_count(fun_name2_280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__186;
            }
            operator_fun_279=((struct sFun*)(__right_value233=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_288)));
            /*c*/ come_call_finalizer3(__right_value233,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(no_solved_type_287,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_288 = come_decrement_ref_count(name_288, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value234=create_equals_automatically(obj_type_283,"equals",info)));
                fun_293=multiple_assign_var2->v1;
                fun_name_294=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*c*/ come_call_finalizer3(__right_value234,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value235=create_operator_equals_automatically(obj_type_283,"operator_equals",info)));
                fun2_295=multiple_assign_var3->v1;
                fun_name2_296=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                /*c*/ come_call_finalizer3(__right_value235,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_279=fun2_295;
                (fun_name_294 = come_decrement_ref_count(fun_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_296 = come_decrement_ref_count(fun_name2_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value236=create_not_equals_automatically(obj_type_283,"not_equals",info)));
                fun_297=multiple_assign_var4->v1;
                fun_name_298=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*c*/ come_call_finalizer3(__right_value236,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value237=create_operator_not_equals_automatically(obj_type_283,"operator_not_equals",info)));
                fun2_299=multiple_assign_var5->v1;
                fun_name2_300=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*c*/ come_call_finalizer3(__right_value237,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_279=fun2_299;
                (fun_name_298 = come_decrement_ref_count(fun_name_298, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_300 = come_decrement_ref_count(fun_name2_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                operator_fun_279=((struct sFun*)(__right_value238=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_280)));
                /*c*/ come_call_finalizer3(__right_value238,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        (none_generics_name_282 = come_decrement_ref_count(none_generics_name_282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_284 = come_decrement_ref_count(fun_name3_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj43=fun_name2_280,
        fun_name2_280=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_301=128-1;        i_301>=1;        i_301--        ){
            new_fun_name_302=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_280,i_301));
            operator_fun_279=((struct sFun*)(__right_value241=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_302)));
            /*c*/ come_call_finalizer3(__right_value241,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            operator_fun_279) {
                __dec_obj44=fun_name2_280,
                fun_name2_280=(char*)come_increment_ref_count(__builtin_string(new_fun_name_302));
                __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_302 = come_decrement_ref_count(new_fun_name_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_302 = come_decrement_ref_count(new_fun_name_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_279==((void*)0)) {
            operator_fun_279=((struct sFun*)(__right_value243=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_280)));
            /*c*/ come_call_finalizer3(__right_value243,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            obj_type_303=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_279==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value245=create_equals_automatically(obj_type_303,"equals",info)));
                    fun_304=multiple_assign_var6->v1;
                    fun_name_305=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                    /*c*/ come_call_finalizer3(__right_value245,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value246=create_operator_equals_automatically(obj_type_303,"operator_equals",info)));
                    fun2_306=multiple_assign_var7->v1;
                    fun_name2_307=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    /*c*/ come_call_finalizer3(__right_value246,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    operator_fun_279=fun2_306;
                    (fun_name_305 = come_decrement_ref_count(fun_name_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name2_307 = come_decrement_ref_count(fun_name2_307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value247=create_not_equals_automatically(obj_type_303,"not_equals",info)));
                    fun_308=multiple_assign_var8->v1;
                    fun_name_309=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    /*c*/ come_call_finalizer3(__right_value247,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    multiple_assign_var9=((struct tuple2$2sFun$pchar$ph*)(__right_value248=create_operator_not_equals_automatically(obj_type_303,"operator_not_equals",info)));
                    fun2_310=multiple_assign_var9->v1;
                    fun_name2_311=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    /*c*/ come_call_finalizer3(__right_value248,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    operator_fun_279=fun2_310;
                    (fun_name_309 = come_decrement_ref_count(fun_name_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name2_311 = come_decrement_ref_count(fun_name2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(obj_type_303,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_312=(_Bool)0;
    if(    operator_fun_279&&(list$1sType$ph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_313=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 98, "struct CVALUE*"))));
        multiple_assign_var10=((struct tuple2$2bool$char$ph*)(__right_value254=check_assign_type(((char*)(__right_value252=xsprintf("\%s is assigned to",((char*)(__right_value251=string_to_string(fun_name2_280)))))),((struct sType*)(__right_value253=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,0))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
        come_exception_var_1_318=multiple_assign_var10->v1;
        Err_319=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        (_if_conditional1=(Err_319)),        (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value253,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value254,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional1) {
            __result_obj__193 = (_Bool)1;
            /*c*/ come_call_finalizer3(come_value_313,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (left_value2_314 = come_decrement_ref_count(left_value2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_319 = come_decrement_ref_count(Err_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_type_249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name2_280 = come_decrement_ref_count(fun_name2_280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__193;
        }
        else {
        }
        if(        (_if_conditional2=(((struct sType*)(__right_value255=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,0)))->mHeap&&left_value->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value255,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)(__right_value256=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,0))),left_value->type,left_value,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value256,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj45=left_value2_314,
            left_value2_314=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj46=left_value2_314,
            left_value2_314=(char*)come_increment_ref_count((char*)come_memdup(left_value->c_value, "13op.c", 108, "char*"));
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        (Err_319 = come_decrement_ref_count(Err_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value262=check_assign_type(((char*)(__right_value260=xsprintf("\%s is assigned to",((char*)(__right_value259=string_to_string(fun_name2_280)))))),((struct sType*)(__right_value261=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,1))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
        come_exception_var_2_321=multiple_assign_var11->v1;
        Err_322=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        (_if_conditional3=(Err_322)),        (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value261,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value262,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional3) {
            __result_obj__194 = (_Bool)1;
            /*c*/ come_call_finalizer3(come_value_313,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (left_value2_314 = come_decrement_ref_count(left_value2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (right_value2_320 = come_decrement_ref_count(right_value2_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_322 = come_decrement_ref_count(Err_322, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_type_249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name2_280 = come_decrement_ref_count(fun_name2_280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__194;
        }
        else {
        }
        if(        (_if_conditional4=(((struct sType*)(__right_value263=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,1)))->mHeap&&right_value->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value263,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)(__right_value264=list$1sType$ph$p_operator_load_element(operator_fun_279->mParamTypes,1))),right_value->type,right_value,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value264,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj47=right_value2_320,
            right_value2_320=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj48=right_value2_320,
            right_value2_320=(char*)come_increment_ref_count((char*)come_memdup(right_value->c_value, "13op.c", 119, "char*"));
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        type2_323=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_279->mResultType));
        type3_324=(struct sType*)come_increment_ref_count(solve_generics(type2_323,generics_type_249,info));
        __dec_obj49=come_value_313->c_value,
        come_value_313->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value269=string_to_string(fun_name2_280))),((char*)(__right_value270=string_to_string(left_value2_314))),((char*)(__right_value271=string_to_string(right_value2_320)))));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_325=(struct sType*)come_increment_ref_count(type2_323);
        obj_type_326=(struct sType*)come_increment_ref_count(generics_type_249);
        come_value_313->var=((void*)0);
        __dec_obj50=come_value_313->type,
        come_value_313->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_324));
        /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        type3_324->mHeap) {
            append_object_to_right_values2(come_value_313,(struct sType*)come_increment_ref_count(type3_324),info,(_Bool)0);
        }
        __dec_obj51=come_value_313->c_value,
        come_value_313->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_313->c_value,come_value_313->type,info));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_come_last_code(info,"%s",come_value_313->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_313));
        result_312=(_Bool)1;
        /*c*/ come_call_finalizer3(come_value_313,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value2_314 = come_decrement_ref_count(left_value2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (right_value2_320 = come_decrement_ref_count(right_value2_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_322 = come_decrement_ref_count(Err_322, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_323,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_324,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_325,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(obj_type_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__196 = result_312;
    /*c*/ come_call_finalizer3(generics_type_249,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_280 = come_decrement_ref_count(fun_name2_280, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__196;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__167;
void* __right_value186 = (void*)0;
struct sType* result_250;
void* __right_value187 = (void*)0;
struct sType* __dec_obj16;
void* __right_value188 = (void*)0;
struct sType* __dec_obj17;
void* __right_value196 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value197 = (void*)0;
struct sType* __dec_obj22;
void* __right_value198 = (void*)0;
struct sType* __dec_obj23;
void* __right_value200 = (void*)0;
struct sNode* __dec_obj24;
void* __right_value201 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value202 = (void*)0;
char* __dec_obj26;
void* __right_value203 = (void*)0;
char* __dec_obj27;
void* __right_value204 = (void*)0;
char* __dec_obj28;
void* __right_value212 = (void*)0;
struct list$1sNode$ph* __dec_obj32;
void* __right_value213 = (void*)0;
char* __dec_obj33;
void* __right_value214 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value222 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value223 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__167 = (void*)0;
        return __result_obj__167;
    }
    result_250=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_250->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj16=result_250->mOriginalLoadVarType,
        result_250->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj16,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj17=result_250->mChannelType,
        result_250->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj21=result_250->mGenericsTypes,
        result_250->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj22=result_250->mNoSolvedGenericsType,
        result_250->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj23=result_250->mAnyOriginalType,
        result_250->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj24=result_250->mSizeNum,
        result_250->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj25=result_250->mAlignas,
        result_250->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj26=result_250->mTupleName,
        result_250->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj27=result_250->mAttribute,
        result_250->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_250->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_250->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_250->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_250->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_250->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_250->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_250->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_250->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_250->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_250->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_250->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_250->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_250->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_250->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_250->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_250->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_250->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_250->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_250->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_250->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj28=result_250->mAsmName,
        result_250->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_250->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj32=result_250->mArrayNum,
        result_250->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj32,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_250->mOriginalTypeName,
        result_250->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_250->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_250->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj34=result_250->mParamTypes,
        result_250->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_250->mParamNames,
        result_250->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_250->mResultType,
        result_250->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mVarArgs=self->mVarArgs;
    }
    __result_obj__181 = result_250;
    /*c*/ come_call_finalizer3(result_250,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
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
struct list_item$1sType$ph* it_251;
struct list_item$1sType$ph* prev_it_252;
    it_251=self->head;
    while(it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        /*c*/ come_call_finalizer3(prev_it_252,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_253;
struct list_item$1sNode$ph* prev_it_254;
    it_253=self->head;
    while(it_253!=((void*)0)) {
        prev_it_254=it_253;
        it_253=it_253->next;
        /*c*/ come_call_finalizer3(prev_it_254,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__168;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct list$1sType$ph* result_255;
struct list_item$1sType$ph* it_256;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1sType$ph* __result_obj__171;
    if(    self==((void*)0)) {
        __result_obj__168 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__168;
    }
    result_255=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_256=self->head;
    while(it_256!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_255,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_256->item)));
        }
        else {
            list$1sType$ph_add(result_255,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_256->item)));
        }
        it_256=it_256->next;
    }
    __result_obj__171 = come_increment_ref_count(result_255);
    /*c*/ come_call_finalizer3(result_255,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__169;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__169 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value191 = (void*)0;
struct list_item$1sType$ph* litem_257;
struct sType* __dec_obj18;
void* __right_value192 = (void*)0;
struct list_item$1sType$ph* litem_258;
struct sType* __dec_obj19;
void* __right_value193 = (void*)0;
struct list_item$1sType$ph* litem_259;
struct sType* __dec_obj20;
struct list$1sType$ph* __result_obj__170;
    if(    self->len==0) {
        litem_257=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value191=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_257->prev=((void*)0);
        litem_257->next=((void*)0);
        __dec_obj18=litem_257->item,
        litem_257->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_257;
        self->head=litem_257;
    }
    else if(    self->len==1) {
        litem_258=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value192=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_258->prev=self->head;
        litem_258->next=((void*)0);
        __dec_obj19=litem_258->item,
        litem_258->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_258;
        self->head->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value193=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_259->prev=self->tail;
        litem_259->next=((void*)0);
        __dec_obj20=litem_259->item,
        litem_259->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_259;
        self->tail=litem_259;
    }
    self->len++;
    __result_obj__170 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_260;
struct list_item$1sType$ph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        /*c*/ come_call_finalizer3(prev_it_261,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__172;
void* __right_value199 = (void*)0;
struct sNode* result_262;
struct sNode* __result_obj__173;
    if(    self==(void*)0) {
        __result_obj__172 = come_increment_ref_count((void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__172;
    }
    result_262=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_262->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_262->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_262->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_262->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_262->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_262->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_262->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_262->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_262->kind=self->kind;
    }
    __result_obj__173 = come_increment_ref_count(result_262);
    ((result_262) ? result_262 = come_decrement_ref_count(result_262, ((struct sNode*)result_262)->finalize, ((struct sNode*)result_262)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__174;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct list$1sNode$ph* result_263;
struct list_item$1sNode$ph* it_264;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1sNode$ph* __result_obj__177;
    if(    self==((void*)0)) {
        __result_obj__174 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_263=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_264=self->head;
    while(it_264!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_263,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_264->item)));
        }
        else {
            list$1sNode$ph_add(result_263,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_264->item)));
        }
        it_264=it_264->next;
    }
    __result_obj__177 = come_increment_ref_count(result_263);
    /*c*/ come_call_finalizer3(result_263,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__175;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value207 = (void*)0;
struct list_item$1sNode$ph* litem_265;
struct sNode* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1sNode$ph* litem_266;
struct sNode* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1sNode$ph* litem_267;
struct sNode* __dec_obj31;
struct list$1sNode$ph* __result_obj__176;
    if(    self->len==0) {
        litem_265=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value207=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_265->prev=((void*)0);
        litem_265->next=((void*)0);
        __dec_obj29=litem_265->item,
        litem_265->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_265;
        self->head=litem_265;
    }
    else if(    self->len==1) {
        litem_266=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value208=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_266->prev=self->head;
        litem_266->next=((void*)0);
        __dec_obj30=litem_266->item,
        litem_266->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_266;
        self->head->next=litem_266;
    }
    else {
        litem_267=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value209=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_267->prev=self->tail;
        litem_267->next=((void*)0);
        __dec_obj31=litem_267->item,
        litem_267->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_267;
        self->tail=litem_267;
    }
    self->len++;
    __result_obj__176 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__176;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_268;
struct list_item$1sNode$ph* prev_it_269;
    it_268=self->head;
    while(it_268!=((void*)0)) {
        prev_it_269=it_268;
        it_268=it_268->next;
        /*c*/ come_call_finalizer3(prev_it_269,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct list$1char$ph* result_270;
struct list_item$1char$ph* it_271;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct list$1char$ph* __result_obj__180;
    if(    self==((void*)0)) {
        __result_obj__178 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_270=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_271=self->head;
    while(it_271!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_270,(char*)come_increment_ref_count((char*)come_memdup(it_271->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_270,(char*)come_increment_ref_count((char*)come_memdup(it_271->item, "./comelang.h", 1146, "char*")));
        }
        it_271=it_271->next;
    }
    __result_obj__180 = come_increment_ref_count(result_270);
    /*c*/ come_call_finalizer3(result_270,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value217 = (void*)0;
struct list_item$1char$ph* litem_272;
char* __dec_obj35;
void* __right_value218 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj36;
void* __right_value219 = (void*)0;
struct list_item$1char$ph* litem_274;
char* __dec_obj37;
struct list$1char$ph* __result_obj__179;
    if(    self->len==0) {
        litem_272=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value217=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_272->prev=((void*)0);
        litem_272->next=((void*)0);
        __dec_obj35=litem_272->item,
        litem_272->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_272;
        self->head=litem_272;
    }
    else if(    self->len==1) {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value218=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_273->prev=self->head;
        litem_273->next=((void*)0);
        __dec_obj36=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_273;
        self->head->next=litem_273;
    }
    else {
        litem_274=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value219=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_274->prev=self->tail;
        litem_274->next=((void*)0);
        __dec_obj37=litem_274->item,
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_274;
        self->tail=litem_274;
    }
    self->len++;
    __result_obj__179 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_275;
struct list_item$1char$ph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        /*c*/ come_call_finalizer3(prev_it_276,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_285;
unsigned int it_286;
struct sGenericsFun* __result_obj__182;
struct sGenericsFun* __result_obj__183;
struct sGenericsFun* __result_obj__184;
struct sGenericsFun* __result_obj__185;
    hash_285=string_get_hash_key(((char*)key))%self->size;
    it_286=hash_285;
    while((_Bool)1) {
        if(        self->item_existance[it_286]) {
            if(            string_equals(self->keys[it_286],key)) {
                __result_obj__182 = come_increment_ref_count(self->items[it_286]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__182,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__182;
            }
            it_286++;
            if(            it_286>=self->size) {
                it_286=0;
            }
            else if(            it_286==hash_285) {
                __result_obj__183 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__183,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__183;
            }
        }
        else {
            __result_obj__184 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__184,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__184;
        }
    }
    __result_obj__185 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mImplType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_290;
unsigned int hash_291;
unsigned int it_292;
struct sFun* __result_obj__187;
struct sFun* __result_obj__188;
struct sFun* __result_obj__189;
struct sFun* __result_obj__190;
default_value_290 = (void*)0;
    memset(&default_value_290,0,sizeof(struct sFun*));
    hash_291=string_get_hash_key(((char*)key))%self->size;
    it_292=hash_291;
    while((_Bool)1) {
        if(        self->item_existance[it_292]) {
            if(            string_equals(self->keys[it_292],key)) {
                __result_obj__187 = come_increment_ref_count(self->items[it_292]);
                /*c*/ come_call_finalizer3(default_value_290,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__187,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__187;
            }
            it_292++;
            if(            it_292>=self->size) {
                it_292=0;
            }
            else if(            it_292==hash_291) {
                __result_obj__188 = come_increment_ref_count(default_value_290);
                /*c*/ come_call_finalizer3(default_value_290,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__188;
            }
        }
        else {
            __result_obj__189 = come_increment_ref_count(default_value_290);
            /*c*/ come_call_finalizer3(default_value_290,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__189,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__189;
        }
    }
    __result_obj__190 = come_increment_ref_count(default_value_290);
    /*c*/ come_call_finalizer3(default_value_290,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
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

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_315;
int i_316;
struct sType* __result_obj__191;
struct sType* default_value_317;
struct sType* __result_obj__192;
default_value_317 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_315=self->head;
    i_316=0;
    while(it_315!=((void*)0)) {
        if(        position==i_316) {
            __result_obj__191 = come_increment_ref_count(it_315->item);
            /*c*/ come_call_finalizer3(__result_obj__191,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__191;
        }
        it_315=it_315->next;
        i_316++;
    }
    memset(&default_value_317,0,sizeof(struct sType*));
    __result_obj__192 = come_increment_ref_count(default_value_317);
    /*c*/ come_call_finalizer3(default_value_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value275 = (void*)0;
struct list_item$1CVALUE$ph* litem_327;
struct CVALUE* __dec_obj52;
void* __right_value276 = (void*)0;
struct list_item$1CVALUE$ph* litem_328;
struct CVALUE* __dec_obj53;
void* __right_value277 = (void*)0;
struct list_item$1CVALUE$ph* litem_329;
struct CVALUE* __dec_obj54;
struct list$1CVALUE$ph* __result_obj__195;
    if(    self->len==0) {
        litem_327=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value275=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_327->prev=((void*)0);
        litem_327->next=((void*)0);
        __dec_obj52=litem_327->item,
        litem_327->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_327;
        self->head=litem_327;
    }
    else if(    self->len==1) {
        litem_328=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value276=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_328->prev=self->head;
        litem_328->next=((void*)0);
        __dec_obj53=litem_328->item,
        litem_328->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_328;
        self->head->next=litem_328;
    }
    else {
        litem_329=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value277=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_329->prev=self->tail;
        litem_329->next=((void*)0);
        __dec_obj54=litem_329->item,
        litem_329->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_329;
        self->tail=litem_329;
    }
    self->len++;
    __result_obj__195 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __right_value278 = (void*)0;
struct sNullNode* __result_obj__197;
    ((struct sNodeBase*)(__right_value278=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value278,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__197 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,sNullNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

char* sNullNode_kind(struct sNullNode* self){
void* __right_value279 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = come_increment_ref_count(((char*)(__right_value279=__builtin_string("sNullNode"))));
    (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct CVALUE* come_value_330;
void* __right_value282 = (void*)0;
char* __dec_obj55;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* __dec_obj56;
_Bool __result_obj__199;
    come_value_330=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 170, "struct CVALUE*"))));
    __dec_obj55=come_value_330->c_value,
    come_value_330->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj56=come_value_330->type,
    come_value_330->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 173, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_330->var=((void*)0);
    add_come_last_code(info,"%s",come_value_330->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_330));
    __result_obj__199 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_330,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sNullNode_finalize(struct sNullNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value290 = (void*)0;
struct sNode* __result_obj__202;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 186, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value287=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 186, "struct sNullNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result_obj__202 = come_increment_ref_count(((struct sNode*)(__right_value290=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value287,sNullNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value290) ? __right_value290 = come_decrement_ref_count(__right_value290, ((struct sNode*)__right_value290)->finalize, ((struct sNode*)__right_value290)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__202) ? __result_obj__202 = come_decrement_ref_count(__result_obj__202, ((struct sNode*)__result_obj__202)->finalize, ((struct sNode*)__result_obj__202)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__202;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
struct sNullNode* __result_obj__200;
void* __right_value288 = (void*)0;
struct sNullNode* result_331;
void* __right_value289 = (void*)0;
char* __dec_obj57;
struct sNullNode* __result_obj__201;
    if(    self==(void*)0) {
        __result_obj__200 = (void*)0;
        return __result_obj__200;
    }
    result_331=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode*"));
    if(    self!=((void*)0)) {
        result_331->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj57=result_331->sname,
        result_331->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullNode_clone", 5, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_331->sline_real=self->sline_real;
    }
    __result_obj__201 = result_331;
    /*c*/ come_call_finalizer3(result_331,sNullNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __right_value291 = (void*)0;
struct sNilNode* __result_obj__203;
    ((struct sNodeBase*)(__right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value291,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__203 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNilNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,sNilNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

char* sNilNode_kind(struct sNilNode* self){
void* __right_value292 = (void*)0;
char* __result_obj__204;
    __result_obj__204 = come_increment_ref_count(((char*)(__right_value292=__builtin_string("sNilNode"))));
    (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__204;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_332;
void* __right_value295 = (void*)0;
char* __dec_obj58;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__205;
    come_value_332=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 203, "struct CVALUE*"))));
    __dec_obj58=come_value_332->c_value,
    come_value_332->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj59=come_value_332->type,
    come_value_332->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 206, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_332->type->mNullValue=(_Bool)1;
    come_value_332->var=((void*)0);
    add_come_last_code(info,"%s",come_value_332->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_332));
    __result_obj__205 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_332,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static void sNilNode_finalize(struct sNilNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value301 = (void*)0;
struct sNode* __dec_obj61;
struct sAddNode* __result_obj__206;
    ((struct sNodeBase*)(__right_value299=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value299,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj60=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj61=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__206 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAddNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__206,sAddNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

char* sAddNode_kind(struct sAddNode* self){
void* __right_value302 = (void*)0;
char* __result_obj__207;
    __result_obj__207 = come_increment_ref_count(((char*)(__right_value302=__builtin_string("sAddNode"))));
    (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__207 = come_decrement_ref_count(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__207;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_333;
_Bool Value_334;
void* __right_value303 = (void*)0;
struct CVALUE* left_value_335;
struct sNode* right_node_336;
_Bool Value_337;
_Bool __result_obj__208;
void* __right_value304 = (void*)0;
struct CVALUE* right_value_338;
struct sType* type_339;
char* fun_name_340;
_Bool calling_fun_341;
void* __right_value305 = (void*)0;
struct sType* result_type_342;
void* __right_value306 = (void*)0;
struct sType* __dec_obj62;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_343;
void* __right_value309 = (void*)0;
char* __dec_obj63;
void* __right_value310 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__209;
memset(&calling_fun_341, 0, sizeof(_Bool));
    left_node_333=self->mLeft;
    Value_334=node_compile(left_node_333,info);
    if(    !Value_334) {
        return (_Bool)0;
    }
    else {
    }
    left_value_335=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_336=self->mRight;
    Value_337=node_compile(right_node_336,info);
    if(    !Value_337) {
        __result_obj__208 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_335,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__208;
    }
    else {
    }
    right_value_338=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_339=(struct sType*)come_increment_ref_count(left_value_335->type);
    fun_name_340="operator_add";
    if(    self->mQuote) {
        calling_fun_341=(_Bool)0;
    }
    else {
        calling_fun_341=operator_overload_fun(type_339,fun_name_340,left_value_335,right_value_338,(_Bool)0,info);
    }
    if(    !calling_fun_341) {
        result_type_342=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_335->type));
        if(        right_value_338->type->mPointerNum>0) {
            __dec_obj62=result_type_342,
            result_type_342=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_338->type));
            /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_343=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 270, "struct CVALUE*"))));
        __dec_obj63=come_value_343->c_value,
        come_value_343->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_335->c_value,right_value_338->c_value));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj64=come_value_343->type,
        come_value_343->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_342));
        /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_343->type->mHeap=(_Bool)0;
        come_value_343->var=((void*)0);
        add_come_last_code(info,"%s",come_value_343->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_343));
        /*c*/ come_call_finalizer3(result_type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_343,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__209 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_335,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_338,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static void sAddNode_finalize(struct sAddNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* __dec_obj65;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj66;
struct sSubNode* __result_obj__210;
    ((struct sNodeBase*)(__right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value311,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj65=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj66=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__210 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSubNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__210,sSubNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

char* sSubNode_kind(struct sSubNode* self){
void* __right_value314 = (void*)0;
char* __result_obj__211;
    __result_obj__211 = come_increment_ref_count(((char*)(__right_value314=__builtin_string("sSubNode"))));
    (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__211;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_344;
_Bool Value_345;
void* __right_value315 = (void*)0;
struct CVALUE* left_value_346;
struct sNode* right_node_347;
_Bool Value_348;
_Bool __result_obj__212;
void* __right_value316 = (void*)0;
struct CVALUE* right_value_349;
struct sType* type_350;
char* fun_name_351;
_Bool calling_fun_352;
void* __right_value317 = (void*)0;
struct sType* result_type_353;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* __dec_obj67;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value_354;
void* __right_value323 = (void*)0;
char* __dec_obj68;
void* __right_value324 = (void*)0;
struct sType* __dec_obj69;
_Bool __result_obj__213;
memset(&calling_fun_352, 0, sizeof(_Bool));
    left_node_344=self->mLeft;
    Value_345=node_compile(left_node_344,info);
    if(    !Value_345) {
        return (_Bool)0;
    }
    else {
    }
    left_value_346=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_347=self->mRight;
    Value_348=node_compile(right_node_347,info);
    if(    !Value_348) {
        __result_obj__212 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_346,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__212;
    }
    else {
    }
    right_value_349=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_350=(struct sType*)come_increment_ref_count(left_value_346->type);
    fun_name_351="operator_sub";
    if(    self->mQuote) {
        calling_fun_352=(_Bool)0;
    }
    else {
        calling_fun_352=operator_overload_fun(type_350,fun_name_351,left_value_346,right_value_349,(_Bool)0,info);
    }
    if(    !calling_fun_352) {
        result_type_353=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_346->type));
        if(        left_value_346->type->mPointerNum>0&&right_value_349->type->mPointerNum>0) {
            __dec_obj67=result_type_353,
            result_type_353=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 335, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_354=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 338, "struct CVALUE*"))));
        __dec_obj68=come_value_354->c_value,
        come_value_354->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_346->c_value,right_value_349->c_value));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj69=come_value_354->type,
        come_value_354->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_353));
        /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_354->type->mHeap=(_Bool)0;
        come_value_354->var=((void*)0);
        add_come_last_code(info,"%s",come_value_354->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_354));
        /*c*/ come_call_finalizer3(result_type_353,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_354,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__213 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_346,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_350,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

static void sSubNode_finalize(struct sSubNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value327 = (void*)0;
struct sNode* __dec_obj71;
struct sMultNode* __result_obj__214;
    ((struct sNodeBase*)(__right_value325=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value325,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj70=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj71=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__214 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMultNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__214,sMultNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

char* sMultNode_kind(struct sMultNode* self){
void* __right_value328 = (void*)0;
char* __result_obj__215;
    __result_obj__215 = come_increment_ref_count(((char*)(__right_value328=__builtin_string("sMultNode"))));
    (__right_value328 = come_decrement_ref_count(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__215;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_355;
_Bool Value_356;
void* __right_value329 = (void*)0;
struct CVALUE* left_value_357;
struct sNode* right_node_358;
_Bool Value_359;
_Bool __result_obj__216;
void* __right_value330 = (void*)0;
struct CVALUE* right_value_360;
struct sType* type_361;
char* fun_name_362;
_Bool calling_fun_363;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct CVALUE* come_value_364;
void* __right_value333 = (void*)0;
char* __dec_obj72;
void* __right_value334 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__217;
memset(&calling_fun_363, 0, sizeof(_Bool));
    left_node_355=self->mLeft;
    Value_356=node_compile(left_node_355,info);
    if(    !Value_356) {
        return (_Bool)0;
    }
    else {
    }
    left_value_357=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_358=self->mRight;
    Value_359=node_compile(right_node_358,info);
    if(    !Value_359) {
        __result_obj__216 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__216;
    }
    else {
    }
    right_value_360=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_361=(struct sType*)come_increment_ref_count(left_value_357->type);
    fun_name_362="operator_mult";
    if(    self->mQuote) {
        calling_fun_363=(_Bool)0;
    }
    else {
        calling_fun_363=operator_overload_fun(type_361,fun_name_362,left_value_357,right_value_360,(_Bool)0,info);
    }
    if(    !calling_fun_363) {
        come_value_364=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 401, "struct CVALUE*"))));
        __dec_obj72=come_value_364->c_value,
        come_value_364->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_357->c_value,right_value_360->c_value));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj73=come_value_364->type,
        come_value_364->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_357->type));
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_364->type->mHeap=(_Bool)0;
        come_value_364->var=((void*)0);
        add_come_last_code(info,"%s",come_value_364->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_364));
        /*c*/ come_call_finalizer3(come_value_364,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__217 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_360,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_361,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

static void sMultNode_finalize(struct sMultNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj75;
struct sDivNode* __result_obj__218;
    ((struct sNodeBase*)(__right_value335=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value335,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj74=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj75=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__218 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDivNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,sDivNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

char* sDivNode_kind(struct sDivNode* self){
void* __right_value338 = (void*)0;
char* __result_obj__219;
    __result_obj__219 = come_increment_ref_count(((char*)(__right_value338=__builtin_string("sDivNode"))));
    (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__219;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_365;
_Bool Value_366;
void* __right_value339 = (void*)0;
struct CVALUE* left_value_367;
struct sNode* right_node_368;
_Bool Value_369;
_Bool __result_obj__220;
void* __right_value340 = (void*)0;
struct CVALUE* right_value_370;
struct sType* type_371;
char* fun_name_372;
_Bool calling_fun_373;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct CVALUE* come_value_374;
void* __right_value343 = (void*)0;
char* __dec_obj76;
void* __right_value344 = (void*)0;
struct sType* __dec_obj77;
_Bool __result_obj__221;
memset(&calling_fun_373, 0, sizeof(_Bool));
    left_node_365=self->mLeft;
    Value_366=node_compile(left_node_365,info);
    if(    !Value_366) {
        return (_Bool)0;
    }
    else {
    }
    left_value_367=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_368=self->mRight;
    Value_369=node_compile(right_node_368,info);
    if(    !Value_369) {
        __result_obj__220 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_367,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__220;
    }
    else {
    }
    right_value_370=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_371=(struct sType*)come_increment_ref_count(left_value_367->type);
    fun_name_372="operator_div";
    if(    self->mQuote) {
        calling_fun_373=(_Bool)0;
    }
    else {
        calling_fun_373=operator_overload_fun(type_371,fun_name_372,left_value_367,right_value_370,(_Bool)0,info);
    }
    if(    !calling_fun_373) {
        come_value_374=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 464, "struct CVALUE*"))));
        __dec_obj76=come_value_374->c_value,
        come_value_374->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_367->c_value,right_value_370->c_value));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj77=come_value_374->type,
        come_value_374->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_367->type));
        /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_374->type->mHeap=(_Bool)0;
        come_value_374->var=((void*)0);
        add_come_last_code(info,"%s",come_value_374->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_374));
        /*c*/ come_call_finalizer3(come_value_374,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__221 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_367,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_370,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_371,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static void sDivNode_finalize(struct sDivNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value347 = (void*)0;
struct sNode* __dec_obj79;
struct sModNode* __result_obj__222;
    ((struct sNodeBase*)(__right_value345=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value345,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj78=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj79=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__222 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sModNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__222,sModNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__222;
}

char* sModNode_kind(struct sModNode* self){
void* __right_value348 = (void*)0;
char* __result_obj__223;
    __result_obj__223 = come_increment_ref_count(((char*)(__right_value348=__builtin_string("sModNode"))));
    (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__223;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_375;
_Bool Value_376;
void* __right_value349 = (void*)0;
struct CVALUE* left_value_377;
struct sNode* right_node_378;
_Bool Value_379;
_Bool __result_obj__224;
void* __right_value350 = (void*)0;
struct CVALUE* right_value_380;
struct sType* type_381;
char* fun_name_382;
_Bool calling_fun_383;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value353 = (void*)0;
char* __dec_obj80;
void* __right_value354 = (void*)0;
struct sType* __dec_obj81;
_Bool __result_obj__225;
memset(&calling_fun_383, 0, sizeof(_Bool));
    left_node_375=self->mLeft;
    Value_376=node_compile(left_node_375,info);
    if(    !Value_376) {
        return (_Bool)0;
    }
    else {
    }
    left_value_377=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_378=self->mRight;
    Value_379=node_compile(right_node_378,info);
    if(    !Value_379) {
        __result_obj__224 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_377,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__224;
    }
    else {
    }
    right_value_380=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_381=(struct sType*)come_increment_ref_count(left_value_377->type);
    fun_name_382="operator_mod";
    if(    self->mQuote) {
        calling_fun_383=(_Bool)0;
    }
    else {
        calling_fun_383=operator_overload_fun(type_381,fun_name_382,left_value_377,right_value_380,(_Bool)0,info);
    }
    if(    !calling_fun_383) {
        come_value_384=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 527, "struct CVALUE*"))));
        __dec_obj80=come_value_384->c_value,
        come_value_384->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_377->c_value,right_value_380->c_value));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj81=come_value_384->type,
        come_value_384->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_377->type));
        /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_384->type->mHeap=(_Bool)0;
        come_value_384->var=((void*)0);
        add_come_last_code(info,"%s",come_value_384->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_384));
        /*c*/ come_call_finalizer3(come_value_384,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__225 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_377,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_380,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static void sModNode_finalize(struct sModNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value357 = (void*)0;
struct sNode* __dec_obj83;
struct sLShiftNode* __result_obj__226;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value355,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj82=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj83=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__226 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sLShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __right_value358 = (void*)0;
char* __result_obj__227;
    __result_obj__227 = come_increment_ref_count(((char*)(__right_value358=__builtin_string("sLShiftNode"))));
    (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__227;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_385;
_Bool Value_386;
void* __right_value359 = (void*)0;
struct CVALUE* left_value_387;
struct sNode* right_node_388;
_Bool Value_389;
_Bool __result_obj__228;
void* __right_value360 = (void*)0;
struct CVALUE* right_value_390;
struct sType* type_391;
char* fun_name_392;
_Bool calling_fun_393;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value363 = (void*)0;
char* __dec_obj84;
void* __right_value364 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__229;
memset(&calling_fun_393, 0, sizeof(_Bool));
    left_node_385=self->mLeft;
    Value_386=node_compile(left_node_385,info);
    if(    !Value_386) {
        return (_Bool)0;
    }
    else {
    }
    left_value_387=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_388=self->mRight;
    Value_389=node_compile(right_node_388,info);
    if(    !Value_389) {
        __result_obj__228 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__228;
    }
    else {
    }
    right_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_391=(struct sType*)come_increment_ref_count(left_value_387->type);
    fun_name_392="operator_lshift";
    if(    self->mQuote) {
        calling_fun_393=(_Bool)0;
    }
    else {
        calling_fun_393=operator_overload_fun(type_391,fun_name_392,left_value_387,right_value_390,(_Bool)0,info);
    }
    if(    !calling_fun_393) {
        come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 591, "struct CVALUE*"))));
        __dec_obj84=come_value_394->c_value,
        come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_387->c_value,right_value_390->c_value));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj85=come_value_394->type,
        come_value_394->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_387->type));
        /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_394->type->mHeap=(_Bool)0;
        come_value_394->var=((void*)0);
        add_come_last_code(info,"%s",come_value_394->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
        /*c*/ come_call_finalizer3(come_value_394,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__229 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_390,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_391,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj86;
void* __right_value367 = (void*)0;
struct sNode* __dec_obj87;
struct sRShiftNode* __result_obj__230;
    ((struct sNodeBase*)(__right_value365=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value365,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj86=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj87=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__230 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__230,sRShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__230;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __right_value368 = (void*)0;
char* __result_obj__231;
    __result_obj__231 = come_increment_ref_count(((char*)(__right_value368=__builtin_string("sRShiftNode"))));
    (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__231;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_395;
_Bool Value_396;
void* __right_value369 = (void*)0;
struct CVALUE* left_value_397;
struct sNode* right_node_398;
_Bool Value_399;
_Bool __result_obj__232;
void* __right_value370 = (void*)0;
struct CVALUE* right_value_400;
struct sType* type_401;
char* fun_name_402;
_Bool calling_fun_403;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value373 = (void*)0;
char* __dec_obj88;
void* __right_value374 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__233;
memset(&calling_fun_403, 0, sizeof(_Bool));
    left_node_395=self->mLeft;
    Value_396=node_compile(left_node_395,info);
    if(    !Value_396) {
        return (_Bool)0;
    }
    else {
    }
    left_value_397=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_398=self->mRight;
    Value_399=node_compile(right_node_398,info);
    if(    !Value_399) {
        __result_obj__232 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__232;
    }
    else {
    }
    right_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_401=(struct sType*)come_increment_ref_count(left_value_397->type);
    fun_name_402="operator_rshift";
    if(    self->mQuote) {
        calling_fun_403=(_Bool)0;
    }
    else {
        calling_fun_403=operator_overload_fun(type_401,fun_name_402,left_value_397,right_value_400,(_Bool)0,info);
    }
    if(    !calling_fun_403) {
        come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 654, "struct CVALUE*"))));
        __dec_obj88=come_value_404->c_value,
        come_value_404->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_397->c_value,right_value_400->c_value));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj89=come_value_404->type,
        come_value_404->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_397->type));
        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_404->type->mHeap=(_Bool)0;
        come_value_404->var=((void*)0);
        add_come_last_code(info,"%s",come_value_404->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
        /*c*/ come_call_finalizer3(come_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__233 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_401,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj91;
struct sGtEqNode* __result_obj__234;
    ((struct sNodeBase*)(__right_value375=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value375,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj90=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj91=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__234 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__234,sGtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __right_value378 = (void*)0;
char* __result_obj__235;
    __result_obj__235 = come_increment_ref_count(((char*)(__right_value378=__builtin_string("sGtEqNode"))));
    (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__235;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_405;
_Bool Value_406;
void* __right_value379 = (void*)0;
struct CVALUE* left_value_407;
struct sNode* right_node_408;
_Bool Value_409;
_Bool __result_obj__236;
void* __right_value380 = (void*)0;
struct CVALUE* right_value_410;
struct sType* type_411;
char* fun_name_412;
_Bool calling_fun_413;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value383 = (void*)0;
char* __dec_obj92;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__237;
memset(&calling_fun_413, 0, sizeof(_Bool));
    left_node_405=self->mLeft;
    Value_406=node_compile(left_node_405,info);
    if(    !Value_406) {
        return (_Bool)0;
    }
    else {
    }
    left_value_407=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_408=self->mRight;
    Value_409=node_compile(right_node_408,info);
    if(    !Value_409) {
        __result_obj__236 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__236;
    }
    else {
    }
    right_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_411=(struct sType*)come_increment_ref_count(left_value_407->type);
    fun_name_412="operator_gteq";
    if(    self->mQuote) {
        calling_fun_413=(_Bool)0;
    }
    else {
        calling_fun_413=operator_overload_fun(type_411,fun_name_412,left_value_407,right_value_410,(_Bool)0,info);
    }
    if(    !calling_fun_413) {
        come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 717, "struct CVALUE*"))));
        __dec_obj92=come_value_414->c_value,
        come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_407->c_value,right_value_410->c_value));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj93=come_value_414->type,
        come_value_414->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 720, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_414->var=((void*)0);
        add_come_last_code(info,"%s",come_value_414->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
        /*c*/ come_call_finalizer3(come_value_414,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__237 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_410,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_411,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj94;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj95;
struct sLtEqNode* __result_obj__238;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value387,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj94=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj95=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__238 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__238,sLtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __right_value390 = (void*)0;
char* __result_obj__239;
    __result_obj__239 = come_increment_ref_count(((char*)(__right_value390=__builtin_string("sLtEqNode"))));
    (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__239 = come_decrement_ref_count(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__239;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_415;
_Bool Value_416;
void* __right_value391 = (void*)0;
struct CVALUE* left_value_417;
struct sNode* right_node_418;
_Bool Value_419;
_Bool __result_obj__240;
void* __right_value392 = (void*)0;
struct CVALUE* right_value_420;
struct sType* type_421;
char* fun_name_422;
_Bool calling_fun_423;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value395 = (void*)0;
char* __dec_obj96;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__241;
memset(&calling_fun_423, 0, sizeof(_Bool));
    left_node_415=self->mLeft;
    Value_416=node_compile(left_node_415,info);
    if(    !Value_416) {
        return (_Bool)0;
    }
    else {
    }
    left_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_418=self->mRight;
    Value_419=node_compile(right_node_418,info);
    if(    !Value_419) {
        __result_obj__240 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__240;
    }
    else {
    }
    right_value_420=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_421=(struct sType*)come_increment_ref_count(left_value_417->type);
    fun_name_422="operator_lteq";
    if(    self->mQuote) {
        calling_fun_423=(_Bool)0;
    }
    else {
        calling_fun_423=operator_overload_fun(type_421,fun_name_422,left_value_417,right_value_420,(_Bool)0,info);
    }
    if(    !calling_fun_423) {
        come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 779, "struct CVALUE*"))));
        __dec_obj96=come_value_424->c_value,
        come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_417->c_value,right_value_420->c_value));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj97=come_value_424->type,
        come_value_424->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_424->var=((void*)0);
        add_come_last_code(info,"%s",come_value_424->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
        /*c*/ come_call_finalizer3(come_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__241 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_420,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sNode* __dec_obj98;
void* __right_value401 = (void*)0;
struct sNode* __dec_obj99;
struct sLtNode* __result_obj__242;
    ((struct sNodeBase*)(__right_value399=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value399,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj98=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj99=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__242 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__242,sLtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

char* sLtNode_kind(struct sLtNode* self){
void* __right_value402 = (void*)0;
char* __result_obj__243;
    __result_obj__243 = come_increment_ref_count(((char*)(__right_value402=__builtin_string("sLtNode"))));
    (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__243 = come_decrement_ref_count(__result_obj__243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__243;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_425;
_Bool Value_426;
void* __right_value403 = (void*)0;
struct CVALUE* left_value_427;
struct sNode* right_node_428;
_Bool Value_429;
_Bool __result_obj__244;
void* __right_value404 = (void*)0;
struct CVALUE* right_value_430;
struct sType* type_431;
char* fun_name_432;
_Bool calling_fun_433;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value407 = (void*)0;
char* __dec_obj100;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__245;
memset(&calling_fun_433, 0, sizeof(_Bool));
    left_node_425=self->mLeft;
    Value_426=node_compile(left_node_425,info);
    if(    !Value_426) {
        return (_Bool)0;
    }
    else {
    }
    left_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_428=self->mRight;
    Value_429=node_compile(right_node_428,info);
    if(    !Value_429) {
        __result_obj__244 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__244;
    }
    else {
    }
    right_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_431=(struct sType*)come_increment_ref_count(left_value_427->type);
    fun_name_432="operator_lt";
    if(    self->mQuote) {
        calling_fun_433=(_Bool)0;
    }
    else {
        calling_fun_433=operator_overload_fun(type_431,fun_name_432,left_value_427,right_value_430,(_Bool)0,info);
    }
    if(    !calling_fun_433) {
        come_value_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 841, "struct CVALUE*"))));
        __dec_obj100=come_value_434->c_value,
        come_value_434->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_427->c_value,right_value_430->c_value));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj101=come_value_434->type,
        come_value_434->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 844, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_434->var=((void*)0);
        add_come_last_code(info,"%s",come_value_434->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_434));
        /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__245 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_431,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static void sLtNode_finalize(struct sLtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj102;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj103;
struct sGtNode* __result_obj__246;
    ((struct sNodeBase*)(__right_value411=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value411,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj102=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj103=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__246 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,sGtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

char* sGtNode_kind(struct sGtNode* self){
void* __right_value414 = (void*)0;
char* __result_obj__247;
    __result_obj__247 = come_increment_ref_count(((char*)(__right_value414=__builtin_string("sGtNode"))));
    (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__247;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_435;
_Bool Value_436;
void* __right_value415 = (void*)0;
struct CVALUE* left_value_437;
struct sNode* right_node_438;
_Bool Value_439;
_Bool __result_obj__248;
void* __right_value416 = (void*)0;
struct CVALUE* right_value_440;
struct sType* type_441;
char* fun_name_442;
_Bool calling_fun_443;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_444;
void* __right_value419 = (void*)0;
char* __dec_obj104;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sType* __dec_obj105;
_Bool __result_obj__249;
memset(&calling_fun_443, 0, sizeof(_Bool));
    left_node_435=self->mLeft;
    Value_436=node_compile(left_node_435,info);
    if(    !Value_436) {
        return (_Bool)0;
    }
    else {
    }
    left_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_438=self->mRight;
    Value_439=node_compile(right_node_438,info);
    if(    !Value_439) {
        __result_obj__248 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__248;
    }
    else {
    }
    right_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_441=(struct sType*)come_increment_ref_count(left_value_437->type);
    fun_name_442="operator_gt";
    if(    self->mQuote) {
        calling_fun_443=(_Bool)0;
    }
    else {
        calling_fun_443=operator_overload_fun(type_441,fun_name_442,left_value_437,right_value_440,(_Bool)0,info);
    }
    if(    !calling_fun_443) {
        come_value_444=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 903, "struct CVALUE*"))));
        __dec_obj104=come_value_444->c_value,
        come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_437->c_value,right_value_440->c_value));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj105=come_value_444->type,
        come_value_444->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 906, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_444->var=((void*)0);
        add_come_last_code(info,"%s",come_value_444->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_444));
        /*c*/ come_call_finalizer3(come_value_444,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__249 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_441,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void sGtNode_finalize(struct sGtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj106;
void* __right_value425 = (void*)0;
struct sNode* __dec_obj107;
struct sEqNode* __result_obj__250;
    ((struct sNodeBase*)(__right_value423=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value423,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj106=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj107=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__250 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__250,sEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

char* sEqNode_kind(struct sEqNode* self){
void* __right_value426 = (void*)0;
char* __result_obj__251;
    __result_obj__251 = come_increment_ref_count(((char*)(__right_value426=__builtin_string("sEqNode"))));
    (__right_value426 = come_decrement_ref_count(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__251 = come_decrement_ref_count(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_445;
_Bool Value_446;
void* __right_value427 = (void*)0;
struct CVALUE* left_value_447;
struct sNode* right_node_448;
_Bool Value_449;
_Bool __result_obj__252;
void* __right_value428 = (void*)0;
struct CVALUE* right_value_450;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_451;
void* __right_value431 = (void*)0;
char* __dec_obj108;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sType* __dec_obj109;
_Bool __result_obj__253;
    left_node_445=self->mLeft;
    Value_446=node_compile(left_node_445,info);
    if(    !Value_446) {
        return (_Bool)0;
    }
    else {
    }
    left_value_447=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_448=self->mRight;
    Value_449=node_compile(right_node_448,info);
    if(    !Value_449) {
        __result_obj__252 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_447,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__252;
    }
    else {
    }
    right_value_450=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_451=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 953, "struct CVALUE*"))));
    __dec_obj108=come_value_451->c_value,
    come_value_451->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_447->c_value,right_value_450->c_value));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj109=come_value_451->type,
    come_value_451->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 956, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_451->var=((void*)0);
    add_come_last_code(info,"%s",come_value_451->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_451));
    __result_obj__253 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_447,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_450,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_451,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

static void sEqNode_finalize(struct sEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sNode* __dec_obj110;
void* __right_value437 = (void*)0;
struct sNode* __dec_obj111;
struct sNotEqNode* __result_obj__254;
    ((struct sNodeBase*)(__right_value435=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value435,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj110=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj111=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__254 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNotEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__254,sNotEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __right_value438 = (void*)0;
char* __result_obj__255;
    __result_obj__255 = come_increment_ref_count(((char*)(__right_value438=__builtin_string("sNotEqNode"))));
    (__right_value438 = come_decrement_ref_count(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_452;
_Bool Value_453;
void* __right_value439 = (void*)0;
struct CVALUE* left_value_454;
struct sNode* right_node_455;
_Bool Value_456;
_Bool __result_obj__256;
void* __right_value440 = (void*)0;
struct CVALUE* right_value_457;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value443 = (void*)0;
char* __dec_obj112;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* __dec_obj113;
_Bool __result_obj__257;
    left_node_452=self->mLeft;
    Value_453=node_compile(left_node_452,info);
    if(    !Value_453) {
        return (_Bool)0;
    }
    else {
    }
    left_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_455=self->mRight;
    Value_456=node_compile(right_node_455,info);
    if(    !Value_456) {
        __result_obj__256 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__256;
    }
    else {
    }
    right_value_457=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1002, "struct CVALUE*"))));
    __dec_obj112=come_value_458->c_value,
    come_value_458->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_454->c_value,right_value_457->c_value));
    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj113=come_value_458->type,
    come_value_458->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 1005, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_458->var=((void*)0);
    add_come_last_code(info,"%s",come_value_458->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_458));
    __result_obj__257 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_458,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sNode* __dec_obj114;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj115;
struct sEq2Node* __result_obj__258;
    ((struct sNodeBase*)(__right_value447=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value447,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj114=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj115=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__258 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,sEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __right_value450 = (void*)0;
char* __result_obj__259;
    __result_obj__259 = come_increment_ref_count(((char*)(__right_value450=__builtin_string("sEq2Node"))));
    (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_459;
_Bool Value_460;
void* __right_value451 = (void*)0;
struct CVALUE* left_value_461;
struct sNode* right_node_462;
_Bool Value_463;
_Bool __result_obj__260;
void* __right_value452 = (void*)0;
struct CVALUE* right_value_464;
struct sType* type_465;
char* fun_name_466;
_Bool calling_fun_467;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value455 = (void*)0;
char* __dec_obj116;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* __dec_obj117;
_Bool __result_obj__261;
memset(&calling_fun_467, 0, sizeof(_Bool));
    left_node_459=self->mLeft;
    Value_460=node_compile(left_node_459,info);
    if(    !Value_460) {
        return (_Bool)0;
    }
    else {
    }
    left_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_462=self->mRight;
    Value_463=node_compile(right_node_462,info);
    if(    !Value_463) {
        __result_obj__260 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__260;
    }
    else {
    }
    right_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_465=(struct sType*)come_increment_ref_count(left_value_461->type);
    fun_name_466="operator_equals";
    if(    self->mQuote) {
        calling_fun_467=(_Bool)0;
    }
    else {
        calling_fun_467=operator_overload_fun(type_465,fun_name_466,left_value_461,right_value_464,(_Bool)0,info);
    }
    if(    !calling_fun_467) {
        come_value_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1064, "struct CVALUE*"))));
        __dec_obj116=come_value_468->c_value,
        come_value_468->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_461->c_value,right_value_464->c_value));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj117=come_value_468->type,
        come_value_468->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 1067, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_468->var=((void*)0);
        add_come_last_code(info,"%s",come_value_468->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_468));
        /*c*/ come_call_finalizer3(come_value_468,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__261 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_464,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_465,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

static void sEq2Node_finalize(struct sEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj118;
void* __right_value461 = (void*)0;
struct sNode* __dec_obj119;
struct sNotEq2Node* __result_obj__262;
    ((struct sNodeBase*)(__right_value459=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value459,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj118=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj119=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__262 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNotEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,sNotEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __right_value462 = (void*)0;
char* __result_obj__263;
    __result_obj__263 = come_increment_ref_count(((char*)(__right_value462=__builtin_string("sNotEq2Node"))));
    (__right_value462 = come_decrement_ref_count(__right_value462, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__263 = come_decrement_ref_count(__result_obj__263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__263;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_469;
_Bool Value_470;
void* __right_value463 = (void*)0;
struct CVALUE* left_value_471;
struct sNode* right_node_472;
_Bool Value_473;
_Bool __result_obj__264;
void* __right_value464 = (void*)0;
struct CVALUE* right_value_474;
struct sType* type_475;
char* fun_name_476;
_Bool calling_fun_477;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value467 = (void*)0;
char* __dec_obj120;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* __dec_obj121;
_Bool __result_obj__265;
memset(&calling_fun_477, 0, sizeof(_Bool));
    left_node_469=self->mLeft;
    Value_470=node_compile(left_node_469,info);
    if(    !Value_470) {
        return (_Bool)0;
    }
    else {
    }
    left_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_472=self->mRight;
    Value_473=node_compile(right_node_472,info);
    if(    !Value_473) {
        __result_obj__264 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__264;
    }
    else {
    }
    right_value_474=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_475=(struct sType*)come_increment_ref_count(left_value_471->type);
    fun_name_476="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_477=(_Bool)0;
    }
    else {
        calling_fun_477=operator_overload_fun(type_475,fun_name_476,left_value_471,right_value_474,(_Bool)0,info);
    }
    if(    !calling_fun_477) {
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1126, "struct CVALUE*"))));
        __dec_obj120=come_value_478->c_value,
        come_value_478->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_471->c_value,right_value_474->c_value));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj121=come_value_478->type,
        come_value_478->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 1129, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_478->var=((void*)0);
        add_come_last_code(info,"%s",come_value_478->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
        /*c*/ come_call_finalizer3(come_value_478,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__265 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_474,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj122;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj123;
struct sAndNode* __result_obj__266;
    ((struct sNodeBase*)(__right_value471=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value471,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj122=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj123=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__266 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,sAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

char* sAndNode_kind(struct sAndNode* self){
void* __right_value474 = (void*)0;
char* __result_obj__267;
    __result_obj__267 = come_increment_ref_count(((char*)(__right_value474=__builtin_string("sAndNode"))));
    (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__267 = come_decrement_ref_count(__result_obj__267, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__267;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_479;
_Bool Value_480;
void* __right_value475 = (void*)0;
struct CVALUE* left_value_481;
struct sNode* right_node_482;
_Bool Value_483;
_Bool __result_obj__268;
void* __right_value476 = (void*)0;
struct CVALUE* right_value_484;
struct sType* type_485;
char* fun_name_486;
_Bool calling_fun_487;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value479 = (void*)0;
char* __dec_obj124;
void* __right_value480 = (void*)0;
struct sType* __dec_obj125;
_Bool __result_obj__269;
memset(&calling_fun_487, 0, sizeof(_Bool));
    left_node_479=self->mLeft;
    Value_480=node_compile(left_node_479,info);
    if(    !Value_480) {
        return (_Bool)0;
    }
    else {
    }
    left_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_482=self->mRight;
    Value_483=node_compile(right_node_482,info);
    if(    !Value_483) {
        __result_obj__268 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_481,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__268;
    }
    else {
    }
    right_value_484=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_485=(struct sType*)come_increment_ref_count(left_value_481->type);
    fun_name_486="operator_and";
    if(    self->mQuote) {
        calling_fun_487=(_Bool)0;
    }
    else {
        calling_fun_487=operator_overload_fun(type_485,fun_name_486,left_value_481,right_value_484,(_Bool)0,info);
    }
    if(    !calling_fun_487) {
        come_value_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1189, "struct CVALUE*"))));
        __dec_obj124=come_value_488->c_value,
        come_value_488->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_481->c_value,right_value_484->c_value));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj125=come_value_488->type,
        come_value_488->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_481->type));
        /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_488->type->mHeap=(_Bool)0;
        come_value_488->var=((void*)0);
        add_come_last_code(info,"%s",come_value_488->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_488));
        /*c*/ come_call_finalizer3(come_value_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__269 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_481,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_484,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_485,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static void sAndNode_finalize(struct sAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj126;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj127;
struct sXOrNode* __result_obj__270;
    ((struct sNodeBase*)(__right_value481=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value481,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj126=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj127=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__270 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sXOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,sXOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __right_value484 = (void*)0;
char* __result_obj__271;
    __result_obj__271 = come_increment_ref_count(((char*)(__right_value484=__builtin_string("sXOrNode"))));
    (__right_value484 = come_decrement_ref_count(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__271 = come_decrement_ref_count(__result_obj__271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__271;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_489;
_Bool Value_490;
void* __right_value485 = (void*)0;
struct CVALUE* left_value_491;
struct sNode* right_node_492;
_Bool Value_493;
_Bool __result_obj__272;
void* __right_value486 = (void*)0;
struct CVALUE* right_value_494;
struct sType* type_495;
char* fun_name_496;
_Bool calling_fun_497;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_498;
void* __right_value489 = (void*)0;
char* __dec_obj128;
void* __right_value490 = (void*)0;
struct sType* __dec_obj129;
_Bool __result_obj__273;
memset(&calling_fun_497, 0, sizeof(_Bool));
    left_node_489=self->mLeft;
    Value_490=node_compile(left_node_489,info);
    if(    !Value_490) {
        return (_Bool)0;
    }
    else {
    }
    left_value_491=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_492=self->mRight;
    Value_493=node_compile(right_node_492,info);
    if(    !Value_493) {
        __result_obj__272 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_491,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__272;
    }
    else {
    }
    right_value_494=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_495=(struct sType*)come_increment_ref_count(left_value_491->type);
    fun_name_496="operator_xor";
    if(    self->mQuote) {
        calling_fun_497=(_Bool)0;
    }
    else {
        calling_fun_497=operator_overload_fun(type_495,fun_name_496,left_value_491,right_value_494,(_Bool)0,info);
    }
    if(    !calling_fun_497) {
        come_value_498=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1252, "struct CVALUE*"))));
        __dec_obj128=come_value_498->c_value,
        come_value_498->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_491->c_value,right_value_494->c_value));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj129=come_value_498->type,
        come_value_498->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_491->type));
        /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_498->type->mHeap=(_Bool)0;
        come_value_498->var=((void*)0);
        add_come_last_code(info,"%s",come_value_498->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_498));
        /*c*/ come_call_finalizer3(come_value_498,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__273 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_491,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_494,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_495,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static void sXOrNode_finalize(struct sXOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj131;
struct sOrNode* __result_obj__274;
    ((struct sNodeBase*)(__right_value491=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value491,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj130=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj131=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__274 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,sOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

char* sOrNode_kind(struct sOrNode* self){
void* __right_value494 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = come_increment_ref_count(((char*)(__right_value494=__builtin_string("sOrNode"))));
    (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_499;
_Bool Value_500;
void* __right_value495 = (void*)0;
struct CVALUE* left_value_501;
struct sNode* right_node_502;
_Bool Value_503;
_Bool __result_obj__276;
void* __right_value496 = (void*)0;
struct CVALUE* right_value_504;
struct sType* type_505;
char* fun_name_506;
_Bool calling_fun_507;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_508;
void* __right_value499 = (void*)0;
char* __dec_obj132;
void* __right_value500 = (void*)0;
struct sType* __dec_obj133;
_Bool __result_obj__277;
memset(&calling_fun_507, 0, sizeof(_Bool));
    left_node_499=self->mLeft;
    Value_500=node_compile(left_node_499,info);
    if(    !Value_500) {
        return (_Bool)0;
    }
    else {
    }
    left_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_502=self->mRight;
    Value_503=node_compile(right_node_502,info);
    if(    !Value_503) {
        __result_obj__276 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_501,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__276;
    }
    else {
    }
    right_value_504=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_505=(struct sType*)come_increment_ref_count(left_value_501->type);
    fun_name_506="operator_or";
    if(    self->mQuote) {
        calling_fun_507=(_Bool)0;
    }
    else {
        calling_fun_507=operator_overload_fun(type_505,fun_name_506,left_value_501,right_value_504,(_Bool)0,info);
    }
    if(    !calling_fun_507) {
        come_value_508=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1316, "struct CVALUE*"))));
        __dec_obj132=come_value_508->c_value,
        come_value_508->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_501->c_value,right_value_504->c_value));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj133=come_value_508->type,
        come_value_508->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_501->type));
        /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_508->type->mHeap=(_Bool)0;
        come_value_508->var=((void*)0);
        add_come_last_code(info,"%s",come_value_508->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_508));
        /*c*/ come_call_finalizer3(come_value_508,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__277 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_501,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_504,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_505,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

static void sOrNode_finalize(struct sOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value503 = (void*)0;
struct sNode* __dec_obj135;
struct sAndAndNode* __result_obj__278;
    ((struct sNodeBase*)(__right_value501=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value501,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj134=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj135=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__278 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAndAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__278,sAndAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __right_value504 = (void*)0;
char* __result_obj__279;
    __result_obj__279 = come_increment_ref_count(((char*)(__right_value504=__builtin_string("sAndAndNode"))));
    (__right_value504 = come_decrement_ref_count(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__279 = come_decrement_ref_count(__result_obj__279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__279;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_509;
_Bool Value_510;
void* __right_value505 = (void*)0;
struct CVALUE* left_value_511;
struct sNode* right_node_512;
_Bool Value_513;
_Bool __result_obj__280;
void* __right_value506 = (void*)0;
struct CVALUE* right_value_514;
struct sType* type_515;
char* fun_name_516;
_Bool calling_fun_517;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value509 = (void*)0;
char* __dec_obj136;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj137;
_Bool __result_obj__281;
memset(&calling_fun_517, 0, sizeof(_Bool));
    left_node_509=self->mLeft;
    Value_510=node_compile(left_node_509,info);
    if(    !Value_510) {
        return (_Bool)0;
    }
    else {
    }
    left_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_512=self->mRight;
    Value_513=node_compile(right_node_512,info);
    if(    !Value_513) {
        __result_obj__280 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__280;
    }
    else {
    }
    right_value_514=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_515=(struct sType*)come_increment_ref_count(left_value_511->type);
    fun_name_516="operator_andand";
    if(    self->mQuote) {
        calling_fun_517=(_Bool)0;
    }
    else {
        calling_fun_517=operator_overload_fun(type_515,fun_name_516,left_value_511,right_value_514,(_Bool)0,info);
    }
    if(    !calling_fun_517) {
        come_value_518=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1380, "struct CVALUE*"))));
        __dec_obj136=come_value_518->c_value,
        come_value_518->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_511->c_value,right_value_514->c_value));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj137=come_value_518->type,
        come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 1383, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_518->var=left_value_511->var;
        add_come_last_code(info,"%s",come_value_518->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_518));
        /*c*/ come_call_finalizer3(come_value_518,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__281 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_514,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_515,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__281;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value515 = (void*)0;
struct sNode* __dec_obj139;
struct sOrOrNode* __result_obj__282;
    ((struct sNodeBase*)(__right_value513=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value513,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj138=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj139=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__282 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOrOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__282,sOrOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __right_value516 = (void*)0;
char* __result_obj__283;
    __result_obj__283 = come_increment_ref_count(((char*)(__right_value516=__builtin_string("sOrOrNode"))));
    (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__283 = come_decrement_ref_count(__result_obj__283, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__283;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_519;
_Bool Value_520;
void* __right_value517 = (void*)0;
struct CVALUE* left_value_521;
struct sNode* right_node_522;
_Bool Value_523;
_Bool __result_obj__284;
void* __right_value518 = (void*)0;
struct CVALUE* right_value_524;
struct sType* type_525;
char* fun_name_526;
_Bool calling_fun_527;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct CVALUE* come_value_528;
void* __right_value521 = (void*)0;
char* __dec_obj140;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj141;
_Bool __result_obj__285;
memset(&calling_fun_527, 0, sizeof(_Bool));
    left_node_519=self->mLeft;
    Value_520=node_compile(left_node_519,info);
    if(    !Value_520) {
        return (_Bool)0;
    }
    else {
    }
    left_value_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_522=self->mRight;
    Value_523=node_compile(right_node_522,info);
    if(    !Value_523) {
        __result_obj__284 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_521,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__284;
    }
    else {
    }
    right_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_525=(struct sType*)come_increment_ref_count(left_value_521->type);
    fun_name_526="operator_oror";
    if(    self->mQuote) {
        calling_fun_527=(_Bool)0;
    }
    else {
        calling_fun_527=operator_overload_fun(type_525,fun_name_526,left_value_521,right_value_524,(_Bool)0,info);
    }
    if(    !calling_fun_527) {
        come_value_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1442, "struct CVALUE*"))));
        __dec_obj140=come_value_528->c_value,
        come_value_528->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_521->c_value,right_value_524->c_value));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj141=come_value_528->type,
        come_value_528->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 1445, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_528->var=left_value_521->var;
        add_come_last_code(info,"%s",come_value_528->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_528));
        /*c*/ come_call_finalizer3(come_value_528,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__285 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_521,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_524,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj143;
struct sCommaNode* __result_obj__286;
    ((struct sNodeBase*)(__right_value525=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value525,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj142=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj143=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__286 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCommaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__286,sCommaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __right_value528 = (void*)0;
char* __result_obj__287;
    __result_obj__287 = come_increment_ref_count(((char*)(__right_value528=__builtin_string("sCommaNode"))));
    (__right_value528 = come_decrement_ref_count(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__287 = come_decrement_ref_count(__result_obj__287, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__287;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_529;
_Bool Value_530;
void* __right_value529 = (void*)0;
struct CVALUE* left_value_531;
struct sNode* right_node_532;
_Bool Value_533;
_Bool __result_obj__288;
void* __right_value530 = (void*)0;
struct CVALUE* right_value_534;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct CVALUE* come_value_535;
void* __right_value533 = (void*)0;
char* __dec_obj144;
void* __right_value534 = (void*)0;
struct sType* __dec_obj145;
_Bool __result_obj__289;
    left_node_529=self->mLeft;
    Value_530=node_compile(left_node_529,info);
    if(    !Value_530) {
        return (_Bool)0;
    }
    else {
    }
    left_value_531=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_532=self->mRight;
    Value_533=node_compile(right_node_532,info);
    if(    !Value_533) {
        __result_obj__288 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__288;
    }
    else {
    }
    right_value_534=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_535=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1491, "struct CVALUE*"))));
    __dec_obj144=come_value_535->c_value,
    come_value_535->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_531->c_value,right_value_534->c_value));
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj145=come_value_535->type,
    come_value_535->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_531->type));
    /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_535->var=((void*)0);
    add_come_last_code(info,"%s",come_value_535->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_535));
    __result_obj__289 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_534,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_535,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void sCommaNode_finalize(struct sCommaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value537 = (void*)0;
struct sNode* __dec_obj147;
void* __right_value538 = (void*)0;
struct sNode* __dec_obj148;
struct sConditionalNode* __result_obj__290;
    ((struct sNodeBase*)(__right_value535=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value535,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj146=self->mValue1,
    self->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value1));
    (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj147=self->mValue2,
    self->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value2));
    (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj148=self->mValue3,
    self->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value3));
    (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__290 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sConditionalNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sConditionalNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __right_value539 = (void*)0;
char* __result_obj__291;
    __result_obj__291 = come_increment_ref_count(((char*)(__right_value539=__builtin_string("sConditionalNode"))));
    (__right_value539 = come_decrement_ref_count(__right_value539, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__291 = come_decrement_ref_count(__result_obj__291, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__291;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_536;
struct sNode* value1_537;
_Bool Value_538;
void* __right_value540 = (void*)0;
struct CVALUE* value1_value_539;
struct sNode* value2_540;
_Bool Value_541;
_Bool __result_obj__292;
void* __right_value541 = (void*)0;
struct CVALUE* value2_value_542;
struct sNode* value3_543;
_Bool Value_544;
_Bool __result_obj__293;
void* __right_value542 = (void*)0;
struct CVALUE* value3_value_545;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct CVALUE* come_value_546;
void* __right_value545 = (void*)0;
char* __dec_obj149;
void* __right_value546 = (void*)0;
struct sType* __dec_obj150;
_Bool __result_obj__294;
    in_conditional_operator_536=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_537=self->mValue1;
    Value_538=node_compile(value1_537,info);
    if(    !Value_538) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_539=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value2_540=self->mValue2;
    Value_541=node_compile(value2_540,info);
    if(    !Value_541) {
        __result_obj__292 = (_Bool)0;
        /*c*/ come_call_finalizer3(value1_value_539,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__292;
    }
    else {
    }
    value2_value_542=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value3_543=self->mValue3;
    Value_544=node_compile(value3_543,info);
    if(    !Value_544) {
        __result_obj__293 = (_Bool)0;
        /*c*/ come_call_finalizer3(value1_value_539,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value2_value_542,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__293;
    }
    else {
    }
    value3_value_545=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_546=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1551, "struct CVALUE*"))));
    __dec_obj149=come_value_546->c_value,
    come_value_546->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_539->c_value,value2_value_542->c_value,value3_value_545->c_value));
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj150=come_value_546->type,
    come_value_546->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value2_value_542->type));
    /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_546->var=((void*)0);
    add_come_last_code(info,"%s",come_value_546->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_546));
    info->in_conditional_operator=in_conditional_operator_536;
    __result_obj__294 = (_Bool)1;
    /*c*/ come_call_finalizer3(value1_value_539,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value2_value_542,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value3_value_545,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_546,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        ((self->mValue1) ? self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        ((self->mValue2) ? self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        ((self->mValue3) ? self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value554 = (void*)0;
struct sNode* __result_obj__297;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1569, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value548=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1569, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result_obj__297 = come_increment_ref_count(((struct sNode*)(__right_value554=_inf_value2)));
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value548,sConditionalNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value554) ? __right_value554 = come_decrement_ref_count(__right_value554, ((struct sNode*)__right_value554)->finalize, ((struct sNode*)__right_value554)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__297;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
struct sConditionalNode* __result_obj__295;
void* __right_value549 = (void*)0;
struct sConditionalNode* result_547;
void* __right_value550 = (void*)0;
char* __dec_obj151;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj152;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj154;
struct sConditionalNode* __result_obj__296;
    if(    self==(void*)0) {
        __result_obj__295 = (void*)0;
        return __result_obj__295;
    }
    result_547=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode*"));
    if(    self!=((void*)0)) {
        result_547->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj151=result_547->sname,
        result_547->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sConditionalNode_clone", 5, "char*"));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_547->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj152=result_547->mValue1,
        result_547->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue1));
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj153=result_547->mValue2,
        result_547->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue2));
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj154=result_547->mValue3,
        result_547->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue3));
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__296 = result_547;
    /*c*/ come_call_finalizer3(result_547,sConditionalNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

struct sNode* mult_exp(struct sInfo* info){
void* __right_value555 = (void*)0;
struct sNode* node_548;
int sline_real_549;
void* __right_value556 = (void*)0;
struct sNode* right_550;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj158;
int sline_real_552;
void* __right_value564 = (void*)0;
struct sNode* right_553;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value571 = (void*)0;
struct sNode* __dec_obj162;
int sline_real_555;
void* __right_value572 = (void*)0;
struct sNode* right_556;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj166;
int sline_real_558;
void* __right_value580 = (void*)0;
struct sNode* right_559;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj167;
int sline_real_560;
void* __right_value584 = (void*)0;
struct sNode* right_561;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value587 = (void*)0;
struct sNode* __dec_obj168;
int sline_real_562;
void* __right_value588 = (void*)0;
struct sNode* right_563;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value591 = (void*)0;
struct sNode* __dec_obj169;
struct sNode* __result_obj__304;
    node_548=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_548->terminated(node_548->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_549=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_550=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_549;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1589, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value558=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1589, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_548),(struct sNode*)come_increment_ref_count(right_550),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __dec_obj158=node_548,
            node_548=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value558,sMultNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_550) ? right_550 = come_decrement_ref_count(right_550, ((struct sNode*)right_550)->finalize, ((struct sNode*)right_550)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_552=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_553=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_552;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1600, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value566=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1600, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_548),(struct sNode*)come_increment_ref_count(right_553),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __dec_obj162=node_548,
            node_548=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value566,sDivNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_553) ? right_553 = come_decrement_ref_count(right_553, ((struct sNode*)right_553)->finalize, ((struct sNode*)right_553)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_555=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_556=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_555;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1611, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value574=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1611, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_548),(struct sNode*)come_increment_ref_count(right_556),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __dec_obj166=node_548,
            node_548=(struct sNode*)come_increment_ref_count(_inf_value5);
            (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value574,sModNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_556) ? right_556 = come_decrement_ref_count(right_556, ((struct sNode*)right_556)->finalize, ((struct sNode*)right_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !node_548->terminated(node_548->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_558=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_559=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_558;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1622, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value582=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1622, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_548),(struct sNode*)come_increment_ref_count(right_559),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __dec_obj167=node_548,
            node_548=(struct sNode*)come_increment_ref_count(_inf_value6);
            (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value582,sMultNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_559) ? right_559 = come_decrement_ref_count(right_559, ((struct sNode*)right_559)->finalize, ((struct sNode*)right_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_560=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_561=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_560;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1633, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value586=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1633, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_548),(struct sNode*)come_increment_ref_count(right_561),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __dec_obj168=node_548,
            node_548=(struct sNode*)come_increment_ref_count(_inf_value7);
            (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value586,sDivNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_561) ? right_561 = come_decrement_ref_count(right_561, ((struct sNode*)right_561)->finalize, ((struct sNode*)right_561)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_562=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_563=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_562;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1644, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value590=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1644, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_548),(struct sNode*)come_increment_ref_count(right_563),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __dec_obj169=node_548,
            node_548=(struct sNode*)come_increment_ref_count(_inf_value8);
            (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value590,sModNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_563) ? right_563 = come_decrement_ref_count(right_563, ((struct sNode*)right_563)->finalize, ((struct sNode*)right_563)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__304 = come_increment_ref_count(node_548);
    ((node_548) ? node_548 = come_decrement_ref_count(node_548, ((struct sNode*)node_548)->finalize, ((struct sNode*)node_548)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__304;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
struct sMultNode* __result_obj__298;
void* __right_value559 = (void*)0;
struct sMultNode* result_551;
void* __right_value560 = (void*)0;
char* __dec_obj155;
void* __right_value561 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj157;
struct sMultNode* __result_obj__299;
    if(    self==(void*)0) {
        __result_obj__298 = (void*)0;
        return __result_obj__298;
    }
    result_551=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode*"));
    if(    self!=((void*)0)) {
        result_551->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_551->sname,
        result_551->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMultNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_551->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_551->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj156=result_551->mLeft,
        result_551->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj157=result_551->mRight,
        result_551->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__299 = result_551;
    /*c*/ come_call_finalizer3(result_551,sMultNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
struct sDivNode* __result_obj__300;
void* __right_value567 = (void*)0;
struct sDivNode* result_554;
void* __right_value568 = (void*)0;
char* __dec_obj159;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj160;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj161;
struct sDivNode* __result_obj__301;
    if(    self==(void*)0) {
        __result_obj__300 = (void*)0;
        return __result_obj__300;
    }
    result_554=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode*"));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_554->sname,
        result_554->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDivNode_clone", 5, "char*"));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_554->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj160=result_554->mLeft,
        result_554->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj161=result_554->mRight,
        result_554->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__301 = result_554;
    /*c*/ come_call_finalizer3(result_554,sDivNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
struct sModNode* __result_obj__302;
void* __right_value575 = (void*)0;
struct sModNode* result_557;
void* __right_value576 = (void*)0;
char* __dec_obj163;
void* __right_value577 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value578 = (void*)0;
struct sNode* __dec_obj165;
struct sModNode* __result_obj__303;
    if(    self==(void*)0) {
        __result_obj__302 = (void*)0;
        return __result_obj__302;
    }
    result_557=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode*"));
    if(    self!=((void*)0)) {
        result_557->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_557->sname,
        result_557->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sModNode_clone", 5, "char*"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_557->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj164=result_557->mLeft,
        result_557->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj165=result_557->mRight,
        result_557->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__303 = result_557;
    /*c*/ come_call_finalizer3(result_557,sModNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

struct sNode* add_exp(struct sInfo* info){
void* __right_value592 = (void*)0;
struct sNode* node_564;
int sline_real_565;
void* __right_value593 = (void*)0;
struct sNode* right_566;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj173;
int sline_real_568;
void* __right_value601 = (void*)0;
struct sNode* right_569;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value608 = (void*)0;
struct sNode* __dec_obj177;
int sline_real_571;
void* __right_value609 = (void*)0;
struct sNode* right_572;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj178;
int sline_real_573;
void* __right_value613 = (void*)0;
struct sNode* right_574;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj179;
struct sNode* __result_obj__309;
    node_564=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_565=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_566=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_565;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1673, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value595=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1673, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_564),(struct sNode*)come_increment_ref_count(right_566),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __dec_obj173=node_564,
            node_564=(struct sNode*)come_increment_ref_count(_inf_value9);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value595,sAddNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_566) ? right_566 = come_decrement_ref_count(right_566, ((struct sNode*)right_566)->finalize, ((struct sNode*)right_566)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_568=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_569=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_568;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1685, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value603=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1685, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_564),(struct sNode*)come_increment_ref_count(right_569),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __dec_obj177=node_564,
            node_564=(struct sNode*)come_increment_ref_count(_inf_value10);
            (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value603,sSubNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_569) ? right_569 = come_decrement_ref_count(right_569, ((struct sNode*)right_569)->finalize, ((struct sNode*)right_569)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_571=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_572=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_571;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1697, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value611=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1697, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_564),(struct sNode*)come_increment_ref_count(right_572),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __dec_obj178=node_564,
            node_564=(struct sNode*)come_increment_ref_count(_inf_value11);
            (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value611,sAddNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_572) ? right_572 = come_decrement_ref_count(right_572, ((struct sNode*)right_572)->finalize, ((struct sNode*)right_572)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_573=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_574=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_573;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1709, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value615=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1709, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_564),(struct sNode*)come_increment_ref_count(right_574),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __dec_obj179=node_564,
            node_564=(struct sNode*)come_increment_ref_count(_inf_value12);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value615,sSubNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_574) ? right_574 = come_decrement_ref_count(right_574, ((struct sNode*)right_574)->finalize, ((struct sNode*)right_574)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__309 = come_increment_ref_count(node_564);
    ((node_564) ? node_564 = come_decrement_ref_count(node_564, ((struct sNode*)node_564)->finalize, ((struct sNode*)node_564)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__309;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
struct sAddNode* __result_obj__305;
void* __right_value596 = (void*)0;
struct sAddNode* result_567;
void* __right_value597 = (void*)0;
char* __dec_obj170;
void* __right_value598 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value599 = (void*)0;
struct sNode* __dec_obj172;
struct sAddNode* __result_obj__306;
    if(    self==(void*)0) {
        __result_obj__305 = (void*)0;
        return __result_obj__305;
    }
    result_567=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode*"));
    if(    self!=((void*)0)) {
        result_567->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_567->sname,
        result_567->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAddNode_clone", 5, "char*"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_567->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj171=result_567->mLeft,
        result_567->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj172=result_567->mRight,
        result_567->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_567->mQuote=self->mQuote;
    }
    __result_obj__306 = result_567;
    /*c*/ come_call_finalizer3(result_567,sAddNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
struct sSubNode* __result_obj__307;
void* __right_value604 = (void*)0;
struct sSubNode* result_570;
void* __right_value605 = (void*)0;
char* __dec_obj174;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj175;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj176;
struct sSubNode* __result_obj__308;
    if(    self==(void*)0) {
        __result_obj__307 = (void*)0;
        return __result_obj__307;
    }
    result_570=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode*"));
    if(    self!=((void*)0)) {
        result_570->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj174=result_570->sname,
        result_570->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSubNode_clone", 5, "char*"));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj175=result_570->mLeft,
        result_570->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj176=result_570->mRight,
        result_570->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_570->mQuote=self->mQuote;
    }
    __result_obj__308 = result_570;
    /*c*/ come_call_finalizer3(result_570,sSubNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

struct sNode* shift_exp(struct sInfo* info){
void* __right_value617 = (void*)0;
struct sNode* node_575;
int sline_real_576;
void* __right_value618 = (void*)0;
struct sNode* right_577;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj183;
int sline_real_579;
void* __right_value626 = (void*)0;
struct sNode* right_580;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj187;
int sline_real_582;
void* __right_value634 = (void*)0;
struct sNode* right_583;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value637 = (void*)0;
struct sNode* __dec_obj188;
int sline_real_584;
void* __right_value638 = (void*)0;
struct sNode* right_585;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value641 = (void*)0;
struct sNode* __dec_obj189;
struct sNode* __result_obj__314;
    parse_sharp_v5(info);
    node_575=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_576=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_577=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_576;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1739, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value620=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1739, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_575),(struct sNode*)come_increment_ref_count(right_577),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __dec_obj183=node_575,
            node_575=(struct sNode*)come_increment_ref_count(_inf_value13);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value620,sLShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_577) ? right_577 = come_decrement_ref_count(right_577, ((struct sNode*)right_577)->finalize, ((struct sNode*)right_577)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_579=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_580=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_579;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1750, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value628=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1750, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_575),(struct sNode*)come_increment_ref_count(right_580),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __dec_obj187=node_575,
            node_575=(struct sNode*)come_increment_ref_count(_inf_value14);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value628,sRShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_580) ? right_580 = come_decrement_ref_count(right_580, ((struct sNode*)right_580)->finalize, ((struct sNode*)right_580)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_582=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_583=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_582;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1761, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value636=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1761, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_575),(struct sNode*)come_increment_ref_count(right_583),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __dec_obj188=node_575,
            node_575=(struct sNode*)come_increment_ref_count(_inf_value15);
            (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value636,sLShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_583) ? right_583 = come_decrement_ref_count(right_583, ((struct sNode*)right_583)->finalize, ((struct sNode*)right_583)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_584=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_585=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_584;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1772, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value640=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1772, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_575),(struct sNode*)come_increment_ref_count(right_585),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __dec_obj189=node_575,
            node_575=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value640,sRShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_585) ? right_585 = come_decrement_ref_count(right_585, ((struct sNode*)right_585)->finalize, ((struct sNode*)right_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__314 = come_increment_ref_count(node_575);
    ((node_575) ? node_575 = come_decrement_ref_count(node_575, ((struct sNode*)node_575)->finalize, ((struct sNode*)node_575)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__314) ? __result_obj__314 = come_decrement_ref_count(__result_obj__314, ((struct sNode*)__result_obj__314)->finalize, ((struct sNode*)__result_obj__314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__314;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
struct sLShiftNode* __result_obj__310;
void* __right_value621 = (void*)0;
struct sLShiftNode* result_578;
void* __right_value622 = (void*)0;
char* __dec_obj180;
void* __right_value623 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj182;
struct sLShiftNode* __result_obj__311;
    if(    self==(void*)0) {
        __result_obj__310 = (void*)0;
        return __result_obj__310;
    }
    result_578=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode*"));
    if(    self!=((void*)0)) {
        result_578->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result_578->sname,
        result_578->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLShiftNode_clone", 5, "char*"));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_578->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj181=result_578->mLeft,
        result_578->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj182=result_578->mRight,
        result_578->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__311 = result_578;
    /*c*/ come_call_finalizer3(result_578,sLShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__311;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
struct sRShiftNode* __result_obj__312;
void* __right_value629 = (void*)0;
struct sRShiftNode* result_581;
void* __right_value630 = (void*)0;
char* __dec_obj184;
void* __right_value631 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value632 = (void*)0;
struct sNode* __dec_obj186;
struct sRShiftNode* __result_obj__313;
    if(    self==(void*)0) {
        __result_obj__312 = (void*)0;
        return __result_obj__312;
    }
    result_581=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode*"));
    if(    self!=((void*)0)) {
        result_581->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj184=result_581->sname,
        result_581->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRShiftNode_clone", 5, "char*"));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_581->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_581->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj185=result_581->mLeft,
        result_581->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj186=result_581->mRight,
        result_581->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__313 = result_581;
    /*c*/ come_call_finalizer3(result_581,sRShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __right_value642 = (void*)0;
struct sNode* node_586;
int sline_real_587;
void* __right_value643 = (void*)0;
struct sNode* right_588;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value650 = (void*)0;
struct sNode* __dec_obj193;
int sline_real_590;
void* __right_value651 = (void*)0;
struct sNode* right_591;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj197;
int sline_real_593;
void* __right_value659 = (void*)0;
struct sNode* right_594;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj201;
int sline_real_596;
void* __right_value667 = (void*)0;
struct sNode* right_597;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value674 = (void*)0;
struct sNode* __dec_obj205;
int sline_real_599;
void* __right_value675 = (void*)0;
struct sNode* right_600;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value678 = (void*)0;
struct sNode* __dec_obj206;
int sline_real_601;
void* __right_value679 = (void*)0;
struct sNode* right_602;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value682 = (void*)0;
struct sNode* __dec_obj207;
int sline_real_603;
void* __right_value683 = (void*)0;
struct sNode* right_604;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value686 = (void*)0;
struct sNode* __dec_obj208;
int sline_real_605;
void* __right_value687 = (void*)0;
struct sNode* right_606;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value690 = (void*)0;
struct sNode* __dec_obj209;
struct sNode* __result_obj__323;
    parse_sharp_v5(info);
    node_586=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_587=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_588=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_587;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1802, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value645=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1802, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_588),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __dec_obj193=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value17);
            (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value645,sGtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_588) ? right_588 = come_decrement_ref_count(right_588, ((struct sNode*)right_588)->finalize, ((struct sNode*)right_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_590=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_591=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_590;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1813, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value653=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1813, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_591),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __dec_obj197=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value18);
            (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value653,sLtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_591) ? right_591 = come_decrement_ref_count(right_591, ((struct sNode*)right_591)->finalize, ((struct sNode*)right_591)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_593=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_594=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_593;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1824, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value661=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1824, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_594),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __dec_obj201=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value19);
            (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value661,sGtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_594) ? right_594 = come_decrement_ref_count(right_594, ((struct sNode*)right_594)->finalize, ((struct sNode*)right_594)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_596=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_597=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_596;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1835, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value669=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1835, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_597),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __dec_obj205=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value20);
            (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value669,sLtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_597) ? right_597 = come_decrement_ref_count(right_597, ((struct sNode*)right_597)->finalize, ((struct sNode*)right_597)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_599=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_600=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_599;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1846, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value677=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1846, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_600),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __dec_obj206=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value21);
            (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value677,sGtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_600) ? right_600 = come_decrement_ref_count(right_600, ((struct sNode*)right_600)->finalize, ((struct sNode*)right_600)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_601=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_602=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_601;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1857, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value681=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1857, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_602),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __dec_obj207=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value22);
            (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value681,sLtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_602) ? right_602 = come_decrement_ref_count(right_602, ((struct sNode*)right_602)->finalize, ((struct sNode*)right_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_603=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_604=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_603;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1868, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value685=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1868, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_604),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __dec_obj208=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value23);
            (__dec_obj208 ? __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value685,sGtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_604) ? right_604 = come_decrement_ref_count(right_604, ((struct sNode*)right_604)->finalize, ((struct sNode*)right_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_605=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_606=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_605;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1879, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value689=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1879, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_586),(struct sNode*)come_increment_ref_count(right_606),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __dec_obj209=node_586,
            node_586=(struct sNode*)come_increment_ref_count(_inf_value24);
            (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value689,sLtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_606) ? right_606 = come_decrement_ref_count(right_606, ((struct sNode*)right_606)->finalize, ((struct sNode*)right_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__323 = come_increment_ref_count(node_586);
    ((node_586) ? node_586 = come_decrement_ref_count(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__323;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
struct sGtEqNode* __result_obj__315;
void* __right_value646 = (void*)0;
struct sGtEqNode* result_589;
void* __right_value647 = (void*)0;
char* __dec_obj190;
void* __right_value648 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value649 = (void*)0;
struct sNode* __dec_obj192;
struct sGtEqNode* __result_obj__316;
    if(    self==(void*)0) {
        __result_obj__315 = (void*)0;
        return __result_obj__315;
    }
    result_589=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode*"));
    if(    self!=((void*)0)) {
        result_589->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj190=result_589->sname,
        result_589->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtEqNode_clone", 5, "char*"));
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_589->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_589->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj191=result_589->mLeft,
        result_589->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj192=result_589->mRight,
        result_589->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__316 = result_589;
    /*c*/ come_call_finalizer3(result_589,sGtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
struct sLtEqNode* __result_obj__317;
void* __right_value654 = (void*)0;
struct sLtEqNode* result_592;
void* __right_value655 = (void*)0;
char* __dec_obj194;
void* __right_value656 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value657 = (void*)0;
struct sNode* __dec_obj196;
struct sLtEqNode* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__317 = (void*)0;
        return __result_obj__317;
    }
    result_592=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode*"));
    if(    self!=((void*)0)) {
        result_592->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj194=result_592->sname,
        result_592->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtEqNode_clone", 5, "char*"));
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_592->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_592->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj195=result_592->mLeft,
        result_592->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj196=result_592->mRight,
        result_592->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__318 = result_592;
    /*c*/ come_call_finalizer3(result_592,sLtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
struct sGtNode* __result_obj__319;
void* __right_value662 = (void*)0;
struct sGtNode* result_595;
void* __right_value663 = (void*)0;
char* __dec_obj198;
void* __right_value664 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj200;
struct sGtNode* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__319 = (void*)0;
        return __result_obj__319;
    }
    result_595=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode*"));
    if(    self!=((void*)0)) {
        result_595->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=result_595->sname,
        result_595->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtNode_clone", 5, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_595->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_595->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj199=result_595->mLeft,
        result_595->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj200=result_595->mRight,
        result_595->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__320 = result_595;
    /*c*/ come_call_finalizer3(result_595,sGtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__320;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
struct sLtNode* __result_obj__321;
void* __right_value670 = (void*)0;
struct sLtNode* result_598;
void* __right_value671 = (void*)0;
char* __dec_obj202;
void* __right_value672 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value673 = (void*)0;
struct sNode* __dec_obj204;
struct sLtNode* __result_obj__322;
    if(    self==(void*)0) {
        __result_obj__321 = (void*)0;
        return __result_obj__321;
    }
    result_598=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode*"));
    if(    self!=((void*)0)) {
        result_598->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=result_598->sname,
        result_598->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtNode_clone", 5, "char*"));
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_598->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_598->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj203=result_598->mLeft,
        result_598->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj204=result_598->mRight,
        result_598->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__322 = result_598;
    /*c*/ come_call_finalizer3(result_598,sLtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

struct sNode* eq_exp(struct sInfo* info){
void* __right_value691 = (void*)0;
struct sNode* node_607;
int sline_real_608;
void* __right_value692 = (void*)0;
struct sNode* right_609;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value699 = (void*)0;
struct sNode* __dec_obj213;
int sline_real_611;
void* __right_value700 = (void*)0;
struct sNode* right_612;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value707 = (void*)0;
struct sNode* __dec_obj217;
int sline_real_614;
void* __right_value708 = (void*)0;
struct sNode* right_615;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value715 = (void*)0;
struct sNode* __dec_obj221;
int sline_real_617;
void* __right_value716 = (void*)0;
struct sNode* right_618;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value723 = (void*)0;
struct sNode* __dec_obj225;
int sline_real_620;
void* __right_value724 = (void*)0;
struct sNode* right_621;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value727 = (void*)0;
struct sNode* __dec_obj226;
int sline_real_622;
void* __right_value728 = (void*)0;
struct sNode* right_623;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value731 = (void*)0;
struct sNode* __dec_obj227;
int sline_real_624;
void* __right_value732 = (void*)0;
struct sNode* right_625;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value735 = (void*)0;
struct sNode* __dec_obj228;
int sline_real_626;
void* __right_value736 = (void*)0;
struct sNode* right_627;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value739 = (void*)0;
struct sNode* __dec_obj229;
struct sNode* __result_obj__332;
    parse_sharp_v5(info);
    node_607=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_608=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_609=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_608;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1909, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value694=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1909, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_609),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __dec_obj213=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value25);
            (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value694,sEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_609) ? right_609 = come_decrement_ref_count(right_609, ((struct sNode*)right_609)->finalize, ((struct sNode*)right_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_611=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_612=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_611;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1920, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value702=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1920, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_612),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __dec_obj217=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value26);
            (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value702,sEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_612) ? right_612 = come_decrement_ref_count(right_612, ((struct sNode*)right_612)->finalize, ((struct sNode*)right_612)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_614=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_615=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_614;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1931, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value710=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1931, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_615),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __dec_obj221=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value27);
            (__dec_obj221 ? __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value710,sNotEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_615) ? right_615 = come_decrement_ref_count(right_615, ((struct sNode*)right_615)->finalize, ((struct sNode*)right_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_617=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_618=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_617;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1942, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value718=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1942, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_618),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __dec_obj225=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value28);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value718,sNotEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_618) ? right_618 = come_decrement_ref_count(right_618, ((struct sNode*)right_618)->finalize, ((struct sNode*)right_618)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_620=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_621=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_620;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1953, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value726=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1953, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_621),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __dec_obj226=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value29);
            (__dec_obj226 ? __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value726,sEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_621) ? right_621 = come_decrement_ref_count(right_621, ((struct sNode*)right_621)->finalize, ((struct sNode*)right_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_622=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_623=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_622;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1964, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value730=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1964, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_623),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __dec_obj227=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value30);
            (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value730,sEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_623) ? right_623 = come_decrement_ref_count(right_623, ((struct sNode*)right_623)->finalize, ((struct sNode*)right_623)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_624=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_625=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_624;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1975, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value734=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1975, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_625),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __dec_obj228=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value31);
            (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value734,sNotEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_625) ? right_625 = come_decrement_ref_count(right_625, ((struct sNode*)right_625)->finalize, ((struct sNode*)right_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_626=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_627=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_626;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1986, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value738=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1986, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_607),(struct sNode*)come_increment_ref_count(right_627),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __dec_obj229=node_607,
            node_607=(struct sNode*)come_increment_ref_count(_inf_value32);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value738,sNotEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_627) ? right_627 = come_decrement_ref_count(right_627, ((struct sNode*)right_627)->finalize, ((struct sNode*)right_627)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__332 = come_increment_ref_count(node_607);
    ((node_607) ? node_607 = come_decrement_ref_count(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__332) ? __result_obj__332 = come_decrement_ref_count(__result_obj__332, ((struct sNode*)__result_obj__332)->finalize, ((struct sNode*)__result_obj__332)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__332;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
struct sEq2Node* __result_obj__324;
void* __right_value695 = (void*)0;
struct sEq2Node* result_610;
void* __right_value696 = (void*)0;
char* __dec_obj210;
void* __right_value697 = (void*)0;
struct sNode* __dec_obj211;
void* __right_value698 = (void*)0;
struct sNode* __dec_obj212;
struct sEq2Node* __result_obj__325;
    if(    self==(void*)0) {
        __result_obj__324 = (void*)0;
        return __result_obj__324;
    }
    result_610=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node*"));
    if(    self!=((void*)0)) {
        result_610->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_610->sname,
        result_610->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEq2Node_clone", 5, "char*"));
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_610->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_610->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj211=result_610->mLeft,
        result_610->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj212=result_610->mRight,
        result_610->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__325 = result_610;
    /*c*/ come_call_finalizer3(result_610,sEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__325;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
struct sEqNode* __result_obj__326;
void* __right_value703 = (void*)0;
struct sEqNode* result_613;
void* __right_value704 = (void*)0;
char* __dec_obj214;
void* __right_value705 = (void*)0;
struct sNode* __dec_obj215;
void* __right_value706 = (void*)0;
struct sNode* __dec_obj216;
struct sEqNode* __result_obj__327;
    if(    self==(void*)0) {
        __result_obj__326 = (void*)0;
        return __result_obj__326;
    }
    result_613=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode*"));
    if(    self!=((void*)0)) {
        result_613->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj214=result_613->sname,
        result_613->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEqNode_clone", 5, "char*"));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_613->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_613->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj215=result_613->mLeft,
        result_613->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj216=result_613->mRight,
        result_613->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj216 ? __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__327 = result_613;
    /*c*/ come_call_finalizer3(result_613,sEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
struct sNotEq2Node* __result_obj__328;
void* __right_value711 = (void*)0;
struct sNotEq2Node* result_616;
void* __right_value712 = (void*)0;
char* __dec_obj218;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj219;
void* __right_value714 = (void*)0;
struct sNode* __dec_obj220;
struct sNotEq2Node* __result_obj__329;
    if(    self==(void*)0) {
        __result_obj__328 = (void*)0;
        return __result_obj__328;
    }
    result_616=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node*"));
    if(    self!=((void*)0)) {
        result_616->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj218=result_616->sname,
        result_616->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEq2Node_clone", 5, "char*"));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_616->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_616->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj219=result_616->mLeft,
        result_616->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj220=result_616->mRight,
        result_616->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj220 ? __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__329 = result_616;
    /*c*/ come_call_finalizer3(result_616,sNotEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__329;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
struct sNotEqNode* __result_obj__330;
void* __right_value719 = (void*)0;
struct sNotEqNode* result_619;
void* __right_value720 = (void*)0;
char* __dec_obj222;
void* __right_value721 = (void*)0;
struct sNode* __dec_obj223;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj224;
struct sNotEqNode* __result_obj__331;
    if(    self==(void*)0) {
        __result_obj__330 = (void*)0;
        return __result_obj__330;
    }
    result_619=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode*"));
    if(    self!=((void*)0)) {
        result_619->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj222=result_619->sname,
        result_619->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEqNode_clone", 5, "char*"));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_619->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_619->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj223=result_619->mLeft,
        result_619->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj224=result_619->mRight,
        result_619->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__331 = result_619;
    /*c*/ come_call_finalizer3(result_619,sNotEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

struct sNode* and_exp(struct sInfo* info){
void* __right_value740 = (void*)0;
struct sNode* node_628;
int sline_real_629;
void* __right_value741 = (void*)0;
struct sNode* right_630;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value748 = (void*)0;
struct sNode* __dec_obj233;
int sline_real_632;
void* __right_value749 = (void*)0;
struct sNode* right_633;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value752 = (void*)0;
struct sNode* __dec_obj234;
struct sNode* __result_obj__335;
    parse_sharp_v5(info);
    node_628=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_628->terminated(node_628->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_629=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_630=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_629;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2016, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value743=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2016, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_630),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __dec_obj233=node_628,
            node_628=(struct sNode*)come_increment_ref_count(_inf_value33);
            (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value743,sAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_630) ? right_630 = come_decrement_ref_count(right_630, ((struct sNode*)right_630)->finalize, ((struct sNode*)right_630)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !node_628->terminated(node_628->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_632=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_633=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_632;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2027, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value751=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2027, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_633),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __dec_obj234=node_628,
            node_628=(struct sNode*)come_increment_ref_count(_inf_value34);
            (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value751,sAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_633) ? right_633 = come_decrement_ref_count(right_633, ((struct sNode*)right_633)->finalize, ((struct sNode*)right_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__335 = come_increment_ref_count(node_628);
    ((node_628) ? node_628 = come_decrement_ref_count(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__335) ? __result_obj__335 = come_decrement_ref_count(__result_obj__335, ((struct sNode*)__result_obj__335)->finalize, ((struct sNode*)__result_obj__335)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__335;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
struct sAndNode* __result_obj__333;
void* __right_value744 = (void*)0;
struct sAndNode* result_631;
void* __right_value745 = (void*)0;
char* __dec_obj230;
void* __right_value746 = (void*)0;
struct sNode* __dec_obj231;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj232;
struct sAndNode* __result_obj__334;
    if(    self==(void*)0) {
        __result_obj__333 = (void*)0;
        return __result_obj__333;
    }
    result_631=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode*"));
    if(    self!=((void*)0)) {
        result_631->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_631->sname,
        result_631->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndNode_clone", 5, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_631->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj231=result_631->mLeft,
        result_631->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj231 ? __dec_obj231 = come_decrement_ref_count(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj232=result_631->mRight,
        result_631->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__334 = result_631;
    /*c*/ come_call_finalizer3(result_631,sAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

struct sNode* xor_exp(struct sInfo* info){
void* __right_value753 = (void*)0;
struct sNode* node_634;
int sline_real_635;
void* __right_value754 = (void*)0;
struct sNode* right_636;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj238;
int sline_real_638;
void* __right_value762 = (void*)0;
struct sNode* right_639;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value765 = (void*)0;
struct sNode* __dec_obj239;
struct sNode* __result_obj__338;
    parse_sharp_v5(info);
    node_634=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_635=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_636=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_635;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2057, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value756=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2057, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_634),(struct sNode*)come_increment_ref_count(right_636),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __dec_obj238=node_634,
            node_634=(struct sNode*)come_increment_ref_count(_inf_value35);
            (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value756,sXOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_636) ? right_636 = come_decrement_ref_count(right_636, ((struct sNode*)right_636)->finalize, ((struct sNode*)right_636)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_638=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_639=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_638;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2068, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value764=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2068, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_634),(struct sNode*)come_increment_ref_count(right_639),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __dec_obj239=node_634,
            node_634=(struct sNode*)come_increment_ref_count(_inf_value36);
            (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value764,sXOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_639) ? right_639 = come_decrement_ref_count(right_639, ((struct sNode*)right_639)->finalize, ((struct sNode*)right_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__338 = come_increment_ref_count(node_634);
    ((node_634) ? node_634 = come_decrement_ref_count(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__338) ? __result_obj__338 = come_decrement_ref_count(__result_obj__338, ((struct sNode*)__result_obj__338)->finalize, ((struct sNode*)__result_obj__338)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__338;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
struct sXOrNode* __result_obj__336;
void* __right_value757 = (void*)0;
struct sXOrNode* result_637;
void* __right_value758 = (void*)0;
char* __dec_obj235;
void* __right_value759 = (void*)0;
struct sNode* __dec_obj236;
void* __right_value760 = (void*)0;
struct sNode* __dec_obj237;
struct sXOrNode* __result_obj__337;
    if(    self==(void*)0) {
        __result_obj__336 = (void*)0;
        return __result_obj__336;
    }
    result_637=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode*"));
    if(    self!=((void*)0)) {
        result_637->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj235=result_637->sname,
        result_637->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sXOrNode_clone", 5, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_637->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_637->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj236=result_637->mLeft,
        result_637->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj236 ? __dec_obj236 = come_decrement_ref_count(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj237=result_637->mRight,
        result_637->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__337 = result_637;
    /*c*/ come_call_finalizer3(result_637,sXOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__337;
}

struct sNode* or_exp(struct sInfo* info){
void* __right_value766 = (void*)0;
struct sNode* node_640;
int sline_real_641;
void* __right_value767 = (void*)0;
struct sNode* right_642;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj243;
int sline_real_644;
void* __right_value775 = (void*)0;
struct sNode* right_645;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj244;
struct sNode* __result_obj__341;
    parse_sharp_v5(info);
    node_640=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_641=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_642=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_641;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2098, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value769=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2098, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_640),(struct sNode*)come_increment_ref_count(right_642),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __dec_obj243=node_640,
            node_640=(struct sNode*)come_increment_ref_count(_inf_value37);
            (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value769,sOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_642) ? right_642 = come_decrement_ref_count(right_642, ((struct sNode*)right_642)->finalize, ((struct sNode*)right_642)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_644=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_645=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_644;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2109, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value777=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2109, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_640),(struct sNode*)come_increment_ref_count(right_645),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __dec_obj244=node_640,
            node_640=(struct sNode*)come_increment_ref_count(_inf_value38);
            (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value777,sOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_645) ? right_645 = come_decrement_ref_count(right_645, ((struct sNode*)right_645)->finalize, ((struct sNode*)right_645)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__341 = come_increment_ref_count(node_640);
    ((node_640) ? node_640 = come_decrement_ref_count(node_640, ((struct sNode*)node_640)->finalize, ((struct sNode*)node_640)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__341;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
struct sOrNode* __result_obj__339;
void* __right_value770 = (void*)0;
struct sOrNode* result_643;
void* __right_value771 = (void*)0;
char* __dec_obj240;
void* __right_value772 = (void*)0;
struct sNode* __dec_obj241;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj242;
struct sOrNode* __result_obj__340;
    if(    self==(void*)0) {
        __result_obj__339 = (void*)0;
        return __result_obj__339;
    }
    result_643=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode*"));
    if(    self!=((void*)0)) {
        result_643->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_643->sname,
        result_643->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrNode_clone", 5, "char*"));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_643->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_643->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj241=result_643->mLeft,
        result_643->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj241 ? __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj242=result_643->mRight,
        result_643->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__340 = result_643;
    /*c*/ come_call_finalizer3(result_643,sOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__340;
}

struct sNode* andand_exp(struct sInfo* info){
void* __right_value779 = (void*)0;
struct sNode* node_646;
int sline_real_647;
void* __right_value780 = (void*)0;
struct sNode* right_648;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value787 = (void*)0;
struct sNode* __dec_obj248;
int sline_real_650;
void* __right_value788 = (void*)0;
struct sNode* right_651;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value791 = (void*)0;
struct sNode* __dec_obj249;
struct sNode* __result_obj__344;
    parse_sharp_v5(info);
    node_646=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_647=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_648=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_647;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2139, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value782=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2139, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_648),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __dec_obj248=node_646,
            node_646=(struct sNode*)come_increment_ref_count(_inf_value39);
            (__dec_obj248 ? __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value782,sAndAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_648) ? right_648 = come_decrement_ref_count(right_648, ((struct sNode*)right_648)->finalize, ((struct sNode*)right_648)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_650=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_651=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_650;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2150, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value790=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2150, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_651),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __dec_obj249=node_646,
            node_646=(struct sNode*)come_increment_ref_count(_inf_value40);
            (__dec_obj249 ? __dec_obj249 = come_decrement_ref_count(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value790,sAndAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_651) ? right_651 = come_decrement_ref_count(right_651, ((struct sNode*)right_651)->finalize, ((struct sNode*)right_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__344 = come_increment_ref_count(node_646);
    ((node_646) ? node_646 = come_decrement_ref_count(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__344) ? __result_obj__344 = come_decrement_ref_count(__result_obj__344, ((struct sNode*)__result_obj__344)->finalize, ((struct sNode*)__result_obj__344)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__344;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
struct sAndAndNode* __result_obj__342;
void* __right_value783 = (void*)0;
struct sAndAndNode* result_649;
void* __right_value784 = (void*)0;
char* __dec_obj245;
void* __right_value785 = (void*)0;
struct sNode* __dec_obj246;
void* __right_value786 = (void*)0;
struct sNode* __dec_obj247;
struct sAndAndNode* __result_obj__343;
    if(    self==(void*)0) {
        __result_obj__342 = (void*)0;
        return __result_obj__342;
    }
    result_649=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode*"));
    if(    self!=((void*)0)) {
        result_649->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_649->sname,
        result_649->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndAndNode_clone", 5, "char*"));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_649->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_649->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj246=result_649->mLeft,
        result_649->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj247=result_649->mRight,
        result_649->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj247 ? __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__343 = result_649;
    /*c*/ come_call_finalizer3(result_649,sAndAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
}

struct sNode* oror_exp(struct sInfo* info){
void* __right_value792 = (void*)0;
struct sNode* node_652;
int sline_real_653;
void* __right_value793 = (void*)0;
struct sNode* right_654;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj253;
int sline_real_656;
void* __right_value801 = (void*)0;
struct sNode* right_657;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value804 = (void*)0;
struct sNode* __dec_obj254;
struct sNode* __result_obj__347;
    parse_sharp_v5(info);
    node_652=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_653=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_654=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_653;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2180, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value795=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2180, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_652),(struct sNode*)come_increment_ref_count(right_654),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __dec_obj253=node_652,
            node_652=(struct sNode*)come_increment_ref_count(_inf_value41);
            (__dec_obj253 ? __dec_obj253 = come_decrement_ref_count(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value795,sOrOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_654) ? right_654 = come_decrement_ref_count(right_654, ((struct sNode*)right_654)->finalize, ((struct sNode*)right_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_656=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_657=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_656;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2191, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value803=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2191, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_652),(struct sNode*)come_increment_ref_count(right_657),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __dec_obj254=node_652,
            node_652=(struct sNode*)come_increment_ref_count(_inf_value42);
            (__dec_obj254 ? __dec_obj254 = come_decrement_ref_count(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value803,sOrOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_657) ? right_657 = come_decrement_ref_count(right_657, ((struct sNode*)right_657)->finalize, ((struct sNode*)right_657)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__347 = come_increment_ref_count(node_652);
    ((node_652) ? node_652 = come_decrement_ref_count(node_652, ((struct sNode*)node_652)->finalize, ((struct sNode*)node_652)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__347;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
struct sOrOrNode* __result_obj__345;
void* __right_value796 = (void*)0;
struct sOrOrNode* result_655;
void* __right_value797 = (void*)0;
char* __dec_obj250;
void* __right_value798 = (void*)0;
struct sNode* __dec_obj251;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj252;
struct sOrOrNode* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = (void*)0;
        return __result_obj__345;
    }
    result_655=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode*"));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj250=result_655->sname,
        result_655->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrOrNode_clone", 5, "char*"));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_655->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj251=result_655->mLeft,
        result_655->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj251 ? __dec_obj251 = come_decrement_ref_count(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj252=result_655->mRight,
        result_655->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj252 ? __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__346 = result_655;
    /*c*/ come_call_finalizer3(result_655,sOrOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__346;
}

struct sNode* comma_exp(struct sInfo* info){
void* __right_value805 = (void*)0;
struct sNode* node_658;
int sline_real_659;
void* __right_value806 = (void*)0;
struct sNode* node2_660;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value813 = (void*)0;
struct sNode* __dec_obj258;
struct sNode* __result_obj__350;
    parse_sharp_v5(info);
    node_658=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_659=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_660=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_659;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2221, "struct sNode");
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value808=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2221, "struct sCommaNode*")),(struct sNode*)come_increment_ref_count(node_658),(struct sNode*)come_increment_ref_count(node2_660),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __dec_obj258=node_658,
            node_658=(struct sNode*)come_increment_ref_count(_inf_value43);
            (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value808,sCommaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node2_660) ? node2_660 = come_decrement_ref_count(node2_660, ((struct sNode*)node2_660)->finalize, ((struct sNode*)node2_660)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__350 = come_increment_ref_count(node_658);
    ((node_658) ? node_658 = come_decrement_ref_count(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__350;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
struct sCommaNode* __result_obj__348;
void* __right_value809 = (void*)0;
struct sCommaNode* result_661;
void* __right_value810 = (void*)0;
char* __dec_obj255;
void* __right_value811 = (void*)0;
struct sNode* __dec_obj256;
void* __right_value812 = (void*)0;
struct sNode* __dec_obj257;
struct sCommaNode* __result_obj__349;
    if(    self==(void*)0) {
        __result_obj__348 = (void*)0;
        return __result_obj__348;
    }
    result_661=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode*"));
    if(    self!=((void*)0)) {
        result_661->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj255=result_661->sname,
        result_661->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCommaNode_clone", 5, "char*"));
        __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_661->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj256=result_661->mLeft,
        result_661->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj257=result_661->mRight,
        result_661->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__349 = result_661;
    /*c*/ come_call_finalizer3(result_661,sCommaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__349;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __right_value814 = (void*)0;
struct sNode* node_662;
int sline_real_663;
struct sNode* value1_664;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value817 = (void*)0;
struct sNode* __dec_obj259;
_Bool no_label_665;
void* __right_value818 = (void*)0;
struct sNode* __dec_obj260;
void* __right_value819 = (void*)0;
struct sNode* value2_666;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value822 = (void*)0;
struct sNode* __dec_obj261;
struct sNode* __result_obj__351;
value1_664 = (void*)0;
    parse_sharp_v5(info);
    node_662=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_663=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2252, "struct sNode");
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value816=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2252, "struct sNullNode*")),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj259=value1_664,
                value1_664=(struct sNode*)come_increment_ref_count(_inf_value44);
                (__dec_obj259 ? __dec_obj259 = come_decrement_ref_count(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value816,sNullNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                no_label_665=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj260=value1_664,
                value1_664=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                (__dec_obj260 ? __dec_obj260 = come_decrement_ref_count(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_label=no_label_665;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_666=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_663;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2270, "struct sNode");
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value821=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2270, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(node_662),(struct sNode*)come_increment_ref_count(value1_664),(struct sNode*)come_increment_ref_count(value2_666),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __dec_obj261=node_662,
            node_662=(struct sNode*)come_increment_ref_count(_inf_value45);
            (__dec_obj261 ? __dec_obj261 = come_decrement_ref_count(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value821,sConditionalNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((value1_664) ? value1_664 = come_decrement_ref_count(value1_664, ((struct sNode*)value1_664)->finalize, ((struct sNode*)value1_664)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((value2_666) ? value2_666 = come_decrement_ref_count(value2_666, ((struct sNode*)value2_666)->finalize, ((struct sNode*)value2_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__351 = come_increment_ref_count(node_662);
    ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__351) ? __result_obj__351 = come_decrement_ref_count(__result_obj__351, ((struct sNode*)__result_obj__351)->finalize, ((struct sNode*)__result_obj__351)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__351;
}

struct sNode* expression_v13(struct sInfo* info){
void* __right_value823 = (void*)0;
struct sNode* node_667;
struct sNode* __result_obj__352;
    parse_sharp_v5(info);
    node_667=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result_obj__352 = come_increment_ref_count(node_667);
    ((node_667) ? node_667 = come_decrement_ref_count(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__352;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value826 = (void*)0;
struct sNode* __result_obj__353;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value831 = (void*)0;
struct sNode* __result_obj__356;
void* __right_value832 = (void*)0;
struct sNode* __result_obj__357;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2294, "struct sNode");
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value825=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2294, "struct sNullNode*")),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result_obj__353 = come_increment_ref_count(((struct sNode*)(__right_value826=_inf_value46)));
        /*c*/ come_call_finalizer3(__right_value825,sNullNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value826) ? __right_value826 = come_decrement_ref_count(__right_value826, ((struct sNode*)__right_value826)->finalize, ((struct sNode*)__right_value826)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__353;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2297, "struct sNode");
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value828=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2297, "struct sNilNode*")),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result_obj__356 = come_increment_ref_count(((struct sNode*)(__right_value831=_inf_value47)));
        /*c*/ come_call_finalizer3(__right_value828,sNilNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value831) ? __right_value831 = come_decrement_ref_count(__right_value831, ((struct sNode*)__right_value831)->finalize, ((struct sNode*)__right_value831)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__356;
    }
    __result_obj__357 = come_increment_ref_count(((struct sNode*)(__right_value832=string_node_v12(buf,head,head_sline,info))));
    ((__right_value832) ? __right_value832 = come_decrement_ref_count(__right_value832, ((struct sNode*)__right_value832)->finalize, ((struct sNode*)__right_value832)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__357) ? __result_obj__357 = come_decrement_ref_count(__result_obj__357, ((struct sNode*)__result_obj__357)->finalize, ((struct sNode*)__result_obj__357)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__357;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
struct sNilNode* __result_obj__354;
void* __right_value829 = (void*)0;
struct sNilNode* result_668;
void* __right_value830 = (void*)0;
char* __dec_obj262;
struct sNilNode* __result_obj__355;
    if(    self==(void*)0) {
        __result_obj__354 = (void*)0;
        return __result_obj__354;
    }
    result_668=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode*"));
    if(    self!=((void*)0)) {
        result_668->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj262=result_668->sname,
        result_668->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNilNode_clone", 5, "char*"));
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_668->sline_real=self->sline_real;
    }
    __result_obj__355 = result_668;
    /*c*/ come_call_finalizer3(result_668,sNilNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__355;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value835 = (void*)0;
struct sNode* __result_obj__358;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2305, "struct sNode");
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value834=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2305, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result_obj__358 = come_increment_ref_count(((struct sNode*)(__right_value835=_inf_value48)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value834,sLtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value835) ? __right_value835 = come_decrement_ref_count(__right_value835, ((struct sNode*)__right_value835)->finalize, ((struct sNode*)__right_value835)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__358) ? __result_obj__358 = come_decrement_ref_count(__result_obj__358, ((struct sNode*)__result_obj__358)->finalize, ((struct sNode*)__result_obj__358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__358;
}

