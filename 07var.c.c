/// previous struct definition ///
struct __locale_struct;

struct tm;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

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

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
extern _Bool gComeBareMetal;
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
    _Bool (*no_mutex)(void*);
};

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
    _Bool mUniq;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
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
    _Bool mTask;
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
    _Bool mDefferRightValue;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    _Bool mComma;
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
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
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
    _Bool mConstFun;
    char* mAttribute;
    char* mFunAttribute;
    _Bool mGenericsFun;
    _Bool mImmutable;
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
    _Bool mConstFun;
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
    struct sType* mObjType;
    char* mObjValue;
    struct sVar* mObjVar;
    _Bool mNoFree;
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
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
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
    struct map$2char$phsFun$ph* uniq_funcs;
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
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2int$bool$
{
    int v1;
    _Bool v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
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

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
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
    _Bool comma;
    _Bool val_;
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
    _Bool on_load_calling;
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
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
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
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
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
unsigned int _Bool_get_hash_key(_Bool value);
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
_Bool _Bool_clone(_Bool self);
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
_Bool xiswascii(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
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
int _Bool_compare(_Bool left, _Bool right);
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
void FILE_on_drop(struct _IO_FILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
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
void int_times(int self, void* parent, void (*block)(void*,int));
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma, _Bool val_);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
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
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize_with_values(struct list$1tuple2$2char$phsNode$ph$ph* self, int num_value, struct tuple2$2char$phsNode$ph** values);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
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
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
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
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma, _Bool val_){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
void* __right_value39 = (void*)0;
struct sType* __dec_obj25;
struct sNode* __dec_obj26;
void* __right_value40 = (void*)0;
struct list$1char$ph* __dec_obj27;
void* __right_value52 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj34;
char* __dec_obj35;
struct sStoreNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj25=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj26=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    ((void*)0);
    __dec_obj27=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    ((void*)0);
    __dec_obj34=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj35=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->comma=comma;
    self->val_=val_;
    __result_obj__23 = (struct sStoreNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreNode_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value53 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value53=__builtin_string("sStoreNode"))));
    (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
struct sVar* var__39;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct sType* type_60;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_61;
struct tuple3$3sType$phchar$phsNode$ph* it_64;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var1 = (void*)0;
struct sType* type_67=0;
char* var_name_68=0;
struct sNode* right_value_69=0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
_Bool __result_obj__40;
void* __right_value66 = (void*)0;
struct sType* left_type_70;
_Bool Value_71;
_Bool __result_obj__41;
void* __right_value67 = (void*)0;
struct CVALUE* come_value_72;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_73;
_Bool Value_74;
_Bool __result_obj__42;
void* __right_value73 = (void*)0;
struct CVALUE* right_value_75;
struct sType* right_type_76;
int i_77;
struct list$1char$ph* o2_saved_78;
char* it_81;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct sVar* var__84;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sType* right_type2_85;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
char* multiple_var_name_93;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
char* __dec_obj36;
struct list$1char$ph* o2_saved_94;
char* it_95;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct sType* right_type2_96;
struct sVar* var__97;
void* __right_value85 = (void*)0;
struct sType* var_type_98;
void* __right_value86 = (void*)0;
struct sType* left_type_99;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct CVALUE* right_value2_100;
void* __right_value89 = (void*)0;
char* __dec_obj37;
void* __right_value90 = (void*)0;
struct sType* __dec_obj38;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
struct CVALUE* come_value_101;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
char* __dec_obj39;
void* __right_value96 = (void*)0;
char* __dec_obj40;
void* __right_value97 = (void*)0;
struct sType* __dec_obj41;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct CVALUE* come_value_102;
void* __right_value103 = (void*)0;
char* __dec_obj42;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct sVar* var__106;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sType* type_107;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
_Bool __result_obj__54;
void* __right_value115 = (void*)0;
struct sType* left_type_108;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct list$1sNode$ph* o2_saved_109;
struct sNode* it_112;
_Bool Value_115;
void* __right_value118 = (void*)0;
_Bool __result_obj__61;
void* __right_value119 = (void*)0;
struct CVALUE* come_value_116;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct CVALUE* come_value_117;
void* __right_value124 = (void*)0;
char* __dec_obj46;
void* __right_value125 = (void*)0;
struct sType* __dec_obj47;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct sVar* var__121;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sType* type_122;
void* __right_value134 = (void*)0;
_Bool Value_123;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
_Bool array_initializer_124;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
_Bool struct_initializer_125;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
_Bool new_channel_126;
void* __right_value141 = (void*)0;
struct CVALUE* right_value_127;
struct sType* right_type_128;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sType* var_type_129;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct sType* left_type_130;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sVar* var__131;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value151 = (void*)0;
char* __dec_obj51;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sVar* var__133;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct CVALUE* come_value_134;
void* __right_value157 = (void*)0;
char* __dec_obj52;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct CVALUE* come_value_135;
void* __right_value163 = (void*)0;
char* __dec_obj53;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct CVALUE* come_value_136;
void* __right_value169 = (void*)0;
char* __dec_obj54;
void* __right_value170 = (void*)0;
struct sType* __dec_obj55;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct CVALUE* come_value_137;
void* __right_value174 = (void*)0;
char* __dec_obj56;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct sType* __dec_obj57;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct CVALUE* come_value_138;
void* __right_value183 = (void*)0;
char* __dec_obj58;
void* __right_value184 = (void*)0;
struct sType* __dec_obj59;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
_Bool __result_obj__63;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct CVALUE* come_value_139;
void* __right_value191 = (void*)0;
char* __dec_obj60;
void* __right_value192 = (void*)0;
struct sType* __dec_obj61;
_Bool Value_140;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
_Bool new_channel_141;
void* __right_value195 = (void*)0;
struct CVALUE* right_value_142;
struct sType* right_type_143;
struct sClass* current_stack_frame_struct_144;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
_Bool _condtional_value_X2;
struct sVar* parent_var_145;
struct sType* left_type_146;
void* __right_value198 = (void*)0;
_Bool __result_obj__64;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
char* c_value_147;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct CVALUE* come_value_148;
void* __right_value204 = (void*)0;
char* __dec_obj62;
void* __right_value205 = (void*)0;
char* __dec_obj63;
void* __right_value206 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__65;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
char* c_value_149;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct CVALUE* come_value_150;
void* __right_value212 = (void*)0;
char* __dec_obj65;
void* __right_value213 = (void*)0;
char* __dec_obj66;
void* __right_value214 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__66;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
_Bool __result_obj__67;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct CVALUE* come_value_151;
void* __right_value220 = (void*)0;
char* __dec_obj68;
void* __right_value221 = (void*)0;
char* __dec_obj69;
void* __right_value222 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__68;
struct sVar* var__152;
void* __right_value223 = (void*)0;
_Bool __result_obj__69;
void* __right_value224 = (void*)0;
struct sType* __dec_obj71;
void* __right_value225 = (void*)0;
struct sType* left_type_153;
void* __right_value226 = (void*)0;
_Bool __result_obj__70;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct CVALUE* come_value_154;
void* __right_value231 = (void*)0;
char* __dec_obj72;
void* __right_value232 = (void*)0;
struct sType* __dec_obj73;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct CVALUE* come_value_155;
void* __right_value237 = (void*)0;
char* __dec_obj74;
void* __right_value238 = (void*)0;
struct sType* __dec_obj75;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct CVALUE* come_value_156;
void* __right_value243 = (void*)0;
char* __dec_obj76;
void* __right_value244 = (void*)0;
struct sType* __dec_obj77;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct CVALUE* come_value_157;
void* __right_value247 = (void*)0;
char* __dec_obj78;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sType* __dec_obj79;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
_Bool __result_obj__71;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_158;
void* __right_value256 = (void*)0;
char* __dec_obj80;
void* __right_value257 = (void*)0;
struct sType* __dec_obj81;
    if(    self->multiple_declare    ) {
        var__39=((struct sVar*)(__right_value55=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value54=__builtin_string(self->name))),((void*)0))));
        (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__39        ) {
            if(            var__39->mType->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__39->mType)),var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value57=__builtin_string(self->name))));
            (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        self->type==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value58=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            return (_Bool)1;
        }
        type_60=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        for(        o2_saved_61=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_64=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin((o2_saved_61))        ;        !list$1tuple3$3sType$phchar$phsNode$ph$ph_end((o2_saved_61))        ;        it_64=list$1tuple3$3sType$phchar$phsNode$ph$ph_next((o2_saved_61))        ){
            multiple_assign_var1=it_64;
            type_67=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_68=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_69=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__39=((struct sVar*)(__right_value61=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value60=__builtin_string(var_name_68))),((void*)0))));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            var__39            ) {
                if(                var__39->mType->mHeap                ) {
                    free_object((struct sType*)come_increment_ref_count(sType_clone(var__39->mType)),var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value63=__builtin_string(var_name_68))));
                (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_variable_to_table(var_name_68,(struct sType*)come_increment_ref_count(sType_clone(type_67)),info,(_Bool)0,self->comma);
            var__39=get_variable_from_table(info->lv_table,var_name_68);
            if(            var__39==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value65=err_msg(info,"var not found(%s)(ZY) at definition of variable",it_64)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__40 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__40;
            }
            left_type_70=(struct sType*)come_increment_ref_count(sType_clone(var__39->mType));
            if(            right_value_69            ) {
                Value_71=node_compile(right_value_69,info);
                if(                !Value_71                ) {
                    __result_obj__41 = (_Bool)0;
                    come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, type_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__41;
                }
                else {
                }
                come_value_72=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value68=make_define_var(left_type_70,var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_72->c_value);
                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_70->mNoCallingDestructor                ) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__39->mCValueName,((char*)(__right_value69=make_type_name_string(left_type_70,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value70=make_define_var(left_type_70,var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    self->multiple_assign    ) {
        buf_73=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 85, "struct buffer*"))));
        Value_74=node_compile(self->right_value,info);
        if(        !Value_74        ) {
            __result_obj__42 = (_Bool)0;
            come_call_finalizer(buffer_finalize, buf_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__42;
        }
        else {
        }
        right_value_75=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_76=right_value_75->type;
        if(        right_type_76->mNoSolvedGenericsType        ) {
            right_type_76=right_type_76->mNoSolvedGenericsType;
        }
        i_77=0;
        for(        o2_saved_78=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_81=list$1char$ph_begin((o2_saved_78))        ;        !list$1char$ph_end((o2_saved_78))        ;        it_81=list$1char$ph_next((o2_saved_78))        ){
            if(            i_77<list$1sType$ph_length(right_type_76->mGenericsTypes)            ) {
                var__84=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value74=__builtin_string(it_81))),((void*)0)));
                (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                var__84                ) {
                    if(                    var__84->mType->mHeap                    ) {
                        free_object((struct sType*)come_increment_ref_count(sType_clone(var__84->mType)),var__84->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value77=__builtin_string(it_81))));
                    (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                right_type2_85=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(right_type_76->mGenericsTypes,i_77));
                add_variable_to_table(it_81,(struct sType*)come_increment_ref_count(sType_clone(right_type2_85)),info,(_Bool)0,self->comma);
                come_call_finalizer(sVar_finalize, var__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            i_77++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        static int num_multiple_var_92=0;
        multiple_var_name_93=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_92));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value81=make_define_var(right_value_75->type,multiple_var_name_93,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->prohibits_output_last_code        ) {
            buffer_append_format(buf_73,"%s=%s",multiple_var_name_93,right_value_75->c_value);
        }
        else if(        info->comma_instead_of_semicolon        ) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_93,right_value_75->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_93,right_value_75->c_value);
        }
        __dec_obj36=right_value_75->c_value,
        right_value_75->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name_93, "07var.c", 133, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        i_77=0;
        for(        o2_saved_94=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_95=list$1char$ph_begin((o2_saved_94))        ;        !list$1char$ph_end((o2_saved_94))        ;        it_95=list$1char$ph_next((o2_saved_94))        ){
            if(            i_77<list$1sType$ph_length(right_type_76->mGenericsTypes)            ) {
                right_type2_96=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value83=list$1sType$ph_operator_load_element(right_type_76->mGenericsTypes,i_77)))));
                come_call_finalizer(sType_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                var__97=get_variable_from_table(info->lv_table,it_95);
                var_type_98=(struct sType*)come_increment_ref_count(sType_clone(var__97->mType));
                var_type_98->mStatic=(_Bool)0;
                left_type_99=(struct sType*)come_increment_ref_count(sType_clone(var__97->mType));
                right_value2_100=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 147, "struct CVALUE*"))));
                __dec_obj37=right_value2_100->c_value,
                right_value2_100->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_75->c_value,i_77+1));
                __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj38=right_value2_100->type,
                right_value2_100->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_96));
                come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                right_value2_100->var=((void*)0);
                come_value_101=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 153, "struct CVALUE*"))));
                check_assign_type(((char*)(__right_value94=xsprintf("\%s is assining to}",((char*)(__right_value93=string_to_string(self->name)))))),left_type_99,right_type2_96,come_value_101,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                right_type2_96->mHeap&&left_type_99->mHeap&&left_type_99->mPointerNum>0&&right_type2_96->mPointerNum>0                ) {
                    std_move(left_type_99,right_type2_96,right_value2_100,info,(_Bool)0);
                    __dec_obj39=come_value_101->c_value,
                    come_value_101->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__97->mCValueName,right_value2_100->c_value));
                    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj40=come_value_101->c_value,
                    come_value_101->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__97->mCValueName,right_value2_100->c_value));
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                __dec_obj41=come_value_101->type,
                come_value_101->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_99));
                come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value_101->var=var__97;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value98=make_define_var(left_type_99,var__97->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                info->prohibits_output_last_code                ) {
                    buffer_append_format(buf_73,"%s,\n",come_value_101->c_value);
                }
                else if(                info->comma_instead_of_semicolon                ) {
                    add_come_code(info,"%s,\n",come_value_101->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_101->c_value);
                }
                come_call_finalizer(sType_finalize, right_type2_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, var_type_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value2_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            i_77++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        (_condtional_value_X1=(string_operator_not_equals(((char*)(__right_value100=buffer_to_string(buf_73))),""))),        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X1        ) {
            come_value_102=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 185, "struct CVALUE*"))));
            __dec_obj42=come_value_102->c_value,
            come_value_102->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_73));
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
            come_call_finalizer(CVALUE_finalize, come_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(buffer_finalize, buf_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (multiple_var_name_93 = come_decrement_ref_count(multiple_var_name_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)    ) {
        var__106=((struct sVar*)(__right_value108=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value107=__builtin_string(self->name))),((void*)0))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value108, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__106        ) {
            if(            var__106->mType->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__106->mType)),var__106->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value110=__builtin_string(self->name))));
            (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        self->type==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value111=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            return (_Bool)1;
        }
        type_107=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_107)),info,(_Bool)0,self->comma);
        var__106=get_variable_from_table(info->lv_table,self->name);
        if(        var__106==((void*)0)        ) {
            var__106=get_variable_from_table(info->gv_table,self->name);
            if(            var__106==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value114=err_msg(info,"var not found(%s)(Y) at definition of variable",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value114, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__54 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__54;
            }
        }
        left_type_108=(struct sType*)come_increment_ref_count(sType_clone(var__106->mType));
        if(        left_type_108->mChannel        ) {
            if(            string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_108->mNoCallingDestructor            ) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__106->mCValueName);
            }
        }
        else if(        list$1sNode$ph_length(left_type_108->mArrayNum)>0        ) {
            add_come_code(info,"%s;\n",((char*)(__right_value116=make_define_var(left_type_108,var__106->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_108->mNoCallingDestructor            ) {
                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__106->mCValueName,((char*)(__right_value117=make_type_name_string(left_type_108,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            for(            o2_saved_109=(struct list$1sNode$ph*)come_increment_ref_count((left_type_108->mArrayNum)),it_112=list$1sNode$ph_begin((o2_saved_109))            ;            !list$1sNode$ph_end((o2_saved_109))            ;            it_112=list$1sNode$ph_next((o2_saved_109))            ){
                Value_115=node_compile(it_112,info);
                if(                !Value_115                ) {
                    ((struct tuple2$2int$bool$*)(__right_value118=err_msg(info,"invalid array num")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__61 = (_Bool)1;
                    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, type_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, left_type_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__61;
                }
                else {
                }
                come_value_116=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"*(%s)",come_value_116->c_value);
                come_call_finalizer(CVALUE_finalize, come_value_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value120=make_define_var(left_type_108,var__106->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            left_type_108->mPointerNum>0            ) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__106->mCValueName);
            }
            else {
                if(                string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_108->mNoCallingDestructor                ) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__106->mCValueName,((char*)(__right_value121=make_type_name_string(left_type_108,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        if(        !info->m5stack_cpp        ) {
            come_value_117=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 275, "struct CVALUE*"))));
            __dec_obj46=come_value_117->c_value,
            come_value_117->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__106->mCValueName));
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj47=come_value_117->type,
            come_value_117->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_108));
            come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_117->var=var__106;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
            come_call_finalizer(CVALUE_finalize, come_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        !left_type_108->mClass->mNumber&&left_type_108->mPointerNum==0        ) {
            var__106->mType->mAllocaValue=(_Bool)1;
            if(            var__106->mType->mNoSolvedGenericsType            ) {
                var__106->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer(sType_finalize, type_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    self->alloc    ) {
        var__121=((struct sVar*)(__right_value130=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value129=__builtin_string(self->name))),((void*)0))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value130, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__121        ) {
            if(            var__121->mType->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__121->mType)),var__121->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value132=__builtin_string(self->name))));
            (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        self->type==((void*)0)        ) {
        }
        else {
            type_122=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_122)),info,(_Bool)0,self->comma);
            come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        Value_123=node_compile(self->right_value,info);
        if(        !Value_123        ) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_124=string_operator_equals(((char*)(__right_value136=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        struct_initializer_125=string_operator_equals(((char*)(__right_value138=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        new_channel_126=string_operator_equals(((char*)(__right_value140=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        right_value_127=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_128=right_value_127->type;
        if(        self->type==((void*)0)        ) {
            if(            self->val_            ) {
                right_type_128->mImmutable=(_Bool)1;
            }
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_128)),info,(_Bool)0,self->comma);
        }
        else {
        }
        var__121=get_variable_from_table(info->lv_table,self->name);
        var_type_129=(struct sType*)come_increment_ref_count(sType_clone(var__121->mType));
        var_type_129->mStatic=(_Bool)0;
        if(        !array_initializer_124&&!struct_initializer_125&&!var__121->mType->mStatic&&!var_type_129->mConstant&&list$1sNode$ph_length(var_type_129->mArrayNum)==0        ) {
            if(            var_type_129->mClass->mNumber            ) {
            }
            else if(            (var_type_129->mClass->mStruct||var_type_129->mClass->mUnion||var_type_129->mClass->mEnum)||var_type_129->mPointerNum>0            ) {
            }
            else {
                if(                string_operator_not_equals(info->come_fun->mName,"memset")&&!var_type_129->mNoCallingDestructor                ) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__121->mCValueName,((char*)(__right_value144=make_type_name_string(var_type_129,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        left_type_130=(struct sType*)come_increment_ref_count(sType_clone(var__121->mType));
        if(        array_initializer_124        ) {
            var__131=((struct sVar*)(__right_value147=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value146=__builtin_string(self->name))),((void*)0))));
            (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value148=make_define_var(var__131->mType,var__131->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_127->c_value);
            (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_132=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 359, "struct CVALUE*"))));
            __dec_obj51=come_value_132->c_value,
            come_value_132->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        struct_initializer_125        ) {
            var__133=((struct sVar*)(__right_value153=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value152=__builtin_string(self->name))),((void*)0))));
            (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value154=make_define_var(var__133->mType,var__133->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_127->c_value);
            (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_134=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 376, "struct CVALUE*"))));
            __dec_obj52=come_value_134->c_value,
            come_value_134->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_134));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        var__121->mType->mStatic||var__121->mType->mConstant        ) {
            check_assign_type(((char*)(__right_value159=xsprintf("\%s is assining to",((char*)(__right_value158=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            add_come_code(info,"%s=%s;\n",((char*)(__right_value160=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_127->c_value);
            (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_135=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 394, "struct CVALUE*"))));
            __dec_obj53=come_value_135->c_value,
            come_value_135->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        right_type_128->mHeap&&left_type_130->mHeap&&left_type_130->mPointerNum>0&&right_type_128->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value165=xsprintf("\%s is assining to",((char*)(__right_value164=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            std_move(left_type_130,right_type_128,right_value_127,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value166=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_136=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 415, "struct CVALUE*"))));
            __dec_obj54=come_value_136->c_value,
            come_value_136->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__121->mCValueName,right_value_127->c_value));
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj55=come_value_136->type,
            come_value_136->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_130));
            come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_136->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_136));
            add_come_last_code(info,"%s",come_value_136->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_130->mChannel&&new_channel_126        ) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value171=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_130->mNoCallingDestructor            ) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__121->mCValueName);
            }
            come_value_137=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 431, "struct CVALUE*"))));
            __dec_obj56=come_value_137->c_value,
            come_value_137->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__121->mCValueName));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj57=come_value_137->type,
            come_value_137->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 433, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_137->type->mPointerNum=1;
            come_value_137->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_137));
            add_come_last_code(info,"%s",come_value_137->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_130->mPointerNum>0&&left_type_130->mHeap&&string_operator_equals(right_type_128->mClass->mName,"void")&&right_type_128->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value179=xsprintf("\%s is assining to",((char*)(__right_value178=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value180=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_138=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 447, "struct CVALUE*"))));
            __dec_obj58=come_value_138->c_value,
            come_value_138->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__121->mCValueName,right_value_127->c_value));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj59=come_value_138->type,
            come_value_138->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_130));
            come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_138->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
            add_come_last_code(info,"%s",come_value_138->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value186=xsprintf("\%s is assining to",((char*)(__right_value185=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            right_type_128->mHeap&&left_type_130->mHeap&&left_type_130->mPointerNum>0&&right_type_128->mPointerNum>0            ) {
                std_move(left_type_130,right_type_128,right_value_127,info,(_Bool)0);
            }
            if(            left_type_130->mHeap&&!right_value_127->type->mHeap            ) {
                ((struct tuple2$2int$bool$*)(__right_value187=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value187, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__63 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, var_type_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__63;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value188=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_139=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 479, "struct CVALUE*"))));
            __dec_obj60=come_value_139->c_value,
            come_value_139->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__121->mCValueName,right_value_127->c_value));
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj61=come_value_139->type,
            come_value_139->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_130));
            come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_139->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
            add_come_last_code(info,"%s",come_value_139->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, var_type_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        Value_140=node_compile(self->right_value,info);
        if(        !Value_140        ) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_141=string_operator_equals(((char*)(__right_value194=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        right_value_142=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_143=right_value_142->type;
        current_stack_frame_struct_144=info->current_stack_frame_struct;
        if(        (_condtional_value_X2=(current_stack_frame_struct_144&&((struct sVar*)(__right_value197=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value196=__builtin_string(self->name))),((void*)0))))==((void*)0))),        (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        come_call_finalizer(sVar_finalize, __right_value197, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X2        ) {
            parent_var_145=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_145!=((void*)0)            ) {
                if(                string_operator_not_equals(parent_var_145->mFunName,info->come_fun->mName)                ) {
                    left_type_146=parent_var_145->mType;
                    if(                    left_type_146->mImmutable                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value198=err_msg(info,"Immutable object can't change")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        __result_obj__64 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__64;
                    }
                    if(                    left_type_146->mPointerNum>0&&right_type_143->mPointerNum>0&&right_type_143->mHeap&&left_type_146->mHeap                    ) {
                        check_assign_type(((char*)(__right_value200=xsprintf("\%s is assigning to",((char*)(__right_value199=string_to_string(self->name)))))),left_type_146,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        c_value_147=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_145->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var_145->mType),c_value_147,info,(_Bool)0);
                        std_move(left_type_146,right_type_143,right_value_142,info,(_Bool)0);
                        come_value_148=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 522, "struct CVALUE*"))));
                        if(                        parent_var_145->mType->mOriginIsArray                        ) {
                            __dec_obj62=come_value_148->c_value,
                            come_value_148->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            __dec_obj63=come_value_148->c_value,
                            come_value_148->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        __dec_obj64=come_value_148->type,
                        come_value_148->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_146));
                        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        come_value_148->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_148->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
                        __result_obj__65 = (_Bool)1;
                        (c_value_147 = come_decrement_ref_count(c_value_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__65;
                        (c_value_147 = come_decrement_ref_count(c_value_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else if(                    left_type_146->mPointerNum>0&&right_type_143->mPointerNum>0&&string_operator_equals(right_type_143->mClass->mName,"void")&&left_type_146->mHeap                    ) {
                        check_assign_type(((char*)(__right_value208=xsprintf("\%s is assigning to",((char*)(__right_value207=string_to_string(self->name)))))),left_type_146,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        c_value_149=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_145->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var_145->mType),c_value_149,info,(_Bool)0);
                        come_value_150=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 546, "struct CVALUE*"))));
                        if(                        parent_var_145->mType->mOriginIsArray                        ) {
                            __dec_obj65=come_value_150->c_value,
                            come_value_150->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            __dec_obj66=come_value_150->c_value,
                            come_value_150->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        __dec_obj67=come_value_150->type,
                        come_value_150->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_146));
                        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        come_value_150->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_150->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                        __result_obj__66 = (_Bool)1;
                        (c_value_149 = come_decrement_ref_count(c_value_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__66;
                        (c_value_149 = come_decrement_ref_count(c_value_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value216=xsprintf("\%s is assigning to",((char*)(__right_value215=string_to_string(self->name)))))),left_type_146,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        if(                        left_type_146->mHeap&&!right_value_142->type->mHeap                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value217=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value217, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            __result_obj__67 = (_Bool)1;
                            come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            return __result_obj__67;
                        }
                        come_value_151=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 571, "struct CVALUE*"))));
                        if(                        parent_var_145->mType->mOriginIsArray                        ) {
                            __dec_obj68=come_value_151->c_value,
                            come_value_151->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            __dec_obj69=come_value_151->c_value,
                            come_value_151->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        __dec_obj70=come_value_151->type,
                        come_value_151->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_146));
                        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        come_value_151->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_151->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_151));
                        __result_obj__68 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, come_value_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__68;
                        come_call_finalizer(CVALUE_finalize, come_value_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
            }
        }
        var__152=get_variable_from_table(info->lv_table,self->name);
        if(        var__152==((void*)0)        ) {
            var__152=get_variable_from_table(info->gv_table,self->name);
            if(            var__152==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value223=err_msg(info,"var not found(%s)(X) at storing variable",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value223, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__69 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__69;
            }
        }
        if(        var__152->mType==((void*)0)        ) {
            __dec_obj71=var__152->mType,
            var__152->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_143));
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        left_type_153=(struct sType*)come_increment_ref_count(sType_clone(var__152->mType));
        if(        left_type_153->mImmutable        ) {
            ((struct tuple2$2int$bool$*)(__right_value226=err_msg(info,"Immutable object can't change")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value226, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__70 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__70;
        }
        if(        (var__152->mType->mStatic||var__152->mType->mConstant)&&!var__152->mGlobal        ) {
            check_assign_type(((char*)(__right_value228=xsprintf("\%s is assining to",((char*)(__right_value227=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_value_154=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 617, "struct CVALUE*"))));
            __dec_obj72=come_value_154->c_value,
            come_value_154->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj73=come_value_154->type,
            come_value_154->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_154->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
            add_come_last_code(info,"%s",come_value_154->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        right_type_143->mHeap&&left_type_153->mHeap&&left_type_153->mPointerNum>0&&right_type_143->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value234=xsprintf("\%s is assining to",((char*)(__right_value233=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_153),var__152->mCValueName,info,(_Bool)0);
            std_move(left_type_153,right_type_143,right_value_142,info,(_Bool)0);
            come_value_155=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 634, "struct CVALUE*"))));
            __dec_obj74=come_value_155->c_value,
            come_value_155->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj75=come_value_155->type,
            come_value_155->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_155->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
            add_come_last_code(info,"%s",come_value_155->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_153->mPointerNum>0&&left_type_153->mHeap&&string_operator_equals(right_type_143->mClass->mName,"void")&&right_type_143->mPointerNum>0        ) {
            check_assign_type(((char*)(__right_value240=xsprintf("\%s is assining to",((char*)(__right_value239=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_153),var__152->mCValueName,info,(_Bool)0);
            come_value_156=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 650, "struct CVALUE*"))));
            __dec_obj76=come_value_156->c_value,
            come_value_156->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj77=come_value_156->type,
            come_value_156->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_156->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
            add_come_last_code(info,"%s",come_value_156->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        left_type_153->mChannel&&new_channel_141        ) {
            come_value_157=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 661, "struct CVALUE*"))));
            __dec_obj78=come_value_157->c_value,
            come_value_157->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__152->mCValueName));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj79=come_value_157->type,
            come_value_157->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 663, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_157->type->mPointerNum=1;
            come_value_157->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
            add_come_last_code(info,"%s",come_value_157->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value252=xsprintf("\%s is assining to",((char*)(__right_value251=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            left_type_153->mHeap&&!right_value_142->type->mHeap            ) {
                ((struct tuple2$2int$bool$*)(__right_value253=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value253, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__71 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__71;
            }
            come_value_158=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 679, "struct CVALUE*"))));
            __dec_obj80=come_value_158->c_value,
            come_value_158->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj81=come_value_158->type,
            come_value_158->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_158->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
            add_come_last_code(info,"%s",come_value_158->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value2 = (void*)0;
struct sType* result_6;
void* __right_value3 = (void*)0;
struct sType* __dec_obj2;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value13 = (void*)0;
struct sType* __dec_obj8;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value17 = (void*)0;
char* __dec_obj11;
void* __right_value18 = (void*)0;
char* __dec_obj12;
void* __right_value19 = (void*)0;
char* __dec_obj13;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value28 = (void*)0;
char* __dec_obj18;
void* __right_value29 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value37 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value38 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__1;
    }
    result_6=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_6->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj2=result_6->mOriginalLoadVarType,
        result_6->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_6->mChannelType,
        result_6->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_6->mGenericsTypes,
        result_6->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_6->mNoSolvedGenericsType,
        result_6->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_6->mSizeNum,
        result_6->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_6->mAlignas,
        result_6->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_6->mTupleName,
        result_6->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_6->mAttribute,
        result_6->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_6->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_6->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_6->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_6->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_6->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_6->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_6->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_6->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_6->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_6->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_6->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_6->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_6->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_6->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_6->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_6->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_6->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_6->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_6->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_6->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_6->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_6->mAsmName,
        result_6->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_6->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_6->mArrayNum,
        result_6->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_6->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_6->mOriginalTypeName,
        result_6->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_6->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_6->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_6->mParamTypes,
        result_6->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_6->mParamNames,
        result_6->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_6->mResultType,
        result_6->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_6->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_6->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result_6);
    come_call_finalizer(sType_finalize, result_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_0;
struct list_item$1sType$ph* prev_it_1;
    it_0=self->head;
    while(    it_0!=((void*)0)    ) {
        prev_it_1=it_0;
        it_0=it_0->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_2;
struct list_item$1sNode$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)    ) {
        prev_it_3=it_2;
        it_2=it_2->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_4;
struct list_item$1char$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)    ) {
        prev_it_5=it_4;
        it_4=it_4->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1sType$ph* result_7;
struct list_item$1sType$ph* it_8;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_7=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1008, "struct list$1sType$ph*"))));
    it_8=self->head;
    while(    it_8!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_7,(struct sType*)come_increment_ref_count(sType_clone(it_8->item)));
        }
        else {
            list$1sType$ph_add(result_7,(struct sType*)come_increment_ref_count(sType_clone(it_8->item)));
        }
        it_8=it_8->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_7);
    come_call_finalizer(list$1sType$ph$p_finalize, result_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_9;
struct sType* __dec_obj4;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj5;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_9=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_9->prev=((void*)0);
        litem_9->next=((void*)0);
        __dec_obj4=litem_9->item,
        litem_9->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_9;
        self->head=litem_9;
    }
    else if(    self->len==1    ) {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        __dec_obj5=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        __dec_obj6=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_12;
struct list_item$1sType$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)    ) {
        prev_it_13=it_12;
        it_12=it_12->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value14 = (void*)0;
struct sNode* result_14;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_14=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_14->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_14->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_14->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_14->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_14->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_14->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_14->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_14->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_14->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_14->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_14);
    ((result_14) ? result_14 = come_decrement_ref_count(result_14, ((struct sNode*)result_14)->finalize, ((struct sNode*)result_14)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1sNode$ph* result_15;
struct list_item$1sNode$ph* it_16;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_15=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_16=self->head;
    while(    it_16!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_15,(struct sNode*)come_increment_ref_count(sNode_clone(it_16->item)));
        }
        else {
            list$1sNode$ph_add(result_15,(struct sNode*)come_increment_ref_count(sNode_clone(it_16->item)));
        }
        it_16=it_16->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_15);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_17;
