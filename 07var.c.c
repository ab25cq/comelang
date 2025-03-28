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
    _Bool mDefferRightValue;
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
    _Bool mConstFun;
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
    _Bool mConstFun;
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
    _Bool in_method_block;
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
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
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
void FILE_on_drop(struct _IO_FILE* self);
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
void int_times(int self, void* parent, void (*block)(void*,int));
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
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
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info, _Bool skip_exception);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
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
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
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
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
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
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
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

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_121;
struct list$1char$* __result_obj__59;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_121=0;    i_121<num_value;    i_121++    ){
        list$1char$_push_back(self,values[i_121]);
    }
    __result_obj__59 = (struct list$1char$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_122;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_123;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_124;
struct list$1char$* __result_obj__58;
    if(    self->len==0) {
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1111, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1121, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1131, "struct list_item$1char$*"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_125;
struct list_item$1char$* prev_it_126;
    it_125=self->head;
    while(it_125!=((void*)0)) {
        prev_it_126=it_125;
        it_125=it_125->next;
        /*c*/ come_call_finalizer3(prev_it_126,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_127;
struct list$1char$p* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_127=0;    i_127<num_value;    i_127++    ){
        list$1char$p_push_back(self,values[i_127]);
    }
    __result_obj__62 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_128;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_129;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_130;
struct list$1char$p* __result_obj__61;
    if(    self->len==0) {
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1111, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1121, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1131, "struct list_item$1char$p*"))));
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_131;
struct list_item$1char$p* prev_it_132;
    it_131=self->head;
    while(it_131!=((void*)0)) {
        prev_it_132=it_131;
        it_131=it_131->next;
        /*c*/ come_call_finalizer3(prev_it_132,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_133;
struct list$1short$* __result_obj__65;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_133=0;    i_133<num_value;    i_133++    ){
        list$1short$_push_back(self,values[i_133]);
    }
    __result_obj__65 = (struct list$1short$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_134;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_135;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_136;
struct list$1short$* __result_obj__64;
    if(    self->len==0) {
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1111, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1121, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1131, "struct list_item$1short$*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_137;
struct list_item$1short$* prev_it_138;
    it_137=self->head;
    while(it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*c*/ come_call_finalizer3(prev_it_138,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_139;
struct list$1int$* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1int$_push_back(self,values[i_139]);
    }
    __result_obj__68 = (struct list$1int$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_140;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_141;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_142;
struct list$1int$* __result_obj__67;
    if(    self->len==0) {
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1111, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1121, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1131, "struct list_item$1int$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__67 = self;
    return __result_obj__67;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_143;
struct list_item$1int$* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_145;
struct list$1long$* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1long$_push_back(self,values[i_145]);
    }
    __result_obj__71 = (struct list$1long$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_146;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_147;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_148;
struct list$1long$* __result_obj__70;
    if(    self->len==0) {
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1111, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1121, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1131, "struct list_item$1long$*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__70 = self;
    return __result_obj__70;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_149;
struct list_item$1long$* prev_it_150;
    it_149=self->head;
    while(it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_151;
struct list$1float$* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1float$_push_back(self,values[i_151]);
    }
    __result_obj__74 = (struct list$1float$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_152;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_153;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_154;
struct list$1float$* __result_obj__73;
    if(    self->len==0) {
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1111, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1121, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1131, "struct list_item$1float$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__73 = self;
    return __result_obj__73;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_155;
struct list_item$1float$* prev_it_156;
    it_155=self->head;
    while(it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_157;
struct list$1double$* __result_obj__77;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1double$_push_back(self,values[i_157]);
    }
    __result_obj__77 = (struct list$1double$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_158;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_159;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_160;
struct list$1double$* __result_obj__76;
    if(    self->len==0) {
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1111, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1121, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1131, "struct list_item$1double$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__76 = self;
    return __result_obj__76;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_161;
struct list_item$1double$* prev_it_162;
    it_161=self->head;
    while(it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__111 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*c*/ come_call_finalizer3(prev_it_197,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_201;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_202;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_203;
char* __dec_obj15;
struct list$1char$ph* __result_obj__113;
    if(    self->len==0) {
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1111, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1121, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1131, "struct list_item$1char$ph*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        __dec_obj15=litem_203->item,
        litem_203->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__113 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
}

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
char* __dec_obj16;
void* __right_value227 = (void*)0;
struct sType* __dec_obj41;
struct sNode* __dec_obj42;
void* __right_value228 = (void*)0;
struct list$1char$ph* __dec_obj43;
void* __right_value240 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj50;
char* __dec_obj51;
struct sStoreNode* __result_obj__184;
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value187,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj41=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj42=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    ((void*)0);
    __dec_obj43=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign));
    /*b*/ come_call_finalizer3(__dec_obj43,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    ((void*)0);
    __dec_obj50=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare));
    /*b*/ come_call_finalizer3(__dec_obj50,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj51=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__184 = (struct sStoreNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__184,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value241 = (void*)0;
char* __result_obj__185;
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value241=__builtin_string("sStoreNode"))));
    (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__185;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sVar* var__276;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_301=0;
char* Err_302=0;
_Bool _if_conditional1;
_Bool __result_obj__199;
void* __right_value248 = (void*)0;
struct sType* type_303;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_304;
struct tuple3$3sType$phchar$phsNode$ph* it_307;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var2 = (void*)0;
struct sType* type_310=0;
char* var_name_311=0;
struct sNode* right_value_312=0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_2_313=0;
char* Err_314=0;
_Bool _if_conditional2;
_Bool __result_obj__206;
void* __right_value256 = (void*)0;
struct sType* left_type_315;
_Bool Value_316;
_Bool __result_obj__207;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
_Bool Value_318;
void* __right_value261 = (void*)0;
struct CVALUE* right_value_319;
struct sType* right_type_320;
int i_321;
struct list$1char$ph* o2_saved_322;
char* it_325;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sVar* var__328;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* right_type2_329;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
char* multiple_var_name_337;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
char* __dec_obj52;
struct list$1char$ph* o2_saved_338;
char* it_339;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* right_type2_340;
struct sVar* var__341;
void* __right_value274 = (void*)0;
struct sType* var_type_342;
void* __right_value275 = (void*)0;
struct sType* left_type_343;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct CVALUE* right_value2_344;
void* __right_value278 = (void*)0;
char* __dec_obj53;
void* __right_value279 = (void*)0;
struct sType* __dec_obj54;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct CVALUE* come_value_345;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_346=0;
char* Err_347=0;
_Bool _if_conditional3;
_Bool __result_obj__218;
void* __right_value285 = (void*)0;
char* __dec_obj55;
void* __right_value286 = (void*)0;
char* __dec_obj56;
void* __right_value287 = (void*)0;
struct sType* __dec_obj57;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sVar* var__348;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_4_349=0;
char* Err_350=0;
_Bool _if_conditional4;
_Bool __result_obj__219;
void* __right_value295 = (void*)0;
struct sType* type_351;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_5_352=0;
char* Err_353=0;
_Bool _if_conditional5;
_Bool __result_obj__220;
void* __right_value298 = (void*)0;
struct sType* left_type_354;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1sNode$ph* o2_saved_355;
struct sNode* it_358;
_Bool Value_361;
void* __right_value301 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c1_362=0;
char* Err_363=0;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_364;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_365;
void* __right_value307 = (void*)0;
char* __dec_obj58;
void* __right_value308 = (void*)0;
struct sType* __dec_obj59;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sVar* var__369;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* type_370;
void* __right_value318 = (void*)0;
_Bool Value_371;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
_Bool array_initializer_372;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
_Bool struct_initializer_373;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
_Bool new_channel_374;
void* __right_value325 = (void*)0;
struct CVALUE* right_value_375;
struct sType* right_type_376;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sType* var_type_377;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sType* left_type_378;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sVar* var__379;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct CVALUE* come_value_380;
void* __right_value336 = (void*)0;
char* __dec_obj63;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sVar* var__381;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct CVALUE* come_value_382;
void* __right_value343 = (void*)0;
char* __dec_obj64;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_6_383=0;
char* Err_384=0;
_Bool _if_conditional6;
_Bool __result_obj__228;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value350 = (void*)0;
char* __dec_obj65;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var9 = (void*)0;
_Bool come_exception_var_7_386=0;
char* Err_387=0;
_Bool _if_conditional7;
_Bool __result_obj__229;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_388;
void* __right_value357 = (void*)0;
char* __dec_obj66;
void* __right_value358 = (void*)0;
struct sType* __dec_obj67;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value362 = (void*)0;
char* __dec_obj68;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* __dec_obj69;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_8_390=0;
char* Err_391=0;
_Bool _if_conditional8;
_Bool __result_obj__230;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value372 = (void*)0;
char* __dec_obj70;
void* __right_value373 = (void*)0;
struct sType* __dec_obj71;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_9_393=0;
char* Err_394=0;
_Bool _if_conditional9;
_Bool __result_obj__231;
void* __right_value377 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_10_395=0;
char* Err_396=0;
_Bool _if_conditional10;
_Bool __result_obj__232;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value381 = (void*)0;
char* __dec_obj72;
void* __right_value382 = (void*)0;
struct sType* __dec_obj73;
_Bool Value_398;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
_Bool new_channel_399;
void* __right_value385 = (void*)0;
struct CVALUE* right_value_400;
struct sType* right_type_401;
struct sClass* current_stack_frame_struct_402;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
_Bool _if_conditional11;
struct sVar* parent_var_403;
struct sType* left_type_404;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_11_405=0;
char* Err_406=0;
_Bool _if_conditional12;
_Bool __result_obj__233;
void* __right_value392 = (void*)0;
char* c_value_407;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value395 = (void*)0;
char* __dec_obj74;
void* __right_value396 = (void*)0;
char* __dec_obj75;
void* __right_value397 = (void*)0;
struct sType* __dec_obj76;
_Bool __result_obj__234;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_12_409=0;
char* Err_410=0;
_Bool _if_conditional13;
_Bool __result_obj__235;
void* __right_value401 = (void*)0;
char* c_value_411;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value404 = (void*)0;
char* __dec_obj77;
void* __right_value405 = (void*)0;
char* __dec_obj78;
void* __right_value406 = (void*)0;
struct sType* __dec_obj79;
_Bool __result_obj__236;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_13_413=0;
char* Err_414=0;
_Bool _if_conditional14;
_Bool __result_obj__237;
void* __right_value410 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_14_415=0;
char* Err_416=0;
_Bool _if_conditional15;
_Bool __result_obj__238;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value413 = (void*)0;
char* __dec_obj80;
void* __right_value414 = (void*)0;
char* __dec_obj81;
void* __right_value415 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__239;
struct sVar* var__418;
void* __right_value416 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_15_419=0;
char* Err_420=0;
_Bool _if_conditional16;
_Bool __result_obj__240;
void* __right_value417 = (void*)0;
struct sType* __dec_obj83;
void* __right_value418 = (void*)0;
struct sType* left_type_421;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_16_422=0;
char* Err_423=0;
_Bool _if_conditional17;
_Bool __result_obj__241;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value424 = (void*)0;
char* __dec_obj84;
void* __right_value425 = (void*)0;
struct sType* __dec_obj85;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_17_425=0;
char* Err_426=0;
_Bool _if_conditional18;
_Bool __result_obj__242;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_427;
void* __right_value431 = (void*)0;
char* __dec_obj86;
void* __right_value432 = (void*)0;
struct sType* __dec_obj87;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_18_428=0;
char* Err_429=0;
_Bool _if_conditional19;
_Bool __result_obj__243;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* come_value_430;
void* __right_value438 = (void*)0;
char* __dec_obj88;
void* __right_value439 = (void*)0;
struct sType* __dec_obj89;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value442 = (void*)0;
char* __dec_obj90;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* __dec_obj91;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var21 = (void*)0;
_Bool come_exception_var_19_432=0;
char* Err_433=0;
_Bool _if_conditional20;
_Bool __result_obj__244;
void* __right_value449 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_20_434=0;
char* Err_435=0;
_Bool _if_conditional21;
_Bool __result_obj__245;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct CVALUE* come_value_436;
void* __right_value452 = (void*)0;
char* __dec_obj92;
void* __right_value453 = (void*)0;
struct sType* __dec_obj93;
    if(    self->multiple_declare) {
        var__276=((struct sVar*)(__right_value244=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value243=__builtin_string(self->name))))));
        (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value244,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__276) {
            if(            var__276->mType->mHeap) {
                free_object(((struct sType*)(__right_value245=sType_clone(var__276->mType))),var__276->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value245,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value246=__builtin_string(self->name))));
            (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value247=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_1_301=multiple_assign_var1->v1;
            Err_302=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            (_if_conditional1=(Err_302)),            /*c*/ come_call_finalizer3(__right_value247,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                __result_obj__199 = (_Bool)1;
                (Err_302 = come_decrement_ref_count(Err_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__199;
            }
            else {
            }
            (Err_302 = come_decrement_ref_count(Err_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_303=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info,(_Bool)0));
        for(        o2_saved_304=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_307=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin((o2_saved_304));        !list$1tuple3$3sType$phchar$phsNode$ph$ph_end((o2_saved_304));        it_307=list$1tuple3$3sType$phchar$phsNode$ph$ph_next((o2_saved_304))        ){
            multiple_assign_var2=it_307;
            type_310=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            var_name_311=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            right_value_312=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v3);
            var__276=((struct sVar*)(__right_value251=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value250=__builtin_string(var_name_311))))));
            (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value251,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            var__276) {
                if(                var__276->mType->mHeap) {
                    free_object(((struct sType*)(__right_value252=sType_clone(var__276->mType))),var__276->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value252,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value253=__builtin_string(var_name_311))));
                (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_variable_to_table(var_name_311,(struct sType*)come_increment_ref_count(sType_clone(type_310)),info,(_Bool)0);
            var__276=get_variable_from_table(info->lv_table,var_name_311);
            if(            var__276==((void*)0)) {
                multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value255=err_msg(info,"var not found(%s)(ZY) at definition of variable",it_307)));
                come_exception_var_2_313=multiple_assign_var3->v1;
                Err_314=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_314)),                /*c*/ come_call_finalizer3(__right_value255,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    __result_obj__206 = (_Bool)1;
                    (Err_314 = come_decrement_ref_count(Err_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_311 = come_decrement_ref_count(var_name_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_312) ? right_value_312 = come_decrement_ref_count(right_value_312, ((struct sNode*)right_value_312)->finalize, ((struct sNode*)right_value_312)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_304,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_303,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__206;
                }
                else {
                }
                (Err_314 = come_decrement_ref_count(Err_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            left_type_315=(struct sType*)come_increment_ref_count(sType_clone(var__276->mType));
            if(            right_value_312) {
                Value_316=node_compile(right_value_312,info);
                if(                !Value_316) {
                    __result_obj__207 = (_Bool)0;
                    /*c*/ come_call_finalizer3(type_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_311 = come_decrement_ref_count(var_name_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_312) ? right_value_312 = come_decrement_ref_count(right_value_312, ((struct sNode*)right_value_312)->finalize, ((struct sNode*)right_value_312)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(left_type_315,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_304,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_303,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__207;
                }
                else {
                }
                come_value_317=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value258=make_define_var(left_type_315,var__276->mCValueName,(_Bool)0,info))),come_value_317->c_value);
                (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_317,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__276->mCValueName,((char*)(__right_value259=make_type_name_string(left_type_315,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value260=make_define_var(left_type_315,var__276->mCValueName,(_Bool)0,info))));
                (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_311 = come_decrement_ref_count(var_name_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_value_312) ? right_value_312 = come_decrement_ref_count(right_value_312, ((struct sNode*)right_value_312)->finalize, ((struct sNode*)right_value_312)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_type_315,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_304,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_303,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_318=node_compile(self->right_value,info);
        if(        !Value_318) {
            return (_Bool)0;
        }
        else {
        }
        right_value_319=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_320=right_value_319->type;
        if(        right_type_320->mNoSolvedGenericsType) {
            right_type_320=right_type_320->mNoSolvedGenericsType;
        }
        i_321=0;
        for(        o2_saved_322=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_325=list$1char$ph_begin((o2_saved_322));        !list$1char$ph_end((o2_saved_322));        it_325=list$1char$ph_next((o2_saved_322))        ){
            if(            i_321<list$1sType$ph_length(right_type_320->mGenericsTypes)) {
                var__328=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value263=__builtin_string(it_325)))));
                (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                var__328) {
                    if(                    var__328->mType->mHeap) {
                        free_object(((struct sType*)(__right_value265=sType_clone(var__328->mType))),var__328->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value265,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value266=__builtin_string(it_325))));
                    (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                right_type2_329=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(right_type_320->mGenericsTypes,i_321));
                add_variable_to_table(it_325,(struct sType*)come_increment_ref_count(sType_clone(right_type2_329)),info,(_Bool)0);
                /*c*/ come_call_finalizer3(var__328,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_329,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            i_321++;
        }
        /*c*/ come_call_finalizer3(o2_saved_322,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        static int num_multiple_var_336=0;
        multiple_var_name_337=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_336));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value270=make_define_var(right_value_319->type,multiple_var_name_337,(_Bool)0,info))));
        (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_337,right_value_319->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_337,right_value_319->c_value);
        }
        __dec_obj52=right_value_319->c_value,
        right_value_319->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name_337, "07var.c", 125, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        i_321=0;
        for(        o2_saved_338=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_339=list$1char$ph_begin((o2_saved_338));        !list$1char$ph_end((o2_saved_338));        it_339=list$1char$ph_next((o2_saved_338))        ){
            if(            i_321<list$1sType$ph_length(right_type_320->mGenericsTypes)) {
                right_type2_340=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value272=list$1sType$ph_operator_load_element(right_type_320->mGenericsTypes,i_321)))));
                /*c*/ come_call_finalizer3(__right_value272,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                var__341=get_variable_from_table(info->lv_table,it_339);
                var_type_342=(struct sType*)come_increment_ref_count(sType_clone(var__341->mType));
                var_type_342->mStatic=(_Bool)0;
                left_type_343=(struct sType*)come_increment_ref_count(sType_clone(var__341->mType));
                right_value2_344=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 139, "struct CVALUE*"))));
                __dec_obj53=right_value2_344->c_value,
                right_value2_344->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_319->c_value,i_321+1));
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj54=right_value2_344->type,
                right_value2_344->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_340));
                /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                right_value2_344->var=((void*)0);
                come_value_345=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 145, "struct CVALUE*"))));
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value284=check_assign_type(((char*)(__right_value283=xsprintf("\%s is assining to}",((char*)(__right_value282=string_to_string(self->name)))))),left_type_343,right_type2_340,come_value_345,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_3_346=multiple_assign_var4->v1;
                Err_347=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_347)),                (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value284,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    __result_obj__218 = (_Bool)1;
                    /*c*/ come_call_finalizer3(right_type2_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(var_type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_value2_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_345,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (Err_347 = come_decrement_ref_count(Err_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(o2_saved_338,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_value_319,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (multiple_var_name_337 = come_decrement_ref_count(multiple_var_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__218;
                }
                else {
                }
                if(                right_type2_340->mHeap&&left_type_343->mHeap&&left_type_343->mPointerNum>0&&right_type2_340->mPointerNum>0) {
                    std_move(left_type_343,right_type2_340,right_value2_344,info,(_Bool)0);
                    __dec_obj55=come_value_345->c_value,
                    come_value_345->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__341->mCValueName,right_value2_344->c_value));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj56=come_value_345->c_value,
                    come_value_345->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__341->mCValueName,right_value2_344->c_value));
                    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj57=come_value_345->type,
                come_value_345->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_343));
                /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_345->var=var__341;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value288=make_define_var(left_type_343,var__341->mCValueName,(_Bool)0,info))));
                (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_345->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_345->c_value);
                }
                /*c*/ come_call_finalizer3(right_type2_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value2_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_345,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_347 = come_decrement_ref_count(Err_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            i_321++;
        }
        /*c*/ come_call_finalizer3(o2_saved_338,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_value_319,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (multiple_var_name_337 = come_decrement_ref_count(multiple_var_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)) {
        var__348=((struct sVar*)(__right_value291=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value290=__builtin_string(self->name))))));
        (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value291,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__348) {
            if(            var__348->mType->mHeap) {
                free_object(((struct sType*)(__right_value292=sType_clone(var__348->mType))),var__348->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value292,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value293=__builtin_string(self->name))));
            (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value294=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_4_349=multiple_assign_var5->v1;
            Err_350=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            if(            (_if_conditional4=(Err_350)),            /*c*/ come_call_finalizer3(__right_value294,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__219 = (_Bool)1;
                (Err_350 = come_decrement_ref_count(Err_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__219;
            }
            else {
            }
            (Err_350 = come_decrement_ref_count(Err_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_351=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info,(_Bool)0));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_351)),info,(_Bool)0);
        var__348=get_variable_from_table(info->lv_table,self->name);
        if(        var__348==((void*)0)) {
            var__348=get_variable_from_table(info->gv_table,self->name);
            if(            var__348==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value297=err_msg(info,"var not found(%s)(Y) at definition of variable",self->name)));
                come_exception_var_5_352=multiple_assign_var6->v1;
                Err_353=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_353)),                /*c*/ come_call_finalizer3(__right_value297,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional5) {
                    __result_obj__220 = (_Bool)1;
                    (Err_353 = come_decrement_ref_count(Err_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__220;
                }
                else {
                }
                (Err_353 = come_decrement_ref_count(Err_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_354=(struct sType*)come_increment_ref_count(sType_clone(var__348->mType));
        if(        left_type_354->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__348->mCValueName);
        }
        else if(        list$1sNode$ph_length(left_type_354->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value299=make_define_var(left_type_354,var__348->mCValueName,(_Bool)0,info))));
            (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__348->mCValueName,((char*)(__right_value300=make_type_name_string(left_type_354,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value300 = come_decrement_ref_count(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            for(            o2_saved_355=(struct list$1sNode$ph*)come_increment_ref_count((left_type_354->mArrayNum)),it_358=list$1sNode$ph_begin((o2_saved_355));            !list$1sNode$ph_end((o2_saved_355));            it_358=list$1sNode$ph_next((o2_saved_355))            ){
                Value_361=node_compile(it_358,info);
                if(                !Value_361) {
                    multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value301=err_msg(info,"invalid array num")));
                    come_exception_var_c1_362=multiple_assign_var7->v1;
                    Err_363=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    ((Err_363)?(puts(Err_363),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value301,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_363 = come_decrement_ref_count(Err_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                }
                come_value_364=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"*(%s)",come_value_364->c_value);
                /*c*/ come_call_finalizer3(come_value_364,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_355,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value303=make_define_var(left_type_354,var__348->mCValueName,(_Bool)0,info))));
            (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_354->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__348->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__348->mCValueName,((char*)(__right_value304=make_type_name_string(left_type_354,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_365=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 253, "struct CVALUE*"))));
            __dec_obj58=come_value_365->c_value,
            come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__348->mCValueName));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj59=come_value_365->type,
            come_value_365->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_354));
            /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_365->var=var__348;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_365));
            /*c*/ come_call_finalizer3(come_value_365,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !left_type_354->mClass->mNumber&&left_type_354->mPointerNum==0) {
            var__348->mType->mAllocaValue=(_Bool)1;
            if(            var__348->mType->mNoSolvedGenericsType) {
                var__348->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        /*c*/ come_call_finalizer3(type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_354,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->alloc) {
        var__369=((struct sVar*)(__right_value314=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value313=__builtin_string(self->name))))));
        (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value314,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__369) {
            if(            var__369->mType->mHeap) {
                free_object(((struct sType*)(__right_value315=sType_clone(var__369->mType))),var__369->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value315,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value316=__builtin_string(self->name))));
            (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_370=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info,(_Bool)0));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_370)),info,(_Bool)0);
            /*c*/ come_call_finalizer3(type_370,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        Value_371=node_compile(self->right_value,info);
        if(        !Value_371) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_372=string_operator_equals(((char*)(__right_value320=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        struct_initializer_373=string_operator_equals(((char*)(__right_value322=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value322 = come_decrement_ref_count(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        new_channel_374=string_operator_equals(((char*)(__right_value324=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_375=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_376=right_value_375->type;
        if(        self->type==((void*)0)) {
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_376)),info,(_Bool)0);
        }
        else {
        }
        var__369=get_variable_from_table(info->lv_table,self->name);
        var_type_377=(struct sType*)come_increment_ref_count(sType_clone(var__369->mType));
        var_type_377->mStatic=(_Bool)0;
        if(        !array_initializer_372&&!struct_initializer_373&&!var__369->mType->mStatic&&!var_type_377->mConstant&&list$1sNode$ph_length(var_type_377->mArrayNum)==0) {
            if(            var_type_377->mClass->mNumber) {
            }
            else if(            (var_type_377->mClass->mStruct||var_type_377->mClass->mUnion||var_type_377->mClass->mEnum)||var_type_377->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__369->mCValueName,((char*)(__right_value328=make_type_name_string(var_type_377,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value328 = come_decrement_ref_count(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_378=(struct sType*)come_increment_ref_count(sType_clone(var__369->mType));
        if(        array_initializer_372) {
            var__379=((struct sVar*)(__right_value332=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value331=__builtin_string(self->name))))));
            (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value332,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value333=make_define_var(var__379->mType,var__379->mCValueName,(_Bool)0,info))),right_value_375->c_value);
            (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_380=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 332, "struct CVALUE*"))));
            __dec_obj63=come_value_380->c_value,
            come_value_380->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_380));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_380,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        struct_initializer_373) {
            var__381=((struct sVar*)(__right_value339=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value338=__builtin_string(self->name))))));
            (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value339,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value340=make_define_var(var__381->mType,var__381->mCValueName,(_Bool)0,info))),right_value_375->c_value);
            (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_382=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 349, "struct CVALUE*"))));
            __dec_obj64=come_value_382->c_value,
            come_value_382->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_382));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_382,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        var__369->mType->mStatic||var__369->mType->mConstant) {
            multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value346=check_assign_type(((char*)(__right_value345=xsprintf("\%s is assining to",((char*)(__right_value344=string_to_string(self->name)))))),left_type_378,right_type_376,right_value_375,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_6_383=multiple_assign_var8->v1;
            Err_384=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            (_if_conditional6=(Err_384)),            (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value346,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                __result_obj__228 = (_Bool)1;
                (Err_384 = come_decrement_ref_count(Err_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_375,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_377,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            else {
            }
            add_come_code(info,"%s=%s;\n",((char*)(__right_value347=make_define_var(left_type_378,var__369->mCValueName,(_Bool)0,info))),right_value_375->c_value);
            (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 369, "struct CVALUE*"))));
            __dec_obj65=come_value_385->c_value,
            come_value_385->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_385));
            transpiler_clear_last_code(info);
            (Err_384 = come_decrement_ref_count(Err_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_385,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_376->mHeap&&left_type_378->mHeap&&left_type_378->mPointerNum>0&&right_type_376->mPointerNum>0) {
            multiple_assign_var9=((struct tuple2$2bool$char$ph*)(__right_value353=check_assign_type(((char*)(__right_value352=xsprintf("\%s is assining to",((char*)(__right_value351=string_to_string(self->name)))))),left_type_378,right_type_376,right_value_375,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_7_386=multiple_assign_var9->v1;
            Err_387=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional7=(Err_387)),            (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value353,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __result_obj__229 = (_Bool)1;
                (Err_387 = come_decrement_ref_count(Err_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_375,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_377,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__229;
            }
            else {
            }
            std_move(left_type_378,right_type_376,right_value_375,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value354=make_define_var(left_type_378,var__369->mCValueName,(_Bool)0,info))));
            (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_388=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 392, "struct CVALUE*"))));
            __dec_obj66=come_value_388->c_value,
            come_value_388->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__369->mCValueName,right_value_375->c_value));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj67=come_value_388->type,
            come_value_388->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_378));
            /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_388->var=var__369;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_388));
            add_come_last_code(info,"%s",come_value_388->c_value);
            (Err_387 = come_decrement_ref_count(Err_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_388,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_378->mChannel&&new_channel_374) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value359=make_define_var(left_type_378,var__369->mCValueName,(_Bool)0,info))));
            (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__369->mCValueName);
            come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 406, "struct CVALUE*"))));
            __dec_obj68=come_value_389->c_value,
            come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__369->mCValueName));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj69=come_value_389->type,
            come_value_389->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 408, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_389->type->mPointerNum=1;
            come_value_389->var=var__369;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
            add_come_last_code(info,"%s",come_value_389->c_value);
            /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_378->mPointerNum>0&&left_type_378->mHeap&&string_operator_equals(right_type_376->mClass->mName,"void")&&right_type_376->mPointerNum>0) {
            multiple_assign_var10=((struct tuple2$2bool$char$ph*)(__right_value368=check_assign_type(((char*)(__right_value367=xsprintf("\%s is assining to",((char*)(__right_value366=string_to_string(self->name)))))),left_type_378,right_type_376,right_value_375,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_8_390=multiple_assign_var10->v1;
            Err_391=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional8=(Err_391)),            (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value368,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional8) {
                __result_obj__230 = (_Bool)1;
                (Err_391 = come_decrement_ref_count(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_375,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_377,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__230;
            }
            else {
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value369=make_define_var(left_type_378,var__369->mCValueName,(_Bool)0,info))));
            (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "struct CVALUE*"))));
            __dec_obj70=come_value_392->c_value,
            come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__369->mCValueName,right_value_375->c_value));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj71=come_value_392->type,
            come_value_392->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_378));
            /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_392->var=var__369;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
            add_come_last_code(info,"%s",come_value_392->c_value);
            (Err_391 = come_decrement_ref_count(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_392,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value376=check_assign_type(((char*)(__right_value375=xsprintf("\%s is assining to",((char*)(__right_value374=string_to_string(self->name)))))),left_type_378,right_type_376,right_value_375,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_9_393=multiple_assign_var11->v1;
            Err_394=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            (_if_conditional9=(Err_394)),            (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value376,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __result_obj__231 = (_Bool)1;
                (Err_394 = come_decrement_ref_count(Err_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_375,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_377,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__231;
            }
            else {
            }
            if(            right_type_376->mHeap&&left_type_378->mHeap&&left_type_378->mPointerNum>0&&right_type_376->mPointerNum>0) {
                std_move(left_type_378,right_type_376,right_value_375,info,(_Bool)0);
            }
            if(            left_type_378->mHeap&&!right_value_375->type->mHeap) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value377=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_10_395=multiple_assign_var12->v1;
                Err_396=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_396)),                /*c*/ come_call_finalizer3(__right_value377,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    __result_obj__232 = (_Bool)1;
                    (Err_396 = come_decrement_ref_count(Err_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_394 = come_decrement_ref_count(Err_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_375,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(var_type_377,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__232;
                }
                else {
                }
                (Err_396 = come_decrement_ref_count(Err_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value378=make_define_var(left_type_378,var__369->mCValueName,(_Bool)0,info))));
            (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 459, "struct CVALUE*"))));
            __dec_obj72=come_value_397->c_value,
            come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__369->mCValueName,right_value_375->c_value));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj73=come_value_397->type,
            come_value_397->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_378));
            /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_397->var=var__369;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
            add_come_last_code(info,"%s",come_value_397->c_value);
            (Err_394 = come_decrement_ref_count(Err_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_375,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(var_type_377,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        Value_398=node_compile(self->right_value,info);
        if(        !Value_398) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_399=string_operator_equals(((char*)(__right_value384=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value383 = come_decrement_ref_count(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_401=right_value_400->type;
        current_stack_frame_struct_402=info->current_stack_frame_struct;
        if(        (_if_conditional11=(current_stack_frame_struct_402&&((struct sVar*)(__right_value388=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value387=__builtin_string(self->name))))))==((void*)0))),        (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value388,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional11) {
            parent_var_403=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_403!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_403->mFunName,info->come_fun->mName)) {
                    left_type_404=parent_var_403->mType;
                    if(                    left_type_404->mPointerNum>0&&right_type_401->mPointerNum>0&&right_type_401->mHeap&&left_type_404->mHeap) {
                        multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value391=check_assign_type(((char*)(__right_value390=xsprintf("\%s is assigning to",((char*)(__right_value389=string_to_string(self->name)))))),left_type_404,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_11_405=multiple_assign_var13->v1;
                        Err_406=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        if(                        (_if_conditional12=(Err_406)),                        (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value391,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional12) {
                            __result_obj__233 = (_Bool)1;
                            (Err_406 = come_decrement_ref_count(Err_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__233;
                        }
                        else {
                        }
                        c_value_407=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_403->mCValueName));
                        decrement_ref_count_object(parent_var_403->mType,c_value_407,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_404,right_type_401,right_value_400,info,(_Bool)0);
                        come_value_408=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 499, "struct CVALUE*"))));
                        if(                        parent_var_403->mType->mOriginIsArray) {
                            __dec_obj74=come_value_408->c_value,
                            come_value_408->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj75=come_value_408->c_value,
                            come_value_408->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj76=come_value_408->type,
                        come_value_408->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_404));
                        /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_408->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_408->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_408));
                        __result_obj__234 = (_Bool)1;
                        (Err_406 = come_decrement_ref_count(Err_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_407 = come_decrement_ref_count(c_value_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__234;
                        (Err_406 = come_decrement_ref_count(Err_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_407 = come_decrement_ref_count(c_value_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else if(                    left_type_404->mPointerNum>0&&right_type_401->mPointerNum>0&&string_operator_equals(right_type_401->mClass->mName,"void")&&left_type_404->mHeap) {
                        multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value400=check_assign_type(((char*)(__right_value399=xsprintf("\%s is assigning to",((char*)(__right_value398=string_to_string(self->name)))))),left_type_404,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_12_409=multiple_assign_var14->v1;
                        Err_410=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        if(                        (_if_conditional13=(Err_410)),                        (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value399 = come_decrement_ref_count(__right_value399, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value400,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional13) {
                            __result_obj__235 = (_Bool)1;
                            (Err_410 = come_decrement_ref_count(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__235;
                        }
                        else {
                        }
                        c_value_411=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_403->mCValueName));
                        decrement_ref_count_object(parent_var_403->mType,c_value_411,info,(_Bool)0,(_Bool)0);
                        come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 525, "struct CVALUE*"))));
                        if(                        parent_var_403->mType->mOriginIsArray) {
                            __dec_obj77=come_value_412->c_value,
                            come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj78=come_value_412->c_value,
                            come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj79=come_value_412->type,
                        come_value_412->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_404));
                        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_412->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_412->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
                        __result_obj__236 = (_Bool)1;
                        (Err_410 = come_decrement_ref_count(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_411 = come_decrement_ref_count(c_value_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_412,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__236;
                        (Err_410 = come_decrement_ref_count(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_411 = come_decrement_ref_count(c_value_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_412,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value409=check_assign_type(((char*)(__right_value408=xsprintf("\%s is assigning to",((char*)(__right_value407=string_to_string(self->name)))))),left_type_404,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_13_413=multiple_assign_var15->v1;
                        Err_414=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        if(                        (_if_conditional14=(Err_414)),                        (__right_value407 = come_decrement_ref_count(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value409,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional14) {
                            __result_obj__237 = (_Bool)1;
                            (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__237;
                        }
                        else {
                        }
                        if(                        left_type_404->mHeap&&!right_value_400->type->mHeap) {
                            multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value410=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_exception_var_14_415=multiple_assign_var16->v1;
                            Err_416=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            if(                            (_if_conditional15=(Err_416)),                            /*c*/ come_call_finalizer3(__right_value410,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional15) {
                                __result_obj__238 = (_Bool)1;
                                (Err_416 = come_decrement_ref_count(Err_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__238;
                            }
                            else {
                            }
                            (Err_416 = come_decrement_ref_count(Err_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 553, "struct CVALUE*"))));
                        if(                        parent_var_403->mType->mOriginIsArray) {
                            __dec_obj80=come_value_417->c_value,
                            come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj81=come_value_417->c_value,
                            come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_403->mCValueName,right_value_400->c_value));
                            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj82=come_value_417->type,
                        come_value_417->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_404));
                        /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_417->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_417->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
                        __result_obj__239 = (_Bool)1;
                        (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__239;
                        (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
            }
        }
        var__418=get_variable_from_table(info->lv_table,self->name);
        if(        var__418==((void*)0)) {
            var__418=get_variable_from_table(info->gv_table,self->name);
            if(            var__418==((void*)0)) {
                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value416=err_msg(info,"var not found(%s)(X) at storing variable",self->name)));
                come_exception_var_15_419=multiple_assign_var17->v1;
                Err_420=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional16=(Err_420)),                /*c*/ come_call_finalizer3(__right_value416,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    __result_obj__240 = (_Bool)1;
                    (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__240;
                }
                else {
                }
                (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        var__418->mType==((void*)0)) {
            __dec_obj83=var__418->mType,
            var__418->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_401));
            /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_421=(struct sType*)come_increment_ref_count(sType_clone(var__418->mType));
        if(        (var__418->mType->mStatic||var__418->mType->mConstant)&&!var__418->mGlobal) {
            multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value421=check_assign_type(((char*)(__right_value420=xsprintf("\%s is assining to",((char*)(__right_value419=string_to_string(self->name)))))),left_type_421,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_16_422=multiple_assign_var18->v1;
            Err_423=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            (_if_conditional17=(Err_423)),            (__right_value419 = come_decrement_ref_count(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value421,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                __result_obj__241 = (_Bool)1;
                (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
            else {
            }
            come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 597, "struct CVALUE*"))));
            __dec_obj84=come_value_424->c_value,
            come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__418->mCValueName,right_value_400->c_value));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj85=come_value_424->type,
            come_value_424->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_424->var=var__418;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
            add_come_last_code(info,"%s",come_value_424->c_value);
            (Err_423 = come_decrement_ref_count(Err_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_401->mHeap&&left_type_421->mHeap&&left_type_421->mPointerNum>0&&right_type_401->mPointerNum>0) {
            multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value428=check_assign_type(((char*)(__right_value427=xsprintf("\%s is assining to",((char*)(__right_value426=string_to_string(self->name)))))),left_type_421,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_425=multiple_assign_var19->v1;
            Err_426=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional18=(Err_426)),            (__right_value426 = come_decrement_ref_count(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value427 = come_decrement_ref_count(__right_value427, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value428,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                __result_obj__242 = (_Bool)1;
                (Err_426 = come_decrement_ref_count(Err_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
            else {
            }
            decrement_ref_count_object(left_type_421,var__418->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_421,right_type_401,right_value_400,info,(_Bool)0);
            come_value_427=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 616, "struct CVALUE*"))));
            __dec_obj86=come_value_427->c_value,
            come_value_427->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__418->mCValueName,right_value_400->c_value));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj87=come_value_427->type,
            come_value_427->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_427->var=var__418;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_427));
            add_come_last_code(info,"%s",come_value_427->c_value);
            (Err_426 = come_decrement_ref_count(Err_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_421->mPointerNum>0&&left_type_421->mHeap&&string_operator_equals(right_type_401->mClass->mName,"void")&&right_type_401->mPointerNum>0) {
            multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value435=check_assign_type(((char*)(__right_value434=xsprintf("\%s is assining to",((char*)(__right_value433=string_to_string(self->name)))))),left_type_421,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_18_428=multiple_assign_var20->v1;
            Err_429=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional19=(Err_429)),            (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value435,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                __result_obj__243 = (_Bool)1;
                (Err_429 = come_decrement_ref_count(Err_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__243;
            }
            else {
            }
            decrement_ref_count_object(left_type_421,var__418->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_430=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 634, "struct CVALUE*"))));
            __dec_obj88=come_value_430->c_value,
            come_value_430->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__418->mCValueName,right_value_400->c_value));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj89=come_value_430->type,
            come_value_430->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_430->var=var__418;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_430));
            add_come_last_code(info,"%s",come_value_430->c_value);
            (Err_429 = come_decrement_ref_count(Err_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_421->mChannel&&new_channel_399) {
            come_value_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 645, "struct CVALUE*"))));
            __dec_obj90=come_value_431->c_value,
            come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__418->mCValueName));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj91=come_value_431->type,
            come_value_431->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 647, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_431->type->mPointerNum=1;
            come_value_431->var=var__418;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_431));
            add_come_last_code(info,"%s",come_value_431->c_value);
            /*c*/ come_call_finalizer3(come_value_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var21=((struct tuple2$2bool$char$ph*)(__right_value448=check_assign_type(((char*)(__right_value447=xsprintf("\%s is assining to",((char*)(__right_value446=string_to_string(self->name)))))),left_type_421,right_type_401,right_value_400,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_19_432=multiple_assign_var21->v1;
            Err_433=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional20=(Err_433)),            (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value447 = come_decrement_ref_count(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value448,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional20) {
                __result_obj__244 = (_Bool)1;
                (Err_433 = come_decrement_ref_count(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__244;
            }
            else {
            }
            if(            left_type_421->mHeap&&!right_value_400->type->mHeap) {
                multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value449=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_20_434=multiple_assign_var22->v1;
                Err_435=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                if(                (_if_conditional21=(Err_435)),                /*c*/ come_call_finalizer3(__right_value449,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional21) {
                    __result_obj__245 = (_Bool)1;
                    (Err_435 = come_decrement_ref_count(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_433 = come_decrement_ref_count(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__245;
                }
                else {
                }
                (Err_435 = come_decrement_ref_count(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_value_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 666, "struct CVALUE*"))));
            __dec_obj92=come_value_436->c_value,
            come_value_436->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__418->mCValueName,right_value_400->c_value));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj93=come_value_436->type,
            come_value_436->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_436->var=var__418;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_436));
            add_come_last_code(info,"%s",come_value_436->c_value);
            (Err_433 = come_decrement_ref_count(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_436,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__163;
void* __right_value189 = (void*)0;
struct sType* result_243;
void* __right_value190 = (void*)0;
struct sType* __dec_obj17;
void* __right_value191 = (void*)0;
struct sType* __dec_obj18;
void* __right_value199 = (void*)0;
struct list$1sType$ph* __dec_obj22;
void* __right_value200 = (void*)0;
struct sType* __dec_obj23;
void* __right_value201 = (void*)0;
struct sType* __dec_obj24;
void* __right_value203 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value204 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value205 = (void*)0;
char* __dec_obj27;
void* __right_value206 = (void*)0;
char* __dec_obj28;
void* __right_value207 = (void*)0;
char* __dec_obj29;
void* __right_value215 = (void*)0;
struct list$1sNode$ph* __dec_obj33;
void* __right_value216 = (void*)0;
char* __dec_obj34;
void* __right_value217 = (void*)0;
struct list$1sType$ph* __dec_obj35;
void* __right_value225 = (void*)0;
struct list$1char$ph* __dec_obj39;
void* __right_value226 = (void*)0;
struct sType* __dec_obj40;
struct sType* __result_obj__177;
    if(    self==(void*)0) {
        __result_obj__163 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__163,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__163;
    }
    result_243=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_243->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj17=result_243->mOriginalLoadVarType,
        result_243->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj18=result_243->mChannelType,
        result_243->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj22=result_243->mGenericsTypes,
        result_243->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj23=result_243->mNoSolvedGenericsType,
        result_243->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_243->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj24=result_243->mAnyOriginalType,
        result_243->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj25=result_243->mSizeNum,
        result_243->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj26=result_243->mAlignas,
        result_243->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj27=result_243->mTupleName,
        result_243->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj28=result_243->mAttribute,
        result_243->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_243->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_243->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_243->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_243->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_243->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_243->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_243->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_243->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_243->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_243->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_243->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_243->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_243->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_243->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_243->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_243->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_243->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_243->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_243->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_243->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_243->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_243->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_243->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_243->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj29=result_243->mAsmName,
        result_243->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_243->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_243->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_243->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj33=result_243->mArrayNum,
        result_243->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj33,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_243->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_243->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_243->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_243->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_243->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj34=result_243->mOriginalTypeName,
        result_243->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_243->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_243->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_243->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_243->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj35=result_243->mParamTypes,
        result_243->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj39=result_243->mParamNames,
        result_243->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj39,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj40=result_243->mResultType,
        result_243->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_243->mVarArgs=self->mVarArgs;
    }
    __result_obj__177 = (struct sType*)come_increment_ref_count(result_243);
    /*c*/ come_call_finalizer3(result_243,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
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
struct list_item$1sType$ph* it_239;
struct list_item$1sType$ph* prev_it_240;
    it_239=self->head;
    while(it_239!=((void*)0)) {
        prev_it_240=it_239;
        it_239=it_239->next;
        /*c*/ come_call_finalizer3(prev_it_240,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_241;
struct list_item$1sNode$ph* prev_it_242;
    it_241=self->head;
    while(it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__164;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1sType$ph* result_244;
struct list_item$1sType$ph* it_245;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1sType$ph* __result_obj__167;
    if(    self==((void*)0)) {
        __result_obj__164 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__164,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__164;
    }
    result_244=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1022, "struct list$1sType$ph*"))));
    it_245=self->head;
    while(it_245!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_244,(struct sType*)come_increment_ref_count(sType_clone(it_245->item)));
        }
        else {
            list$1sType$ph_add(result_244,(struct sType*)come_increment_ref_count(sType_clone(it_245->item)));
        }
        it_245=it_245->next;
    }
    __result_obj__167 = (struct list$1sType$ph*)come_increment_ref_count(result_244);
    /*c*/ come_call_finalizer3(result_244,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__165;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__165 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__165,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__165;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value194 = (void*)0;
struct list_item$1sType$ph* litem_246;
struct sType* __dec_obj19;
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_247;
struct sType* __dec_obj20;
void* __right_value196 = (void*)0;
struct list_item$1sType$ph* litem_248;
struct sType* __dec_obj21;
struct list$1sType$ph* __result_obj__166;
    if(    self->len==0) {
        litem_246=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value194=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1041, "struct list_item$1sType$ph*"))));
        litem_246->prev=((void*)0);
        litem_246->next=((void*)0);
        __dec_obj19=litem_246->item,
        litem_246->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_246;
        self->head=litem_246;
    }
    else if(    self->len==1) {
        litem_247=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1051, "struct list_item$1sType$ph*"))));
        litem_247->prev=self->head;
        litem_247->next=((void*)0);
        __dec_obj20=litem_247->item,
        litem_247->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_247;
        self->head->next=litem_247;
    }
    else {
        litem_248=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1061, "struct list_item$1sType$ph*"))));
        litem_248->prev=self->tail;
        litem_248->next=((void*)0);
        __dec_obj21=litem_248->item,
        litem_248->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_248;
        self->tail=litem_248;
    }
    self->len++;
    __result_obj__166 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_249;
