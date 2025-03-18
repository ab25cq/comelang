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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
char* __dec_obj16;
void* __right_value226 = (void*)0;
struct sType* __dec_obj41;
struct sNode* __dec_obj42;
void* __right_value227 = (void*)0;
struct list$1char$ph* __dec_obj43;
void* __right_value239 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj50;
char* __dec_obj51;
struct sStoreNode* __result_obj__188;
    ((struct sNodeBase*)(__right_value186=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value186,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj41=self->type,
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj42=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    ((void*)0);
    __dec_obj43=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, multiple_assign));
    /*b*/ come_call_finalizer3(__dec_obj43,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    ((void*)0);
    __dec_obj50=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, multiple_declare));
    /*b*/ come_call_finalizer3(__dec_obj50,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj51=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__188 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__188,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value240 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = come_increment_ref_count(((char*)(__right_value240=__builtin_string("sStoreNode"))));
    (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__189;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sVar* var__286;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_308=0;
char* Err_309=0;
_Bool _if_conditional1;
_Bool __result_obj__199;
void* __right_value246 = (void*)0;
struct sType* type_310;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_311;
struct tuple3$3sType$phchar$phsNode$ph* it_314;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var2 = (void*)0;
struct sType* type_317=0;
char* var_name_318=0;
struct sNode* right_value_319=0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_2_320=0;
char* Err_321=0;
_Bool _if_conditional2;
_Bool __result_obj__206;
void* __right_value253 = (void*)0;
struct sType* left_type_322;
_Bool Value_323;
_Bool __result_obj__207;
void* __right_value254 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
_Bool Value_325;
void* __right_value258 = (void*)0;
struct CVALUE* right_value_326;
struct sType* right_type_327;
int i_328;
struct list$1char$ph* o2_saved_329;
char* it_332;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct sVar* var__335;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct sType* right_type2_336;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
char* multiple_var_name_341;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
char* __dec_obj52;
struct list$1char$ph* o2_saved_342;
char* it_343;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sType* right_type2_344;
struct sVar* var__345;
void* __right_value270 = (void*)0;
struct sType* var_type_346;
void* __right_value271 = (void*)0;
struct sType* left_type_347;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct CVALUE* right_value2_348;
void* __right_value274 = (void*)0;
char* __dec_obj53;
void* __right_value275 = (void*)0;
struct sType* __dec_obj54;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_350=0;
char* Err_351=0;
_Bool _if_conditional3;
_Bool __result_obj__216;
void* __right_value281 = (void*)0;
char* __dec_obj55;
void* __right_value282 = (void*)0;
char* __dec_obj56;
void* __right_value283 = (void*)0;
struct sType* __dec_obj57;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sVar* var__352;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_4_353=0;
char* Err_354=0;
_Bool _if_conditional4;
_Bool __result_obj__217;
void* __right_value290 = (void*)0;
struct sType* type_355;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_5_356=0;
char* Err_357=0;
_Bool _if_conditional5;
_Bool __result_obj__218;
void* __right_value293 = (void*)0;
struct sType* left_type_358;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sNode$ph* o2_saved_359;
struct sNode* it_362;
_Bool Value_365;
void* __right_value296 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c1_366=0;
char* Err_367=0;
void* __right_value297 = (void*)0;
struct CVALUE* come_value_368;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_369;
void* __right_value302 = (void*)0;
char* __dec_obj58;
void* __right_value303 = (void*)0;
struct sType* __dec_obj59;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sVar* var__373;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* type_374;
void* __right_value312 = (void*)0;
_Bool Value_375;
void* __right_value313 = (void*)0;
_Bool array_initializer_376;
void* __right_value314 = (void*)0;
_Bool struct_initializer_377;
void* __right_value315 = (void*)0;
_Bool new_channel_378;
void* __right_value316 = (void*)0;
struct CVALUE* right_value_379;
struct sType* right_type_380;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sType* var_type_381;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* left_type_382;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sVar* var__383;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value326 = (void*)0;
char* __dec_obj63;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sVar* var__385;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value332 = (void*)0;
char* __dec_obj64;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_6_387=0;
char* Err_388=0;
_Bool _if_conditional6;
_Bool __result_obj__226;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value339 = (void*)0;
char* __dec_obj65;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var9 = (void*)0;
_Bool come_exception_var_7_390=0;
char* Err_391=0;
_Bool _if_conditional7;
_Bool __result_obj__227;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value346 = (void*)0;
char* __dec_obj66;
void* __right_value347 = (void*)0;
struct sType* __dec_obj67;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value351 = (void*)0;
char* __dec_obj68;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj69;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_8_394=0;
char* Err_395=0;
_Bool _if_conditional8;
_Bool __result_obj__228;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value361 = (void*)0;
char* __dec_obj70;
void* __right_value362 = (void*)0;
struct sType* __dec_obj71;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_9_397=0;
char* Err_398=0;
_Bool _if_conditional9;
_Bool __result_obj__229;
void* __right_value366 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_10_399=0;
char* Err_400=0;
_Bool _if_conditional10;
_Bool __result_obj__230;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value370 = (void*)0;
char* __dec_obj72;
void* __right_value371 = (void*)0;
struct sType* __dec_obj73;
_Bool Value_402;
void* __right_value372 = (void*)0;
_Bool new_channel_403;
void* __right_value373 = (void*)0;
struct CVALUE* right_value_404;
struct sType* right_type_405;
struct sClass* current_stack_frame_struct_406;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
_Bool _if_conditional11;
struct sVar* parent_var_407;
struct sType* left_type_408;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_11_409=0;
char* Err_410=0;
_Bool _if_conditional12;
_Bool __result_obj__231;
void* __right_value379 = (void*)0;
char* c_value_411;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value382 = (void*)0;
char* __dec_obj74;
void* __right_value383 = (void*)0;
char* __dec_obj75;
void* __right_value384 = (void*)0;
struct sType* __dec_obj76;
_Bool __result_obj__232;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_12_413=0;
char* Err_414=0;
_Bool _if_conditional13;
_Bool __result_obj__233;
void* __right_value388 = (void*)0;
char* c_value_415;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_416;
void* __right_value391 = (void*)0;
char* __dec_obj77;
void* __right_value392 = (void*)0;
char* __dec_obj78;
void* __right_value393 = (void*)0;
struct sType* __dec_obj79;
_Bool __result_obj__234;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_13_417=0;
char* Err_418=0;
_Bool _if_conditional14;
_Bool __result_obj__235;
void* __right_value397 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_14_419=0;
char* Err_420=0;
_Bool _if_conditional15;
_Bool __result_obj__236;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_421;
void* __right_value400 = (void*)0;
char* __dec_obj80;
void* __right_value401 = (void*)0;
char* __dec_obj81;
void* __right_value402 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__237;
struct sVar* var__422;
void* __right_value403 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_15_423=0;
char* Err_424=0;
_Bool _if_conditional16;
_Bool __result_obj__238;
void* __right_value404 = (void*)0;
struct sType* __dec_obj83;
void* __right_value405 = (void*)0;
struct sType* left_type_425;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_16_426=0;
char* Err_427=0;
_Bool _if_conditional17;
_Bool __result_obj__239;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_428;
void* __right_value411 = (void*)0;
char* __dec_obj84;
void* __right_value412 = (void*)0;
struct sType* __dec_obj85;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_17_429=0;
char* Err_430=0;
_Bool _if_conditional18;
_Bool __result_obj__240;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value418 = (void*)0;
char* __dec_obj86;
void* __right_value419 = (void*)0;
struct sType* __dec_obj87;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_18_432=0;
char* Err_433=0;
_Bool _if_conditional19;
_Bool __result_obj__241;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value425 = (void*)0;
char* __dec_obj88;
void* __right_value426 = (void*)0;
struct sType* __dec_obj89;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value429 = (void*)0;
char* __dec_obj90;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sType* __dec_obj91;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var21 = (void*)0;
_Bool come_exception_var_19_436=0;
char* Err_437=0;
_Bool _if_conditional20;
_Bool __result_obj__242;
void* __right_value436 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_20_438=0;
char* Err_439=0;
_Bool _if_conditional21;
_Bool __result_obj__243;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct CVALUE* come_value_440;
void* __right_value439 = (void*)0;
char* __dec_obj92;
void* __right_value440 = (void*)0;
struct sType* __dec_obj93;
    if(    self->multiple_declare) {
        var__286=((struct sVar*)(__right_value242=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value241=__builtin_string(self->name))))));
        (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value242,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__286) {
            if(            var__286->mType->mHeap) {
                free_object(((struct sType*)(__right_value243=come_call_cloner(sType_clone, var__286->mType))),var__286->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value243,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value244=__builtin_string(self->name))));
            (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value245=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_1_308=multiple_assign_var1->v1;
            Err_309=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            (_if_conditional1=(Err_309)),            /*c*/ come_call_finalizer3(__right_value245,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                __result_obj__199 = (_Bool)1;
                (Err_309 = come_decrement_ref_count(Err_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__199;
            }
            else {
            }
            (Err_309 = come_decrement_ref_count(Err_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_310=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        for(        o2_saved_311=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_314=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin((o2_saved_311));        !list$1tuple3$3sType$phchar$phsNode$ph$ph_end((o2_saved_311));        it_314=list$1tuple3$3sType$phchar$phsNode$ph$ph_next((o2_saved_311))        ){
            multiple_assign_var2=it_314;
            type_317=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            var_name_318=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            right_value_319=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v3);
            var__286=((struct sVar*)(__right_value248=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value247=__builtin_string(var_name_318))))));
            (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value248,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            var__286) {
                if(                var__286->mType->mHeap) {
                    free_object(((struct sType*)(__right_value249=come_call_cloner(sType_clone, var__286->mType))),var__286->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value249,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value250=__builtin_string(var_name_318))));
                (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_variable_to_table(var_name_318,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_317)),info,(_Bool)0);
            var__286=get_variable_from_table(info->lv_table,var_name_318);
            if(            var__286==((void*)0)) {
                multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value252=err_msg(info,"var not found(%s)(ZY) at definition of variable",it_314)));
                come_exception_var_2_320=multiple_assign_var3->v1;
                Err_321=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_321)),                /*c*/ come_call_finalizer3(__right_value252,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    __result_obj__206 = (_Bool)1;
                    (Err_321 = come_decrement_ref_count(Err_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_318 = come_decrement_ref_count(var_name_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_319) ? right_value_319 = come_decrement_ref_count(right_value_319, ((struct sNode*)right_value_319)->finalize, ((struct sNode*)right_value_319)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_311,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__206;
                }
                else {
                }
                (Err_321 = come_decrement_ref_count(Err_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            left_type_322=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__286->mType));
            if(            right_value_319) {
                Value_323=node_compile(right_value_319,info);
                if(                !Value_323) {
                    __result_obj__207 = (_Bool)0;
                    /*c*/ come_call_finalizer3(type_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_318 = come_decrement_ref_count(var_name_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_319) ? right_value_319 = come_decrement_ref_count(right_value_319, ((struct sNode*)right_value_319)->finalize, ((struct sNode*)right_value_319)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(left_type_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_311,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__207;
                }
                else {
                }
                come_value_324=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value255=make_define_var(left_type_322,var__286->mCValueName,(_Bool)0,info))),come_value_324->c_value);
                (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_324,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__286->mCValueName,((char*)(__right_value256=make_type_name_string(left_type_322,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value257=make_define_var(left_type_322,var__286->mCValueName,(_Bool)0,info))));
                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_318 = come_decrement_ref_count(var_name_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_value_319) ? right_value_319 = come_decrement_ref_count(right_value_319, ((struct sNode*)right_value_319)->finalize, ((struct sNode*)right_value_319)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_type_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_311,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_325=node_compile(self->right_value,info);
        if(        !Value_325) {
            return (_Bool)0;
        }
        else {
        }
        right_value_326=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_327=right_value_326->type;
        if(        right_type_327->mNoSolvedGenericsType) {
            right_type_327=right_type_327->mNoSolvedGenericsType;
        }
        i_328=0;
        for(        o2_saved_329=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_332=list$1char$ph_begin((o2_saved_329));        !list$1char$ph_end((o2_saved_329));        it_332=list$1char$ph_next((o2_saved_329))        ){
            if(            i_328<list$1sType$ph_length(right_type_327->mGenericsTypes)) {
                var__335=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value259=__builtin_string(it_332)))));
                (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                var__335) {
                    if(                    var__335->mType->mHeap) {
                        free_object(((struct sType*)(__right_value261=come_call_cloner(sType_clone, var__335->mType))),var__335->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value261,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value262=__builtin_string(it_332))));
                    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                right_type2_336=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(right_type_327->mGenericsTypes,i_328));
                add_variable_to_table(it_332,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_336)),info,(_Bool)0);
                /*c*/ come_call_finalizer3(var__335,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_336,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            i_328++;
        }
        /*c*/ come_call_finalizer3(o2_saved_329,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        static int num_multiple_var_340=0;
        multiple_var_name_341=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_340));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value266=make_define_var(right_value_326->type,multiple_var_name_341,(_Bool)0,info))));
        (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_341,right_value_326->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_341,right_value_326->c_value);
        }
        __dec_obj52=right_value_326->c_value,
        right_value_326->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name_341, "07var.c", 125, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        i_328=0;
        for(        o2_saved_342=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_343=list$1char$ph_begin((o2_saved_342));        !list$1char$ph_end((o2_saved_342));        it_343=list$1char$ph_next((o2_saved_342))        ){
            if(            i_328<list$1sType$ph_length(right_type_327->mGenericsTypes)) {
                right_type2_344=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value268=list$1sType$ph$p_operator_load_element(right_type_327->mGenericsTypes,i_328)))));
                /*c*/ come_call_finalizer3(__right_value268,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                var__345=get_variable_from_table(info->lv_table,it_343);
                var_type_346=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__345->mType));
                var_type_346->mStatic=(_Bool)0;
                left_type_347=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__345->mType));
                right_value2_348=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 139, "struct CVALUE*"))));
                __dec_obj53=right_value2_348->c_value,
                right_value2_348->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_326->c_value,i_328+1));
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj54=right_value2_348->type,
                right_value2_348->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_344));
                /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                right_value2_348->var=((void*)0);
                come_value_349=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 145, "struct CVALUE*"))));
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value280=check_assign_type(((char*)(__right_value279=xsprintf("\%s is assining to}",((char*)(__right_value278=string_to_string(self->name)))))),left_type_347,right_type2_344,come_value_349,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_3_350=multiple_assign_var4->v1;
                Err_351=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_351)),                (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value280,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    __result_obj__216 = (_Bool)1;
                    /*c*/ come_call_finalizer3(right_type2_344,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(var_type_346,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_value2_348,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (Err_351 = come_decrement_ref_count(Err_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(o2_saved_342,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_value_326,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (multiple_var_name_341 = come_decrement_ref_count(multiple_var_name_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__216;
                }
                else {
                }
                if(                right_type2_344->mHeap&&left_type_347->mHeap&&left_type_347->mPointerNum>0&&right_type2_344->mPointerNum>0) {
                    std_move(left_type_347,right_type2_344,right_value2_348,info,(_Bool)0);
                    __dec_obj55=come_value_349->c_value,
                    come_value_349->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__345->mCValueName,right_value2_348->c_value));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj56=come_value_349->c_value,
                    come_value_349->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__345->mCValueName,right_value2_348->c_value));
                    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj57=come_value_349->type,
                come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_347));
                /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_349->var=var__345;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value284=make_define_var(left_type_347,var__345->mCValueName,(_Bool)0,info))));
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_349->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_349->c_value);
                }
                /*c*/ come_call_finalizer3(right_type2_344,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_346,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value2_348,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_351 = come_decrement_ref_count(Err_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            i_328++;
        }
        /*c*/ come_call_finalizer3(o2_saved_342,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_value_326,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (multiple_var_name_341 = come_decrement_ref_count(multiple_var_name_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)) {
        var__352=((struct sVar*)(__right_value286=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value285=__builtin_string(self->name))))));
        (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value286,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__352) {
            if(            var__352->mType->mHeap) {
                free_object(((struct sType*)(__right_value287=come_call_cloner(sType_clone, var__352->mType))),var__352->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value287,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value288=__builtin_string(self->name))));
            (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value289=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_4_353=multiple_assign_var5->v1;
            Err_354=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            if(            (_if_conditional4=(Err_354)),            /*c*/ come_call_finalizer3(__right_value289,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __result_obj__217 = (_Bool)1;
                (Err_354 = come_decrement_ref_count(Err_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__217;
            }
            else {
            }
            (Err_354 = come_decrement_ref_count(Err_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_355=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_355)),info,(_Bool)0);
        var__352=get_variable_from_table(info->lv_table,self->name);
        if(        var__352==((void*)0)) {
            var__352=get_variable_from_table(info->gv_table,self->name);
            if(            var__352==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value292=err_msg(info,"var not found(%s)(Y) at definition of variable",self->name)));
                come_exception_var_5_356=multiple_assign_var6->v1;
                Err_357=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_357)),                /*c*/ come_call_finalizer3(__right_value292,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional5) {
                    __result_obj__218 = (_Bool)1;
                    (Err_357 = come_decrement_ref_count(Err_357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_355,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__218;
                }
                else {
                }
                (Err_357 = come_decrement_ref_count(Err_357, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_358=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__352->mType));
        if(        left_type_358->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__352->mCValueName);
        }
        else if(        list$1sNode$ph_length(left_type_358->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value294=make_define_var(left_type_358,var__352->mCValueName,(_Bool)0,info))));
            (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__352->mCValueName,((char*)(__right_value295=make_type_name_string(left_type_358,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            for(            o2_saved_359=(struct list$1sNode$ph*)come_increment_ref_count((left_type_358->mArrayNum)),it_362=list$1sNode$ph_begin((o2_saved_359));            !list$1sNode$ph_end((o2_saved_359));            it_362=list$1sNode$ph_next((o2_saved_359))            ){
                Value_365=node_compile(it_362,info);
                if(                !Value_365) {
                    multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value296=err_msg(info,"invalid array num")));
                    come_exception_var_c1_366=multiple_assign_var7->v1;
                    Err_367=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    ((Err_367)?(puts(Err_367),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value296,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_367 = come_decrement_ref_count(Err_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                }
                come_value_368=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"*(%s)",come_value_368->c_value);
                /*c*/ come_call_finalizer3(come_value_368,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_359,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value298=make_define_var(left_type_358,var__352->mCValueName,(_Bool)0,info))));
            (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_358->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__352->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__352->mCValueName,((char*)(__right_value299=make_type_name_string(left_type_358,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_369=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 253, "struct CVALUE*"))));
            __dec_obj58=come_value_369->c_value,
            come_value_369->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__352->mCValueName));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj59=come_value_369->type,
            come_value_369->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_358));
            /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_369->var=var__352;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_369));
            /*c*/ come_call_finalizer3(come_value_369,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !left_type_358->mClass->mNumber&&left_type_358->mPointerNum==0) {
            var__352->mType->mAllocaValue=(_Bool)1;
            if(            var__352->mType->mNoSolvedGenericsType) {
                var__352->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        /*c*/ come_call_finalizer3(type_355,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->alloc) {
        var__373=((struct sVar*)(__right_value308=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value307=__builtin_string(self->name))))));
        (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value308,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__373) {
            if(            var__373->mType->mHeap) {
                free_object(((struct sType*)(__right_value309=come_call_cloner(sType_clone, var__373->mType))),var__373->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value309,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value310=__builtin_string(self->name))));
            (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_374=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_374)),info,(_Bool)0);
            /*c*/ come_call_finalizer3(type_374,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        Value_375=node_compile(self->right_value,info);
        if(        !Value_375) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_376=string_operator_equals(((char*)(__right_value313=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        struct_initializer_377=string_operator_equals(((char*)(__right_value314=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        new_channel_378=string_operator_equals(((char*)(__right_value315=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_379=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_380=right_value_379->type;
        if(        self->type==((void*)0)) {
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_380)),info,(_Bool)0);
        }
        else {
        }
        var__373=get_variable_from_table(info->lv_table,self->name);
        var_type_381=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__373->mType));
        var_type_381->mStatic=(_Bool)0;
        if(        !array_initializer_376&&!struct_initializer_377&&!var__373->mType->mStatic&&!var_type_381->mConstant&&list$1sNode$ph_length(var_type_381->mArrayNum)==0) {
            if(            var_type_381->mClass->mNumber) {
            }
            else if(            (var_type_381->mClass->mStruct||var_type_381->mClass->mUnion||var_type_381->mClass->mEnum)||var_type_381->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__373->mCValueName,((char*)(__right_value319=make_type_name_string(var_type_381,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__373->mType));
        if(        array_initializer_376) {
            var__383=((struct sVar*)(__right_value322=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value321=__builtin_string(self->name))))));
            (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value322,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value323=make_define_var(var__383->mType,var__383->mCValueName,(_Bool)0,info))),right_value_379->c_value);
            (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_384=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 332, "struct CVALUE*"))));
            __dec_obj63=come_value_384->c_value,
            come_value_384->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_384));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_384,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        struct_initializer_377) {
            var__385=((struct sVar*)(__right_value328=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value327=__builtin_string(self->name))))));
            (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value328,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value329=make_define_var(var__385->mType,var__385->mCValueName,(_Bool)0,info))),right_value_379->c_value);
            (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 349, "struct CVALUE*"))));
            __dec_obj64=come_value_386->c_value,
            come_value_386->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_386));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_386,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        var__373->mType->mStatic||var__373->mType->mConstant) {
            multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value335=check_assign_type(((char*)(__right_value334=xsprintf("\%s is assining to",((char*)(__right_value333=string_to_string(self->name)))))),left_type_382,right_type_380,right_value_379,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_6_387=multiple_assign_var8->v1;
            Err_388=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            (_if_conditional6=(Err_388)),            (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value335,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                __result_obj__226 = (_Bool)1;
                (Err_388 = come_decrement_ref_count(Err_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_379,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__226;
            }
            else {
            }
            add_come_code(info,"%s=%s;\n",((char*)(__right_value336=make_define_var(left_type_382,var__373->mCValueName,(_Bool)0,info))),right_value_379->c_value);
            (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 369, "struct CVALUE*"))));
            __dec_obj65=come_value_389->c_value,
            come_value_389->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
            transpiler_clear_last_code(info);
            (Err_388 = come_decrement_ref_count(Err_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_380->mHeap&&left_type_382->mHeap&&left_type_382->mPointerNum>0&&right_type_380->mPointerNum>0) {
            multiple_assign_var9=((struct tuple2$2bool$char$ph*)(__right_value342=check_assign_type(((char*)(__right_value341=xsprintf("\%s is assining to",((char*)(__right_value340=string_to_string(self->name)))))),left_type_382,right_type_380,right_value_379,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_7_390=multiple_assign_var9->v1;
            Err_391=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional7=(Err_391)),            (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value342,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __result_obj__227 = (_Bool)1;
                (Err_391 = come_decrement_ref_count(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_379,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__227;
            }
            else {
            }
            std_move(left_type_382,right_type_380,right_value_379,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value343=make_define_var(left_type_382,var__373->mCValueName,(_Bool)0,info))));
            (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 392, "struct CVALUE*"))));
            __dec_obj66=come_value_392->c_value,
            come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__373->mCValueName,right_value_379->c_value));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj67=come_value_392->type,
            come_value_392->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_382));
            /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_392->var=var__373;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
            add_come_last_code(info,"%s",come_value_392->c_value);
            (Err_391 = come_decrement_ref_count(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_392,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_382->mChannel&&new_channel_378) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value348=make_define_var(left_type_382,var__373->mCValueName,(_Bool)0,info))));
            (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__373->mCValueName);
            come_value_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 406, "struct CVALUE*"))));
            __dec_obj68=come_value_393->c_value,
            come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__373->mCValueName));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj69=come_value_393->type,
            come_value_393->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 408, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_393->type->mPointerNum=1;
            come_value_393->var=var__373;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
            add_come_last_code(info,"%s",come_value_393->c_value);
            /*c*/ come_call_finalizer3(come_value_393,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_382->mPointerNum>0&&left_type_382->mHeap&&string_operator_equals(right_type_380->mClass->mName,"void")&&right_type_380->mPointerNum>0) {
            multiple_assign_var10=((struct tuple2$2bool$char$ph*)(__right_value357=check_assign_type(((char*)(__right_value356=xsprintf("\%s is assining to",((char*)(__right_value355=string_to_string(self->name)))))),left_type_382,right_type_380,right_value_379,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_8_394=multiple_assign_var10->v1;
            Err_395=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional8=(Err_395)),            (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value357,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional8) {
                __result_obj__228 = (_Bool)1;
                (Err_395 = come_decrement_ref_count(Err_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_379,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            else {
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value358=make_define_var(left_type_382,var__373->mCValueName,(_Bool)0,info))));
            (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "struct CVALUE*"))));
            __dec_obj70=come_value_396->c_value,
            come_value_396->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__373->mCValueName,right_value_379->c_value));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj71=come_value_396->type,
            come_value_396->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_382));
            /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_396->var=var__373;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
            add_come_last_code(info,"%s",come_value_396->c_value);
            (Err_395 = come_decrement_ref_count(Err_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_396,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value365=check_assign_type(((char*)(__right_value364=xsprintf("\%s is assining to",((char*)(__right_value363=string_to_string(self->name)))))),left_type_382,right_type_380,right_value_379,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_9_397=multiple_assign_var11->v1;
            Err_398=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            (_if_conditional9=(Err_398)),            (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value365,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __result_obj__229 = (_Bool)1;
                (Err_398 = come_decrement_ref_count(Err_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_379,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__229;
            }
            else {
            }
            if(            right_type_380->mHeap&&left_type_382->mHeap&&left_type_382->mPointerNum>0&&right_type_380->mPointerNum>0) {
                std_move(left_type_382,right_type_380,right_value_379,info,(_Bool)0);
            }
            if(            left_type_382->mHeap&&!right_value_379->type->mHeap) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value366=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_10_399=multiple_assign_var12->v1;
                Err_400=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_400)),                /*c*/ come_call_finalizer3(__right_value366,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    __result_obj__230 = (_Bool)1;
                    (Err_400 = come_decrement_ref_count(Err_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_398 = come_decrement_ref_count(Err_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_379,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(var_type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__230;
                }
                else {
                }
                (Err_400 = come_decrement_ref_count(Err_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value367=make_define_var(left_type_382,var__373->mCValueName,(_Bool)0,info))));
            (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 459, "struct CVALUE*"))));
            __dec_obj72=come_value_401->c_value,
            come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__373->mCValueName,right_value_379->c_value));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj73=come_value_401->type,
            come_value_401->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_382));
            /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_401->var=var__373;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_401));
            add_come_last_code(info,"%s",come_value_401->c_value);
            (Err_398 = come_decrement_ref_count(Err_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_401,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_379,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(var_type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        Value_402=node_compile(self->right_value,info);
        if(        !Value_402) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_403=string_operator_equals(((char*)(__right_value372=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_405=right_value_404->type;
        current_stack_frame_struct_406=info->current_stack_frame_struct;
        if(        (_if_conditional11=(current_stack_frame_struct_406&&((struct sVar*)(__right_value375=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value374=__builtin_string(self->name))))))==((void*)0))),        (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value375,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional11) {
            parent_var_407=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_407!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_407->mFunName,info->come_fun->mName)) {
                    left_type_408=parent_var_407->mType;
                    if(                    left_type_408->mPointerNum>0&&right_type_405->mPointerNum>0&&right_type_405->mHeap&&left_type_408->mHeap) {
                        multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value378=check_assign_type(((char*)(__right_value377=xsprintf("\%s is assigning to",((char*)(__right_value376=string_to_string(self->name)))))),left_type_408,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_11_409=multiple_assign_var13->v1;
                        Err_410=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        if(                        (_if_conditional12=(Err_410)),                        (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value378,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional12) {
                            __result_obj__231 = (_Bool)1;
                            (Err_410 = come_decrement_ref_count(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__231;
                        }
                        else {
                        }
                        c_value_411=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_407->mCValueName));
                        decrement_ref_count_object(parent_var_407->mType,c_value_411,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_408,right_type_405,right_value_404,info,(_Bool)0);
                        come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 499, "struct CVALUE*"))));
                        if(                        parent_var_407->mType->mOriginIsArray) {
                            __dec_obj74=come_value_412->c_value,
                            come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_407->mCValueName,right_value_404->c_value));
                            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj75=come_value_412->c_value,
                            come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_407->mCValueName,right_value_404->c_value));
                            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj76=come_value_412->type,
                        come_value_412->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_408));
                        /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_412->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_412->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
                        __result_obj__232 = (_Bool)1;
                        (Err_410 = come_decrement_ref_count(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_411 = come_decrement_ref_count(c_value_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_412,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__232;
                        (Err_410 = come_decrement_ref_count(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_411 = come_decrement_ref_count(c_value_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_412,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else if(                    left_type_408->mPointerNum>0&&right_type_405->mPointerNum>0&&string_operator_equals(right_type_405->mClass->mName,"void")&&left_type_408->mHeap) {
                        multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value387=check_assign_type(((char*)(__right_value386=xsprintf("\%s is assigning to",((char*)(__right_value385=string_to_string(self->name)))))),left_type_408,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_12_413=multiple_assign_var14->v1;
                        Err_414=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        if(                        (_if_conditional13=(Err_414)),                        (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value387,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional13) {
                            __result_obj__233 = (_Bool)1;
                            (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__233;
                        }
                        else {
                        }
                        c_value_415=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_407->mCValueName));
                        decrement_ref_count_object(parent_var_407->mType,c_value_415,info,(_Bool)0,(_Bool)0);
                        come_value_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 525, "struct CVALUE*"))));
                        if(                        parent_var_407->mType->mOriginIsArray) {
                            __dec_obj77=come_value_416->c_value,
                            come_value_416->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_407->mCValueName,right_value_404->c_value));
                            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj78=come_value_416->c_value,
                            come_value_416->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_407->mCValueName,right_value_404->c_value));
                            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj79=come_value_416->type,
                        come_value_416->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_408));
                        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_416->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_416->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_416));
                        __result_obj__234 = (_Bool)1;
                        (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_415 = come_decrement_ref_count(c_value_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_416,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__234;
                        (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_415 = come_decrement_ref_count(c_value_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_416,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value396=check_assign_type(((char*)(__right_value395=xsprintf("\%s is assigning to",((char*)(__right_value394=string_to_string(self->name)))))),left_type_408,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_13_417=multiple_assign_var15->v1;
                        Err_418=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        if(                        (_if_conditional14=(Err_418)),                        (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value396,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional14) {
                            __result_obj__235 = (_Bool)1;
                            (Err_418 = come_decrement_ref_count(Err_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__235;
                        }
                        else {
                        }
                        if(                        left_type_408->mHeap&&!right_value_404->type->mHeap) {
                            multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value397=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_exception_var_14_419=multiple_assign_var16->v1;
                            Err_420=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            if(                            (_if_conditional15=(Err_420)),                            /*c*/ come_call_finalizer3(__right_value397,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional15) {
                                __result_obj__236 = (_Bool)1;
                                (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (Err_418 = come_decrement_ref_count(Err_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__236;
                            }
                            else {
                            }
                            (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_value_421=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 553, "struct CVALUE*"))));
                        if(                        parent_var_407->mType->mOriginIsArray) {
                            __dec_obj80=come_value_421->c_value,
                            come_value_421->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_407->mCValueName,right_value_404->c_value));
                            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj81=come_value_421->c_value,
                            come_value_421->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_407->mCValueName,right_value_404->c_value));
                            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj82=come_value_421->type,
                        come_value_421->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_408));
                        /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_421->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_421->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_421));
                        __result_obj__237 = (_Bool)1;
                        (Err_418 = come_decrement_ref_count(Err_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_421,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__237;
                        (Err_418 = come_decrement_ref_count(Err_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_421,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
            }
        }
        var__422=get_variable_from_table(info->lv_table,self->name);
        if(        var__422==((void*)0)) {
            var__422=get_variable_from_table(info->gv_table,self->name);
            if(            var__422==((void*)0)) {
                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value403=err_msg(info,"var not found(%s)(X) at storing variable",self->name)));
                come_exception_var_15_423=multiple_assign_var17->v1;
                Err_424=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional16=(Err_424)),                /*c*/ come_call_finalizer3(__right_value403,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    __result_obj__238 = (_Bool)1;
                    (Err_424 = come_decrement_ref_count(Err_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__238;
                }
                else {
                }
                (Err_424 = come_decrement_ref_count(Err_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        var__422->mType==((void*)0)) {
            __dec_obj83=var__422->mType,
            var__422->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_405));
            /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_425=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__422->mType));
        if(        (var__422->mType->mStatic||var__422->mType->mConstant)&&!var__422->mGlobal) {
            multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value408=check_assign_type(((char*)(__right_value407=xsprintf("\%s is assining to",((char*)(__right_value406=string_to_string(self->name)))))),left_type_425,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_16_426=multiple_assign_var18->v1;
            Err_427=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            (_if_conditional17=(Err_427)),            (__right_value406 = come_decrement_ref_count(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value407 = come_decrement_ref_count(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value408,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                __result_obj__239 = (_Bool)1;
                (Err_427 = come_decrement_ref_count(Err_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__239;
            }
            else {
            }
            come_value_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 597, "struct CVALUE*"))));
            __dec_obj84=come_value_428->c_value,
            come_value_428->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__422->mCValueName,right_value_404->c_value));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj85=come_value_428->type,
            come_value_428->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_425));
            /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_428->var=var__422;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_428));
            add_come_last_code(info,"%s",come_value_428->c_value);
            (Err_427 = come_decrement_ref_count(Err_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_405->mHeap&&left_type_425->mHeap&&left_type_425->mPointerNum>0&&right_type_405->mPointerNum>0) {
            multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value415=check_assign_type(((char*)(__right_value414=xsprintf("\%s is assining to",((char*)(__right_value413=string_to_string(self->name)))))),left_type_425,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_429=multiple_assign_var19->v1;
            Err_430=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional18=(Err_430)),            (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value415,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                __result_obj__240 = (_Bool)1;
                (Err_430 = come_decrement_ref_count(Err_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__240;
            }
            else {
            }
            decrement_ref_count_object(left_type_425,var__422->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_425,right_type_405,right_value_404,info,(_Bool)0);
            come_value_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 616, "struct CVALUE*"))));
            __dec_obj86=come_value_431->c_value,
            come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__422->mCValueName,right_value_404->c_value));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj87=come_value_431->type,
            come_value_431->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_425));
            /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_431->var=var__422;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_431));
            add_come_last_code(info,"%s",come_value_431->c_value);
            (Err_430 = come_decrement_ref_count(Err_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_425->mPointerNum>0&&left_type_425->mHeap&&string_operator_equals(right_type_405->mClass->mName,"void")&&right_type_405->mPointerNum>0) {
            multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value422=check_assign_type(((char*)(__right_value421=xsprintf("\%s is assining to",((char*)(__right_value420=string_to_string(self->name)))))),left_type_425,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_18_432=multiple_assign_var20->v1;
            Err_433=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional19=(Err_433)),            (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value421 = come_decrement_ref_count(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value422,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                __result_obj__241 = (_Bool)1;
                (Err_433 = come_decrement_ref_count(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
            else {
            }
            decrement_ref_count_object(left_type_425,var__422->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 634, "struct CVALUE*"))));
            __dec_obj88=come_value_434->c_value,
            come_value_434->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__422->mCValueName,right_value_404->c_value));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj89=come_value_434->type,
            come_value_434->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_425));
            /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_434->var=var__422;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_434));
            add_come_last_code(info,"%s",come_value_434->c_value);
            (Err_433 = come_decrement_ref_count(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_425->mChannel&&new_channel_403) {
            come_value_435=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 645, "struct CVALUE*"))));
            __dec_obj90=come_value_435->c_value,
            come_value_435->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__422->mCValueName));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj91=come_value_435->type,
            come_value_435->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 647, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_435->type->mPointerNum=1;
            come_value_435->var=var__422;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_435));
            add_come_last_code(info,"%s",come_value_435->c_value);
            /*c*/ come_call_finalizer3(come_value_435,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var21=((struct tuple2$2bool$char$ph*)(__right_value435=check_assign_type(((char*)(__right_value434=xsprintf("\%s is assining to",((char*)(__right_value433=string_to_string(self->name)))))),left_type_425,right_type_405,right_value_404,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_19_436=multiple_assign_var21->v1;
            Err_437=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional20=(Err_437)),            (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value435,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional20) {
                __result_obj__242 = (_Bool)1;
                (Err_437 = come_decrement_ref_count(Err_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
            else {
            }
            if(            left_type_425->mHeap&&!right_value_404->type->mHeap) {
                multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value436=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_20_438=multiple_assign_var22->v1;
                Err_439=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                if(                (_if_conditional21=(Err_439)),                /*c*/ come_call_finalizer3(__right_value436,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional21) {
                    __result_obj__243 = (_Bool)1;
                    (Err_439 = come_decrement_ref_count(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_437 = come_decrement_ref_count(Err_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__243;
                }
                else {
                }
                (Err_439 = come_decrement_ref_count(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_value_440=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 666, "struct CVALUE*"))));
            __dec_obj92=come_value_440->c_value,
            come_value_440->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__422->mCValueName,right_value_404->c_value));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj93=come_value_440->type,
            come_value_440->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_425));
            /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_440->var=var__422;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_440));
            add_come_last_code(info,"%s",come_value_440->c_value);
            (Err_437 = come_decrement_ref_count(Err_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__167;
void* __right_value188 = (void*)0;
struct sType* result_253;
void* __right_value189 = (void*)0;
struct sType* __dec_obj17;
void* __right_value190 = (void*)0;
struct sType* __dec_obj18;
void* __right_value198 = (void*)0;
struct list$1sType$ph* __dec_obj22;
void* __right_value199 = (void*)0;
struct sType* __dec_obj23;
void* __right_value200 = (void*)0;
struct sType* __dec_obj24;
void* __right_value202 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value203 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value204 = (void*)0;
char* __dec_obj27;
void* __right_value205 = (void*)0;
char* __dec_obj28;
void* __right_value206 = (void*)0;
char* __dec_obj29;
void* __right_value214 = (void*)0;
struct list$1sNode$ph* __dec_obj33;
void* __right_value215 = (void*)0;
char* __dec_obj34;
void* __right_value216 = (void*)0;
struct list$1sType$ph* __dec_obj35;
void* __right_value224 = (void*)0;
struct list$1char$ph* __dec_obj39;
void* __right_value225 = (void*)0;
struct sType* __dec_obj40;
struct sType* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__167 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__167,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__167;
    }
    result_253=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_253->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj17=result_253->mOriginalLoadVarType,
        result_253->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj18=result_253->mChannelType,
        result_253->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj22=result_253->mGenericsTypes,
        result_253->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj23=result_253->mNoSolvedGenericsType,
        result_253->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj24=result_253->mAnyOriginalType,
        result_253->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj25=result_253->mSizeNum,
        result_253->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj26=result_253->mAlignas,
        result_253->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj27=result_253->mTupleName,
        result_253->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj28=result_253->mAttribute,
        result_253->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_253->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_253->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_253->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_253->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_253->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_253->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_253->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_253->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_253->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_253->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_253->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_253->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_253->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_253->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_253->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_253->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_253->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_253->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_253->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_253->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_253->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_253->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj29=result_253->mAsmName,
        result_253->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_253->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_253->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj33=result_253->mArrayNum,
        result_253->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj33,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_253->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj34=result_253->mOriginalTypeName,
        result_253->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_253->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_253->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj35=result_253->mParamTypes,
        result_253->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj39=result_253->mParamNames,
        result_253->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj39,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj40=result_253->mResultType,
        result_253->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mVarArgs=self->mVarArgs;
    }
    __result_obj__181 = come_increment_ref_count(result_253);
    /*c*/ come_call_finalizer3(result_253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sType$ph* it_249;
struct list_item$1sType$ph* prev_it_250;
    it_249=self->head;
    while(it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        /*c*/ come_call_finalizer3(prev_it_250,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_251;
struct list_item$1sNode$ph* prev_it_252;
    it_251=self->head;
    while(it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        /*c*/ come_call_finalizer3(prev_it_252,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__168;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1sType$ph* result_254;
struct list_item$1sType$ph* it_255;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct list$1sType$ph* __result_obj__171;
    if(    self==((void*)0)) {
        __result_obj__168 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__168;
    }
    result_254=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_255=self->head;
    while(it_255!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_254,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_255->item)));
        }
        else {
            list$1sType$ph_add(result_254,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_255->item)));
        }
        it_255=it_255->next;
    }
    __result_obj__171 = come_increment_ref_count(result_254);
    /*c*/ come_call_finalizer3(result_254,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value193 = (void*)0;
struct list_item$1sType$ph* litem_256;
struct sType* __dec_obj19;
void* __right_value194 = (void*)0;
struct list_item$1sType$ph* litem_257;
struct sType* __dec_obj20;
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_258;
struct sType* __dec_obj21;
struct list$1sType$ph* __result_obj__170;
    if(    self->len==0) {
        litem_256=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value193=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_256->prev=((void*)0);
        litem_256->next=((void*)0);
        __dec_obj19=litem_256->item,
        litem_256->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_256;
        self->head=litem_256;
    }
    else if(    self->len==1) {
        litem_257=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value194=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_257->prev=self->head;
        litem_257->next=((void*)0);
        __dec_obj20=litem_257->item,
        litem_257->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_257;
        self->head->next=litem_257;
    }
    else {
        litem_258=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_258->prev=self->tail;
        litem_258->next=((void*)0);
        __dec_obj21=litem_258->item,
        litem_258->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_258;
        self->tail=litem_258;
    }
    self->len++;
    __result_obj__170 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_259;
struct list_item$1sType$ph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*c*/ come_call_finalizer3(prev_it_260,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__172;
void* __right_value201 = (void*)0;
struct sNode* result_261;
struct sNode* __result_obj__173;
    if(    self==(void*)0) {
        __result_obj__172 = come_increment_ref_count((void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__172;
    }
    result_261=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_261->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_261->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_261->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_261->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_261->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_261->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_261->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_261->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_261->kind=self->kind;
    }
    __result_obj__173 = come_increment_ref_count(result_261);
    ((result_261) ? result_261 = come_decrement_ref_count(result_261, ((struct sNode*)result_261)->finalize, ((struct sNode*)result_261)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__174;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct list$1sNode$ph* result_262;
struct list_item$1sNode$ph* it_263;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct list$1sNode$ph* __result_obj__177;
    if(    self==((void*)0)) {
        __result_obj__174 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_262=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_263=self->head;
    while(it_263!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_262,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_263->item)));
        }
        else {
            list$1sNode$ph_add(result_262,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_263->item)));
        }
        it_263=it_263->next;
    }
    __result_obj__177 = come_increment_ref_count(result_262);
    /*c*/ come_call_finalizer3(result_262,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value209 = (void*)0;
struct list_item$1sNode$ph* litem_264;
struct sNode* __dec_obj30;
void* __right_value210 = (void*)0;
struct list_item$1sNode$ph* litem_265;
struct sNode* __dec_obj31;
void* __right_value211 = (void*)0;
struct list_item$1sNode$ph* litem_266;
struct sNode* __dec_obj32;
struct list$1sNode$ph* __result_obj__176;
    if(    self->len==0) {
        litem_264=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value209=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_264->prev=((void*)0);
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item,
        litem_264->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_264;
        self->head=litem_264;
    }
    else if(    self->len==1) {
        litem_265=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value210=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_265->prev=self->head;
        litem_265->next=((void*)0);
        __dec_obj31=litem_265->item,
        litem_265->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_265;
        self->head->next=litem_265;
    }
    else {
        litem_266=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value211=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_266->prev=self->tail;
        litem_266->next=((void*)0);
        __dec_obj32=litem_266->item,
        litem_266->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_266;
        self->tail=litem_266;
    }
    self->len++;
    __result_obj__176 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__176;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_267;
struct list_item$1sNode$ph* prev_it_268;
    it_267=self->head;
    while(it_267!=((void*)0)) {
        prev_it_268=it_267;
        it_267=it_267->next;
        /*c*/ come_call_finalizer3(prev_it_268,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1char$ph* result_269;
struct list_item$1char$ph* it_270;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1char$ph* __result_obj__180;
    if(    self==((void*)0)) {
        __result_obj__178 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_269=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_270=self->head;
    while(it_270!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_269,(char*)come_increment_ref_count((char*)come_memdup(it_270->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_269,(char*)come_increment_ref_count((char*)come_memdup(it_270->item, "./comelang.h", 1146, "char*")));
        }
        it_270=it_270->next;
    }
    __result_obj__180 = come_increment_ref_count(result_269);
    /*c*/ come_call_finalizer3(result_269,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value219 = (void*)0;
struct list_item$1char$ph* litem_271;
char* __dec_obj36;
void* __right_value220 = (void*)0;
struct list_item$1char$ph* litem_272;
char* __dec_obj37;
void* __right_value221 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj38;
struct list$1char$ph* __result_obj__179;
    if(    self->len==0) {
        litem_271=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value219=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj36=litem_271->item,
        litem_271->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1) {
        litem_272=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value220=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj37=litem_272->item,
        litem_272->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value221=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj38=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result_obj__179 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_274;
struct list_item$1char$ph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*c*/ come_call_finalizer3(prev_it_275,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__182;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_278;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_279;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__187;
    if(    self==((void*)0)) {
        __result_obj__182 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__182,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__182;
    }
    result_278=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it_279=self->head;
    while(it_279!=((void*)0)) {
        if(        1) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_278,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_279->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_278,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_279->item)));
        }
        it_279=it_279->next;
    }
    __result_obj__187 = come_increment_ref_count(result_278);
    /*c*/ come_call_finalizer3(result_278,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_276;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        /*c*/ come_call_finalizer3(prev_it_277,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__183;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__183 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value230 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_280;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj44;
void* __right_value231 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_281;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj45;
void* __right_value232 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_282;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj46;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__184;
    if(    self->len==0) {
        litem_280=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value230=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_280->prev=((void*)0);
        litem_280->next=((void*)0);
        __dec_obj44=litem_280->item,
        litem_280->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_280;
        self->head=litem_280;
    }
    else if(    self->len==1) {
        litem_281=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value231=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_281->prev=self->head;
        litem_281->next=((void*)0);
        __dec_obj45=litem_281->item,
        litem_281->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_281;
        self->head->next=litem_281;
    }
    else {
        litem_282=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value232=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_282->prev=self->tail;
        litem_282->next=((void*)0);
        __dec_obj46=litem_282->item,
        litem_282->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_282;
        self->tail=litem_282;
    }
    self->len++;
    __result_obj__184 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__185;
void* __right_value233 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_283;
void* __right_value234 = (void*)0;
struct sType* __dec_obj47;
void* __right_value235 = (void*)0;
char* __dec_obj48;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj49;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__186;
    if(    self==(void*)0) {
        __result_obj__185 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__185,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__185;
    }
    result_283=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj47=result_283->v1,
        result_283->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj48=result_283->v2,
        result_283->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj49=result_283->v3,
        result_283->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__186 = come_increment_ref_count(result_283);
    /*c*/ come_call_finalizer3(result_283,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__186,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
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
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_284;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        /*c*/ come_call_finalizer3(prev_it_285,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct sVar* default_value_287;
unsigned int hash_288;
unsigned int it_289;
struct sVar* __result_obj__190;
struct sVar* __result_obj__191;
struct sVar* __result_obj__192;
struct sVar* __result_obj__193;
default_value_287 = (void*)0;
    memset(&default_value_287,0,sizeof(struct sVar*));
    hash_288=string_get_hash_key(((char*)key))%self->size;
    it_289=hash_288;
    while((_Bool)1) {
        if(        self->item_existance[it_289]) {
            if(            string_equals(self->keys[it_289],key)) {
                __result_obj__190 = come_increment_ref_count(self->items[it_289]);
                /*c*/ come_call_finalizer3(default_value_287,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__190,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__190;
            }
            it_289++;
            if(            it_289>=self->size) {
                it_289=0;
            }
            else if(            it_289==hash_288) {
                __result_obj__191 = come_increment_ref_count(default_value_287);
                /*c*/ come_call_finalizer3(default_value_287,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__191,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__191;
            }
        }
        else {
            __result_obj__192 = come_increment_ref_count(default_value_287);
            /*c*/ come_call_finalizer3(default_value_287,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__192,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__192;
        }
    }
    __result_obj__193 = come_increment_ref_count(default_value_287);
    /*c*/ come_call_finalizer3(default_value_287,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
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
unsigned int hash_290;
unsigned int it_291;
struct map$2char$phsVar$ph* __result_obj__198;
    hash_290=string_get_hash_key(((char*)key))%self->size;
    it_291=hash_290;
    while((_Bool)1) {
        if(        self->item_existance[it_291]) {
            if(            string_equals(self->keys[it_291],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_291]);
                self->item_existance[it_291]=(_Bool)0;
                if(                1) {
                    (self->keys[it_291] = come_decrement_ref_count(self->keys[it_291], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_291]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_291],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_291]=((void*)0);
                self->len--;
                break;
            }
            it_291++;
            if(            it_291>=self->size) {
                it_291=0;
            }
            else if(            it_291==hash_290) {
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
int it2_292;
struct list_item$1char$ph* it_293;
struct list$1char$ph* __result_obj__197;
    it2_292=0;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        if(        string_equals(it_293->item,item)) {
            list$1char$ph_delete(self,it2_292,it2_292+1);
            break;
        }
        it2_292++;
        it_293=it_293->next;
    }
    __result_obj__197 = self;
    return __result_obj__197;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_294;
struct list$1char$ph* __result_obj__194;
struct list_item$1char$ph* it_297;
int i_298;
struct list_item$1char$ph* prev_it_299;
struct list_item$1char$ph* it_300;
int i_301;
struct list_item$1char$ph* prev_it_302;
struct list_item$1char$ph* it_303;
struct list_item$1char$ph* head_prev_it_304;
struct list_item$1char$ph* tail_it_305;
int i_306;
struct list_item$1char$ph* prev_it_307;
struct list$1char$ph* __result_obj__196;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_294=tail;
        tail=head;
        head=tmp_294;
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
        it_297=self->head;
        i_298=0;
        while(it_297!=((void*)0)) {
            if(            i_298<tail) {
                prev_it_299=it_297;
                it_297=it_297->next;
                i_298++;
                /*c*/ come_call_finalizer3(prev_it_299,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_298==tail) {
                self->head=it_297;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_297=it_297->next;
                i_298++;
            }
        }
    }
    else if(    tail==self->len) {
        it_300=self->head;
        i_301=0;
        while(it_300!=((void*)0)) {
            if(            i_301==head) {
                self->tail=it_300->prev;
                self->tail->next=((void*)0);
            }
            if(            i_301>=head) {
                prev_it_302=it_300;
                it_300=it_300->next;
                i_301++;
                /*c*/ come_call_finalizer3(prev_it_302,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_300=it_300->next;
                i_301++;
            }
        }
    }
    else {
        it_303=self->head;
        head_prev_it_304=((void*)0);
        tail_it_305=((void*)0);
        i_306=0;
        while(it_303!=((void*)0)) {
            if(            i_306==head) {
                head_prev_it_304=it_303->prev;
            }
            if(            i_306==tail) {
                tail_it_305=it_303;
            }
            if(            i_306>=head&&i_306<tail) {
                prev_it_307=it_303;
                it_303=it_303->next;
                i_306++;
                /*c*/ come_call_finalizer3(prev_it_307,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_303=it_303->next;
                i_306++;
            }
        }
        if(        head_prev_it_304!=((void*)0)) {
            head_prev_it_304->next=tail_it_305;
        }
        if(        tail_it_305!=((void*)0)) {
            tail_it_305->prev=head_prev_it_304;
        }
    }
    __result_obj__196 = self;
    return __result_obj__196;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_295;
struct list_item$1char$ph* prev_it_296;
struct list$1char$ph* __result_obj__195;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        /*c*/ come_call_finalizer3(prev_it_296,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple3$3sType$phchar$phsNode$ph* result_312;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__200;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__201;
struct tuple3$3sType$phchar$phsNode$ph* result_313;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__202;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_312,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__200 = result_312;
        return __result_obj__200;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_313,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__202 = result_313;
    return __result_obj__202;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_315;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__203;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__204;
struct tuple3$3sType$phchar$phsNode$ph* result_316;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__205;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_315,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__203 = result_315;
        return __result_obj__203;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__204 = self->it->item;
        return __result_obj__204;
    }
    memset(&result_316,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__205 = result_316;
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
char* result_330;
char* __result_obj__208;
char* __result_obj__209;
char* result_331;
char* __result_obj__210;
result_330 = (void*)0;
result_331 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_330,0,sizeof(char*));
        __result_obj__208 = result_330;
        return __result_obj__208;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__209 = self->it->item;
        return __result_obj__209;
    }
    memset(&result_331,0,sizeof(char*));
    __result_obj__210 = result_331;
    return __result_obj__210;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_333;
char* __result_obj__211;
char* __result_obj__212;
char* result_334;
char* __result_obj__213;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_333,0,sizeof(char*));
        __result_obj__211 = result_333;
        return __result_obj__211;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__212 = self->it->item;
        return __result_obj__212;
    }
    memset(&result_334,0,sizeof(char*));
    __result_obj__213 = result_334;
    return __result_obj__213;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_337;
int i_338;
struct sType* __result_obj__214;
struct sType* default_value_339;
struct sType* __result_obj__215;
default_value_339 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_337=self->head;
    i_338=0;
    while(it_337!=((void*)0)) {
        if(        position==i_338) {
            __result_obj__214 = come_increment_ref_count(it_337->item);
            /*c*/ come_call_finalizer3(__result_obj__214,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__214;
        }
        it_337=it_337->next;
        i_338++;
    }
    memset(&default_value_339,0,sizeof(struct sType*));
    __result_obj__215 = come_increment_ref_count(default_value_339);
    /*c*/ come_call_finalizer3(default_value_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
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
struct sNode* result_360;
struct sNode* __result_obj__219;
struct sNode* __result_obj__220;
struct sNode* result_361;
struct sNode* __result_obj__221;
result_360 = (void*)0;
result_361 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_360,0,sizeof(struct sNode*));
        __result_obj__219 = result_360;
        return __result_obj__219;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__220 = self->it->item;
        return __result_obj__220;
    }
    memset(&result_361,0,sizeof(struct sNode*));
    __result_obj__221 = result_361;
    return __result_obj__221;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_363;
struct sNode* __result_obj__222;
struct sNode* __result_obj__223;
struct sNode* result_364;
struct sNode* __result_obj__224;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_363,0,sizeof(struct sNode*));
        __result_obj__222 = result_363;
        return __result_obj__222;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__223 = self->it->item;
        return __result_obj__223;
    }
    memset(&result_364,0,sizeof(struct sNode*));
    __result_obj__224 = result_364;
    return __result_obj__224;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value304 = (void*)0;
struct list_item$1CVALUE$ph* litem_370;
struct CVALUE* __dec_obj60;
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_371;
struct CVALUE* __dec_obj61;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_372;
struct CVALUE* __dec_obj62;
struct list$1CVALUE$ph* __result_obj__225;
    if(    self->len==0) {
        litem_370=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value304=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj60=litem_370->item,
        litem_370->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1) {
        litem_371=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj61=litem_371->item,
        litem_371->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj62=litem_372->item,
        litem_372->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result_obj__225 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value441 = (void*)0;
struct sNewChannel* __result_obj__244;
    ((struct sNodeBase*)(__right_value441=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value441,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__244 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value442 = (void*)0;
char* __result_obj__245;
    __result_obj__245 = come_increment_ref_count(((char*)(__right_value442=__builtin_string("sNewChannel"))));
    (__right_value442 = come_decrement_ref_count(__right_value442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__245;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value443 = (void*)0;
struct sNode* node_441;
_Bool Value_442;
_Bool __result_obj__246;
_Bool __result_obj__247;
    node_441=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_442=node_compile(node_441,info);
    if(    !Value_442) {
        __result_obj__246 = (_Bool)0;
        ((node_441) ? node_441 = come_decrement_ref_count(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__246;
    }
    else {
    }
    __result_obj__247 = (_Bool)1;
    ((node_441) ? node_441 = come_decrement_ref_count(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__247;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value444 = (void*)0;
struct sNode* __dec_obj94;
struct sNode* __dec_obj95;
struct sWriteChannelNode* __result_obj__248;
    ((struct sNodeBase*)(__right_value444=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value444,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj94=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj95=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__248 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__248,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value445 = (void*)0;
char* __result_obj__249;
    __result_obj__249 = come_increment_ref_count(((char*)(__right_value445=__builtin_string("sWriteChannelNode"))));
    (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__249 = come_decrement_ref_count(__result_obj__249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__249;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_443;
void* __right_value446 = (void*)0;
struct CVALUE* come_value_444;
_Bool Value_445;
_Bool __result_obj__250;
void* __right_value447 = (void*)0;
struct CVALUE* right_value_446;
struct sType* right_type_447;
void* __right_value448 = (void*)0;
struct sType* left_type_448;
struct sType* channel_type_449;
void* __right_value449 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_21_451=0;
char* Err_452=0;
_Bool _if_conditional22;
_Bool __result_obj__251;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct buffer* buf_453;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct CVALUE* come_value2_454;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* __dec_obj96;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__252;
    Value_443=node_compile(self->exp,info);
    if(    !Value_443) {
        return (_Bool)0;
    }
    else {
    }
    come_value_444=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_445=node_compile(self->right_value,info);
    if(    !Value_445) {
        __result_obj__250 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_value_444,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__250;
    }
    else {
    }
    right_value_446=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_447=right_value_446->type;
    left_type_448=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_444->type));
    channel_type_449=(struct sType*)come_increment_ref_count(left_type_448->mChannelType);
    static int var_num_450=0;
    var_num_450++;
    if(    right_value_446->type->mHeap) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value449=err_msg(info,"channel can't get heap type")));
        come_exception_var_21_451=multiple_assign_var23->v1;
        Err_452=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional22=(Err_452)),        /*c*/ come_call_finalizer3(__right_value449,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional22) {
            __result_obj__251 = (_Bool)1;
            (Err_452 = come_decrement_ref_count(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_444,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_value_446,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_448,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(channel_type_449,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__251;
        }
        else {
        }
        (Err_452 = come_decrement_ref_count(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buf_453=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 750, "struct buffer*"))));
    buffer_append_format(buf_453,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_450,((char*)(__right_value452=make_type_name_string(channel_type_449,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_453,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value453=make_type_name_string(channel_type_449,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_450,var_num_450);
    (__right_value453 = come_decrement_ref_count(__right_value453, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_453,"*__channel_p%d = %s;\n",var_num_450,right_value_446->c_value);
    add_come_code(info,((char*)(__right_value454=buffer_to_string(buf_453))));
    (__right_value454 = come_decrement_ref_count(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_454=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 758, "struct CVALUE*"))));
    __dec_obj96=come_value2_454->c_value,
    come_value2_454->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_444->c_value,var_num_450,((char*)(__right_value457=make_type_name_string(channel_type_449,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value457 = come_decrement_ref_count(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj97=come_value2_454->type,
    come_value2_454->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 762, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_454->type->mPointerNum=1;
    come_value2_454->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_454));
    add_come_last_code(info,"%s",come_value2_454->c_value);
    __result_obj__252 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_444,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_446,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_448,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_449,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
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
void* __right_value462 = (void*)0;
struct sNode* __dec_obj98;
struct sReadChannelNode* __result_obj__253;
    ((struct sNodeBase*)(__right_value462=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value462,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj98=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__253 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__253,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value463 = (void*)0;
char* __result_obj__254;
    __result_obj__254 = come_increment_ref_count(((char*)(__right_value463=__builtin_string("sReadChannelNode"))));
    (__right_value463 = come_decrement_ref_count(__right_value463, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__254 = come_decrement_ref_count(__result_obj__254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_455;
_Bool Value_456;
_Bool __result_obj__255;
void* __right_value464 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value465 = (void*)0;
struct sType* var_type_458;
void* __right_value466 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_22_459=0;
char* Err_460=0;
_Bool _if_conditional23;
_Bool __result_obj__256;
struct sType* channel_type_461;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct CVALUE* come_value2_463;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* __dec_obj99;
void* __right_value473 = (void*)0;
struct sType* __dec_obj100;
_Bool __result_obj__257;
    exp_455=(struct sNode*)come_increment_ref_count(self->exp);
    Value_456=node_compile(exp_455,info);
    if(    !Value_456) {
        __result_obj__255 = (_Bool)0;
        ((exp_455) ? exp_455 = come_decrement_ref_count(exp_455, ((struct sNode*)exp_455)->finalize, ((struct sNode*)exp_455)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__255;
    }
    else {
    }
    come_value_457=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type_458=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_457->type));
    if(    !var_type_458->mChannel) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value466=err_msg(info,"require right type is channel")));
        come_exception_var_22_459=multiple_assign_var24->v1;
        Err_460=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional23=(Err_460)),        /*c*/ come_call_finalizer3(__right_value466,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional23) {
            __result_obj__256 = (_Bool)1;
            (Err_460 = come_decrement_ref_count(Err_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_455) ? exp_455 = come_decrement_ref_count(exp_455, ((struct sNode*)exp_455)->finalize, ((struct sNode*)exp_455)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(var_type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__256;
        }
        else {
        }
        (Err_460 = come_decrement_ref_count(Err_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    channel_type_461=(struct sType*)come_increment_ref_count(var_type_458->mChannelType);
    static int var_num_462=0;
    var_num_462++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_462,((char*)(__right_value467=make_type_name_string(channel_type_461,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value467 = come_decrement_ref_count(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 814, "struct CVALUE*"))));
    __dec_obj99=come_value2_463->c_value,
    come_value2_463->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_457->c_value,var_num_462,((char*)(__right_value470=make_type_name_string(channel_type_461,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value471=make_type_name_string(channel_type_461,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_462));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj100=come_value2_463->type,
    come_value2_463->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_461));
    /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_463->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_463));
    add_come_last_code(info,"%s",come_value2_463->c_value);
    __result_obj__257 = (_Bool)1;
    ((exp_455) ? exp_455 = come_decrement_ref_count(exp_455, ((struct sNode*)exp_455)->finalize, ((struct sNode*)exp_455)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(var_type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_463,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
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
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value485 = (void*)0;
struct sNode* __result_obj__260;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 831, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value476=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 831, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result_obj__260 = come_increment_ref_count(((struct sNode*)(__right_value485=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value476,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value485) ? __right_value485 = come_decrement_ref_count(__right_value485, ((struct sNode*)__right_value485)->finalize, ((struct sNode*)__right_value485)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__260) ? __result_obj__260 = come_decrement_ref_count(__result_obj__260, ((struct sNode*)__result_obj__260)->finalize, ((struct sNode*)__result_obj__260)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__260;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__258;
void* __right_value477 = (void*)0;
struct sStoreNode* result_464;
void* __right_value478 = (void*)0;
char* __dec_obj101;
void* __right_value479 = (void*)0;
char* __dec_obj102;
void* __right_value480 = (void*)0;
struct sType* __dec_obj103;
void* __right_value481 = (void*)0;
struct sNode* __dec_obj104;
void* __right_value482 = (void*)0;
struct list$1char$ph* __dec_obj105;
void* __right_value483 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj106;
void* __right_value484 = (void*)0;
char* __dec_obj107;
struct sStoreNode* __result_obj__259;
    if(    self==(void*)0) {
        __result_obj__258 = (void*)0;
        return __result_obj__258;
    }
    result_464=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(    self!=((void*)0)) {
        result_464->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj101=result_464->sname,
        result_464->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_464->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj102=result_464->name,
        result_464->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_464->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj103=result_464->type,
        result_464->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj104=result_464->right_value,
        result_464->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj105=result_464->multiple_assign,
        result_464->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->multiple_assign));
        /*b*/ come_call_finalizer3(__dec_obj105,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj106=result_464->multiple_declare,
        result_464->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, self->multiple_declare));
        /*b*/ come_call_finalizer3(__dec_obj106,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj107=result_464->attribute,
        result_464->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__259 = result_464;
    /*c*/ come_call_finalizer3(result_464,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
char* __dec_obj108;
struct sLoadNode* __result_obj__261;
    ((struct sNodeBase*)(__right_value486=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value486,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj108=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__261 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__261,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value488 = (void*)0;
char* __result_obj__262;
    __result_obj__262 = come_increment_ref_count(((char*)(__right_value488=__builtin_string("sLoadNode"))));
    (__right_value488 = come_decrement_ref_count(__right_value488, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__262 = come_decrement_ref_count(__result_obj__262, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__262;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_465;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
_Bool _if_conditional24;
struct sVar* parent_var_466;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct CVALUE* come_value_467;
struct sType* type_468;
void* __right_value493 = (void*)0;
char* __dec_obj109;
void* __right_value494 = (void*)0;
char* __dec_obj110;
void* __right_value495 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__263;
struct sVar* var__469;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sFun* fun_470;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct CVALUE* come_value_474;
void* __right_value500 = (void*)0;
char* __dec_obj112;
struct sType* __dec_obj113;
_Bool __result_obj__268;
void* __right_value501 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_23_475=0;
char* Err_476=0;
_Bool _if_conditional25;
_Bool __result_obj__269;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct CVALUE* come_value_477;
void* __right_value504 = (void*)0;
char* __dec_obj114;
void* __right_value505 = (void*)0;
struct sType* __dec_obj115;
void* __right_value506 = (void*)0;
struct sType* __dec_obj116;
_Bool __result_obj__271;
    current_stack_frame_struct_465=info->current_stack_frame_struct;
    if(    (_if_conditional24=(current_stack_frame_struct_465&&((struct sVar*)(__right_value490=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value489=__builtin_string(self->name))))))==((void*)0))),    (__right_value489 = come_decrement_ref_count(__right_value489, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value490,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional24) {
        parent_var_466=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_466!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_466->mFunName,info->come_fun->mName)) {
                come_value_467=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 861, "struct CVALUE*"))));
                type_468=parent_var_466->mType;
                if(                parent_var_466->mType->mOriginIsArray) {
                    __dec_obj109=come_value_467->c_value,
                    come_value_467->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_466->mCValueName));
                    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj110=come_value_467->c_value,
                    come_value_467->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_466->mCValueName));
                    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj111=come_value_467->type,
                come_value_467->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_468));
                /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_467->var=((void*)0);
                add_come_last_code(info,"%s",come_value_467->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_467));
                __result_obj__263 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_467,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__263;
                /*c*/ come_call_finalizer3(come_value_467,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    var__469=get_variable_from_table(info->lv_table,self->name);
    if(    var__469==((void*)0)) {
        var__469=get_variable_from_table(info->gv_table,self->name);
        if(        var__469==((void*)0)) {
            fun_470=((struct sFun*)(__right_value497=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value496=__builtin_string(self->name))))));
            (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value497,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            fun_470) {
                come_value_474=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 893, "struct CVALUE*"))));
                __dec_obj112=come_value_474->c_value,
                come_value_474->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_470->mName));
                __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj113=come_value_474->type,
                come_value_474->type=(struct sType*)come_increment_ref_count(fun_470->mLambdaType);
                /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_474->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_474));
                __result_obj__268 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_474,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__268;
                /*c*/ come_call_finalizer3(come_value_474,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value501=err_msg(info,"var not found(%s)(Z) at loading variable",self->name)));
                come_exception_var_23_475=multiple_assign_var25->v1;
                Err_476=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                if(                (_if_conditional25=(Err_476)),                /*c*/ come_call_finalizer3(__right_value501,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional25) {
                    __result_obj__269 = (_Bool)1;
                    (Err_476 = come_decrement_ref_count(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__269;
                }
                else {
                }
                (Err_476 = come_decrement_ref_count(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_value_477=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 911, "struct CVALUE*"))));
    __dec_obj114=come_value_477->c_value,
    come_value_477->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__469->mCValueName));
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj115=come_value_477->type,
    come_value_477->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__469->mType));
    /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_477->var=var__469;
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_477));
    if(    list$1sNode$ph_length(come_value_477->type->mArrayNum)==1) {
        __dec_obj116=come_value_477->type->mOriginalLoadVarType,
        come_value_477->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_477->type));
        /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph_reset(come_value_477->type->mArrayNum);
        come_value_477->type->mPointerNum++;
        come_value_477->type->mOriginalTypeNamePointerNum=come_value_477->type->mPointerNum;
    }
    __result_obj__271 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_477,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
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
struct sFun* default_value_471;
unsigned int hash_472;
unsigned int it_473;
struct sFun* __result_obj__264;
struct sFun* __result_obj__265;
struct sFun* __result_obj__266;
struct sFun* __result_obj__267;
default_value_471 = (void*)0;
    memset(&default_value_471,0,sizeof(struct sFun*));
    hash_472=string_get_hash_key(((char*)key))%self->size;
    it_473=hash_472;
    while((_Bool)1) {
        if(        self->item_existance[it_473]) {
            if(            string_equals(self->keys[it_473],key)) {
                __result_obj__264 = come_increment_ref_count(self->items[it_473]);
                /*c*/ come_call_finalizer3(default_value_471,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__264,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__264;
            }
            it_473++;
            if(            it_473>=self->size) {
                it_473=0;
            }
            else if(            it_473==hash_472) {
                __result_obj__265 = come_increment_ref_count(default_value_471);
                /*c*/ come_call_finalizer3(default_value_471,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__265,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__265;
            }
        }
        else {
            __result_obj__266 = come_increment_ref_count(default_value_471);
            /*c*/ come_call_finalizer3(default_value_471,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__266,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__266;
        }
    }
    __result_obj__267 = come_increment_ref_count(default_value_471);
    /*c*/ come_call_finalizer3(default_value_471,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
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
struct list_item$1sNode$ph* it_478;
struct list_item$1sNode$ph* prev_it_479;
struct list$1sNode$ph* __result_obj__270;
    it_478=self->head;
    while(it_478!=((void*)0)) {
        prev_it_479=it_478;
        it_478=it_478->next;
        /*c*/ come_call_finalizer3(prev_it_479,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__270 = self;
    return __result_obj__270;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value507 = (void*)0;
_Bool _if_conditional26;
struct sLoadNode* load_node_480;
    if(    (_if_conditional26=(string_operator_equals(((char*)(__right_value507=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional26) {
        load_node_480=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_480->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value514 = (void*)0;
struct sNode* __result_obj__274;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 944, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value510=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 944, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result_obj__274 = come_increment_ref_count(((struct sNode*)(__right_value514=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value510,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value514) ? __right_value514 = come_decrement_ref_count(__right_value514, ((struct sNode*)__right_value514)->finalize, ((struct sNode*)__right_value514)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__274) ? __result_obj__274 = come_decrement_ref_count(__result_obj__274, ((struct sNode*)__result_obj__274)->finalize, ((struct sNode*)__result_obj__274)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__274;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__272;
void* __right_value511 = (void*)0;
struct sLoadNode* result_481;
void* __right_value512 = (void*)0;
char* __dec_obj117;
void* __right_value513 = (void*)0;
char* __dec_obj118;
struct sLoadNode* __result_obj__273;
    if(    self==(void*)0) {
        __result_obj__272 = (void*)0;
        return __result_obj__272;
    }
    result_481=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(    self!=((void*)0)) {
        result_481->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj117=result_481->sname,
        result_481->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_481->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj118=result_481->name,
        result_481->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__273 = result_481;
    /*c*/ come_call_finalizer3(result_481,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* __dec_obj119;
struct sFunLoadNode* __result_obj__275;
    ((struct sNodeBase*)(__right_value515=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value515,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj119=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__275 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__275,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value517 = (void*)0;
char* __result_obj__276;
    __result_obj__276 = come_increment_ref_count(((char*)(__right_value517=__builtin_string("sFunLoadNode"))));
    (__right_value517 = come_decrement_ref_count(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__276 = come_decrement_ref_count(__result_obj__276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__276;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sFun* fun_482;
void* __right_value520 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_24_483=0;
char* Err_484=0;
_Bool _if_conditional27;
_Bool __result_obj__277;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct CVALUE* come_value_485;
void* __right_value523 = (void*)0;
char* __dec_obj120;
struct sType* __dec_obj121;
    fun_482=((struct sFun*)(__right_value519=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value518=__builtin_string(self->name))))));
    (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value519,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_482==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value520=err_msg(info,"fun not found(%s) at loading variable",self->name)));
        come_exception_var_24_483=multiple_assign_var26->v1;
        Err_484=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional27=(Err_484)),        /*c*/ come_call_finalizer3(__right_value520,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional27) {
            __result_obj__277 = (_Bool)1;
            (Err_484 = come_decrement_ref_count(Err_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__277;
        }
        else {
        }
        (Err_484 = come_decrement_ref_count(Err_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        come_value_485=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 971, "struct CVALUE*"))));
        __dec_obj120=come_value_485->c_value,
        come_value_485->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_482->mName));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj121=come_value_485->type,
        come_value_485->type=(struct sType*)come_increment_ref_count(fun_482->mLambdaType);
        /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_485->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_485));
        /*c*/ come_call_finalizer3(come_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value524 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj127;
struct sArrayInitializer* __result_obj__284;
    ((struct sNodeBase*)(__right_value524=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value524,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj127=self->initializer,
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, initializer));
    /*b*/ come_call_finalizer3(__dec_obj127,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__284 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value536 = (void*)0;
char* __result_obj__285;
    __result_obj__285 = come_increment_ref_count(((char*)(__right_value536=__builtin_string("sArrayInitializer"))));
    (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__285 = come_decrement_ref_count(__result_obj__285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_496;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct buffer* buf_497;
int i_498;
struct sType* element_type_499;
struct list$1tuple2$2sNode$phsNode$ph$ph* o2_saved_500;
struct tuple2$2sNode$phsNode$ph* it_503;
struct tuple2$2sNode$phsNode$ph* multiple_assign_var27 = (void*)0;
struct sNode* index_506=0;
struct sNode* value_507=0;
struct CVALUE* come_value_508;
_Bool Value_509;
_Bool __result_obj__292;
void* __right_value539 = (void*)0;
struct CVALUE* __dec_obj128;
_Bool Value_510;
_Bool __result_obj__293;
void* __right_value540 = (void*)0;
struct CVALUE* come_value2_511;
void* __right_value541 = (void*)0;
struct sType* __dec_obj129;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_512;
void* __right_value544 = (void*)0;
char* __dec_obj130;
void* __right_value545 = (void*)0;
struct sType* __dec_obj131;
_Bool __result_obj__294;
    initializer_496=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_497=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1002, "struct buffer*"))));
    buffer_append_str(buf_497,"{");
    i_498=0;
    element_type_499=((void*)0);
    for(    o2_saved_500=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((initializer_496)),it_503=list$1tuple2$2sNode$phsNode$ph$ph_begin((o2_saved_500));    !list$1tuple2$2sNode$phsNode$ph$ph_end((o2_saved_500));    it_503=list$1tuple2$2sNode$phsNode$ph$ph_next((o2_saved_500))    ){
        multiple_assign_var27=it_503;
        index_506=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v1);
        value_507=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        come_value_508=((void*)0);
        if(        index_506) {
            Value_509=node_compile(index_506,info);
            if(            !Value_509) {
                __result_obj__292 = (_Bool)0;
                ((index_506) ? index_506 = come_decrement_ref_count(index_506, ((struct sNode*)index_506)->finalize, ((struct sNode*)index_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((value_507) ? value_507 = come_decrement_ref_count(value_507, ((struct sNode*)value_507)->finalize, ((struct sNode*)value_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_508,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(o2_saved_500,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(initializer_496,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_type_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__292;
            }
            else {
            }
            __dec_obj128=come_value_508,
            come_value_508=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            /*b*/ come_call_finalizer3(__dec_obj128,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        Value_510=node_compile(value_507,info);
        if(        !Value_510) {
            __result_obj__293 = (_Bool)0;
            ((index_506) ? index_506 = come_decrement_ref_count(index_506, ((struct sNode*)index_506)->finalize, ((struct sNode*)index_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((value_507) ? value_507 = come_decrement_ref_count(value_507, ((struct sNode*)value_507)->finalize, ((struct sNode*)value_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_508,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(o2_saved_500,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_496,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(element_type_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__293;
        }
        else {
        }
        come_value2_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj129=element_type_499,
        element_type_499=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_511->type));
        /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        come_value_508) {
            buffer_append_format(buf_497,"[%s] = %s",come_value_508->c_value,come_value2_511->c_value);
        }
        else {
            buffer_append_str(buf_497,come_value2_511->c_value);
        }
        i_498++;
        if(        i_498!=list$1tuple2$2sNode$phsNode$ph$ph_length(initializer_496)) {
            buffer_append_str(buf_497,",");
        }
        ((index_506) ? index_506 = come_decrement_ref_count(index_506, ((struct sNode*)index_506)->finalize, ((struct sNode*)index_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((value_507) ? value_507 = come_decrement_ref_count(value_507, ((struct sNode*)value_507)->finalize, ((struct sNode*)value_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_508,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_500,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_497,"}");
    come_value_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1039, "struct CVALUE*"))));
    __dec_obj130=come_value_512->c_value,
    come_value_512->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_497));
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj131=come_value_512->type,
    come_value_512->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_499));
    /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_512->type->mPointerNum++;
    come_value_512->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_512));
    __result_obj__294 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_496,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_type_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_512,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__278;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_488;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_489;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__283;
    if(    self==((void*)0)) {
        __result_obj__278 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__278,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__278;
    }
    result_488=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    it_489=self->head;
    while(it_489!=((void*)0)) {
        if(        1) {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_488,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2sNode$phsNode$ph_clone, it_489->item)));
        }
        else {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_488,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2sNode$phsNode$ph_clone, it_489->item)));
        }
        it_489=it_489->next;
    }
    __result_obj__283 = come_increment_ref_count(result_488);
    /*c*/ come_call_finalizer3(result_488,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__283,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_486;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_487;
    it_486=self->head;
    while(it_486!=((void*)0)) {
        prev_it_487=it_486;
        it_486=it_486->next;
        /*c*/ come_call_finalizer3(prev_it_487,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__279;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__279 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __right_value527 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_490;
struct tuple2$2sNode$phsNode$ph* __dec_obj122;
void* __right_value528 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_491;
struct tuple2$2sNode$phsNode$ph* __dec_obj123;
void* __right_value529 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_492;
struct tuple2$2sNode$phsNode$ph* __dec_obj124;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__280;
    if(    self->len==0) {
        litem_490=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value527=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_490->prev=((void*)0);
        litem_490->next=((void*)0);
        __dec_obj122=litem_490->item,
        litem_490->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj122,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_490;
        self->head=litem_490;
    }
    else if(    self->len==1) {
        litem_491=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value528=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_491->prev=self->head;
        litem_491->next=((void*)0);
        __dec_obj123=litem_491->item,
        litem_491->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj123,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_491;
        self->head->next=litem_491;
    }
    else {
        litem_492=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value529=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_492->prev=self->tail;
        litem_492->next=((void*)0);
        __dec_obj124=litem_492->item,
        litem_492->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj124,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_492;
        self->tail=litem_492;
    }
    self->len++;
    __result_obj__280 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
struct tuple2$2sNode$phsNode$ph* __result_obj__281;
void* __right_value530 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_493;
void* __right_value531 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj126;
struct tuple2$2sNode$phsNode$ph* __result_obj__282;
    if(    self==(void*)0) {
        __result_obj__281 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__281,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__281;
    }
    result_493=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj125=result_493->v1,
        result_493->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj126=result_493->v2,
        result_493->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__282 = come_increment_ref_count(result_493);
    /*c*/ come_call_finalizer3(result_493,tuple2$2sNode$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__282,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
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
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_494;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_495;
    it_494=self->head;
    while(it_494!=((void*)0)) {
        prev_it_495=it_494;
        it_494=it_494->next;
        /*c*/ come_call_finalizer3(prev_it_495,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2sNode$phsNode$ph* result_501;
struct tuple2$2sNode$phsNode$ph* __result_obj__286;
struct tuple2$2sNode$phsNode$ph* __result_obj__287;
struct tuple2$2sNode$phsNode$ph* result_502;
struct tuple2$2sNode$phsNode$ph* __result_obj__288;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_501,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__286 = result_501;
        return __result_obj__286;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__287 = self->it->item;
        return __result_obj__287;
    }
    memset(&result_502,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__288 = result_502;
    return __result_obj__288;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_504;
struct tuple2$2sNode$phsNode$ph* __result_obj__289;
struct tuple2$2sNode$phsNode$ph* __result_obj__290;
struct tuple2$2sNode$phsNode$ph* result_505;
struct tuple2$2sNode$phsNode$ph* __result_obj__291;
result_504 = (void*)0;
result_505 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_504,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__289 = result_504;
        return __result_obj__289;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__290 = self->it->item;
        return __result_obj__290;
    }
    memset(&result_505,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__291 = result_505;
    return __result_obj__291;
}

static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_513;
void* __right_value548 = (void*)0;
struct sNode* index_514;
_Bool no_comma_515;
void* __right_value549 = (void*)0;
struct sNode* exp_516;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
_Bool no_comma_518;
void* __right_value552 = (void*)0;
struct sNode* exp_519;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* index_522;
_Bool no_comma_523;
void* __right_value558 = (void*)0;
struct sNode* exp_524;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
_Bool no_comma_525;
void* __right_value561 = (void*)0;
struct sNode* exp_526;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value569 = (void*)0;
struct sNode* __result_obj__301;
    expected_next_character(123,info);
    initializer_513=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1057, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_514=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_515=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_516=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_515;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_513,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1073, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_514),(struct sNode*)come_increment_ref_count(exp_516))));
        ((index_514) ? index_514 = come_decrement_ref_count(index_514, ((struct sNode*)index_514)->finalize, ((struct sNode*)index_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((exp_516) ? exp_516 = come_decrement_ref_count(exp_516, ((struct sNode*)exp_516)->finalize, ((struct sNode*)exp_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_518=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_519=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_518;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_513,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1081, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_519))));
        ((exp_519) ? exp_519 = come_decrement_ref_count(exp_519, ((struct sNode*)exp_519)->finalize, ((struct sNode*)exp_519)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
            index_522=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_523=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_524=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_523;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_513,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1108, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_522),(struct sNode*)come_increment_ref_count(exp_524))));
            ((index_522) ? index_522 = come_decrement_ref_count(index_522, ((struct sNode*)index_522)->finalize, ((struct sNode*)index_522)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_524) ? exp_524 = come_decrement_ref_count(exp_524, ((struct sNode*)exp_524)->finalize, ((struct sNode*)exp_524)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_525=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_526=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_525;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_513,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1116, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_526))));
            ((exp_526) ? exp_526 = come_decrement_ref_count(exp_526, ((struct sNode*)exp_526)->finalize, ((struct sNode*)exp_526)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1122, "struct sNode");
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value565=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1122, "struct sArrayInitializer*")),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_513),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result_obj__301 = come_increment_ref_count(((struct sNode*)(__right_value569=_inf_value3)));
    /*c*/ come_call_finalizer3(initializer_513,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value565,sArrayInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value569) ? __right_value569 = come_decrement_ref_count(__right_value569, ((struct sNode*)__right_value569)->finalize, ((struct sNode*)__right_value569)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__301) ? __result_obj__301 = come_decrement_ref_count(__result_obj__301, ((struct sNode*)__result_obj__301)->finalize, ((struct sNode*)__result_obj__301)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__301;
}

static unsigned int tuple2$2sNode$phsNode$ph_get_hash_key(struct tuple2$2sNode$phsNode$ph* self){
unsigned int result_517;
    result_517=0;
    result_517+=int_get_hash_key(((int)self->v1));
    result_517+=int_get_hash_key(((int)self->v2));
    return result_517;
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
struct tuple2$2sNode$phsNode$ph* __result_obj__295;
    __dec_obj132=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj133=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__295 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__295,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__296;
void* __right_value553 = (void*)0;
struct tuple2$2void$psNode$ph* result_520;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj134;
struct tuple2$2void$psNode$ph* __result_obj__297;
    if(    self==(void*)0) {
        __result_obj__296 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__296,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__296;
    }
    result_520=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_520->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj134=result_520->v2,
        result_520->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__297 = come_increment_ref_count(result_520);
    /*c*/ come_call_finalizer3(result_520,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_521;
    result_521=0;
    result_521+=int_get_hash_key(((int)self->v1));
    result_521+=int_get_hash_key(((int)self->v2));
    return result_521;
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
struct tuple2$2void$psNode$ph* __result_obj__298;
    self->v1=v1;
    __dec_obj135=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__298 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__298,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
struct sArrayInitializer* __result_obj__299;
void* __right_value566 = (void*)0;
struct sArrayInitializer* result_527;
void* __right_value567 = (void*)0;
char* __dec_obj136;
void* __right_value568 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj137;
struct sArrayInitializer* __result_obj__300;
    if(    self==(void*)0) {
        __result_obj__299 = (void*)0;
        return __result_obj__299;
    }
    result_527=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*"));
    if(    self!=((void*)0)) {
        result_527->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj136=result_527->sname,
        result_527->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sArrayInitializer_clone", 5, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_527->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj137=result_527->initializer,
        result_527->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj137,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__300 = result_527;
    /*c*/ come_call_finalizer3(result_527,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value570 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj143;
struct sStructInitializer* __result_obj__308;
    ((struct sNodeBase*)(__right_value570=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value570,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj143=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, initializer));
    /*b*/ come_call_finalizer3(__dec_obj143,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__308 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__308,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value582 = (void*)0;
char* __result_obj__309;
    __result_obj__309 = come_increment_ref_count(((char*)(__right_value582=__builtin_string("sStructInitializer"))));
    (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__309 = come_decrement_ref_count(__result_obj__309, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__309;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_538;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct buffer* buf_539;
int i_540;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_541;
struct tuple2$2char$phsNode$ph* it_544;
struct tuple2$2char$phsNode$ph* multiple_assign_var28 = (void*)0;
char* name_547=0;
struct sNode* value_548=0;
_Bool Value_549;
_Bool __result_obj__316;
void* __right_value585 = (void*)0;
struct CVALUE* come_value2_550;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_551;
void* __right_value588 = (void*)0;
char* __dec_obj144;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* __dec_obj145;
_Bool __result_obj__317;
    initializer_538=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1143, "struct buffer*"))));
    buffer_append_str(buf_539,"{");
    i_540=0;
    for(    o2_saved_541=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_538)),it_544=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_541));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_541));    it_544=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_541))    ){
        multiple_assign_var28=it_544;
        name_547=(char*)come_increment_ref_count(multiple_assign_var28->v1);
        value_548=(struct sNode*)come_increment_ref_count(multiple_assign_var28->v2);
        Value_549=node_compile(value_548,info);
        if(        !Value_549) {
            __result_obj__316 = (_Bool)0;
            (name_547 = come_decrement_ref_count(name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((value_548) ? value_548 = come_decrement_ref_count(value_548, ((struct sNode*)value_548)->finalize, ((struct sNode*)value_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(o2_saved_541,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_538,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_539,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__316;
        }
        else {
        }
        come_value2_550=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        name_547) {
            buffer_append_format(buf_539,".%s = %s",name_547,come_value2_550->c_value);
        }
        else {
            buffer_append_format(buf_539,"%s",come_value2_550->c_value);
        }
        i_540++;
        if(        i_540!=list$1tuple2$2char$phsNode$ph$ph_length(initializer_538)) {
            buffer_append_str(buf_539,",");
        }
        (name_547 = come_decrement_ref_count(name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((value_548) ? value_548 = come_decrement_ref_count(value_548, ((struct sNode*)value_548)->finalize, ((struct sNode*)value_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value2_550,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_541,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_539,"}");
    come_value_551=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1169, "struct CVALUE*"))));
    __dec_obj144=come_value_551->c_value,
    come_value_551->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_539));
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj145=come_value_551->type,
    come_value_551->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1172, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_551->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_551));
    __result_obj__317 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_538,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_539,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_551,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__317;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__302;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_530;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_531;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__307;
    if(    self==((void*)0)) {
        __result_obj__302 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__302,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__302;
    }
    result_530=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_531=self->head;
    while(it_531!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_530,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_531->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_530,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_531->item)));
        }
        it_531=it_531->next;
    }
    __result_obj__307 = come_increment_ref_count(result_530);
    /*c*/ come_call_finalizer3(result_530,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__307,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__307;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_528;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_529;
    it_528=self->head;
    while(it_528!=((void*)0)) {
        prev_it_529=it_528;
        it_528=it_528->next;
        /*c*/ come_call_finalizer3(prev_it_529,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__303;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__303 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value573 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_532;
struct tuple2$2char$phsNode$ph* __dec_obj138;
void* __right_value574 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_533;
struct tuple2$2char$phsNode$ph* __dec_obj139;
void* __right_value575 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_534;
struct tuple2$2char$phsNode$ph* __dec_obj140;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__304;
    if(    self->len==0) {
        litem_532=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value573=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_532->prev=((void*)0);
        litem_532->next=((void*)0);
        __dec_obj138=litem_532->item,
        litem_532->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj138,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_532;
        self->head=litem_532;
    }
    else if(    self->len==1) {
        litem_533=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value574=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_533->prev=self->head;
        litem_533->next=((void*)0);
        __dec_obj139=litem_533->item,
        litem_533->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj139,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_533;
        self->head->next=litem_533;
    }
    else {
        litem_534=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value575=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_534->prev=self->tail;
        litem_534->next=((void*)0);
        __dec_obj140=litem_534->item,
        litem_534->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj140,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_534;
        self->tail=litem_534;
    }
    self->len++;
    __result_obj__304 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__305;
void* __right_value576 = (void*)0;
struct tuple2$2char$phsNode$ph* result_535;
void* __right_value577 = (void*)0;
char* __dec_obj141;
void* __right_value578 = (void*)0;
struct sNode* __dec_obj142;
struct tuple2$2char$phsNode$ph* __result_obj__306;
    if(    self==(void*)0) {
        __result_obj__305 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__305,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__305;
    }
    result_535=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj141=result_535->v1,
        result_535->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj142=result_535->v2,
        result_535->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__306 = come_increment_ref_count(result_535);
    /*c*/ come_call_finalizer3(result_535,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__306,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_536;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_537;
    it_536=self->head;
    while(it_536!=((void*)0)) {
        prev_it_537=it_536;
        it_536=it_536->next;
        /*c*/ come_call_finalizer3(prev_it_537,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_542;
struct tuple2$2char$phsNode$ph* __result_obj__310;
struct tuple2$2char$phsNode$ph* __result_obj__311;
struct tuple2$2char$phsNode$ph* result_543;
struct tuple2$2char$phsNode$ph* __result_obj__312;
result_542 = (void*)0;
result_543 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_542,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__310 = result_542;
        return __result_obj__310;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__311 = self->it->item;
        return __result_obj__311;
    }
    memset(&result_543,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__312 = result_543;
    return __result_obj__312;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_545;
struct tuple2$2char$phsNode$ph* __result_obj__313;
struct tuple2$2char$phsNode$ph* __result_obj__314;
struct tuple2$2char$phsNode$ph* result_546;
struct tuple2$2char$phsNode$ph* __result_obj__315;
result_545 = (void*)0;
result_546 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_545,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__313 = result_545;
        return __result_obj__313;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__314 = self->it->item;
        return __result_obj__314;
    }
    memset(&result_546,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__315 = result_546;
    return __result_obj__315;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_552;
void* __right_value594 = (void*)0;
char* name_553;
_Bool no_comma_554;
void* __right_value595 = (void*)0;
struct sNode* exp_555;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
_Bool no_comma_557;
void* __right_value598 = (void*)0;
struct sNode* exp_558;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
char* name_559;
_Bool no_comma_560;
void* __right_value602 = (void*)0;
struct sNode* exp_561;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
_Bool no_comma_562;
void* __right_value605 = (void*)0;
struct sNode* exp_563;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value613 = (void*)0;
struct sNode* __result_obj__321;
    expected_next_character(123,info);
    initializer_552=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1185, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_553=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_554=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_555=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_554;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_552,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1200, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_553),(struct sNode*)come_increment_ref_count(exp_555))));
        (name_553 = come_decrement_ref_count(name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((exp_555) ? exp_555 = come_decrement_ref_count(exp_555, ((struct sNode*)exp_555)->finalize, ((struct sNode*)exp_555)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_557=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_558=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_557;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_552,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1208, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_558))));
        ((exp_558) ? exp_558 = come_decrement_ref_count(exp_558, ((struct sNode*)exp_558)->finalize, ((struct sNode*)exp_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
            name_559=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_560=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_561=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_560;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_552,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1234, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_559),(struct sNode*)come_increment_ref_count(exp_561))));
            (name_559 = come_decrement_ref_count(name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_561) ? exp_561 = come_decrement_ref_count(exp_561, ((struct sNode*)exp_561)->finalize, ((struct sNode*)exp_561)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_562=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_563=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_562;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_552,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1242, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_563))));
            ((exp_563) ? exp_563 = come_decrement_ref_count(exp_563, ((struct sNode*)exp_563)->finalize, ((struct sNode*)exp_563)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1248, "struct sNode");
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value609=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1248, "struct sStructInitializer*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_552),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result_obj__321 = come_increment_ref_count(((struct sNode*)(__right_value613=_inf_value4)));
    /*c*/ come_call_finalizer3(initializer_552,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value609,sStructInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value613) ? __right_value613 = come_decrement_ref_count(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__321;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_556;
    result_556=0;
    result_556+=int_get_hash_key(((int)self->v1));
    result_556+=int_get_hash_key(((int)self->v2));
    return result_556;
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
struct tuple2$2char$phsNode$ph* __result_obj__318;
    __dec_obj146=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj147=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__318 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__318,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
struct sStructInitializer* __result_obj__319;
void* __right_value610 = (void*)0;
struct sStructInitializer* result_564;
void* __right_value611 = (void*)0;
char* __dec_obj148;
void* __right_value612 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj149;
struct sStructInitializer* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__319 = (void*)0;
        return __result_obj__319;
    }
    result_564=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*"));
    if(    self!=((void*)0)) {
        result_564->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj148=result_564->sname,
        result_564->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructInitializer_clone", 5, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_564->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj149=result_564->initializer,
        result_564->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj149,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__320 = result_564;
    /*c*/ come_call_finalizer3(result_564,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__320;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param){
void* __right_value614 = (void*)0;
struct sVar* self_565;
void* __right_value615 = (void*)0;
char* __dec_obj150;
void* __right_value616 = (void*)0;
struct sType* __dec_obj151;
void* __right_value617 = (void*)0;
char* __dec_obj152;
void* __right_value618 = (void*)0;
char* __dec_obj153;
void* __right_value619 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
void* __right_value625 = (void*)0;
    self_565=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1253, "struct sVar*"));
    __dec_obj150=self_565->mName,
    self_565->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj151=self_565->mType,
    self_565->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    function_param) {
        __dec_obj152=self_565->mCValueName,
        self_565->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int n_566=0;
        __dec_obj153=self_565->mCValueName,
        self_565->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_566++));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    self_565->mAllocaValue=(_Bool)0;
    self_565->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj154=self_565->mFunName,
        self_565->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "07var.c", 1269, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj155=self_565->mFunName,
        self_565->mFunName=((void*)0);
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_565));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_565,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_584;
unsigned int it_585;
_Bool same_key_exist_586;
char* it2_587;
struct map$2char$phsVar$ph* __result_obj__332;
    if(    self->len*10>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_584=string_get_hash_key(((char*)key))%self->size;
    it_585=hash_584;
    while((_Bool)1) {
        if(        self->item_existance[it_585]) {
            if(            string_equals(self->keys[it_585],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_585]);
                    (self->keys[it_585] = come_decrement_ref_count(self->keys[it_585], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_585]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_585]);
                    self->keys[it_585]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_585],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_585]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_585]=item;
                }
                break;
            }
            it_585++;
            if(            it_585>=self->size) {
                it_585=0;
            }
            else if(            it_585==hash_584) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_585]=(_Bool)1;
            if(            1) {
                self->keys[it_585]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_585]=key;
            }
            if(            1) {
                self->items[it_585]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_585]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_586=(_Bool)0;
    for(    it2_587=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_587=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_587,key)) {
            same_key_exist_586=(_Bool)1;
        }
    }
    if(    !same_key_exist_586) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__332 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__332;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_567;
void* __right_value620 = (void*)0;
char** keys_568;
void* __right_value621 = (void*)0;
struct sVar** items_569;
void* __right_value622 = (void*)0;
_Bool* item_existance_570;
int len_571;
char* it_574;
struct sVar* default_value_577;
void* __right_value623 = (void*)0;
struct sVar* it2_578;
unsigned int hash_581;
int n_582;
struct sVar* default_value_583;
void* __right_value624 = (void*)0;
default_value_577 = (void*)0;
default_value_583 = (void*)0;
    size_567=self->size*10;
    keys_568=(char**)come_increment_ref_count(((char**)(__right_value620=(char**)come_calloc(1, sizeof(char*)*(1*(size_567)), "./comelang.h", 2281, "char**"))));
    items_569=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value621=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_567)), "./comelang.h", 2282, "struct sVar**"))));
    item_existance_570=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value622=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_567)), "./comelang.h", 2283, "_Bool*"))));
    len_571=0;
    for(    it_574=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_574=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_577,0,sizeof(struct sVar*));
        it2_578=((struct sVar*)(__right_value623=map$2char$phsVar$ph_at(self,it_574,(struct sVar*)come_increment_ref_count(default_value_577))));
        /*c*/ come_call_finalizer3(__right_value623,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_581=string_get_hash_key(((char*)it_574))%size_567;
        n_582=hash_581;
        while((_Bool)1) {
            if(            item_existance_570[n_582]) {
                n_582++;
                if(                n_582>=size_567) {
                    n_582=0;
                }
                else if(                n_582==hash_581) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_570[n_582]=(_Bool)1;
                keys_568[n_582]=it_574;
                items_569[n_582]=((struct sVar*)(__right_value624=map$2char$phsVar$ph_at(self,it_574,(struct sVar*)come_increment_ref_count(default_value_583))));
                /*c*/ come_call_finalizer3(__right_value624,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_571++;
                /*c*/ come_call_finalizer3(default_value_583,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_583,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_577,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_568;
    self->items=items_569;
    self->item_existance=item_existance_570;
    self->size=size_567;
    self->len=len_571;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_572;
char* __result_obj__322;
char* __result_obj__323;
char* result_573;
char* __result_obj__324;
result_572 = (void*)0;
result_573 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_572,0,sizeof(char*));
        __result_obj__322 = result_572;
        return __result_obj__322;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__323 = self->key_list->it->item;
        return __result_obj__323;
    }
    memset(&result_573,0,sizeof(char*));
    __result_obj__324 = result_573;
    return __result_obj__324;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_575;
char* __result_obj__325;
char* __result_obj__326;
char* result_576;
char* __result_obj__327;
result_575 = (void*)0;
result_576 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_575,0,sizeof(char*));
        __result_obj__325 = result_575;
        return __result_obj__325;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__326 = self->key_list->it->item;
        return __result_obj__326;
    }
    memset(&result_576,0,sizeof(char*));
    __result_obj__327 = result_576;
    return __result_obj__327;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_579;
unsigned int it_580;
struct sVar* __result_obj__328;
struct sVar* __result_obj__329;
struct sVar* __result_obj__330;
struct sVar* __result_obj__331;
    hash_579=string_get_hash_key(((char*)key))%self->size;
    it_580=hash_579;
    while((_Bool)1) {
        if(        self->item_existance[it_580]) {
            if(            string_equals(self->keys[it_580],key)) {
                __result_obj__328 = come_increment_ref_count(self->items[it_580]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__328,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__328;
            }
            it_580++;
            if(            it_580>=self->size) {
                it_580=0;
            }
            else if(            it_580==hash_579) {
                __result_obj__329 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__329,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__329;
            }
        }
        else {
            __result_obj__330 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__330,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__330;
        }
    }
    __result_obj__331 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__331,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value626 = (void*)0;
struct sVar* self_588;
void* __right_value627 = (void*)0;
char* __dec_obj156;
void* __right_value628 = (void*)0;
struct sType* __dec_obj157;
void* __right_value629 = (void*)0;
char* __dec_obj158;
void* __right_value630 = (void*)0;
    self_588=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1280, "struct sVar*"));
    __dec_obj156=self_588->mName,
    self_588->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj157=self_588->mType,
    self_588->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_588->mGlobal=(_Bool)1;
    __dec_obj158=self_588->mCValueName,
    self_588->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_588->mAllocaValue=(_Bool)0;
    self_588->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_588));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_588,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value631 = (void*)0;