struct sNode* __dec_obj14;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj15;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_17->prev=((void*)0);
        litem_17->next=((void*)0);
        __dec_obj14=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_17;
        self->head=litem_17;
    }
    else if(    self->len==1    ) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj15=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj16=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_20;
struct list_item$1sNode$ph* prev_it_21;
    it_20=self->head;
    while(    it_20!=((void*)0)    ) {
        prev_it_21=it_20;
        it_20=it_20->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1char$ph* result_22;
struct list_item$1char$ph* it_23;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_22=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1008, "struct list$1char$ph*"))));
    it_23=self->head;
    while(    it_23!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1016, "char*")));
        }
        it_23=it_23->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_22);
    come_call_finalizer(list$1char$ph$p_finalize, result_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_24;
char* __dec_obj20;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_25;
char* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj22;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        __dec_obj20=litem_24->item,
        litem_24->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1    ) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        __dec_obj21=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        __dec_obj22=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_27;
struct list_item$1char$ph* prev_it_28;
    it_27=self->head;
    while(    it_27!=((void*)0)    ) {
        prev_it_28=it_27;
        it_27=it_27->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__17;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_31;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_32;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__22;
    if(    self==((void*)0)    ) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__17;
    }
    result_31=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1008, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it_32=self->head;
    while(    it_32!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_31,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_32->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_31,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_32->item)));
        }
        it_32=it_32->next;
    }
    __result_obj__22 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result_31);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, result_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_29;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)    ) {
        prev_it_30=it_29;
        it_29=it_29->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value43 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_33;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj28;
void* __right_value44 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_34;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj29;
void* __right_value45 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_35;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj30;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__19;
    if(    self->len==0    ) {
        litem_33=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value43=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1027, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_33->prev=((void*)0);
        litem_33->next=((void*)0);
        __dec_obj28=litem_33->item,
        litem_33->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_33;
        self->head=litem_33;
    }
    else if(    self->len==1    ) {
        litem_34=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value44=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1037, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_34->prev=self->head;
        litem_34->next=((void*)0);
        __dec_obj29=litem_34->item,
        litem_34->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_34;
        self->head->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value45=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1047, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_35->prev=self->tail;
        litem_35->next=((void*)0);
        __dec_obj30=litem_35->item,
        litem_35->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_35;
        self->tail=litem_35;
    }
    self->len++;
    __result_obj__19 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__20;
void* __right_value46 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_36;
void* __right_value47 = (void*)0;
struct sType* __dec_obj31;
void* __right_value48 = (void*)0;
char* __dec_obj32;
void* __right_value49 = (void*)0;
struct sNode* __dec_obj33;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__21;
    if(    self==(void*)0    ) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__20;
    }
    result_36=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj31=result_36->v1,
        result_36->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj32=result_36->v2,
        result_36->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        __dec_obj33=result_36->v3,
        result_36->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__21 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result_36);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, result_36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_37;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->multiple_assign, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)    ) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_40;