struct list_item$1sType$ph* prev_it_250;
    it_249=self->head;
    while(it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        /*c*/ come_call_finalizer3(prev_it_250,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__168;
void* __right_value202 = (void*)0;
struct sNode* result_251;
struct sNode* __result_obj__169;
    if(    self==(void*)0) {
        __result_obj__168 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__168;
    }
    result_251=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_251->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_251->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_251->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_251->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_251->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_251->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_251->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_251->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_251->kind=self->kind;
    }
    __result_obj__169 = (struct sNode*)come_increment_ref_count(result_251);
    ((result_251) ? result_251 = come_decrement_ref_count(result_251, ((struct sNode*)result_251)->finalize, ((struct sNode*)result_251)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__169;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__170;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct list$1sNode$ph* result_252;
struct list_item$1sNode$ph* it_253;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sNode$ph* __result_obj__173;
    if(    self==((void*)0)) {
        __result_obj__170 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__170,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__170;
    }
    result_252=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_253=self->head;
    while(it_253!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_252,(struct sNode*)come_increment_ref_count(sNode_clone(it_253->item)));
        }
        else {
            list$1sNode$ph_add(result_252,(struct sNode*)come_increment_ref_count(sNode_clone(it_253->item)));
        }
        it_253=it_253->next;
    }
    __result_obj__173 = (struct list$1sNode$ph*)come_increment_ref_count(result_252);
    /*c*/ come_call_finalizer3(result_252,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value210 = (void*)0;
struct list_item$1sNode$ph* litem_254;
struct sNode* __dec_obj30;
void* __right_value211 = (void*)0;
struct list_item$1sNode$ph* litem_255;
struct sNode* __dec_obj31;
void* __right_value212 = (void*)0;
struct list_item$1sNode$ph* litem_256;
struct sNode* __dec_obj32;
struct list$1sNode$ph* __result_obj__172;
    if(    self->len==0) {
        litem_254=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value210=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1041, "struct list_item$1sNode$ph*"))));
        litem_254->prev=((void*)0);
        litem_254->next=((void*)0);
        __dec_obj30=litem_254->item,
        litem_254->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_254;
        self->head=litem_254;
    }
    else if(    self->len==1) {
        litem_255=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value211=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1051, "struct list_item$1sNode$ph*"))));
        litem_255->prev=self->head;
        litem_255->next=((void*)0);
        __dec_obj31=litem_255->item,
        litem_255->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_255;
        self->head->next=litem_255;
    }
    else {
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value212=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1061, "struct list_item$1sNode$ph*"))));
        litem_256->prev=self->tail;
        litem_256->next=((void*)0);
        __dec_obj32=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_256;
        self->tail=litem_256;
    }
    self->len++;
    __result_obj__172 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__172;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_257;