struct sVar* self_589;
void* __right_value632 = (void*)0;
char* __dec_obj159;
void* __right_value633 = (void*)0;
struct sType* __dec_obj160;
void* __right_value634 = (void*)0;
char* __dec_obj161;
void* __right_value635 = (void*)0;
    self_589=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1297, "struct sVar*"));
    __dec_obj159=self_589->mName,
    self_589->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj160=self_589->mType,
    self_589->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_589->mGlobal=(_Bool)1;
    __dec_obj161=self_589->mCValueName,
    self_589->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_589->mAllocaValue=(_Bool)0;
    self_589->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_589));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_589,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real_590;
_Bool is_type_name_flag_591;
_Bool multiple_declare_592;
char* p_593;
int sline_594;
void* __right_value636 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* type_595=0;
char* name_596=0;
_Bool err_597=0;
void* __right_value637 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var30 = (void*)0;
struct sType* type_598=0;
char* name_599=0;
void* __right_value638 = (void*)0;
_Bool no_output_err_600;
_Bool no_comma_601;
_Bool no_output_come_code_602;
void* __right_value639 = (void*)0;
struct sNode* exp_603;
_Bool attr_define_604;
char* p_605;
int sline_606;
void* __right_value640 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* type_607=0;
char* name_608=0;
_Bool err_609=0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sFun* fun_610;
void* __right_value643 = (void*)0;
char* buf2_611;
struct list$1char$ph* multiple_assign_612;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1char$ph* __dec_obj162;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
char* buf3_613;
void* __right_value648 = (void*)0;
_Bool no_comma_614;
void* __right_value649 = (void*)0;
struct sNode* right_value_615;
void* __right_value650 = (void*)0;
struct sNode* __dec_obj163;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value655 = (void*)0;
struct sNode* node_616;
struct sNode* __result_obj__333;
void* __right_value656 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c2_617=0;
char* Err_618=0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value661 = (void*)0;
struct sNode* node_619;
struct sNode* __result_obj__336;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_621;
void* __right_value664 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* base_type_622=0;
char* name_623=0;
_Bool err_624=0;
void* __right_value665 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var34 = (void*)0;
struct sType* type2_625=0;
char* var_name_626=0;
_Bool no_comma_627;
void* __right_value666 = (void*)0;
struct sNode* exp_628;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
_Bool no_comma_641;
void* __right_value672 = (void*)0;
struct sNode* exp_642;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var35 = (void*)0;
struct sType* type2_645=0;
char* var_name_646=0;
_Bool no_comma_647;
void* __right_value681 = (void*)0;
struct sNode* exp_648;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
_Bool no_comma_649;
void* __right_value684 = (void*)0;
struct sNode* exp_650;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sNode* right_node_651;
void* __right_value689 = (void*)0;
char* var_name2_652;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value694 = (void*)0;
struct sNode* node_653;
struct sNode* __result_obj__342;
void* __right_value695 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var36 = (void*)0;
struct sType* type_654=0;
char* name_655=0;
_Bool err_656=0;
void* __right_value696 = (void*)0;
char* __dec_obj175;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value708 = (void*)0;
struct sNode* self_node_662;
void* __right_value709 = (void*)0;
struct sNode* right_node_663;
void* __right_value710 = (void*)0;
struct sNode* node_664;
struct sNode* __result_obj__347;
void* __right_value711 = (void*)0;
struct sNode* __result_obj__348;
void* __right_value712 = (void*)0;
struct sNode* right_value_665;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value718 = (void*)0;
struct sNode* node_666;
struct sNode* __result_obj__349;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
_Bool _elif_conditional1;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value724 = (void*)0;
struct sNode* node_667;
void* __right_value725 = (void*)0;
struct sNode* __dec_obj184;
struct sNode* __result_obj__350;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value729 = (void*)0;
struct sNode* node_668;
void* __right_value730 = (void*)0;
struct sNode* __dec_obj185;
struct sNode* __result_obj__351;
char* word_669;
void* __right_value731 = (void*)0;
char* __dec_obj186;
void* __right_value732 = (void*)0;
char* __dec_obj187;
_Bool is_type_name_flag_670;
void* __right_value733 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_671=0;
char* name_672=0;
_Bool err_673=0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value736 = (void*)0;
struct sNode* node_674;
struct sNode* __result_obj__352;
struct sNode* right_value_675;
_Bool no_comma_676;
void* __right_value737 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value739 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value743 = (void*)0;
struct sNode* node_677;
struct sNode* __result_obj__353;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value747 = (void*)0;
struct sNode* node_678;
struct sNode* __result_obj__354;
void* __right_value748 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c3_679=0;
char* Err_680=0;
word_669 = (void*)0;
    sline_real_590=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_591=is_type_name(buf,info);
    multiple_declare_592=(_Bool)0;
    if(    is_type_name_flag_591) {
        p_593=info->p;
        sline_594=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value636=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_595=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
            name_596=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            err_597=multiple_assign_var29->v3;
            /*c*/ come_call_finalizer3(__right_value636,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            err_597) {
                parse_sharp_v5(info);
                multiple_assign_var30=((struct tuple2$2sType$phchar$ph*)(__right_value637=parse_variable_name((struct sType*)come_increment_ref_count(type_595),(_Bool)1,info)));
                type_598=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_599=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                /*c*/ come_call_finalizer3(__right_value637,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value638=skip_block(info)));
                        (__right_value638 = come_decrement_ref_count(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        no_output_err_600=info->no_output_err;
                        no_comma_601=info->no_comma;
                        no_output_come_code_602=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_603=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_601;
                        info->no_output_err=no_output_err_600;
                        info->no_output_come_code=no_output_come_code_602;
                        ((exp_603) ? exp_603 = come_decrement_ref_count(exp_603, ((struct sNode*)exp_603)->finalize, ((struct sNode*)exp_603)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_599,info)&&*info->p==44) {
                    multiple_declare_592=(_Bool)1;
                }
                /*c*/ come_call_finalizer3(type_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_599 = come_decrement_ref_count(name_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_595,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_596 = come_decrement_ref_count(name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_593;
        info->sline=sline_594;
    }
    attr_define_604=(_Bool)0;
    if(    is_type_name_flag_591&&info->defining_class) {
        p_605=info->p;
        sline_606=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value640=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_607=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_608=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_609=multiple_assign_var31->v3;
        /*c*/ come_call_finalizer3(__right_value640,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        err_609&&strmemcmp(info->p,"self")) {
            attr_define_604=(_Bool)1;
        }
        info->p=p_605;
        info->sline=sline_606;
        /*c*/ come_call_finalizer3(type_607,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_608 = come_decrement_ref_count(name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_610=((struct sFun*)(__right_value642=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value641=__builtin_string(buf))))));
    (__right_value641 = come_decrement_ref_count(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value642,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_611=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_612=((void*)0);
        if(        *info->p==44) {
            __dec_obj162=multiple_assign_612,
            multiple_assign_612=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1406, "struct list$1char$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj162,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1char$ph_push_back(multiple_assign_612,(char*)come_increment_ref_count((char*)come_memdup(buf2_611, "07var.c", 1407, "char*")));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_613=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph_push_back(multiple_assign_612,(char*)come_increment_ref_count((char*)come_memdup(buf3_613, "07var.c", 1417, "char*")));
                (buf3_613 = come_decrement_ref_count(buf3_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_614=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_615=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_614;
            parse_sharp_v5(info);
            __dec_obj163=right_value_615,
            right_value_615=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_615),info));
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1436, "struct sNode");
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value654=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1436, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2_611)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_612),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_615),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_616=(struct sNode*)come_increment_ref_count(_inf_value5);
            /*c*/ come_call_finalizer3(__right_value654,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_590;
            __result_obj__333 = come_increment_ref_count(node_616);
            ((right_value_615) ? right_value_615 = come_decrement_ref_count(right_value_615, ((struct sNode*)right_value_615)->finalize, ((struct sNode*)right_value_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_616) ? node_616 = come_decrement_ref_count(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf2_611 = come_decrement_ref_count(buf2_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(multiple_assign_612,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__result_obj__333) ? __result_obj__333 = come_decrement_ref_count(__result_obj__333, ((struct sNode*)__result_obj__333)->finalize, ((struct sNode*)__result_obj__333)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__333;
            ((right_value_615) ? right_value_615 = come_decrement_ref_count(right_value_615, ((struct sNode*)right_value_615)->finalize, ((struct sNode*)right_value_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_616) ? node_616 = come_decrement_ref_count(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value656=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_exception_var_c2_617=multiple_assign_var32->v1;
            Err_618=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_618)?(puts(Err_618),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value656,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_618 = come_decrement_ref_count(Err_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (buf2_611 = come_decrement_ref_count(buf2_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(multiple_assign_612,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1446, "struct sNode");
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value658=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1446, "struct sNewChannel*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_619=(struct sNode*)come_increment_ref_count(_inf_value6);
        /*c*/ come_call_finalizer3(__right_value658,sNewChannel_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_590;
        __result_obj__336 = come_increment_ref_count(node_619);
        ((node_619) ? node_619 = come_decrement_ref_count(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__336) ? __result_obj__336 = come_decrement_ref_count(__result_obj__336, ((struct sNode*)__result_obj__336)->finalize, ((struct sNode*)__result_obj__336)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__336;
        ((node_619) ? node_619 = come_decrement_ref_count(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    multiple_declare_592) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_621=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1454, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value664=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_622=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
        name_623=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        err_624=multiple_assign_var33->v3;
        /*c*/ come_call_finalizer3(__right_value664,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_624) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var34=((struct tuple2$2sType$phchar$ph*)(__right_value665=parse_variable_name((struct sType*)come_increment_ref_count(base_type_622),(_Bool)1,info)));
        type2_625=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
        var_name_626=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        /*c*/ come_call_finalizer3(__right_value665,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_625->mClass->mStruct&&list$1sNode$ph_length(type2_625->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_627=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_628=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_627;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_621,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1481, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_625),(char*)come_increment_ref_count(var_name_626),(struct sNode*)come_increment_ref_count(exp_628))));
                ((exp_628) ? exp_628 = come_decrement_ref_count(exp_628, ((struct sNode*)exp_628)->finalize, ((struct sNode*)exp_628)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_641=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_642=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_641;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_621,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1491, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_625),(char*)come_increment_ref_count(var_name_626),(struct sNode*)come_increment_ref_count(exp_642))));
                ((exp_642) ? exp_642 = come_decrement_ref_count(exp_642, ((struct sNode*)exp_642)->finalize, ((struct sNode*)exp_642)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_621,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1495, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_625),(char*)come_increment_ref_count(var_name_626),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var35=((struct tuple2$2sType$phchar$ph*)(__right_value680=parse_variable_name((struct sType*)come_increment_ref_count(base_type_622),(_Bool)0,info)));
            type2_645=(struct sType*)come_increment_ref_count(multiple_assign_var35->v1);
            var_name_646=(char*)come_increment_ref_count(multiple_assign_var35->v2);
            /*c*/ come_call_finalizer3(__right_value680,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_645->mClass->mStruct&&list$1sNode$ph_length(type2_645->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_647=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_648=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_647;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_621,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1517, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_645),(char*)come_increment_ref_count(var_name_646),(struct sNode*)come_increment_ref_count(exp_648))));
                    ((exp_648) ? exp_648 = come_decrement_ref_count(exp_648, ((struct sNode*)exp_648)->finalize, ((struct sNode*)exp_648)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    no_comma_649=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_650=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_649;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_621,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1529, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_645),(char*)come_increment_ref_count(var_name_646),(struct sNode*)come_increment_ref_count(exp_650))));
                    ((exp_650) ? exp_650 = come_decrement_ref_count(exp_650, ((struct sNode*)exp_650)->finalize, ((struct sNode*)exp_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_621,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1533, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_645),(char*)come_increment_ref_count(var_name_646),((void*)0))));
            }
            /*c*/ come_call_finalizer3(type2_645,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_646 = come_decrement_ref_count(var_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        right_node_651=((void*)0);
        var_name2_652=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1540, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value693=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1540, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_621),(struct sType*)come_increment_ref_count(base_type_622),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_653=(struct sNode*)come_increment_ref_count(_inf_value7);
        /*c*/ come_call_finalizer3(__right_value693,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_590;
        __result_obj__342 = come_increment_ref_count(node_653);
        /*c*/ come_call_finalizer3(multiple_declare_621,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_622,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_623 = come_decrement_ref_count(name_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_625,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_626 = come_decrement_ref_count(var_name_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_651) ? right_node_651 = come_decrement_ref_count(right_node_651, ((struct sNode*)right_node_651)->finalize, ((struct sNode*)right_node_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_652 = come_decrement_ref_count(var_name2_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_653) ? node_653 = come_decrement_ref_count(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__342;
        /*c*/ come_call_finalizer3(multiple_declare_621,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_622,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_623 = come_decrement_ref_count(name_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_625,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_626 = come_decrement_ref_count(var_name_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_651) ? right_node_651 = come_decrement_ref_count(right_node_651, ((struct sNode*)right_node_651)->finalize, ((struct sNode*)right_node_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_652 = come_decrement_ref_count(var_name2_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_653) ? node_653 = come_decrement_ref_count(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    attr_define_604) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var36=((struct tuple3$3sType$phchar$phbool$*)(__right_value695=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_654=(struct sType*)come_increment_ref_count(multiple_assign_var36->v1);
        name_655=(char*)come_increment_ref_count(multiple_assign_var36->v2);
        err_656=multiple_assign_var36->v3;
        /*c*/ come_call_finalizer3(__right_value695,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_656) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj175=name_655,
        name_655=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1563, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_655),(struct sType*)come_increment_ref_count(type_654))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1571, "struct sNode");
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value707=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1571, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_662=(struct sNode*)come_increment_ref_count(_inf_value8);
            /*c*/ come_call_finalizer3(__right_value707,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            right_node_663=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_664=(struct sNode*)come_increment_ref_count(store_field(self_node_662,(struct sNode*)come_increment_ref_count(right_node_663),(char*)come_increment_ref_count(name_655),info));
            info->sline_real=sline_real_590;
            __result_obj__347 = come_increment_ref_count(node_664);
            ((self_node_662) ? self_node_662 = come_decrement_ref_count(self_node_662, ((struct sNode*)self_node_662)->finalize, ((struct sNode*)self_node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_663) ? right_node_663 = come_decrement_ref_count(right_node_663, ((struct sNode*)right_node_663)->finalize, ((struct sNode*)right_node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_664) ? node_664 = come_decrement_ref_count(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(type_654,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_655 = come_decrement_ref_count(name_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__347;
            ((self_node_662) ? self_node_662 = come_decrement_ref_count(self_node_662, ((struct sNode*)self_node_662)->finalize, ((struct sNode*)self_node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_663) ? right_node_663 = come_decrement_ref_count(right_node_663, ((struct sNode*)right_node_663)->finalize, ((struct sNode*)right_node_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_664) ? node_664 = come_decrement_ref_count(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real_590;
            __result_obj__348 = come_increment_ref_count(((struct sNode*)(__right_value711=create_null_node(info))));
            /*c*/ come_call_finalizer3(type_654,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_655 = come_decrement_ref_count(name_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value711) ? __right_value711 = come_decrement_ref_count(__right_value711, ((struct sNode*)__right_value711)->finalize, ((struct sNode*)__right_value711)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__348) ? __result_obj__348 = come_decrement_ref_count(__result_obj__348, ((struct sNode*)__result_obj__348)->finalize, ((struct sNode*)__result_obj__348)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__348;
        }
        /*c*/ come_call_finalizer3(type_654,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_655 = come_decrement_ref_count(name_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !is_type_name_flag_591&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_665=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj183=right_value_665,
        right_value_665=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_665),info));
        (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1596, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value717=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1596, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_665),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_666=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value717,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_590;
        __result_obj__349 = come_increment_ref_count(node_666);
        ((right_value_665) ? right_value_665 = come_decrement_ref_count(right_value_665, ((struct sNode*)right_value_665)->finalize, ((struct sNode*)right_value_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_666) ? node_666 = come_decrement_ref_count(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__349) ? __result_obj__349 = come_decrement_ref_count(__result_obj__349, ((struct sNode*)__result_obj__349)->finalize, ((struct sNode*)__result_obj__349)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__349;
        ((right_value_665) ? right_value_665 = come_decrement_ref_count(right_value_665, ((struct sNode*)right_value_665)->finalize, ((struct sNode*)right_value_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_666) ? node_666 = come_decrement_ref_count(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_591||((struct sFun*)(__right_value720=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value719=__builtin_string(buf)))))))),    (__right_value719 = come_decrement_ref_count(__right_value719, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value720,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1601, "struct sNode");
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value723=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1601, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_667=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*c*/ come_call_finalizer3(__right_value723,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj184=node_667,
        node_667=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_667),info));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_590;
        __result_obj__350 = come_increment_ref_count(node_667);
        ((node_667) ? node_667 = come_decrement_ref_count(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__350;
        ((node_667) ? node_667 = come_decrement_ref_count(node_667, ((struct sNode*)node_667)->finalize, ((struct sNode*)node_667)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !is_type_name_flag_591) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1609, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value728=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1609, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_668=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*c*/ come_call_finalizer3(__right_value728,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj185=node_668,
        node_668=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_668),info));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_590;
        __result_obj__351 = come_increment_ref_count(node_668);
        ((node_668) ? node_668 = come_decrement_ref_count(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__351) ? __result_obj__351 = come_decrement_ref_count(__result_obj__351, ((struct sNode*)__result_obj__351)->finalize, ((struct sNode*)__result_obj__351)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__351;
        ((node_668) ? node_668 = come_decrement_ref_count(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj186=word_669,
            word_669=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj187=word_669,
            word_669=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        is_type_name_flag_670=is_type_name(word_669,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_670) {
            parse_sharp_v5(info);
            multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value733=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_671=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
            name_672=(char*)come_increment_ref_count(multiple_assign_var37->v2);
            err_673=multiple_assign_var37->v3;
            /*c*/ come_call_finalizer3(__right_value733,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            !err_673) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1646, "struct sNode");
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value735=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1646, "struct sLoadNode*")),(char*)come_increment_ref_count(name_672),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_674=(struct sNode*)come_increment_ref_count(_inf_value12);
                /*c*/ come_call_finalizer3(__right_value735,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_590;
                __result_obj__352 = come_increment_ref_count(node_674);
                ((node_674) ? node_674 = come_decrement_ref_count(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_671,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_672 = come_decrement_ref_count(name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_669 = come_decrement_ref_count(word_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__352;
                ((node_674) ? node_674 = come_decrement_ref_count(node_674, ((struct sNode*)node_674)->finalize, ((struct sNode*)node_674)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_675=((void*)0);
                if(                type_671->mClass->mStruct&&list$1sNode$ph_length(type_671->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_676=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj188=right_value_675,
                    right_value_675=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    info->no_comma=no_comma_676;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj189=right_value_675,
                    right_value_675=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj190=right_value_675,
                right_value_675=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_675),info));
                (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1675, "struct sNode");
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value742=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1675, "struct sStoreNode*")),(char*)come_increment_ref_count(name_672),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_671),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_675),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_677=(struct sNode*)come_increment_ref_count(_inf_value13);
                /*c*/ come_call_finalizer3(__right_value742,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_590;
                __result_obj__353 = come_increment_ref_count(node_677);
                ((right_value_675) ? right_value_675 = come_decrement_ref_count(right_value_675, ((struct sNode*)right_value_675)->finalize, ((struct sNode*)right_value_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_677) ? node_677 = come_decrement_ref_count(node_677, ((struct sNode*)node_677)->finalize, ((struct sNode*)node_677)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_671,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_672 = come_decrement_ref_count(name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_669 = come_decrement_ref_count(word_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__353;
                ((right_value_675) ? right_value_675 = come_decrement_ref_count(right_value_675, ((struct sNode*)right_value_675)->finalize, ((struct sNode*)right_value_675)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_677) ? node_677 = come_decrement_ref_count(node_677, ((struct sNode*)node_677)->finalize, ((struct sNode*)node_677)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1680, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value746=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1680, "struct sStoreNode*")),(char*)come_increment_ref_count(name_672),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_671),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_678=(struct sNode*)come_increment_ref_count(_inf_value14);
                /*c*/ come_call_finalizer3(__right_value746,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_590;
                __result_obj__354 = come_increment_ref_count(node_678);
                ((node_678) ? node_678 = come_decrement_ref_count(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_671,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_672 = come_decrement_ref_count(name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_669 = come_decrement_ref_count(word_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__354;
                ((node_678) ? node_678 = come_decrement_ref_count(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            /*c*/ come_call_finalizer3(type_671,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_672 = come_decrement_ref_count(name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (word_669 = come_decrement_ref_count(word_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value748=err_msg(info,"unexpected word(%s)(1)",buf)));
    come_exception_var_c3_679=multiple_assign_var38->v1;
    Err_680=(char*)come_increment_ref_count(multiple_assign_var38->v2);
    ((Err_680)?(puts(Err_680),exit(0)):(0));
    /*c*/ come_call_finalizer3(__right_value748,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    (Err_680 = come_decrement_ref_count(Err_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sNewChannel* __result_obj__334;
void* __right_value659 = (void*)0;
struct sNewChannel* result_620;
void* __right_value660 = (void*)0;
char* __dec_obj164;
struct sNewChannel* __result_obj__335;
    if(    self==(void*)0) {
        __result_obj__334 = (void*)0;
        return __result_obj__334;
    }
    result_620=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(    self!=((void*)0)) {
        result_620->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_620->sname,
        result_620->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->sline_real=self->sline_real;
    }
    __result_obj__335 = result_620;
    /*c*/ come_call_finalizer3(result_620,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value667 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_629;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj165;
void* __right_value668 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_630;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj166;
void* __right_value669 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_631;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj167;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__337;
    if(    self->len==0) {
        litem_629=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value667=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1227, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_629->prev=((void*)0);
        litem_629->next=((void*)0);
        __dec_obj165=litem_629->item,
        litem_629->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj165,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_629;
        self->head=litem_629;
    }
    else if(    self->len==1) {
        litem_630=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value668=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1237, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_630->prev=self->head;
        litem_630->next=((void*)0);
        __dec_obj166=litem_630->item,
        litem_630->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj166,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_630;
        self->head->next=litem_630;
    }
    else {
        litem_631=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value669=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1247, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_631->prev=self->tail;
        litem_631->next=((void*)0);
        __dec_obj167=litem_631->item,
        litem_631->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj167,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_631;
        self->tail=litem_631;
    }
    self->len++;
    __result_obj__337 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__337;
}

static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self){
unsigned int result_632;
    result_632=0;
    result_632+=int_get_hash_key(((int)self->v1));
    result_632+=int_get_hash_key(((int)self->v2));
    result_632+=int_get_hash_key(((int)self->v3));
    return result_632;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_633;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_634;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_633=left->head;
    it2_634=right->head;
    while(it_633!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_633->item,it2_634->item)) {
            return (_Bool)0;
        }
        it_633=it_633->next;
        it2_634=it2_634->next;
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
struct list_item$1sType$ph* it_635;
struct list_item$1sType$ph* it2_636;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_635=left->head;
    it2_636=right->head;
    while(it_635!=((void*)0)) {
        if(        !sType_equals(it_635->item,it2_636->item)) {
            return (_Bool)0;
        }
        it_635=it_635->next;
        it2_636=it2_636->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_637;
struct list_item$1sNode$ph* it2_638;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_637=left->head;
    it2_638=right->head;
    while(it_637!=((void*)0)) {
        if(        !sNode_equals(it_637->item,it2_638->item)) {
            return (_Bool)0;
        }
        it_637=it_637->next;
        it2_638=it2_638->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_639;
struct list_item$1char$ph* it2_640;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_639=left->head;
    it2_640=right->head;
    while(it_639!=((void*)0)) {
        if(        !string_equals(it_639->item,it2_640->item)) {
            return (_Bool)0;
        }
        it_639=it_639->next;
        it2_640=it2_640->next;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj168;
char* __dec_obj169;
struct sNode* __dec_obj170;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__338;
    __dec_obj168=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj169=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj170=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__338 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__338,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
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
struct tuple3$3sType$phchar$phvoid$p* __result_obj__339;
void* __right_value675 = (void*)0;
struct tuple3$3sType$phchar$phvoid$p* result_643;
void* __right_value676 = (void*)0;
struct sType* __dec_obj171;
void* __right_value677 = (void*)0;
char* __dec_obj172;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__340;
    if(    self==(void*)0) {
        __result_obj__339 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__339,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__339;
    }
    result_643=(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "tuple3$3sType$phchar$phvoid$p_clone", 3, "struct tuple3$3sType$phchar$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj171=result_643->v1,
        result_643->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj172=result_643->v2,
        result_643->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phvoid$p_clone", 5, "char*"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_643->v3=self->v3;
    }
    __result_obj__340 = come_increment_ref_count(result_643);
    /*c*/ come_call_finalizer3(result_643,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__340,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__340;
}

static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self){
unsigned int result_644;
    result_644=0;
    result_644+=int_get_hash_key(((int)self->v1));
    result_644+=int_get_hash_key(((int)self->v2));
    result_644+=int_get_hash_key(((int)self->v3));
    return result_644;
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
struct tuple3$3sType$phchar$phvoid$p* __result_obj__341;
    __dec_obj173=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj174=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__341 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__341,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__341;
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
void* __right_value697 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_657;
struct tuple2$2char$phsType$ph* __dec_obj176;
void* __right_value698 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_658;
struct tuple2$2char$phsType$ph* __dec_obj177;
void* __right_value699 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_659;
struct tuple2$2char$phsType$ph* __dec_obj178;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__343;
    if(    self->len==0) {
        litem_657=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value697=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_657->prev=((void*)0);
        litem_657->next=((void*)0);
        __dec_obj176=litem_657->item,
        litem_657->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj176,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_657;
        self->head=litem_657;
    }
    else if(    self->len==1) {
        litem_658=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value698=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_658->prev=self->head;
        litem_658->next=((void*)0);
        __dec_obj177=litem_658->item,
        litem_658->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj177,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_658;
        self->head->next=litem_658;
    }
    else {
        litem_659=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value699=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_659->prev=self->tail;
        litem_659->next=((void*)0);
        __dec_obj178=litem_659->item,
        litem_659->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj178,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_659;
        self->tail=litem_659;
    }
    self->len++;
    __result_obj__343 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
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
struct tuple2$2char$phsType$ph* __result_obj__344;
void* __right_value700 = (void*)0;
struct tuple2$2char$phsType$ph* result_660;
void* __right_value701 = (void*)0;
char* __dec_obj179;
void* __right_value702 = (void*)0;
struct sType* __dec_obj180;
struct tuple2$2char$phsType$ph* __result_obj__345;
    if(    self==(void*)0) {
        __result_obj__344 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__344,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__344;
    }
    result_660=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj179=result_660->v1,
        result_660->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj180=result_660->v2,
        result_660->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__345 = come_increment_ref_count(result_660);
    /*c*/ come_call_finalizer3(result_660,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__345,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__345;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_661;
    result_661=0;
    result_661+=int_get_hash_key(((int)self->v1));
    result_661+=int_get_hash_key(((int)self->v2));
    return result_661;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj181;
struct sType* __dec_obj182;
struct tuple2$2char$phsType$ph* __result_obj__346;
    __dec_obj181=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj182=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__346 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__346,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__346;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node_681;
void* __right_value749 = (void*)0;
struct sNode* exp_682;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value755 = (void*)0;
struct sNode* __result_obj__357;
void* __right_value756 = (void*)0;
struct sNode* __dec_obj193;
struct sNode* __result_obj__358;
node_681 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_682=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1706, "struct sNode");
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value751=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1706, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp_682),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result_obj__357 = come_increment_ref_count(((struct sNode*)(__right_value755=_inf_value15)));
        ((exp_682) ? exp_682 = come_decrement_ref_count(exp_682, ((struct sNode*)exp_682)->finalize, ((struct sNode*)exp_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_681) ? node_681 = come_decrement_ref_count(node_681, ((struct sNode*)node_681)->finalize, ((struct sNode*)node_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value751,sReadChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value755) ? __right_value755 = come_decrement_ref_count(__right_value755, ((struct sNode*)__right_value755)->finalize, ((struct sNode*)__right_value755)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__357) ? __result_obj__357 = come_decrement_ref_count(__result_obj__357, ((struct sNode*)__result_obj__357)->finalize, ((struct sNode*)__result_obj__357)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__357;
        ((exp_682) ? exp_682 = come_decrement_ref_count(exp_682, ((struct sNode*)exp_682)->finalize, ((struct sNode*)exp_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        __dec_obj193=node_681,
        node_681=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__358 = come_increment_ref_count(node_681);
    ((node_681) ? node_681 = come_decrement_ref_count(node_681, ((struct sNode*)node_681)->finalize, ((struct sNode*)node_681)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__358) ? __result_obj__358 = come_decrement_ref_count(__result_obj__358, ((struct sNode*)__result_obj__358)->finalize, ((struct sNode*)__result_obj__358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__358;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__355;
void* __right_value752 = (void*)0;
struct sReadChannelNode* result_683;
void* __right_value753 = (void*)0;
char* __dec_obj191;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj192;
struct sReadChannelNode* __result_obj__356;
    if(    self==(void*)0) {
        __result_obj__355 = (void*)0;
        return __result_obj__355;
    }
    result_683=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(    self!=((void*)0)) {
        result_683->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result_683->sname,
        result_683->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_683->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj192=result_683->exp,
        result_683->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__356 = result_683;
    /*c*/ come_call_finalizer3(result_683,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__356;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value757 = (void*)0;
struct sNode* right_value_684;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value765 = (void*)0;
struct sNode* __result_obj__361;
void* __right_value766 = (void*)0;
struct sNode* __result_obj__362;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_684=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj194=right_value_684,
        right_value_684=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_684),info));
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1729, "struct sNode");
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value760=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1729, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_684),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result_obj__361 = come_increment_ref_count(((struct sNode*)(__right_value765=_inf_value16)));
        ((right_value_684) ? right_value_684 = come_decrement_ref_count(right_value_684, ((struct sNode*)right_value_684)->finalize, ((struct sNode*)right_value_684)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value760,sWriteChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value765) ? __right_value765 = come_decrement_ref_count(__right_value765, ((struct sNode*)__right_value765)->finalize, ((struct sNode*)__right_value765)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__361) ? __result_obj__361 = come_decrement_ref_count(__result_obj__361, ((struct sNode*)__result_obj__361)->finalize, ((struct sNode*)__result_obj__361)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__361;
        ((right_value_684) ? right_value_684 = come_decrement_ref_count(right_value_684, ((struct sNode*)right_value_684)->finalize, ((struct sNode*)right_value_684)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__362 = come_increment_ref_count(((struct sNode*)(__right_value766=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value766) ? __right_value766 = come_decrement_ref_count(__right_value766, ((struct sNode*)__right_value766)->finalize, ((struct sNode*)__right_value766)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__362;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__359;
void* __right_value761 = (void*)0;
struct sWriteChannelNode* result_685;
void* __right_value762 = (void*)0;
char* __dec_obj195;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value764 = (void*)0;
struct sNode* __dec_obj197;
struct sWriteChannelNode* __result_obj__360;
    if(    self==(void*)0) {
        __result_obj__359 = (void*)0;
        return __result_obj__359;
    }
    result_685=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(    self!=((void*)0)) {
        result_685->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj195=result_685->sname,
        result_685->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_685->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj196=result_685->exp,
        result_685->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj197=result_685->right_value,
        result_685->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__360 = result_685;
    /*c*/ come_call_finalizer3(result_685,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__360;
}