unsigned int it_41;
struct sVar* __result_obj__25;
struct sVar* __result_obj__26;
struct sVar* __result_obj__27;
struct sVar* __result_obj__28;
    hash_40=string_get_hash_key(((char*)key))%self->size;
    it_41=hash_40;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_41]        ) {
            if(            string_equals(self->keys[it_41],key)            ) {
                __result_obj__25 = (struct sVar*)come_increment_ref_count(self->items[it_41]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__25;
            }
            it_41++;
            if(            it_41>=self->size            ) {
                it_41=0;
            }
            else if(            it_41==hash_40            ) {
                __result_obj__26 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash_42;
unsigned int it_43;
struct map$2char$phsVar$ph* __result_obj__33;
    hash_42=string_get_hash_key(((char*)key))%self->size;
    it_43=hash_42;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_43]        ) {
            if(            string_equals(self->keys[it_43],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it_43]);
                self->item_existance[it_43]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it_43] = come_decrement_ref_count(self->keys[it_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it_43]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_43], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                self->items[it_43]=((void*)0);
                self->len--;
                break;
            }
            it_43++;
            if(            it_43>=self->size            ) {
                it_43=0;
            }
            else if(            it_43==hash_42            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__33 = self;
    return __result_obj__33;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_44;
struct list_item$1char$ph* it_45;
struct list$1char$ph* __result_obj__32;
    it2_44=0;
    it_45=self->head;
    while(    it_45!=((void*)0)    ) {
        if(        string_equals(it_45->item,item)        ) {
            list$1char$ph_delete(self,it2_44,it2_44+1);
            break;
        }
        it2_44++;
        it_45=it_45->next;
    }
    __result_obj__32 = self;
    return __result_obj__32;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_46;
struct list$1char$ph* __result_obj__29;
struct list_item$1char$ph* it_49;
int i_50;
struct list_item$1char$ph* prev_it_51;
struct list_item$1char$ph* it_52;
int i_53;
struct list_item$1char$ph* prev_it_54;
struct list_item$1char$ph* it_55;
struct list_item$1char$ph* head_prev_it_56;
struct list_item$1char$ph* tail_it_57;
int i_58;
struct list_item$1char$ph* prev_it_59;
struct list$1char$ph* __result_obj__31;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_46=tail;
        tail=head;
        head=tmp_46;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__29 = self;
        return __result_obj__29;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_49=self->head;
        i_50=0;
        while(        it_49!=((void*)0)        ) {
            if(            i_50<tail            ) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_50==tail            ) {
                self->head=it_49;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_52=self->head;
        i_53=0;
        while(        it_52!=((void*)0)        ) {
            if(            i_53==head            ) {
                self->tail=it_52->prev;
                self->tail->next=((void*)0);
            }
            if(            i_53>=head            ) {
                prev_it_54=it_52;
                it_52=it_52->next;
                i_53++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_52=it_52->next;
                i_53++;
            }
        }
    }
    else {
        it_55=self->head;
        head_prev_it_56=((void*)0);
        tail_it_57=((void*)0);
        i_58=0;
        while(        it_55!=((void*)0)        ) {
            if(            i_58==head            ) {
                head_prev_it_56=it_55->prev;
            }
            if(            i_58==tail            ) {
                tail_it_57=it_55;
            }
            if(            i_58>=head&&i_58<tail            ) {
                prev_it_59=it_55;
                it_55=it_55->next;
                i_58++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_58++;
            }
        }
        if(        head_prev_it_56!=((void*)0)        ) {
            head_prev_it_56->next=tail_it_57;
        }
        if(        tail_it_57!=((void*)0)        ) {
            tail_it_57->prev=head_prev_it_56;
        }
    }
    __result_obj__31 = self;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_47;
struct list_item$1char$ph* prev_it_48;
struct list$1char$ph* __result_obj__30;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        prev_it_48=it_47;
        it_47=it_47->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = self;
    return __result_obj__30;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_62;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__34;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__35;
struct tuple3$3sType$phchar$phsNode$ph* result_63;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__36;
result_62 = (void*)0;
result_63 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_62,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__34 = result_62;
        return __result_obj__34;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_63,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__36 = result_63;
    return __result_obj__36;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_65;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__37;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__38;
struct tuple3$3sType$phchar$phsNode$ph* result_66;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__39;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_65,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__37 = result_65;
        return __result_obj__37;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_66,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__39 = result_66;
    return __result_obj__39;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_79;
char* __result_obj__43;
char* __result_obj__44;
char* result_80;
char* __result_obj__45;
result_79 = (void*)0;
result_80 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_79,0,sizeof(char*));
        __result_obj__43 = result_79;
        return __result_obj__43;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__44 = self->it->item;
        return __result_obj__44;
    }
    memset(&result_80,0,sizeof(char*));
    __result_obj__45 = result_80;
    return __result_obj__45;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_82;
char* __result_obj__46;
char* __result_obj__47;
char* result_83;
char* __result_obj__48;
result_82 = (void*)0;
result_83 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_82,0,sizeof(char*));
        __result_obj__46 = result_82;
        return __result_obj__46;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__47 = self->it->item;
        return __result_obj__47;
    }
    memset(&result_83,0,sizeof(char*));
    __result_obj__48 = result_83;
    return __result_obj__48;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_86;
int i_87;
struct sType* __result_obj__49;
struct sType* default_value_88;
struct sType* __result_obj__50;
default_value_88 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_86=self->head;
    i_87=0;
    while(    it_86!=((void*)0)    ) {
        if(        position==i_87        ) {
            __result_obj__49 = (struct sType*)come_increment_ref_count(it_86->item);
            come_call_finalizer(sType_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__49;
        }
        it_86=it_86->next;
        i_87++;
    }
    memset(&default_value_88,0,sizeof(struct sType*));
    __result_obj__50 = (struct sType*)come_increment_ref_count(default_value_88);
    come_call_finalizer(sType_finalize, default_value_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_89;
int i_90;
struct sType* __result_obj__51;
struct sType* default_value_91;
struct sType* __result_obj__52;
default_value_91 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_89=self->head;
    i_90=0;
    while(    it_89!=((void*)0)    ) {
        if(        position==i_90        ) {
            __result_obj__51 = (struct sType*)come_increment_ref_count(it_89->item);
            come_call_finalizer(sType_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__51;
        }
        it_89=it_89->next;
        i_90++;
    }
    memset(&default_value_91,0,sizeof(struct sType*));
    __result_obj__52 = (struct sType*)come_increment_ref_count(default_value_91);
    come_call_finalizer(sType_finalize, default_value_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value104 = (void*)0;
struct list_item$1CVALUE$ph* litem_103;
struct CVALUE* __dec_obj43;
void* __right_value105 = (void*)0;
struct list_item$1CVALUE$ph* litem_104;
struct CVALUE* __dec_obj44;
void* __right_value106 = (void*)0;
struct list_item$1CVALUE$ph* litem_105;
struct CVALUE* __dec_obj45;
struct list$1CVALUE$ph* __result_obj__53;
    if(    self->len==0    ) {
        litem_103=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value104=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1027, "struct list_item$1CVALUE$ph*"))));
        litem_103->prev=((void*)0);
        litem_103->next=((void*)0);
        __dec_obj43=litem_103->item,
        litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_103;
        self->head=litem_103;
    }
    else if(    self->len==1    ) {
        litem_104=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value105=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1037, "struct list_item$1CVALUE$ph*"))));
        litem_104->prev=self->head;
        litem_104->next=((void*)0);
        __dec_obj44=litem_104->item,
        litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_104;
        self->head->next=litem_104;
    }
    else {
        litem_105=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value106=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1047, "struct list_item$1CVALUE$ph*"))));
        litem_105->prev=self->tail;
        litem_105->next=((void*)0);
        __dec_obj45=litem_105->item,
        litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_105;
        self->tail=litem_105;
    }
    self->len++;
    __result_obj__53 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_110;
struct sNode* __result_obj__55;
struct sNode* __result_obj__56;
struct sNode* result_111;
struct sNode* __result_obj__57;
result_110 = (void*)0;
result_111 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_110,0,sizeof(struct sNode*));
        __result_obj__55 = result_110;
        return __result_obj__55;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__56 = self->it->item;
        return __result_obj__56;
    }
    memset(&result_111,0,sizeof(struct sNode*));
    __result_obj__57 = result_111;
    return __result_obj__57;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_113;
struct sNode* __result_obj__58;
struct sNode* __result_obj__59;
struct sNode* result_114;
struct sNode* __result_obj__60;
result_113 = (void*)0;
result_114 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_113,0,sizeof(struct sNode*));
        __result_obj__58 = result_113;
        return __result_obj__58;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__59 = self->it->item;
        return __result_obj__59;
    }
    memset(&result_114,0,sizeof(struct sNode*));
    __result_obj__60 = result_114;
    return __result_obj__60;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value126 = (void*)0;
struct list_item$1CVALUE$ph* litem_118;
struct CVALUE* __dec_obj48;
void* __right_value127 = (void*)0;
struct list_item$1CVALUE$ph* litem_119;
struct CVALUE* __dec_obj49;
void* __right_value128 = (void*)0;
struct list_item$1CVALUE$ph* litem_120;
struct CVALUE* __dec_obj50;
struct list$1CVALUE$ph* __result_obj__62;
    if(    self->len==0    ) {
        litem_118=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value126=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1097, "struct list_item$1CVALUE$ph*"))));
        litem_118->prev=((void*)0);
        litem_118->next=((void*)0);
        __dec_obj48=litem_118->item,
        litem_118->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_118;
        self->head=litem_118;
    }
    else if(    self->len==1    ) {
        litem_119=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value127=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1107, "struct list_item$1CVALUE$ph*"))));
        litem_119->prev=self->head;
        litem_119->next=((void*)0);
        __dec_obj49=litem_119->item,
        litem_119->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_119;
        self->head->next=litem_119;
    }
    else {
        litem_120=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value128=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1117, "struct list_item$1CVALUE$ph*"))));
        litem_120->prev=self->tail;
        litem_120->next=((void*)0);
        __dec_obj50=litem_120->item,
        litem_120->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_120;
        self->tail=litem_120;
    }
    self->len++;
    __result_obj__62 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__62;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value258 = (void*)0;