struct list_item$1sNode$ph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        /*c*/ come_call_finalizer3(prev_it_258,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__174;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1char$ph* result_259;
struct list_item$1char$ph* it_260;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1char$ph* __result_obj__176;
    if(    self==((void*)0)) {
        __result_obj__174 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_259=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1022, "struct list$1char$ph*"))));
    it_260=self->head;
    while(it_260!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_259,(char*)come_increment_ref_count((char*)come_memdup(it_260->item, "./comelang.h", 1027, "char*")));
        }
        else {
            list$1char$ph_add(result_259,(char*)come_increment_ref_count((char*)come_memdup(it_260->item, "./comelang.h", 1030, "char*")));
        }
        it_260=it_260->next;
    }
    __result_obj__176 = (struct list$1char$ph*)come_increment_ref_count(result_259);
    /*c*/ come_call_finalizer3(result_259,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value220 = (void*)0;
struct list_item$1char$ph* litem_261;
char* __dec_obj36;
void* __right_value221 = (void*)0;
struct list_item$1char$ph* litem_262;
char* __dec_obj37;
void* __right_value222 = (void*)0;
struct list_item$1char$ph* litem_263;
char* __dec_obj38;
struct list$1char$ph* __result_obj__175;
    if(    self->len==0) {
        litem_261=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value220=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1041, "struct list_item$1char$ph*"))));
        litem_261->prev=((void*)0);
        litem_261->next=((void*)0);
        __dec_obj36=litem_261->item,
        litem_261->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_261;
        self->head=litem_261;
    }
    else if(    self->len==1) {
        litem_262=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value221=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1051, "struct list_item$1char$ph*"))));
        litem_262->prev=self->head;
        litem_262->next=((void*)0);
        __dec_obj37=litem_262->item,
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_262;
        self->head->next=litem_262;
    }
    else {
        litem_263=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value222=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1061, "struct list_item$1char$ph*"))));
        litem_263->prev=self->tail;
        litem_263->next=((void*)0);
        __dec_obj38=litem_263->item,
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_263;
        self->tail=litem_263;
    }
    self->len++;
    __result_obj__175 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__175;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_264;
