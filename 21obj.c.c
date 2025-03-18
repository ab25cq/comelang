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

struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sTrueNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void tuple4$4char$phchar$phchar$phchar$ph_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_clone(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static unsigned int tuple4$4char$phchar$phchar$phchar$ph_get_hash_key(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static _Bool tuple4$4char$phchar$phchar$phchar$ph_equals(struct tuple4$4char$phchar$phchar$phchar$ph* left, struct tuple4$4char$phchar$phchar$phchar$ph* right);
static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_initialize(struct tuple4$4char$phchar$phchar$phchar$ph* self, char* v1, char* v2, char* v3, char* v4);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
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
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info);
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
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

struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info){
void* __right_value186 = (void*)0;
char* finalizer_name_249;
void* __right_value187 = (void*)0;
char* cloner_name_250;
void* __right_value188 = (void*)0;
char* get_hash_key_name_251;
void* __right_value189 = (void*)0;
char* equaler_name_252;
void* __right_value190 = (void*)0;
_Bool _if_conditional1;
void* __right_value191 = (void*)0;
char* __dec_obj16;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
_Bool _if_conditional2;
void* __right_value194 = (void*)0;
char* __dec_obj17;
void* __right_value195 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var1 = (void*)0;
struct sFun* fun_260=0;
char* name_261=0;
char* __dec_obj18;
void* __right_value196 = (void*)0;
_Bool _if_conditional3;
void* __right_value197 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_262=0;
char* name_263=0;
char* __dec_obj19;
void* __right_value198 = (void*)0;
_Bool _if_conditional4;
void* __right_value199 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun_264=0;
char* name_265=0;
char* __dec_obj20;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__174;
    finalizer_name_249=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_250=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_251=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_252=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional1=(((struct sFun*)(__right_value190=map$2char$phsFun$ph$p_operator_load_element(info->funcs,finalizer_name_249)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value190,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        if(        any_type->mClass->mNumber) {
            __dec_obj16=finalizer_name_249,
            finalizer_name_249=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFun$pchar$ph*)(__right_value192=create_finalizer_automatically(any_type,"finalize",info)));
            /*c*/ come_call_finalizer3(__right_value192,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    (_if_conditional2=(((struct sFun*)(__right_value193=map$2char$phsFun$ph$p_operator_load_element(info->funcs,cloner_name_250)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value193,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional2) {
        if(        any_type->mClass->mNumber) {
            __dec_obj17=cloner_name_250,
            cloner_name_250=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            multiple_assign_var1=((struct tuple2$2sFun$pchar$ph*)(__right_value195=create_cloner_automatically(any_type,"clone",info)));
            fun_260=multiple_assign_var1->v1;
            name_261=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            /*c*/ come_call_finalizer3(__right_value195,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj18=cloner_name_250,
            cloner_name_250=(char*)come_increment_ref_count(name_261);
            __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    (_if_conditional3=(((struct sFun*)(__right_value196=map$2char$phsFun$ph$p_operator_load_element(info->funcs,get_hash_key_name_251)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value196,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value197=create_get_hash_key_automatically(any_type,"get_hash_key",info)));
        fun_262=multiple_assign_var2->v1;
        name_263=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        /*c*/ come_call_finalizer3(__right_value197,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj19=get_hash_key_name_251,
        get_hash_key_name_251=(char*)come_increment_ref_count(name_263);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (name_263 = come_decrement_ref_count(name_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    (_if_conditional4=(((struct sFun*)(__right_value198=map$2char$phsFun$ph$p_operator_load_element(info->funcs,equaler_name_252)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value198,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value199=create_equals_automatically(any_type,"equals",info)));
        fun_264=multiple_assign_var3->v1;
        name_265=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        /*c*/ come_call_finalizer3(__right_value199,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj20=equaler_name_252,
        equaler_name_252=(char*)come_increment_ref_count(name_265);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (name_265 = come_decrement_ref_count(name_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__174 = come_increment_ref_count(((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value206=tuple4$4char$phchar$phchar$phchar$ph_initialize((struct tuple4$4char$phchar$phchar$phchar$ph**)come_increment_ref_count((struct tuple4$4char$phchar$phchar$phchar$ph*)come_calloc(1, sizeof(struct tuple4$4char$phchar$phchar$phchar$ph)*(1), "21obj.c", 36, "struct tuple4$4char$phchar$phchar$phchar$ph")),(char*)come_increment_ref_count(finalizer_name_249),(char*)come_increment_ref_count(cloner_name_250),(char*)come_increment_ref_count(get_hash_key_name_251),(char*)come_increment_ref_count(equaler_name_252)))));
    /*c*/ come_call_finalizer3(any_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_249 = come_decrement_ref_count(finalizer_name_249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_250 = come_decrement_ref_count(cloner_name_250, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_251 = come_decrement_ref_count(get_hash_key_name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_252 = come_decrement_ref_count(equaler_name_252, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value206,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__174,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__174;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_253;
unsigned int hash_254;
unsigned int it_255;
struct sFun* __result_obj__167;
struct sFun* __result_obj__168;
struct sFun* __result_obj__169;
struct sFun* __result_obj__170;
default_value_253 = (void*)0;
    memset(&default_value_253,0,sizeof(struct sFun*));
    hash_254=string_get_hash_key(((char*)key))%self->size;
    it_255=hash_254;
    while((_Bool)1) {
        if(        self->item_existance[it_255]) {
            if(            string_equals(self->keys[it_255],key)) {
                __result_obj__167 = come_increment_ref_count(self->items[it_255]);
                /*c*/ come_call_finalizer3(default_value_253,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__167,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__167;
            }
            it_255++;
            if(            it_255>=self->size) {
                it_255=0;
            }
            else if(            it_255==hash_254) {
                __result_obj__168 = come_increment_ref_count(default_value_253);
                /*c*/ come_call_finalizer3(default_value_253,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__168,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__168;
            }
        }
        else {
            __result_obj__169 = come_increment_ref_count(default_value_253);
            /*c*/ come_call_finalizer3(default_value_253,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__169,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__169;
        }
    }
    __result_obj__170 = come_increment_ref_count(default_value_253);
    /*c*/ come_call_finalizer3(default_value_253,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__170,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
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
struct list_item$1sType$ph* it_256;
struct list_item$1sType$ph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        /*c*/ come_call_finalizer3(prev_it_257,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_258;
struct list_item$1sNode$ph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        /*c*/ come_call_finalizer3(prev_it_259,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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

static void tuple4$4char$phchar$phchar$phchar$ph_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_clone(struct tuple4$4char$phchar$phchar$phchar$ph* self){
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__171;
void* __right_value200 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* result_266;
void* __right_value201 = (void*)0;
char* __dec_obj21;
void* __right_value202 = (void*)0;
char* __dec_obj22;
void* __right_value203 = (void*)0;
char* __dec_obj23;
void* __right_value204 = (void*)0;
char* __dec_obj24;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__172;
    if(    self==(void*)0) {
        __result_obj__171 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__171,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__171;
    }
    result_266=(struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count((struct tuple4$4char$phchar$phchar$phchar$ph*)come_calloc(1, sizeof(struct tuple4$4char$phchar$phchar$phchar$ph)*(1), "tuple4$4char$phchar$phchar$phchar$ph_clone", 3, "struct tuple4$4char$phchar$phchar$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj21=result_266->v1,
        result_266->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple4$4char$phchar$phchar$phchar$ph_clone", 4, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj22=result_266->v2,
        result_266->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple4$4char$phchar$phchar$phchar$ph_clone", 5, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj23=result_266->v3,
        result_266->v3=(char*)come_increment_ref_count((char*)come_memdup(self->v3, "tuple4$4char$phchar$phchar$phchar$ph_clone", 6, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        __dec_obj24=result_266->v4,
        result_266->v4=(char*)come_increment_ref_count((char*)come_memdup(self->v4, "tuple4$4char$phchar$phchar$phchar$ph_clone", 7, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__172 = come_increment_ref_count(result_266);
    /*c*/ come_call_finalizer3(result_266,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__172,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static unsigned int tuple4$4char$phchar$phchar$phchar$ph_get_hash_key(struct tuple4$4char$phchar$phchar$phchar$ph* self){
unsigned int result_267;
    result_267=0;
    result_267+=int_get_hash_key(((int)self->v1));
    result_267+=int_get_hash_key(((int)self->v2));
    result_267+=int_get_hash_key(((int)self->v3));
    result_267+=int_get_hash_key(((int)self->v4));
    return result_267;
}

static _Bool tuple4$4char$phchar$phchar$phchar$ph_equals(struct tuple4$4char$phchar$phchar$phchar$ph* left, struct tuple4$4char$phchar$phchar$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_initialize(struct tuple4$4char$phchar$phchar$phchar$ph* self, char* v1, char* v2, char* v3, char* v4){
char* __dec_obj25;
char* __dec_obj26;
char* __dec_obj27;
char* __dec_obj28;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__173;
    __dec_obj25=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj26=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj27=self->v3,
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj28=self->v4,
    self->v4=(char*)come_increment_ref_count(v4);
    __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__173 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v3 = come_decrement_ref_count(v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v4 = come_decrement_ref_count(v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__173,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value207 = (void*)0;
void* __right_value246 = (void*)0;
struct sType* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj54;
struct sNewNode* __result_obj__190;
    ((struct sNodeBase*)(__right_value207=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value207,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj53=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj54=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    /*b*/ come_call_finalizer3(__dec_obj54,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__190 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

char* sNewNode_kind(struct sNewNode* self){
void* __right_value247 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = come_increment_ref_count(((char*)(__right_value247=__builtin_string("sNewNode"))));
    (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__191;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_295;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_296;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct CVALUE* come_value_297;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct buffer* num_string_298;
struct list$1sNode$ph* o2_saved_299;
struct sNode* it_302;
_Bool Value_305;
_Bool __result_obj__198;
void* __right_value252 = (void*)0;
struct CVALUE* cvalue_306;
void* __right_value253 = (void*)0;
struct sType* type2_307;
void* __right_value254 = (void*)0;
char* type_name_310;
void* __right_value255 = (void*)0;
char* type_name2_311;
void* __right_value256 = (void*)0;
char* var_name_313;
void* __right_value257 = (void*)0;
struct sType* type3_314;
void* __right_value258 = (void*)0;
char* type_name3_315;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct buffer* buf_316;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* obj_317;
struct sClass* klass_318;
int i_319;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_320;
struct tuple2$2char$phsNode$ph* it_323;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* name_326=0;
struct sNode* exp_327=0;
_Bool Value_328;
_Bool __result_obj__206;
void* __right_value264 = (void*)0;
struct CVALUE* come_value2_329;
struct sType* left_type_330;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_331;
struct tuple2$2char$phsType$ph* it2_334;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name_337=0;
struct sType* field_type_338=0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj55;
void* __right_value266 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_1_341=0;
char* Err_342=0;
_Bool _if_conditional5;
_Bool __result_obj__213;
struct sType* right_type_343;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var7 = (void*)0;
_Bool come_exception_var_2_344=0;
char* Err_345=0;
_Bool _if_conditional6;
_Bool __result_obj__214;
struct sType* __dec_obj56;
void* __right_value270 = (void*)0;
char* c_value_346;
void* __right_value271 = (void*)0;
char* __dec_obj57;
void* __right_value272 = (void*)0;
struct sType* __dec_obj58;
void* __right_value276 = (void*)0;
struct sType* type3_350;
void* __right_value277 = (void*)0;
char* type_name3_351;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
char* __dec_obj62;
void* __right_value280 = (void*)0;
struct sType* __dec_obj63;
_Bool __result_obj__216;
    type_295=self->type;
    initializer_296=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    come_value_297=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 59, "struct CVALUE*"))));
    num_string_298=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 61, "struct buffer*"))));
    buffer_append_str(num_string_298,"1");
    for(    o2_saved_299=(struct list$1sNode$ph*)come_increment_ref_count((type_295->mArrayNum)),it_302=list$1sNode$ph_begin((o2_saved_299));    !list$1sNode$ph_end((o2_saved_299));    it_302=list$1sNode$ph_next((o2_saved_299))    ){
        Value_305=node_compile(it_302,info);
        if(        !Value_305) {
            __result_obj__198 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_299,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_value_297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(num_string_298,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__198;
        }
        else {
        }
        cvalue_306=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(num_string_298,"*(%s)",cvalue_306->c_value);
        /*c*/ come_call_finalizer3(cvalue_306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_299,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type2_307=(struct sType*)come_increment_ref_count(solve_generics(type_295,info->generics_type,info));
    list$1sNode$ph_reset(type2_307->mArrayNum);
    type_name_310=(char*)come_increment_ref_count(make_type_name_string(type2_307,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_311=(char*)come_increment_ref_count(make_come_type_name_string(type2_307,info));
    if(    initializer_296) {
        static int var_num_312=1;
        var_num_312++;
        var_name_313=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_312));
        type3_314=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_307));
        type3_314->mPointerNum++;
        if(        type3_314->mNoSolvedGenericsType) {
            type3_314->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3_315=(char*)come_increment_ref_count(make_type_name_string(type3_314,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value259=make_define_var(type3_314,var_name_313,(_Bool)0,info))));
        (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buf_316=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 104, "struct buffer*"))));
        buffer_append_str(buf_316,"(");
        obj_317=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_313,type_name_310,type_name_310,((char*)(__right_value262=buffer_to_string(num_string_298))),info->sname,info->sline,type_name3_315));
        (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_316,obj_317);
        buffer_append_str(buf_316,",");
        klass_318=type3_314->mClass;
        i_319=0;
        for(        o2_saved_320=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_296)),it_323=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_320));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_320));        it_323=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_320))        ){
            multiple_assign_var4=it_323;
            name_326=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            exp_327=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_328=node_compile(exp_327,info);
            if(            !Value_328) {
                __result_obj__206 = (_Bool)0;
                (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((exp_327) ? exp_327 = come_decrement_ref_count(exp_327, ((struct sNode*)exp_327)->finalize, ((struct sNode*)exp_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(o2_saved_320,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_313 = come_decrement_ref_count(var_name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name3_315 = come_decrement_ref_count(type_name3_315, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_316,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (obj_317 = come_decrement_ref_count(obj_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(initializer_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_298,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_310 = come_decrement_ref_count(type_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name2_311 = come_decrement_ref_count(type_name2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__206;
            }
            else {
            }
            come_value2_329=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            left_type_330=((void*)0);
            for(            o2_saved_331=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_318->mFields)),it2_334=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_331));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_331));            it2_334=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_331))            ){
                multiple_assign_var5=it2_334;
                field_name_337=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                field_type_338=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                string_operator_equals(name_326,field_name_337)) {
                    __dec_obj55=left_type_330,
                    left_type_330=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_338));
                    /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (field_name_337 = come_decrement_ref_count(field_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type_338,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
                (field_name_337 = come_decrement_ref_count(field_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_338,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_331,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            left_type_330==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value266=err_msg(info,"field %s is not defined",name_326)));
                come_exception_var_1_341=multiple_assign_var6->v1;
                Err_342=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_342)),                /*c*/ come_call_finalizer3(__right_value266,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional5) {
                    __result_obj__213 = (_Bool)1;
                    (Err_342 = come_decrement_ref_count(Err_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((exp_327) ? exp_327 = come_decrement_ref_count(exp_327, ((struct sNode*)exp_327)->finalize, ((struct sNode*)exp_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value2_329,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_330,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_320,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_313 = come_decrement_ref_count(var_name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type3_314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name3_315 = come_decrement_ref_count(type_name3_315, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(buf_316,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (obj_317 = come_decrement_ref_count(obj_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(initializer_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(num_string_298,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type2_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_310 = come_decrement_ref_count(type_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name2_311 = come_decrement_ref_count(type_name2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__213;
                }
                else {
                }
                (Err_342 = come_decrement_ref_count(Err_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            right_type_343=(struct sType*)come_increment_ref_count(come_value2_329->type);
            multiple_assign_var7=((struct tuple2$2bool$char$ph*)(__right_value269=check_assign_type(((char*)(__right_value268=xsprintf("\%s is assining to",((char*)(__right_value267=string_to_string(name_326)))))),left_type_330,right_type_343,come_value2_329,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_2_344=multiple_assign_var7->v1;
            Err_345=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            (_if_conditional6=(Err_345)),            (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value269,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                __result_obj__214 = (_Bool)1;
                (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((exp_327) ? exp_327 = come_decrement_ref_count(exp_327, ((struct sNode*)exp_327)->finalize, ((struct sNode*)exp_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value2_329,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_330,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_345 = come_decrement_ref_count(Err_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(o2_saved_320,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_313 = come_decrement_ref_count(var_name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name3_315 = come_decrement_ref_count(type_name3_315, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_316,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (obj_317 = come_decrement_ref_count(obj_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(initializer_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_298,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_310 = come_decrement_ref_count(type_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name2_311 = come_decrement_ref_count(type_name2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__214;
            }
            else {
            }
            __dec_obj56=right_type_343,
            right_type_343=(struct sType*)come_increment_ref_count(come_value2_329->type);
            /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            left_type_330->mHeap&&right_type_343->mHeap&&left_type_330->mPointerNum>0&&right_type_343->mPointerNum>0) {
                c_value_346=(char*)come_increment_ref_count(increment_ref_count_object(left_type_330,come_value2_329->c_value,info));
                buffer_append_format(buf_316,"%s->%s = %s",var_name_313,name_326,c_value_346);
                (c_value_346 = come_decrement_ref_count(c_value_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_316,"%s->%s = %s",var_name_313,name_326,come_value2_329->c_value);
            }
            buffer_append_str(buf_316,",");
            i_319++;
            (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_327) ? exp_327 = come_decrement_ref_count(exp_327, ((struct sNode*)exp_327)->finalize, ((struct sNode*)exp_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value2_329,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_330,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (Err_345 = come_decrement_ref_count(Err_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_320,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_316,var_name_313);
        buffer_append_str(buf_316,")");
        __dec_obj57=come_value_297->c_value,
        come_value_297->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_316));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        type2_307->mHeap=(_Bool)1;
        type2_307->mPointerNum++;
        if(        type2_307->mNoSolvedGenericsType) {
            type2_307->mNoSolvedGenericsType->mPointerNum++;
            type2_307->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj58=come_value_297->type,
        come_value_297->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_307));
        /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_297->var=((void*)0);
        append_object_to_right_values2(come_value_297,(struct sType*)come_increment_ref_count(type2_307),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_297->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_297));
        (var_name_313 = come_decrement_ref_count(var_name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type3_314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name3_315 = come_decrement_ref_count(type_name3_315, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(buf_316,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (obj_317 = come_decrement_ref_count(obj_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type3_350=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_307));
        type3_350->mPointerNum++;
        type3_350->mHeap=(_Bool)1;
        if(        type3_350->mNoSolvedGenericsType) {
            type3_350->mNoSolvedGenericsType->mPointerNum++;
            type3_350->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_351=(char*)come_increment_ref_count(make_type_name_string(type3_350,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj62=come_value_297->c_value,
        come_value_297->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_310,type_name_310,((char*)(__right_value278=buffer_to_string(num_string_298))),info->sname,info->sline,type_name3_351));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        type2_307->mHeap=(_Bool)1;
        type2_307->mPointerNum++;
        if(        type2_307->mNoSolvedGenericsType) {
            type2_307->mNoSolvedGenericsType->mPointerNum++;
            type2_307->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj63=come_value_297->type,
        come_value_297->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_307));
        /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_297->var=((void*)0);
        append_object_to_right_values2(come_value_297,(struct sType*)come_increment_ref_count(type2_307),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_297->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_297));
        /*c*/ come_call_finalizer3(type3_350,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name3_351 = come_decrement_ref_count(type_name3_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__216 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_297,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_298,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_310 = come_decrement_ref_count(type_name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_311 = come_decrement_ref_count(type_name2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__216;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__175;
void* __right_value208 = (void*)0;
struct sType* result_268;
void* __right_value209 = (void*)0;
struct sType* __dec_obj29;
void* __right_value210 = (void*)0;
struct sType* __dec_obj30;
void* __right_value218 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value219 = (void*)0;
struct sType* __dec_obj35;
void* __right_value220 = (void*)0;
struct sType* __dec_obj36;
void* __right_value222 = (void*)0;
struct sNode* __dec_obj37;
void* __right_value223 = (void*)0;
struct sNode* __dec_obj38;
void* __right_value224 = (void*)0;
char* __dec_obj39;
void* __right_value225 = (void*)0;
char* __dec_obj40;
void* __right_value226 = (void*)0;
char* __dec_obj41;
void* __right_value234 = (void*)0;
struct list$1sNode$ph* __dec_obj45;
void* __right_value235 = (void*)0;
char* __dec_obj46;
void* __right_value236 = (void*)0;
struct list$1sType$ph* __dec_obj47;
void* __right_value244 = (void*)0;
struct list$1char$ph* __dec_obj51;
void* __right_value245 = (void*)0;
struct sType* __dec_obj52;
struct sType* __result_obj__189;
    if(    self==(void*)0) {
        __result_obj__175 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__175,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__175;
    }
    result_268=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_268->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj29=result_268->mOriginalLoadVarType,
        result_268->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj30=result_268->mChannelType,
        result_268->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj34=result_268->mGenericsTypes,
        result_268->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj35=result_268->mNoSolvedGenericsType,
        result_268->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj36=result_268->mAnyOriginalType,
        result_268->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj37=result_268->mSizeNum,
        result_268->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj38=result_268->mAlignas,
        result_268->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj39=result_268->mTupleName,
        result_268->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj40=result_268->mAttribute,
        result_268->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_268->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_268->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_268->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_268->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_268->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_268->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_268->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_268->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_268->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_268->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_268->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_268->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_268->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_268->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_268->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_268->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_268->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_268->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_268->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_268->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj41=result_268->mAsmName,
        result_268->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_268->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj45=result_268->mArrayNum,
        result_268->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj45,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj46=result_268->mOriginalTypeName,
        result_268->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj47=result_268->mParamTypes,
        result_268->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj47,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj51=result_268->mParamNames,
        result_268->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj52=result_268->mResultType,
        result_268->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mVarArgs=self->mVarArgs;
    }
    __result_obj__189 = come_increment_ref_count(result_268);
    /*c*/ come_call_finalizer3(result_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__176;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct list$1sType$ph* result_269;
struct list_item$1sType$ph* it_270;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1sType$ph* __result_obj__179;
    if(    self==((void*)0)) {
        __result_obj__176 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__176,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__176;
    }
    result_269=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_270=self->head;
    while(it_270!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_269,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_270->item)));
        }
        else {
            list$1sType$ph_add(result_269,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_270->item)));
        }
        it_270=it_270->next;
    }
    __result_obj__179 = come_increment_ref_count(result_269);
    /*c*/ come_call_finalizer3(result_269,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__177;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__177 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value213 = (void*)0;
struct list_item$1sType$ph* litem_271;
struct sType* __dec_obj31;
void* __right_value214 = (void*)0;
struct list_item$1sType$ph* litem_272;
struct sType* __dec_obj32;
void* __right_value215 = (void*)0;
struct list_item$1sType$ph* litem_273;
struct sType* __dec_obj33;
struct list$1sType$ph* __result_obj__178;
    if(    self->len==0) {
        litem_271=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value213=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj31=litem_271->item,
        litem_271->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1) {
        litem_272=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value214=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj32=litem_272->item,
        litem_272->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value215=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj33=litem_273->item,
        litem_273->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result_obj__178 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__178;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_274;
struct list_item$1sType$ph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*c*/ come_call_finalizer3(prev_it_275,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__180;
void* __right_value221 = (void*)0;
struct sNode* result_276;
struct sNode* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__180 = come_increment_ref_count((void*)0);
        ((__result_obj__180) ? __result_obj__180 = come_decrement_ref_count(__result_obj__180, ((struct sNode*)__result_obj__180)->finalize, ((struct sNode*)__result_obj__180)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__180;
    }
    result_276=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_276->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_276->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_276->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_276->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_276->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_276->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_276->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_276->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_276->kind=self->kind;
    }
    __result_obj__181 = come_increment_ref_count(result_276);
    ((result_276) ? result_276 = come_decrement_ref_count(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__181;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__182;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1sNode$ph* result_277;
struct list_item$1sNode$ph* it_278;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct list$1sNode$ph* __result_obj__185;
    if(    self==((void*)0)) {
        __result_obj__182 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__182,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__182;
    }
    result_277=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_278=self->head;
    while(it_278!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_277,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_278->item)));
        }
        else {
            list$1sNode$ph_add(result_277,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_278->item)));
        }
        it_278=it_278->next;
    }
    __result_obj__185 = come_increment_ref_count(result_277);
    /*c*/ come_call_finalizer3(result_277,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__183;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__183 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value229 = (void*)0;
struct list_item$1sNode$ph* litem_279;
struct sNode* __dec_obj42;
void* __right_value230 = (void*)0;
struct list_item$1sNode$ph* litem_280;
struct sNode* __dec_obj43;
void* __right_value231 = (void*)0;
struct list_item$1sNode$ph* litem_281;
struct sNode* __dec_obj44;
struct list$1sNode$ph* __result_obj__184;
    if(    self->len==0) {
        litem_279=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value229=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj42=litem_279->item,
        litem_279->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value230=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj43=litem_280->item,
        litem_280->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value231=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj44=litem_281->item,
        litem_281->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__184 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__184;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_282;
struct list_item$1sNode$ph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        /*c*/ come_call_finalizer3(prev_it_283,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__186;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct list$1char$ph* result_284;
struct list_item$1char$ph* it_285;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1char$ph* __result_obj__188;
    if(    self==((void*)0)) {
        __result_obj__186 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__186,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__186;
    }
    result_284=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_285=self->head;
    while(it_285!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_284,(char*)come_increment_ref_count((char*)come_memdup(it_285->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_284,(char*)come_increment_ref_count((char*)come_memdup(it_285->item, "./comelang.h", 1146, "char*")));
        }
        it_285=it_285->next;
    }
    __result_obj__188 = come_increment_ref_count(result_284);
    /*c*/ come_call_finalizer3(result_284,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__188,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value239 = (void*)0;
struct list_item$1char$ph* litem_286;
char* __dec_obj48;
void* __right_value240 = (void*)0;
struct list_item$1char$ph* litem_287;
char* __dec_obj49;
void* __right_value241 = (void*)0;
struct list_item$1char$ph* litem_288;
char* __dec_obj50;
struct list$1char$ph* __result_obj__187;
    if(    self->len==0) {
        litem_286=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value239=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj48=litem_286->item,
        litem_286->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value240=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj49=litem_287->item,
        litem_287->item=(char*)come_increment_ref_count(item);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value241=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj50=litem_288->item,
        litem_288->item=(char*)come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__187 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__187;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_289;
struct list_item$1char$ph* prev_it_290;
    it_289=self->head;
    while(it_289!=((void*)0)) {
        prev_it_290=it_289;
        it_289=it_289->next;
        /*c*/ come_call_finalizer3(prev_it_290,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_291;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_292;
    it_291=self->head;
    while(it_291!=((void*)0)) {
        prev_it_292=it_291;
        it_291=it_291->next;
        /*c*/ come_call_finalizer3(prev_it_292,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void sNewNode_finalize(struct sNewNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_293;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_294;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        prev_it_294=it_293;
        it_293=it_293->next;
        /*c*/ come_call_finalizer3(prev_it_294,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_300;
struct sNode* __result_obj__192;
struct sNode* __result_obj__193;
struct sNode* result_301;
struct sNode* __result_obj__194;
result_300 = (void*)0;
result_301 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_300,0,sizeof(struct sNode*));
        __result_obj__192 = result_300;
        return __result_obj__192;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__193 = self->it->item;
        return __result_obj__193;
    }
    memset(&result_301,0,sizeof(struct sNode*));
    __result_obj__194 = result_301;
    return __result_obj__194;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_303;
struct sNode* __result_obj__195;
struct sNode* __result_obj__196;
struct sNode* result_304;
struct sNode* __result_obj__197;
result_303 = (void*)0;
result_304 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_303,0,sizeof(struct sNode*));
        __result_obj__195 = result_303;
        return __result_obj__195;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__196 = self->it->item;
        return __result_obj__196;
    }
    memset(&result_304,0,sizeof(struct sNode*));
    __result_obj__197 = result_304;
    return __result_obj__197;
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

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_308;
struct list_item$1sNode$ph* prev_it_309;
struct list$1sNode$ph* __result_obj__199;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        /*c*/ come_call_finalizer3(prev_it_309,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__199 = self;
    return __result_obj__199;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_321;
struct tuple2$2char$phsNode$ph* __result_obj__200;
struct tuple2$2char$phsNode$ph* __result_obj__201;
struct tuple2$2char$phsNode$ph* result_322;
struct tuple2$2char$phsNode$ph* __result_obj__202;
result_321 = (void*)0;
result_322 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_321,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__200 = result_321;
        return __result_obj__200;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_322,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__202 = result_322;
    return __result_obj__202;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_324;
struct tuple2$2char$phsNode$ph* __result_obj__203;
struct tuple2$2char$phsNode$ph* __result_obj__204;
struct tuple2$2char$phsNode$ph* result_325;
struct tuple2$2char$phsNode$ph* __result_obj__205;
result_324 = (void*)0;
result_325 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_324,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__203 = result_324;
        return __result_obj__203;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__204 = self->it->item;
        return __result_obj__204;
    }
    memset(&result_325,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__205 = result_325;
    return __result_obj__205;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_332;
struct tuple2$2char$phsType$ph* __result_obj__207;
struct tuple2$2char$phsType$ph* __result_obj__208;
struct tuple2$2char$phsType$ph* result_333;
struct tuple2$2char$phsType$ph* __result_obj__209;
result_332 = (void*)0;
result_333 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_332,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__207 = result_332;
        return __result_obj__207;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__208 = self->it->item;
        return __result_obj__208;
    }
    memset(&result_333,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__209 = result_333;
    return __result_obj__209;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_335;
struct tuple2$2char$phsType$ph* __result_obj__210;
struct tuple2$2char$phsType$ph* __result_obj__211;
struct tuple2$2char$phsType$ph* result_336;
struct tuple2$2char$phsType$ph* __result_obj__212;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_335,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__210 = result_335;
        return __result_obj__210;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__211 = self->it->item;
        return __result_obj__211;
    }
    memset(&result_336,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__212 = result_336;
    return __result_obj__212;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_339;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_340;
    it_339=self->head;
    while(it_339!=((void*)0)) {
        prev_it_340=it_339;
        it_339=it_339->next;
        /*c*/ come_call_finalizer3(prev_it_340,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value273 = (void*)0;
struct list_item$1CVALUE$ph* litem_347;
struct CVALUE* __dec_obj59;
void* __right_value274 = (void*)0;
struct list_item$1CVALUE$ph* litem_348;
struct CVALUE* __dec_obj60;
void* __right_value275 = (void*)0;
struct list_item$1CVALUE$ph* litem_349;
struct CVALUE* __dec_obj61;
struct list$1CVALUE$ph* __result_obj__215;
    if(    self->len==0) {
        litem_347=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value273=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_347->prev=((void*)0);
        litem_347->next=((void*)0);
        __dec_obj59=litem_347->item,
        litem_347->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_347;
        self->head=litem_347;
    }
    else if(    self->len==1) {
        litem_348=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value274=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_348->prev=self->head;
        litem_348->next=((void*)0);
        __dec_obj60=litem_348->item,
        litem_348->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_348;
        self->head->next=litem_348;
    }
    else {
        litem_349=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value275=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_349->prev=self->tail;
        litem_349->next=((void*)0);
        __dec_obj61=litem_349->item,
        litem_349->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_349;
        self->tail=litem_349;
    }
    self->len++;
    __result_obj__215 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj64;
void* __right_value283 = (void*)0;
struct sType* __dec_obj65;
struct sImplementsNode* __result_obj__217;
    ((struct sNodeBase*)(__right_value281=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value281,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj64=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj65=self->inf_type,
    self->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type));
    /*b*/ come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__217 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __right_value284 = (void*)0;
char* __result_obj__218;
    __result_obj__218 = come_increment_ref_count(((char*)(__right_value284=__builtin_string("sImplementsNode"))));
    (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__218;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value285 = (void*)0;
struct sNode* obj_exp_352;
void* __right_value286 = (void*)0;
struct sType* inf_type_353;
_Bool Value_354;
_Bool __result_obj__219;
void* __right_value287 = (void*)0;
struct CVALUE* come_value_355;
void* __right_value288 = (void*)0;
struct sType* type_356;
struct sClass* klass_357;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct CVALUE* come_value2_358;
void* __right_value291 = (void*)0;
struct sType* type2_359;
void* __right_value292 = (void*)0;
char* type_name_360;
void* __right_value293 = (void*)0;
char* type_name2_361;
int inf_num_stack_363;
void* __right_value294 = (void*)0;
char* buf_364;
void* __right_value295 = (void*)0;
char* buf2_365;
void* __right_value296 = (void*)0;
char* c_value_366;
void* __right_value297 = (void*)0;
struct sType* typeX_367;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
int i_368;
void* __right_value300 = (void*)0;
struct tuple2$2char$phsType$ph* multiple_assign_var8 = (void*)0;
char* name_372=0;
struct sType* field_type_373=0;
void* __right_value301 = (void*)0;
char* method_name_374;
void* __right_value302 = (void*)0;
struct sFun* fun_375;
void* __right_value303 = (void*)0;
struct sType* type2_378;
void* __right_value304 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var9 = (void*)0;
struct sFun* fun2_379=0;
char* real_fun_name_380=0;
char* __dec_obj66;
void* __right_value305 = (void*)0;
struct sType* type2_381;
void* __right_value306 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var10 = (void*)0;
struct sFun* fun2_382=0;
char* real_fun_name_383=0;
char* __dec_obj67;
void* __right_value307 = (void*)0;
struct sClass* klass2_384;
void* __right_value308 = (void*)0;
_Bool _while_condtional1;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
char* __dec_obj68;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* __dec_obj69;
void* __right_value314 = (void*)0;
struct sType* type3_388;
void* __right_value315 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__230;
    obj_exp_352=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    inf_type_353=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
    Value_354=node_compile(obj_exp_352,info);
    if(    !Value_354) {
        __result_obj__219 = (_Bool)0;
        ((obj_exp_352) ? obj_exp_352 = come_decrement_ref_count(obj_exp_352, ((struct sNode*)obj_exp_352)->finalize, ((struct sNode*)obj_exp_352)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(inf_type_353,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__219;
    }
    else {
    }
    come_value_355=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_356=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_355->type));
    type_356->mPointerNum--;
    type_356->mHeap=(_Bool)0;
    klass_357=inf_type_353->mClass;
    come_value2_358=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 252, "struct CVALUE*"))));
    type2_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_353));
    type_name_360=(char*)come_increment_ref_count(make_type_name_string(inf_type_353,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_361=(char*)come_increment_ref_count(make_type_name_string(type_356,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_362=0;
    ++inf_num_362;
    inf_num_stack_363=inf_num_362;
    buf_364=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_360,inf_num_stack_363));
    add_come_code_at_function_head(info,buf_364);
    buf2_365=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_361,inf_num_stack_363));
    add_come_code_at_function_head(info,buf2_365);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack_363,type_name_360,type_name_360,info->sname,info->sline,type_name_360);
    c_value_366=(char*)come_increment_ref_count(increment_ref_count_object(come_value_355->type,come_value_355->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_363,c_value_366);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_363,inf_num_stack_363);
    typeX_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_356));
    typeX_367->mPointerNum++;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value298=create_finalizer_automatically(typeX_367,"finalize",info)));
    /*c*/ come_call_finalizer3(__right_value298,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((struct tuple2$2sFun$pchar$ph*)(__right_value299=create_cloner_automatically(typeX_367,"clone",info)));
    /*c*/ come_call_finalizer3(__right_value299,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    i_368=1;    i_368<list$1tuple2$2char$phsType$ph$ph_length(klass_357->mFields);    i_368++    ){
        multiple_assign_var8=((struct tuple2$2char$phsType$ph*)(__right_value300=list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(klass_357->mFields,i_368)));
        name_372=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        field_type_373=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
        /*c*/ come_call_finalizer3(__right_value300,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        method_name_374=(char*)come_increment_ref_count(create_method_name(type_356,(_Bool)0,name_372,info,(_Bool)1));
        fun_375=((struct sFun*)(__right_value302=map$2char$phsFun$ph_at(info->funcs,method_name_374,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value302,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_375==((void*)0)&&string_operator_equals(name_372,"to_string")) {
            type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_356));
            type2_378->mPointerNum++;
            multiple_assign_var9=((struct tuple2$2sFun$pchar$ph*)(__right_value304=create_to_string_automatically(type2_378,name_372,info)));
            fun2_379=multiple_assign_var9->v1;
            real_fun_name_380=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            /*c*/ come_call_finalizer3(__right_value304,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_375=fun2_379;
            __dec_obj66=method_name_374,
            method_name_374=(char*)come_increment_ref_count(real_fun_name_380);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(type2_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (real_fun_name_380 = come_decrement_ref_count(real_fun_name_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_375==((void*)0)&&string_operator_equals(name_372,"equals")) {
            type2_381=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_356));
            type2_381->mPointerNum++;
            multiple_assign_var10=((struct tuple2$2sFun$pchar$ph*)(__right_value306=create_equals_automatically(type2_381,name_372,info)));
            fun2_382=multiple_assign_var10->v1;
            real_fun_name_383=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            /*c*/ come_call_finalizer3(__right_value306,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_375=fun2_382;
            __dec_obj67=method_name_374,
            method_name_374=(char*)come_increment_ref_count(real_fun_name_383);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(type2_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (real_fun_name_383 = come_decrement_ref_count(real_fun_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_375==((void*)0)) {
            klass2_384=((struct sClass*)(__right_value307=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_356->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value307,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            while((_while_condtional1=(((struct sClass*)(__right_value308=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass2_384->mParentClassName))))),            /*c*/ come_call_finalizer3(__right_value308,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _while_condtional1) {
                klass2_384=((struct sClass*)(__right_value309=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass2_384->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value309,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj68=method_name_374,
                method_name_374=(char*)come_increment_ref_count(create_method_name_using_class(klass2_384,(_Bool)0,name_372,info,(_Bool)1));
                __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                fun_375=((struct sFun*)(__right_value312=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value311=__builtin_string(method_name_374))),((void*)0))));
                (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value312,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_375) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_363,name_372,method_name_374);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_363,name_372,method_name_374);
        }
        (name_372 = come_decrement_ref_count(name_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type_373,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (method_name_374 = come_decrement_ref_count(method_name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj69=come_value2_358->c_value,
    come_value2_358->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_363));
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type3_388=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_353));
    type3_388->mPointerNum++;
    type3_388->mHeap=(_Bool)1;
    type2_359->mHeap=(_Bool)1;
    __dec_obj70=come_value2_358->type,
    come_value2_358->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359));
    /*b*/ come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_358->type->mPointerNum++;
    come_value2_358->var=((void*)0);
    append_object_to_right_values2(come_value2_358,(struct sType*)come_increment_ref_count(type3_388),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_358->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_358));
    __result_obj__230 = (_Bool)1;
    ((obj_exp_352) ? obj_exp_352 = come_decrement_ref_count(obj_exp_352, ((struct sNode*)obj_exp_352)->finalize, ((struct sNode*)obj_exp_352)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type_353,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_355,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_356,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_358,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_359,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_360 = come_decrement_ref_count(type_name_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_361 = come_decrement_ref_count(type_name2_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf_364 = come_decrement_ref_count(buf_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf2_365 = come_decrement_ref_count(buf2_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (c_value_366 = come_decrement_ref_count(c_value_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(typeX_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type3_388,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__230;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
struct list_item$1tuple2$2char$phsType$ph$ph* it_369;
int i_370;
struct tuple2$2char$phsType$ph* __result_obj__220;
struct tuple2$2char$phsType$ph* default_value_371;
struct tuple2$2char$phsType$ph* __result_obj__221;
default_value_371 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_369=self->head;
    i_370=0;
    while(it_369!=((void*)0)) {
        if(        position==i_370) {
            __result_obj__220 = come_increment_ref_count(it_369->item);
            /*c*/ come_call_finalizer3(__result_obj__220,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__220;
        }
        it_369=it_369->next;
        i_370++;
    }
    memset(&default_value_371,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__221 = come_increment_ref_count(default_value_371);
    /*c*/ come_call_finalizer3(default_value_371,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_376;
unsigned int it_377;
struct sFun* __result_obj__222;
struct sFun* __result_obj__223;
struct sFun* __result_obj__224;
struct sFun* __result_obj__225;
    hash_376=string_get_hash_key(((char*)key))%self->size;
    it_377=hash_376;
    while((_Bool)1) {
        if(        self->item_existance[it_377]) {
            if(            string_equals(self->keys[it_377],key)) {
                __result_obj__222 = come_increment_ref_count(self->items[it_377]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__222,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__222;
            }
            it_377++;
            if(            it_377>=self->size) {
                it_377=0;
            }
            else if(            it_377==hash_376) {
                __result_obj__223 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__223,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__223;
            }
        }
        else {
            __result_obj__224 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__224,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__224;
        }
    }
    __result_obj__225 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__225,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_385;
unsigned int hash_386;
unsigned int it_387;
struct sClass* __result_obj__226;
struct sClass* __result_obj__227;
struct sClass* __result_obj__228;
struct sClass* __result_obj__229;
default_value_385 = (void*)0;
    memset(&default_value_385,0,sizeof(struct sClass*));
    hash_386=string_get_hash_key(((char*)key))%self->size;
    it_387=hash_386;
    while((_Bool)1) {
        if(        self->item_existance[it_387]) {
            if(            string_equals(self->keys[it_387],key)) {
                __result_obj__226 = come_increment_ref_count(self->items[it_387]);
                /*c*/ come_call_finalizer3(default_value_385,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__226,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__226;
            }
            it_387++;
            if(            it_387>=self->size) {
                it_387=0;
            }
            else if(            it_387==hash_386) {
                __result_obj__227 = come_increment_ref_count(default_value_385);
                /*c*/ come_call_finalizer3(default_value_385,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__227,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__227;
            }
        }
        else {
            __result_obj__228 = come_increment_ref_count(default_value_385);
            /*c*/ come_call_finalizer3(default_value_385,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__228,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__228;
        }
    }
    __result_obj__229 = come_increment_ref_count(default_value_385);
    /*c*/ come_call_finalizer3(default_value_385,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__229,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __right_value316 = (void*)0;
struct sTrueNode* __result_obj__231;
    ((struct sNodeBase*)(__right_value316=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value316,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__231 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__231,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __right_value317 = (void*)0;
char* __result_obj__232;
    __result_obj__232 = come_increment_ref_count(((char*)(__right_value317=__builtin_string("sTrueNode"))));
    (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__232;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value320 = (void*)0;
char* __dec_obj71;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* __dec_obj72;
_Bool __result_obj__233;
    come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 362, "struct CVALUE*"))));
    __dec_obj71=come_value_389->c_value,
    come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj72=come_value_389->type,
    come_value_389->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 365, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_389->var=((void*)0);
    add_come_last_code(info,"%s",come_value_389->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
    __result_obj__233 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static void sTrueNode_finalize(struct sTrueNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value328 = (void*)0;
struct sNode* __result_obj__236;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 378, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value325=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 378, "struct sTrueNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result_obj__236 = come_increment_ref_count(((struct sNode*)(__right_value328=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value325,sTrueNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value328) ? __right_value328 = come_decrement_ref_count(__right_value328, ((struct sNode*)__right_value328)->finalize, ((struct sNode*)__right_value328)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__236) ? __result_obj__236 = come_decrement_ref_count(__result_obj__236, ((struct sNode*)__result_obj__236)->finalize, ((struct sNode*)__result_obj__236)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__236;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
struct sTrueNode* __result_obj__234;
void* __right_value326 = (void*)0;
struct sTrueNode* result_390;
void* __right_value327 = (void*)0;
char* __dec_obj73;
struct sTrueNode* __result_obj__235;
    if(    self==(void*)0) {
        __result_obj__234 = (void*)0;
        return __result_obj__234;
    }
    result_390=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*"));
    if(    self!=((void*)0)) {
        result_390->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj73=result_390->sname,
        result_390->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTrueNode_clone", 5, "char*"));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->sline_real=self->sline_real;
    }
    __result_obj__235 = result_390;
    /*c*/ come_call_finalizer3(result_390,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__235;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __right_value329 = (void*)0;
struct sFalseNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value329=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value329,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__237,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __right_value330 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value330=__builtin_string("sFalseNode"))));
    (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct CVALUE* come_value_391;
void* __right_value333 = (void*)0;
char* __dec_obj74;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__239;
    come_value_391=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 395, "struct CVALUE*"))));
    __dec_obj74=come_value_391->c_value,
    come_value_391->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value_391->type,
    come_value_391->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 398, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_391->var=((void*)0);
    add_come_last_code(info,"%s",come_value_391->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_391));
    __result_obj__239 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_391,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static void sFalseNode_finalize(struct sFalseNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value341 = (void*)0;
struct sNode* __result_obj__242;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 411, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value338=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 411, "struct sFalseNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result_obj__242 = come_increment_ref_count(((struct sNode*)(__right_value341=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value338,sFalseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value341) ? __right_value341 = come_decrement_ref_count(__right_value341, ((struct sNode*)__right_value341)->finalize, ((struct sNode*)__right_value341)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__242;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
struct sFalseNode* __result_obj__240;
void* __right_value339 = (void*)0;
struct sFalseNode* result_392;
void* __right_value340 = (void*)0;
char* __dec_obj76;
struct sFalseNode* __result_obj__241;
    if(    self==(void*)0) {
        __result_obj__240 = (void*)0;
        return __result_obj__240;
    }
    result_392=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*"));
    if(    self!=((void*)0)) {
        result_392->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj76=result_392->sname,
        result_392->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFalseNode_clone", 5, "char*"));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->sline_real=self->sline_real;
    }
    __result_obj__241 = result_392;
    /*c*/ come_call_finalizer3(result_392,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj77;
struct sSizeOfNode* __result_obj__243;
    ((struct sNodeBase*)(__right_value342=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value342,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj77=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__243 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __right_value344 = (void*)0;
char* __result_obj__244;
    __result_obj__244 = come_increment_ref_count(((char*)(__right_value344=__builtin_string("sSizeOfNode"))));
    (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_393;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value347 = (void*)0;
struct sType* type2_395;
void* __right_value348 = (void*)0;
char* type_name_396;
void* __right_value349 = (void*)0;
char* __dec_obj78;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sType* __dec_obj79;
_Bool __result_obj__245;
    type_393=self->type;
    come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 432, "struct CVALUE*"))));
    type2_395=(struct sType*)come_increment_ref_count(solve_generics(type_393,info->generics_type,info));
    type_name_396=(char*)come_increment_ref_count(make_type_name_string(type2_395,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj78=come_value_394->c_value,
    come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_396));
    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj79=come_value_394->type,
    come_value_394->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 439, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_394->type->mUnsigned=(_Bool)1;
    come_value_394->var=((void*)0);
    add_come_last_code(info,"%s",come_value_394->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
    __result_obj__245 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_394,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_395,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_396 = come_decrement_ref_count(type_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__245;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj80;
struct sSizeOfExpNode* __result_obj__246;
struct sSizeOfExpNode* __result_obj__247;
    ((struct sNodeBase*)(__right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value353,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj80=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__246 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
    __result_obj__247 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__247,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __right_value355 = (void*)0;
char* __result_obj__248;
    __result_obj__248 = come_increment_ref_count(((char*)(__right_value355=__builtin_string("sSizeOfExpNode"))));
    (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__248;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_397;
_Bool Value_398;
_Bool __result_obj__249;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_399;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value2_400;
void* __right_value359 = (void*)0;
char* __dec_obj81;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__250;
    exp_397=(struct sNode*)come_increment_ref_count(self->exp);
    Value_398=node_compile(exp_397,info);
    if(    !Value_398) {
        __result_obj__249 = (_Bool)0;
        ((exp_397) ? exp_397 = come_decrement_ref_count(exp_397, ((struct sNode*)exp_397)->finalize, ((struct sNode*)exp_397)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__249;
    }
    else {
    }
    come_value_399=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 477, "struct CVALUE*"))));
    __dec_obj81=come_value2_400->c_value,
    come_value2_400->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_399->c_value));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj82=come_value2_400->type,
    come_value2_400->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 480, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_400->type->mUnsigned=(_Bool)1;
    come_value2_400->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_400->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_400));
    __result_obj__250 = (_Bool)1;
    ((exp_397) ? exp_397 = come_decrement_ref_count(exp_397, ((struct sNode*)exp_397)->finalize, ((struct sNode*)exp_397)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_399,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* __dec_obj83;
struct sTypeOfNode* __result_obj__251;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value363,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj83=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__251 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__251,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __right_value365 = (void*)0;
char* __result_obj__252;
    __result_obj__252 = come_increment_ref_count(((char*)(__right_value365=__builtin_string("sTypeOfNode"))));
    (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__252 = come_decrement_ref_count(__result_obj__252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__252;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_401;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value368 = (void*)0;
struct sType* type2_403;
void* __right_value369 = (void*)0;
char* type_name_404;
void* __right_value370 = (void*)0;
char* __dec_obj84;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__253;
    type_401=self->type;
    come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 510, "struct CVALUE*"))));
    type2_403=(struct sType*)come_increment_ref_count(solve_generics(type_401,info->generics_type,info));
    type_name_404=(char*)come_increment_ref_count(make_type_name_string(type2_403,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj84=come_value_402->c_value,
    come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_404));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj85=come_value_402->type,
    come_value_402->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 517, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_402->var=((void*)0);
    add_come_last_code(info,"%s",come_value_402->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
    __result_obj__253 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_402,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_403,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_404 = come_decrement_ref_count(type_name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj86;
struct sTypeOfExpNode* __result_obj__254;
    ((struct sNodeBase*)(__right_value374=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value374,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj86=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__254 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__254,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __right_value376 = (void*)0;
char* __result_obj__255;
    __result_obj__255 = come_increment_ref_count(((char*)(__right_value376=__builtin_string("sTypeOfExpNode"))));
    (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_405;
_Bool Value_406;
_Bool __result_obj__256;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_407;
void* __right_value378 = (void*)0;
struct sType* type_408;
void* __right_value379 = (void*)0;
struct sType* type2_409;
void* __right_value380 = (void*)0;
char* type_name_410;
void* __right_value381 = (void*)0;
char* __dec_obj87;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__257;
    exp_405=(struct sNode*)come_increment_ref_count(self->exp);
    Value_406=node_compile(exp_405,info);
    if(    !Value_406) {
        __result_obj__256 = (_Bool)0;
        ((exp_405) ? exp_405 = come_decrement_ref_count(exp_405, ((struct sNode*)exp_405)->finalize, ((struct sNode*)exp_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__256;
    }
    else {
    }
    come_value_407=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_408=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_407->type));
    type2_409=(struct sType*)come_increment_ref_count(solve_generics(type_408,info->generics_type,info));
    type_name_410=(char*)come_increment_ref_count(make_type_name_string(type2_409,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj87=come_value_407->c_value,
    come_value_407->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_410));
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj88=come_value_407->type,
    come_value_407->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 559, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_407->var=((void*)0);
    add_come_last_code(info,"%s",come_value_407->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_407));
    __result_obj__257 = (_Bool)1;
    ((exp_405) ? exp_405 = come_decrement_ref_count(exp_405, ((struct sNode*)exp_405)->finalize, ((struct sNode*)exp_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_408,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_409,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_410 = come_decrement_ref_count(type_name_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__257;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* __dec_obj89;
struct sDynamicTypeOf* __result_obj__258;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value385,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj89=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__258 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __right_value387 = (void*)0;
char* __result_obj__259;
    __result_obj__259 = come_increment_ref_count(((char*)(__right_value387=__builtin_string("sDynamicTypeOf"))));
    (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_411;
_Bool Value_412;
_Bool __result_obj__260;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value2_414;
void* __right_value391 = (void*)0;
char* __dec_obj90;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* __dec_obj91;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value2_415;
void* __right_value397 = (void*)0;
char* __dec_obj92;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__261;
    exp_411=(struct sNode*)come_increment_ref_count(self->exp);
    Value_412=node_compile(exp_411,info);
    if(    !Value_412) {
        __result_obj__260 = (_Bool)0;
        ((exp_411) ? exp_411 = come_decrement_ref_count(exp_411, ((struct sNode*)exp_411)->finalize, ((struct sNode*)exp_411)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__260;
    }
    else {
    }
    come_value_413=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_413->type->mPointerNum>0&&come_value_413->type->mHeap) {
        come_value2_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 595, "struct CVALUE*"))));
        __dec_obj90=come_value2_414->c_value,
        come_value2_414->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_413->c_value));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj91=come_value2_414->type,
        come_value2_414->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 598, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_414->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_414->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_414));
        /*c*/ come_call_finalizer3(come_value2_414,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value2_415=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 606, "struct CVALUE*"))));
        __dec_obj92=come_value2_415->c_value,
        come_value2_415->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj93=come_value2_415->type,
        come_value2_415->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 609, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_415->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_415->c_value);
        append_object_to_right_values2(come_value2_415,(struct sType*)come_increment_ref_count(come_value2_415->type),info,(_Bool)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_415));
        /*c*/ come_call_finalizer3(come_value2_415,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__261 = (_Bool)1;
    ((exp_411) ? exp_411 = come_decrement_ref_count(exp_411, ((struct sNode*)exp_411)->finalize, ((struct sNode*)exp_411)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_413,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __dec_obj94;
struct sAlignOfNode* __result_obj__262;
struct sAlignOfNode* __result_obj__263;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value401,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj94=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__262 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
    __result_obj__263 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __right_value403 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = come_increment_ref_count(((char*)(__right_value403=__builtin_string("sAlignOfNode"))));
    (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_416;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value406 = (void*)0;
struct sType* type2_418;
void* __right_value407 = (void*)0;
char* type_name_419;
void* __right_value408 = (void*)0;
char* __dec_obj95;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sType* __dec_obj96;
_Bool __result_obj__265;
    type_416=self->type;
    come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 643, "struct CVALUE*"))));
    type2_418=(struct sType*)come_increment_ref_count(solve_generics(type_416,info->generics_type,info));
    type_name_419=(char*)come_increment_ref_count(make_type_name_string(type2_418,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj95=come_value_417->c_value,
    come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_419));
    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj96=come_value_417->type,
    come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 650, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_417->type->mUnsigned=(_Bool)1;
    come_value_417->var=((void*)0);
    add_come_last_code(info,"%s",come_value_417->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
    __result_obj__265 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_418,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_419 = come_decrement_ref_count(type_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__265;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj97;
struct sAlignOfExpNode* __result_obj__266;
    ((struct sNodeBase*)(__right_value412=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value412,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj97=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    (__dec_obj97 ? __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__266 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __right_value414 = (void*)0;
char* __result_obj__267;
    __result_obj__267 = come_increment_ref_count(((char*)(__right_value414=__builtin_string("sAlignOfExpNode"))));
    (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__267 = come_decrement_ref_count(__result_obj__267, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__267;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_420;
_Bool Value_421;
_Bool __result_obj__268;
void* __right_value415 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct CVALUE* come_value2_423;
void* __right_value418 = (void*)0;
char* __dec_obj98;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* __dec_obj99;
_Bool __result_obj__269;
    exp_420=(struct sNode*)come_increment_ref_count(self->exp);
    Value_421=node_compile(exp_420,info);
    if(    !Value_421) {
        __result_obj__268 = (_Bool)0;
        ((exp_420) ? exp_420 = come_decrement_ref_count(exp_420, ((struct sNode*)exp_420)->finalize, ((struct sNode*)exp_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__268;
    }
    else {
    }
    come_value_422=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 686, "struct CVALUE*"))));
    __dec_obj98=come_value2_423->c_value,
    come_value2_423->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_422->c_value));
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj99=come_value2_423->type,
    come_value2_423->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 689, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_423->type->mUnsigned=(_Bool)1;
    come_value2_423->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_423->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_423));
    __result_obj__269 = (_Bool)1;
    ((exp_420) ? exp_420 = come_decrement_ref_count(exp_420, ((struct sNode*)exp_420)->finalize, ((struct sNode*)exp_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_422,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_423,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* __dec_obj100;
struct sAlignOfNode2* __result_obj__270;
    ((struct sNodeBase*)(__right_value422=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value422,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj100=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__270 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __right_value424 = (void*)0;
char* __result_obj__271;
    __result_obj__271 = come_increment_ref_count(((char*)(__right_value424=__builtin_string("sAlignOfNode2"))));
    (__right_value424 = come_decrement_ref_count(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__271 = come_decrement_ref_count(__result_obj__271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__271;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_424;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value427 = (void*)0;
struct sType* type2_426;
void* __right_value428 = (void*)0;
char* type_name_427;
void* __right_value429 = (void*)0;
char* __dec_obj101;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sType* __dec_obj102;
_Bool __result_obj__272;
    type_424=self->type;
    come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 719, "struct CVALUE*"))));
    type2_426=(struct sType*)come_increment_ref_count(solve_generics(type_424,info->generics_type,info));
    type_name_427=(char*)come_increment_ref_count(make_type_name_string(type2_426,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj101=come_value_425->c_value,
    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_427));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj102=come_value_425->type,
    come_value_425->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 726, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_425->type->mUnsigned=(_Bool)1;
    come_value_425->var=((void*)0);
    add_come_last_code(info,"%s",come_value_425->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
    __result_obj__272 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_426,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_427 = come_decrement_ref_count(type_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj103;
struct sAlignOfExpNode2* __result_obj__273;
    ((struct sNodeBase*)(__right_value433=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value433,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj103=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__273 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __right_value435 = (void*)0;
char* __result_obj__274;
    __result_obj__274 = come_increment_ref_count(((char*)(__right_value435=__builtin_string("sAlignOfExpNode2"))));
    (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__274 = come_decrement_ref_count(__result_obj__274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__274;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_428;
_Bool Value_429;
_Bool __result_obj__275;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_430;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct CVALUE* come_value2_431;
void* __right_value439 = (void*)0;
char* __dec_obj104;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sType* __dec_obj105;
_Bool __result_obj__276;
    exp_428=(struct sNode*)come_increment_ref_count(self->exp);
    Value_429=node_compile(exp_428,info);
    if(    !Value_429) {
        __result_obj__275 = (_Bool)0;
        ((exp_428) ? exp_428 = come_decrement_ref_count(exp_428, ((struct sNode*)exp_428)->finalize, ((struct sNode*)exp_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__275;
    }
    else {
    }
    come_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 762, "struct CVALUE*"))));
    __dec_obj104=come_value2_431->c_value,
    come_value2_431->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_430->c_value));
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj105=come_value2_431->type,
    come_value2_431->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 765, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_431->type->mUnsigned=(_Bool)1;
    come_value2_431->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_431->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_431));
    __result_obj__276 = (_Bool)1;
    ((exp_428) ? exp_428 = come_decrement_ref_count(exp_428, ((struct sNode*)exp_428)->finalize, ((struct sNode*)exp_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* __dec_obj106;
struct sAlignAsNode* __result_obj__277;
    ((struct sNodeBase*)(__right_value443=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value443,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj106=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__277 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__277,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __right_value445 = (void*)0;
char* __result_obj__278;
    __result_obj__278 = come_increment_ref_count(((char*)(__right_value445=__builtin_string("sAlignAsNode"))));
    (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__278 = come_decrement_ref_count(__result_obj__278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__278;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_432;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct CVALUE* come_value_433;
void* __right_value448 = (void*)0;
struct sType* type2_434;
void* __right_value449 = (void*)0;
char* type_name_435;
void* __right_value450 = (void*)0;
char* __dec_obj107;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* __dec_obj108;
_Bool __result_obj__279;
    type_432=self->type;
    come_value_433=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 795, "struct CVALUE*"))));
    type2_434=(struct sType*)come_increment_ref_count(solve_generics(type_432,info->generics_type,info));
    type_name_435=(char*)come_increment_ref_count(make_type_name_string(type2_434,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj107=come_value_433->c_value,
    come_value_433->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_435));
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj108=come_value_433->type,
    come_value_433->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 802, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_433->type->mUnsigned=(_Bool)1;
    come_value_433->var=((void*)0);
    add_come_last_code(info,"%s",come_value_433->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_433));
    __result_obj__279 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_434,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_435 = come_decrement_ref_count(type_name_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__279;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* __dec_obj109;
struct sAlignAsExpNode* __result_obj__280;
    ((struct sNodeBase*)(__right_value454=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value454,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj109=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__280 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__280,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __right_value456 = (void*)0;
char* __result_obj__281;
    __result_obj__281 = come_increment_ref_count(((char*)(__right_value456=__builtin_string("sAlignAsExpNode"))));
    (__right_value456 = come_decrement_ref_count(__right_value456, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__281 = come_decrement_ref_count(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_436;
_Bool Value_437;
_Bool __result_obj__282;
void* __right_value457 = (void*)0;
struct CVALUE* come_value_438;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct CVALUE* come_value2_439;
void* __right_value460 = (void*)0;
char* __dec_obj110;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__283;
    exp_436=(struct sNode*)come_increment_ref_count(self->exp);
    Value_437=node_compile(exp_436,info);
    if(    !Value_437) {
        __result_obj__282 = (_Bool)0;
        ((exp_436) ? exp_436 = come_decrement_ref_count(exp_436, ((struct sNode*)exp_436)->finalize, ((struct sNode*)exp_436)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__282;
    }
    else {
    }
    come_value_438=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_439=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 838, "struct CVALUE*"))));
    __dec_obj110=come_value2_439->c_value,
    come_value2_439->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_438->c_value));
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj111=come_value2_439->type,
    come_value2_439->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 841, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_439->type->mUnsigned=(_Bool)1;
    come_value2_439->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_439->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_439));
    __result_obj__283 = (_Bool)1;
    ((exp_436) ? exp_436 = come_decrement_ref_count(exp_436, ((struct sNode*)exp_436)->finalize, ((struct sNode*)exp_436)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_438,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_439,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj112;
struct sDeleteNode* __result_obj__284;
    ((struct sNodeBase*)(__right_value464=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value464,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj112=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__284 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __right_value466 = (void*)0;
char* __result_obj__285;
    __result_obj__285 = come_increment_ref_count(((char*)(__right_value466=__builtin_string("sDeleteNode"))));
    (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__285 = come_decrement_ref_count(__result_obj__285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_440;
_Bool Value_441;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value468 = (void*)0;
_Bool __result_obj__286;
    node_440=self->node;
    Value_441=node_compile(node_440,info);
    if(    !Value_441) {
        return (_Bool)0;
    }
    else {
    }
    come_value_442=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_442->type->mPointerNum>0) {
        free_object(((struct sType*)(__right_value468=come_call_cloner(sType_clone, come_value_442->type))),come_value_442->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value468,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__286 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_442,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj113;
struct sBorrowNode* __result_obj__287;
struct sBorrowNode* __result_obj__288;
    ((struct sNodeBase*)(__right_value469=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value469,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj113=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__287 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__287,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__287;
    __result_obj__288 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__288,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __right_value471 = (void*)0;
char* __result_obj__289;
    __result_obj__289 = come_increment_ref_count(((char*)(__right_value471=__builtin_string("sBorrowNode"))));
    (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__289 = come_decrement_ref_count(__result_obj__289, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__289;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_443;
_Bool Value_444;
void* __right_value472 = (void*)0;
struct CVALUE* come_value_445;
struct sRightValueObject* right_value_objects_446;
int right_value_id_447;
_Bool __result_obj__290;
    node_443=self->node;
    Value_444=node_compile(node_443,info);
    if(    !Value_444) {
        return (_Bool)0;
    }
    else {
    }
    come_value_445=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_445->type->mPointerNum>0) {
        come_value_445->type->mHeap=(_Bool)0;
        right_value_objects_446=come_value_445->right_value_objects;
        if(        right_value_objects_446) {
            right_value_id_447=right_value_objects_446->mID;
            if(            right_value_id_447!=-1) {
                remove_object_from_right_values(right_value_id_447,info);
            }
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_445));
    __result_obj__290 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_445,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sNode* __dec_obj114;
struct sCloneNode* __result_obj__291;
    ((struct sNodeBase*)(__right_value473=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value473,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj114=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__291 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __right_value475 = (void*)0;
char* __result_obj__292;
    __result_obj__292 = come_increment_ref_count(((char*)(__right_value475=__builtin_string("sCloneNode"))));
    (__right_value475 = come_decrement_ref_count(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__292 = come_decrement_ref_count(__result_obj__292, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__292;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_448;
_Bool Value_449;
void* __right_value476 = (void*)0;
struct CVALUE* left_value_450;
void* __right_value477 = (void*)0;
struct sType* left_type_451;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct CVALUE* come_value_452;
void* __right_value480 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var11 = (void*)0;
struct sType* result_type_453=0;
char* c_value_454=0;
char* __dec_obj115;
void* __right_value481 = (void*)0;
struct sType* __dec_obj116;
_Bool __result_obj__293;
    node_448=self->node;
    Value_449=node_compile(node_448,info);
    if(    !Value_449) {
        return (_Bool)0;
    }
    else {
    }
    left_value_450=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_451=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_450->type));
    if(    left_type_451->mPointerNum==1&&string_operator_equals(left_type_451->mClass->mName,"void")&&left_type_451->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_450));
    }
    else if(    left_type_451->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_450));
    }
    else if(    left_type_451->mPointerNum>0) {
        come_value_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 963, "struct CVALUE*"))));
        multiple_assign_var11=((struct tuple2$2sType$phchar$ph*)(__right_value480=clone_object(left_type_451,left_value_450->c_value,info)));
        result_type_453=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        c_value_454=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        /*c*/ come_call_finalizer3(__right_value480,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj115=come_value_452->c_value,
        come_value_452->c_value=(char*)come_increment_ref_count(c_value_454);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj116=come_value_452->type,
        come_value_452->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_451));
        /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_452->type->mHeap=(_Bool)1;
        come_value_452->var=((void*)0);
        append_object_to_right_values2(come_value_452,(struct sType*)come_increment_ref_count(left_type_451),info,(_Bool)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_452));
        /*c*/ come_call_finalizer3(come_value_452,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_453,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (c_value_454 = come_decrement_ref_count(c_value_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__293 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_450,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_451,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static void sCloneNode_finalize(struct sCloneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj117;
struct sDupeNode* __result_obj__294;
    ((struct sNodeBase*)(__right_value482=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value482,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj117=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__294 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __right_value484 = (void*)0;
char* __result_obj__295;
    __result_obj__295 = come_increment_ref_count(((char*)(__right_value484=__builtin_string("sDupeNode"))));
    (__right_value484 = come_decrement_ref_count(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__295 = come_decrement_ref_count(__result_obj__295, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__295;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_455;
_Bool Value_456;
void* __right_value485 = (void*)0;
struct CVALUE* left_value_457;
void* __right_value486 = (void*)0;
struct sType* left_type_458;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct CVALUE* come_value_459;
void* __right_value489 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var12 = (void*)0;
struct sType* result_type_460=0;
char* c_value_461=0;
char* __dec_obj118;
void* __right_value490 = (void*)0;
struct sType* __dec_obj119;
_Bool __result_obj__296;
    node_455=self->node;
    Value_456=node_compile(node_455,info);
    if(    !Value_456) {
        return (_Bool)0;
    }
    else {
    }
    left_value_457=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_458=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_457->type));
    if(    left_type_458->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_457));
    }
    else if(    left_type_458->mPointerNum>0&&left_type_458->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_457));
    }
    else if(    left_type_458->mPointerNum>0) {
        come_value_459=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1013, "struct CVALUE*"))));
        multiple_assign_var12=((struct tuple2$2sType$phchar$ph*)(__right_value489=clone_object(left_type_458,left_value_457->c_value,info)));
        result_type_460=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        c_value_461=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        /*c*/ come_call_finalizer3(__right_value489,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj118=come_value_459->c_value,
        come_value_459->c_value=(char*)come_increment_ref_count(c_value_461);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj119=come_value_459->type,
        come_value_459->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_458));
        /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_459->type->mHeap=(_Bool)1;
        come_value_459->var=((void*)0);
        append_object_to_right_values2(come_value_459,(struct sType*)come_increment_ref_count(left_type_458),info,(_Bool)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_459));
        /*c*/ come_call_finalizer3(come_value_459,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_460,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (c_value_461 = come_decrement_ref_count(c_value_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__296 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static void sDupeNode_finalize(struct sDupeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj120;
struct sDummyHeapNode* __result_obj__297;
    ((struct sNodeBase*)(__right_value491=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value491,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj120=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__297 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __right_value493 = (void*)0;
char* __result_obj__298;
    __result_obj__298 = come_increment_ref_count(((char*)(__right_value493=__builtin_string("sDummyHeapNode"))));
    (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__298 = come_decrement_ref_count(__result_obj__298, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__298;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_462;
_Bool Value_463;
void* __right_value494 = (void*)0;
struct CVALUE* come_value_464;
_Bool __result_obj__299;
    node_462=self->node;
    Value_463=node_compile(node_462,info);
    if(    !Value_463) {
        return (_Bool)0;
    }
    else {
    }
    come_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_464->type->mPointerNum>0) {
        come_value_464->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_464));
    __result_obj__299 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_464,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sNode* __dec_obj121;
struct sGCIncNode* __result_obj__300;
    ((struct sNodeBase*)(__right_value495=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value495,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj121=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__300 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __right_value497 = (void*)0;
char* __result_obj__301;
    __result_obj__301 = come_increment_ref_count(((char*)(__right_value497=__builtin_string("sGCIncNode"))));
    (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__301 = come_decrement_ref_count(__result_obj__301, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__301;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_465;
_Bool Value_466;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_467;
struct sType* type_468;
void* __right_value499 = (void*)0;
char* type_name_469;
void* __right_value500 = (void*)0;
char* __dec_obj122;
_Bool __result_obj__302;
    node_465=self->node;
    Value_466=node_compile(node_465,info);
    if(    !Value_466) {
        return (_Bool)0;
    }
    else {
    }
    come_value_467=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_468=come_value_467->type;
    if(    come_value_467->type->mHeap&&come_value_467->type->mPointerNum>0) {
        type_name_469=(char*)come_increment_ref_count(make_type_name_string(type_468,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj122=come_value_467->c_value,
        come_value_467->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_467->type,come_value_467->c_value,info));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (type_name_469 = come_decrement_ref_count(type_name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_467));
    __result_obj__302 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_467,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj123;
struct sGCDecNode* __result_obj__303;
    ((struct sNodeBase*)(__right_value501=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value501,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj123=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__303 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __right_value503 = (void*)0;
char* __result_obj__304;
    __result_obj__304 = come_increment_ref_count(((char*)(__right_value503=__builtin_string("sGCDecNode"))));
    (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__304 = come_decrement_ref_count(__result_obj__304, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__304;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_470;
_Bool Value_471;
void* __right_value504 = (void*)0;
struct CVALUE* come_value_472;
struct sType* type_473;
_Bool __result_obj__305;
    node_470=self->node;
    Value_471=node_compile(node_470,info);
    if(    !Value_471) {
        return (_Bool)0;
    }
    else {
    }
    come_value_472=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_473=come_value_472->type;
    if(    come_value_472->type->mHeap&&come_value_472->type->mPointerNum>0) {
        decrement_ref_count_object(type_473,come_value_472->c_value,info,(_Bool)0,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
    __result_obj__305 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_472,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj124;
struct sIsHeap* __result_obj__306;
    ((struct sNodeBase*)(__right_value505=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value505,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj124=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__306 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__306,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __right_value507 = (void*)0;
char* __result_obj__307;
    __result_obj__307 = come_increment_ref_count(((char*)(__right_value507=__builtin_string("sIsHeap"))));
    (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__307 = come_decrement_ref_count(__result_obj__307, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__307;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_474;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* come_value_475;
void* __right_value510 = (void*)0;
char* __dec_obj125;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj126;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct CVALUE* come_value_476;
void* __right_value516 = (void*)0;
char* __dec_obj127;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj128;
    node_474=self->type;
    if(    self->type->mHeap) {
        come_value_475=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1156, "struct CVALUE*"))));
        __dec_obj125=come_value_475->c_value,
        come_value_475->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj126=come_value_475->type,
        come_value_475->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1159, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_475->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_475));
        add_come_last_code(info,"%s",come_value_475->c_value);
        /*c*/ come_call_finalizer3(come_value_475,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value_476=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1167, "struct CVALUE*"))));
        __dec_obj127=come_value_476->c_value,
        come_value_476->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj128=come_value_476->type,
        come_value_476->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1170, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_476->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_476));
        add_come_last_code(info,"%s",come_value_476->c_value);
        /*c*/ come_call_finalizer3(come_value_476,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj129;
struct sIsPointer* __result_obj__308;
    ((struct sNodeBase*)(__right_value520=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value520,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj129=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__308 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__308,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __right_value522 = (void*)0;
char* __result_obj__309;
    __result_obj__309 = come_increment_ref_count(((char*)(__right_value522=__builtin_string("sIsPointer"))));
    (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__309 = come_decrement_ref_count(__result_obj__309, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__309;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_477;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value525 = (void*)0;
char* __dec_obj130;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj131;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value531 = (void*)0;
char* __dec_obj132;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj133;
    node_477=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1202, "struct CVALUE*"))));
        __dec_obj130=come_value_478->c_value,
        come_value_478->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj131=come_value_478->type,
        come_value_478->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1205, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_478->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
        add_come_last_code(info,"%s",come_value_478->c_value);
        /*c*/ come_call_finalizer3(come_value_478,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value_479=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1213, "struct CVALUE*"))));
        __dec_obj132=come_value_479->c_value,
        come_value_479->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj133=come_value_479->type,
        come_value_479->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1216, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_479->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_479));
        add_come_last_code(info,"%s",come_value_479->c_value);
        /*c*/ come_call_finalizer3(come_value_479,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj134;
struct sGCDecNoFreeNode* __result_obj__310;
    ((struct sNodeBase*)(__right_value535=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value535,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj134=self->node,
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__310 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__310,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __right_value537 = (void*)0;
char* __result_obj__311;
    __result_obj__311 = come_increment_ref_count(((char*)(__right_value537=__builtin_string("sGCDecNoFreeNode"))));
    (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__311 = come_decrement_ref_count(__result_obj__311, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__311;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_480;
_Bool Value_481;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_482;
struct sType* type_483;
_Bool __result_obj__312;
    node_480=self->node;
    Value_481=node_compile(node_480,info);
    if(    !Value_481) {
        return (_Bool)0;
    }
    else {
    }
    come_value_482=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_483=come_value_482->type;
    if(    type_483->mHeap&&type_483->mPointerNum>0) {
        decrement_ref_count_object(type_483,come_value_482->c_value,info,(_Bool)0,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_482));
    __result_obj__312 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_482,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value539 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_484=0;
char* name_485=0;
_Bool err_486=0;
void* __right_value540 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c1_487=0;
char* Err_488=0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value557 = (void*)0;
struct sNode* obj_489;
void* __right_value558 = (void*)0;
char* fun_name_497;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* __result_obj__321;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_498;
void* __right_value563 = (void*)0;
char* word_499;
_Bool no_comma_500;
void* __right_value564 = (void*)0;
struct sNode* exp_501;
void* __right_value565 = (void*)0;
_Bool _if_conditional7;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* value_node_502;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj143;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* exp_504;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c2_505=0;
char* Err_506=0;
struct sNode* __result_obj__323;
void* __right_value575 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c3_507=0;
char* Err_508=0;
struct sNode* __result_obj__324;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value578 = (void*)0;
struct sNode* __result_obj__325;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value581 = (void*)0;
struct sNode* __result_obj__326;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value584 = (void*)0;
struct sNode* __result_obj__327;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value587 = (void*)0;
struct sNode* __result_obj__328;
void* __right_value588 = (void*)0;
struct sNode* node_509;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value594 = (void*)0;
struct sNode* __result_obj__331;
void* __right_value595 = (void*)0;
struct sNode* node_511;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value601 = (void*)0;
struct sNode* __result_obj__334;
void* __right_value602 = (void*)0;
struct sNode* node_513;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value608 = (void*)0;
struct sNode* __result_obj__337;
void* __right_value609 = (void*)0;
struct sNode* node_515;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value615 = (void*)0;
struct sNode* __result_obj__340;
void* __right_value616 = (void*)0;
struct sNode* node_517;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value622 = (void*)0;
struct sNode* __result_obj__343;
void* __right_value623 = (void*)0;
struct sNode* node_519;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value629 = (void*)0;
struct sNode* __result_obj__346;
void* __right_value630 = (void*)0;
struct sNode* node_521;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value636 = (void*)0;
struct sNode* __result_obj__349;
void* __right_value637 = (void*)0;
struct sNode* node_523;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value643 = (void*)0;
struct sNode* __result_obj__352;
void* __right_value644 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* param_type_525=0;
char* param_name_526=0;
_Bool err_527=0;
void* __right_value645 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var18 = (void*)0;
int come_exception_var_c4_528=0;
char* Err_529=0;
void* __right_value646 = (void*)0;
struct sType* type2_530;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* __right_value652 = (void*)0;
struct sNode* __result_obj__355;
void* __right_value653 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* param_type_532=0;
char* param_name_533=0;
_Bool err_534=0;
void* __right_value654 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c5_535=0;
char* Err_536=0;
void* __right_value655 = (void*)0;
struct sType* type2_537;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* __right_value661 = (void*)0;
struct sNode* __result_obj__358;
void* __right_value662 = (void*)0;
struct sNode* __result_obj__359;
void* __right_value663 = (void*)0;
struct sNode* __result_obj__360;
void* __right_value664 = (void*)0;
struct sNode* __result_obj__361;
void* __right_value665 = (void*)0;
struct sNode* __result_obj__362;
_Bool come_c_539;
void* __right_value666 = (void*)0;
struct sNode* node_540;
struct sNode* __result_obj__363;
void* __right_value667 = (void*)0;
struct sNode* __result_obj__364;
void* __right_value668 = (void*)0;
struct sNode* __result_obj__365;
void* __right_value669 = (void*)0;
struct sNode* __result_obj__366;
void* __right_value670 = (void*)0;
struct sNode* __result_obj__367;
void* __right_value671 = (void*)0;
struct sNode* __result_obj__368;
void* __right_value672 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_c6_541=0;
char* Err_542=0;
_Bool paren_543;
_Bool is_type_name_flag_544;
char* p_545;
int sline_546;
void* __right_value673 = (void*)0;
char* word_547;
void* __right_value674 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* type_548=0;
char* name_549=0;
_Bool err_550=0;
void* __right_value675 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_c7_551=0;
char* Err_552=0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sNode* _inf_value18;
struct sSizeOfNode* _inf_obj_value18;
void* __right_value681 = (void*)0;
struct sNode* __result_obj__371;
struct sNode* exp_554;
_Bool no_comma_555;
void* __right_value682 = (void*)0;
struct sNode* __dec_obj168;
void* __right_value683 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfExpNode* _inf_obj_value19;
void* __right_value689 = (void*)0;
struct sNode* __result_obj__374;
_Bool paren_557;
_Bool is_type_name_flag_558;
char* p_559;
int sline_560;
void* __right_value690 = (void*)0;
char* word_561;
void* __right_value691 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var24 = (void*)0;
struct sType* type_562=0;
char* name_563=0;
_Bool err_564=0;
void* __right_value692 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c8_565=0;
char* Err_566=0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sNode* _inf_value20;
struct sTypeOfNode* _inf_obj_value20;
void* __right_value698 = (void*)0;
struct sNode* __result_obj__377;
struct sNode* exp_568;
_Bool no_comma_569;
void* __right_value699 = (void*)0;
struct sNode* __dec_obj174;
void* __right_value700 = (void*)0;
struct sNode* __dec_obj175;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfExpNode* _inf_obj_value21;
void* __right_value706 = (void*)0;
struct sNode* __result_obj__380;
_Bool paren_571;
struct sNode* exp_572;
_Bool no_comma_573;
void* __right_value707 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value708 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value22;
struct sDynamicTypeOf* _inf_obj_value22;
void* __right_value714 = (void*)0;
struct sNode* __result_obj__383;
_Bool paren_575;
_Bool is_type_name_flag_576;
char* p_577;
int sline_578;
void* __right_value715 = (void*)0;
char* word_579;
void* __right_value716 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var26 = (void*)0;
struct sType* type_580=0;
char* name_581=0;
_Bool err_582=0;
void* __right_value717 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c9_583=0;
char* Err_584=0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sNode* _inf_value23;
struct sAlignOfNode* _inf_obj_value23;
void* __right_value723 = (void*)0;
struct sNode* __result_obj__386;
struct sNode* exp_586;
_Bool no_comma_587;
void* __right_value724 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value725 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfExpNode* _inf_obj_value24;
void* __right_value731 = (void*)0;
struct sNode* __result_obj__389;
_Bool paren_589;
_Bool is_type_name_flag_590;
char* p_591;
int sline_592;
void* __right_value732 = (void*)0;
char* word_593;
void* __right_value733 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var28 = (void*)0;
struct sType* type_594=0;
char* name_595=0;
_Bool err_596=0;
void* __right_value734 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c10_597=0;
char* Err_598=0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfNode2* _inf_obj_value25;
void* __right_value740 = (void*)0;
struct sNode* __result_obj__392;
struct sNode* exp_600;
_Bool no_comma_601;
void* __right_value741 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value742 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfExpNode2* _inf_obj_value26;
void* __right_value748 = (void*)0;
struct sNode* __result_obj__395;
_Bool is_type_name_flag_603;
char* p_604;
int sline_605;
void* __right_value749 = (void*)0;
char* word_606;
void* __right_value750 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type_607=0;
char* name_608=0;
_Bool err_609=0;
void* __right_value751 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c11_610=0;
char* Err_611=0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sNode* _inf_value27;
struct sAlignAsNode* _inf_obj_value27;
void* __right_value757 = (void*)0;
struct sNode* __result_obj__398;
void* __right_value758 = (void*)0;
struct sNode* exp_613;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsExpNode* _inf_obj_value28;
void* __right_value764 = (void*)0;
struct sNode* __result_obj__401;
void* __right_value765 = (void*)0;
struct sNode* __result_obj__402;
exp_554 = (void*)0;
exp_568 = (void*)0;
exp_572 = (void*)0;
exp_586 = (void*)0;
exp_600 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value539=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_484=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        name_485=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_486=multiple_assign_var13->v3;
        /*c*/ come_call_finalizer3(__right_value539,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_486) {
            multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value540=err_msg(info,"parse_type failed")));
            come_exception_var_c1_487=multiple_assign_var14->v1;
            Err_488=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            ((Err_488)?(puts(Err_488),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value540,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_488 = come_decrement_ref_count(Err_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1274, "struct sNode");
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value542=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1274, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_484),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_489=(struct sNode*)come_increment_ref_count(_inf_value3);
            /*c*/ come_call_finalizer3(__right_value542,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_name_497=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result_obj__321 = come_increment_ref_count(((struct sNode*)(__right_value560=parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_489)),(char*)come_increment_ref_count(fun_name_497),info))));
            ((obj_489) ? obj_489 = come_decrement_ref_count(obj_489, ((struct sNode*)obj_489)->finalize, ((struct sNode*)obj_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_497 = come_decrement_ref_count(fun_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value560) ? __right_value560 = come_decrement_ref_count(__right_value560, ((struct sNode*)__right_value560)->finalize, ((struct sNode*)__right_value560)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__321;
            ((obj_489) ? obj_489 = come_decrement_ref_count(obj_489, ((struct sNode*)obj_489)->finalize, ((struct sNode*)obj_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_497 = come_decrement_ref_count(fun_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_498=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "21obj.c", 1283, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            while((_Bool)1) {
                word_499=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_500=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_501=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_500;
                    if(                    (_if_conditional7=(string_operator_equals(((char*)(__right_value565=exp_501->kind(exp_501->_protocol_obj))),"sWildCard"))),                    (__right_value565 = come_decrement_ref_count(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    _if_conditional7) {
                        value_node_502=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value566=xsprintf("Value"))),info));
                        (__right_value566 = come_decrement_ref_count(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        __dec_obj143=exp_501,
                        exp_501=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_502),(char*)come_increment_ref_count(word_499),info));
                        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                        ((value_node_502) ? value_node_502 = come_decrement_ref_count(value_node_502, ((struct sNode*)value_node_502)->finalize, ((struct sNode*)value_node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_498,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1302, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_499),(struct sNode*)come_increment_ref_count(exp_501))));
                    ((exp_501) ? exp_501 = come_decrement_ref_count(exp_501, ((struct sNode*)exp_501)->finalize, ((struct sNode*)exp_501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==44) {
                    exp_504=(struct sNode*)come_increment_ref_count(create_load_var(word_499,info));
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_498,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1307, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_499),(struct sNode*)come_increment_ref_count(exp_504))));
                    ((exp_504) ? exp_504 = come_decrement_ref_count(exp_504, ((struct sNode*)exp_504)->finalize, ((struct sNode*)exp_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value574=err_msg(info,"invalid character(21) %c",*info->p)));
                    come_exception_var_c2_505=multiple_assign_var15->v1;
                    Err_506=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    ((Err_506)?(puts(Err_506),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value574,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__323 = come_increment_ref_count(((void*)0));
                    (Err_506 = come_decrement_ref_count(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (word_499 = come_decrement_ref_count(word_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(initializer_498,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__323;
                    (Err_506 = come_decrement_ref_count(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word_499 = come_decrement_ref_count(word_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value575=err_msg(info,"invalid character(30) %c",*info->p)));
                    come_exception_var_c3_507=multiple_assign_var16->v1;
                    Err_508=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                    ((Err_508)?(puts(Err_508),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value575,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__324 = come_increment_ref_count(((void*)0));
                    (Err_508 = come_decrement_ref_count(Err_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (word_499 = come_decrement_ref_count(word_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(initializer_498,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__324;
                    (Err_508 = come_decrement_ref_count(Err_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (word_499 = come_decrement_ref_count(word_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1328, "struct sNode");
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value577=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1328, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_484),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_498),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result_obj__325 = come_increment_ref_count(((struct sNode*)(__right_value578=_inf_value4)));
            /*c*/ come_call_finalizer3(initializer_498,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value577,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value578) ? __right_value578 = come_decrement_ref_count(__right_value578, ((struct sNode*)__right_value578)->finalize, ((struct sNode*)__right_value578)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__325;
            /*c*/ come_call_finalizer3(initializer_498,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1331, "struct sNode");
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value580=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1331, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_484),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result_obj__326 = come_increment_ref_count(((struct sNode*)(__right_value581=_inf_value5)));
            /*c*/ come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value580,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value581) ? __right_value581 = come_decrement_ref_count(__right_value581, ((struct sNode*)__right_value581)->finalize, ((struct sNode*)__right_value581)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__326;
        }
        /*c*/ come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1335, "struct sNode");
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value583=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1335, "struct sTrueNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result_obj__327 = come_increment_ref_count(((struct sNode*)(__right_value584=_inf_value6)));
        /*c*/ come_call_finalizer3(__right_value583,sTrueNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value584) ? __right_value584 = come_decrement_ref_count(__right_value584, ((struct sNode*)__right_value584)->finalize, ((struct sNode*)__right_value584)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__327;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1338, "struct sNode");
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value586=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1338, "struct sFalseNode*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result_obj__328 = come_increment_ref_count(((struct sNode*)(__right_value587=_inf_value7)));
        /*c*/ come_call_finalizer3(__right_value586,sFalseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value587) ? __right_value587 = come_decrement_ref_count(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__328;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_509=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1343, "struct sNode");
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value590=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1343, "struct sDeleteNode*")),(struct sNode*)come_increment_ref_count(node_509),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result_obj__331 = come_increment_ref_count(((struct sNode*)(__right_value594=_inf_value8)));
        ((node_509) ? node_509 = come_decrement_ref_count(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value590,sDeleteNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value594) ? __right_value594 = come_decrement_ref_count(__right_value594, ((struct sNode*)__right_value594)->finalize, ((struct sNode*)__right_value594)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__331;
        ((node_509) ? node_509 = come_decrement_ref_count(node_509, ((struct sNode*)node_509)->finalize, ((struct sNode*)node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_511=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1348, "struct sNode");
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value597=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1348, "struct sBorrowNode*")),(struct sNode*)come_increment_ref_count(node_511),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result_obj__334 = come_increment_ref_count(((struct sNode*)(__right_value601=_inf_value9)));
        ((node_511) ? node_511 = come_decrement_ref_count(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value597,sBorrowNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value601) ? __right_value601 = come_decrement_ref_count(__right_value601, ((struct sNode*)__right_value601)->finalize, ((struct sNode*)__right_value601)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__334) ? __result_obj__334 = come_decrement_ref_count(__result_obj__334, ((struct sNode*)__result_obj__334)->finalize, ((struct sNode*)__result_obj__334)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__334;
        ((node_511) ? node_511 = come_decrement_ref_count(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_513=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1353, "struct sNode");
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value604=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1353, "struct sCloneNode*")),(struct sNode*)come_increment_ref_count(node_513),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result_obj__337 = come_increment_ref_count(((struct sNode*)(__right_value608=_inf_value10)));
        ((node_513) ? node_513 = come_decrement_ref_count(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value604,sCloneNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value608) ? __right_value608 = come_decrement_ref_count(__right_value608, ((struct sNode*)__right_value608)->finalize, ((struct sNode*)__right_value608)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__337) ? __result_obj__337 = come_decrement_ref_count(__result_obj__337, ((struct sNode*)__result_obj__337)->finalize, ((struct sNode*)__result_obj__337)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__337;
        ((node_513) ? node_513 = come_decrement_ref_count(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_515=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1358, "struct sNode");
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value611=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1358, "struct sDupeNode*")),(struct sNode*)come_increment_ref_count(node_515),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result_obj__340 = come_increment_ref_count(((struct sNode*)(__right_value615=_inf_value11)));
        ((node_515) ? node_515 = come_decrement_ref_count(node_515, ((struct sNode*)node_515)->finalize, ((struct sNode*)node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value611,sDupeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value615) ? __right_value615 = come_decrement_ref_count(__right_value615, ((struct sNode*)__right_value615)->finalize, ((struct sNode*)__right_value615)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__340;
        ((node_515) ? node_515 = come_decrement_ref_count(node_515, ((struct sNode*)node_515)->finalize, ((struct sNode*)node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_517=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1363, "struct sNode");
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value618=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1363, "struct sDummyHeapNode*")),(struct sNode*)come_increment_ref_count(node_517),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result_obj__343 = come_increment_ref_count(((struct sNode*)(__right_value622=_inf_value12)));
        ((node_517) ? node_517 = come_decrement_ref_count(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value618,sDummyHeapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value622) ? __right_value622 = come_decrement_ref_count(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__343) ? __result_obj__343 = come_decrement_ref_count(__result_obj__343, ((struct sNode*)__result_obj__343)->finalize, ((struct sNode*)__result_obj__343)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__343;
        ((node_517) ? node_517 = come_decrement_ref_count(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_519=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1373, "struct sNode");
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value625=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1373, "struct sGCIncNode*")),(struct sNode*)come_increment_ref_count(node_519),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result_obj__346 = come_increment_ref_count(((struct sNode*)(__right_value629=_inf_value13)));
        ((node_519) ? node_519 = come_decrement_ref_count(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value625,sGCIncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value629) ? __right_value629 = come_decrement_ref_count(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__346;
        ((node_519) ? node_519 = come_decrement_ref_count(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_521=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1383, "struct sNode");
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value632=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1383, "struct sGCDecNode*")),(struct sNode*)come_increment_ref_count(node_521),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result_obj__349 = come_increment_ref_count(((struct sNode*)(__right_value636=_inf_value14)));
        ((node_521) ? node_521 = come_decrement_ref_count(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value632,sGCDecNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value636) ? __right_value636 = come_decrement_ref_count(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__349) ? __result_obj__349 = come_decrement_ref_count(__result_obj__349, ((struct sNode*)__result_obj__349)->finalize, ((struct sNode*)__result_obj__349)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__349;
        ((node_521) ? node_521 = come_decrement_ref_count(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_523=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1393, "struct sNode");
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value639=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1393, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_523),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__352 = come_increment_ref_count(((struct sNode*)(__right_value643=_inf_value15)));
        ((node_523) ? node_523 = come_decrement_ref_count(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value639,sGCDecNoFreeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value643) ? __right_value643 = come_decrement_ref_count(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__352;
        ((node_523) ? node_523 = come_decrement_ref_count(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value644=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_525=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
        param_name_526=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        err_527=multiple_assign_var17->v3;
        /*c*/ come_call_finalizer3(__right_value644,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_527) {
            multiple_assign_var18=((struct tuple2$2int$char$ph*)(__right_value645=err_msg(info,"parse_type failed")));
            come_exception_var_c4_528=multiple_assign_var18->v1;
            Err_529=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            ((Err_529)?(puts(Err_529),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value645,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_529 = come_decrement_ref_count(Err_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type2_530=(struct sType*)come_increment_ref_count(solve_generics(param_type_525,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1409, "struct sNode");
        _inf_obj_value16=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value648=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1409, "struct sIsHeap*")),(struct sType*)come_increment_ref_count(type2_530),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sIsHeap_finalize;
        _inf_value16->clone=(void*)sIsHeap_clone;
        _inf_value16->compile=(void*)sIsHeap_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sIsHeap_kind;
        __result_obj__355 = come_increment_ref_count(((struct sNode*)(__right_value652=_inf_value16)));
        /*c*/ come_call_finalizer3(param_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_526 = come_decrement_ref_count(param_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_530,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value648,sIsHeap_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value652) ? __right_value652 = come_decrement_ref_count(__right_value652, ((struct sNode*)__right_value652)->finalize, ((struct sNode*)__right_value652)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__355;
        /*c*/ come_call_finalizer3(param_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_526 = come_decrement_ref_count(param_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_530,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value653=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_532=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
        param_name_533=(char*)come_increment_ref_count(multiple_assign_var19->v2);
        err_534=multiple_assign_var19->v3;
        /*c*/ come_call_finalizer3(__right_value653,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_534) {
            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value654=err_msg(info,"parse_type failed")));
            come_exception_var_c5_535=multiple_assign_var20->v1;
            Err_536=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            ((Err_536)?(puts(Err_536),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value654,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_536 = come_decrement_ref_count(Err_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type2_537=(struct sType*)come_increment_ref_count(solve_generics(param_type_532,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1425, "struct sNode");
        _inf_obj_value17=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value657=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1425, "struct sIsPointer*")),(struct sType*)come_increment_ref_count(type2_537),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsPointer_finalize;
        _inf_value17->clone=(void*)sIsPointer_clone;
        _inf_value17->compile=(void*)sIsPointer_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsPointer_kind;
        __result_obj__358 = come_increment_ref_count(((struct sNode*)(__right_value661=_inf_value17)));
        /*c*/ come_call_finalizer3(param_type_532,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_533 = come_decrement_ref_count(param_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value657,sIsPointer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value661) ? __right_value661 = come_decrement_ref_count(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__358) ? __result_obj__358 = come_decrement_ref_count(__result_obj__358, ((struct sNode*)__result_obj__358)->finalize, ((struct sNode*)__result_obj__358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__358;
        /*c*/ come_call_finalizer3(param_type_532,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_533 = come_decrement_ref_count(param_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_537,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result_obj__359 = come_increment_ref_count(((struct sNode*)(__right_value662=create_nothing_node(info))));
            ((__right_value662) ? __right_value662 = come_decrement_ref_count(__right_value662, ((struct sNode*)__right_value662)->finalize, ((struct sNode*)__right_value662)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__359) ? __result_obj__359 = come_decrement_ref_count(__result_obj__359, ((struct sNode*)__result_obj__359)->finalize, ((struct sNode*)__result_obj__359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__359;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__360 = come_increment_ref_count(((struct sNode*)(__right_value663=create_nothing_node(info))));
            ((__right_value663) ? __right_value663 = come_decrement_ref_count(__right_value663, ((struct sNode*)__right_value663)->finalize, ((struct sNode*)__right_value663)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__360) ? __result_obj__360 = come_decrement_ref_count(__result_obj__360, ((struct sNode*)__result_obj__360)->finalize, ((struct sNode*)__result_obj__360)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__360;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__361 = come_increment_ref_count(((struct sNode*)(__right_value664=create_nothing_node(info))));
            ((__right_value664) ? __right_value664 = come_decrement_ref_count(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__361) ? __result_obj__361 = come_decrement_ref_count(__result_obj__361, ((struct sNode*)__result_obj__361)->finalize, ((struct sNode*)__result_obj__361)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__361;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__362 = come_increment_ref_count(((struct sNode*)(__right_value665=create_nothing_node(info))));
            ((__right_value665) ? __right_value665 = come_decrement_ref_count(__right_value665, ((struct sNode*)__right_value665)->finalize, ((struct sNode*)__right_value665)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__362;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_539=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_540=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_539;
                __result_obj__363 = come_increment_ref_count(node_540);
                ((node_540) ? node_540 = come_decrement_ref_count(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__363;
                ((node_540) ? node_540 = come_decrement_ref_count(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                __result_obj__364 = come_increment_ref_count(((struct sNode*)(__right_value667=create_nothing_node(info))));
                ((__right_value667) ? __right_value667 = come_decrement_ref_count(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__364) ? __result_obj__364 = come_decrement_ref_count(__result_obj__364, ((struct sNode*)__result_obj__364)->finalize, ((struct sNode*)__result_obj__364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__364;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result_obj__365 = come_increment_ref_count(((struct sNode*)(__right_value668=create_nothing_node(info))));
            ((__right_value668) ? __right_value668 = come_decrement_ref_count(__right_value668, ((struct sNode*)__right_value668)->finalize, ((struct sNode*)__right_value668)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__365) ? __result_obj__365 = come_decrement_ref_count(__result_obj__365, ((struct sNode*)__result_obj__365)->finalize, ((struct sNode*)__result_obj__365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__365;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result_obj__366 = come_increment_ref_count(((struct sNode*)(__right_value669=create_nothing_node(info))));
            ((__right_value669) ? __right_value669 = come_decrement_ref_count(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__366) ? __result_obj__366 = come_decrement_ref_count(__result_obj__366, ((struct sNode*)__result_obj__366)->finalize, ((struct sNode*)__result_obj__366)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__366;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result_obj__367 = come_increment_ref_count(((struct sNode*)(__right_value670=create_nothing_node(info))));
            ((__right_value670) ? __right_value670 = come_decrement_ref_count(__right_value670, ((struct sNode*)__right_value670)->finalize, ((struct sNode*)__right_value670)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__367) ? __result_obj__367 = come_decrement_ref_count(__result_obj__367, ((struct sNode*)__result_obj__367)->finalize, ((struct sNode*)__result_obj__367)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__367;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result_obj__368 = come_increment_ref_count(((struct sNode*)(__right_value671=create_nothing_node(info))));
            ((__right_value671) ? __right_value671 = come_decrement_ref_count(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__368;
        }
        else {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value672=err_msg(info,"invalid using")));
            come_exception_var_c6_541=multiple_assign_var21->v1;
            Err_542=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            ((Err_542)?(puts(Err_542),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value672,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_542 = come_decrement_ref_count(Err_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_543=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_543=(_Bool)1;
        }
        is_type_name_flag_544=(_Bool)0;
        {
            p_545=info->p;
            sline_546=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_547=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_547,info)) {
                    is_type_name_flag_544=(_Bool)1;
                }
                (word_547 = come_decrement_ref_count(word_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_545;
            info->sline=sline_546;
        }
        if(        is_type_name_flag_544) {
            multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value674=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_548=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
            name_549=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            err_550=multiple_assign_var22->v3;
            /*c*/ come_call_finalizer3(__right_value674,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_550) {
                multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value675=err_msg(info,"parse type")));
                come_exception_var_c7_551=multiple_assign_var23->v1;
                Err_552=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                ((Err_552)?(puts(Err_552),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value675,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_552 = come_decrement_ref_count(Err_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            paren_543&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1549, "struct sNode");
            _inf_obj_value18=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value677=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1549, "struct sSizeOfNode*")),(struct sType*)come_increment_ref_count(type_548),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sSizeOfNode_finalize;
            _inf_value18->clone=(void*)sSizeOfNode_clone;
            _inf_value18->compile=(void*)sSizeOfNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sSizeOfNode_kind;
            __result_obj__371 = come_increment_ref_count(((struct sNode*)(__right_value681=_inf_value18)));
            /*c*/ come_call_finalizer3(type_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_549 = come_decrement_ref_count(name_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value677,sSizeOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value681) ? __right_value681 = come_decrement_ref_count(__right_value681, ((struct sNode*)__right_value681)->finalize, ((struct sNode*)__right_value681)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__371) ? __result_obj__371 = come_decrement_ref_count(__result_obj__371, ((struct sNode*)__result_obj__371)->finalize, ((struct sNode*)__result_obj__371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__371;
            /*c*/ come_call_finalizer3(type_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_549 = come_decrement_ref_count(name_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_543) {
                no_comma_555=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj168=exp_554,
                exp_554=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_555;
            }
            else {
                __dec_obj169=exp_554,
                exp_554=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            if(            paren_543&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1570, "struct sNode");
            _inf_obj_value19=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value685=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1570, "struct sSizeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_554),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value19->clone=(void*)sSizeOfExpNode_clone;
            _inf_value19->compile=(void*)sSizeOfExpNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfExpNode_kind;
            __result_obj__374 = come_increment_ref_count(((struct sNode*)(__right_value689=_inf_value19)));
            ((exp_554) ? exp_554 = come_decrement_ref_count(exp_554, ((struct sNode*)exp_554)->finalize, ((struct sNode*)exp_554)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value685,sSizeOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value689) ? __right_value689 = come_decrement_ref_count(__right_value689, ((struct sNode*)__right_value689)->finalize, ((struct sNode*)__right_value689)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__374) ? __result_obj__374 = come_decrement_ref_count(__result_obj__374, ((struct sNode*)__result_obj__374)->finalize, ((struct sNode*)__result_obj__374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__374;
            ((exp_554) ? exp_554 = come_decrement_ref_count(exp_554, ((struct sNode*)exp_554)->finalize, ((struct sNode*)exp_554)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_557=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_557=(_Bool)1;
        }
        is_type_name_flag_558=(_Bool)0;
        {
            p_559=info->p;
            sline_560=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_561=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_561,info)) {
                    is_type_name_flag_558=(_Bool)1;
                }
                (word_561 = come_decrement_ref_count(word_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_559;
            info->sline=sline_560;
        }
        if(        is_type_name_flag_558) {
            multiple_assign_var24=((struct tuple3$3sType$phchar$phbool$*)(__right_value691=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_562=(struct sType*)come_increment_ref_count(multiple_assign_var24->v1);
            name_563=(char*)come_increment_ref_count(multiple_assign_var24->v2);
            err_564=multiple_assign_var24->v3;
            /*c*/ come_call_finalizer3(__right_value691,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_564) {
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value692=err_msg(info,"parse type")));
                come_exception_var_c8_565=multiple_assign_var25->v1;
                Err_566=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                ((Err_566)?(puts(Err_566),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value692,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_566 = come_decrement_ref_count(Err_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            paren_557&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1615, "struct sNode");
            _inf_obj_value20=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value694=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1615, "struct sTypeOfNode*")),(struct sType*)come_increment_ref_count(type_562),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sTypeOfNode_finalize;
            _inf_value20->clone=(void*)sTypeOfNode_clone;
            _inf_value20->compile=(void*)sTypeOfNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sTypeOfNode_kind;
            __result_obj__377 = come_increment_ref_count(((struct sNode*)(__right_value698=_inf_value20)));
            /*c*/ come_call_finalizer3(type_562,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_563 = come_decrement_ref_count(name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value694,sTypeOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value698) ? __right_value698 = come_decrement_ref_count(__right_value698, ((struct sNode*)__right_value698)->finalize, ((struct sNode*)__right_value698)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__377) ? __result_obj__377 = come_decrement_ref_count(__result_obj__377, ((struct sNode*)__result_obj__377)->finalize, ((struct sNode*)__result_obj__377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__377;
            /*c*/ come_call_finalizer3(type_562,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_563 = come_decrement_ref_count(name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_557) {
                no_comma_569=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj174=exp_568,
                exp_568=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_569;
            }
            else {
                __dec_obj175=exp_568,
                exp_568=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            if(            paren_557&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1636, "struct sNode");
            _inf_obj_value21=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value702=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1636, "struct sTypeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_568),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value21->clone=(void*)sTypeOfExpNode_clone;
            _inf_value21->compile=(void*)sTypeOfExpNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfExpNode_kind;
            __result_obj__380 = come_increment_ref_count(((struct sNode*)(__right_value706=_inf_value21)));
            ((exp_568) ? exp_568 = come_decrement_ref_count(exp_568, ((struct sNode*)exp_568)->finalize, ((struct sNode*)exp_568)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value702,sTypeOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value706) ? __right_value706 = come_decrement_ref_count(__right_value706, ((struct sNode*)__right_value706)->finalize, ((struct sNode*)__right_value706)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__380;
            ((exp_568) ? exp_568 = come_decrement_ref_count(exp_568, ((struct sNode*)exp_568)->finalize, ((struct sNode*)exp_568)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_571=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_571=(_Bool)1;
        }
        if(        !paren_571) {
            no_comma_573=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj178=exp_572,
            exp_572=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_573;
        }
        else {
            __dec_obj179=exp_572,
            exp_572=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        if(        paren_571&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1667, "struct sNode");
        _inf_obj_value22=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value710=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1667, "struct sDynamicTypeOf*")),(struct sNode*)come_increment_ref_count(exp_572),info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value22->clone=(void*)sDynamicTypeOf_clone;
        _inf_value22->compile=(void*)sDynamicTypeOf_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sDynamicTypeOf_kind;
        __result_obj__383 = come_increment_ref_count(((struct sNode*)(__right_value714=_inf_value22)));
        ((exp_572) ? exp_572 = come_decrement_ref_count(exp_572, ((struct sNode*)exp_572)->finalize, ((struct sNode*)exp_572)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value710,sDynamicTypeOf_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value714) ? __right_value714 = come_decrement_ref_count(__right_value714, ((struct sNode*)__right_value714)->finalize, ((struct sNode*)__right_value714)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__383;
        ((exp_572) ? exp_572 = come_decrement_ref_count(exp_572, ((struct sNode*)exp_572)->finalize, ((struct sNode*)exp_572)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_575=(_Bool)0;
        if(        *info->p==40) {
            paren_575=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_576=(_Bool)0;
        {
            p_577=info->p;
            sline_578=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_579=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_579,info)) {
                    is_type_name_flag_576=(_Bool)1;
                }
                (word_579 = come_decrement_ref_count(word_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_577;
            info->sline=sline_578;
        }
        if(        is_type_name_flag_576) {
            multiple_assign_var26=((struct tuple3$3sType$phchar$phbool$*)(__right_value716=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_580=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
            name_581=(char*)come_increment_ref_count(multiple_assign_var26->v2);
            err_582=multiple_assign_var26->v3;
            /*c*/ come_call_finalizer3(__right_value716,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_582) {
                multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value717=err_msg(info,"parse type")));
                come_exception_var_c9_583=multiple_assign_var27->v1;
                Err_584=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                ((Err_584)?(puts(Err_584),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value717,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_584 = come_decrement_ref_count(Err_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(41,info);
            if(            paren_575&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1708, "struct sNode");
            _inf_obj_value23=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value719=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1708, "struct sAlignOfNode*")),(struct sType*)come_increment_ref_count(type_580),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sAlignOfNode_finalize;
            _inf_value23->clone=(void*)sAlignOfNode_clone;
            _inf_value23->compile=(void*)sAlignOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sAlignOfNode_kind;
            __result_obj__386 = come_increment_ref_count(((struct sNode*)(__right_value723=_inf_value23)));
            /*c*/ come_call_finalizer3(type_580,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_581 = come_decrement_ref_count(name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value719,sAlignOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value723) ? __right_value723 = come_decrement_ref_count(__right_value723, ((struct sNode*)__right_value723)->finalize, ((struct sNode*)__right_value723)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__386) ? __result_obj__386 = come_decrement_ref_count(__result_obj__386, ((struct sNode*)__result_obj__386)->finalize, ((struct sNode*)__result_obj__386)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__386;
            /*c*/ come_call_finalizer3(type_580,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_581 = come_decrement_ref_count(name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_575) {
                no_comma_587=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj184=exp_586,
                exp_586=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_587;
            }
            else {
                __dec_obj185=exp_586,
                exp_586=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1722, "struct sNode");
            _inf_obj_value24=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value727=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1722, "struct sAlignOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_586),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value24->clone=(void*)sAlignOfExpNode_clone;
            _inf_value24->compile=(void*)sAlignOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfExpNode_kind;
            __result_obj__389 = come_increment_ref_count(((struct sNode*)(__right_value731=_inf_value24)));
            ((exp_586) ? exp_586 = come_decrement_ref_count(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value727,sAlignOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value731) ? __right_value731 = come_decrement_ref_count(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__389) ? __result_obj__389 = come_decrement_ref_count(__result_obj__389, ((struct sNode*)__result_obj__389)->finalize, ((struct sNode*)__result_obj__389)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__389;
            ((exp_586) ? exp_586 = come_decrement_ref_count(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_589=(_Bool)0;
        if(        *info->p==40) {
            paren_589=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_590=(_Bool)0;
        {
            p_591=info->p;
            sline_592=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_593=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_593,info)) {
                    is_type_name_flag_590=(_Bool)1;
                }
                (word_593 = come_decrement_ref_count(word_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_591;
            info->sline=sline_592;
        }
        if(        is_type_name_flag_590) {
            multiple_assign_var28=((struct tuple3$3sType$phchar$phbool$*)(__right_value733=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_594=(struct sType*)come_increment_ref_count(multiple_assign_var28->v1);
            name_595=(char*)come_increment_ref_count(multiple_assign_var28->v2);
            err_596=multiple_assign_var28->v3;
            /*c*/ come_call_finalizer3(__right_value733,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_596) {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value734=err_msg(info,"parse type")));
                come_exception_var_c10_597=multiple_assign_var29->v1;
                Err_598=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_598)?(puts(Err_598),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value734,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_598 = come_decrement_ref_count(Err_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            paren_589&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1763, "struct sNode");
            _inf_obj_value25=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value736=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1763, "struct sAlignOfNode2*")),(struct sType*)come_increment_ref_count(type_594),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value25->clone=(void*)sAlignOfNode2_clone;
            _inf_value25->compile=(void*)sAlignOfNode2_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode2_kind;
            __result_obj__392 = come_increment_ref_count(((struct sNode*)(__right_value740=_inf_value25)));
            /*c*/ come_call_finalizer3(type_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_595 = come_decrement_ref_count(name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value736,sAlignOfNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value740) ? __right_value740 = come_decrement_ref_count(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__392) ? __result_obj__392 = come_decrement_ref_count(__result_obj__392, ((struct sNode*)__result_obj__392)->finalize, ((struct sNode*)__result_obj__392)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__392;
            /*c*/ come_call_finalizer3(type_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_595 = come_decrement_ref_count(name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_589) {
                no_comma_601=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj190=exp_600,
                exp_600=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_601;
            }
            else {
                __dec_obj191=exp_600,
                exp_600=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1777, "struct sNode");
            _inf_obj_value26=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value744=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1777, "struct sAlignOfExpNode2*")),(struct sNode*)come_increment_ref_count(exp_600),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode2_kind;
            __result_obj__395 = come_increment_ref_count(((struct sNode*)(__right_value748=_inf_value26)));
            ((exp_600) ? exp_600 = come_decrement_ref_count(exp_600, ((struct sNode*)exp_600)->finalize, ((struct sNode*)exp_600)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value744,sAlignOfExpNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value748) ? __right_value748 = come_decrement_ref_count(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__395) ? __result_obj__395 = come_decrement_ref_count(__result_obj__395, ((struct sNode*)__result_obj__395)->finalize, ((struct sNode*)__result_obj__395)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__395;
            ((exp_600) ? exp_600 = come_decrement_ref_count(exp_600, ((struct sNode*)exp_600)->finalize, ((struct sNode*)exp_600)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_603=(_Bool)0;
        {
            p_604=info->p;
            sline_605=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_606=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_606,info)) {
                    is_type_name_flag_603=(_Bool)1;
                }
                (word_606 = come_decrement_ref_count(word_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_604;
            info->sline=sline_605;
        }
        if(        is_type_name_flag_603) {
            multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value750=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_607=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
            name_608=(char*)come_increment_ref_count(multiple_assign_var30->v2);
            err_609=multiple_assign_var30->v3;
            /*c*/ come_call_finalizer3(__right_value750,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_609) {
                multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value751=err_msg(info,"parse type")));
                come_exception_var_c11_610=multiple_assign_var31->v1;
                Err_611=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                ((Err_611)?(puts(Err_611),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value751,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_611 = come_decrement_ref_count(Err_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(41,info);
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1810, "struct sNode");
            _inf_obj_value27=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value753=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1810, "struct sAlignAsNode*")),(struct sType*)come_increment_ref_count(type_607),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignAsNode_finalize;
            _inf_value27->clone=(void*)sAlignAsNode_clone;
            _inf_value27->compile=(void*)sAlignAsNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignAsNode_kind;
            __result_obj__398 = come_increment_ref_count(((struct sNode*)(__right_value757=_inf_value27)));
            /*c*/ come_call_finalizer3(type_607,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_608 = come_decrement_ref_count(name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value753,sAlignAsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value757) ? __right_value757 = come_decrement_ref_count(__right_value757, ((struct sNode*)__right_value757)->finalize, ((struct sNode*)__right_value757)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__398) ? __result_obj__398 = come_decrement_ref_count(__result_obj__398, ((struct sNode*)__result_obj__398)->finalize, ((struct sNode*)__result_obj__398)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__398;
            /*c*/ come_call_finalizer3(type_607,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_608 = come_decrement_ref_count(name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            exp_613=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1817, "struct sNode");
            _inf_obj_value28=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value760=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1817, "struct sAlignAsExpNode*")),(struct sNode*)come_increment_ref_count(exp_613),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value28->clone=(void*)sAlignAsExpNode_clone;
            _inf_value28->compile=(void*)sAlignAsExpNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsExpNode_kind;
            __result_obj__401 = come_increment_ref_count(((struct sNode*)(__right_value764=_inf_value28)));
            ((exp_613) ? exp_613 = come_decrement_ref_count(exp_613, ((struct sNode*)exp_613)->finalize, ((struct sNode*)exp_613)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value760,sAlignAsExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value764) ? __right_value764 = come_decrement_ref_count(__right_value764, ((struct sNode*)__right_value764)->finalize, ((struct sNode*)__right_value764)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__401) ? __result_obj__401 = come_decrement_ref_count(__result_obj__401, ((struct sNode*)__result_obj__401)->finalize, ((struct sNode*)__result_obj__401)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__401;
            ((exp_613) ? exp_613 = come_decrement_ref_count(exp_613, ((struct sNode*)exp_613)->finalize, ((struct sNode*)exp_613)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    __result_obj__402 = come_increment_ref_count(((struct sNode*)(__right_value765=string_node_v20(buf,head,head_sline,info))));
    ((__right_value765) ? __right_value765 = come_decrement_ref_count(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__402) ? __result_obj__402 = come_decrement_ref_count(__result_obj__402, ((struct sNode*)__result_obj__402)->finalize, ((struct sNode*)__result_obj__402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__402;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
struct sNewNode* __result_obj__313;
void* __right_value543 = (void*)0;
struct sNewNode* result_490;
void* __right_value544 = (void*)0;
char* __dec_obj135;
void* __right_value545 = (void*)0;
struct sType* __dec_obj136;
void* __right_value556 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj142;
struct sNewNode* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__313 = (void*)0;
        return __result_obj__313;
    }
    result_490=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*"));
    if(    self!=((void*)0)) {
        result_490->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj135=result_490->sname,
        result_490->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewNode_clone", 5, "char*"));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_490->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj136=result_490->type,
        result_490->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj142=result_490->initializer,
        result_490->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj142,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__320 = result_490;
    /*c*/ come_call_finalizer3(result_490,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__320;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__314;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_491;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_492;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__319;
    if(    self==((void*)0)) {
        __result_obj__314 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__314,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__314;
    }
    result_491=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_492=self->head;
    while(it_492!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_491,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_492->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_491,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_492->item)));
        }
        it_492=it_492->next;
    }
    __result_obj__319 = come_increment_ref_count(result_491);
    /*c*/ come_call_finalizer3(result_491,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__319,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__319;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__315;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__315 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__315,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value548 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_493;
struct tuple2$2char$phsNode$ph* __dec_obj137;
void* __right_value549 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_494;
struct tuple2$2char$phsNode$ph* __dec_obj138;
void* __right_value550 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_495;
struct tuple2$2char$phsNode$ph* __dec_obj139;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__316;
    if(    self->len==0) {
        litem_493=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value548=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_493->prev=((void*)0);
        litem_493->next=((void*)0);
        __dec_obj137=litem_493->item,
        litem_493->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj137,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_493;
        self->head=litem_493;
    }
    else if(    self->len==1) {
        litem_494=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value549=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_494->prev=self->head;
        litem_494->next=((void*)0);
        __dec_obj138=litem_494->item,
        litem_494->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj138,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_494;
        self->head->next=litem_494;
    }
    else {
        litem_495=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value550=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_495->prev=self->tail;
        litem_495->next=((void*)0);
        __dec_obj139=litem_495->item,
        litem_495->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj139,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_495;
        self->tail=litem_495;
    }
    self->len++;
    __result_obj__316 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__317;
void* __right_value551 = (void*)0;
struct tuple2$2char$phsNode$ph* result_496;
void* __right_value552 = (void*)0;
char* __dec_obj140;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj141;
struct tuple2$2char$phsNode$ph* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__317 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__317,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__317;
    }
    result_496=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj140=result_496->v1,
        result_496->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj141=result_496->v2,
        result_496->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__318 = come_increment_ref_count(result_496);
    /*c*/ come_call_finalizer3(result_496,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__318,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_503;
    result_503=0;
    result_503+=int_get_hash_key(((int)self->v1));
    result_503+=int_get_hash_key(((int)self->v2));
    return result_503;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj144;
struct sNode* __dec_obj145;
struct tuple2$2char$phsNode$ph* __result_obj__322;
    __dec_obj144=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj145=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__322 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__322,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
struct sDeleteNode* __result_obj__329;
void* __right_value591 = (void*)0;
struct sDeleteNode* result_510;
void* __right_value592 = (void*)0;
char* __dec_obj146;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj147;
struct sDeleteNode* __result_obj__330;
    if(    self==(void*)0) {
        __result_obj__329 = (void*)0;
        return __result_obj__329;
    }
    result_510=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*"));
    if(    self!=((void*)0)) {
        result_510->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj146=result_510->sname,
        result_510->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDeleteNode_clone", 5, "char*"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_510->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj147=result_510->node,
        result_510->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__330 = result_510;
    /*c*/ come_call_finalizer3(result_510,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__330;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
struct sBorrowNode* __result_obj__332;
void* __right_value598 = (void*)0;
struct sBorrowNode* result_512;
void* __right_value599 = (void*)0;
char* __dec_obj148;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj149;
struct sBorrowNode* __result_obj__333;
    if(    self==(void*)0) {
        __result_obj__332 = (void*)0;
        return __result_obj__332;
    }
    result_512=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*"));
    if(    self!=((void*)0)) {
        result_512->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj148=result_512->sname,
        result_512->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBorrowNode_clone", 5, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_512->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj149=result_512->node,
        result_512->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__333 = result_512;
    /*c*/ come_call_finalizer3(result_512,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__333;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
struct sCloneNode* __result_obj__335;
void* __right_value605 = (void*)0;
struct sCloneNode* result_514;
void* __right_value606 = (void*)0;
char* __dec_obj150;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj151;
struct sCloneNode* __result_obj__336;
    if(    self==(void*)0) {
        __result_obj__335 = (void*)0;
        return __result_obj__335;
    }
    result_514=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*"));
    if(    self!=((void*)0)) {
        result_514->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=result_514->sname,
        result_514->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCloneNode_clone", 5, "char*"));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_514->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj151=result_514->node,
        result_514->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__336 = result_514;
    /*c*/ come_call_finalizer3(result_514,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__336;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
struct sDupeNode* __result_obj__338;
void* __right_value612 = (void*)0;
struct sDupeNode* result_516;
void* __right_value613 = (void*)0;
char* __dec_obj152;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj153;
struct sDupeNode* __result_obj__339;
    if(    self==(void*)0) {
        __result_obj__338 = (void*)0;
        return __result_obj__338;
    }
    result_516=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*"));
    if(    self!=((void*)0)) {
        result_516->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_516->sname,
        result_516->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDupeNode_clone", 5, "char*"));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_516->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj153=result_516->node,
        result_516->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__339 = result_516;
    /*c*/ come_call_finalizer3(result_516,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__339;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
struct sDummyHeapNode* __result_obj__341;
void* __right_value619 = (void*)0;
struct sDummyHeapNode* result_518;
void* __right_value620 = (void*)0;
char* __dec_obj154;
void* __right_value621 = (void*)0;
struct sNode* __dec_obj155;
struct sDummyHeapNode* __result_obj__342;
    if(    self==(void*)0) {
        __result_obj__341 = (void*)0;
        return __result_obj__341;
    }
    result_518=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*"));
    if(    self!=((void*)0)) {
        result_518->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_518->sname,
        result_518->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDummyHeapNode_clone", 5, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_518->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj155=result_518->node,
        result_518->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__342 = result_518;
    /*c*/ come_call_finalizer3(result_518,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__342;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
struct sGCIncNode* __result_obj__344;
void* __right_value626 = (void*)0;
struct sGCIncNode* result_520;
void* __right_value627 = (void*)0;
char* __dec_obj156;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj157;
struct sGCIncNode* __result_obj__345;
    if(    self==(void*)0) {
        __result_obj__344 = (void*)0;
        return __result_obj__344;
    }
    result_520=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*"));
    if(    self!=((void*)0)) {
        result_520->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj156=result_520->sname,
        result_520->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCIncNode_clone", 5, "char*"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_520->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj157=result_520->node,
        result_520->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__345 = result_520;
    /*c*/ come_call_finalizer3(result_520,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__345;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
struct sGCDecNode* __result_obj__347;
void* __right_value633 = (void*)0;
struct sGCDecNode* result_522;
void* __right_value634 = (void*)0;
char* __dec_obj158;
void* __right_value635 = (void*)0;
struct sNode* __dec_obj159;
struct sGCDecNode* __result_obj__348;
    if(    self==(void*)0) {
        __result_obj__347 = (void*)0;
        return __result_obj__347;
    }
    result_522=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*"));
    if(    self!=((void*)0)) {
        result_522->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj158=result_522->sname,
        result_522->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNode_clone", 5, "char*"));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_522->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj159=result_522->node,
        result_522->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__348 = result_522;
    /*c*/ come_call_finalizer3(result_522,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__348;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
struct sGCDecNoFreeNode* __result_obj__350;
void* __right_value640 = (void*)0;
struct sGCDecNoFreeNode* result_524;
void* __right_value641 = (void*)0;
char* __dec_obj160;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj161;
struct sGCDecNoFreeNode* __result_obj__351;
    if(    self==(void*)0) {
        __result_obj__350 = (void*)0;
        return __result_obj__350;
    }
    result_524=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*"));
    if(    self!=((void*)0)) {
        result_524->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj160=result_524->sname,
        result_524->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNoFreeNode_clone", 5, "char*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_524->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj161=result_524->node,
        result_524->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__351 = result_524;
    /*c*/ come_call_finalizer3(result_524,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__351;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
struct sIsHeap* __result_obj__353;
void* __right_value649 = (void*)0;
struct sIsHeap* result_531;
void* __right_value650 = (void*)0;
char* __dec_obj162;
void* __right_value651 = (void*)0;
struct sType* __dec_obj163;
struct sIsHeap* __result_obj__354;
    if(    self==(void*)0) {
        __result_obj__353 = (void*)0;
        return __result_obj__353;
    }
    result_531=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*"));
    if(    self!=((void*)0)) {
        result_531->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_531->sname,
        result_531->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsHeap_clone", 5, "char*"));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_531->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj163=result_531->type,
        result_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__354 = result_531;
    /*c*/ come_call_finalizer3(result_531,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__354;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
struct sIsPointer* __result_obj__356;
void* __right_value658 = (void*)0;
struct sIsPointer* result_538;
void* __right_value659 = (void*)0;
char* __dec_obj164;
void* __right_value660 = (void*)0;
struct sType* __dec_obj165;
struct sIsPointer* __result_obj__357;
    if(    self==(void*)0) {
        __result_obj__356 = (void*)0;
        return __result_obj__356;
    }
    result_538=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*"));
    if(    self!=((void*)0)) {
        result_538->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_538->sname,
        result_538->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsPointer_clone", 5, "char*"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_538->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj165=result_538->type,
        result_538->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__357 = result_538;
    /*c*/ come_call_finalizer3(result_538,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__357;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
struct sSizeOfNode* __result_obj__369;
void* __right_value678 = (void*)0;
struct sSizeOfNode* result_553;
void* __right_value679 = (void*)0;
char* __dec_obj166;
void* __right_value680 = (void*)0;
struct sType* __dec_obj167;
struct sSizeOfNode* __result_obj__370;
    if(    self==(void*)0) {
        __result_obj__369 = (void*)0;
        return __result_obj__369;
    }
    result_553=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*"));
    if(    self!=((void*)0)) {
        result_553->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj166=result_553->sname,
        result_553->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfNode_clone", 5, "char*"));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_553->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj167=result_553->type,
        result_553->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__370 = result_553;
    /*c*/ come_call_finalizer3(result_553,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__370;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
struct sSizeOfExpNode* __result_obj__372;
void* __right_value686 = (void*)0;
struct sSizeOfExpNode* result_556;
void* __right_value687 = (void*)0;
char* __dec_obj170;
void* __right_value688 = (void*)0;
struct sNode* __dec_obj171;
struct sSizeOfExpNode* __result_obj__373;
    if(    self==(void*)0) {
        __result_obj__372 = (void*)0;
        return __result_obj__372;
    }
    result_556=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*"));
    if(    self!=((void*)0)) {
        result_556->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_556->sname,
        result_556->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfExpNode_clone", 5, "char*"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj171=result_556->exp,
        result_556->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__373 = result_556;
    /*c*/ come_call_finalizer3(result_556,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__373;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
struct sTypeOfNode* __result_obj__375;
void* __right_value695 = (void*)0;
struct sTypeOfNode* result_567;
void* __right_value696 = (void*)0;
char* __dec_obj172;
void* __right_value697 = (void*)0;
struct sType* __dec_obj173;
struct sTypeOfNode* __result_obj__376;
    if(    self==(void*)0) {
        __result_obj__375 = (void*)0;
        return __result_obj__375;
    }
    result_567=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*"));
    if(    self!=((void*)0)) {
        result_567->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj172=result_567->sname,
        result_567->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfNode_clone", 5, "char*"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_567->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj173=result_567->type,
        result_567->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__376 = result_567;
    /*c*/ come_call_finalizer3(result_567,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__376;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
struct sTypeOfExpNode* __result_obj__378;
void* __right_value703 = (void*)0;
struct sTypeOfExpNode* result_570;
void* __right_value704 = (void*)0;
char* __dec_obj176;
void* __right_value705 = (void*)0;
struct sNode* __dec_obj177;
struct sTypeOfExpNode* __result_obj__379;
    if(    self==(void*)0) {
        __result_obj__378 = (void*)0;
        return __result_obj__378;
    }
    result_570=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*"));
    if(    self!=((void*)0)) {
        result_570->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj176=result_570->sname,
        result_570->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfExpNode_clone", 5, "char*"));
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj177=result_570->exp,
        result_570->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__379 = result_570;
    /*c*/ come_call_finalizer3(result_570,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__379;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
struct sDynamicTypeOf* __result_obj__381;
void* __right_value711 = (void*)0;
struct sDynamicTypeOf* result_574;
void* __right_value712 = (void*)0;
char* __dec_obj180;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj181;
struct sDynamicTypeOf* __result_obj__382;
    if(    self==(void*)0) {
        __result_obj__381 = (void*)0;
        return __result_obj__381;
    }
    result_574=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*"));
    if(    self!=((void*)0)) {
        result_574->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result_574->sname,
        result_574->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDynamicTypeOf_clone", 5, "char*"));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_574->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj181=result_574->exp,
        result_574->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__382 = result_574;
    /*c*/ come_call_finalizer3(result_574,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__382;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
struct sAlignOfNode* __result_obj__384;
void* __right_value720 = (void*)0;
struct sAlignOfNode* result_585;
void* __right_value721 = (void*)0;
char* __dec_obj182;
void* __right_value722 = (void*)0;
struct sType* __dec_obj183;
struct sAlignOfNode* __result_obj__385;
    if(    self==(void*)0) {
        __result_obj__384 = (void*)0;
        return __result_obj__384;
    }
    result_585=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*"));
    if(    self!=((void*)0)) {
        result_585->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_585->sname,
        result_585->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode_clone", 5, "char*"));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_585->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj183=result_585->type,
        result_585->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__385 = result_585;
    /*c*/ come_call_finalizer3(result_585,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__385;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
struct sAlignOfExpNode* __result_obj__387;
void* __right_value728 = (void*)0;
struct sAlignOfExpNode* result_588;
void* __right_value729 = (void*)0;
char* __dec_obj186;
void* __right_value730 = (void*)0;
struct sNode* __dec_obj187;
struct sAlignOfExpNode* __result_obj__388;
    if(    self==(void*)0) {
        __result_obj__387 = (void*)0;
        return __result_obj__387;
    }
    result_588=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*"));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj186=result_588->sname,
        result_588->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode_clone", 5, "char*"));
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj187=result_588->exp,
        result_588->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__388 = result_588;
    /*c*/ come_call_finalizer3(result_588,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__388;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
struct sAlignOfNode2* __result_obj__390;
void* __right_value737 = (void*)0;
struct sAlignOfNode2* result_599;
void* __right_value738 = (void*)0;
char* __dec_obj188;
void* __right_value739 = (void*)0;
struct sType* __dec_obj189;
struct sAlignOfNode2* __result_obj__391;
    if(    self==(void*)0) {
        __result_obj__390 = (void*)0;
        return __result_obj__390;
    }
    result_599=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*"));
    if(    self!=((void*)0)) {
        result_599->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj188=result_599->sname,
        result_599->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode2_clone", 5, "char*"));
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_599->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj189=result_599->type,
        result_599->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__391 = result_599;
    /*c*/ come_call_finalizer3(result_599,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__391;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
struct sAlignOfExpNode2* __result_obj__393;
void* __right_value745 = (void*)0;
struct sAlignOfExpNode2* result_602;
void* __right_value746 = (void*)0;
char* __dec_obj192;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj193;
struct sAlignOfExpNode2* __result_obj__394;
    if(    self==(void*)0) {
        __result_obj__393 = (void*)0;
        return __result_obj__393;
    }
    result_602=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*"));
    if(    self!=((void*)0)) {
        result_602->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj192=result_602->sname,
        result_602->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode2_clone", 5, "char*"));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_602->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj193=result_602->exp,
        result_602->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__394 = result_602;
    /*c*/ come_call_finalizer3(result_602,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__394;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
struct sAlignAsNode* __result_obj__396;
void* __right_value754 = (void*)0;
struct sAlignAsNode* result_612;
void* __right_value755 = (void*)0;
char* __dec_obj194;
void* __right_value756 = (void*)0;
struct sType* __dec_obj195;
struct sAlignAsNode* __result_obj__397;
    if(    self==(void*)0) {
        __result_obj__396 = (void*)0;
        return __result_obj__396;
    }
    result_612=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*"));
    if(    self!=((void*)0)) {
        result_612->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj194=result_612->sname,
        result_612->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsNode_clone", 5, "char*"));
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_612->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj195=result_612->type,
        result_612->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj195,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__397 = result_612;
    /*c*/ come_call_finalizer3(result_612,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__397;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
struct sAlignAsExpNode* __result_obj__399;
void* __right_value761 = (void*)0;
struct sAlignAsExpNode* result_614;
void* __right_value762 = (void*)0;
char* __dec_obj196;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj197;
struct sAlignAsExpNode* __result_obj__400;
    if(    self==(void*)0) {
        __result_obj__399 = (void*)0;
        return __result_obj__399;
    }
    result_614=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*"));
    if(    self!=((void*)0)) {
        result_614->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj196=result_614->sname,
        result_614->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsExpNode_clone", 5, "char*"));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_614->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj197=result_614->exp,
        result_614->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__400 = result_614;
    /*c*/ come_call_finalizer3(result_614,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__400;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value766 = (void*)0;
struct sNode* __result_obj__403;
void* __right_value767 = (void*)0;
struct sNode* __result_obj__404;
void* __right_value768 = (void*)0;
struct sNode* __result_obj__405;
_Bool come_c_615;
void* __right_value769 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c12_616=0;
char* Err_617=0;
void* __right_value770 = (void*)0;
struct sNode* __result_obj__406;
void* __right_value771 = (void*)0;
struct sNode* __result_obj__407;
    if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__403 = come_increment_ref_count(((struct sNode*)(__right_value766=create_nothing_node(info))));
            ((__right_value766) ? __right_value766 = come_decrement_ref_count(__right_value766, ((struct sNode*)__right_value766)->finalize, ((struct sNode*)__right_value766)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__403;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__404 = come_increment_ref_count(((struct sNode*)(__right_value767=create_nothing_node(info))));
            ((__right_value767) ? __right_value767 = come_decrement_ref_count(__right_value767, ((struct sNode*)__right_value767)->finalize, ((struct sNode*)__right_value767)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__404) ? __result_obj__404 = come_decrement_ref_count(__result_obj__404, ((struct sNode*)__result_obj__404)->finalize, ((struct sNode*)__result_obj__404)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__404;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__405 = come_increment_ref_count(((struct sNode*)(__right_value768=create_nothing_node(info))));
            ((__right_value768) ? __right_value768 = come_decrement_ref_count(__right_value768, ((struct sNode*)__right_value768)->finalize, ((struct sNode*)__right_value768)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__405) ? __result_obj__405 = come_decrement_ref_count(__result_obj__405, ((struct sNode*)__result_obj__405)->finalize, ((struct sNode*)__result_obj__405)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__405;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_615=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_615;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value769=err_msg(info,"invalid using")));
            come_exception_var_c12_616=multiple_assign_var32->v1;
            Err_617=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_617)?(puts(Err_617),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value769,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_617 = come_decrement_ref_count(Err_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__406 = come_increment_ref_count(((struct sNode*)(__right_value770=create_nothing_node(info))));
        ((__right_value770) ? __right_value770 = come_decrement_ref_count(__right_value770, ((struct sNode*)__right_value770)->finalize, ((struct sNode*)__right_value770)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__406) ? __result_obj__406 = come_decrement_ref_count(__result_obj__406, ((struct sNode*)__result_obj__406)->finalize, ((struct sNode*)__result_obj__406)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__406;
    }
    __result_obj__407 = come_increment_ref_count(((struct sNode*)(__right_value771=top_level_v93(buf,head,head_sline,info))));
    ((__right_value771) ? __right_value771 = come_decrement_ref_count(__right_value771, ((struct sNode*)__right_value771)->finalize, ((struct sNode*)__right_value771)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__407) ? __result_obj__407 = come_decrement_ref_count(__result_obj__407, ((struct sNode*)__result_obj__407)->finalize, ((struct sNode*)__result_obj__407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__407;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value29;
struct sImplementsNode* _inf_obj_value29;
void* __right_value778 = (void*)0;
struct sNode* __result_obj__410;
    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1901, "struct sNode");
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value773=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1901, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    __result_obj__410 = come_increment_ref_count(((struct sNode*)(__right_value778=_inf_value29)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value773,sImplementsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value778) ? __right_value778 = come_decrement_ref_count(__right_value778, ((struct sNode*)__right_value778)->finalize, ((struct sNode*)__right_value778)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__410) ? __result_obj__410 = come_decrement_ref_count(__result_obj__410, ((struct sNode*)__result_obj__410)->finalize, ((struct sNode*)__result_obj__410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__410;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
struct sImplementsNode* __result_obj__408;
void* __right_value774 = (void*)0;
struct sImplementsNode* result_618;
void* __right_value775 = (void*)0;
char* __dec_obj198;
void* __right_value776 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value777 = (void*)0;
struct sType* __dec_obj200;
struct sImplementsNode* __result_obj__409;
    if(    self==(void*)0) {
        __result_obj__408 = (void*)0;
        return __result_obj__408;
    }
    result_618=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*"));
    if(    self!=((void*)0)) {
        result_618->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=result_618->sname,
        result_618->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sImplementsNode_clone", 5, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj199=result_618->obj_exp,
        result_618->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj200=result_618->inf_type,
        result_618->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
        /*b*/ come_call_finalizer3(__dec_obj200,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__409 = result_618;
    /*c*/ come_call_finalizer3(result_618,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__409;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __right_value779 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* type3_619=0;
char* name2_620=0;
_Bool err_621=0;
void* __right_value780 = (void*)0;
struct sType* inf_type_622;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value783 = (void*)0;
struct sNode* __result_obj__411;
void* __right_value784 = (void*)0;
struct sNode* __result_obj__412;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value779=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_619=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
        name2_620=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        err_621=multiple_assign_var33->v3;
        /*c*/ come_call_finalizer3(__right_value779,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_621) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_622=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_619));
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1918, "struct sNode");
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value782=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1918, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_622),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        __result_obj__411 = come_increment_ref_count(((struct sNode*)(__right_value783=_inf_value30)));
        /*c*/ come_call_finalizer3(type3_619,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name2_620 = come_decrement_ref_count(name2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(inf_type_622,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value782,sImplementsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value783) ? __right_value783 = come_decrement_ref_count(__right_value783, ((struct sNode*)__right_value783)->finalize, ((struct sNode*)__right_value783)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__411;
        /*c*/ come_call_finalizer3(type3_619,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name2_620 = come_decrement_ref_count(name2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(inf_type_622,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result_obj__412 = come_increment_ref_count(((struct sNode*)(__right_value784=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value784) ? __right_value784 = come_decrement_ref_count(__right_value784, ((struct sNode*)__right_value784)->finalize, ((struct sNode*)__right_value784)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__412) ? __result_obj__412 = come_decrement_ref_count(__result_obj__412, ((struct sNode*)__result_obj__412)->finalize, ((struct sNode*)__result_obj__412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__412;
}