struct sNewChannel* __result_obj__72;
    ((struct sNodeBase*)(__right_value258=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value258, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__72 = (struct sNewChannel*)come_increment_ref_count(self);
    come_call_finalizer(sNewChannel_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNewChannel_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value259 = (void*)0;
char* __result_obj__73;
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value259=__builtin_string("sNewChannel"))));
    (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__73;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value260 = (void*)0;
struct sNode* node_159;
_Bool Value_160;
_Bool __result_obj__74;
_Bool __result_obj__75;
    node_159=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_160=node_compile(node_159,info);
    if(    !Value_160    ) {
        __result_obj__74 = (_Bool)0;
        ((node_159) ? node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__74;
    }
    else {
    }
    __result_obj__75 = (_Bool)1;
    ((node_159) ? node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__75;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value261 = (void*)0;
struct sNode* __dec_obj82;
struct sNode* __dec_obj83;
struct sWriteChannelNode* __result_obj__76;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value261, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj82=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj83=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__76 = (struct sWriteChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sWriteChannelNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sWriteChannelNode_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__77;
    __result_obj__77 = (char*)come_increment_ref_count(((char*)(__right_value262=__builtin_string("sWriteChannelNode"))));
    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__77 = come_decrement_ref_count(__result_obj__77, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__77;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_161;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_162;
_Bool Value_163;
_Bool __result_obj__78;
void* __right_value264 = (void*)0;
struct CVALUE* right_value_164;
struct sType* right_type_165;
void* __right_value265 = (void*)0;
struct sType* left_type_166;
struct sType* channel_type_167;
void* __right_value266 = (void*)0;
_Bool __result_obj__79;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct buffer* buf_169;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct CVALUE* come_value2_170;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* __dec_obj84;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__80;
    Value_161=node_compile(self->exp,info);
    if(    !Value_161    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value_162=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_163=node_compile(self->right_value,info);
    if(    !Value_163    ) {
        __result_obj__78 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__78;
    }
    else {
    }
    right_value_164=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_165=right_value_164->type;
    left_type_166=(struct sType*)come_increment_ref_count(sType_clone(come_value_162->type));
    channel_type_167=(struct sType*)come_increment_ref_count(left_type_166->mChannelType);
    static int var_num_168=0;
    var_num_168++;
    if(    right_value_164->type->mHeap    ) {
        ((struct tuple2$2int$bool$*)(__right_value266=err_msg(info,"channel can't get heap type")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value266, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__79 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, channel_type_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__79;
    }
    buf_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 762, "struct buffer*"))));
    buffer_append_format(buf_169,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_168,((char*)(__right_value269=make_type_name_string(channel_type_167,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_format(buf_169,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value270=make_type_name_string(channel_type_167,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_168,var_num_168);
    (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    buffer_append_format(buf_169,"*__channel_p%d = %s;\n",var_num_168,right_value_164->c_value);
    add_come_code(info,((char*)(__right_value271=buffer_to_string(buf_169))));
    (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_value2_170=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 770, "struct CVALUE*"))));
    __dec_obj84=come_value2_170->c_value,
    come_value2_170->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_162->c_value,var_num_168,((char*)(__right_value274=make_type_name_string(channel_type_167,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj85=come_value2_170->type,
    come_value2_170->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 774, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_170->type->mPointerNum=1;
    come_value2_170->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_170));
    add_come_last_code(info,"%s",come_value2_170->c_value);
    __result_obj__80 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, channel_type_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__80;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value279 = (void*)0;
struct sNode* __dec_obj86;
struct sReadChannelNode* __result_obj__81;
    ((struct sNodeBase*)(__right_value279=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj86=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__81 = (struct sReadChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sReadChannelNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sReadChannelNode_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value280 = (void*)0;
char* __result_obj__82;
    __result_obj__82 = (char*)come_increment_ref_count(((char*)(__right_value280=__builtin_string("sReadChannelNode"))));
    (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__82;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_171;
_Bool Value_172;
_Bool __result_obj__83;
void* __right_value281 = (void*)0;
struct CVALUE* come_value_173;
void* __right_value282 = (void*)0;
struct sType* var_type_174;
void* __right_value283 = (void*)0;
_Bool __result_obj__84;
struct sType* channel_type_175;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct CVALUE* come_value2_177;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
char* __dec_obj87;
void* __right_value290 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__85;
    exp_171=(struct sNode*)come_increment_ref_count(self->exp);
    Value_172=node_compile(exp_171,info);
    if(    !Value_172    ) {
        __result_obj__83 = (_Bool)0;
        ((exp_171) ? exp_171 = come_decrement_ref_count(exp_171, ((struct sNode*)exp_171)->finalize, ((struct sNode*)exp_171)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__83;
    }
    else {
    }
    come_value_173=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type_174=(struct sType*)come_increment_ref_count(sType_clone(come_value_173->type));
    if(    !var_type_174->mChannel    ) {
        ((struct tuple2$2int$bool$*)(__right_value283=err_msg(info,"require right type is channel")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__84 = (_Bool)1;
        ((exp_171) ? exp_171 = come_decrement_ref_count(exp_171, ((struct sNode*)exp_171)->finalize, ((struct sNode*)exp_171)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, var_type_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__84;
    }
    channel_type_175=(struct sType*)come_increment_ref_count(var_type_174->mChannelType);
    static int var_num_176=0;
    var_num_176++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_176,((char*)(__right_value284=make_type_name_string(channel_type_175,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_value2_177=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 825, "struct CVALUE*"))));
    __dec_obj87=come_value2_177->c_value,
    come_value2_177->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_173->c_value,var_num_176,((char*)(__right_value287=make_type_name_string(channel_type_175,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value288=make_type_name_string(channel_type_175,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_176));
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj88=come_value2_177->type,
    come_value2_177->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type_175));
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_177->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_177));
    add_come_last_code(info,"%s",come_value2_177->c_value);
    __result_obj__85 = (_Bool)1;
    ((exp_171) ? exp_171 = come_decrement_ref_count(exp_171, ((struct sNode*)exp_171)->finalize, ((struct sNode*)exp_171)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, var_type_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, channel_type_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__85;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma){
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value302 = (void*)0;
struct sNode* __result_obj__88;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 842, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value293=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 842, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf("")),comma,(_Bool)0))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__88 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value302=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sStoreNode_finalize, __right_value293, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value302) ? __right_value302 = come_decrement_ref_count(__right_value302, ((struct sNode*)__right_value302)->finalize, ((struct sNode*)__right_value302)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__88) ? __result_obj__88 = come_decrement_ref_count(__result_obj__88, ((struct sNode*)__result_obj__88)->finalize, ((struct sNode*)__result_obj__88)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__88;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__86;
void* __right_value294 = (void*)0;
struct sStoreNode* result_178;
void* __right_value295 = (void*)0;
char* __dec_obj89;
void* __right_value296 = (void*)0;
char* __dec_obj90;
void* __right_value297 = (void*)0;
struct sType* __dec_obj91;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj92;
void* __right_value299 = (void*)0;
struct list$1char$ph* __dec_obj93;
void* __right_value300 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj94;
void* __right_value301 = (void*)0;
char* __dec_obj95;
struct sStoreNode* __result_obj__87;
    if(    self==(void*)0    ) {
        __result_obj__86 = (void*)0;
        return __result_obj__86;
    }
    result_178=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(    self!=((void*)0)    ) {
        result_178->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj89=result_178->sname,
        result_178->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_178->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj90=result_178->name,
        result_178->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_178->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj91=result_178->type,
        result_178->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        __dec_obj92=result_178->right_value,
        result_178->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)    ) {
        __dec_obj93=result_178->multiple_assign,
        result_178->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        __dec_obj94=result_178->multiple_declare,
        result_178->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)    ) {
        __dec_obj95=result_178->attribute,
        result_178->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_178->comma=self->comma;
    }
    if(    self!=((void*)0)    ) {
        result_178->val_=self->val_;
    }
    __result_obj__87 = result_178;
    come_call_finalizer(sStoreNode_finalize, result_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* __dec_obj96;
struct sLoadNode* __result_obj__89;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj96=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->on_load_calling=(_Bool)0;
    __result_obj__89 = (struct sLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadNode_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value305 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value305=__builtin_string("sLoadNode"))));
    (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__90;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_179;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
_Bool _condtional_value_X3;
struct sVar* parent_var_180;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_181;
struct sType* type_182;
void* __right_value310 = (void*)0;
char* __dec_obj97;
void* __right_value311 = (void*)0;
char* __dec_obj98;
void* __right_value312 = (void*)0;
struct sType* __dec_obj99;
_Bool __result_obj__91;
struct sVar* var__183;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sFun* fun_184;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct CVALUE* come_value_191;
void* __right_value318 = (void*)0;
char* __dec_obj100;
struct sType* __dec_obj101;
_Bool __result_obj__100;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_192;
void* __right_value322 = (void*)0;
char* __dec_obj102;
void* __right_value323 = (void*)0;
struct sType* __dec_obj103;
void* __right_value324 = (void*)0;
struct sType* __dec_obj104;
void* __right_value325 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var2 = (void*)0;
char* fun_name_195=0;
struct sFun* fun_196=0;
struct sGenericsFun* generics_fun_197=0;
void* __right_value326 = (void*)0;
void* __right_value330 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct tuple2$2char$phsNode$ph* __list_values1___199[1];
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_206;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* _inf_value3;
struct sLoadNode* _inf_obj_value3;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sNode* node_207;
_Bool Value_208;
_Bool __result_obj__107;
_Bool __result_obj__108;
    current_stack_frame_struct_179=info->current_stack_frame_struct;
    if(    (_condtional_value_X3=(current_stack_frame_struct_179&&((struct sVar*)(__right_value307=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value306=__builtin_string(self->name))),((void*)0))))==((void*)0))),    (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    come_call_finalizer(sVar_finalize, __right_value307, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X3    ) {
        parent_var_180=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_180!=((void*)0)        ) {
            if(            string_operator_not_equals(parent_var_180->mFunName,info->come_fun->mName)            ) {
                come_value_181=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 873, "struct CVALUE*"))));
                type_182=parent_var_180->mType;
                if(                parent_var_180->mType->mOriginIsArray                ) {
                    __dec_obj97=come_value_181->c_value,
                    come_value_181->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_180->mCValueName));
                    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj98=come_value_181->c_value,
                    come_value_181->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_180->mCValueName));
                    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                __dec_obj99=come_value_181->type,
                come_value_181->type=(struct sType*)come_increment_ref_count(sType_clone(type_182));
                come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value_181->var=((void*)0);
                add_come_last_code(info,"%s",come_value_181->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_181));
                __result_obj__91 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__91;
                come_call_finalizer(CVALUE_finalize, come_value_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    var__183=get_variable_from_table(info->lv_table,self->name);
    if(    var__183==((void*)0)    ) {
        var__183=get_variable_from_table(info->gv_table,self->name);
        if(        var__183==((void*)0)        ) {
            fun_184=((struct sFun*)(__right_value315=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value314=__builtin_string(self->name))))));
            (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value315, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            fun_184            ) {
                come_value_191=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 905, "struct CVALUE*"))));
                __dec_obj100=come_value_191->c_value,
                come_value_191->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_184->mName));
                __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj101=come_value_191->type,
                come_value_191->type=(struct sType*)come_increment_ref_count(fun_184->mLambdaType);
                come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value_191->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
                __result_obj__100 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__100;
                come_call_finalizer(CVALUE_finalize, come_value_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value319=err_msg(info,"var not found(%s)(Z) at loading variable",self->name)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value319, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                return (_Bool)1;
            }
        }
    }
    come_value_192=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 922, "struct CVALUE*"))));
    __dec_obj102=come_value_192->c_value,
    come_value_192->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__183->mCValueName));
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj103=come_value_192->type,
    come_value_192->type=(struct sType*)come_increment_ref_count(sType_clone(var__183->mType));
    come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_192->var=var__183;
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_192));
    if(    list$1sNode$ph_length(come_value_192->type->mArrayNum)==1    ) {
        __dec_obj104=come_value_192->type->mOriginalLoadVarType,
        come_value_192->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_192->type));
        come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1sNode$ph_reset(come_value_192->type->mArrayNum);
        come_value_192->type->mPointerNum++;
        come_value_192->type->mOriginalTypeNamePointerNum=come_value_192->type->mPointerNum;
    }
    if(    !self->on_load_calling&&string_operator_not_equals(self->name,"self")    ) {
        self->on_load_calling=(_Bool)1;
        multiple_assign_var2=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value325=get_method("on_load",(struct sType*)come_increment_ref_count(come_value_192->type),info)));
        fun_name_195=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        fun_196=multiple_assign_var2->v2;
        generics_fun_197=multiple_assign_var2->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value325, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_196        ) {
            ((struct CVALUE*)(__right_value326=get_value_from_stack(-1,info)));
            come_call_finalizer(CVALUE_finalize, __right_value326, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 945, "struct sNode");
            _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count((((struct sLoadNode*)(__right_value330=sLoadNode_clone(self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadNode_finalize;
            _inf_value2->clone=(void*)sLoadNode_clone;
            _inf_value2->compile=(void*)sLoadNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sLoadNode_terminated;
            _inf_value2->kind=(void*)sLoadNode_kind;
            _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
            params_206=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((__list_values1___199[0]=((struct tuple2$2char$phsNode$ph*)(__right_value333=tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 945, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(_inf_value2)))),
list$1tuple2$2char$phsNode$ph$ph_initialize_with_values((struct list$1tuple2$2char$phsNode$ph$ph**)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 945, "struct list$1tuple2$2char$phsNode$ph$ph")),1,__list_values1___199)));
            come_call_finalizer(sLoadNode_finalize, __right_value330, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __right_value333, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 946, "struct sNode");
            _inf_obj_value3=(struct sLoadNode*)come_increment_ref_count((((struct sLoadNode*)(__right_value340=sLoadNode_clone(self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLoadNode_finalize;
            _inf_value3->clone=(void*)sLoadNode_clone;
            _inf_value3->compile=(void*)sLoadNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sLoadNode_terminated;
            _inf_value3->kind=(void*)sLoadNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            node_207=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value339=xsprintf("on_load"))),(struct sNode*)come_increment_ref_count(_inf_value3),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_206),((void*)0),0,((void*)0),info,(_Bool)0));
            (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sLoadNode_finalize, __right_value340, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_208=node_compile(node_207,info);
            if(            !Value_208            ) {
                __result_obj__107 = (_Bool)0;
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_207) ? node_207 = come_decrement_ref_count(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_195 = come_decrement_ref_count(fun_name_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__107;
            }
            else {
            }
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_207) ? node_207 = come_decrement_ref_count(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (fun_name_195 = come_decrement_ref_count(fun_name_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__108 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static void sLoadNode_finalize(struct sLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_185;
unsigned int hash_186;
unsigned int it_187;
struct sFun* __result_obj__92;
struct sFun* __result_obj__93;
struct sFun* __result_obj__94;
struct sFun* __result_obj__95;
default_value_185 = (void*)0;
    memset(&default_value_185,0,sizeof(struct sFun*));
    hash_186=string_get_hash_key(((char*)key))%self->size;
    it_187=hash_186;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_187]        ) {
            if(            string_equals(self->keys[it_187],key)            ) {
                __result_obj__92 = (struct sFun*)come_increment_ref_count(self->items[it_187]);
                come_call_finalizer(sFun_finalize, default_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__92;
            }
            it_187++;
            if(            it_187>=self->size            ) {
                it_187=0;
            }
            else if(            it_187==hash_186            ) {
                __result_obj__93 = (struct sFun*)come_increment_ref_count(default_value_185);
                come_call_finalizer(sFun_finalize, default_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__93;
            }
        }
        else {
            __result_obj__94 = (struct sFun*)come_increment_ref_count(default_value_185);
            come_call_finalizer(sFun_finalize, default_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__94;
        }
    }
    __result_obj__95 = (struct sFun*)come_increment_ref_count(default_value_185);
    come_call_finalizer(sFun_finalize, default_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_188;
unsigned int hash_189;
unsigned int it_190;
struct sFun* __result_obj__96;
struct sFun* __result_obj__97;
struct sFun* __result_obj__98;
struct sFun* __result_obj__99;
default_value_188 = (void*)0;
    memset(&default_value_188,0,sizeof(struct sFun*));
    hash_189=string_get_hash_key(((char*)key))%self->size;
    it_190=hash_189;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_190]        ) {
            if(            string_equals(self->keys[it_190],key)            ) {
                __result_obj__96 = (struct sFun*)come_increment_ref_count(self->items[it_190]);
                come_call_finalizer(sFun_finalize, default_value_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__96;
            }
            it_190++;
            if(            it_190>=self->size            ) {
                it_190=0;
            }
            else if(            it_190==hash_189            ) {
                __result_obj__97 = (struct sFun*)come_increment_ref_count(default_value_188);
                come_call_finalizer(sFun_finalize, default_value_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__97;
            }
        }
        else {
            __result_obj__98 = (struct sFun*)come_increment_ref_count(default_value_188);
            come_call_finalizer(sFun_finalize, default_value_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__98;
        }
    }
    __result_obj__99 = (struct sFun*)come_increment_ref_count(default_value_188);
    come_call_finalizer(sFun_finalize, default_value_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_193;
struct list_item$1sNode$ph* prev_it_194;
struct list$1sNode$ph* __result_obj__101;
    it_193=self->head;
    while(    it_193!=((void*)0)    ) {
        prev_it_194=it_193;
        it_193=it_193->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__102;
void* __right_value327 = (void*)0;
struct sLoadNode* result_198;
void* __right_value328 = (void*)0;
char* __dec_obj105;
void* __right_value329 = (void*)0;
char* __dec_obj106;
struct sLoadNode* __result_obj__103;
    if(    self==(void*)0    ) {
        __result_obj__102 = (void*)0;
        return __result_obj__102;
    }
    result_198=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(    self!=((void*)0)    ) {
        result_198->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj105=result_198->sname,
        result_198->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_198->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __dec_obj106=result_198->name,
        result_198->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_198->on_load_calling=self->on_load_calling;
    }
    __result_obj__103 = result_198;
    come_call_finalizer(sLoadNode_finalize, result_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj107;
struct sNode* __dec_obj108;
struct tuple2$2char$phsNode$ph* __result_obj__104;
    __dec_obj107=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj108=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__104 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize_with_values(struct list$1tuple2$2char$phsNode$ph$ph* self, int num_value, struct tuple2$2char$phsNode$ph** values){
int i_200;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__106;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_200=0    ;    i_200<num_value    ;    i_200++    ){
        list$1tuple2$2char$phsNode$ph$ph_push_back(self,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(values[i_200]));
    }
    __result_obj__106 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value334 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_201;
struct tuple2$2char$phsNode$ph* __dec_obj109;
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_202;
struct tuple2$2char$phsNode$ph* __dec_obj110;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_203;
struct tuple2$2char$phsNode$ph* __dec_obj111;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__105;
    if(    self->len==0    ) {
        litem_201=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value334=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1097, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj109=litem_201->item,
        litem_201->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1    ) {
        litem_202=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value335=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1107, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj110=litem_202->item,
        litem_202->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value336=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1117, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        __dec_obj111=litem_203->item,
        litem_203->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__105 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__105;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_204;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_205;
    it_204=self->head;
    while(    it_204!=((void*)0)    ) {
        prev_it_205=it_204;
        it_204=it_204->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* __right_value346 = (void*)0;
struct sNode* node_209;
struct sNode* __result_obj__109;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 960, "struct sNode");
    _inf_obj_value4=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value345=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 960, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sLoadNode_finalize;
    _inf_value4->clone=(void*)sLoadNode_clone;
    _inf_value4->compile=(void*)sLoadNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sLoadNode_terminated;
    _inf_value4->kind=(void*)sLoadNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node_209=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sLoadNode_finalize, __right_value345, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__109 = (struct sNode*)come_increment_ref_count(node_209);
    ((node_209) ? node_209 = come_decrement_ref_count(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__109) ? __result_obj__109 = come_decrement_ref_count(__result_obj__109, ((struct sNode*)__result_obj__109)->finalize, ((struct sNode*)__result_obj__109)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__109;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* __dec_obj112;
struct sFunLoadNode* __result_obj__110;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value347, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj112=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__110 = (struct sFunLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunLoadNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFunLoadNode_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value349 = (void*)0;
char* __result_obj__111;
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value349=__builtin_string("sFunLoadNode"))));
    (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sFun* fun_210;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct CVALUE* come_value_211;
void* __right_value356 = (void*)0;
char* __dec_obj113;
struct sType* __dec_obj114;
    fun_210=((struct sFun*)(__right_value352=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value351=__builtin_string(self->name))))));
    (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value352, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_210==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value353=err_msg(info,"fun not found(%s) at loading variable",self->name)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value353, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        return (_Bool)1;
    }
    else {
        come_value_211=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 988, "struct CVALUE*"))));
        __dec_obj113=come_value_211->c_value,
        come_value_211->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_210->mName));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj114=come_value_211->type,
        come_value_211->type=(struct sType*)come_increment_ref_count(fun_210->mLambdaType);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_211->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_211));
        come_call_finalizer(CVALUE_finalize, come_value_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value357 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj120;
struct sArrayInitializer* __result_obj__118;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value357, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj120=self->initializer,
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(initializer));
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__118 = (struct sArrayInitializer*)come_increment_ref_count(self);
    come_call_finalizer(sArrayInitializer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sArrayInitializer_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value369 = (void*)0;
char* __result_obj__119;
    __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value369=__builtin_string("sArrayInitializer"))));
    (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_222;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct buffer* buf_223;
int i_224;
struct sType* element_type_225;
struct list$1tuple2$2sNode$phsNode$ph$ph* o2_saved_226;
struct tuple2$2sNode$phsNode$ph* it_229;
struct tuple2$2sNode$phsNode$ph* multiple_assign_var3 = (void*)0;
struct sNode* index_232=0;
struct sNode* value_233=0;
struct CVALUE* come_value_234;
_Bool Value_235;
_Bool __result_obj__126;
void* __right_value372 = (void*)0;
struct CVALUE* __dec_obj121;
_Bool Value_236;
_Bool __result_obj__127;
void* __right_value373 = (void*)0;
struct CVALUE* come_value2_237;
void* __right_value374 = (void*)0;
struct sType* __dec_obj122;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_238;
void* __right_value377 = (void*)0;
char* __dec_obj123;
void* __right_value378 = (void*)0;
struct sType* __dec_obj124;
_Bool __result_obj__128;
    initializer_222=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_223=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1019, "struct buffer*"))));
    buffer_append_str(buf_223,"{");
    i_224=0;
    element_type_225=((void*)0);
    for(    o2_saved_226=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((initializer_222)),it_229=list$1tuple2$2sNode$phsNode$ph$ph_begin((o2_saved_226))    ;    !list$1tuple2$2sNode$phsNode$ph$ph_end((o2_saved_226))    ;    it_229=list$1tuple2$2sNode$phsNode$ph$ph_next((o2_saved_226))    ){
        multiple_assign_var3=it_229;
        index_232=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v1);
        value_233=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        come_value_234=((void*)0);
        if(        index_232        ) {
            Value_235=node_compile(index_232,info);
            if(            !Value_235            ) {
                __result_obj__126 = (_Bool)0;
                ((index_232) ? index_232 = come_decrement_ref_count(index_232, ((struct sNode*)index_232)->finalize, ((struct sNode*)index_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((value_233) ? value_233 = come_decrement_ref_count(value_233, ((struct sNode*)value_233)->finalize, ((struct sNode*)value_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, o2_saved_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, element_type_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__126;
            }
            else {
            }
            __dec_obj121=come_value_234,
            come_value_234=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer(CVALUE_finalize, __dec_obj121,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        Value_236=node_compile(value_233,info);
        if(        !Value_236        ) {
            __result_obj__127 = (_Bool)0;
            ((index_232) ? index_232 = come_decrement_ref_count(index_232, ((struct sNode*)index_232)->finalize, ((struct sNode*)index_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((value_233) ? value_233 = come_decrement_ref_count(value_233, ((struct sNode*)value_233)->finalize, ((struct sNode*)value_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, o2_saved_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, buf_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, element_type_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__127;
        }
        else {
        }
        come_value2_237=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj122=element_type_225,
        element_type_225=(struct sType*)come_increment_ref_count(sType_clone(come_value2_237->type));
        come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        come_value_234        ) {
            buffer_append_format(buf_223,"[%s] = %s",come_value_234->c_value,come_value2_237->c_value);
        }
        else {
            buffer_append_str(buf_223,come_value2_237->c_value);
        }
        i_224++;
        if(        i_224!=list$1tuple2$2sNode$phsNode$ph$ph_length(initializer_222)        ) {
            buffer_append_str(buf_223,",");
        }
        ((index_232) ? index_232 = come_decrement_ref_count(index_232, ((struct sNode*)index_232)->finalize, ((struct sNode*)index_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((value_233) ? value_233 = come_decrement_ref_count(value_233, ((struct sNode*)value_233)->finalize, ((struct sNode*)value_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, o2_saved_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_223,"}");
    come_value_238=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1056, "struct CVALUE*"))));
    __dec_obj123=come_value_238->c_value,
    come_value_238->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_223));
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj124=come_value_238->type,
    come_value_238->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_225));
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_238->type->mPointerNum++;
    come_value_238->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_238));
    __result_obj__128 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, element_type_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__112;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_214;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_215;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__117;
    if(    self==((void*)0)    ) {
        __result_obj__112 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__112;
    }
    result_214=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1008, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    it_215=self->head;
    while(    it_215!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_214,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_215->item)));
        }
        else {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_214,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_215->item)));
        }
        it_215=it_215->next;
    }
    __result_obj__117 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(result_214);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, result_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_212;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_213;
    it_212=self->head;
    while(    it_212!=((void*)0)    ) {
        prev_it_213=it_212;
        it_212=it_212->next;
        come_call_finalizer(list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, prev_it_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__113 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __right_value360 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_216;
struct tuple2$2sNode$phsNode$ph* __dec_obj115;
void* __right_value361 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_217;
struct tuple2$2sNode$phsNode$ph* __dec_obj116;
void* __right_value362 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_218;
struct tuple2$2sNode$phsNode$ph* __dec_obj117;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__114;
    if(    self->len==0    ) {
        litem_216=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value360=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1027, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_216->prev=((void*)0);
        litem_216->next=((void*)0);
        __dec_obj115=litem_216->item,
        litem_216->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_216;
        self->head=litem_216;
    }
    else if(    self->len==1    ) {
        litem_217=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value361=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1037, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_217->prev=self->head;
        litem_217->next=((void*)0);
        __dec_obj116=litem_217->item,
        litem_217->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_217;
        self->head->next=litem_217;
    }
    else {
        litem_218=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value362=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1047, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_218->prev=self->tail;
        litem_218->next=((void*)0);
        __dec_obj117=litem_218->item,
        litem_218->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_218;
        self->tail=litem_218;
    }
    self->len++;
    __result_obj__114 = self;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
struct tuple2$2sNode$phsNode$ph* __result_obj__115;
void* __right_value363 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_219;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj118;
void* __right_value365 = (void*)0;
struct sNode* __dec_obj119;
struct tuple2$2sNode$phsNode$ph* __result_obj__116;
    if(    self==(void*)0    ) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__115;
    }
    result_219=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj118=result_219->v1,
        result_219->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj119=result_219->v2,
        result_219->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__116 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(result_219);
    come_call_finalizer(tuple2$2sNode$phsNode$ph_finalize, result_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_220;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_221;
    it_220=self->head;
    while(    it_220!=((void*)0)    ) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer(list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, prev_it_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_227;
struct tuple2$2sNode$phsNode$ph* __result_obj__120;
struct tuple2$2sNode$phsNode$ph* __result_obj__121;
struct tuple2$2sNode$phsNode$ph* result_228;
struct tuple2$2sNode$phsNode$ph* __result_obj__122;
result_227 = (void*)0;
result_228 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_227,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__120 = result_227;
        return __result_obj__120;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__121 = self->it->item;
        return __result_obj__121;
    }
    memset(&result_228,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__122 = result_228;
    return __result_obj__122;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_230;
struct tuple2$2sNode$phsNode$ph* __result_obj__123;
struct tuple2$2sNode$phsNode$ph* __result_obj__124;
struct tuple2$2sNode$phsNode$ph* result_231;
struct tuple2$2sNode$phsNode$ph* __result_obj__125;
result_230 = (void*)0;
result_231 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_230,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__123 = result_230;
        return __result_obj__123;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__124 = self->it->item;
        return __result_obj__124;
    }
    memset(&result_231,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__125 = result_231;
    return __result_obj__125;
}

static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_239;
void* __right_value381 = (void*)0;
struct sNode* index_240;
_Bool no_comma_241;
void* __right_value382 = (void*)0;
struct sNode* exp_242;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
_Bool no_comma_243;
void* __right_value385 = (void*)0;
struct sNode* exp_244;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* index_245;
_Bool no_comma_246;
void* __right_value389 = (void*)0;
struct sNode* exp_247;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
_Bool no_comma_248;
void* __right_value392 = (void*)0;
struct sNode* exp_249;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sNode* _inf_value5;
struct sArrayInitializer* _inf_obj_value5;
void* __right_value400 = (void*)0;
struct sNode* __result_obj__133;
    expected_next_character(123,info);
    initializer_239=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1074, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    if(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        index_240=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        no_comma_241=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_242=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_241;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_239,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1094, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_240),(struct sNode*)come_increment_ref_count(exp_242))));
        ((index_240) ? index_240 = come_decrement_ref_count(index_240, ((struct sNode*)index_240)->finalize, ((struct sNode*)index_240)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((exp_242) ? exp_242 = come_decrement_ref_count(exp_242, ((struct sNode*)exp_242)->finalize, ((struct sNode*)exp_242)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        no_comma_243=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_244=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_243;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_239,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1102, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_244))));
        ((exp_244) ? exp_244 = come_decrement_ref_count(exp_244, ((struct sNode*)exp_244)->finalize, ((struct sNode*)exp_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    *info->p==44    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            break;
        }
        if(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            index_245=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            if(            *info->p==61            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            no_comma_246=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_247=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_246;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_239,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1133, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_245),(struct sNode*)come_increment_ref_count(exp_247))));
            ((index_245) ? index_245 = come_decrement_ref_count(index_245, ((struct sNode*)index_245)->finalize, ((struct sNode*)index_245)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp_247) ? exp_247 = come_decrement_ref_count(exp_247, ((struct sNode*)exp_247)->finalize, ((struct sNode*)exp_247)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            no_comma_248=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_249=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_248;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_239,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1141, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_249))));
            ((exp_249) ? exp_249 = come_decrement_ref_count(exp_249, ((struct sNode*)exp_249)->finalize, ((struct sNode*)exp_249)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1147, "struct sNode");
    _inf_obj_value5=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value396=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1147, "struct sArrayInitializer*")),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_239),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sArrayInitializer_finalize;
    _inf_value5->clone=(void*)sArrayInitializer_clone;
    _inf_value5->compile=(void*)sArrayInitializer_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sArrayInitializer_kind;
    _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__133 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value400=_inf_value5)));
    come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, initializer_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sArrayInitializer_finalize, __right_value396, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value400) ? __right_value400 = come_decrement_ref_count(__right_value400, ((struct sNode*)__right_value400)->finalize, ((struct sNode*)__right_value400)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__133;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2){
struct sNode* __dec_obj125;
struct sNode* __dec_obj126;
struct tuple2$2sNode$phsNode$ph* __result_obj__129;
    __dec_obj125=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj126=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__129 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj127;
struct tuple2$2void$psNode$ph* __result_obj__130;
    self->v1=v1;
    __dec_obj127=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__130 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
struct sArrayInitializer* __result_obj__131;
void* __right_value397 = (void*)0;
struct sArrayInitializer* result_250;
void* __right_value398 = (void*)0;
char* __dec_obj128;
void* __right_value399 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj129;
struct sArrayInitializer* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__131 = (void*)0;
        return __result_obj__131;
    }
    result_250=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*"));
    if(    self!=((void*)0)    ) {
        result_250->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj128=result_250->sname,
        result_250->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sArrayInitializer_clone", 5, "char*"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_250->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        __dec_obj129=result_250->initializer,
        result_250->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2sNode$phsNode$ph$ph_finalize, __dec_obj129,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__132 = result_250;
    come_call_finalizer(sArrayInitializer_finalize, result_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value401 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj135;
struct sStructInitializer* __result_obj__140;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value401, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj135=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(initializer));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__140 = (struct sStructInitializer*)come_increment_ref_count(self);
    come_call_finalizer(sStructInitializer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sStructInitializer_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value413 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value413=__builtin_string("sStructInitializer"))));
    (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_259;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct buffer* buf_260;
int i_261;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_262;
struct tuple2$2char$phsNode$ph* it_265;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* name_268=0;
struct sNode* value_269=0;
_Bool Value_270;
_Bool __result_obj__148;
void* __right_value416 = (void*)0;
struct CVALUE* come_value2_271;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_272;
void* __right_value419 = (void*)0;
char* __dec_obj136;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sType* __dec_obj137;
_Bool __result_obj__149;
    initializer_259=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1168, "struct buffer*"))));
    buffer_append_str(buf_260,"{");
    i_261=0;
    for(    o2_saved_262=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_259)),it_265=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_262))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_262))    ;    it_265=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_262))    ){
        multiple_assign_var4=it_265;
        name_268=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        value_269=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
        Value_270=node_compile(value_269,info);
        if(        !Value_270        ) {
            __result_obj__148 = (_Bool)0;
            (name_268 = come_decrement_ref_count(name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((value_269) ? value_269 = come_decrement_ref_count(value_269, ((struct sNode*)value_269)->finalize, ((struct sNode*)value_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, buf_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__148;
        }
        else {
        }
        come_value2_271=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        name_268        ) {
            buffer_append_format(buf_260,".%s = %s",name_268,come_value2_271->c_value);
        }
        else {
            buffer_append_format(buf_260,"%s",come_value2_271->c_value);
        }
        i_261++;
        if(        i_261!=list$1tuple2$2char$phsNode$ph$ph_length(initializer_259)        ) {
            buffer_append_str(buf_260,",");
        }
        (name_268 = come_decrement_ref_count(name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((value_269) ? value_269 = come_decrement_ref_count(value_269, ((struct sNode*)value_269)->finalize, ((struct sNode*)value_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_260,"}");
    come_value_272=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1194, "struct CVALUE*"))));
    __dec_obj136=come_value_272->c_value,
    come_value_272->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_260));
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj137=come_value_272->type,
    come_value_272->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 1197, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_272->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_272));
    __result_obj__149 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__149;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__134;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_251;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_252;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__134 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__134;
    }
    result_251=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1008, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_252=self->head;
    while(    it_252!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_251,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_252->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_251,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_252->item)));
        }
        it_252=it_252->next;
    }
    __result_obj__139 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_251);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_251, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__135;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__135 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value404 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_253;