struct list_item$1char$ph* prev_it_265;
    it_264=self->head;
    while(it_264!=((void*)0)) {
        prev_it_265=it_264;
        it_264=it_264->next;
        /*c*/ come_call_finalizer3(prev_it_265,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__178;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_268;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_269;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__183;
    if(    self==((void*)0)) {
        __result_obj__178 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_268=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1022, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it_269=self->head;
    while(it_269!=((void*)0)) {
        if(        1) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_268,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_269->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_268,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_269->item)));
        }
        it_269=it_269->next;
    }
    __result_obj__183 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result_268);
    /*c*/ come_call_finalizer3(result_268,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_266;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_267;
    it_266=self->head;
    while(it_266!=((void*)0)) {
        prev_it_267=it_266;
        it_266=it_266->next;
        /*c*/ come_call_finalizer3(prev_it_267,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__179;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__179 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value231 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_270;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj44;
void* __right_value232 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_271;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj45;
void* __right_value233 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_272;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj46;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__180;
    if(    self->len==0) {
        litem_270=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value231=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1041, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_270->prev=((void*)0);
        litem_270->next=((void*)0);
        __dec_obj44=litem_270->item,
        litem_270->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_270;
        self->head=litem_270;
    }
    else if(    self->len==1) {
        litem_271=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value232=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1051, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_271->prev=self->head;
        litem_271->next=((void*)0);
        __dec_obj45=litem_271->item,
        litem_271->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_271;
        self->head->next=litem_271;
    }
    else {
        litem_272=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value233=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1061, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_272->prev=self->tail;
        litem_272->next=((void*)0);
        __dec_obj46=litem_272->item,
        litem_272->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_272;
        self->tail=litem_272;
    }
    self->len++;
    __result_obj__180 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__181;
void* __right_value234 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_273;
void* __right_value235 = (void*)0;
struct sType* __dec_obj47;
void* __right_value236 = (void*)0;
char* __dec_obj48;
void* __right_value237 = (void*)0;
struct sNode* __dec_obj49;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__182;
    if(    self==(void*)0) {
        __result_obj__181 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__181,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__181;
    }
    result_273=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj47=result_273->v1,
        result_273->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj48=result_273->v2,
        result_273->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj49=result_273->v3,
        result_273->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__182 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result_273);
    /*c*/ come_call_finalizer3(result_273,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__182,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
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
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_274;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*c*/ come_call_finalizer3(prev_it_275,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct sVar* default_value_277;
unsigned int hash_278;
unsigned int it_279;
struct sVar* __result_obj__186;
struct sVar* __result_obj__187;
struct sVar* __result_obj__188;
struct sVar* __result_obj__189;
default_value_277 = (void*)0;
    memset(&default_value_277,0,sizeof(struct sVar*));
    hash_278=string_get_hash_key(((char*)key))%self->size;
    it_279=hash_278;
    while((_Bool)1) {
        if(        self->item_existance[it_279]) {
            if(            string_equals(self->keys[it_279],key)) {
                __result_obj__186 = (struct sVar*)come_increment_ref_count(self->items[it_279]);
                /*c*/ come_call_finalizer3(default_value_277,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__186,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__186;
            }
            it_279++;
            if(            it_279>=self->size) {
                it_279=0;
            }
            else if(            it_279==hash_278) {
                __result_obj__187 = (struct sVar*)come_increment_ref_count(default_value_277);
                /*c*/ come_call_finalizer3(default_value_277,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__187,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__187;
            }
        }
        else {
            __result_obj__188 = (struct sVar*)come_increment_ref_count(default_value_277);
            /*c*/ come_call_finalizer3(default_value_277,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__188,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__188;
        }
    }
    __result_obj__189 = (struct sVar*)come_increment_ref_count(default_value_277);
    /*c*/ come_call_finalizer3(default_value_277,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
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

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_280;
unsigned int hash_281;
unsigned int it_282;
struct sVar* __result_obj__190;
struct sVar* __result_obj__191;
struct sVar* __result_obj__192;
struct sVar* __result_obj__193;
default_value_280 = (void*)0;
    memset(&default_value_280,0,sizeof(struct sVar*));
    hash_281=string_get_hash_key(((char*)key))%self->size;
    it_282=hash_281;
    while((_Bool)1) {
        if(        self->item_existance[it_282]) {
            if(            string_equals(self->keys[it_282],key)) {
                __result_obj__190 = (struct sVar*)come_increment_ref_count(self->items[it_282]);
                /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__190,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__190;
            }
            it_282++;
            if(            it_282>=self->size) {
                it_282=0;
            }
            else if(            it_282==hash_281) {
                __result_obj__191 = (struct sVar*)come_increment_ref_count(default_value_280);
                /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__191,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__191;
            }
        }
        else {
            __result_obj__192 = (struct sVar*)come_increment_ref_count(default_value_280);
            /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__192,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__192;
        }
    }
    __result_obj__193 = (struct sVar*)come_increment_ref_count(default_value_280);
    /*c*/ come_call_finalizer3(default_value_280,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash_283;
unsigned int it_284;
struct map$2char$phsVar$ph* __result_obj__198;
    hash_283=string_get_hash_key(((char*)key))%self->size;
    it_284=hash_283;
    while((_Bool)1) {
        if(        self->item_existance[it_284]) {
            if(            string_equals(self->keys[it_284],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_284]);
                self->item_existance[it_284]=(_Bool)0;
                if(                1) {
                    (self->keys[it_284] = come_decrement_ref_count(self->keys[it_284], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_284]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_284],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_284]=((void*)0);
                self->len--;
                break;
            }
            it_284++;
            if(            it_284>=self->size) {
                it_284=0;
            }
            else if(            it_284==hash_283) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__198 = self;
    return __result_obj__198;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_285;
struct list_item$1char$ph* it_286;
struct list$1char$ph* __result_obj__197;
    it2_285=0;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        if(        string_equals(it_286->item,item)) {
            list$1char$ph_delete(self,it2_285,it2_285+1);
            break;
        }
        it2_285++;
        it_286=it_286->next;
    }
    __result_obj__197 = self;
    return __result_obj__197;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_287;
struct list$1char$ph* __result_obj__194;
struct list_item$1char$ph* it_290;
int i_291;
struct list_item$1char$ph* prev_it_292;
struct list_item$1char$ph* it_293;
int i_294;
struct list_item$1char$ph* prev_it_295;
struct list_item$1char$ph* it_296;
struct list_item$1char$ph* head_prev_it_297;
struct list_item$1char$ph* tail_it_298;
int i_299;
struct list_item$1char$ph* prev_it_300;
struct list$1char$ph* __result_obj__196;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_287=tail;
        tail=head;
        head=tmp_287;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__194 = self;
        return __result_obj__194;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_290=self->head;
        i_291=0;
        while(it_290!=((void*)0)) {
            if(            i_291<tail) {
                prev_it_292=it_290;
                it_290=it_290->next;
                i_291++;
                /*c*/ come_call_finalizer3(prev_it_292,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_291==tail) {
                self->head=it_290;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_290=it_290->next;
                i_291++;
            }
        }
    }
    else if(    tail==self->len) {
        it_293=self->head;
        i_294=0;
        while(it_293!=((void*)0)) {
            if(            i_294==head) {
                self->tail=it_293->prev;
                self->tail->next=((void*)0);
            }
            if(            i_294>=head) {
                prev_it_295=it_293;
                it_293=it_293->next;
                i_294++;
                /*c*/ come_call_finalizer3(prev_it_295,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_293=it_293->next;
                i_294++;
            }
        }
    }
    else {
        it_296=self->head;
        head_prev_it_297=((void*)0);
        tail_it_298=((void*)0);
        i_299=0;
        while(it_296!=((void*)0)) {
            if(            i_299==head) {
                head_prev_it_297=it_296->prev;
            }
            if(            i_299==tail) {
                tail_it_298=it_296;
            }
            if(            i_299>=head&&i_299<tail) {
                prev_it_300=it_296;
                it_296=it_296->next;
                i_299++;
                /*c*/ come_call_finalizer3(prev_it_300,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_296=it_296->next;
                i_299++;
            }
        }
        if(        head_prev_it_297!=((void*)0)) {
            head_prev_it_297->next=tail_it_298;
        }
        if(        tail_it_298!=((void*)0)) {
            tail_it_298->prev=head_prev_it_297;
        }
    }
    __result_obj__196 = self;
    return __result_obj__196;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_288;
struct list_item$1char$ph* prev_it_289;
struct list$1char$ph* __result_obj__195;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        /*c*/ come_call_finalizer3(prev_it_289,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__195 = self;
    return __result_obj__195;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_305;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__200;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__201;
struct tuple3$3sType$phchar$phsNode$ph* result_306;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__202;
result_305 = (void*)0;
result_306 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_305,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__200 = result_305;
        return __result_obj__200;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_306,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__202 = result_306;
    return __result_obj__202;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_308;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__203;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__204;
struct tuple3$3sType$phchar$phsNode$ph* result_309;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__205;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_308,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__203 = result_308;
        return __result_obj__203;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__204 = self->it->item;
        return __result_obj__204;
    }
    memset(&result_309,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__205 = result_309;
    return __result_obj__205;
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
char* result_323;
char* __result_obj__208;
char* __result_obj__209;
char* result_324;
char* __result_obj__210;
result_323 = (void*)0;
result_324 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_323,0,sizeof(char*));
        __result_obj__208 = result_323;
        return __result_obj__208;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__209 = self->it->item;
        return __result_obj__209;
    }
    memset(&result_324,0,sizeof(char*));
    __result_obj__210 = result_324;
    return __result_obj__210;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_326;
char* __result_obj__211;
char* __result_obj__212;
char* result_327;
char* __result_obj__213;
result_326 = (void*)0;
result_327 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_326,0,sizeof(char*));
        __result_obj__211 = result_326;
        return __result_obj__211;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__212 = self->it->item;
        return __result_obj__212;
    }
    memset(&result_327,0,sizeof(char*));
    __result_obj__213 = result_327;
    return __result_obj__213;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_330;
int i_331;
struct sType* __result_obj__214;
struct sType* default_value_332;
struct sType* __result_obj__215;
default_value_332 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_330=self->head;
    i_331=0;
    while(it_330!=((void*)0)) {
        if(        position==i_331) {
            __result_obj__214 = (struct sType*)come_increment_ref_count(it_330->item);
            /*c*/ come_call_finalizer3(__result_obj__214,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__214;
        }
        it_330=it_330->next;
        i_331++;
    }
    memset(&default_value_332,0,sizeof(struct sType*));
    __result_obj__215 = (struct sType*)come_increment_ref_count(default_value_332);
    /*c*/ come_call_finalizer3(default_value_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_333;
int i_334;
struct sType* __result_obj__216;
struct sType* default_value_335;
struct sType* __result_obj__217;
default_value_335 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_333=self->head;
    i_334=0;
    while(it_333!=((void*)0)) {
        if(        position==i_334) {
            __result_obj__216 = (struct sType*)come_increment_ref_count(it_333->item);
            /*c*/ come_call_finalizer3(__result_obj__216,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__216;
        }
        it_333=it_333->next;
        i_334++;
    }
    memset(&default_value_335,0,sizeof(struct sType*));
    __result_obj__217 = (struct sType*)come_increment_ref_count(default_value_335);
    /*c*/ come_call_finalizer3(default_value_335,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
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
struct sNode* result_356;
struct sNode* __result_obj__221;
struct sNode* __result_obj__222;
struct sNode* result_357;
struct sNode* __result_obj__223;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_356,0,sizeof(struct sNode*));
        __result_obj__221 = result_356;
        return __result_obj__221;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__222 = self->it->item;
        return __result_obj__222;
    }
    memset(&result_357,0,sizeof(struct sNode*));
    __result_obj__223 = result_357;
    return __result_obj__223;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_359;
struct sNode* __result_obj__224;
struct sNode* __result_obj__225;
struct sNode* result_360;
struct sNode* __result_obj__226;
result_359 = (void*)0;
result_360 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_359,0,sizeof(struct sNode*));
        __result_obj__224 = result_359;
        return __result_obj__224;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__225 = self->it->item;
        return __result_obj__225;
    }
    memset(&result_360,0,sizeof(struct sNode*));
    __result_obj__226 = result_360;
    return __result_obj__226;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value309 = (void*)0;
struct list_item$1CVALUE$ph* litem_366;
struct CVALUE* __dec_obj60;
void* __right_value310 = (void*)0;
struct list_item$1CVALUE$ph* litem_367;
struct CVALUE* __dec_obj61;
void* __right_value311 = (void*)0;
struct list_item$1CVALUE$ph* litem_368;
struct CVALUE* __dec_obj62;
struct list$1CVALUE$ph* __result_obj__227;
    if(    self->len==0) {
        litem_366=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value309=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1111, "struct list_item$1CVALUE$ph*"))));
        litem_366->prev=((void*)0);
        litem_366->next=((void*)0);
        __dec_obj60=litem_366->item,
        litem_366->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_366;
        self->head=litem_366;
    }
    else if(    self->len==1) {
        litem_367=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value310=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1121, "struct list_item$1CVALUE$ph*"))));
        litem_367->prev=self->head;
        litem_367->next=((void*)0);
        __dec_obj61=litem_367->item,
        litem_367->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_367;
        self->head->next=litem_367;
    }
    else {
        litem_368=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value311=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1131, "struct list_item$1CVALUE$ph*"))));
        litem_368->prev=self->tail;
        litem_368->next=((void*)0);
        __dec_obj62=litem_368->item,
        litem_368->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_368;
        self->tail=litem_368;
    }
    self->len++;
    __result_obj__227 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value454 = (void*)0;