struct tuple2$2char$phsNode$ph* __dec_obj130;
void* __right_value405 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_254;
struct tuple2$2char$phsNode$ph* __dec_obj131;
void* __right_value406 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_255;
struct tuple2$2char$phsNode$ph* __dec_obj132;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__136;
    if(    self->len==0    ) {
        litem_253=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value404=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1027, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj130=litem_253->item,
        litem_253->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj130,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1    ) {
        litem_254=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value405=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1037, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj131=litem_254->item,
        litem_254->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj131,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value406=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1047, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj132=litem_255->item,
        litem_255->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result_obj__136 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__137;
void* __right_value407 = (void*)0;
struct tuple2$2char$phsNode$ph* result_256;
void* __right_value408 = (void*)0;
char* __dec_obj133;
void* __right_value409 = (void*)0;
struct sNode* __dec_obj134;
struct tuple2$2char$phsNode$ph* __result_obj__138;
    if(    self==(void*)0    ) {
        __result_obj__137 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__137;
    }
    result_256=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj133=result_256->v1,
        result_256->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj134=result_256->v2,
        result_256->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__138 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_256);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_257;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_258;
    it_257=self->head;
    while(    it_257!=((void*)0)    ) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_263;
struct tuple2$2char$phsNode$ph* __result_obj__142;
struct tuple2$2char$phsNode$ph* __result_obj__143;
struct tuple2$2char$phsNode$ph* result_264;
struct tuple2$2char$phsNode$ph* __result_obj__144;
result_263 = (void*)0;
result_264 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_263,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__142 = result_263;
        return __result_obj__142;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__143 = self->it->item;
        return __result_obj__143;
    }
    memset(&result_264,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__144 = result_264;
    return __result_obj__144;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_266;
struct tuple2$2char$phsNode$ph* __result_obj__145;
struct tuple2$2char$phsNode$ph* __result_obj__146;
struct tuple2$2char$phsNode$ph* result_267;
struct tuple2$2char$phsNode$ph* __result_obj__147;
result_266 = (void*)0;
result_267 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_266,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__145 = result_266;
        return __result_obj__145;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__146 = self->it->item;
        return __result_obj__146;
    }
    memset(&result_267,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__147 = result_267;
    return __result_obj__147;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_273;
void* __right_value425 = (void*)0;
char* name_274;
_Bool no_comma_275;
void* __right_value426 = (void*)0;
struct sNode* exp_276;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
_Bool no_comma_277;
void* __right_value429 = (void*)0;
struct sNode* exp_278;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
char* name_279;
_Bool no_comma_280;
void* __right_value433 = (void*)0;
struct sNode* exp_281;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
_Bool no_comma_282;
void* __right_value436 = (void*)0;
struct sNode* exp_283;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sNode* _inf_value6;
struct sStructInitializer* _inf_obj_value6;
void* __right_value444 = (void*)0;
struct sNode* __result_obj__152;
    expected_next_character(123,info);
    initializer_273=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1210, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    if(    *info->p==46    ) {
        info->p++;
        skip_spaces_and_lf(info);
        name_274=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        no_comma_275=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_276=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_275;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_273,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1228, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_274),(struct sNode*)come_increment_ref_count(exp_276))));
        (name_274 = come_decrement_ref_count(name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((exp_276) ? exp_276 = come_decrement_ref_count(exp_276, ((struct sNode*)exp_276)->finalize, ((struct sNode*)exp_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        no_comma_277=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_278=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_277;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_273,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1236, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_278))));
        ((exp_278) ? exp_278 = come_decrement_ref_count(exp_278, ((struct sNode*)exp_278)->finalize, ((struct sNode*)exp_278)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    *info->p==44    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125        ) {
            break;
        }
        if(        *info->p==46        ) {
            info->p++;
            skip_spaces_and_lf(info);
            name_279=(char*)come_increment_ref_count(parse_word(info));
            if(            *info->p==61            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            no_comma_280=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_281=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_280;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_273,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1265, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_279),(struct sNode*)come_increment_ref_count(exp_281))));
            (name_279 = come_decrement_ref_count(name_279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((exp_281) ? exp_281 = come_decrement_ref_count(exp_281, ((struct sNode*)exp_281)->finalize, ((struct sNode*)exp_281)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            no_comma_282=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_283=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_282;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_273,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1273, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_283))));
            ((exp_283) ? exp_283 = come_decrement_ref_count(exp_283, ((struct sNode*)exp_283)->finalize, ((struct sNode*)exp_283)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1279, "struct sNode");
    _inf_obj_value6=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value440=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1279, "struct sStructInitializer*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_273),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sStructInitializer_finalize;
    _inf_value6->clone=(void*)sStructInitializer_clone;
    _inf_value6->compile=(void*)sStructInitializer_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sStructInitializer_kind;
    _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__152 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value444=_inf_value6)));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sStructInitializer_finalize, __right_value440, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value444) ? __right_value444 = come_decrement_ref_count(__right_value444, ((struct sNode*)__right_value444)->finalize, ((struct sNode*)__right_value444)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__152) ? __result_obj__152 = come_decrement_ref_count(__result_obj__152, ((struct sNode*)__result_obj__152)->finalize, ((struct sNode*)__result_obj__152)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__152;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
struct sStructInitializer* __result_obj__150;
void* __right_value441 = (void*)0;
struct sStructInitializer* result_284;
void* __right_value442 = (void*)0;
char* __dec_obj138;
void* __right_value443 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj139;
struct sStructInitializer* __result_obj__151;
    if(    self==(void*)0    ) {
        __result_obj__150 = (void*)0;
        return __result_obj__150;
    }
    result_284=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*"));
    if(    self!=((void*)0)    ) {
        result_284->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj138=result_284->sname,
        result_284->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructInitializer_clone", 5, "char*"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_284->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)    ) {
        __dec_obj139=result_284->initializer,
        result_284->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj139,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__151 = result_284;
    come_call_finalizer(sStructInitializer_finalize, result_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma){
void* __right_value445 = (void*)0;
struct sVar* self_285;
void* __right_value446 = (void*)0;
char* __dec_obj140;
void* __right_value447 = (void*)0;
struct sType* __dec_obj141;
void* __right_value448 = (void*)0;
char* __dec_obj142;
void* __right_value449 = (void*)0;
char* __dec_obj143;
void* __right_value450 = (void*)0;
char* __dec_obj144;
char* __dec_obj145;
void* __right_value459 = (void*)0;
    self_285=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1284, "struct sVar*"));
    __dec_obj140=self_285->mName,
    self_285->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj141=self_285->mType,
    self_285->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    if(    function_param    ) {
        __dec_obj142=self_285->mCValueName,
        self_285->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        static int n_286=0;
        __dec_obj143=self_285->mCValueName,
        self_285->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_286++));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    self_285->mAllocaValue=(_Bool)0;
    self_285->mNoFree=(_Bool)0;
    if(    info->come_fun    ) {
        __dec_obj144=self_285->mFunName,
        self_285->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "07var.c", 1300, "char*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj145=self_285->mFunName,
        self_285->mFunName=((void*)0);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    self_285->mComma=comma;
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_285));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, self_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_302;
unsigned int it_303;
_Bool same_key_exist_304;
char* it2_305;
struct map$2char$phsVar$ph* __result_obj__160;
    if(    self->len*10>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_302=string_get_hash_key(((char*)key))%self->size;
    it_303=hash_302;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_303]        ) {
            if(            string_equals(self->keys[it_303],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_303]);
                    (self->keys[it_303] = come_decrement_ref_count(self->keys[it_303], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_303]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_303]);
                    self->keys[it_303]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_303], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_303]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_303]=item;
                }
                break;
            }
            it_303++;
            if(            it_303>=self->size            ) {
                it_303=0;
            }
            else if(            it_303==hash_302            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_303]=(_Bool)1;
            if(            1            ) {
                self->keys[it_303]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_303]=key;
            }
            if(            1            ) {
                self->items[it_303]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_303]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_304=(_Bool)0;
    for(    it2_305=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_305=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_305,key)        ) {
            same_key_exist_304=(_Bool)1;
        }
    }
    if(    !same_key_exist_304    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__160 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__160;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_287;
void* __right_value451 = (void*)0;
char** keys_288;
void* __right_value452 = (void*)0;
struct sVar** items_289;
void* __right_value453 = (void*)0;
_Bool* item_existance_290;
int len_291;
char* it_294;
struct sVar* default_value_297;
void* __right_value454 = (void*)0;
struct sVar* it2_298;
unsigned int hash_299;
int n_300;
struct sVar* default_value_301;
void* __right_value455 = (void*)0;
default_value_297 = (void*)0;
default_value_301 = (void*)0;
    size_287=self->size*10;
    keys_288=(char**)come_increment_ref_count(((char**)(__right_value451=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_287)), "./comelang.h", 2163, "char**"))));
    items_289=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value452=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_287)), "./comelang.h", 2164, "struct sVar**"))));
    item_existance_290=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value453=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_287)), "./comelang.h", 2165, "_Bool*"))));
    len_291=0;
    for(    it_294=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_294=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_297,0,sizeof(struct sVar*));
        it2_298=((struct sVar*)(__right_value454=map$2char$phsVar$ph_at(self,it_294,(struct sVar*)come_increment_ref_count(default_value_297))));
        come_call_finalizer(sVar_finalize, __right_value454, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_299=string_get_hash_key(((char*)it_294))%size_287;
        n_300=hash_299;
        while(        (_Bool)1        ) {
            if(            item_existance_290[n_300]            ) {
                n_300++;
                if(                n_300>=size_287                ) {
                    n_300=0;
                }
                else if(                n_300==hash_299                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_290[n_300]=(_Bool)1;
                keys_288[n_300]=it_294;
                items_289[n_300]=((struct sVar*)(__right_value455=map$2char$phsVar$ph_at(self,it_294,(struct sVar*)come_increment_ref_count(default_value_301))));
                come_call_finalizer(sVar_finalize, __right_value455, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_291++;
                come_call_finalizer(sVar_finalize, default_value_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_297, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_288;
    self->items=items_289;
    self->item_existance=item_existance_290;
    self->size=size_287;
    self->len=len_291;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_292;
char* __result_obj__153;
char* __result_obj__154;
char* result_293;
char* __result_obj__155;
result_292 = (void*)0;
result_293 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_292,0,sizeof(char*));
        __result_obj__153 = result_292;
        return __result_obj__153;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__154 = self->key_list->it->item;
        return __result_obj__154;
    }
    memset(&result_293,0,sizeof(char*));
    __result_obj__155 = result_293;
    return __result_obj__155;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_295;
char* __result_obj__156;
char* __result_obj__157;
char* result_296;
char* __result_obj__158;
result_295 = (void*)0;
result_296 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_295,0,sizeof(char*));
        __result_obj__156 = result_295;
        return __result_obj__156;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__157 = self->key_list->it->item;
        return __result_obj__157;
    }
    memset(&result_296,0,sizeof(char*));
    __result_obj__158 = result_296;
    return __result_obj__158;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value456 = (void*)0;
struct list_item$1char$ph* litem_306;
char* __dec_obj146;
void* __right_value457 = (void*)0;
struct list_item$1char$ph* litem_307;
char* __dec_obj147;
void* __right_value458 = (void*)0;
struct list_item$1char$ph* litem_308;
char* __dec_obj148;
struct list$1char$ph* __result_obj__159;
    if(    self->len==0    ) {
        litem_306=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value456=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        __dec_obj146=litem_306->item,
        litem_306->item=(char*)come_increment_ref_count(item);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1    ) {
        litem_307=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value457=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        __dec_obj147=litem_307->item,
        litem_307->item=(char*)come_increment_ref_count(item);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value458=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        __dec_obj148=litem_308->item,
        litem_308->item=(char*)come_increment_ref_count(item);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result_obj__159 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__159;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value460 = (void*)0;
struct sVar* self_309;
void* __right_value461 = (void*)0;
char* __dec_obj149;
void* __right_value462 = (void*)0;
struct sType* __dec_obj150;
void* __right_value463 = (void*)0;
char* __dec_obj151;
void* __right_value464 = (void*)0;
    self_309=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1313, "struct sVar*"));
    __dec_obj149=self_309->mName,
    self_309->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj150=self_309->mType,
    self_309->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self_309->mGlobal=(_Bool)1;
    __dec_obj151=self_309->mCValueName,
    self_309->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self_309->mAllocaValue=(_Bool)0;
    self_309->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_309));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, self_309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value465 = (void*)0;