struct sNewChannel* __result_obj__246;
    ((struct sNodeBase*)(__right_value454=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value454,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__246 = (struct sNewChannel*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__246,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value455 = (void*)0;
char* __result_obj__247;
    __result_obj__247 = (char*)come_increment_ref_count(((char*)(__right_value455=__builtin_string("sNewChannel"))));
    (__right_value455 = come_decrement_ref_count(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__247;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value456 = (void*)0;
struct sNode* node_437;
_Bool Value_438;
_Bool __result_obj__248;
_Bool __result_obj__249;
    node_437=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_438=node_compile(node_437,info);
    if(    !Value_438) {
        __result_obj__248 = (_Bool)0;
        ((node_437) ? node_437 = come_decrement_ref_count(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__248;
    }
    else {
    }
    __result_obj__249 = (_Bool)1;
    ((node_437) ? node_437 = come_decrement_ref_count(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__249;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value457 = (void*)0;
struct sNode* __dec_obj94;
struct sNode* __dec_obj95;
struct sWriteChannelNode* __result_obj__250;
    ((struct sNodeBase*)(__right_value457=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value457,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj94=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj95=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__250 = (struct sWriteChannelNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__250,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value458 = (void*)0;
char* __result_obj__251;
    __result_obj__251 = (char*)come_increment_ref_count(((char*)(__right_value458=__builtin_string("sWriteChannelNode"))));
    (__right_value458 = come_decrement_ref_count(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__251 = come_decrement_ref_count(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_439;
void* __right_value459 = (void*)0;
struct CVALUE* come_value_440;
_Bool Value_441;
_Bool __result_obj__252;
void* __right_value460 = (void*)0;
struct CVALUE* right_value_442;
struct sType* right_type_443;
void* __right_value461 = (void*)0;
struct sType* left_type_444;
struct sType* channel_type_445;
void* __right_value462 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_21_447=0;
char* Err_448=0;
_Bool _if_conditional22;
_Bool __result_obj__253;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct buffer* buf_449;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct CVALUE* come_value2_450;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
char* __dec_obj96;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__254;
    Value_439=node_compile(self->exp,info);
    if(    !Value_439) {
        return (_Bool)0;
    }
    else {
    }
    come_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_441=node_compile(self->right_value,info);
    if(    !Value_441) {
        __result_obj__252 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__252;
    }
    else {
    }
    right_value_442=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_443=right_value_442->type;
    left_type_444=(struct sType*)come_increment_ref_count(sType_clone(come_value_440->type));
    channel_type_445=(struct sType*)come_increment_ref_count(left_type_444->mChannelType);
    static int var_num_446=0;
    var_num_446++;
    if(    right_value_442->type->mHeap) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value462=err_msg(info,"channel can't get heap type")));
        come_exception_var_21_447=multiple_assign_var23->v1;
        Err_448=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional22=(Err_448)),        /*c*/ come_call_finalizer3(__right_value462,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional22) {
            __result_obj__253 = (_Bool)1;
            (Err_448 = come_decrement_ref_count(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_value_442,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_444,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(channel_type_445,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__253;
        }
        else {
        }
        (Err_448 = come_decrement_ref_count(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buf_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 750, "struct buffer*"))));
    buffer_append_format(buf_449,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_446,((char*)(__right_value465=make_type_name_string(channel_type_445,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value465 = come_decrement_ref_count(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_449,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value466=make_type_name_string(channel_type_445,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_446,var_num_446);
    (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_449,"*__channel_p%d = %s;\n",var_num_446,right_value_442->c_value);
    add_come_code(info,((char*)(__right_value467=buffer_to_string(buf_449))));
    (__right_value467 = come_decrement_ref_count(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_450=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 758, "struct CVALUE*"))));
    __dec_obj96=come_value2_450->c_value,
    come_value2_450->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_440->c_value,var_num_446,((char*)(__right_value470=make_type_name_string(channel_type_445,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj97=come_value2_450->type,
    come_value2_450->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 762, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_450->type->mPointerNum=1;
    come_value2_450->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_450));
    add_come_last_code(info,"%s",come_value2_450->c_value);
    __result_obj__254 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_442,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_444,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_445,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_449,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_450,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
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
void* __right_value475 = (void*)0;
struct sNode* __dec_obj98;
struct sReadChannelNode* __result_obj__255;
    ((struct sNodeBase*)(__right_value475=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value475,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj98=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__255 = (struct sReadChannelNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__255,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value476 = (void*)0;
char* __result_obj__256;
    __result_obj__256 = (char*)come_increment_ref_count(((char*)(__right_value476=__builtin_string("sReadChannelNode"))));
    (__right_value476 = come_decrement_ref_count(__right_value476, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__256 = come_decrement_ref_count(__result_obj__256, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__256;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_451;
_Bool Value_452;
_Bool __result_obj__257;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_453;
void* __right_value478 = (void*)0;
struct sType* var_type_454;
void* __right_value479 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_22_455=0;
char* Err_456=0;
_Bool _if_conditional23;
_Bool __result_obj__258;
struct sType* channel_type_457;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct CVALUE* come_value2_459;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
char* __dec_obj99;
void* __right_value486 = (void*)0;
struct sType* __dec_obj100;
_Bool __result_obj__259;
    exp_451=(struct sNode*)come_increment_ref_count(self->exp);
    Value_452=node_compile(exp_451,info);
    if(    !Value_452) {
        __result_obj__257 = (_Bool)0;
        ((exp_451) ? exp_451 = come_decrement_ref_count(exp_451, ((struct sNode*)exp_451)->finalize, ((struct sNode*)exp_451)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__257;
    }
    else {
    }
    come_value_453=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type_454=(struct sType*)come_increment_ref_count(sType_clone(come_value_453->type));
    if(    !var_type_454->mChannel) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value479=err_msg(info,"require right type is channel")));
        come_exception_var_22_455=multiple_assign_var24->v1;
        Err_456=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional23=(Err_456)),        /*c*/ come_call_finalizer3(__right_value479,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional23) {
            __result_obj__258 = (_Bool)1;
            (Err_456 = come_decrement_ref_count(Err_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_451) ? exp_451 = come_decrement_ref_count(exp_451, ((struct sNode*)exp_451)->finalize, ((struct sNode*)exp_451)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_453,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(var_type_454,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__258;
        }
        else {
        }
        (Err_456 = come_decrement_ref_count(Err_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    channel_type_457=(struct sType*)come_increment_ref_count(var_type_454->mChannelType);
    static int var_num_458=0;
    var_num_458++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_458,((char*)(__right_value480=make_type_name_string(channel_type_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value480 = come_decrement_ref_count(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_459=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 814, "struct CVALUE*"))));
    __dec_obj99=come_value2_459->c_value,
    come_value2_459->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_453->c_value,var_num_458,((char*)(__right_value483=make_type_name_string(channel_type_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value484=make_type_name_string(channel_type_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_458));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value484 = come_decrement_ref_count(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj100=come_value2_459->type,
    come_value2_459->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type_457));
    /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_459->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_459));
    add_come_last_code(info,"%s",come_value2_459->c_value);
    __result_obj__259 = (_Bool)1;
    ((exp_451) ? exp_451 = come_decrement_ref_count(exp_451, ((struct sNode*)exp_451)->finalize, ((struct sNode*)exp_451)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_453,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(var_type_454,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_457,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_459,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
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
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value498 = (void*)0;
struct sNode* __result_obj__262;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 831, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value489=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 831, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result_obj__262 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value498=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value489,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value498) ? __right_value498 = come_decrement_ref_count(__right_value498, ((struct sNode*)__right_value498)->finalize, ((struct sNode*)__right_value498)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__262) ? __result_obj__262 = come_decrement_ref_count(__result_obj__262, ((struct sNode*)__result_obj__262)->finalize, ((struct sNode*)__result_obj__262)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__262;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__260;
void* __right_value490 = (void*)0;
struct sStoreNode* result_460;
void* __right_value491 = (void*)0;
char* __dec_obj101;
void* __right_value492 = (void*)0;
char* __dec_obj102;
void* __right_value493 = (void*)0;
struct sType* __dec_obj103;
void* __right_value494 = (void*)0;
struct sNode* __dec_obj104;
void* __right_value495 = (void*)0;
struct list$1char$ph* __dec_obj105;
void* __right_value496 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj106;
void* __right_value497 = (void*)0;
char* __dec_obj107;
struct sStoreNode* __result_obj__261;
    if(    self==(void*)0) {
        __result_obj__260 = (void*)0;
        return __result_obj__260;
    }
    result_460=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(    self!=((void*)0)) {
        result_460->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj101=result_460->sname,
        result_460->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_460->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj102=result_460->name,
        result_460->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_460->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj103=result_460->type,
        result_460->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj104=result_460->right_value,
        result_460->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj105=result_460->multiple_assign,
        result_460->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign));
        /*b*/ come_call_finalizer3(__dec_obj105,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj106=result_460->multiple_declare,
        result_460->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare));
        /*b*/ come_call_finalizer3(__dec_obj106,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj107=result_460->attribute,
        result_460->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__261 = result_460;
    /*c*/ come_call_finalizer3(result_460,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* __dec_obj108;
struct sLoadNode* __result_obj__263;
    ((struct sNodeBase*)(__right_value499=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value499,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj108=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__263 = (struct sLoadNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__263,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value501 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = (char*)come_increment_ref_count(((char*)(__right_value501=__builtin_string("sLoadNode"))));
    (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_461;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
_Bool _if_conditional24;
struct sVar* parent_var_462;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct CVALUE* come_value_463;
struct sType* type_464;
void* __right_value507 = (void*)0;
char* __dec_obj109;
void* __right_value508 = (void*)0;
char* __dec_obj110;
void* __right_value509 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__265;
struct sVar* var__465;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sFun* fun_466;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value515 = (void*)0;
char* __dec_obj112;
struct sType* __dec_obj113;
_Bool __result_obj__274;
void* __right_value516 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_23_474=0;
char* Err_475=0;
_Bool _if_conditional25;
_Bool __result_obj__275;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct CVALUE* come_value_476;
void* __right_value519 = (void*)0;
char* __dec_obj114;
void* __right_value520 = (void*)0;
struct sType* __dec_obj115;
void* __right_value521 = (void*)0;
struct sType* __dec_obj116;
_Bool __result_obj__277;
    current_stack_frame_struct_461=info->current_stack_frame_struct;
    if(    (_if_conditional24=(current_stack_frame_struct_461&&((struct sVar*)(__right_value504=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value503=__builtin_string(self->name))))))==((void*)0))),    (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value504,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional24) {
        parent_var_462=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_462!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_462->mFunName,info->come_fun->mName)) {
                come_value_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 861, "struct CVALUE*"))));
                type_464=parent_var_462->mType;
                if(                parent_var_462->mType->mOriginIsArray) {
                    __dec_obj109=come_value_463->c_value,
                    come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_462->mCValueName));
                    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj110=come_value_463->c_value,
                    come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_462->mCValueName));
                    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj111=come_value_463->type,
                come_value_463->type=(struct sType*)come_increment_ref_count(sType_clone(type_464));
                /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_463->var=((void*)0);
                add_come_last_code(info,"%s",come_value_463->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_463));
                __result_obj__265 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_463,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__265;
                /*c*/ come_call_finalizer3(come_value_463,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    var__465=get_variable_from_table(info->lv_table,self->name);
    if(    var__465==((void*)0)) {
        var__465=get_variable_from_table(info->gv_table,self->name);
        if(        var__465==((void*)0)) {
            fun_466=((struct sFun*)(__right_value512=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value511=__builtin_string(self->name))))));
            (__right_value510 = come_decrement_ref_count(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value512,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            fun_466) {
                come_value_473=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 893, "struct CVALUE*"))));
                __dec_obj112=come_value_473->c_value,
                come_value_473->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_466->mName));
                __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj113=come_value_473->type,
                come_value_473->type=(struct sType*)come_increment_ref_count(fun_466->mLambdaType);
                /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_473->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_473));
                __result_obj__274 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_473,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__274;
                /*c*/ come_call_finalizer3(come_value_473,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value516=err_msg(info,"var not found(%s)(Z) at loading variable",self->name)));
                come_exception_var_23_474=multiple_assign_var25->v1;
                Err_475=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                if(                (_if_conditional25=(Err_475)),                /*c*/ come_call_finalizer3(__right_value516,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    __result_obj__275 = (_Bool)1;
                    (Err_475 = come_decrement_ref_count(Err_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__275;
                }
                else {
                }
                (Err_475 = come_decrement_ref_count(Err_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_value_476=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 911, "struct CVALUE*"))));
    __dec_obj114=come_value_476->c_value,
    come_value_476->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__465->mCValueName));
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj115=come_value_476->type,
    come_value_476->type=(struct sType*)come_increment_ref_count(sType_clone(var__465->mType));
    /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_476->var=var__465;
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_476));
    if(    list$1sNode$ph_length(come_value_476->type->mArrayNum)==1) {
        __dec_obj116=come_value_476->type->mOriginalLoadVarType,
        come_value_476->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_476->type));
        /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph_reset(come_value_476->type->mArrayNum);
        come_value_476->type->mPointerNum++;
        come_value_476->type->mOriginalTypeNamePointerNum=come_value_476->type->mPointerNum;
    }
    __result_obj__277 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_476,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
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
struct sFun* default_value_467;
unsigned int hash_468;
unsigned int it_469;
struct sFun* __result_obj__266;
struct sFun* __result_obj__267;
struct sFun* __result_obj__268;
struct sFun* __result_obj__269;
default_value_467 = (void*)0;
    memset(&default_value_467,0,sizeof(struct sFun*));
    hash_468=string_get_hash_key(((char*)key))%self->size;
    it_469=hash_468;
    while((_Bool)1) {
        if(        self->item_existance[it_469]) {
            if(            string_equals(self->keys[it_469],key)) {
                __result_obj__266 = (struct sFun*)come_increment_ref_count(self->items[it_469]);
                /*c*/ come_call_finalizer3(default_value_467,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__266,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__266;
            }
            it_469++;
            if(            it_469>=self->size) {
                it_469=0;
            }
            else if(            it_469==hash_468) {
                __result_obj__267 = (struct sFun*)come_increment_ref_count(default_value_467);
                /*c*/ come_call_finalizer3(default_value_467,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__267,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__267;
            }
        }
        else {
            __result_obj__268 = (struct sFun*)come_increment_ref_count(default_value_467);
            /*c*/ come_call_finalizer3(default_value_467,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__268,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__268;
        }
    }
    __result_obj__269 = (struct sFun*)come_increment_ref_count(default_value_467);
    /*c*/ come_call_finalizer3(default_value_467,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__269,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
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

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_470;
unsigned int hash_471;
unsigned int it_472;
struct sFun* __result_obj__270;
struct sFun* __result_obj__271;
struct sFun* __result_obj__272;
struct sFun* __result_obj__273;
default_value_470 = (void*)0;
    memset(&default_value_470,0,sizeof(struct sFun*));
    hash_471=string_get_hash_key(((char*)key))%self->size;
    it_472=hash_471;
    while((_Bool)1) {
        if(        self->item_existance[it_472]) {
            if(            string_equals(self->keys[it_472],key)) {
                __result_obj__270 = (struct sFun*)come_increment_ref_count(self->items[it_472]);
                /*c*/ come_call_finalizer3(default_value_470,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__270,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__270;
            }
            it_472++;
            if(            it_472>=self->size) {
                it_472=0;
            }
            else if(            it_472==hash_471) {
                __result_obj__271 = (struct sFun*)come_increment_ref_count(default_value_470);
                /*c*/ come_call_finalizer3(default_value_470,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__271,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__271;
            }
        }
        else {
            __result_obj__272 = (struct sFun*)come_increment_ref_count(default_value_470);
            /*c*/ come_call_finalizer3(default_value_470,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__272,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__272;
        }
    }
    __result_obj__273 = (struct sFun*)come_increment_ref_count(default_value_470);
    /*c*/ come_call_finalizer3(default_value_470,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_477;
struct list_item$1sNode$ph* prev_it_478;
struct list$1sNode$ph* __result_obj__276;
    it_477=self->head;
    while(it_477!=((void*)0)) {
        prev_it_478=it_477;
        it_477=it_477->next;
        /*c*/ come_call_finalizer3(prev_it_478,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__276 = self;
    return __result_obj__276;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
_Bool _if_conditional26;
struct sLoadNode* load_node_479;
    if(    (_if_conditional26=(string_operator_equals(((char*)(__right_value523=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value523 = come_decrement_ref_count(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional26) {
        load_node_479=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_479->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value530 = (void*)0;
struct sNode* __result_obj__280;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 944, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value526=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 944, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result_obj__280 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value530=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value526,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value530) ? __right_value530 = come_decrement_ref_count(__right_value530, ((struct sNode*)__right_value530)->finalize, ((struct sNode*)__right_value530)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__280) ? __result_obj__280 = come_decrement_ref_count(__result_obj__280, ((struct sNode*)__result_obj__280)->finalize, ((struct sNode*)__result_obj__280)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__280;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__278;
void* __right_value527 = (void*)0;
struct sLoadNode* result_480;
void* __right_value528 = (void*)0;
char* __dec_obj117;
void* __right_value529 = (void*)0;
char* __dec_obj118;
struct sLoadNode* __result_obj__279;
    if(    self==(void*)0) {
        __result_obj__278 = (void*)0;
        return __result_obj__278;
    }
    result_480=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(    self!=((void*)0)) {
        result_480->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj117=result_480->sname,
        result_480->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_480->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj118=result_480->name,
        result_480->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__279 = result_480;
    /*c*/ come_call_finalizer3(result_480,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* __dec_obj119;
struct sFunLoadNode* __result_obj__281;
    ((struct sNodeBase*)(__right_value531=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value531,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj119=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__281 = (struct sFunLoadNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__281,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__281;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value533 = (void*)0;
char* __result_obj__282;
    __result_obj__282 = (char*)come_increment_ref_count(((char*)(__right_value533=__builtin_string("sFunLoadNode"))));
    (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__282 = come_decrement_ref_count(__result_obj__282, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__282;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sFun* fun_481;
void* __right_value537 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_24_482=0;
char* Err_483=0;
_Bool _if_conditional27;
_Bool __result_obj__283;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_484;
void* __right_value540 = (void*)0;
char* __dec_obj120;
struct sType* __dec_obj121;
    fun_481=((struct sFun*)(__right_value536=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value535=__builtin_string(self->name))))));
    (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value535 = come_decrement_ref_count(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value536,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_481==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value537=err_msg(info,"fun not found(%s) at loading variable",self->name)));
        come_exception_var_24_482=multiple_assign_var26->v1;
        Err_483=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional27=(Err_483)),        /*c*/ come_call_finalizer3(__right_value537,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional27) {
            __result_obj__283 = (_Bool)1;
            (Err_483 = come_decrement_ref_count(Err_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__283;
        }
        else {
        }
        (Err_483 = come_decrement_ref_count(Err_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        come_value_484=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 971, "struct CVALUE*"))));
        __dec_obj120=come_value_484->c_value,
        come_value_484->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_481->mName));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj121=come_value_484->type,
        come_value_484->type=(struct sType*)come_increment_ref_count(fun_481->mLambdaType);
        /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_484->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_484));
        /*c*/ come_call_finalizer3(come_value_484,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value541 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj127;
struct sArrayInitializer* __result_obj__290;
    ((struct sNodeBase*)(__right_value541=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value541,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj127=self->initializer,
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(initializer));
    /*b*/ come_call_finalizer3(__dec_obj127,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__290 = (struct sArrayInitializer*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value553 = (void*)0;
char* __result_obj__291;
    __result_obj__291 = (char*)come_increment_ref_count(((char*)(__right_value553=__builtin_string("sArrayInitializer"))));
    (__right_value553 = come_decrement_ref_count(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__291 = come_decrement_ref_count(__result_obj__291, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__291;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_495;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct buffer* buf_496;
int i_497;
struct sType* element_type_498;
struct list$1tuple2$2sNode$phsNode$ph$ph* o2_saved_499;
struct tuple2$2sNode$phsNode$ph* it_502;
struct tuple2$2sNode$phsNode$ph* multiple_assign_var27 = (void*)0;
struct sNode* index_505=0;
struct sNode* value_506=0;
struct CVALUE* come_value_507;
_Bool Value_508;
_Bool __result_obj__298;
void* __right_value556 = (void*)0;
struct CVALUE* __dec_obj128;
_Bool Value_509;
_Bool __result_obj__299;
void* __right_value557 = (void*)0;
struct CVALUE* come_value2_510;
void* __right_value558 = (void*)0;
struct sType* __dec_obj129;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value561 = (void*)0;
char* __dec_obj130;
void* __right_value562 = (void*)0;
struct sType* __dec_obj131;
_Bool __result_obj__300;
    initializer_495=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_496=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1002, "struct buffer*"))));
    buffer_append_str(buf_496,"{");
    i_497=0;
    element_type_498=((void*)0);
    for(    o2_saved_499=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((initializer_495)),it_502=list$1tuple2$2sNode$phsNode$ph$ph_begin((o2_saved_499));    !list$1tuple2$2sNode$phsNode$ph$ph_end((o2_saved_499));    it_502=list$1tuple2$2sNode$phsNode$ph$ph_next((o2_saved_499))    ){
        multiple_assign_var27=it_502;
        index_505=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v1);
        value_506=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        come_value_507=((void*)0);
        if(        index_505) {
            Value_508=node_compile(index_505,info);
            if(            !Value_508) {
                __result_obj__298 = (_Bool)0;
                ((index_505) ? index_505 = come_decrement_ref_count(index_505, ((struct sNode*)index_505)->finalize, ((struct sNode*)index_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((value_506) ? value_506 = come_decrement_ref_count(value_506, ((struct sNode*)value_506)->finalize, ((struct sNode*)value_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_507,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(o2_saved_499,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(initializer_495,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_496,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_type_498,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__298;
            }
            else {
            }
            __dec_obj128=come_value_507,
            come_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            /*b*/ come_call_finalizer3(__dec_obj128,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        Value_509=node_compile(value_506,info);
        if(        !Value_509) {
            __result_obj__299 = (_Bool)0;
            ((index_505) ? index_505 = come_decrement_ref_count(index_505, ((struct sNode*)index_505)->finalize, ((struct sNode*)index_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((value_506) ? value_506 = come_decrement_ref_count(value_506, ((struct sNode*)value_506)->finalize, ((struct sNode*)value_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_507,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(o2_saved_499,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_495,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_496,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(element_type_498,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__299;
        }
        else {
        }
        come_value2_510=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj129=element_type_498,
        element_type_498=(struct sType*)come_increment_ref_count(sType_clone(come_value2_510->type));
        /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        come_value_507) {
            buffer_append_format(buf_496,"[%s] = %s",come_value_507->c_value,come_value2_510->c_value);
        }
        else {
            buffer_append_str(buf_496,come_value2_510->c_value);
        }
        i_497++;
        if(        i_497!=list$1tuple2$2sNode$phsNode$ph$ph_length(initializer_495)) {
            buffer_append_str(buf_496,",");
        }
        ((index_505) ? index_505 = come_decrement_ref_count(index_505, ((struct sNode*)index_505)->finalize, ((struct sNode*)index_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((value_506) ? value_506 = come_decrement_ref_count(value_506, ((struct sNode*)value_506)->finalize, ((struct sNode*)value_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_507,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_510,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_499,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_496,"}");
    come_value_511=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1039, "struct CVALUE*"))));
    __dec_obj130=come_value_511->c_value,
    come_value_511->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_496));
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj131=come_value_511->type,
    come_value_511->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_498));
    /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_511->type->mPointerNum++;
    come_value_511->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_511));
    __result_obj__300 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_495,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_496,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_type_498,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__284;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_487;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_488;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__289;
    if(    self==((void*)0)) {
        __result_obj__284 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__284,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__284;
    }
    result_487=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1022, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    it_488=self->head;
    while(it_488!=((void*)0)) {
        if(        1) {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_487,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_488->item)));
        }
        else {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_487,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_488->item)));
        }
        it_488=it_488->next;
    }
    __result_obj__289 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(result_487);
    /*c*/ come_call_finalizer3(result_487,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__289,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_485;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_486;
    it_485=self->head;
    while(it_485!=((void*)0)) {
        prev_it_486=it_485;
        it_485=it_485->next;
        /*c*/ come_call_finalizer3(prev_it_486,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__285;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__285 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __right_value544 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_489;
struct tuple2$2sNode$phsNode$ph* __dec_obj122;
void* __right_value545 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_490;
struct tuple2$2sNode$phsNode$ph* __dec_obj123;
void* __right_value546 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_491;
struct tuple2$2sNode$phsNode$ph* __dec_obj124;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__286;
    if(    self->len==0) {
        litem_489=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value544=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1041, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_489->prev=((void*)0);
        litem_489->next=((void*)0);
        __dec_obj122=litem_489->item,
        litem_489->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj122,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_489;
        self->head=litem_489;
    }
    else if(    self->len==1) {
        litem_490=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value545=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1051, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_490->prev=self->head;
        litem_490->next=((void*)0);
        __dec_obj123=litem_490->item,
        litem_490->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj123,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_490;
        self->head->next=litem_490;
    }
    else {
        litem_491=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value546=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1061, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_491->prev=self->tail;
        litem_491->next=((void*)0);
        __dec_obj124=litem_491->item,
        litem_491->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj124,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_491;
        self->tail=litem_491;
    }
    self->len++;
    __result_obj__286 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
struct tuple2$2sNode$phsNode$ph* __result_obj__287;
void* __right_value547 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_492;
void* __right_value548 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value549 = (void*)0;
struct sNode* __dec_obj126;
struct tuple2$2sNode$phsNode$ph* __result_obj__288;
    if(    self==(void*)0) {
        __result_obj__287 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__287,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__287;
    }
    result_492=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj125=result_492->v1,
        result_492->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj126=result_492->v2,
        result_492->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__288 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(result_492);
    /*c*/ come_call_finalizer3(result_492,tuple2$2sNode$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__288,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
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
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_493;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_494;
    it_493=self->head;
    while(it_493!=((void*)0)) {
        prev_it_494=it_493;
        it_493=it_493->next;
        /*c*/ come_call_finalizer3(prev_it_494,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2sNode$phsNode$ph* result_500;
struct tuple2$2sNode$phsNode$ph* __result_obj__292;
struct tuple2$2sNode$phsNode$ph* __result_obj__293;
struct tuple2$2sNode$phsNode$ph* result_501;
struct tuple2$2sNode$phsNode$ph* __result_obj__294;
result_500 = (void*)0;
result_501 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_500,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__292 = result_500;
        return __result_obj__292;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__293 = self->it->item;
        return __result_obj__293;
    }
    memset(&result_501,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__294 = result_501;
    return __result_obj__294;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_503;
struct tuple2$2sNode$phsNode$ph* __result_obj__295;
struct tuple2$2sNode$phsNode$ph* __result_obj__296;
struct tuple2$2sNode$phsNode$ph* result_504;
struct tuple2$2sNode$phsNode$ph* __result_obj__297;
result_503 = (void*)0;
result_504 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_503,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__295 = result_503;
        return __result_obj__295;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__296 = self->it->item;
        return __result_obj__296;
    }
    memset(&result_504,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__297 = result_504;
    return __result_obj__297;
}

static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_512;
void* __right_value565 = (void*)0;
struct sNode* index_513;
_Bool no_comma_514;
void* __right_value566 = (void*)0;
struct sNode* exp_515;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
_Bool no_comma_517;
void* __right_value569 = (void*)0;
struct sNode* exp_518;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sNode* index_521;
_Bool no_comma_522;
void* __right_value575 = (void*)0;
struct sNode* exp_523;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
_Bool no_comma_524;
void* __right_value578 = (void*)0;
struct sNode* exp_525;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value586 = (void*)0;
struct sNode* __result_obj__307;
    expected_next_character(123,info);
    initializer_512=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1057, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_513=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_514=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_515=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_514;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_512,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1073, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_513),(struct sNode*)come_increment_ref_count(exp_515))));
        ((index_513) ? index_513 = come_decrement_ref_count(index_513, ((struct sNode*)index_513)->finalize, ((struct sNode*)index_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((exp_515) ? exp_515 = come_decrement_ref_count(exp_515, ((struct sNode*)exp_515)->finalize, ((struct sNode*)exp_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_517=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_518=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_517;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_512,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1081, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_518))));
        ((exp_518) ? exp_518 = come_decrement_ref_count(exp_518, ((struct sNode*)exp_518)->finalize, ((struct sNode*)exp_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
            index_521=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_522=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_523=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_522;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_512,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1108, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_521),(struct sNode*)come_increment_ref_count(exp_523))));
            ((index_521) ? index_521 = come_decrement_ref_count(index_521, ((struct sNode*)index_521)->finalize, ((struct sNode*)index_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_523) ? exp_523 = come_decrement_ref_count(exp_523, ((struct sNode*)exp_523)->finalize, ((struct sNode*)exp_523)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_524=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_525=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_524;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_512,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1116, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_525))));
            ((exp_525) ? exp_525 = come_decrement_ref_count(exp_525, ((struct sNode*)exp_525)->finalize, ((struct sNode*)exp_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1122, "struct sNode");
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value582=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1122, "struct sArrayInitializer*")),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_512),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result_obj__307 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value586=_inf_value3)));
    /*c*/ come_call_finalizer3(initializer_512,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value582,sArrayInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value586) ? __right_value586 = come_decrement_ref_count(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__307;
}

static unsigned int tuple2$2sNode$phsNode$ph_get_hash_key(struct tuple2$2sNode$phsNode$ph* self){
unsigned int result_516;
    result_516=0;
    result_516+=int_get_hash_key(((int)self->v1));
    result_516+=int_get_hash_key(((int)self->v2));
    return result_516;
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
struct sNode* __dec_obj132;
struct sNode* __dec_obj133;
struct tuple2$2sNode$phsNode$ph* __result_obj__301;
    __dec_obj132=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj133=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__301 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__301,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__302;
void* __right_value570 = (void*)0;
struct tuple2$2void$psNode$ph* result_519;
void* __right_value571 = (void*)0;
struct sNode* __dec_obj134;
struct tuple2$2void$psNode$ph* __result_obj__303;
    if(    self==(void*)0) {
        __result_obj__302 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__302,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__302;
    }
    result_519=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_519->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj134=result_519->v2,
        result_519->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__303 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(result_519);
    /*c*/ come_call_finalizer3(result_519,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_520;
    result_520=0;
    result_520+=int_get_hash_key(((int)self->v1));
    result_520+=int_get_hash_key(((int)self->v2));
    return result_520;
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
struct sNode* __dec_obj135;
struct tuple2$2void$psNode$ph* __result_obj__304;
    self->v1=v1;
    __dec_obj135=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__304 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__304,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
struct sArrayInitializer* __result_obj__305;
void* __right_value583 = (void*)0;
struct sArrayInitializer* result_526;
void* __right_value584 = (void*)0;
char* __dec_obj136;
void* __right_value585 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj137;
struct sArrayInitializer* __result_obj__306;
    if(    self==(void*)0) {
        __result_obj__305 = (void*)0;
        return __result_obj__305;
    }
    result_526=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*"));
    if(    self!=((void*)0)) {
        result_526->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj136=result_526->sname,
        result_526->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sArrayInitializer_clone", 5, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_526->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj137=result_526->initializer,
        result_526->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj137,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__306 = result_526;
    /*c*/ come_call_finalizer3(result_526,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value587 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj143;
struct sStructInitializer* __result_obj__314;
    ((struct sNodeBase*)(__right_value587=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value587,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj143=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(initializer));
    /*b*/ come_call_finalizer3(__dec_obj143,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__314 = (struct sStructInitializer*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__314,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__314;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value599 = (void*)0;
char* __result_obj__315;
    __result_obj__315 = (char*)come_increment_ref_count(((char*)(__right_value599=__builtin_string("sStructInitializer"))));
    (__right_value599 = come_decrement_ref_count(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__315 = come_decrement_ref_count(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__315;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_537;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct buffer* buf_538;
int i_539;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_540;
struct tuple2$2char$phsNode$ph* it_543;
struct tuple2$2char$phsNode$ph* multiple_assign_var28 = (void*)0;
char* name_546=0;
struct sNode* value_547=0;
_Bool Value_548;
_Bool __result_obj__322;
void* __right_value602 = (void*)0;
struct CVALUE* come_value2_549;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct CVALUE* come_value_550;
void* __right_value605 = (void*)0;
char* __dec_obj144;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* __dec_obj145;
_Bool __result_obj__323;
    initializer_537=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1143, "struct buffer*"))));
    buffer_append_str(buf_538,"{");
    i_539=0;
    for(    o2_saved_540=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_537)),it_543=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_540));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_540));    it_543=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_540))    ){
        multiple_assign_var28=it_543;
        name_546=(char*)come_increment_ref_count(multiple_assign_var28->v1);
        value_547=(struct sNode*)come_increment_ref_count(multiple_assign_var28->v2);
        Value_548=node_compile(value_547,info);
        if(        !Value_548) {
            __result_obj__322 = (_Bool)0;
            (name_546 = come_decrement_ref_count(name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((value_547) ? value_547 = come_decrement_ref_count(value_547, ((struct sNode*)value_547)->finalize, ((struct sNode*)value_547)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(o2_saved_540,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_537,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_538,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__322;
        }
        else {
        }
        come_value2_549=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        name_546) {
            buffer_append_format(buf_538,".%s = %s",name_546,come_value2_549->c_value);
        }
        else {
            buffer_append_format(buf_538,"%s",come_value2_549->c_value);
        }
        i_539++;
        if(        i_539!=list$1tuple2$2char$phsNode$ph$ph_length(initializer_537)) {
            buffer_append_str(buf_538,",");
        }
        (name_546 = come_decrement_ref_count(name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((value_547) ? value_547 = come_decrement_ref_count(value_547, ((struct sNode*)value_547)->finalize, ((struct sNode*)value_547)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value2_549,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_540,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_538,"}");
    come_value_550=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1169, "struct CVALUE*"))));
    __dec_obj144=come_value_550->c_value,
    come_value_550->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_538));
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj145=come_value_550->type,
    come_value_550->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 1172, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_550->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_550));
    __result_obj__323 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_537,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_538,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_550,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__323;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__308;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_529;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_530;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__313;
    if(    self==((void*)0)) {
        __result_obj__308 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__308,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__308;
    }
    result_529=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1022, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_530=self->head;
    while(it_530!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_529,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_530->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_529,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_530->item)));
        }
        it_530=it_530->next;
    }
    __result_obj__313 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_529);
    /*c*/ come_call_finalizer3(result_529,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__313,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_527;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_528;
    it_527=self->head;
    while(it_527!=((void*)0)) {
        prev_it_528=it_527;
        it_527=it_527->next;
        /*c*/ come_call_finalizer3(prev_it_528,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__309;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__309 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__309,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value590 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_531;
struct tuple2$2char$phsNode$ph* __dec_obj138;
void* __right_value591 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_532;
struct tuple2$2char$phsNode$ph* __dec_obj139;
void* __right_value592 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_533;
struct tuple2$2char$phsNode$ph* __dec_obj140;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__310;
    if(    self->len==0) {
        litem_531=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value590=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1041, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_531->prev=((void*)0);
        litem_531->next=((void*)0);
        __dec_obj138=litem_531->item,
        litem_531->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj138,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_531;
        self->head=litem_531;
    }
    else if(    self->len==1) {
        litem_532=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value591=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1051, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_532->prev=self->head;
        litem_532->next=((void*)0);
        __dec_obj139=litem_532->item,
        litem_532->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj139,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_532;
        self->head->next=litem_532;
    }
    else {
        litem_533=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value592=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1061, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_533->prev=self->tail;
        litem_533->next=((void*)0);
        __dec_obj140=litem_533->item,
        litem_533->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj140,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_533;
        self->tail=litem_533;
    }
    self->len++;
    __result_obj__310 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__311;
void* __right_value593 = (void*)0;
struct tuple2$2char$phsNode$ph* result_534;
void* __right_value594 = (void*)0;
char* __dec_obj141;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj142;
struct tuple2$2char$phsNode$ph* __result_obj__312;
    if(    self==(void*)0) {
        __result_obj__311 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__311,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__311;
    }
    result_534=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj141=result_534->v1,
        result_534->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj142=result_534->v2,
        result_534->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__312 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_534);
    /*c*/ come_call_finalizer3(result_534,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__312,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_535;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_536;
    it_535=self->head;
    while(it_535!=((void*)0)) {
        prev_it_536=it_535;
        it_535=it_535->next;
        /*c*/ come_call_finalizer3(prev_it_536,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_541;
struct tuple2$2char$phsNode$ph* __result_obj__316;
struct tuple2$2char$phsNode$ph* __result_obj__317;
struct tuple2$2char$phsNode$ph* result_542;
struct tuple2$2char$phsNode$ph* __result_obj__318;
result_541 = (void*)0;
result_542 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_541,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__316 = result_541;
        return __result_obj__316;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__317 = self->it->item;
        return __result_obj__317;
    }
    memset(&result_542,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__318 = result_542;
    return __result_obj__318;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_544;
struct tuple2$2char$phsNode$ph* __result_obj__319;
struct tuple2$2char$phsNode$ph* __result_obj__320;
struct tuple2$2char$phsNode$ph* result_545;
struct tuple2$2char$phsNode$ph* __result_obj__321;
result_544 = (void*)0;
result_545 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_544,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__319 = result_544;
        return __result_obj__319;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__320 = self->it->item;
        return __result_obj__320;
    }
    memset(&result_545,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__321 = result_545;
    return __result_obj__321;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_551;
void* __right_value611 = (void*)0;
char* name_552;
_Bool no_comma_553;
void* __right_value612 = (void*)0;
struct sNode* exp_554;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
_Bool no_comma_556;
void* __right_value615 = (void*)0;
struct sNode* exp_557;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* name_558;
_Bool no_comma_559;
void* __right_value619 = (void*)0;
struct sNode* exp_560;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
_Bool no_comma_561;
void* __right_value622 = (void*)0;
struct sNode* exp_562;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value630 = (void*)0;
struct sNode* __result_obj__327;
    expected_next_character(123,info);
    initializer_551=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1185, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_552=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_553=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_554=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_553;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_551,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1200, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_552),(struct sNode*)come_increment_ref_count(exp_554))));
        (name_552 = come_decrement_ref_count(name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((exp_554) ? exp_554 = come_decrement_ref_count(exp_554, ((struct sNode*)exp_554)->finalize, ((struct sNode*)exp_554)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_556=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_557=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_556;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_551,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1208, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_557))));
        ((exp_557) ? exp_557 = come_decrement_ref_count(exp_557, ((struct sNode*)exp_557)->finalize, ((struct sNode*)exp_557)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
            name_558=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_559=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_560=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_559;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_551,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1234, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_558),(struct sNode*)come_increment_ref_count(exp_560))));
            (name_558 = come_decrement_ref_count(name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_560) ? exp_560 = come_decrement_ref_count(exp_560, ((struct sNode*)exp_560)->finalize, ((struct sNode*)exp_560)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_561=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_562=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_561;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_551,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1242, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_562))));
            ((exp_562) ? exp_562 = come_decrement_ref_count(exp_562, ((struct sNode*)exp_562)->finalize, ((struct sNode*)exp_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1248, "struct sNode");
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value626=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1248, "struct sStructInitializer*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_551),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result_obj__327 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value630=_inf_value4)));
    /*c*/ come_call_finalizer3(initializer_551,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value626,sStructInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value630) ? __right_value630 = come_decrement_ref_count(__right_value630, ((struct sNode*)__right_value630)->finalize, ((struct sNode*)__right_value630)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__327;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_555;
    result_555=0;
    result_555+=int_get_hash_key(((int)self->v1));
    result_555+=int_get_hash_key(((int)self->v2));
    return result_555;
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
char* __dec_obj146;
struct sNode* __dec_obj147;
struct tuple2$2char$phsNode$ph* __result_obj__324;
    __dec_obj146=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj147=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__324 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__324,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
struct sStructInitializer* __result_obj__325;
void* __right_value627 = (void*)0;
struct sStructInitializer* result_563;
void* __right_value628 = (void*)0;
char* __dec_obj148;
void* __right_value629 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj149;
struct sStructInitializer* __result_obj__326;
    if(    self==(void*)0) {
        __result_obj__325 = (void*)0;
        return __result_obj__325;
    }
    result_563=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*"));
    if(    self!=((void*)0)) {
        result_563->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj148=result_563->sname,
        result_563->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructInitializer_clone", 5, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_563->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj149=result_563->initializer,
        result_563->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj149,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__326 = result_563;
    /*c*/ come_call_finalizer3(result_563,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__326;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param){
void* __right_value631 = (void*)0;
struct sVar* self_564;
void* __right_value632 = (void*)0;
char* __dec_obj150;
void* __right_value633 = (void*)0;
struct sType* __dec_obj151;
void* __right_value634 = (void*)0;
char* __dec_obj152;
void* __right_value635 = (void*)0;
char* __dec_obj153;
void* __right_value636 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
void* __right_value642 = (void*)0;
    self_564=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1253, "struct sVar*"));
    __dec_obj150=self_564->mName,
    self_564->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj151=self_564->mType,
    self_564->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    function_param) {
        __dec_obj152=self_564->mCValueName,
        self_564->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int n_565=0;
        __dec_obj153=self_564->mCValueName,
        self_564->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_565++));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    self_564->mAllocaValue=(_Bool)0;
    self_564->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj154=self_564->mFunName,
        self_564->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "07var.c", 1269, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj155=self_564->mFunName,
        self_564->mFunName=((void*)0);
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_564));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_564,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_583;
unsigned int it_584;
_Bool same_key_exist_585;
char* it2_586;
struct map$2char$phsVar$ph* __result_obj__338;
    if(    self->len*10>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_583=string_get_hash_key(((char*)key))%self->size;
    it_584=hash_583;
    while((_Bool)1) {
        if(        self->item_existance[it_584]) {
            if(            string_equals(self->keys[it_584],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_584]);
                    (self->keys[it_584] = come_decrement_ref_count(self->keys[it_584], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_584]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_584]);
                    self->keys[it_584]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_584],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_584]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_584]=item;
                }
                break;
            }
            it_584++;
            if(            it_584>=self->size) {
                it_584=0;
            }
            else if(            it_584==hash_583) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_584]=(_Bool)1;
            if(            1) {
                self->keys[it_584]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_584]=key;
            }
            if(            1) {
                self->items[it_584]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_584]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_585=(_Bool)0;
    for(    it2_586=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_586=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_586,key)) {
            same_key_exist_585=(_Bool)1;
        }
    }
    if(    !same_key_exist_585) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__338 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_566;
void* __right_value637 = (void*)0;
char** keys_567;
void* __right_value638 = (void*)0;
struct sVar** items_568;
void* __right_value639 = (void*)0;
_Bool* item_existance_569;
int len_570;
char* it_573;
struct sVar* default_value_576;
void* __right_value640 = (void*)0;
struct sVar* it2_577;
unsigned int hash_580;
int n_581;
struct sVar* default_value_582;
void* __right_value641 = (void*)0;
default_value_576 = (void*)0;
default_value_582 = (void*)0;
    size_566=self->size*10;
    keys_567=(char**)come_increment_ref_count(((char**)(__right_value637=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_566)), "./comelang.h", 2165, "char**"))));
    items_568=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value638=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_566)), "./comelang.h", 2166, "struct sVar**"))));
    item_existance_569=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value639=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_566)), "./comelang.h", 2167, "_Bool*"))));
    len_570=0;
    for(    it_573=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_573=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_576,0,sizeof(struct sVar*));
        it2_577=((struct sVar*)(__right_value640=map$2char$phsVar$ph_at(self,it_573,(struct sVar*)come_increment_ref_count(default_value_576))));
        /*c*/ come_call_finalizer3(__right_value640,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_580=string_get_hash_key(((char*)it_573))%size_566;
        n_581=hash_580;
        while((_Bool)1) {
            if(            item_existance_569[n_581]) {
                n_581++;
                if(                n_581>=size_566) {
                    n_581=0;
                }
                else if(                n_581==hash_580) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_569[n_581]=(_Bool)1;
                keys_567[n_581]=it_573;
                items_568[n_581]=((struct sVar*)(__right_value641=map$2char$phsVar$ph_at(self,it_573,(struct sVar*)come_increment_ref_count(default_value_582))));
                /*c*/ come_call_finalizer3(__right_value641,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_570++;
                /*c*/ come_call_finalizer3(default_value_582,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_582,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_576,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_567;
    self->items=items_568;
    self->item_existance=item_existance_569;
    self->size=size_566;
    self->len=len_570;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_571;
char* __result_obj__328;
char* __result_obj__329;
char* result_572;
char* __result_obj__330;
result_571 = (void*)0;
result_572 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_571,0,sizeof(char*));
        __result_obj__328 = result_571;
        return __result_obj__328;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__329 = self->key_list->it->item;
        return __result_obj__329;
    }
    memset(&result_572,0,sizeof(char*));
    __result_obj__330 = result_572;
    return __result_obj__330;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_574;
char* __result_obj__331;
char* __result_obj__332;
char* result_575;
char* __result_obj__333;
result_574 = (void*)0;
result_575 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_574,0,sizeof(char*));
        __result_obj__331 = result_574;
        return __result_obj__331;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__332 = self->key_list->it->item;
        return __result_obj__332;
    }
    memset(&result_575,0,sizeof(char*));
    __result_obj__333 = result_575;
    return __result_obj__333;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_578;
unsigned int it_579;
struct sVar* __result_obj__334;
struct sVar* __result_obj__335;
struct sVar* __result_obj__336;
struct sVar* __result_obj__337;
    hash_578=string_get_hash_key(((char*)key))%self->size;
    it_579=hash_578;
    while((_Bool)1) {
        if(        self->item_existance[it_579]) {
            if(            string_equals(self->keys[it_579],key)) {
                __result_obj__334 = (struct sVar*)come_increment_ref_count(self->items[it_579]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__334,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__334;
            }
            it_579++;
            if(            it_579>=self->size) {
                it_579=0;
            }
            else if(            it_579==hash_578) {
                __result_obj__335 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__335,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__335;
            }
        }
        else {
            __result_obj__336 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__336,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__336;
        }
    }
    __result_obj__337 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__337,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__337;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value643 = (void*)0;
struct sVar* self_587;
void* __right_value644 = (void*)0;
char* __dec_obj156;
void* __right_value645 = (void*)0;
struct sType* __dec_obj157;
void* __right_value646 = (void*)0;
char* __dec_obj158;
void* __right_value647 = (void*)0;
    self_587=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1280, "struct sVar*"));
    __dec_obj156=self_587->mName,
    self_587->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj157=self_587->mType,
    self_587->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_587->mGlobal=(_Bool)1;
    __dec_obj158=self_587->mCValueName,
    self_587->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_587->mAllocaValue=(_Bool)0;
    self_587->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_587));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_587,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value648 = (void*)0;