struct sVar* self_310;
void* __right_value466 = (void*)0;
char* __dec_obj152;
void* __right_value467 = (void*)0;
struct sType* __dec_obj153;
void* __right_value468 = (void*)0;
char* __dec_obj154;
void* __right_value469 = (void*)0;
    self_310=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1330, "struct sVar*"));
    __dec_obj152=self_310->mName,
    self_310->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj153=self_310->mType,
    self_310->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self_310->mGlobal=(_Bool)1;
    __dec_obj154=self_310->mCValueName,
    self_310->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self_310->mAllocaValue=(_Bool)0;
    self_310->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_310));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, self_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real_311;
_Bool is_type_name_flag_312;
_Bool multiple_declare_313;
char* p_314;
int sline_315;
void* __right_value470 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* type_316=0;
char* name_317=0;
_Bool err_318=0;
void* __right_value471 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type_319=0;
char* name_320=0;
void* __right_value472 = (void*)0;
_Bool no_output_err_321;
_Bool no_comma_322;
_Bool no_output_come_code_323;
void* __right_value473 = (void*)0;
struct sNode* exp_324;
_Bool attr_define_325;
char* p_326;
int sline_327;
void* __right_value474 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* type_328=0;
char* name_329=0;
_Bool err_330=0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sFun* fun_331;
_Bool val__332;
void* __right_value478 = (void*)0;
char* buf2_333;
struct list$1char$ph* multiple_assign_334;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct list$1char$ph* __dec_obj155;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
char* buf3_335;
void* __right_value483 = (void*)0;
_Bool no_comma_336;
void* __right_value484 = (void*)0;
struct sNode* right_value_337;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value490 = (void*)0;
struct sNode* node_338;
struct sNode* __result_obj__161;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* _inf_value8;
struct sNewChannel* _inf_obj_value8;
void* __right_value496 = (void*)0;
struct sNode* node_339;
struct sNode* __result_obj__164;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_341;
void* __right_value499 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* base_type_342=0;
char* name_343=0;
_Bool err_344=0;
void* __right_value500 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* type2_345=0;
char* var_name_346=0;
_Bool no_comma_347;
void* __right_value501 = (void*)0;
struct sNode* exp_348;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
_Bool no_comma_352;
void* __right_value507 = (void*)0;
struct sNode* exp_353;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var10 = (void*)0;
struct sType* type2_354=0;
char* var_name_355=0;
_Bool no_comma_356;
void* __right_value513 = (void*)0;
struct sNode* exp_357;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
_Bool no_comma_358;
void* __right_value516 = (void*)0;
struct sNode* exp_359;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* right_node_360;
void* __right_value521 = (void*)0;
char* var_name2_361;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value526 = (void*)0;
struct sNode* node_362;
struct sNode* __result_obj__168;
void* __right_value527 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_363=0;
char* name_364=0;
_Bool err_365=0;
void* __right_value528 = (void*)0;
char* __dec_obj166;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value537 = (void*)0;
struct sNode* self_node_369;
void* __right_value538 = (void*)0;
struct sNode* right_node_370;
void* __right_value539 = (void*)0;
struct sNode* node_371;
struct sNode* __result_obj__171;
void* __right_value540 = (void*)0;
struct sNode* __result_obj__172;
void* __right_value541 = (void*)0;
struct sNode* right_value_372;
void* __right_value542 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* _inf_value11;
struct sStoreNode* _inf_obj_value11;
void* __right_value547 = (void*)0;
struct sNode* node_373;
struct sNode* __result_obj__173;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value554 = (void*)0;
struct sNode* node_374;
void* __right_value555 = (void*)0;
struct sNode* __dec_obj173;
struct sNode* __result_obj__174;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sNode* _inf_value13;
struct sLoadNode* _inf_obj_value13;
void* __right_value559 = (void*)0;
struct sNode* node_375;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj174;
struct sNode* __result_obj__175;
char* word_376;
void* __right_value561 = (void*)0;
char* __dec_obj175;
void* __right_value562 = (void*)0;
char* __dec_obj176;
_Bool is_type_name_flag_377;
void* __right_value563 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_378=0;
char* name_379=0;
_Bool err_380=0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sNode* _inf_value14;
struct sLoadNode* _inf_obj_value14;
void* __right_value566 = (void*)0;
struct sNode* node_381;
struct sNode* __result_obj__176;
struct sNode* right_value_382;
_Bool no_comma_383;
void* __right_value567 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sNode* _inf_value15;
struct sStoreNode* _inf_obj_value15;
void* __right_value573 = (void*)0;
struct sNode* node_384;
struct sNode* __result_obj__177;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sNode* _inf_value16;
struct sStoreNode* _inf_obj_value16;
void* __right_value577 = (void*)0;
struct sNode* node_385;
struct sNode* __result_obj__178;
void* __right_value578 = (void*)0;
word_376 = (void*)0;
    sline_real_311=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_312=is_type_name(buf,info);
    multiple_declare_313=(_Bool)0;
    if(    is_type_name_flag_312    ) {
        p_314=info->p;
        sline_315=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            parse_sharp_v5(info);
            multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value470=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_316=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_317=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_318=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value470, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            err_318            ) {
                parse_sharp_v5(info);
                multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value471=parse_variable_name((struct sType*)come_increment_ref_count(type_316),(_Bool)1,info)));
                type_319=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                name_320=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value471, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123                    ) {
                        ((char*)(__right_value472=skip_block(info,(_Bool)0)));
                        (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    else {
                        no_output_err_321=info->no_output_err;
                        no_comma_322=info->no_comma;
                        no_output_come_code_323=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_324=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_322;
                        info->no_output_err=no_output_err_321;
                        info->no_output_come_code=no_output_come_code_323;
                        ((exp_324) ? exp_324 = come_decrement_ref_count(exp_324, ((struct sNode*)exp_324)->finalize, ((struct sNode*)exp_324)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_320,info)&&*info->p==44                ) {
                    multiple_declare_313=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_319, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_320 = come_decrement_ref_count(name_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_317 = come_decrement_ref_count(name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_314;
        info->sline=sline_315;
    }
    attr_define_325=(_Bool)0;
    if(    is_type_name_flag_312&&info->defining_class    ) {
        p_326=info->p;
        sline_327=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value474=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_328=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_329=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_330=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value474, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        err_330&&parsecmp("self",info)        ) {
            attr_define_325=(_Bool)1;
        }
        info->p=p_326;
        info->sline=sline_327;
        come_call_finalizer(sType_finalize, type_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_329 = come_decrement_ref_count(name_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_331=((struct sFun*)(__right_value477=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value476=__builtin_string(buf))))));
    (__right_value475 = come_decrement_ref_count(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value476 = come_decrement_ref_count(__right_value476, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value477, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    (!gComeC&&(charp_operator_equals(buf,"var")||charp_operator_equals(buf,"val")))||charp_operator_equals(buf,"auto")    ) {
        val__332=(_Bool)0;
        if(        charp_operator_equals(buf,"val")        ) {
            val__332=(_Bool)1;
        }
        parse_sharp_v5(info);
        buf2_333=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_334=((void*)0);
        if(        *info->p==44        ) {
            __dec_obj155=multiple_assign_334,
            multiple_assign_334=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1443, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj155,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1char$ph_push_back(multiple_assign_334,(char*)come_increment_ref_count((char*)come_memdup(buf2_333, "07var.c", 1444, "char*")));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_335=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph_push_back(multiple_assign_334,(char*)come_increment_ref_count((char*)come_memdup(buf3_335, "07var.c", 1454, "char*")));
                (buf3_335 = come_decrement_ref_count(buf3_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_336=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_337=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_336;
            parse_sharp_v5(info);
            __dec_obj156=right_value_337,
            right_value_337=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_337),info));
            (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1473, "struct sNode");
            _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value489=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1473, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2_333)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_334),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_337),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,val__332))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sStoreNode_finalize;
            _inf_value7->clone=(void*)sStoreNode_clone;
            _inf_value7->compile=(void*)sStoreNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sStoreNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            node_338=(struct sNode*)come_increment_ref_count(_inf_value7);
            come_call_finalizer(sStoreNode_finalize, __right_value489, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_311;
            __result_obj__161 = (struct sNode*)come_increment_ref_count(node_338);
            ((right_value_337) ? right_value_337 = come_decrement_ref_count(right_value_337, ((struct sNode*)right_value_337)->finalize, ((struct sNode*)right_value_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_338) ? node_338 = come_decrement_ref_count(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf2_333 = come_decrement_ref_count(buf2_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, multiple_assign_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((__result_obj__161) ? __result_obj__161 = come_decrement_ref_count(__result_obj__161, ((struct sNode*)__result_obj__161)->finalize, ((struct sNode*)__result_obj__161)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__161;
            ((right_value_337) ? right_value_337 = come_decrement_ref_count(right_value_337, ((struct sNode*)right_value_337)->finalize, ((struct sNode*)right_value_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_338) ? node_338 = come_decrement_ref_count(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value491=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value491, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(1);
        }
        (buf2_333 = come_decrement_ref_count(buf2_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, multiple_assign_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")    ) {
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1483, "struct sNode");
        _inf_obj_value8=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value493=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "07var.c", 1483, "struct sNewChannel*")),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sNewChannel_finalize;
        _inf_value8->clone=(void*)sNewChannel_clone;
        _inf_value8->compile=(void*)sNewChannel_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sNewChannel_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        node_339=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer(sNewChannel_finalize, __right_value493, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_311;
        __result_obj__164 = (struct sNode*)come_increment_ref_count(node_339);
        ((node_339) ? node_339 = come_decrement_ref_count(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__164) ? __result_obj__164 = come_decrement_ref_count(__result_obj__164, ((struct sNode*)__result_obj__164)->finalize, ((struct sNode*)__result_obj__164)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__164;
        ((node_339) ? node_339 = come_decrement_ref_count(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    multiple_declare_313    ) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_341=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1491, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value499=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_342=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_343=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_344=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value499, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        !err_344        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value500=parse_variable_name((struct sType*)come_increment_ref_count(base_type_342),(_Bool)1,info)));
        type2_345=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        var_name_346=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value500, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_345->mClass->mStruct&&list$1sNode$ph_length(type2_345->mArrayNum)==0            ) {
                info->struct_initializer=(_Bool)1;
                no_comma_347=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_348=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_347;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_341,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1518, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_345),(char*)come_increment_ref_count(var_name_346),(struct sNode*)come_increment_ref_count(exp_348))));
                ((exp_348) ? exp_348 = come_decrement_ref_count(exp_348, ((struct sNode*)exp_348)->finalize, ((struct sNode*)exp_348)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_352=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_353=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_352;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_341,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1528, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_345),(char*)come_increment_ref_count(var_name_346),(struct sNode*)come_increment_ref_count(exp_353))));
                ((exp_353) ? exp_353 = come_decrement_ref_count(exp_353, ((struct sNode*)exp_353)->finalize, ((struct sNode*)exp_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_341,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1532, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_345),(char*)come_increment_ref_count(var_name_346),((void*)0))));
        }
        while(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var10=((struct tuple2$2sType$phchar$ph*)(__right_value512=parse_variable_name((struct sType*)come_increment_ref_count(base_type_342),(_Bool)0,info)));
            type2_354=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            var_name_355=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value512, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==61            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_354->mClass->mStruct&&list$1sNode$ph_length(type2_354->mArrayNum)==0                ) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_356=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_357=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_356;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_341,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1554, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_354),(char*)come_increment_ref_count(var_name_355),(struct sNode*)come_increment_ref_count(exp_357))));
                    ((exp_357) ? exp_357 = come_decrement_ref_count(exp_357, ((struct sNode*)exp_357)->finalize, ((struct sNode*)exp_357)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    no_comma_358=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_359=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_358;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_341,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1566, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_354),(char*)come_increment_ref_count(var_name_355),(struct sNode*)come_increment_ref_count(exp_359))));
                    ((exp_359) ? exp_359 = come_decrement_ref_count(exp_359, ((struct sNode*)exp_359)->finalize, ((struct sNode*)exp_359)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_341,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1570, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_354),(char*)come_increment_ref_count(var_name_355),((void*)0))));
            }
            come_call_finalizer(sType_finalize, type2_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_355 = come_decrement_ref_count(var_name_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        right_node_360=((void*)0);
        var_name2_361=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1577, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value525=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1577, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_341),(struct sType*)come_increment_ref_count(base_type_342),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        node_362=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer(sStoreNode_finalize, __right_value525, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_311;
        __result_obj__168 = (struct sNode*)come_increment_ref_count(node_362);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, base_type_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_343 = come_decrement_ref_count(name_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_346 = come_decrement_ref_count(var_name_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((right_node_360) ? right_node_360 = come_decrement_ref_count(right_node_360, ((struct sNode*)right_node_360)->finalize, ((struct sNode*)right_node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (var_name2_361 = come_decrement_ref_count(var_name2_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_362) ? node_362 = come_decrement_ref_count(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__168;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, base_type_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_343 = come_decrement_ref_count(name_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_346 = come_decrement_ref_count(var_name_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((right_node_360) ? right_node_360 = come_decrement_ref_count(right_node_360, ((struct sNode*)right_node_360)->finalize, ((struct sNode*)right_node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (var_name2_361 = come_decrement_ref_count(var_name2_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_362) ? node_362 = come_decrement_ref_count(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    attr_define_325    ) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value527=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_363=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        name_364=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        err_365=multiple_assign_var11->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value527, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        !err_365        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj166=name_364,
        name_364=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1600, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_364),(struct sType*)come_increment_ref_count(type_363))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1608, "struct sNode");
            _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value536=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1608, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sLoadNode_finalize;
            _inf_value10->clone=(void*)sLoadNode_clone;
            _inf_value10->compile=(void*)sLoadNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sLoadNode_terminated;
            _inf_value10->kind=(void*)sLoadNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            self_node_369=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer(sLoadNode_finalize, __right_value536, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            right_node_370=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_371=(struct sNode*)come_increment_ref_count(store_field(self_node_369,(struct sNode*)come_increment_ref_count(right_node_370),(char*)come_increment_ref_count(name_364),info));
            info->sline_real=sline_real_311;
            __result_obj__171 = (struct sNode*)come_increment_ref_count(node_371);
            ((self_node_369) ? self_node_369 = come_decrement_ref_count(self_node_369, ((struct sNode*)self_node_369)->finalize, ((struct sNode*)self_node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((right_node_370) ? right_node_370 = come_decrement_ref_count(right_node_370, ((struct sNode*)right_node_370)->finalize, ((struct sNode*)right_node_370)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_371) ? node_371 = come_decrement_ref_count(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_364 = come_decrement_ref_count(name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__171) ? __result_obj__171 = come_decrement_ref_count(__result_obj__171, ((struct sNode*)__result_obj__171)->finalize, ((struct sNode*)__result_obj__171)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__171;
            ((self_node_369) ? self_node_369 = come_decrement_ref_count(self_node_369, ((struct sNode*)self_node_369)->finalize, ((struct sNode*)self_node_369)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((right_node_370) ? right_node_370 = come_decrement_ref_count(right_node_370, ((struct sNode*)right_node_370)->finalize, ((struct sNode*)right_node_370)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_371) ? node_371 = come_decrement_ref_count(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real_311;
            __result_obj__172 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value540=create_null_node(info))));
            come_call_finalizer(sType_finalize, type_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_364 = come_decrement_ref_count(name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__right_value540) ? __right_value540 = come_decrement_ref_count(__right_value540, ((struct sNode*)__right_value540)->finalize, ((struct sNode*)__right_value540)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__172;
        }
        come_call_finalizer(sType_finalize, type_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_364 = come_decrement_ref_count(name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    !is_type_name_flag_312&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_372=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj172=right_value_372,
        right_value_372=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_372),info));
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1633, "struct sNode");
        _inf_obj_value11=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value546=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1633, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_372),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sStoreNode_finalize;
        _inf_value11->clone=(void*)sStoreNode_clone;
        _inf_value11->compile=(void*)sStoreNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sStoreNode_kind;
        _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
        node_373=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer(sStoreNode_finalize, __right_value546, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_311;
        __result_obj__173 = (struct sNode*)come_increment_ref_count(node_373);
        ((right_value_372) ? right_value_372 = come_decrement_ref_count(right_value_372, ((struct sNode*)right_value_372)->finalize, ((struct sNode*)right_value_372)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node_373) ? node_373 = come_decrement_ref_count(node_373, ((struct sNode*)node_373)->finalize, ((struct sNode*)node_373)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__173;
        ((right_value_372) ? right_value_372 = come_decrement_ref_count(right_value_372, ((struct sNode*)right_value_372)->finalize, ((struct sNode*)right_value_372)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node_373) ? node_373 = come_decrement_ref_count(node_373, ((struct sNode*)node_373)->finalize, ((struct sNode*)node_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    (_condtional_value_X4=(!is_type_name_flag_312||((struct sFun*)(__right_value550=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value549=__builtin_string(buf)))))))),    (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value549 = come_decrement_ref_count(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    come_call_finalizer(sFun_finalize, __right_value550, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X4    ) {
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1638, "struct sNode");
        _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value553=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1638, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sLoadNode_finalize;
        _inf_value12->clone=(void*)sLoadNode_clone;
        _inf_value12->compile=(void*)sLoadNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sLoadNode_terminated;
        _inf_value12->kind=(void*)sLoadNode_kind;
        _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
        node_374=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer(sLoadNode_finalize, __right_value553, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj173=node_374,
        node_374=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_374),info));
        (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->sline_real=sline_real_311;
        __result_obj__174 = (struct sNode*)come_increment_ref_count(node_374);
        ((node_374) ? node_374 = come_decrement_ref_count(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__174) ? __result_obj__174 = come_decrement_ref_count(__result_obj__174, ((struct sNode*)__result_obj__174)->finalize, ((struct sNode*)__result_obj__174)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__174;
        ((node_374) ? node_374 = come_decrement_ref_count(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    !is_type_name_flag_312    ) {
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1647, "struct sNode");
        _inf_obj_value13=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value558=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1647, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sLoadNode_finalize;
        _inf_value13->clone=(void*)sLoadNode_clone;
        _inf_value13->compile=(void*)sLoadNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sLoadNode_terminated;
        _inf_value13->kind=(void*)sLoadNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        node_375=(struct sNode*)come_increment_ref_count(_inf_value13);
        come_call_finalizer(sLoadNode_finalize, __right_value558, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj174=node_375,
        node_375=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_375),info));
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->sline_real=sline_real_311;
        __result_obj__175 = (struct sNode*)come_increment_ref_count(node_375);
        ((node_375) ? node_375 = come_decrement_ref_count(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__175;
        ((node_375) ? node_375 = come_decrement_ref_count(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            __dec_obj175=word_376,
            word_376=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj176=word_376,
            word_376=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        is_type_name_flag_377=is_type_name(word_376,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_377        ) {
            parse_sharp_v5(info);
            multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value563=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_378=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
            name_379=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            err_380=multiple_assign_var12->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value563, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            !err_380            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign            ) {
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1684, "struct sNode");
                _inf_obj_value14=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value565=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1684, "struct sLoadNode*")),(char*)come_increment_ref_count(name_379),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sLoadNode_finalize;
                _inf_value14->clone=(void*)sLoadNode_clone;
                _inf_value14->compile=(void*)sLoadNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sLoadNode_terminated;
                _inf_value14->kind=(void*)sLoadNode_kind;
                _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
                node_381=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer(sLoadNode_finalize, __right_value565, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                info->sline_real=sline_real_311;
                __result_obj__176 = (struct sNode*)come_increment_ref_count(node_381);
                ((node_381) ? node_381 = come_decrement_ref_count(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_379 = come_decrement_ref_count(name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (word_376 = come_decrement_ref_count(word_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__176) ? __result_obj__176 = come_decrement_ref_count(__result_obj__176, ((struct sNode*)__result_obj__176)->finalize, ((struct sNode*)__result_obj__176)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__176;
                ((node_381) ? node_381 = come_decrement_ref_count(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_382=((void*)0);
                if(                type_378->mClass->mStruct&&list$1sNode$ph_length(type_378->mArrayNum)==0                ) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_383=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj177=right_value_382,
                    right_value_382=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    info->no_comma=no_comma_383;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj178=right_value_382,
                    right_value_382=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj179=right_value_382,
                right_value_382=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_382),info));
                (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1714, "struct sNode");
                _inf_obj_value15=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value572=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1714, "struct sStoreNode*")),(char*)come_increment_ref_count(name_379),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_378),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_382),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sStoreNode_finalize;
                _inf_value15->clone=(void*)sStoreNode_clone;
                _inf_value15->compile=(void*)sStoreNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sStoreNode_kind;
                _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
                node_384=(struct sNode*)come_increment_ref_count(_inf_value15);
                come_call_finalizer(sStoreNode_finalize, __right_value572, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                info->sline_real=sline_real_311;
                __result_obj__177 = (struct sNode*)come_increment_ref_count(node_384);
                ((right_value_382) ? right_value_382 = come_decrement_ref_count(right_value_382, ((struct sNode*)right_value_382)->finalize, ((struct sNode*)right_value_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((node_384) ? node_384 = come_decrement_ref_count(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_379 = come_decrement_ref_count(name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (word_376 = come_decrement_ref_count(word_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__177) ? __result_obj__177 = come_decrement_ref_count(__result_obj__177, ((struct sNode*)__result_obj__177)->finalize, ((struct sNode*)__result_obj__177)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__177;
                ((right_value_382) ? right_value_382 = come_decrement_ref_count(right_value_382, ((struct sNode*)right_value_382)->finalize, ((struct sNode*)right_value_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((node_384) ? node_384 = come_decrement_ref_count(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1719, "struct sNode");
                _inf_obj_value16=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value576=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1719, "struct sStoreNode*")),(char*)come_increment_ref_count(name_379),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_378),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sStoreNode_finalize;
                _inf_value16->clone=(void*)sStoreNode_clone;
                _inf_value16->compile=(void*)sStoreNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sline_real=(void*)sNodeBase_sline_real;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sNodeBase_terminated;
                _inf_value16->kind=(void*)sStoreNode_kind;
                _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
                node_385=(struct sNode*)come_increment_ref_count(_inf_value16);
                come_call_finalizer(sStoreNode_finalize, __right_value576, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                info->sline_real=sline_real_311;
                __result_obj__178 = (struct sNode*)come_increment_ref_count(node_385);
                ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_379 = come_decrement_ref_count(name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (word_376 = come_decrement_ref_count(word_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__178;
                ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            come_call_finalizer(sType_finalize, type_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_379 = come_decrement_ref_count(name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (word_376 = come_decrement_ref_count(word_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    ((struct tuple2$2int$bool$*)(__right_value578=err_msg(info,"unexpected word(%s)(1)",buf)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value578, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
struct sNewChannel* __result_obj__162;
void* __right_value494 = (void*)0;
struct sNewChannel* result_340;
void* __right_value495 = (void*)0;
char* __dec_obj157;
struct sNewChannel* __result_obj__163;
    if(    self==(void*)0    ) {
        __result_obj__162 = (void*)0;
        return __result_obj__162;
    }
    result_340=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(    self!=((void*)0)    ) {
        result_340->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj157=result_340->sname,
        result_340->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_340->sline_real=self->sline_real;
    }
    __result_obj__163 = result_340;
    come_call_finalizer(sNewChannel_finalize, result_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__163;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value502 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_349;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj158;
void* __right_value503 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_350;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj159;
void* __right_value504 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_351;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj160;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__165;
    if(    self->len==0    ) {
        litem_349=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value502=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1097, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_349->prev=((void*)0);
        litem_349->next=((void*)0);
        __dec_obj158=litem_349->item,
        litem_349->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj158,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_349;
        self->head=litem_349;
    }
    else if(    self->len==1    ) {
        litem_350=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value503=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1107, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_350->prev=self->head;
        litem_350->next=((void*)0);
        __dec_obj159=litem_350->item,
        litem_350->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj159,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_350;
        self->head->next=litem_350;
    }
    else {
        litem_351=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value504=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1117, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_351->prev=self->tail;
        litem_351->next=((void*)0);
        __dec_obj160=litem_351->item,
        litem_351->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj160,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_351;
        self->tail=litem_351;
    }
    self->len++;
    __result_obj__165 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj161;
char* __dec_obj162;
struct sNode* __dec_obj163;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__166;
    __dec_obj161=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj162=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj163=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__166 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3){
struct sType* __dec_obj164;
char* __dec_obj165;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__167;
    __dec_obj164=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj164,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj165=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v3=v3;
    __result_obj__167 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value529 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_366;
struct tuple2$2char$phsType$ph* __dec_obj167;
void* __right_value530 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_367;
struct tuple2$2char$phsType$ph* __dec_obj168;
void* __right_value531 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_368;
struct tuple2$2char$phsType$ph* __dec_obj169;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__169;
    if(    self->len==0    ) {
        litem_366=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value529=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1027, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_366->prev=((void*)0);
        litem_366->next=((void*)0);
        __dec_obj167=litem_366->item,
        litem_366->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj167,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_366;
        self->head=litem_366;
    }
    else if(    self->len==1    ) {
        litem_367=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value530=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1037, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_367->prev=self->head;
        litem_367->next=((void*)0);
        __dec_obj168=litem_367->item,
        litem_367->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj168,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_367;
        self->head->next=litem_367;
    }
    else {
        litem_368=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value531=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1047, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_368->prev=self->tail;
        litem_368->next=((void*)0);
        __dec_obj169=litem_368->item,
        litem_368->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj169,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_368;
        self->tail=litem_368;
    }
    self->len++;
    __result_obj__169 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__169;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj170;
struct sType* __dec_obj171;
struct tuple2$2char$phsType$ph* __result_obj__170;
    __dec_obj170=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj171=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__170 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__170;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node_386;
void* __right_value579 = (void*)0;
struct sNode* exp_387;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* _inf_value17;
struct sReadChannelNode* _inf_obj_value17;
void* __right_value585 = (void*)0;
struct sNode* __result_obj__181;
void* __right_value586 = (void*)0;
struct sNode* __dec_obj182;
struct sNode* __result_obj__182;
node_386 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0    ) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_387=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1745, "struct sNode");
        _inf_obj_value17=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value581=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1745, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp_387),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sReadChannelNode_finalize;
        _inf_value17->clone=(void*)sReadChannelNode_clone;
        _inf_value17->compile=(void*)sReadChannelNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sReadChannelNode_kind;
        _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__181 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value585=_inf_value17)));
        ((exp_387) ? exp_387 = come_decrement_ref_count(exp_387, ((struct sNode*)exp_387)->finalize, ((struct sNode*)exp_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node_386) ? node_386 = come_decrement_ref_count(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sReadChannelNode_finalize, __right_value581, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value585) ? __right_value585 = come_decrement_ref_count(__right_value585, ((struct sNode*)__right_value585)->finalize, ((struct sNode*)__right_value585)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__181;
        ((exp_387) ? exp_387 = come_decrement_ref_count(exp_387, ((struct sNode*)exp_387)->finalize, ((struct sNode*)exp_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else {
        __dec_obj182=node_386,
        node_386=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__182 = (struct sNode*)come_increment_ref_count(node_386);
    ((node_386) ? node_386 = come_decrement_ref_count(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__182;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__179;
void* __right_value582 = (void*)0;
struct sReadChannelNode* result_388;
void* __right_value583 = (void*)0;
char* __dec_obj180;
void* __right_value584 = (void*)0;
struct sNode* __dec_obj181;
struct sReadChannelNode* __result_obj__180;
    if(    self==(void*)0    ) {
        __result_obj__179 = (void*)0;
        return __result_obj__179;
    }
    result_388=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(    self!=((void*)0)    ) {
        result_388->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj180=result_388->sname,
        result_388->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_388->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj181=result_388->exp,
        result_388->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__180 = result_388;
    come_call_finalizer(sReadChannelNode_finalize, result_388, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__180;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value587 = (void*)0;
struct sNode* right_value_389;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value18;
struct sWriteChannelNode* _inf_obj_value18;
void* __right_value595 = (void*)0;
struct sNode* __result_obj__185;
void* __right_value596 = (void*)0;
struct sNode* __result_obj__186;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_389=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj183=right_value_389,
        right_value_389=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_389),info));
        (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1768, "struct sNode");
        _inf_obj_value18=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value590=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1768, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_389),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value18->clone=(void*)sWriteChannelNode_clone;
        _inf_value18->compile=(void*)sWriteChannelNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sWriteChannelNode_kind;
        _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__185 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value595=_inf_value18)));
        ((right_value_389) ? right_value_389 = come_decrement_ref_count(right_value_389, ((struct sNode*)right_value_389)->finalize, ((struct sNode*)right_value_389)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sWriteChannelNode_finalize, __right_value590, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value595) ? __right_value595 = come_decrement_ref_count(__right_value595, ((struct sNode*)__right_value595)->finalize, ((struct sNode*)__right_value595)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__185) ? __result_obj__185 = come_decrement_ref_count(__result_obj__185, ((struct sNode*)__result_obj__185)->finalize, ((struct sNode*)__result_obj__185)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__185;
        ((right_value_389) ? right_value_389 = come_decrement_ref_count(right_value_389, ((struct sNode*)right_value_389)->finalize, ((struct sNode*)right_value_389)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__186 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value596=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__right_value596) ? __right_value596 = come_decrement_ref_count(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__186;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__183;
void* __right_value591 = (void*)0;
struct sWriteChannelNode* result_390;
void* __right_value592 = (void*)0;
char* __dec_obj184;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj186;
struct sWriteChannelNode* __result_obj__184;
    if(    self==(void*)0    ) {
        __result_obj__183 = (void*)0;
        return __result_obj__183;
    }
    result_390=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(    self!=((void*)0)    ) {
        result_390->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj184=result_390->sname,
        result_390->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_390->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __dec_obj185=result_390->exp,
        result_390->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        __dec_obj186=result_390->right_value,
        result_390->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__184 = result_390;
    come_call_finalizer(sWriteChannelNode_finalize, result_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__184;
}