struct sVar* self_588;
void* __right_value649 = (void*)0;
char* __dec_obj159;
void* __right_value650 = (void*)0;
struct sType* __dec_obj160;
void* __right_value651 = (void*)0;
char* __dec_obj161;
void* __right_value652 = (void*)0;
    self_588=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1297, "struct sVar*"));
    __dec_obj159=self_588->mName,
    self_588->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj160=self_588->mType,
    self_588->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_588->mGlobal=(_Bool)1;
    __dec_obj161=self_588->mCValueName,
    self_588->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_588->mAllocaValue=(_Bool)0;
    self_588->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_588));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_588,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real_589;
_Bool is_type_name_flag_590;
_Bool multiple_declare_591;
char* p_592;
int sline_593;
void* __right_value653 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* type_594=0;
char* name_595=0;
_Bool err_596=0;
void* __right_value654 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var30 = (void*)0;
struct sType* type_597=0;
char* name_598=0;
void* __right_value655 = (void*)0;
_Bool no_output_err_599;
_Bool no_comma_600;
_Bool no_output_come_code_601;
void* __right_value656 = (void*)0;
struct sNode* exp_602;
_Bool attr_define_603;
char* p_604;
int sline_605;
void* __right_value657 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* type_606=0;
char* name_607=0;
_Bool err_608=0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* fun_609;
void* __right_value661 = (void*)0;
char* buf2_610;
struct list$1char$ph* multiple_assign_611;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1char$ph* __dec_obj162;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
char* buf3_612;
void* __right_value666 = (void*)0;
_Bool no_comma_613;
void* __right_value667 = (void*)0;
struct sNode* right_value_614;
void* __right_value668 = (void*)0;
struct sNode* __dec_obj163;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value673 = (void*)0;
struct sNode* node_615;
struct sNode* __result_obj__339;
void* __right_value674 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c2_616=0;
char* Err_617=0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value679 = (void*)0;
struct sNode* node_618;
struct sNode* __result_obj__342;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_620;
void* __right_value682 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* base_type_621=0;
char* name_622=0;
_Bool err_623=0;
void* __right_value683 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var34 = (void*)0;
struct sType* type2_624=0;
char* var_name_625=0;
_Bool no_comma_626;
void* __right_value684 = (void*)0;
struct sNode* exp_627;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
_Bool no_comma_640;
void* __right_value690 = (void*)0;
struct sNode* exp_641;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var35 = (void*)0;
struct sType* type2_644=0;
char* var_name_645=0;
_Bool no_comma_646;
void* __right_value699 = (void*)0;
struct sNode* exp_647;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
_Bool no_comma_648;
void* __right_value702 = (void*)0;
struct sNode* exp_649;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sNode* right_node_650;
void* __right_value707 = (void*)0;
char* var_name2_651;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value712 = (void*)0;
struct sNode* node_652;
struct sNode* __result_obj__348;
void* __right_value713 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var36 = (void*)0;
struct sType* type_653=0;
char* name_654=0;
_Bool err_655=0;
void* __right_value714 = (void*)0;
char* __dec_obj175;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value726 = (void*)0;
struct sNode* self_node_661;
void* __right_value727 = (void*)0;
struct sNode* right_node_662;
void* __right_value728 = (void*)0;
struct sNode* node_663;
struct sNode* __result_obj__353;
void* __right_value729 = (void*)0;
struct sNode* __result_obj__354;
void* __right_value730 = (void*)0;
struct sNode* right_value_664;
void* __right_value731 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value736 = (void*)0;
struct sNode* node_665;
struct sNode* __result_obj__355;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
_Bool _elif_conditional1;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value743 = (void*)0;
struct sNode* node_666;
void* __right_value744 = (void*)0;
struct sNode* __dec_obj184;
struct sNode* __result_obj__356;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value748 = (void*)0;
struct sNode* node_667;
void* __right_value749 = (void*)0;
struct sNode* __dec_obj185;
struct sNode* __result_obj__357;
char* word_668;
void* __right_value750 = (void*)0;
char* __dec_obj186;
void* __right_value751 = (void*)0;
char* __dec_obj187;
_Bool is_type_name_flag_669;
void* __right_value752 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_670=0;
char* name_671=0;
_Bool err_672=0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value755 = (void*)0;
struct sNode* node_673;
struct sNode* __result_obj__358;
struct sNode* right_value_674;
_Bool no_comma_675;
void* __right_value756 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value762 = (void*)0;
struct sNode* node_676;
struct sNode* __result_obj__359;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value766 = (void*)0;
struct sNode* node_677;
struct sNode* __result_obj__360;
void* __right_value767 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c3_678=0;
char* Err_679=0;
word_668 = (void*)0;
    sline_real_589=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_590=is_type_name(buf,info);
    multiple_declare_591=(_Bool)0;
    if(    is_type_name_flag_590) {
        p_592=info->p;
        sline_593=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value653=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_594=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
            name_595=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            err_596=multiple_assign_var29->v3;
            /*c*/ come_call_finalizer3(__right_value653,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            err_596) {
                parse_sharp_v5(info);
                multiple_assign_var30=((struct tuple2$2sType$phchar$ph*)(__right_value654=parse_variable_name((struct sType*)come_increment_ref_count(type_594),(_Bool)1,info)));
                type_597=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_598=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                /*c*/ come_call_finalizer3(__right_value654,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value655=skip_block(info)));
                        (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        no_output_err_599=info->no_output_err;
                        no_comma_600=info->no_comma;
                        no_output_come_code_601=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_602=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_600;
                        info->no_output_err=no_output_err_599;
                        info->no_output_come_code=no_output_come_code_601;
                        ((exp_602) ? exp_602 = come_decrement_ref_count(exp_602, ((struct sNode*)exp_602)->finalize, ((struct sNode*)exp_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_598,info)&&*info->p==44) {
                    multiple_declare_591=(_Bool)1;
                }
                /*c*/ come_call_finalizer3(type_597,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_598 = come_decrement_ref_count(name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_595 = come_decrement_ref_count(name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_592;
        info->sline=sline_593;
    }
    attr_define_603=(_Bool)0;
    if(    is_type_name_flag_590&&info->defining_class) {
        p_604=info->p;
        sline_605=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value657=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_606=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_607=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_608=multiple_assign_var31->v3;
        /*c*/ come_call_finalizer3(__right_value657,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        err_608&&strmemcmp(info->p,"self")) {
            attr_define_603=(_Bool)1;
        }
        info->p=p_604;
        info->sline=sline_605;
        /*c*/ come_call_finalizer3(type_606,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_607 = come_decrement_ref_count(name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_609=((struct sFun*)(__right_value660=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value659=__builtin_string(buf))))));
    (__right_value658 = come_decrement_ref_count(__right_value658, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value659 = come_decrement_ref_count(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value660,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_610=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_611=((void*)0);
        if(        *info->p==44) {
            __dec_obj162=multiple_assign_611,
            multiple_assign_611=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1406, "struct list$1char$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj162,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1char$ph_push_back(multiple_assign_611,(char*)come_increment_ref_count((char*)come_memdup(buf2_610, "07var.c", 1407, "char*")));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_612=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph_push_back(multiple_assign_611,(char*)come_increment_ref_count((char*)come_memdup(buf3_612, "07var.c", 1417, "char*")));
                (buf3_612 = come_decrement_ref_count(buf3_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_613=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_614=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_613;
            parse_sharp_v5(info);
            __dec_obj163=right_value_614,
            right_value_614=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_614),info));
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1436, "struct sNode");
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value672=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1436, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2_610)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_611),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_614),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_615=(struct sNode*)come_increment_ref_count(_inf_value5);
            /*c*/ come_call_finalizer3(__right_value672,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_589;
            __result_obj__339 = (struct sNode*)come_increment_ref_count(node_615);
            ((right_value_614) ? right_value_614 = come_decrement_ref_count(right_value_614, ((struct sNode*)right_value_614)->finalize, ((struct sNode*)right_value_614)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf2_610 = come_decrement_ref_count(buf2_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(multiple_assign_611,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__result_obj__339) ? __result_obj__339 = come_decrement_ref_count(__result_obj__339, ((struct sNode*)__result_obj__339)->finalize, ((struct sNode*)__result_obj__339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__339;
            ((right_value_614) ? right_value_614 = come_decrement_ref_count(right_value_614, ((struct sNode*)right_value_614)->finalize, ((struct sNode*)right_value_614)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_615) ? node_615 = come_decrement_ref_count(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value674=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_exception_var_c2_616=multiple_assign_var32->v1;
            Err_617=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_617)?(puts(Err_617),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value674,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_617 = come_decrement_ref_count(Err_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (buf2_610 = come_decrement_ref_count(buf2_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(multiple_assign_611,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1446, "struct sNode");
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value676=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "07var.c", 1446, "struct sNewChannel*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_618=(struct sNode*)come_increment_ref_count(_inf_value6);
        /*c*/ come_call_finalizer3(__right_value676,sNewChannel_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_589;
        __result_obj__342 = (struct sNode*)come_increment_ref_count(node_618);
        ((node_618) ? node_618 = come_decrement_ref_count(node_618, ((struct sNode*)node_618)->finalize, ((struct sNode*)node_618)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__342;
        ((node_618) ? node_618 = come_decrement_ref_count(node_618, ((struct sNode*)node_618)->finalize, ((struct sNode*)node_618)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    multiple_declare_591) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_620=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1454, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value682=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_621=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
        name_622=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        err_623=multiple_assign_var33->v3;
        /*c*/ come_call_finalizer3(__right_value682,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_623) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var34=((struct tuple2$2sType$phchar$ph*)(__right_value683=parse_variable_name((struct sType*)come_increment_ref_count(base_type_621),(_Bool)1,info)));
        type2_624=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
        var_name_625=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        /*c*/ come_call_finalizer3(__right_value683,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_624->mClass->mStruct&&list$1sNode$ph_length(type2_624->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_626=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_627=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_626;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_620,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1481, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_624),(char*)come_increment_ref_count(var_name_625),(struct sNode*)come_increment_ref_count(exp_627))));
                ((exp_627) ? exp_627 = come_decrement_ref_count(exp_627, ((struct sNode*)exp_627)->finalize, ((struct sNode*)exp_627)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_640=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_641=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_640;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_620,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1491, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_624),(char*)come_increment_ref_count(var_name_625),(struct sNode*)come_increment_ref_count(exp_641))));
                ((exp_641) ? exp_641 = come_decrement_ref_count(exp_641, ((struct sNode*)exp_641)->finalize, ((struct sNode*)exp_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_620,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1495, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_624),(char*)come_increment_ref_count(var_name_625),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var35=((struct tuple2$2sType$phchar$ph*)(__right_value698=parse_variable_name((struct sType*)come_increment_ref_count(base_type_621),(_Bool)0,info)));
            type2_644=(struct sType*)come_increment_ref_count(multiple_assign_var35->v1);
            var_name_645=(char*)come_increment_ref_count(multiple_assign_var35->v2);
            /*c*/ come_call_finalizer3(__right_value698,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_644->mClass->mStruct&&list$1sNode$ph_length(type2_644->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_646=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_647=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_646;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_620,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1517, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_644),(char*)come_increment_ref_count(var_name_645),(struct sNode*)come_increment_ref_count(exp_647))));
                    ((exp_647) ? exp_647 = come_decrement_ref_count(exp_647, ((struct sNode*)exp_647)->finalize, ((struct sNode*)exp_647)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    no_comma_648=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_649=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_648;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_620,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1529, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_644),(char*)come_increment_ref_count(var_name_645),(struct sNode*)come_increment_ref_count(exp_649))));
                    ((exp_649) ? exp_649 = come_decrement_ref_count(exp_649, ((struct sNode*)exp_649)->finalize, ((struct sNode*)exp_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_620,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1533, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_644),(char*)come_increment_ref_count(var_name_645),((void*)0))));
            }
            /*c*/ come_call_finalizer3(type2_644,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_645 = come_decrement_ref_count(var_name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        right_node_650=((void*)0);
        var_name2_651=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1540, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value711=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1540, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_620),(struct sType*)come_increment_ref_count(base_type_621),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_652=(struct sNode*)come_increment_ref_count(_inf_value7);
        /*c*/ come_call_finalizer3(__right_value711,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_589;
        __result_obj__348 = (struct sNode*)come_increment_ref_count(node_652);
        /*c*/ come_call_finalizer3(multiple_declare_620,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_621,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_622 = come_decrement_ref_count(name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_624,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_625 = come_decrement_ref_count(var_name_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_650) ? right_node_650 = come_decrement_ref_count(right_node_650, ((struct sNode*)right_node_650)->finalize, ((struct sNode*)right_node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_651 = come_decrement_ref_count(var_name2_651, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_652) ? node_652 = come_decrement_ref_count(node_652, ((struct sNode*)node_652)->finalize, ((struct sNode*)node_652)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__348) ? __result_obj__348 = come_decrement_ref_count(__result_obj__348, ((struct sNode*)__result_obj__348)->finalize, ((struct sNode*)__result_obj__348)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__348;
        /*c*/ come_call_finalizer3(multiple_declare_620,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_621,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_622 = come_decrement_ref_count(name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_624,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_625 = come_decrement_ref_count(var_name_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_650) ? right_node_650 = come_decrement_ref_count(right_node_650, ((struct sNode*)right_node_650)->finalize, ((struct sNode*)right_node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_651 = come_decrement_ref_count(var_name2_651, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_652) ? node_652 = come_decrement_ref_count(node_652, ((struct sNode*)node_652)->finalize, ((struct sNode*)node_652)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    attr_define_603) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var36=((struct tuple3$3sType$phchar$phbool$*)(__right_value713=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_653=(struct sType*)come_increment_ref_count(multiple_assign_var36->v1);
        name_654=(char*)come_increment_ref_count(multiple_assign_var36->v2);
        err_655=multiple_assign_var36->v3;
        /*c*/ come_call_finalizer3(__right_value713,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_655) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj175=name_654,
        name_654=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1563, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_654),(struct sType*)come_increment_ref_count(type_653))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1571, "struct sNode");
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value725=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1571, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_661=(struct sNode*)come_increment_ref_count(_inf_value8);
            /*c*/ come_call_finalizer3(__right_value725,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            right_node_662=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_663=(struct sNode*)come_increment_ref_count(store_field(self_node_661,(struct sNode*)come_increment_ref_count(right_node_662),(char*)come_increment_ref_count(name_654),info));
            info->sline_real=sline_real_589;
            __result_obj__353 = (struct sNode*)come_increment_ref_count(node_663);
            ((self_node_661) ? self_node_661 = come_decrement_ref_count(self_node_661, ((struct sNode*)self_node_661)->finalize, ((struct sNode*)self_node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_662) ? right_node_662 = come_decrement_ref_count(right_node_662, ((struct sNode*)right_node_662)->finalize, ((struct sNode*)right_node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_663) ? node_663 = come_decrement_ref_count(node_663, ((struct sNode*)node_663)->finalize, ((struct sNode*)node_663)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(type_653,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_654 = come_decrement_ref_count(name_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__353;
            ((self_node_661) ? self_node_661 = come_decrement_ref_count(self_node_661, ((struct sNode*)self_node_661)->finalize, ((struct sNode*)self_node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_662) ? right_node_662 = come_decrement_ref_count(right_node_662, ((struct sNode*)right_node_662)->finalize, ((struct sNode*)right_node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_663) ? node_663 = come_decrement_ref_count(node_663, ((struct sNode*)node_663)->finalize, ((struct sNode*)node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real_589;
            __result_obj__354 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value729=create_null_node(info))));
            /*c*/ come_call_finalizer3(type_653,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_654 = come_decrement_ref_count(name_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value729) ? __right_value729 = come_decrement_ref_count(__right_value729, ((struct sNode*)__right_value729)->finalize, ((struct sNode*)__right_value729)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__354;
        }
        /*c*/ come_call_finalizer3(type_653,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_654 = come_decrement_ref_count(name_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !is_type_name_flag_590&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_664=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj183=right_value_664,
        right_value_664=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_664),info));
        (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1596, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value735=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1596, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_664),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_665=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value735,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_589;
        __result_obj__355 = (struct sNode*)come_increment_ref_count(node_665);
        ((right_value_664) ? right_value_664 = come_decrement_ref_count(right_value_664, ((struct sNode*)right_value_664)->finalize, ((struct sNode*)right_value_664)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_665) ? node_665 = come_decrement_ref_count(node_665, ((struct sNode*)node_665)->finalize, ((struct sNode*)node_665)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__355;
        ((right_value_664) ? right_value_664 = come_decrement_ref_count(right_value_664, ((struct sNode*)right_value_664)->finalize, ((struct sNode*)right_value_664)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_665) ? node_665 = come_decrement_ref_count(node_665, ((struct sNode*)node_665)->finalize, ((struct sNode*)node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_590||((struct sFun*)(__right_value739=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value738=__builtin_string(buf)))))))),    (__right_value737 = come_decrement_ref_count(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value738 = come_decrement_ref_count(__right_value738, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value739,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1601, "struct sNode");
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value742=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1601, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_666=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*c*/ come_call_finalizer3(__right_value742,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj184=node_666,
        node_666=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_666),info));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_589;
        __result_obj__356 = (struct sNode*)come_increment_ref_count(node_666);
        ((node_666) ? node_666 = come_decrement_ref_count(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__356;
        ((node_666) ? node_666 = come_decrement_ref_count(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !is_type_name_flag_590) {
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1609, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value747=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1609, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_667=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*c*/ come_call_finalizer3(__right_value747,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj185=node_667,
        node_667=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_667),info));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_589;
        __result_obj__357 = (struct sNode*)come_increment_ref_count(node_667);
        ((node_667) ? node_667 = come_decrement_ref_count(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__357) ? __result_obj__357 = come_decrement_ref_count(__result_obj__357, ((struct sNode*)__result_obj__357)->finalize, ((struct sNode*)__result_obj__357)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__357;
        ((node_667) ? node_667 = come_decrement_ref_count(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj186=word_668,
            word_668=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj187=word_668,
            word_668=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        is_type_name_flag_669=is_type_name(word_668,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_669) {
            parse_sharp_v5(info);
            multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value752=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_670=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
            name_671=(char*)come_increment_ref_count(multiple_assign_var37->v2);
            err_672=multiple_assign_var37->v3;
            /*c*/ come_call_finalizer3(__right_value752,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            !err_672) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1646, "struct sNode");
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value754=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1646, "struct sLoadNode*")),(char*)come_increment_ref_count(name_671),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_673=(struct sNode*)come_increment_ref_count(_inf_value12);
                /*c*/ come_call_finalizer3(__right_value754,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_589;
                __result_obj__358 = (struct sNode*)come_increment_ref_count(node_673);
                ((node_673) ? node_673 = come_decrement_ref_count(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_671 = come_decrement_ref_count(name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_668 = come_decrement_ref_count(word_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__358) ? __result_obj__358 = come_decrement_ref_count(__result_obj__358, ((struct sNode*)__result_obj__358)->finalize, ((struct sNode*)__result_obj__358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__358;
                ((node_673) ? node_673 = come_decrement_ref_count(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_674=((void*)0);
                if(                type_670->mClass->mStruct&&list$1sNode$ph_length(type_670->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_675=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj188=right_value_674,
                    right_value_674=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    info->no_comma=no_comma_675;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj189=right_value_674,
                    right_value_674=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj190=right_value_674,
                right_value_674=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_674),info));
                (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1675, "struct sNode");
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value761=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1675, "struct sStoreNode*")),(char*)come_increment_ref_count(name_671),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_670),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_674),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_676=(struct sNode*)come_increment_ref_count(_inf_value13);
                /*c*/ come_call_finalizer3(__right_value761,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_589;
                __result_obj__359 = (struct sNode*)come_increment_ref_count(node_676);
                ((right_value_674) ? right_value_674 = come_decrement_ref_count(right_value_674, ((struct sNode*)right_value_674)->finalize, ((struct sNode*)right_value_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_676) ? node_676 = come_decrement_ref_count(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_671 = come_decrement_ref_count(name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_668 = come_decrement_ref_count(word_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__359) ? __result_obj__359 = come_decrement_ref_count(__result_obj__359, ((struct sNode*)__result_obj__359)->finalize, ((struct sNode*)__result_obj__359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__359;
                ((right_value_674) ? right_value_674 = come_decrement_ref_count(right_value_674, ((struct sNode*)right_value_674)->finalize, ((struct sNode*)right_value_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_676) ? node_676 = come_decrement_ref_count(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1680, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value765=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1680, "struct sStoreNode*")),(char*)come_increment_ref_count(name_671),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_670),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_677=(struct sNode*)come_increment_ref_count(_inf_value14);
                /*c*/ come_call_finalizer3(__right_value765,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_589;
                __result_obj__360 = (struct sNode*)come_increment_ref_count(node_677);
                ((node_677) ? node_677 = come_decrement_ref_count(node_677, ((struct sNode*)node_677)->finalize, ((struct sNode*)node_677)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_671 = come_decrement_ref_count(name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_668 = come_decrement_ref_count(word_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__360) ? __result_obj__360 = come_decrement_ref_count(__result_obj__360, ((struct sNode*)__result_obj__360)->finalize, ((struct sNode*)__result_obj__360)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__360;
                ((node_677) ? node_677 = come_decrement_ref_count(node_677, ((struct sNode*)node_677)->finalize, ((struct sNode*)node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            /*c*/ come_call_finalizer3(type_670,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_671 = come_decrement_ref_count(name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (word_668 = come_decrement_ref_count(word_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value767=err_msg(info,"unexpected word(%s)(1)",buf)));
    come_exception_var_c3_678=multiple_assign_var38->v1;
    Err_679=(char*)come_increment_ref_count(multiple_assign_var38->v2);
    ((Err_679)?(puts(Err_679),exit(2)):(0));
    /*c*/ come_call_finalizer3(__right_value767,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    (Err_679 = come_decrement_ref_count(Err_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sNewChannel* __result_obj__340;
void* __right_value677 = (void*)0;
struct sNewChannel* result_619;
void* __right_value678 = (void*)0;
char* __dec_obj164;
struct sNewChannel* __result_obj__341;
    if(    self==(void*)0) {
        __result_obj__340 = (void*)0;
        return __result_obj__340;
    }
    result_619=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(    self!=((void*)0)) {
        result_619->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_619->sname,
        result_619->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_619->sline_real=self->sline_real;
    }
    __result_obj__341 = result_619;
    /*c*/ come_call_finalizer3(result_619,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__341;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value685 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_628;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj165;
void* __right_value686 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_629;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj166;
void* __right_value687 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_630;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj167;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__343;
    if(    self->len==0) {
        litem_628=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value685=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1111, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_628->prev=((void*)0);
        litem_628->next=((void*)0);
        __dec_obj165=litem_628->item,
        litem_628->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj165,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_628;
        self->head=litem_628;
    }
    else if(    self->len==1) {
        litem_629=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value686=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1121, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_629->prev=self->head;
        litem_629->next=((void*)0);
        __dec_obj166=litem_629->item,
        litem_629->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj166,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_629;
        self->head->next=litem_629;
    }
    else {
        litem_630=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value687=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1131, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_630->prev=self->tail;
        litem_630->next=((void*)0);
        __dec_obj167=litem_630->item,
        litem_630->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj167,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_630;
        self->tail=litem_630;
    }
    self->len++;
    __result_obj__343 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
}

static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self){
unsigned int result_631;
    result_631=0;
    result_631+=int_get_hash_key(((int)self->v1));
    result_631+=int_get_hash_key(((int)self->v2));
    result_631+=int_get_hash_key(((int)self->v3));
    return result_631;
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
    if(    !bool_equals(left->mDefferRightValue,right->mDefferRightValue)) {
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_632;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_633;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_632=left->head;
    it2_633=right->head;
    while(it_632!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_632->item,it2_633->item)) {
            return (_Bool)0;
        }
        it_632=it_632->next;
        it2_633=it2_633->next;
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
struct list_item$1sType$ph* it_634;
struct list_item$1sType$ph* it2_635;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_634=left->head;
    it2_635=right->head;
    while(it_634!=((void*)0)) {
        if(        !sType_equals(it_634->item,it2_635->item)) {
            return (_Bool)0;
        }
        it_634=it_634->next;
        it2_635=it2_635->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_636;
struct list_item$1sNode$ph* it2_637;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_636=left->head;
    it2_637=right->head;
    while(it_636!=((void*)0)) {
        if(        !sNode_equals(it_636->item,it2_637->item)) {
            return (_Bool)0;
        }
        it_636=it_636->next;
        it2_637=it2_637->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_638;
struct list_item$1char$ph* it2_639;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_638=left->head;
    it2_639=right->head;
    while(it_638!=((void*)0)) {
        if(        !string_equals(it_638->item,it2_639->item)) {
            return (_Bool)0;
        }
        it_638=it_638->next;
        it2_639=it2_639->next;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj168;
char* __dec_obj169;
struct sNode* __dec_obj170;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__344;
    __dec_obj168=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj169=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj170=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__344 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__344,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__344;
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
struct tuple3$3sType$phchar$phvoid$p* __result_obj__345;
void* __right_value693 = (void*)0;
struct tuple3$3sType$phchar$phvoid$p* result_642;
void* __right_value694 = (void*)0;
struct sType* __dec_obj171;
void* __right_value695 = (void*)0;
char* __dec_obj172;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__345,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__345;
    }
    result_642=(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "tuple3$3sType$phchar$phvoid$p_clone", 3, "struct tuple3$3sType$phchar$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj171=result_642->v1,
        result_642->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj172=result_642->v2,
        result_642->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phvoid$p_clone", 5, "char*"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_642->v3=self->v3;
    }
    __result_obj__346 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(result_642);
    /*c*/ come_call_finalizer3(result_642,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__346,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__346;
}

static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self){
unsigned int result_643;
    result_643=0;
    result_643+=int_get_hash_key(((int)self->v1));
    result_643+=int_get_hash_key(((int)self->v2));
    result_643+=int_get_hash_key(((int)self->v3));
    return result_643;
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
struct sType* __dec_obj173;
char* __dec_obj174;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__347;
    __dec_obj173=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj174=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__347 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__347,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__347;
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
void* __right_value715 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_656;
struct tuple2$2char$phsType$ph* __dec_obj176;
void* __right_value716 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_657;
struct tuple2$2char$phsType$ph* __dec_obj177;
void* __right_value717 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_658;
struct tuple2$2char$phsType$ph* __dec_obj178;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__349;
    if(    self->len==0) {
        litem_656=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value715=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1041, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_656->prev=((void*)0);
        litem_656->next=((void*)0);
        __dec_obj176=litem_656->item,
        litem_656->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj176,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_656;
        self->head=litem_656;
    }
    else if(    self->len==1) {
        litem_657=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value716=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1051, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_657->prev=self->head;
        litem_657->next=((void*)0);
        __dec_obj177=litem_657->item,
        litem_657->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj177,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_657;
        self->head->next=litem_657;
    }
    else {
        litem_658=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value717=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1061, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_658->prev=self->tail;
        litem_658->next=((void*)0);
        __dec_obj178=litem_658->item,
        litem_658->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj178,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_658;
        self->tail=litem_658;
    }
    self->len++;
    __result_obj__349 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__349;
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
struct tuple2$2char$phsType$ph* __result_obj__350;
void* __right_value718 = (void*)0;
struct tuple2$2char$phsType$ph* result_659;
void* __right_value719 = (void*)0;
char* __dec_obj179;
void* __right_value720 = (void*)0;
struct sType* __dec_obj180;
struct tuple2$2char$phsType$ph* __result_obj__351;
    if(    self==(void*)0) {
        __result_obj__350 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__350,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__350;
    }
    result_659=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj179=result_659->v1,
        result_659->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj180=result_659->v2,
        result_659->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__351 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_659);
    /*c*/ come_call_finalizer3(result_659,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__351,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__351;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_660;
    result_660=0;
    result_660+=int_get_hash_key(((int)self->v1));
    result_660+=int_get_hash_key(((int)self->v2));
    return result_660;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj181;
struct sType* __dec_obj182;
struct tuple2$2char$phsType$ph* __result_obj__352;
    __dec_obj181=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj182=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__352 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__352,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__352;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node_680;
void* __right_value768 = (void*)0;
struct sNode* exp_681;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value774 = (void*)0;
struct sNode* __result_obj__363;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj193;
struct sNode* __result_obj__364;
node_680 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_681=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1706, "struct sNode");
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value770=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1706, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp_681),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result_obj__363 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value774=_inf_value15)));
        ((exp_681) ? exp_681 = come_decrement_ref_count(exp_681, ((struct sNode*)exp_681)->finalize, ((struct sNode*)exp_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_680) ? node_680 = come_decrement_ref_count(node_680, ((struct sNode*)node_680)->finalize, ((struct sNode*)node_680)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value770,sReadChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value774) ? __right_value774 = come_decrement_ref_count(__right_value774, ((struct sNode*)__right_value774)->finalize, ((struct sNode*)__right_value774)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__363;
        ((exp_681) ? exp_681 = come_decrement_ref_count(exp_681, ((struct sNode*)exp_681)->finalize, ((struct sNode*)exp_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        __dec_obj193=node_680,
        node_680=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__364 = (struct sNode*)come_increment_ref_count(node_680);
    ((node_680) ? node_680 = come_decrement_ref_count(node_680, ((struct sNode*)node_680)->finalize, ((struct sNode*)node_680)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__364) ? __result_obj__364 = come_decrement_ref_count(__result_obj__364, ((struct sNode*)__result_obj__364)->finalize, ((struct sNode*)__result_obj__364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__364;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__361;
void* __right_value771 = (void*)0;
struct sReadChannelNode* result_682;
void* __right_value772 = (void*)0;
char* __dec_obj191;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj192;
struct sReadChannelNode* __result_obj__362;
    if(    self==(void*)0) {
        __result_obj__361 = (void*)0;
        return __result_obj__361;
    }
    result_682=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(    self!=((void*)0)) {
        result_682->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result_682->sname,
        result_682->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_682->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj192=result_682->exp,
        result_682->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__362 = result_682;
    /*c*/ come_call_finalizer3(result_682,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value776 = (void*)0;
struct sNode* right_value_683;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value784 = (void*)0;
struct sNode* __result_obj__367;
void* __right_value785 = (void*)0;
struct sNode* __result_obj__368;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_683=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj194=right_value_683,
        right_value_683=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_683),info));
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1729, "struct sNode");
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value779=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1729, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_683),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result_obj__367 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value784=_inf_value16)));
        ((right_value_683) ? right_value_683 = come_decrement_ref_count(right_value_683, ((struct sNode*)right_value_683)->finalize, ((struct sNode*)right_value_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value779,sWriteChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value784) ? __right_value784 = come_decrement_ref_count(__right_value784, ((struct sNode*)__right_value784)->finalize, ((struct sNode*)__right_value784)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__367) ? __result_obj__367 = come_decrement_ref_count(__result_obj__367, ((struct sNode*)__result_obj__367)->finalize, ((struct sNode*)__result_obj__367)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__367;
        ((right_value_683) ? right_value_683 = come_decrement_ref_count(right_value_683, ((struct sNode*)right_value_683)->finalize, ((struct sNode*)right_value_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__368 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value785=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value785) ? __right_value785 = come_decrement_ref_count(__right_value785, ((struct sNode*)__right_value785)->finalize, ((struct sNode*)__right_value785)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__368;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__365;
void* __right_value780 = (void*)0;
struct sWriteChannelNode* result_684;
void* __right_value781 = (void*)0;
char* __dec_obj195;
void* __right_value782 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value783 = (void*)0;
struct sNode* __dec_obj197;
struct sWriteChannelNode* __result_obj__366;
    if(    self==(void*)0) {
        __result_obj__365 = (void*)0;
        return __result_obj__365;
    }
    result_684=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(    self!=((void*)0)) {
        result_684->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj195=result_684->sname,
        result_684->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_684->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj196=result_684->exp,
        result_684->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj197=result_684->right_value,
        result_684->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__366 = result_684;
    /*c*/ come_call_finalizer3(result_684,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__366;
}

