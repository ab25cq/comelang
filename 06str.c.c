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
    _Bool mExceptionGenericsType;
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
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
};

struct sNodeBase
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
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
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
_Bool parsecmp(char* str, struct sInfo* info);
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
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info, _Bool no_err);
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
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
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
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
struct sStrNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value0,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj1=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__1 = (struct sStrNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__1,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__1;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sStrNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__2;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct CVALUE* come_value_0;
void* __right_value5 = (void*)0;
char* __dec_obj2;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
struct sType* __dec_obj3;
_Bool __result_obj__4;
    come_value_0=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*"))));
    __dec_obj2=come_value_0->c_value,
    come_value_0->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj3=come_value_0->type,
    come_value_0->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_0->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_0));
    add_come_last_code(info,"%s",come_value_0->c_value);
    __result_obj__4 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_0,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__4;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sStrNode_finalize(struct sStrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct list_item$1sType$ph* it_1;
struct list_item$1sType$ph* prev_it_2;
    it_1=self->head;
    while(    it_1!=((void*)0)) {
        prev_it_2=it_1;
        it_1=it_1->next;
        /*c*/ come_call_finalizer3(prev_it_2,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_3;
struct list_item$1sNode$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)) {
        prev_it_4=it_3;
        it_3=it_3->next;
        /*c*/ come_call_finalizer3(prev_it_4,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_5;
struct list_item$1char$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)) {
        prev_it_6=it_5;
        it_5=it_5->next;
        /*c*/ come_call_finalizer3(prev_it_6,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value9 = (void*)0;
struct list_item$1CVALUE$ph* litem_7;
struct CVALUE* __dec_obj4;
void* __right_value10 = (void*)0;
struct list_item$1CVALUE$ph* litem_8;
struct CVALUE* __dec_obj5;
void* __right_value11 = (void*)0;
struct list_item$1CVALUE$ph* litem_9;
struct CVALUE* __dec_obj6;
struct list$1CVALUE$ph* __result_obj__3;
    if(    self->len==0) {
        litem_7=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value9=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_7->prev=((void*)0);
        litem_7->next=((void*)0);
        __dec_obj4=litem_7->item,
        litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_7;
        self->head=litem_7;
    }
    else if(    self->len==1) {
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value10=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj5=litem_8->item,
        litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value11=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj6=litem_9->item,
        litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__3 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__3;
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

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __right_value12 = (void*)0;
struct buffer* __dec_obj7;
struct sBufferNode* __result_obj__5;
    ((struct sNodeBase*)(__right_value12=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value12,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj7=self->value,
    self->value=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj7,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result_obj__5 = (struct sBufferNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__5,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__5;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value13 = (void*)0;
char* __result_obj__6;
    __result_obj__6 = (char*)come_increment_ref_count(((char*)(__right_value13=__builtin_string("sBufferNode"))));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__6 = come_decrement_ref_count(__result_obj__6, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__6;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_10;
unsigned long  int size_11;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
struct CVALUE* come_value_12;
void* __right_value16 = (void*)0;
void* __right_value17 = (void*)0;
struct buffer* buf_13;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct sType* type2_14;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct sType* any_type_15;
void* __right_value24 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
char* finalizer_name_16=0;
char* cloner_name_17=0;
char* get_hash_key_name_18=0;
char* equaler_name_19=0;
void* __right_value25 = (void*)0;
_Bool _if_conditional1;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct sType* type2_26;
void* __right_value31 = (void*)0;
char* __dec_obj8;
void* __right_value69 = (void*)0;
struct sType* __dec_obj32;
_Bool __result_obj__31;
    value_10=(struct buffer*)come_increment_ref_count(self->value);
    size_11=self->size;
    come_value_12=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*"))));
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*"))));
    type2_14=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    type2_14->mPointerNum++;
    any_type_15=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    any_type_15->mPointerNum=1;
    any_type_15->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value24=create_vtable((struct sType*)come_increment_ref_count(any_type_15),info)));
    finalizer_name_16=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_17=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_18=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_19=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    /*c*/ come_call_finalizer3(__right_value24,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional1=(((struct sFun*)(__right_value25=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value25,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        buffer_append_format(buf_13,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value26=buffer_to_string(value_10))),size_11);
        (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_format(buf_13,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value27=buffer_to_string(value_10))),size_11);
        (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(type2_14,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type2_26=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 74, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info));
    type2_26->mHeap=(_Bool)1;
    __dec_obj8=come_value_12->c_value,
    come_value_12->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_13));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj32=come_value_12->type,
    come_value_12->type=(struct sType*)come_increment_ref_count(sType_clone(type2_26));
    /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_12->var=((void*)0);
    append_object_to_right_values2(come_value_12,(struct sType*)come_increment_ref_count(type2_26),info,(_Bool)0,((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_12));
    add_come_last_code(info,"%s",come_value_12->c_value);
    __result_obj__31 = (_Bool)1;
    /*c*/ come_call_finalizer3(value_10,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_12,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_13,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(any_type_15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_16 = come_decrement_ref_count(finalizer_name_16, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_17 = come_decrement_ref_count(cloner_name_17, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_18 = come_decrement_ref_count(get_hash_key_name_18, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_19 = come_decrement_ref_count(equaler_name_19, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_26,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__31;
}

static void sBufferNode_finalize(struct sBufferNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_20;
unsigned int hash_21;
unsigned int it_22;
struct sFun* __result_obj__7;
struct sFun* __result_obj__8;
struct sFun* __result_obj__9;
struct sFun* __result_obj__10;
default_value_20 = (void*)0;
    memset(&default_value_20,0,sizeof(struct sFun*));
    hash_21=string_get_hash_key(((char*)key))%self->size;
    it_22=hash_21;
    while(    (_Bool)1) {
        if(        self->item_existance[it_22]) {
            if(            string_equals(self->keys[it_22],key)) {
                __result_obj__7 = (struct sFun*)come_increment_ref_count(self->items[it_22]);
                /*c*/ come_call_finalizer3(default_value_20,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__7,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__7;
            }
            it_22++;
            if(            it_22>=self->size) {
                it_22=0;
            }
            else if(            it_22==hash_21) {
                __result_obj__8 = (struct sFun*)come_increment_ref_count(default_value_20);
                /*c*/ come_call_finalizer3(default_value_20,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__8,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct sFun*)come_increment_ref_count(default_value_20);
            /*c*/ come_call_finalizer3(default_value_20,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__9,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct sFun*)come_increment_ref_count(default_value_20);
    /*c*/ come_call_finalizer3(default_value_20,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__10,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__10;
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
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sFun* default_value_23;
unsigned int hash_24;
unsigned int it_25;
struct sFun* __result_obj__11;
struct sFun* __result_obj__12;
struct sFun* __result_obj__13;
struct sFun* __result_obj__14;
default_value_23 = (void*)0;
    memset(&default_value_23,0,sizeof(struct sFun*));
    hash_24=string_get_hash_key(((char*)key))%self->size;
    it_25=hash_24;
    while(    (_Bool)1) {
        if(        self->item_existance[it_25]) {
            if(            string_equals(self->keys[it_25],key)) {
                __result_obj__11 = (struct sFun*)come_increment_ref_count(self->items[it_25]);
                /*c*/ come_call_finalizer3(default_value_23,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__11,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__11;
            }
            it_25++;
            if(            it_25>=self->size) {
                it_25=0;
            }
            else if(            it_25==hash_24) {
                __result_obj__12 = (struct sFun*)come_increment_ref_count(default_value_23);
                /*c*/ come_call_finalizer3(default_value_23,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__12,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct sFun*)come_increment_ref_count(default_value_23);
            /*c*/ come_call_finalizer3(default_value_23,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__13,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct sFun*)come_increment_ref_count(default_value_23);
    /*c*/ come_call_finalizer3(default_value_23,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__14,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__14;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__15;
void* __right_value32 = (void*)0;
struct sType* result_27;
void* __right_value33 = (void*)0;
struct sType* __dec_obj9;
void* __right_value34 = (void*)0;
struct sType* __dec_obj10;
void* __right_value42 = (void*)0;
struct list$1sType$ph* __dec_obj14;
void* __right_value43 = (void*)0;
struct sType* __dec_obj15;
void* __right_value45 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value46 = (void*)0;
struct sNode* __dec_obj17;
void* __right_value47 = (void*)0;
char* __dec_obj18;
void* __right_value48 = (void*)0;
char* __dec_obj19;
void* __right_value49 = (void*)0;
char* __dec_obj20;
void* __right_value57 = (void*)0;
struct list$1sNode$ph* __dec_obj24;
void* __right_value58 = (void*)0;
char* __dec_obj25;
void* __right_value59 = (void*)0;
struct list$1sType$ph* __dec_obj26;
void* __right_value67 = (void*)0;
struct list$1char$ph* __dec_obj30;
void* __right_value68 = (void*)0;
struct sType* __dec_obj31;
struct sType* __result_obj__30;
    if(    self==(void*)0) {
        __result_obj__15 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__15;
    }
    result_27=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_27->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj9=result_27->mOriginalLoadVarType,
        result_27->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj9,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj10=result_27->mChannelType,
        result_27->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj10,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj14=result_27->mGenericsTypes,
        result_27->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj14,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj15=result_27->mNoSolvedGenericsType,
        result_27->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj15,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj16=result_27->mSizeNum,
        result_27->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj17=result_27->mAlignas,
        result_27->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj18=result_27->mTupleName,
        result_27->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj19=result_27->mAttribute,
        result_27->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_27->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_27->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_27->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_27->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_27->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_27->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_27->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_27->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_27->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_27->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_27->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_27->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_27->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_27->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_27->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_27->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_27->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_27->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_27->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_27->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_27->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_27->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_27->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj20=result_27->mAsmName,
        result_27->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_27->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_27->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_27->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj24=result_27->mArrayNum,
        result_27->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_27->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_27->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_27->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_27->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_27->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj25=result_27->mOriginalTypeName,
        result_27->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_27->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_27->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_27->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_27->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj26=result_27->mParamTypes,
        result_27->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj26,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj30=result_27->mParamNames,
        result_27->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj30,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj31=result_27->mResultType,
        result_27->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_27->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_27->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    if(    self!=((void*)0)) {
        result_27->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__30 = (struct sType*)come_increment_ref_count(result_27);
    /*c*/ come_call_finalizer3(result_27,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__30,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__30;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__16;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1sType$ph* result_28;
struct list_item$1sType$ph* it_29;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1sType$ph* __result_obj__19;
    if(    self==((void*)0)) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__16,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__16;
    }
    result_28=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_29=self->head;
    while(    it_29!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_28,(struct sType*)come_increment_ref_count(sType_clone(it_29->item)));
        }
        else {
            list$1sType$ph_add(result_28,(struct sType*)come_increment_ref_count(sType_clone(it_29->item)));
        }
        it_29=it_29->next;
    }
    __result_obj__19 = (struct list$1sType$ph*)come_increment_ref_count(result_28);
    /*c*/ come_call_finalizer3(result_28,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__19,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__19;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__17,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__17;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value37 = (void*)0;
struct list_item$1sType$ph* litem_30;
struct sType* __dec_obj11;
void* __right_value38 = (void*)0;
struct list_item$1sType$ph* litem_31;
struct sType* __dec_obj12;
void* __right_value39 = (void*)0;
struct list_item$1sType$ph* litem_32;
struct sType* __dec_obj13;
struct list$1sType$ph* __result_obj__18;
    if(    self->len==0) {
        litem_30=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value37=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_30->prev=((void*)0);
        litem_30->next=((void*)0);
        __dec_obj11=litem_30->item,
        litem_30->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj11,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_30;
        self->head=litem_30;
    }
    else if(    self->len==1) {
        litem_31=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value38=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        __dec_obj12=litem_31->item,
        litem_31->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj12,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        litem_32=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value39=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        __dec_obj13=litem_32->item,
        litem_32->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj13,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
    __result_obj__18 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__18;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_33;
struct list_item$1sType$ph* prev_it_34;
    it_33=self->head;
    while(    it_33!=((void*)0)) {
        prev_it_34=it_33;
        it_33=it_33->next;
        /*c*/ come_call_finalizer3(prev_it_34,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__20;
void* __right_value44 = (void*)0;
struct sNode* result_35;
struct sNode* __result_obj__21;
    if(    self==(void*)0) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__20) ? __result_obj__20 = come_decrement_ref_count(__result_obj__20, ((struct sNode*)__result_obj__20)->finalize, ((struct sNode*)__result_obj__20)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__20;
    }
    result_35=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_35->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_35->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_35->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_35->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_35->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_35->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_35->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_35->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_35->kind=self->kind;
    }
    __result_obj__21 = (struct sNode*)come_increment_ref_count(result_35);
    ((result_35) ? result_35 = come_decrement_ref_count(result_35, ((struct sNode*)result_35)->finalize, ((struct sNode*)result_35)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__21) ? __result_obj__21 = come_decrement_ref_count(__result_obj__21, ((struct sNode*)__result_obj__21)->finalize, ((struct sNode*)__result_obj__21)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__21;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__22;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct list$1sNode$ph* result_36;
struct list_item$1sNode$ph* it_37;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1sNode$ph* __result_obj__25;
    if(    self==((void*)0)) {
        __result_obj__22 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__22,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__22;
    }
    result_36=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_37=self->head;
    while(    it_37!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_36,(struct sNode*)come_increment_ref_count(sNode_clone(it_37->item)));
        }
        else {
            list$1sNode$ph_add(result_36,(struct sNode*)come_increment_ref_count(sNode_clone(it_37->item)));
        }
        it_37=it_37->next;
    }
    __result_obj__25 = (struct list$1sNode$ph*)come_increment_ref_count(result_36);
    /*c*/ come_call_finalizer3(result_36,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__25,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__25;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__23;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__23,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__23;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value52 = (void*)0;
struct list_item$1sNode$ph* litem_38;
struct sNode* __dec_obj21;
void* __right_value53 = (void*)0;
struct list_item$1sNode$ph* litem_39;
struct sNode* __dec_obj22;
void* __right_value54 = (void*)0;
struct list_item$1sNode$ph* litem_40;
struct sNode* __dec_obj23;
struct list$1sNode$ph* __result_obj__24;
    if(    self->len==0) {
        litem_38=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value52=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_38->prev=((void*)0);
        litem_38->next=((void*)0);
        __dec_obj21=litem_38->item,
        litem_38->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_38;
        self->head=litem_38;
    }
    else if(    self->len==1) {
        litem_39=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value53=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_39->prev=self->head;
        litem_39->next=((void*)0);
        __dec_obj22=litem_39->item,
        litem_39->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_39;
        self->head->next=litem_39;
    }
    else {
        litem_40=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value54=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_40->prev=self->tail;
        litem_40->next=((void*)0);
        __dec_obj23=litem_40->item,
        litem_40->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_40;
        self->tail=litem_40;
    }
    self->len++;
    __result_obj__24 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__24;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_41;
struct list_item$1sNode$ph* prev_it_42;
    it_41=self->head;
    while(    it_41!=((void*)0)) {
        prev_it_42=it_41;
        it_41=it_41->next;
        /*c*/ come_call_finalizer3(prev_it_42,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__26;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char$ph* result_43;
struct list_item$1char$ph* it_44;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1char$ph* __result_obj__29;
    if(    self==((void*)0)) {
        __result_obj__26 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__26,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__26;
    }
    result_43=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_44=self->head;
    while(    it_44!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_43,(char*)come_increment_ref_count((char*)come_memdup(it_44->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_43,(char*)come_increment_ref_count((char*)come_memdup(it_44->item, "./comelang.h", 1032, "char*")));
        }
        it_44=it_44->next;
    }
    __result_obj__29 = (struct list$1char$ph*)come_increment_ref_count(result_43);
    /*c*/ come_call_finalizer3(result_43,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__29,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__29;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__27;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__27 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__27,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_45;
char* __dec_obj27;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_46;
char* __dec_obj28;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_47;
char* __dec_obj29;
struct list$1char$ph* __result_obj__28;
    if(    self->len==0) {
        litem_45=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_45->prev=((void*)0);
        litem_45->next=((void*)0);
        __dec_obj27=litem_45->item,
        litem_45->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_45;
        self->head=litem_45;
    }
    else if(    self->len==1) {
        litem_46=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_46->prev=self->head;
        litem_46->next=((void*)0);
        __dec_obj28=litem_46->item,
        litem_46->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_46;
        self->head->next=litem_46;
    }
    else {
        litem_47=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_47->prev=self->tail;
        litem_47->next=((void*)0);
        __dec_obj29=litem_47->item,
        litem_47->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_47;
        self->tail=litem_47;
    }
    self->len++;
    __result_obj__28 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__28;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_48;
struct list_item$1char$ph* prev_it_49;
    it_48=self->head;
    while(    it_48!=((void*)0)) {
        prev_it_49=it_48;
        it_48=it_48->next;
        /*c*/ come_call_finalizer3(prev_it_49,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
char* __dec_obj33;
void* __right_value72 = (void*)0;
struct list$1sNode$ph* __dec_obj34;
struct sSStringNode* __result_obj__32;
    ((struct sNodeBase*)(__right_value70=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value70,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj33=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj34=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps));
    /*b*/ come_call_finalizer3(__dec_obj34,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__32 = (struct sSStringNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__32,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__32;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value73 = (void*)0;
char* __result_obj__33;
    __result_obj__33 = (char*)come_increment_ref_count(((char*)(__right_value73=__builtin_string("sSStringNode"))));
    (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__33 = come_decrement_ref_count(__result_obj__33, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__33;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct CVALUE* come_value_50;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct buffer* buf_51;
struct list$1sNode$ph* o2_saved_52;
struct sNode* it_55;
void* __right_value78 = (void*)0;
struct sNode* obj_58;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_59;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct sNode* node_67;
_Bool Value_68;
_Bool __result_obj__45;
void* __right_value92 = (void*)0;
struct CVALUE* come_value_69;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct sType* type2_70;
void* __right_value96 = (void*)0;
char* __dec_obj42;
void* __right_value97 = (void*)0;
struct sType* __dec_obj43;
_Bool __result_obj__46;
    come_value_50=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 108, "struct CVALUE*"))));
    buf_51=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 110, "struct buffer*"))));
    buffer_append_str(buf_51,"xsprintf(\"");
    buffer_append_str(buf_51,self->value);
    buffer_append_str(buf_51,"\"");
    if(    list$1sNode$ph_length(self->exps)>0) {
        for(        o2_saved_52=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_55=list$1sNode$ph_begin((o2_saved_52));        !list$1sNode$ph_end((o2_saved_52));        it_55=list$1sNode$ph_next((o2_saved_52))        ){
            obj_58=(struct sNode*)come_increment_ref_count(sNode_clone(it_55));
            params_59=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 120, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_59,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 121, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it_55)))));
            node_67=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_58),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_59),((void*)0),0,((void*)0),(_Bool)0,info,(_Bool)0));
            Value_68=node_compile(node_67,info);
            if(            !Value_68) {
                __result_obj__45 = (_Bool)0;
                ((obj_58) ? obj_58 = come_decrement_ref_count(obj_58, ((struct sNode*)obj_58)->finalize, ((struct sNode*)obj_58)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_59,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(o2_saved_52,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_50,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_51,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__45;
            }
            else {
            }
            come_value_69=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_51,",");
            buffer_append_str(buf_51,come_value_69->c_value);
            ((obj_58) ? obj_58 = come_decrement_ref_count(obj_58, ((struct sNode*)obj_58)->finalize, ((struct sNode*)obj_58)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_59,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_69,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_52,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buffer_append_str(buf_51,")");
    type2_70=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 138, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    type2_70->mHeap=(_Bool)1;
    __dec_obj42=come_value_50->c_value,
    come_value_50->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_51));
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj43=come_value_50->type,
    come_value_50->type=(struct sType*)come_increment_ref_count(sType_clone(type2_70));
    /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_50->var=((void*)0);
    append_object_to_right_values2(come_value_50,(struct sType*)come_increment_ref_count(type2_70),info,(_Bool)0,((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_50));
    add_come_last_code(info,"%s",come_value_50->c_value);
    __result_obj__46 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_50,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_51,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_70,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__46;
}

static void sSStringNode_finalize(struct sSStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_53;
struct sNode* __result_obj__34;
struct sNode* __result_obj__35;
struct sNode* result_54;
struct sNode* __result_obj__36;
result_53 = (void*)0;
result_54 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_53,0,sizeof(struct sNode*));
        __result_obj__34 = result_53;
        return __result_obj__34;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_54,0,sizeof(struct sNode*));
    __result_obj__36 = result_54;
    return __result_obj__36;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_56;
struct sNode* __result_obj__37;
struct sNode* __result_obj__38;
struct sNode* result_57;
struct sNode* __result_obj__39;
result_56 = (void*)0;
result_57 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_56,0,sizeof(struct sNode*));
        __result_obj__37 = result_56;
        return __result_obj__37;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_57,0,sizeof(struct sNode*));
    __result_obj__39 = result_57;
    return __result_obj__39;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__40;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__40 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__40,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__40;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_60;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_61;
    it_60=self->head;
    while(    it_60!=((void*)0)) {
        prev_it_61=it_60;
        it_60=it_60->next;
        /*c*/ come_call_finalizer3(prev_it_61,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value81 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_62;
struct tuple2$2char$phsNode$ph* __dec_obj35;
void* __right_value82 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_63;
struct tuple2$2char$phsNode$ph* __dec_obj36;
void* __right_value83 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_64;
struct tuple2$2char$phsNode$ph* __dec_obj37;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__41;
    if(    self->len==0) {
        litem_62=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value81=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_62->prev=((void*)0);
        litem_62->next=((void*)0);
        __dec_obj35=litem_62->item,
        litem_62->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_62;
        self->head=litem_62;
    }
    else if(    self->len==1) {
        litem_63=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value82=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_63->prev=self->head;
        litem_63->next=((void*)0);
        __dec_obj36=litem_63->item,
        litem_63->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj36,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_63;
        self->head->next=litem_63;
    }
    else {
        litem_64=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value83=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_64->prev=self->tail;
        litem_64->next=((void*)0);
        __dec_obj37=litem_64->item,
        litem_64->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj37,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_64;
        self->tail=litem_64;
    }
    self->len++;
    __result_obj__41 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__41;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__42;
void* __right_value86 = (void*)0;
struct tuple2$2char$phsNode$ph* result_65;
void* __right_value87 = (void*)0;
char* __dec_obj38;
void* __right_value88 = (void*)0;
struct sNode* __dec_obj39;
struct tuple2$2char$phsNode$ph* __result_obj__43;
    if(    self==(void*)0) {
        __result_obj__42 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__42,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__42;
    }
    result_65=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_65->v1,
        result_65->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj39=result_65->v2,
        result_65->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__43 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_65);
    /*c*/ come_call_finalizer3(result_65,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__43,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__43;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_66;
    result_66=0;
    result_66+=int_get_hash_key(((int)self->v1));
    result_66+=int_get_hash_key(((int)self->v2));
    return result_66;
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
char* __dec_obj40;
struct sNode* __dec_obj41;
struct tuple2$2char$phsNode$ph* __result_obj__44;
    __dec_obj40=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj41=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__44 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__44,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__44;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value98 = (void*)0;
struct sCharNode* __result_obj__47;
    ((struct sNodeBase*)(__right_value98=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value98,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__47 = (struct sCharNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__47,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__47;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value99 = (void*)0;
char* __result_obj__48;
    __result_obj__48 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string("sCharNode"))));
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__48;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct CVALUE* come_value_71;
void* __right_value102 = (void*)0;
char* __dec_obj44;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sType* __dec_obj45;
_Bool __result_obj__49;
    come_value_71=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 171, "struct CVALUE*"))));
    __dec_obj44=come_value_71->c_value,
    come_value_71->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj45=come_value_71->type,
    come_value_71->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 174, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_71->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
    add_come_last_code(info,"%s",come_value_71->c_value);
    __result_obj__49 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_71,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__49;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __right_value106 = (void*)0;
struct sWCharNode* __result_obj__50;
    ((struct sNodeBase*)(__right_value106=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value106,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__50 = (struct sWCharNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__50,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__50;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value107 = (void*)0;
char* __result_obj__51;
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("sWCharNode"))));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__51;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct CVALUE* come_value_72;
void* __right_value110 = (void*)0;
char* __dec_obj46;
void* __right_value111 = (void*)0;
char* __dec_obj47;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__52;
    come_value_72=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 202, "struct CVALUE*"))));
    if(    self->quote) {
        __dec_obj46=come_value_72->c_value,
        come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj47=come_value_72->c_value,
        come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj48=come_value_72->type,
    come_value_72->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 210, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_72->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    add_come_last_code(info,"%s",come_value_72->c_value);
    __result_obj__52 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_72,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__52;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __right_value115 = (void*)0;
unsigned int* __dec_obj49;
struct sWStringNode* __result_obj__53;
    ((struct sNodeBase*)(__right_value115=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value115,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj49=self->value,
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__53 = (struct sWStringNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__53,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__53;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value116 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string("sWStringNode"))));
    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__54;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct CVALUE* come_value_73;
void* __right_value119 = (void*)0;
char* __dec_obj50;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct sType* __dec_obj51;
_Bool __result_obj__55;
    come_value_73=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 237, "struct CVALUE*"))));
    __dec_obj50=come_value_73->c_value,
    come_value_73->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj51=come_value_73->type,
    come_value_73->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 240, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_73->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
    add_come_last_code(info,"%s",come_value_73->c_value);
    __result_obj__55 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_73,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__55;
}

static void sWStringNode_finalize(struct sWStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
char* __dec_obj52;
struct sRegexNode* __result_obj__56;
    ((struct sNodeBase*)(__right_value123=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value123,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj52=self->str,
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__56 = (struct sRegexNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__56,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__56;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value125 = (void*)0;
char* __result_obj__57;
    __result_obj__57 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string("sRegexNode"))));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__57;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value131 = (void*)0;
struct sNode* obj_node_74;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_76;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct sNode* node_77;
_Bool Value_78;
_Bool __result_obj__60;
_Bool __result_obj__61;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 269, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value127=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 269, "struct sStrNode*")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_74=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value127,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    params_76=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 271, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_74))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 277, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 278, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 279, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 280, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_76,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 281, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_77=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_74),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_76),((void*)0),info->sline,((void*)0),(_Bool)0,info,(_Bool)0));
    Value_78=node_compile(node_77,info);
    if(    !Value_78) {
        __result_obj__60 = (_Bool)0;
        ((obj_node_74) ? obj_node_74 = come_decrement_ref_count(obj_node_74, ((struct sNode*)obj_node_74)->finalize, ((struct sNode*)obj_node_74)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_76,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__60;
    }
    else {
    }
    __result_obj__61 = (_Bool)1;
    ((obj_node_74) ? obj_node_74 = come_decrement_ref_count(obj_node_74, ((struct sNode*)obj_node_74)->finalize, ((struct sNode*)obj_node_74)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params_76,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__61;
}

static void sRegexNode_finalize(struct sRegexNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
struct sStrNode* __result_obj__58;
void* __right_value128 = (void*)0;
struct sStrNode* result_75;
void* __right_value129 = (void*)0;
char* __dec_obj53;
void* __right_value130 = (void*)0;
char* __dec_obj54;
struct sStrNode* __result_obj__59;
    if(    self==(void*)0) {
        __result_obj__58 = (void*)0;
        return __result_obj__58;
    }
    result_75=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*"));
    if(    self!=((void*)0)) {
        result_75->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj53=result_75->sname,
        result_75->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStrNode_clone", 5, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_75->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj54=result_75->value,
        result_75->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sStrNode_clone", 7, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__59 = result_75;
    /*c*/ come_call_finalizer3(result_75,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__59;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value170 = (void*)0;
struct list$1sNode$ph* __dec_obj55;
struct sListNode* __result_obj__62;
    ((struct sNodeBase*)(__right_value170=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value170,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj55=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    /*b*/ come_call_finalizer3(__dec_obj55,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__62 = (struct sListNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value171 = (void*)0;
char* __result_obj__63;
    __result_obj__63 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string("sListNode"))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__63 = come_decrement_ref_count(__result_obj__63, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__63;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_79;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct list$1CVALUE$ph* params_80;
struct sType* list_element_type_83;
int n_84;
struct list$1sNode$ph* o2_saved_85;
struct sNode* it_86;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
_Bool _if_conditional2;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct sNode* value_node_87;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_88;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sNode* exp_89;
void* __right_value189 = (void*)0;
struct sNode* __dec_obj56;
_Bool Value_90;
_Bool __result_obj__65;
_Bool Value_91;
_Bool __result_obj__66;
void* __right_value190 = (void*)0;
struct CVALUE* come_value_92;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sType* __dec_obj57;
void* __right_value193 = (void*)0;
struct sType* type_values_93;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
char* var_name_98;
void* __right_value199 = (void*)0;
struct sVar* var__99;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct buffer* source_100;
int i_101;
struct list$1CVALUE$ph* o2_saved_102;
struct CVALUE* it_105;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sType* list_type_114;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sType* obj_type_118;
char* fun_name_119;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_120=0;
struct sGenericsFun* generics_fun_121=0;
char* generics_fun_name_122;
void* __right_value215 = (void*)0;
struct sFun* fun_123;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
char* __dec_obj64;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* result_type_126;
struct sType* type_127;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct CVALUE* obj_value_128;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct buffer* num_string_129;
void* __right_value225 = (void*)0;
struct sType* type2_130;
void* __right_value226 = (void*)0;
char* type_name_131;
struct sType* any_type_132;
void* __right_value227 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var3 = (void*)0;
char* finalizer_name_133=0;
char* cloner_name_134=0;
char* get_hash_key_name_135=0;
char* equaler_name_136=0;
void* __right_value228 = (void*)0;
_Bool _if_conditional3;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
char* __dec_obj65;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
char* __dec_obj66;
void* __right_value233 = (void*)0;
struct sType* type3_137;
void* __right_value234 = (void*)0;
struct sType* __dec_obj67;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1CVALUE$ph* come_params_138;
void* __right_value237 = (void*)0;
_Bool _if_conditional4;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value2_145;
void* __right_value241 = (void*)0;
char* __dec_obj68;
struct sType* __dec_obj69;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct CVALUE* come_value3_146;
void* __right_value244 = (void*)0;
char* __dec_obj70;
struct sType* __dec_obj71;
int j_147;
struct list$1CVALUE$ph* o2_saved_148;
struct CVALUE* it_149;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct CVALUE* come_value4_150;
void* __right_value247 = (void*)0;
char* __dec_obj72;
void* __right_value248 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__87;
    list_elements_79=self->list_elements;
    params_80=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 313, "struct list$1CVALUE$ph*"))));
    list_element_type_83=((void*)0);
    n_84=0;
    for(    o2_saved_85=(list_elements_79),it_86=list$1sNode$ph_begin((o2_saved_85));    !list$1sNode$ph_end((o2_saved_85));    it_86=list$1sNode$ph_next((o2_saved_85))    ){
        if(        (_if_conditional2=(string_operator_equals(((char*)(__right_value175=it_86->kind(it_86->_protocol_obj))),"sWildCard"))),        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional2) {
            value_node_87=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value176=xsprintf("Value"))),info));
            (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_88=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 321, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_88,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 322, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_87))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_88,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 323, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_84,info)))));
            exp_89=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value187=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_87),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_88),((void*)0),0,((void*)0),(_Bool)0,info,(_Bool)0));
            (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj56=exp_89,
            exp_89=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_89,info));
            (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            Value_90=node_compile(exp_89,info);
            if(            !Value_90) {
                __result_obj__65 = (_Bool)0;
                ((value_node_87) ? value_node_87 = come_decrement_ref_count(value_node_87, ((struct sNode*)value_node_87)->finalize, ((struct sNode*)value_node_87)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_88,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((exp_89) ? exp_89 = come_decrement_ref_count(exp_89, ((struct sNode*)exp_89)->finalize, ((struct sNode*)exp_89)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_80,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__65;
            }
            else {
            }
            ((value_node_87) ? value_node_87 = come_decrement_ref_count(value_node_87, ((struct sNode*)value_node_87)->finalize, ((struct sNode*)value_node_87)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_88,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((exp_89) ? exp_89 = come_decrement_ref_count(exp_89, ((struct sNode*)exp_89)->finalize, ((struct sNode*)exp_89)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_91=node_compile(it_86,info);
            if(            !Value_91) {
                __result_obj__66 = (_Bool)0;
                /*c*/ come_call_finalizer3(params_80,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__66;
            }
            else {
            }
        }
        come_value_92=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        list_element_type_83) {
            check_assign_type(((char*)(__right_value191=xsprintf("invalid list element type"))),list_element_type_83,come_value_92->type,come_value_92,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(params_80,(struct CVALUE*)come_increment_ref_count(come_value_92));
        __dec_obj57=list_element_type_83,
        list_element_type_83=(struct sType*)come_increment_ref_count(sType_clone(come_value_92->type));
        /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_84++;
        /*c*/ come_call_finalizer3(come_value_92,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_values_93=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_83));
    list$1sNode$ph_push_back(type_values_93->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(params_80),info)));
    type_values_93->mHeap=(_Bool)0;
    static int list_value_num_97=0;
    var_name_98=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_97));
    add_variable_to_table(var_name_98,(struct sType*)come_increment_ref_count(sType_clone(type_values_93)),info,(_Bool)0,(_Bool)0);
    var__99=get_variable_from_table(info->lv_table,var_name_98);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value200=make_define_var(type_values_93,var__99->mCValueName,(_Bool)0,info))));
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 363, "struct buffer*"))));
    buffer_append_str(source_100,"(");
    i_101=0;
    for(    o2_saved_102=(struct list$1CVALUE$ph*)come_increment_ref_count((params_80)),it_105=list$1CVALUE$ph_begin((o2_saved_102));    !list$1CVALUE$ph_end((o2_saved_102));    it_105=list$1CVALUE$ph_next((o2_saved_102))    ){
        if(        list_element_type_83->mHeap) {
            buffer_append_format(source_100,"%s[%d]=%s,\n",var__99->mCValueName,i_101,((struct CVALUE*)(__right_value203=list$1CVALUE$ph_operator_load_element(params_80,i_101)))->c_value);
            /*c*/ come_call_finalizer3(__right_value203,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_format(source_100,"%s[%d]=%s,\n",var__99->mCValueName,i_101,((struct CVALUE*)(__right_value204=list$1CVALUE$ph_operator_load_element(params_80,i_101)))->c_value);
            /*c*/ come_call_finalizer3(__right_value204,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        i_101++;
    }
    /*c*/ come_call_finalizer3(o2_saved_102,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list_type_114=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 383, "struct sType*")),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info));
    list$1sType$ph_push_back(list_type_114->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value211=sType_clone(list_element_type_83))))));
    /*c*/ come_call_finalizer3(__right_value211,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_118=(struct sType*)come_increment_ref_count(sType_clone(list_type_114));
    fun_name_119="initialize_with_values";
    multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value214=make_generics_function(obj_type_118,(char*)come_increment_ref_count(__builtin_string(fun_name_119)),info,(_Bool)1)));
    name_120=(char*)come_increment_ref_count(multiple_assign_var2->v1);
    generics_fun_121=multiple_assign_var2->v2;
    /*c*/ come_call_finalizer3(__right_value214,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_122=(char*)come_increment_ref_count(name_120);
    fun_123=((struct sFun*)(__right_value215=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_122,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value215,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_123==((void*)0)) {
        __dec_obj64=generics_fun_name_122,
        generics_fun_name_122=(char*)come_increment_ref_count(create_method_name(obj_type_118,(_Bool)0,((char*)(__right_value216=__builtin_string(fun_name_119))),info,(_Bool)1));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_123=((struct sFun*)(__right_value218=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_122,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value218,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_123==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value219=err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name_122,info->come_fun->mName)));
            /*c*/ come_call_finalizer3(__right_value219,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_type_126=(struct sType*)come_increment_ref_count(sType_clone(fun_123->mResultType));
    result_type_126->mStatic=(_Bool)0;
    type_127=list_type_114;
    obj_value_128=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 409, "struct CVALUE*"))));
    num_string_129=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 411, "struct buffer*"))));
    buffer_append_str(num_string_129,"1");
    type2_130=(struct sType*)come_increment_ref_count(solve_generics(type_127,type_127,info));
    type_name_131=(char*)come_increment_ref_count(make_type_name_string(type2_130,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_132=(struct sType*)come_increment_ref_count(type2_130);
    any_type_132->mPointerNum=1;
    any_type_132->mHeap=(_Bool)1;
    multiple_assign_var3=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value227=create_vtable((struct sType*)come_increment_ref_count(any_type_132),info)));
    finalizer_name_133=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    cloner_name_134=(char*)come_increment_ref_count(multiple_assign_var3->v2);
    get_hash_key_name_135=(char*)come_increment_ref_count(multiple_assign_var3->v3);
    equaler_name_136=(char*)come_increment_ref_count(multiple_assign_var3->v4);
    /*c*/ come_call_finalizer3(__right_value227,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional3=(((struct sFun*)(__right_value228=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value228,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        __dec_obj65=obj_value_128->c_value,
        obj_value_128->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_131,type_name_131,((char*)(__right_value229=buffer_to_string(num_string_129))),info->sname,info->sline,type_name_131));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj66=obj_value_128->c_value,
        obj_value_128->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_131,type_name_131,((char*)(__right_value231=buffer_to_string(num_string_129))),info->sname,info->sline,type_name_131));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_137=(struct sType*)come_increment_ref_count(sType_clone(type2_130));
    type3_137->mPointerNum++;
    type3_137->mHeap=(_Bool)1;
    type2_130->mHeap=(_Bool)1;
    __dec_obj67=obj_value_128->type,
    obj_value_128->type=(struct sType*)come_increment_ref_count(sType_clone(type2_130));
    /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_128->type->mPointerNum++;
    obj_value_128->var=((void*)0);
    append_object_to_right_values2(obj_value_128,(struct sType*)come_increment_ref_count(type3_137),info,(_Bool)0,((void*)0),((void*)0));
    come_params_138=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 442, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional4=(((struct sType*)(__right_value237=list$1sType$ph_operator_load_element(fun_123->mParamTypes,0)))->mHeap&&obj_value_128->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value237,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)(__right_value238=list$1sType$ph_operator_load_element(fun_123->mParamTypes,0))),obj_value_128->type,obj_value_128,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value238,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_138,(struct CVALUE*)come_increment_ref_count(obj_value_128));
    come_value2_145=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 449, "struct CVALUE*"))));
    __dec_obj68=come_value2_145->c_value,
    come_value2_145->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params_80)));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj69=come_value2_145->type,
    come_value2_145->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_145->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_138,(struct CVALUE*)come_increment_ref_count(come_value2_145));
    come_value3_146=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 457, "struct CVALUE*"))));
    __dec_obj70=come_value3_146->c_value,
    come_value3_146->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__99->mCValueName));
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj71=come_value3_146->type,
    come_value3_146->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_146->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_138,(struct CVALUE*)come_increment_ref_count(come_value3_146));
    buffer_append_str(source_100,generics_fun_name_122);
    buffer_append_str(source_100,"(");
    j_147=0;
    for(    o2_saved_148=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_138)),it_149=list$1CVALUE$ph_begin((o2_saved_148));    !list$1CVALUE$ph_end((o2_saved_148));    it_149=list$1CVALUE$ph_next((o2_saved_148))    ){
        buffer_append_str(source_100,it_149->c_value);
        if(        j_147!=list$1CVALUE$ph_length(come_params_138)-1) {
            buffer_append_str(source_100,",");
        }
        j_147++;
    }
    /*c*/ come_call_finalizer3(o2_saved_148,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_100,")");
    buffer_append_str(source_100,")");
    come_value4_150=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 483, "struct CVALUE*"))));
    __dec_obj72=come_value4_150->c_value,
    come_value4_150->c_value=(char*)come_increment_ref_count(buffer_to_string(source_100));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj73=come_value4_150->type,
    come_value4_150->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_126));
    /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_150->type->mStatic=(_Bool)0;
    come_value4_150->var=((void*)0);
    if(    result_type_126->mHeap) {
        append_object_to_right_values2(come_value4_150,(struct sType*)come_increment_ref_count(result_type_126),info,(_Bool)0,((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_150));
    add_come_last_code(info,"%s",come_value4_150->c_value);
    __result_obj__87 = (_Bool)1;
    /*c*/ come_call_finalizer3(params_80,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_element_type_83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_values_93,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_98 = come_decrement_ref_count(var_name_98, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_100,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_type_114,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_118,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_120 = come_decrement_ref_count(name_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_122 = come_decrement_ref_count(generics_fun_name_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_126,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_128,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_129,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_130,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_131 = come_decrement_ref_count(type_name_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_132,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_133 = come_decrement_ref_count(finalizer_name_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_134 = come_decrement_ref_count(cloner_name_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_135 = come_decrement_ref_count(get_hash_key_name_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_136 = come_decrement_ref_count(equaler_name_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_137,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_138,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_145,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_146,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_150,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__87;
}

static void sListNode_finalize(struct sListNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->list_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__64;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__64 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__64,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__64;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_81;
struct list_item$1CVALUE$ph* prev_it_82;
    it_81=self->head;
    while(    it_81!=((void*)0)) {
        prev_it_82=it_81;
        it_81=it_81->next;
        /*c*/ come_call_finalizer3(prev_it_82,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value194 = (void*)0;
struct list_item$1sNode$ph* litem_94;
struct sNode* __dec_obj58;
void* __right_value195 = (void*)0;
struct list_item$1sNode$ph* litem_95;
struct sNode* __dec_obj59;
void* __right_value196 = (void*)0;
struct list_item$1sNode$ph* litem_96;
struct sNode* __dec_obj60;
struct list$1sNode$ph* __result_obj__67;
    if(    self->len==0) {
        litem_94=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value194=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_94->prev=((void*)0);
        litem_94->next=((void*)0);
        __dec_obj58=litem_94->item,
        litem_94->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_94;
        self->head=litem_94;
    }
    else if(    self->len==1) {
        litem_95=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value195=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_95->prev=self->head;
        litem_95->next=((void*)0);
        __dec_obj59=litem_95->item,
        litem_95->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_95;
        self->head->next=litem_95;
    }
    else {
        litem_96=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value196=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_96->prev=self->tail;
        litem_96->next=((void*)0);
        __dec_obj60=litem_96->item,
        litem_96->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_96;
        self->tail=litem_96;
    }
    self->len++;
    __result_obj__67 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__67;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_103;
struct CVALUE* __result_obj__68;
struct CVALUE* __result_obj__69;
struct CVALUE* result_104;
struct CVALUE* __result_obj__70;
result_103 = (void*)0;
result_104 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_103,0,sizeof(struct CVALUE*));
        __result_obj__68 = result_103;
        return __result_obj__68;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__69 = self->it->item;
        return __result_obj__69;
    }
    memset(&result_104,0,sizeof(struct CVALUE*));
    __result_obj__70 = result_104;
    return __result_obj__70;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_106;
struct CVALUE* __result_obj__71;
struct CVALUE* __result_obj__72;
struct CVALUE* result_107;
struct CVALUE* __result_obj__73;
result_106 = (void*)0;
result_107 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_106,0,sizeof(struct CVALUE*));
        __result_obj__71 = result_106;
        return __result_obj__71;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__72 = self->it->item;
        return __result_obj__72;
    }
    memset(&result_107,0,sizeof(struct CVALUE*));
    __result_obj__73 = result_107;
    return __result_obj__73;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_108;
int i_109;
struct CVALUE* __result_obj__74;
struct CVALUE* default_value_110;
struct CVALUE* __result_obj__75;
default_value_110 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_108=self->head;
    i_109=0;
    while(    it_108!=((void*)0)) {
        if(        position==i_109) {
            __result_obj__74 = (struct CVALUE*)come_increment_ref_count(it_108->item);
            /*c*/ come_call_finalizer3(__result_obj__74,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__74;
        }
        it_108=it_108->next;
        i_109++;
    }
    memset(&default_value_110,0,sizeof(struct CVALUE*));
    __result_obj__75 = (struct CVALUE*)come_increment_ref_count(default_value_110);
    /*c*/ come_call_finalizer3(default_value_110,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__75,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__75;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_111;
int i_112;
struct CVALUE* __result_obj__76;
struct CVALUE* default_value_113;
struct CVALUE* __result_obj__77;
default_value_113 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_111=self->head;
    i_112=0;
    while(    it_111!=((void*)0)) {
        if(        position==i_112) {
            __result_obj__76 = (struct CVALUE*)come_increment_ref_count(it_111->item);
            /*c*/ come_call_finalizer3(__result_obj__76,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__76;
        }
        it_111=it_111->next;
        i_112++;
    }
    memset(&default_value_113,0,sizeof(struct CVALUE*));
    __result_obj__77 = (struct CVALUE*)come_increment_ref_count(default_value_113);
    /*c*/ come_call_finalizer3(default_value_113,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value208 = (void*)0;
struct list_item$1sType$ph* litem_115;
struct sType* __dec_obj61;
void* __right_value209 = (void*)0;
struct list_item$1sType$ph* litem_116;
struct sType* __dec_obj62;
void* __right_value210 = (void*)0;
struct list_item$1sType$ph* litem_117;
struct sType* __dec_obj63;
struct list$1sType$ph* __result_obj__78;
    if(    self->len==0) {
        litem_115=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value208=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_115->prev=((void*)0);
        litem_115->next=((void*)0);
        __dec_obj61=litem_115->item,
        litem_115->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_115;
        self->head=litem_115;
    }
    else if(    self->len==1) {
        litem_116=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value209=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_116->prev=self->head;
        litem_116->next=((void*)0);
        __dec_obj62=litem_116->item,
        litem_116->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_116;
        self->head->next=litem_116;
    }
    else {
        litem_117=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value210=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_117->prev=self->tail;
        litem_117->next=((void*)0);
        __dec_obj63=litem_117->item,
        litem_117->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_117;
        self->tail=litem_117;
    }
    self->len++;
    __result_obj__78 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_124;
unsigned int it_125;
struct sFun* __result_obj__79;
struct sFun* __result_obj__80;
struct sFun* __result_obj__81;
struct sFun* __result_obj__82;
    hash_124=string_get_hash_key(((char*)key))%self->size;
    it_125=hash_124;
    while(    (_Bool)1) {
        if(        self->item_existance[it_125]) {
            if(            string_equals(self->keys[it_125],key)) {
                __result_obj__79 = (struct sFun*)come_increment_ref_count(self->items[it_125]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__79,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__79;
            }
            it_125++;
            if(            it_125>=self->size) {
                it_125=0;
            }
            else if(            it_125==hash_124) {
                __result_obj__80 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__80,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__80;
            }
        }
        else {
            __result_obj__81 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__81,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__81;
        }
    }
    __result_obj__82 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_139;
int i_140;
struct sType* __result_obj__83;
struct sType* default_value_141;
struct sType* __result_obj__84;
default_value_141 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_139=self->head;
    i_140=0;
    while(    it_139!=((void*)0)) {
        if(        position==i_140) {
            __result_obj__83 = (struct sType*)come_increment_ref_count(it_139->item);
            /*c*/ come_call_finalizer3(__result_obj__83,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__83;
        }
        it_139=it_139->next;
        i_140++;
    }
    memset(&default_value_141,0,sizeof(struct sType*));
    __result_obj__84 = (struct sType*)come_increment_ref_count(default_value_141);
    /*c*/ come_call_finalizer3(default_value_141,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__84;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_142;
int i_143;
struct sType* __result_obj__85;
struct sType* default_value_144;
struct sType* __result_obj__86;
default_value_144 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_142=self->head;
    i_143=0;
    while(    it_142!=((void*)0)) {
        if(        position==i_143) {
            __result_obj__85 = (struct sType*)come_increment_ref_count(it_142->item);
            /*c*/ come_call_finalizer3(__result_obj__85,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__85;
        }
        it_142=it_142->next;
        i_143++;
    }
    memset(&default_value_144,0,sizeof(struct sType*));
    __result_obj__86 = (struct sType*)come_increment_ref_count(default_value_144);
    /*c*/ come_call_finalizer3(default_value_144,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__86,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__86;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value249 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj74;
struct sTupleNode* __result_obj__88;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value249,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj74=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj74,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__88 = (struct sTupleNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value250 = (void*)0;
char* __result_obj__89;
    __result_obj__89 = (char*)come_increment_ref_count(((char*)(__right_value250=__builtin_string("sTupleNode"))));
    (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__89;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_153;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1sType$ph* tuple_types_154;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct list$1CVALUE$ph* tuple_values_155;
int n_156;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_157;
struct tuple2$2char$phsNode$ph* it_160;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* name_163=0;
struct sNode* node_164=0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
_Bool _if_conditional5;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sNode* value_node_165;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct sNode* exp_166;
_Bool Value_167;
_Bool __result_obj__96;
_Bool Value_168;
_Bool __result_obj__97;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_169;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* type_171;
char* __dec_obj79;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* type_172;
struct list$1sType$ph* o2_saved_173;
struct sType* it_176;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct CVALUE* obj_value_179;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct buffer* num_string_180;
void* __right_value277 = (void*)0;
struct sType* type2_181;
void* __right_value278 = (void*)0;
char* type_name_182;
struct sType* any_type_183;
void* __right_value279 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var5 = (void*)0;
char* finalizer_name_184=0;
char* cloner_name_185=0;
char* get_hash_key_name_186=0;
char* equaler_name_187=0;
void* __right_value280 = (void*)0;
_Bool _if_conditional6;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
char* __dec_obj80;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
char* __dec_obj81;
void* __right_value285 = (void*)0;
struct sType* type3_188;
void* __right_value286 = (void*)0;
struct sType* __dec_obj82;
void* __right_value287 = (void*)0;
struct sType* obj_type_189;
char* fun_name_190;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_191=0;
struct sGenericsFun* generics_fun_192=0;
char* generics_fun_name_193;
void* __right_value290 = (void*)0;
struct sFun* fun_194;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
char* __dec_obj83;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* result_type_195;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1CVALUE$ph* come_params_196;
void* __right_value298 = (void*)0;
_Bool _if_conditional7;
void* __right_value299 = (void*)0;
int i_197;
struct list$1CVALUE$ph* o2_saved_198;
struct CVALUE* it_199;
void* __right_value300 = (void*)0;
struct CVALUE* come_value_200;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
_Bool _if_conditional8;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct buffer* buf_201;
int j_202;
struct list$1CVALUE$ph* o2_saved_203;
struct CVALUE* it_204;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct CVALUE* come_value2_205;
void* __right_value308 = (void*)0;
char* __dec_obj84;
void* __right_value309 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__106;
    tuple_elements_153=self->tuple_elements;
    tuple_types_154=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 520, "struct list$1sType$ph*"))));
    tuple_values_155=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 521, "struct list$1CVALUE$ph*"))));
    n_156=0;
    for(    o2_saved_157=(tuple_elements_153),it_160=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_157));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_157));    it_160=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_157))    ){
        multiple_assign_var4=it_160;
        name_163=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        node_164=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value256=node_164->kind(node_164->_protocol_obj))),"sWildCard"))),        (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            value_node_165=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value257=xsprintf("Value"))),info));
            (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_166=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_165),(char*)come_increment_ref_count(xsprintf("v%d",n_156+1)),info));
            Value_167=node_compile(exp_166,info);
            if(            !Value_167) {
                __result_obj__96 = (_Bool)0;
                ((value_node_165) ? value_node_165 = come_decrement_ref_count(value_node_165, ((struct sNode*)value_node_165)->finalize, ((struct sNode*)value_node_165)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_166) ? exp_166 = come_decrement_ref_count(exp_166, ((struct sNode*)exp_166)->finalize, ((struct sNode*)exp_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (name_163 = come_decrement_ref_count(name_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_164) ? node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_154,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_155,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__96;
            }
            else {
            }
            ((value_node_165) ? value_node_165 = come_decrement_ref_count(value_node_165, ((struct sNode*)value_node_165)->finalize, ((struct sNode*)value_node_165)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_166) ? exp_166 = come_decrement_ref_count(exp_166, ((struct sNode*)exp_166)->finalize, ((struct sNode*)exp_166)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_168=node_compile(node_164,info);
            if(            !Value_168) {
                __result_obj__97 = (_Bool)0;
                (name_163 = come_decrement_ref_count(name_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_164) ? node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_154,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_155,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__97;
            }
            else {
            }
        }
        come_value_169=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_155,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_169)));
        type_171=(struct sType*)come_increment_ref_count(sType_clone(come_value_169->type));
        __dec_obj79=type_171->mTupleName,
        type_171->mTupleName=(char*)come_increment_ref_count(name_163);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        list$1sType$ph_push_back(tuple_types_154,(struct sType*)come_increment_ref_count(type_171));
        n_156++;
        (name_163 = come_decrement_ref_count(name_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_164) ? node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_169,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_171,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_172=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 550, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_154))),(_Bool)0,info));
    for(    o2_saved_173=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_154)),it_176=list$1sType$ph_begin((o2_saved_173));    !list$1sType$ph_end((o2_saved_173));    it_176=list$1sType$ph_next((o2_saved_173))    ){
        list$1sType$ph_push_back(type_172->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value272=sType_clone(it_176))))));
        /*c*/ come_call_finalizer3(__right_value272,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_173,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_179=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 556, "struct CVALUE*"))));
    num_string_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 558, "struct buffer*"))));
    buffer_append_str(num_string_180,"1");
    type2_181=(struct sType*)come_increment_ref_count(solve_generics(type_172,type_172,info));
    type_name_182=(char*)come_increment_ref_count(make_type_name_string(type2_181,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_183=(struct sType*)come_increment_ref_count(type2_181);
    any_type_183->mPointerNum=1;
    any_type_183->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value279=create_vtable((struct sType*)come_increment_ref_count(any_type_183),info)));
    finalizer_name_184=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_185=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_186=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_187=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    /*c*/ come_call_finalizer3(__right_value279,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional6=(((struct sFun*)(__right_value280=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value280,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional6) {
        __dec_obj80=obj_value_179->c_value,
        obj_value_179->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_182,type_name_182,((char*)(__right_value281=buffer_to_string(num_string_180))),info->sname,info->sline,type_name_182));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj81=obj_value_179->c_value,
        obj_value_179->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_182,type_name_182,((char*)(__right_value283=buffer_to_string(num_string_180))),info->sname,info->sline,type_name_182));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_188=(struct sType*)come_increment_ref_count(sType_clone(type2_181));
    type3_188->mPointerNum++;
    type3_188->mHeap=(_Bool)1;
    type2_181->mHeap=(_Bool)1;
    __dec_obj82=obj_value_179->type,
    obj_value_179->type=(struct sType*)come_increment_ref_count(sType_clone(type2_181));
    /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_179->type->mPointerNum++;
    obj_value_179->var=((void*)0);
    append_object_to_right_values2(obj_value_179,(struct sType*)come_increment_ref_count(type3_188),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_189=(struct sType*)come_increment_ref_count(sType_clone(type2_181));
    fun_name_190="initialize";
    multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value289=make_generics_function(obj_type_189,(char*)come_increment_ref_count(__builtin_string(fun_name_190)),info,(_Bool)1)));
    name_191=(char*)come_increment_ref_count(multiple_assign_var6->v1);
    generics_fun_192=multiple_assign_var6->v2;
    /*c*/ come_call_finalizer3(__right_value289,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_193=(char*)come_increment_ref_count(name_191);
    fun_194=((struct sFun*)(__right_value290=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_193,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value290,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_194==((void*)0)) {
        __dec_obj83=generics_fun_name_193,
        generics_fun_name_193=(char*)come_increment_ref_count(create_method_name(obj_type_189,(_Bool)0,((char*)(__right_value291=__builtin_string(fun_name_190))),info,(_Bool)1));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_194=((struct sFun*)(__right_value293=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_193,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value293,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_194==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value294=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_193,info->come_fun->mName)));
            /*c*/ come_call_finalizer3(__right_value294,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_type_195=(struct sType*)come_increment_ref_count(sType_clone(fun_194->mResultType));
    result_type_195->mStatic=(_Bool)0;
    come_params_196=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 610, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional7=(((struct sType*)(__right_value298=list$1sType$ph_operator_load_element(fun_194->mParamTypes,0)))->mHeap&&obj_value_179->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value298,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional7) {
        std_move(((struct sType*)(__right_value299=list$1sType$ph_operator_load_element(fun_194->mParamTypes,0))),obj_value_179->type,obj_value_179,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value299,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_196,(struct CVALUE*)come_increment_ref_count(obj_value_179));
    i_197=1;
    for(    o2_saved_198=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_155)),it_199=list$1CVALUE$ph_begin((o2_saved_198));    !list$1CVALUE$ph_end((o2_saved_198));    it_199=list$1CVALUE$ph_next((o2_saved_198))    ){
        come_value_200=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_199));
        if(        (_if_conditional8=(((struct sType*)(__right_value301=list$1sType$ph_operator_load_element(fun_194->mParamTypes,i_197)))&&((struct sType*)(__right_value302=list$1sType$ph_operator_load_element(fun_194->mParamTypes,i_197)))->mHeap&&come_value_200->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value301,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value302,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional8) {
            std_move(((struct sType*)(__right_value303=list$1sType$ph_operator_load_element(fun_194->mParamTypes,i_197))),come_value_200->type,come_value_200,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value303,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_196,(struct CVALUE*)come_increment_ref_count(come_value_200));
        i_197++;
        /*c*/ come_call_finalizer3(come_value_200,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_198,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_201=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 629, "struct buffer*"))));
    buffer_append_str(buf_201,generics_fun_name_193);
    buffer_append_str(buf_201,"(");
    j_202=0;
    for(    o2_saved_203=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_196)),it_204=list$1CVALUE$ph_begin((o2_saved_203));    !list$1CVALUE$ph_end((o2_saved_203));    it_204=list$1CVALUE$ph_next((o2_saved_203))    ){
        buffer_append_str(buf_201,it_204->c_value);
        if(        j_202!=list$1CVALUE$ph_length(come_params_196)-1) {
            buffer_append_str(buf_201,",");
        }
        j_202++;
    }
    /*c*/ come_call_finalizer3(o2_saved_203,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_201,")");
    come_value2_205=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 646, "struct CVALUE*"))));
    __dec_obj84=come_value2_205->c_value,
    come_value2_205->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_201));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj85=come_value2_205->type,
    come_value2_205->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_195));
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_205->type->mStatic=(_Bool)0;
    come_value2_205->var=((void*)0);
    if(    result_type_195->mHeap) {
        append_object_to_right_values2(come_value2_205,(struct sType*)come_increment_ref_count(result_type_195),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_205->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_205));
    __result_obj__106 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_154,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_155,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_172,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_179,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_180,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_181,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_182 = come_decrement_ref_count(type_name_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_183,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_184 = come_decrement_ref_count(finalizer_name_184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_185 = come_decrement_ref_count(cloner_name_185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_186 = come_decrement_ref_count(get_hash_key_name_186, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_187 = come_decrement_ref_count(equaler_name_187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_188,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_189,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_191 = come_decrement_ref_count(name_191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_193 = come_decrement_ref_count(generics_fun_name_193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_195,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_196,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_201,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_205,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__106;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_151;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_152;
    it_151=self->head;
    while(    it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*c*/ come_call_finalizer3(prev_it_152,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_158;
struct tuple2$2char$phsNode$ph* __result_obj__90;
struct tuple2$2char$phsNode$ph* __result_obj__91;
struct tuple2$2char$phsNode$ph* result_159;
struct tuple2$2char$phsNode$ph* __result_obj__92;
result_158 = (void*)0;
result_159 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_158,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__90 = result_158;
        return __result_obj__90;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_159,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__92 = result_159;
    return __result_obj__92;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_161;
struct tuple2$2char$phsNode$ph* __result_obj__93;
struct tuple2$2char$phsNode$ph* __result_obj__94;
struct tuple2$2char$phsNode$ph* result_162;
struct tuple2$2char$phsNode$ph* __result_obj__95;
result_161 = (void*)0;
result_162 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_161,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__93 = result_161;
        return __result_obj__93;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__94 = self->it->item;
        return __result_obj__94;
    }
    memset(&result_162,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__95 = result_162;
    return __result_obj__95;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__98;
void* __right_value262 = (void*)0;
struct CVALUE* result_170;
void* __right_value263 = (void*)0;
char* __dec_obj75;
void* __right_value264 = (void*)0;
struct sType* __dec_obj76;
void* __right_value265 = (void*)0;
char* __dec_obj77;
void* __right_value266 = (void*)0;
char* __dec_obj78;
struct CVALUE* __result_obj__99;
    if(    self==(void*)0) {
        __result_obj__98 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__98,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__98;
    }
    result_170=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj75=result_170->c_value,
        result_170->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj76=result_170->type,
        result_170->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_170->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_170->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj77=result_170->c_value_without_right_value_objects,
        result_170->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj78=result_170->c_value_without_cast_object_value,
        result_170->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__99 = (struct CVALUE*)come_increment_ref_count(result_170);
    /*c*/ come_call_finalizer3(result_170,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__99,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__99;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_174;
struct sType* __result_obj__100;
struct sType* __result_obj__101;
struct sType* result_175;
struct sType* __result_obj__102;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_174,0,sizeof(struct sType*));
        __result_obj__100 = result_174;
        return __result_obj__100;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__101 = self->it->item;
        return __result_obj__101;
    }
    memset(&result_175,0,sizeof(struct sType*));
    __result_obj__102 = result_175;
    return __result_obj__102;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_177;
struct sType* __result_obj__103;
struct sType* __result_obj__104;
struct sType* result_178;
struct sType* __result_obj__105;
result_177 = (void*)0;
result_178 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_177,0,sizeof(struct sType*));
        __result_obj__103 = result_177;
        return __result_obj__103;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__104 = self->it->item;
        return __result_obj__104;
    }
    memset(&result_178,0,sizeof(struct sType*));
    __result_obj__105 = result_178;
    return __result_obj__105;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value310 = (void*)0;
struct list$1sNode$ph* __dec_obj86;
struct sSomeNode* __result_obj__107;
    ((struct sNodeBase*)(__right_value310=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value310,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj86=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj86,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__107 = (struct sSomeNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__107,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__107;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __right_value311 = (void*)0;
char* __result_obj__108;
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value311=__builtin_string("sSomeNode"))));
    (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__108;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_206;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1sType$ph* tuple_types_207;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1CVALUE$ph* tuple_values_208;
struct list$1sNode$ph* o2_saved_209;
struct sNode* it_210;
_Bool Value_211;
_Bool __result_obj__109;
void* __right_value316 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* type_213;
struct list$1sType$ph* o2_saved_214;
struct sType* it_215;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* obj_value_216;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct buffer* num_string_217;
void* __right_value327 = (void*)0;
struct sType* type2_218;
void* __right_value328 = (void*)0;
char* type_name_219;
void* __right_value329 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var7 = (void*)0;
char* finalizer_name_220=0;
char* cloner_name_221=0;
char* get_hash_key_name_222=0;
char* equaler_name_223=0;
void* __right_value330 = (void*)0;
_Bool _if_conditional9;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* __dec_obj87;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj88;
void* __right_value335 = (void*)0;
struct sType* type3_224;
void* __right_value336 = (void*)0;
struct sType* __dec_obj89;
void* __right_value337 = (void*)0;
struct sType* obj_type_225;
char* fun_name_226;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_227=0;
struct sGenericsFun* generics_fun_228=0;
char* generics_fun_name_229;
void* __right_value340 = (void*)0;
struct sFun* fun_230;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* __dec_obj90;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sType* result_type_231;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct list$1CVALUE$ph* come_params_232;
void* __right_value348 = (void*)0;
_Bool _if_conditional10;
void* __right_value349 = (void*)0;
int i_233;
struct list$1CVALUE$ph* o2_saved_234;
struct CVALUE* it_235;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_236;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
_Bool _if_conditional11;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct buffer* buf_237;
int j_238;
struct list$1CVALUE$ph* o2_saved_239;
struct CVALUE* it_240;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct CVALUE* come_value2_241;
void* __right_value358 = (void*)0;
char* __dec_obj91;
void* __right_value359 = (void*)0;
struct sType* __dec_obj92;
_Bool __result_obj__110;
    tuple_elements_206=self->tuple_elements;
    tuple_types_207=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 683, "struct list$1sType$ph*"))));
    tuple_values_208=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 684, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_209=(tuple_elements_206),it_210=list$1sNode$ph_begin((o2_saved_209));    !list$1sNode$ph_end((o2_saved_209));    it_210=list$1sNode$ph_next((o2_saved_209))    ){
        Value_211=node_compile(it_210,info);
        if(        !Value_211) {
            __result_obj__109 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_207,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_208,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__109;
        }
        else {
        }
        come_value_212=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_208,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_212)));
        list$1sType$ph_push_back(tuple_types_207,(struct sType*)come_increment_ref_count(sType_clone(come_value_212->type)));
        /*c*/ come_call_finalizer3(come_value_212,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_213=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 697, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_207))),(_Bool)0,info));
    for(    o2_saved_214=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_207)),it_215=list$1sType$ph_begin((o2_saved_214));    !list$1sType$ph_end((o2_saved_214));    it_215=list$1sType$ph_next((o2_saved_214))    ){
        list$1sType$ph_push_back(type_213->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value322=sType_clone(it_215))))));
        /*c*/ come_call_finalizer3(__right_value322,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_214,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_216=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 703, "struct CVALUE*"))));
    num_string_217=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 705, "struct buffer*"))));
    buffer_append_str(num_string_217,"1");
    type2_218=(struct sType*)come_increment_ref_count(solve_generics(type_213,type_213,info));
    type_name_219=(char*)come_increment_ref_count(make_type_name_string(type2_218,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var7=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value329=create_vtable((struct sType*)come_increment_ref_count(type2_218),info)));
    finalizer_name_220=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_221=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_222=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_223=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    /*c*/ come_call_finalizer3(__right_value329,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional9=(((struct sFun*)(__right_value330=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value330,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional9) {
        __dec_obj87=obj_value_216->c_value,
        obj_value_216->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_219,type_name_219,((char*)(__right_value331=buffer_to_string(num_string_217))),info->sname,info->sline,type_name_219));
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj88=obj_value_216->c_value,
        obj_value_216->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_219,type_name_219,((char*)(__right_value333=buffer_to_string(num_string_217))),info->sname,info->sline,type_name_219));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_224=(struct sType*)come_increment_ref_count(sType_clone(type2_218));
    type3_224->mPointerNum++;
    type3_224->mHeap=(_Bool)1;
    type2_218->mHeap=(_Bool)1;
    __dec_obj89=obj_value_216->type,
    obj_value_216->type=(struct sType*)come_increment_ref_count(sType_clone(type2_218));
    /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_216->type->mPointerNum++;
    obj_value_216->var=((void*)0);
    append_object_to_right_values2(obj_value_216,(struct sType*)come_increment_ref_count(type3_224),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_225=(struct sType*)come_increment_ref_count(sType_clone(type2_218));
    fun_name_226="initialize";
    multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value339=make_generics_function(obj_type_225,(char*)come_increment_ref_count(__builtin_string(fun_name_226)),info,(_Bool)1)));
    name_227=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_228=multiple_assign_var8->v2;
    /*c*/ come_call_finalizer3(__right_value339,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_229=(char*)come_increment_ref_count(name_227);
    fun_230=((struct sFun*)(__right_value340=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_229,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value340,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_230==((void*)0)) {
        __dec_obj90=generics_fun_name_229,
        generics_fun_name_229=(char*)come_increment_ref_count(create_method_name(obj_type_225,(_Bool)0,((char*)(__right_value341=__builtin_string(fun_name_226))),info,(_Bool)1));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_230=((struct sFun*)(__right_value343=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_229,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value343,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_230==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value344=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_229,info->come_fun->mName)));
            /*c*/ come_call_finalizer3(__right_value344,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_type_231=(struct sType*)come_increment_ref_count(sType_clone(fun_230->mResultType));
    result_type_231->mStatic=(_Bool)0;
    come_params_232=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 753, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional10=(((struct sType*)(__right_value348=list$1sType$ph_operator_load_element(fun_230->mParamTypes,0)))->mHeap&&obj_value_216->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value348,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)(__right_value349=list$1sType$ph_operator_load_element(fun_230->mParamTypes,0))),obj_value_216->type,obj_value_216,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value349,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_232,(struct CVALUE*)come_increment_ref_count(obj_value_216));
    i_233=1;
    for(    o2_saved_234=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_208)),it_235=list$1CVALUE$ph_begin((o2_saved_234));    !list$1CVALUE$ph_end((o2_saved_234));    it_235=list$1CVALUE$ph_next((o2_saved_234))    ){
        come_value_236=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_235));
        if(        (_if_conditional11=(((struct sType*)(__right_value351=list$1sType$ph_operator_load_element(fun_230->mParamTypes,i_233)))&&((struct sType*)(__right_value352=list$1sType$ph_operator_load_element(fun_230->mParamTypes,i_233)))->mHeap&&come_value_236->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value351,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value352,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)(__right_value353=list$1sType$ph_operator_load_element(fun_230->mParamTypes,i_233))),come_value_236->type,come_value_236,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value353,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_232,(struct CVALUE*)come_increment_ref_count(come_value_236));
        i_233++;
        /*c*/ come_call_finalizer3(come_value_236,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_234,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_237=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 772, "struct buffer*"))));
    buffer_append_str(buf_237,generics_fun_name_229);
    buffer_append_str(buf_237,"(");
    j_238=0;
    for(    o2_saved_239=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_232)),it_240=list$1CVALUE$ph_begin((o2_saved_239));    !list$1CVALUE$ph_end((o2_saved_239));    it_240=list$1CVALUE$ph_next((o2_saved_239))    ){
        buffer_append_str(buf_237,it_240->c_value);
        if(        j_238!=list$1CVALUE$ph_length(come_params_232)-1) {
            buffer_append_str(buf_237,",");
        }
        j_238++;
    }
    /*c*/ come_call_finalizer3(o2_saved_239,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_237,")");
    come_value2_241=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 789, "struct CVALUE*"))));
    __dec_obj91=come_value2_241->c_value,
    come_value2_241->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_237));
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj92=come_value2_241->type,
    come_value2_241->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_231));
    /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_241->type->mStatic=(_Bool)0;
    come_value2_241->var=((void*)0);
    if(    result_type_231->mHeap) {
        append_object_to_right_values2(come_value2_241,(struct sType*)come_increment_ref_count(result_type_231),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_241->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_241));
    __result_obj__110 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_207,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_208,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_213,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_216,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_217,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_218,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_219 = come_decrement_ref_count(type_name_219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_220 = come_decrement_ref_count(finalizer_name_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_221 = come_decrement_ref_count(cloner_name_221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_222 = come_decrement_ref_count(get_hash_key_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_223 = come_decrement_ref_count(equaler_name_223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_224,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_225,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_227 = come_decrement_ref_count(name_227, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_229 = come_decrement_ref_count(generics_fun_name_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_231,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_232,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_237,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_241,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__110;
}

static void sSomeNode_finalize(struct sSomeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value360 = (void*)0;
struct sNullReturnValue* __result_obj__111;
    ((struct sNodeBase*)(__right_value360=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value360,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__111 = (struct sNullReturnValue*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __right_value361 = (void*)0;
char* __result_obj__112;
    __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value361=__builtin_string("sNullReturnValue"))));
    (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__112;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_242;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct buffer* buf_243;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* var_name_245;
void* __right_value368 = (void*)0;
struct sType* result_type_246;
void* __right_value369 = (void*)0;
struct sType* result_type2_247;
struct sType* left_type_248;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct CVALUE* come_value2_249;
char* __dec_obj93;
struct sType* __dec_obj94;
    if(    info->come_fun) {
        come_value_242=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 824, "struct CVALUE*"))));
        buf_243=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 826, "struct buffer*"))));
        static int num_244=0;
        num_244++;
        var_name_245=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value366=int_to_string(num_244)))));
        (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_246=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_247=(struct sType*)come_increment_ref_count(solve_generics(result_type_246,info->generics_type,info));
        left_type_248=(struct sType*)come_increment_ref_count(result_type2_247);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value370=make_define_var(left_type_248,var_name_245,(_Bool)0,info))));
        (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_245,((char*)(__right_value371=make_type_name_string(left_type_248,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_249=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 842, "struct CVALUE*"))));
        __dec_obj93=come_value2_249->c_value,
        come_value2_249->c_value=(char*)come_increment_ref_count(var_name_245);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj94=come_value2_249->type,
        come_value2_249->type=(struct sType*)come_increment_ref_count(result_type2_247);
        /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_249->type->mStatic=(_Bool)0;
        come_value2_249->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_249));
        /*c*/ come_call_finalizer3(come_value_242,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_243,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_245 = come_decrement_ref_count(var_name_245, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_246,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_247,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_248,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_249,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value378 = (void*)0;
struct sNode* __result_obj__115;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 859, "struct sNode");
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value375=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc_v2(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 859, "struct sNullReturnValue*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result_obj__115 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value378=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value375,sNullReturnValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value378) ? __right_value378 = come_decrement_ref_count(__right_value378, ((struct sNode*)__right_value378)->finalize, ((struct sNode*)__right_value378)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__115) ? __result_obj__115 = come_decrement_ref_count(__result_obj__115, ((struct sNode*)__result_obj__115)->finalize, ((struct sNode*)__result_obj__115)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__115;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
struct sNullReturnValue* __result_obj__113;
void* __right_value376 = (void*)0;
struct sNullReturnValue* result_250;
void* __right_value377 = (void*)0;
char* __dec_obj95;
struct sNullReturnValue* __result_obj__114;
    if(    self==(void*)0) {
        __result_obj__113 = (void*)0;
        return __result_obj__113;
    }
    result_250=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc_v2(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*"));
    if(    self!=((void*)0)) {
        result_250->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj95=result_250->sname,
        result_250->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValue_clone", 5, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->sline_real=self->sline_real;
    }
    __result_obj__114 = result_250;
    /*c*/ come_call_finalizer3(result_250,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__114;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value379 = (void*)0;
struct sNullReturnValueOfException* __result_obj__116;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value379,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__116 = (struct sNullReturnValueOfException*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__116,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__116;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __right_value380 = (void*)0;
char* __result_obj__117;
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value380=__builtin_string("sNullReturnValue"))));
    (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__117;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_251;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct buffer* buf_252;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
char* var_name_254;
void* __right_value387 = (void*)0;
struct sType* result_type_255;
void* __right_value388 = (void*)0;
struct sType* result_type2_256;
struct sType* __dec_obj96;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sType* left_type_257;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value2_258;
char* __dec_obj97;
struct sType* __dec_obj98;
    if(    info->come_fun) {
        come_value_251=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 877, "struct CVALUE*"))));
        buf_252=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 879, "struct buffer*"))));
        static int num_253=0;
        num_253++;
        var_name_254=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value385=int_to_string(num_253)))));
        (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_255=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_256=(struct sType*)come_increment_ref_count(solve_generics(result_type_255,info->generics_type,info));
        if(        result_type2_256->mNoSolvedGenericsType) {
            __dec_obj96=result_type2_256,
            result_type2_256=(struct sType*)come_increment_ref_count(result_type2_256->mNoSolvedGenericsType);
            /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_257=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value389=list$1sType$ph_operator_load_element(result_type2_256->mGenericsTypes,0)))));
        /*c*/ come_call_finalizer3(__right_value389,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        left_type_257==((void*)0)&&!result_type2_256->mException) {
            ((struct tuple2$2int$bool$*)(__right_value391=err_msg(info,"function is not exception type")));
            /*c*/ come_call_finalizer3(__right_value391,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value392=make_define_var(left_type_257,var_name_254,(_Bool)0,info))));
        (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_254,((char*)(__right_value393=make_type_name_string(left_type_257,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value393 = come_decrement_ref_count(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_258=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 903, "struct CVALUE*"))));
        __dec_obj97=come_value2_258->c_value,
        come_value2_258->c_value=(char*)come_increment_ref_count(var_name_254);
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj98=come_value2_258->type,
        come_value2_258->type=(struct sType*)come_increment_ref_count(left_type_257);
        /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_258->type->mStatic=(_Bool)0;
        come_value2_258->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_258));
        /*c*/ come_call_finalizer3(come_value_251,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_252,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_254 = come_decrement_ref_count(var_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_255,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_257,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_258,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value400 = (void*)0;
struct sNode* __result_obj__120;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 920, "struct sNode");
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value397=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc_v2(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 920, "struct sNullReturnValueOfException*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result_obj__120 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value400=_inf_value3)));
    /*c*/ come_call_finalizer3(__right_value397,sNullReturnValueOfException_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value400) ? __right_value400 = come_decrement_ref_count(__right_value400, ((struct sNode*)__right_value400)->finalize, ((struct sNode*)__right_value400)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__120;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
struct sNullReturnValueOfException* __result_obj__118;
void* __right_value398 = (void*)0;
struct sNullReturnValueOfException* result_259;
void* __right_value399 = (void*)0;
char* __dec_obj99;
struct sNullReturnValueOfException* __result_obj__119;
    if(    self==(void*)0) {
        __result_obj__118 = (void*)0;
        return __result_obj__118;
    }
    result_259=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc_v2(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*"));
    if(    self!=((void*)0)) {
        result_259->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj99=result_259->sname,
        result_259->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValueOfException_clone", 5, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_259->sline_real=self->sline_real;
    }
    __result_obj__119 = result_259;
    /*c*/ come_call_finalizer3(result_259,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__119;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __right_value401 = (void*)0;
struct sType* __dec_obj100;
struct sNullValue* __result_obj__121;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value401,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj100=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__121 = (struct sNullValue*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__121,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__121;
}

char* sNullValue_kind(struct sNullValue* self){
void* __right_value402 = (void*)0;
char* __result_obj__122;
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value402=__builtin_string("sNullValue"))));
    (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__122;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_260;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct buffer* buf_261;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
char* var_name_263;
struct sType* left_type_264;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value2_265;
char* __dec_obj101;
struct sType* __dec_obj102;
_Bool __result_obj__123;
    come_value_260=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 939, "struct CVALUE*"))));
    buf_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 941, "struct buffer*"))));
    static int num_262=0;
    num_262++;
    var_name_263=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value407=int_to_string(num_262)))));
    (__right_value407 = come_decrement_ref_count(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_264=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value409=make_define_var(left_type_264,var_name_263,(_Bool)0,info))));
    (__right_value409 = come_decrement_ref_count(__right_value409, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_263,((char*)(__right_value410=make_type_name_string(left_type_264,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value410 = come_decrement_ref_count(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_265=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 953, "struct CVALUE*"))));
    __dec_obj101=come_value2_265->c_value,
    come_value2_265->c_value=(char*)come_increment_ref_count(var_name_263);
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj102=come_value2_265->type,
    come_value2_265->type=(struct sType*)come_increment_ref_count(self->type);
    /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_265->type->mStatic=(_Bool)0;
    come_value2_265->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_265));
    __result_obj__123 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_260,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_261,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_263 = come_decrement_ref_count(var_name_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_type_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_265,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__123;
}

static void sNullValue_finalize(struct sNullValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value418 = (void*)0;
struct sNode* __result_obj__126;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 969, "struct sNode");
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value414=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc_v2(1, sizeof(struct sNullValue)*(1), "06str.c", 969, "struct sNullValue*")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result_obj__126 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value418=_inf_value4)));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value414,sNullValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value418) ? __right_value418 = come_decrement_ref_count(__right_value418, ((struct sNode*)__right_value418)->finalize, ((struct sNode*)__right_value418)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__126;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
struct sNullValue* __result_obj__124;
void* __right_value415 = (void*)0;
struct sNullValue* result_266;
void* __right_value416 = (void*)0;
char* __dec_obj103;
void* __right_value417 = (void*)0;
struct sType* __dec_obj104;
struct sNullValue* __result_obj__125;
    if(    self==(void*)0) {
        __result_obj__124 = (void*)0;
        return __result_obj__124;
    }
    result_266=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc_v2(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*"));
    if(    self!=((void*)0)) {
        result_266->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj103=result_266->sname,
        result_266->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullValue_clone", 5, "char*"));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj104=result_266->type,
        result_266->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__125 = result_266;
    /*c*/ come_call_finalizer3(result_266,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__125;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value419 = (void*)0;
struct list$1sNode$ph* __dec_obj105;
struct sNoneNode* __result_obj__127;
    ((struct sNodeBase*)(__right_value419=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value419,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj105=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj105,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__127 = (struct sNoneNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__127,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__127;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __right_value420 = (void*)0;
char* __result_obj__128;
    __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value420=__builtin_string("sNoneNode"))));
    (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__128;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_267;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct list$1sType$ph* tuple_types_268;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1CVALUE$ph* tuple_values_269;
int i_270;
struct list$1sNode$ph* o2_saved_271;
struct sNode* it_272;
_Bool Value_273;
_Bool __result_obj__129;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_274;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sType* string_type_275;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sType* type_276;
struct list$1sType$ph* o2_saved_277;
struct sType* it_278;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct CVALUE* obj_value_279;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct buffer* num_string_280;
void* __right_value440 = (void*)0;
struct sType* type2_281;
void* __right_value441 = (void*)0;
char* type_name_282;
void* __right_value442 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var9 = (void*)0;
char* finalizer_name_283=0;
char* cloner_name_284=0;
char* get_hash_key_name_285=0;
char* equaler_name_286=0;
void* __right_value443 = (void*)0;
_Bool _if_conditional12;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* __dec_obj106;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __dec_obj107;
void* __right_value448 = (void*)0;
struct sType* type3_287;
void* __right_value449 = (void*)0;
struct sType* __dec_obj108;
void* __right_value450 = (void*)0;
struct sType* obj_type_288;
char* fun_name_289;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var10 = (void*)0;
char* name_290=0;
struct sGenericsFun* generics_fun_291=0;
char* generics_fun_name_292;
void* __right_value453 = (void*)0;
struct sFun* fun_293;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* __dec_obj109;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* result_type_294;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1CVALUE$ph* come_params_295;
void* __right_value461 = (void*)0;
_Bool _if_conditional13;
void* __right_value462 = (void*)0;
struct list$1CVALUE$ph* o2_saved_296;
struct CVALUE* it_297;
void* __right_value463 = (void*)0;
struct CVALUE* come_value_298;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
_Bool _if_conditional14;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct buffer* buf_299;
int j_300;
struct list$1CVALUE$ph* o2_saved_301;
struct CVALUE* it_302;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct CVALUE* come_value2_303;
void* __right_value471 = (void*)0;
char* __dec_obj110;
void* __right_value472 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__130;
    tuple_elements_267=self->tuple_elements;
    tuple_types_268=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 989, "struct list$1sType$ph*"))));
    tuple_values_269=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 990, "struct list$1CVALUE$ph*"))));
    i_270=0;
    for(    o2_saved_271=(tuple_elements_267),it_272=list$1sNode$ph_begin((o2_saved_271));    !list$1sNode$ph_end((o2_saved_271));    it_272=list$1sNode$ph_next((o2_saved_271))    ){
        Value_273=node_compile(it_272,info);
        if(        !Value_273) {
            __result_obj__129 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_268,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_269,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__129;
        }
        else {
        }
        come_value_274=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_269,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_274)));
        list$1sType$ph_push_back(tuple_types_268,(struct sType*)come_increment_ref_count(sType_clone(come_value_274->type)));
        if(        i_270==1) {
            string_type_275=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1004, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
            string_type_275->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value431=xsprintf("invalid none type"))),string_type_275,come_value_274->type,come_value_274,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value431 = come_decrement_ref_count(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(string_type_275,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        i_270++;
        /*c*/ come_call_finalizer3(come_value_274,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_276=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1012, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_268))),(_Bool)0,info));
    for(    o2_saved_277=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_268)),it_278=list$1sType$ph_begin((o2_saved_277));    !list$1sType$ph_end((o2_saved_277));    it_278=list$1sType$ph_next((o2_saved_277))    ){
        list$1sType$ph_push_back(type_276->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value435=sType_clone(it_278))))));
        /*c*/ come_call_finalizer3(__right_value435,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_277,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_279=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1018, "struct CVALUE*"))));
    num_string_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1020, "struct buffer*"))));
    buffer_append_str(num_string_280,"1");
    type2_281=(struct sType*)come_increment_ref_count(solve_generics(type_276,type_276,info));
    type_name_282=(char*)come_increment_ref_count(make_type_name_string(type2_281,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var9=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value442=create_vtable((struct sType*)come_increment_ref_count(type2_281),info)));
    finalizer_name_283=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    cloner_name_284=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    get_hash_key_name_285=(char*)come_increment_ref_count(multiple_assign_var9->v3);
    equaler_name_286=(char*)come_increment_ref_count(multiple_assign_var9->v4);
    /*c*/ come_call_finalizer3(__right_value442,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional12=(((struct sFun*)(__right_value443=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value443,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional12) {
        __dec_obj106=obj_value_279->c_value,
        obj_value_279->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_282,type_name_282,((char*)(__right_value444=buffer_to_string(num_string_280))),info->sname,info->sline,type_name_282));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj107=obj_value_279->c_value,
        obj_value_279->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_282,type_name_282,((char*)(__right_value446=buffer_to_string(num_string_280))),info->sname,info->sline,type_name_282));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_287=(struct sType*)come_increment_ref_count(sType_clone(type2_281));
    type3_287->mPointerNum++;
    type3_287->mHeap=(_Bool)1;
    type2_281->mHeap=(_Bool)1;
    __dec_obj108=obj_value_279->type,
    obj_value_279->type=(struct sType*)come_increment_ref_count(sType_clone(type2_281));
    /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_279->type->mPointerNum++;
    obj_value_279->var=((void*)0);
    append_object_to_right_values2(obj_value_279,(struct sType*)come_increment_ref_count(type3_287),info,(_Bool)0,((void*)0),((void*)0));
    obj_type_288=(struct sType*)come_increment_ref_count(sType_clone(type2_281));
    fun_name_289="initialize";
    multiple_assign_var10=((struct tuple2$2char$phsGenericsFun$p*)(__right_value452=make_generics_function(obj_type_288,(char*)come_increment_ref_count(__builtin_string(fun_name_289)),info,(_Bool)1)));
    name_290=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    generics_fun_291=multiple_assign_var10->v2;
    /*c*/ come_call_finalizer3(__right_value452,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_292=(char*)come_increment_ref_count(name_290);
    fun_293=((struct sFun*)(__right_value453=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_292,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value453,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_293==((void*)0)) {
        __dec_obj109=generics_fun_name_292,
        generics_fun_name_292=(char*)come_increment_ref_count(create_method_name(obj_type_288,(_Bool)0,((char*)(__right_value454=__builtin_string(fun_name_289))),info,(_Bool)1));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value454 = come_decrement_ref_count(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_293=((struct sFun*)(__right_value456=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_292,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value456,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_293==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value457=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_292,info->come_fun->mName)));
            /*c*/ come_call_finalizer3(__right_value457,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_type_294=(struct sType*)come_increment_ref_count(sType_clone(fun_293->mResultType));
    result_type_294->mStatic=(_Bool)0;
    come_params_295=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1068, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional13=(((struct sType*)(__right_value461=list$1sType$ph_operator_load_element(fun_293->mParamTypes,0)))->mHeap&&obj_value_279->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value461,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional13) {
        std_move(((struct sType*)(__right_value462=list$1sType$ph_operator_load_element(fun_293->mParamTypes,0))),obj_value_279->type,obj_value_279,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value462,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_295,(struct CVALUE*)come_increment_ref_count(obj_value_279));
    i_270=1;
    for(    o2_saved_296=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_269)),it_297=list$1CVALUE$ph_begin((o2_saved_296));    !list$1CVALUE$ph_end((o2_saved_296));    it_297=list$1CVALUE$ph_next((o2_saved_296))    ){
        come_value_298=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_297));
        if(        (_if_conditional14=(((struct sType*)(__right_value464=list$1sType$ph_operator_load_element(fun_293->mParamTypes,i_270)))&&((struct sType*)(__right_value465=list$1sType$ph_operator_load_element(fun_293->mParamTypes,i_270)))->mHeap&&come_value_298->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value464,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value465,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional14) {
            std_move(((struct sType*)(__right_value466=list$1sType$ph_operator_load_element(fun_293->mParamTypes,i_270))),come_value_298->type,come_value_298,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value466,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_295,(struct CVALUE*)come_increment_ref_count(come_value_298));
        i_270++;
        /*c*/ come_call_finalizer3(come_value_298,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_296,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_299=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1087, "struct buffer*"))));
    buffer_append_str(buf_299,generics_fun_name_292);
    buffer_append_str(buf_299,"(");
    j_300=0;
    for(    o2_saved_301=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_295)),it_302=list$1CVALUE$ph_begin((o2_saved_301));    !list$1CVALUE$ph_end((o2_saved_301));    it_302=list$1CVALUE$ph_next((o2_saved_301))    ){
        buffer_append_str(buf_299,it_302->c_value);
        if(        j_300!=list$1CVALUE$ph_length(come_params_295)-1) {
            buffer_append_str(buf_299,",");
        }
        j_300++;
    }
    /*c*/ come_call_finalizer3(o2_saved_301,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_299,")");
    come_value2_303=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1104, "struct CVALUE*"))));
    __dec_obj110=come_value2_303->c_value,
    come_value2_303->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_299));
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj111=come_value2_303->type,
    come_value2_303->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_294));
    /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_303->type->mStatic=(_Bool)0;
    come_value2_303->var=((void*)0);
    if(    result_type_294->mHeap) {
        append_object_to_right_values2(come_value2_303,(struct sType*)come_increment_ref_count(result_type_294),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2_303->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_303));
    __result_obj__130 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_268,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_269,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_276,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_279,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_282 = come_decrement_ref_count(type_name_282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_283 = come_decrement_ref_count(finalizer_name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_284 = come_decrement_ref_count(cloner_name_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_285 = come_decrement_ref_count(get_hash_key_name_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_286 = come_decrement_ref_count(equaler_name_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_287,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_288,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_290 = come_decrement_ref_count(name_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_292 = come_decrement_ref_count(generics_fun_name_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_294,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_295,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_299,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_303,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__130;
}

static void sNoneNode_finalize(struct sNoneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info){
void* __right_value473 = (void*)0;
struct list$1sNode$ph* __dec_obj112;
struct list$1sNode$ph* __dec_obj113;
struct sMapNode* __result_obj__131;
    ((struct sNodeBase*)(__right_value473=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value473,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj112=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    /*b*/ come_call_finalizer3(__dec_obj112,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj113=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    /*b*/ come_call_finalizer3(__dec_obj113,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__131 = (struct sMapNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__131,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__131;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value474 = (void*)0;
char* __result_obj__132;
    __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value474=__builtin_string("sMapNode"))));
    (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__132;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_304;
struct list$1sNode$ph* map_elements_305;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1CVALUE$ph* key_params_306;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1CVALUE$ph* element_params_307;
struct sType* map_key_type_308;
struct sType* map_element_type_309;
int i_310;
void* __right_value479 = (void*)0;
struct sNode* key_elements_311;
void* __right_value480 = (void*)0;
struct sNode* elements_318;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
_Bool _if_conditional15;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sNode* value_node_319;
struct sNode* exp_320;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_321;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* __dec_obj114;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_322;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj115;
void* __right_value503 = (void*)0;
struct sNode* __dec_obj116;
_Bool Value_323;
_Bool __result_obj__137;
void* __right_value504 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value505 = (void*)0;
struct sType* __dec_obj117;
_Bool Value_325;
_Bool __result_obj__138;
void* __right_value506 = (void*)0;
struct CVALUE* come_value_326;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj118;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
_Bool _if_conditional16;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* value_node_327;
struct sNode* exp2_328;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_329;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_330;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value531 = (void*)0;
struct sNode* __dec_obj121;
_Bool Value_331;
_Bool __result_obj__139;
void* __right_value532 = (void*)0;
struct CVALUE* come_value2_332;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj122;
_Bool Value_333;
_Bool __result_obj__140;
void* __right_value535 = (void*)0;
struct CVALUE* come_value2_334;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj123;
void* __right_value538 = (void*)0;
struct sType* key_type_values_336;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
char* var_name_337;
void* __right_value541 = (void*)0;
struct sVar* var__338;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* element_type_values_339;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
char* var_name2_340;
void* __right_value546 = (void*)0;
struct sVar* var2__341;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct buffer* source_342;
int i_343;
void* __right_value550 = (void*)0;
struct CVALUE* key_param_344;
void* __right_value551 = (void*)0;
struct CVALUE* element_param_345;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sType* map_type_346;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* obj_type_347;
char* fun_name_348;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var11 = (void*)0;
char* name_349=0;
struct sGenericsFun* generics_fun_350=0;
char* generics_fun_name_351;
void* __right_value560 = (void*)0;
struct sFun* fun_352;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* __dec_obj124;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* result_type_353;
struct sType* type_354;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* obj_value_355;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct buffer* num_string_356;
void* __right_value570 = (void*)0;
struct sType* type2_357;
void* __right_value571 = (void*)0;
char* type_name_358;
struct sType* any_type_359;
void* __right_value572 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var12 = (void*)0;
char* finalizer_name_360=0;
char* cloner_name_361=0;
char* get_hash_key_name_362=0;
char* equaler_name_363=0;
void* __right_value573 = (void*)0;
_Bool _if_conditional17;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* __dec_obj125;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* __dec_obj126;
void* __right_value578 = (void*)0;
struct sType* type3_364;
void* __right_value579 = (void*)0;
struct sType* __dec_obj127;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1CVALUE$ph* come_params_365;
void* __right_value582 = (void*)0;
_Bool _if_conditional18;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct CVALUE* come_value2_366;
void* __right_value586 = (void*)0;
char* __dec_obj128;
struct sType* __dec_obj129;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct CVALUE* come_value3_367;
void* __right_value589 = (void*)0;
char* __dec_obj130;
struct sType* __dec_obj131;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct CVALUE* come_value4_368;
void* __right_value592 = (void*)0;
char* __dec_obj132;
struct sType* __dec_obj133;
int j_369;
struct list$1CVALUE$ph* o2_saved_370;
struct CVALUE* it_371;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct CVALUE* come_value5_372;
void* __right_value595 = (void*)0;
char* __dec_obj134;
void* __right_value596 = (void*)0;
struct sType* __dec_obj135;
_Bool __result_obj__141;
exp_320 = (void*)0;
exp2_328 = (void*)0;
    map_key_elements_304=self->map_key_elements;
    map_elements_305=self->map_elements;
    key_params_306=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1144, "struct list$1CVALUE$ph*"))));
    element_params_307=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1145, "struct list$1CVALUE$ph*"))));
    map_key_type_308=((void*)0);
    map_element_type_309=((void*)0);
    for(    i_310=0;    i_310<list$1sNode$ph_length(map_key_elements_304);    i_310++    ){
        key_elements_311=((struct sNode*)(__right_value479=list$1sNode$ph_operator_load_element(map_key_elements_304,i_310)));
        ((__right_value479) ? __right_value479 = come_decrement_ref_count(__right_value479, ((struct sNode*)__right_value479)->finalize, ((struct sNode*)__right_value479)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        elements_318=((struct sNode*)(__right_value480=list$1sNode$ph_operator_load_element(map_elements_305,i_310)));
        ((__right_value480) ? __right_value480 = come_decrement_ref_count(__right_value480, ((struct sNode*)__right_value480)->finalize, ((struct sNode*)__right_value480)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        (_if_conditional15=(string_operator_equals(((char*)(__right_value482=key_elements_311->kind(key_elements_311->_protocol_obj))),"sWildCard"))),        (__right_value481 = come_decrement_ref_count(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional15) {
            value_node_319=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value483=xsprintf("Value"))),info));
            (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_321=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1158, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_321,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1159, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_319))));
                __dec_obj114=exp_320,
                exp_320=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value490=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_319),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_321),((void*)0),0,((void*)0),(_Bool)0,info,(_Bool)0));
                (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_321,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_322=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1164, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_322,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1165, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_320))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_322,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1166, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_310,info)))));
                __dec_obj115=exp_320,
                exp_320=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value501=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_320),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_322),((void*)0),0,((void*)0),(_Bool)0,info,(_Bool)0));
                (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj116=exp_320,
                exp_320=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_320,info));
                (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_322,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_323=node_compile(exp_320,info);
            if(            !Value_323) {
                __result_obj__137 = (_Bool)0;
                ((value_node_319) ? value_node_319 = come_decrement_ref_count(value_node_319, ((struct sNode*)value_node_319)->finalize, ((struct sNode*)value_node_319)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_320) ? exp_320 = come_decrement_ref_count(exp_320, ((struct sNode*)exp_320)->finalize, ((struct sNode*)exp_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_306,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_307,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_308,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__137;
            }
            else {
            }
            come_value_324=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(key_params_306,(struct CVALUE*)come_increment_ref_count(come_value_324));
            __dec_obj117=map_key_type_308,
            map_key_type_308=(struct sType*)come_increment_ref_count(sType_clone(come_value_324->type));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_319) ? value_node_319 = come_decrement_ref_count(value_node_319, ((struct sNode*)value_node_319)->finalize, ((struct sNode*)value_node_319)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_320) ? exp_320 = come_decrement_ref_count(exp_320, ((struct sNode*)exp_320)->finalize, ((struct sNode*)exp_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_324,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_325=node_compile(key_elements_311,info);
            if(            !Value_325) {
                __result_obj__138 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_306,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_307,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_308,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__138;
            }
            else {
            }
            come_value_326=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_key_type_308) {
                check_assign_type(((char*)(__right_value507=xsprintf("invalid map key type"))),map_key_type_308,come_value_326->type,come_value_326,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(key_params_306,(struct CVALUE*)come_increment_ref_count(come_value_326));
            __dec_obj118=map_key_type_308,
            map_key_type_308=(struct sType*)come_increment_ref_count(sType_clone(come_value_326->type));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value_326,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        (_if_conditional16=(string_operator_equals(((char*)(__right_value510=elements_318->kind(elements_318->_protocol_obj))),"sWildCard"))),        (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value510 = come_decrement_ref_count(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional16) {
            value_node_327=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value511=xsprintf("Value"))),info));
            (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_329=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1200, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_329,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1201, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_327))));
                __dec_obj119=exp2_328,
                exp2_328=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value518=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_327),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_329),((void*)0),0,((void*)0),(_Bool)0,info,(_Bool)0));
                (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_329,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_330=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1206, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_330,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1207, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_328))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_330,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1208, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_310,info)))));
                __dec_obj120=exp2_328,
                exp2_328=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value529=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_328),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_330),((void*)0),0,((void*)0),(_Bool)0,info,(_Bool)0));
                (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj121=exp2_328,
                exp2_328=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_328,info));
                (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_330,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_331=node_compile(exp2_328,info);
            if(            !Value_331) {
                __result_obj__139 = (_Bool)0;
                ((value_node_327) ? value_node_327 = come_decrement_ref_count(value_node_327, ((struct sNode*)value_node_327)->finalize, ((struct sNode*)value_node_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp2_328) ? exp2_328 = come_decrement_ref_count(exp2_328, ((struct sNode*)exp2_328)->finalize, ((struct sNode*)exp2_328)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_306,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_307,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_308,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__139;
            }
            else {
            }
            come_value2_332=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_309) {
                check_assign_type(((char*)(__right_value533=xsprintf("invalid map element type"))),map_element_type_309,come_value2_332->type,come_value2_332,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_307,(struct CVALUE*)come_increment_ref_count(come_value2_332));
            __dec_obj122=map_element_type_309,
            map_element_type_309=(struct sType*)come_increment_ref_count(sType_clone(come_value2_332->type));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_327) ? value_node_327 = come_decrement_ref_count(value_node_327, ((struct sNode*)value_node_327)->finalize, ((struct sNode*)value_node_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_328) ? exp2_328 = come_decrement_ref_count(exp2_328, ((struct sNode*)exp2_328)->finalize, ((struct sNode*)exp2_328)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value2_332,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_333=node_compile(elements_318,info);
            if(            !Value_333) {
                __result_obj__140 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_306,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_307,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_308,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__140;
            }
            else {
            }
            come_value2_334=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_309) {
                check_assign_type(((char*)(__right_value536=xsprintf("invalid map element type"))),map_element_type_309,come_value2_334->type,come_value2_334,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_307,(struct CVALUE*)come_increment_ref_count(come_value2_334));
            __dec_obj123=map_element_type_309,
            map_element_type_309=(struct sType*)come_increment_ref_count(sType_clone(come_value2_334->type));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value2_334,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    static int map_value_num_335=0;
    key_type_values_336=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_308));
    list$1sNode$ph_push_back(key_type_values_336->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(key_params_306),info)));
    key_type_values_336->mHeap=(_Bool)0;
    var_name_337=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_335));
    add_variable_to_table(var_name_337,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_336)),info,(_Bool)0,(_Bool)0);
    var__338=get_variable_from_table(info->lv_table,var_name_337);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value542=make_define_var(key_type_values_336,var__338->mCValueName,(_Bool)0,info))));
    (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_339=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_309));
    list$1sNode$ph_push_back(element_type_values_339->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(element_params_307),info)));
    element_type_values_339->mHeap=(_Bool)0;
    var_name2_340=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_335));
    add_variable_to_table(var_name2_340,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_339)),info,(_Bool)0,(_Bool)0);
    var2__341=get_variable_from_table(info->lv_table,var_name2_340);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value547=make_define_var(element_type_values_339,var2__341->mCValueName,(_Bool)0,info))));
    (__right_value547 = come_decrement_ref_count(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_342=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1267, "struct buffer*"))));
    buffer_append_str(source_342,"(");
    for(    i_343=0;    i_343<list$1CVALUE$ph_length(key_params_306);    i_343++    ){
        key_param_344=((struct CVALUE*)(__right_value550=list$1CVALUE$ph_operator_load_element(key_params_306,i_343)));
        /*c*/ come_call_finalizer3(__right_value550,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        element_param_345=((struct CVALUE*)(__right_value551=list$1CVALUE$ph_operator_load_element(element_params_307,i_343)));
        /*c*/ come_call_finalizer3(__right_value551,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        map_key_type_308->mHeap) {
            buffer_append_format(source_342,"%s[%d]=%s,\n",var__338->mCValueName,i_343,key_param_344->c_value);
        }
        else {
            buffer_append_format(source_342,"%s[%d]=%s,\n",var__338->mCValueName,i_343,key_param_344->c_value);
        }
        if(        map_element_type_309->mHeap) {
            buffer_append_format(source_342,"%s[%d]=%s,\n",var2__341->mCValueName,i_343,element_param_345->c_value);
        }
        else {
            buffer_append_format(source_342,"%s[%d]=%s,\n",var2__341->mCValueName,i_343,element_param_345->c_value);
        }
    }
    map_type_346=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 1292, "struct sType*")),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info));
    list$1sType$ph_push_back(map_type_346->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value555=sType_clone(map_key_type_308))))));
    /*c*/ come_call_finalizer3(__right_value555,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1sType$ph_push_back(map_type_346->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value556=sType_clone(map_element_type_309))))));
    /*c*/ come_call_finalizer3(__right_value556,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_347=(struct sType*)come_increment_ref_count(sType_clone(map_type_346));
    fun_name_348="initialize_with_values";
    multiple_assign_var11=((struct tuple2$2char$phsGenericsFun$p*)(__right_value559=make_generics_function(obj_type_347,(char*)come_increment_ref_count(__builtin_string(fun_name_348)),info,(_Bool)1)));
    name_349=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_350=multiple_assign_var11->v2;
    /*c*/ come_call_finalizer3(__right_value559,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_351=(char*)come_increment_ref_count(name_349);
    fun_352=((struct sFun*)(__right_value560=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_351,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value560,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_352==((void*)0)) {
        __dec_obj124=generics_fun_name_351,
        generics_fun_name_351=(char*)come_increment_ref_count(create_method_name(obj_type_347,(_Bool)0,((char*)(__right_value561=__builtin_string(fun_name_348))),info,(_Bool)1));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value561 = come_decrement_ref_count(__right_value561, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_352=((struct sFun*)(__right_value563=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_351,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value563,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_352==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value564=err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name_351,info->come_fun->mName)));
            /*c*/ come_call_finalizer3(__right_value564,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_type_353=(struct sType*)come_increment_ref_count(sType_clone(fun_352->mResultType));
    result_type_353->mStatic=(_Bool)0;
    type_354=map_type_346;
    obj_value_355=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1319, "struct CVALUE*"))));
    num_string_356=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1321, "struct buffer*"))));
    buffer_append_str(num_string_356,"1");
    type2_357=(struct sType*)come_increment_ref_count(solve_generics(type_354,type_354,info));
    type_name_358=(char*)come_increment_ref_count(make_type_name_string(type2_357,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_359=(struct sType*)come_increment_ref_count(type2_357);
    any_type_359->mPointerNum=1;
    any_type_359->mHeap=(_Bool)1;
    multiple_assign_var12=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value572=create_vtable((struct sType*)come_increment_ref_count(any_type_359),info)));
    finalizer_name_360=(char*)come_increment_ref_count(multiple_assign_var12->v1);
    cloner_name_361=(char*)come_increment_ref_count(multiple_assign_var12->v2);
    get_hash_key_name_362=(char*)come_increment_ref_count(multiple_assign_var12->v3);
    equaler_name_363=(char*)come_increment_ref_count(multiple_assign_var12->v4);
    /*c*/ come_call_finalizer3(__right_value572,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (_if_conditional17=(((struct sFun*)(__right_value573=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value573,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional17) {
        __dec_obj125=obj_value_355->c_value,
        obj_value_355->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_358,type_name_358,((char*)(__right_value574=buffer_to_string(num_string_356))),info->sname,info->sline,type_name_358));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value574 = come_decrement_ref_count(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj126=obj_value_355->c_value,
        obj_value_355->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_358,type_name_358,((char*)(__right_value576=buffer_to_string(num_string_356))),info->sname,info->sline,type_name_358));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value576 = come_decrement_ref_count(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    type3_364=(struct sType*)come_increment_ref_count(sType_clone(type2_357));
    type3_364->mPointerNum++;
    type3_364->mHeap=(_Bool)1;
    type2_357->mHeap=(_Bool)1;
    __dec_obj127=obj_value_355->type,
    obj_value_355->type=(struct sType*)come_increment_ref_count(sType_clone(type2_357));
    /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_355->type->mPointerNum++;
    obj_value_355->var=((void*)0);
    append_object_to_right_values2(obj_value_355,(struct sType*)come_increment_ref_count(type3_364),info,(_Bool)0,((void*)0),((void*)0));
    come_params_365=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1352, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional18=(((struct sType*)(__right_value582=list$1sType$ph_operator_load_element(fun_352->mParamTypes,0)))->mHeap&&obj_value_355->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value582,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional18) {
        std_move(((struct sType*)(__right_value583=list$1sType$ph_operator_load_element(fun_352->mParamTypes,0))),obj_value_355->type,obj_value_355,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value583,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_365,(struct CVALUE*)come_increment_ref_count(obj_value_355));
    come_value2_366=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1359, "struct CVALUE*"))));
    __dec_obj128=come_value2_366->c_value,
    come_value2_366->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params_306)));
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj129=come_value2_366->type,
    come_value2_366->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_366->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_365,(struct CVALUE*)come_increment_ref_count(come_value2_366));
    come_value3_367=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1367, "struct CVALUE*"))));
    __dec_obj130=come_value3_367->c_value,
    come_value3_367->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__338->mCValueName));
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj131=come_value3_367->type,
    come_value3_367->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_367->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_365,(struct CVALUE*)come_increment_ref_count(come_value3_367));
    come_value4_368=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1375, "struct CVALUE*"))));
    __dec_obj132=come_value4_368->c_value,
    come_value4_368->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__341->mCValueName));
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj133=come_value4_368->type,
    come_value4_368->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_368->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_365,(struct CVALUE*)come_increment_ref_count(come_value4_368));
    buffer_append_str(source_342,generics_fun_name_351);
    buffer_append_str(source_342,"(");
    j_369=0;
    for(    o2_saved_370=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_365)),it_371=list$1CVALUE$ph_begin((o2_saved_370));    !list$1CVALUE$ph_end((o2_saved_370));    it_371=list$1CVALUE$ph_next((o2_saved_370))    ){
        buffer_append_str(source_342,it_371->c_value);
        if(        j_369!=list$1CVALUE$ph_length(come_params_365)-1) {
            buffer_append_str(source_342,",");
        }
        j_369++;
    }
    /*c*/ come_call_finalizer3(o2_saved_370,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_342,")");
    buffer_append_str(source_342,")");
    come_value5_372=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 1401, "struct CVALUE*"))));
    __dec_obj134=come_value5_372->c_value,
    come_value5_372->c_value=(char*)come_increment_ref_count(buffer_to_string(source_342));
    __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj135=come_value5_372->type,
    come_value5_372->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_353));
    /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_372->type->mStatic=(_Bool)0;
    come_value5_372->var=((void*)0);
    if(    result_type_353->mHeap) {
        append_object_to_right_values2(come_value5_372,(struct sType*)come_increment_ref_count(result_type_353),info,(_Bool)0,((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value5_372->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_372));
    __result_obj__141 = (_Bool)1;
    /*c*/ come_call_finalizer3(key_params_306,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_params_307,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_type_308,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_element_type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(key_type_values_336,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_337 = come_decrement_ref_count(var_name_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(element_type_values_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name2_340 = come_decrement_ref_count(var_name2_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_342,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_type_346,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_349 = come_decrement_ref_count(name_349, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_351 = come_decrement_ref_count(generics_fun_name_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_353,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_355,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_356,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_357,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_358 = come_decrement_ref_count(type_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_359,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_360 = come_decrement_ref_count(finalizer_name_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_361 = come_decrement_ref_count(cloner_name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_362 = come_decrement_ref_count(get_hash_key_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_363 = come_decrement_ref_count(equaler_name_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_364,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_365,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_366,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_367,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_368,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value5_372,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__141;
}

static void sMapNode_finalize(struct sMapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->map_key_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->map_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_312;
int i_313;
struct sNode* __result_obj__133;
struct sNode* default_value_314;
struct sNode* __result_obj__134;
default_value_314 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_312=self->head;
    i_313=0;
    while(    it_312!=((void*)0)) {
        if(        position==i_313) {
            __result_obj__133 = (struct sNode*)come_increment_ref_count(it_312->item);
            ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__133;
        }
        it_312=it_312->next;
        i_313++;
    }
    memset(&default_value_314,0,sizeof(struct sNode*));
    __result_obj__134 = (struct sNode*)come_increment_ref_count(default_value_314);
    ((default_value_314) ? default_value_314 = come_decrement_ref_count(default_value_314, ((struct sNode*)default_value_314)->finalize, ((struct sNode*)default_value_314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__134) ? __result_obj__134 = come_decrement_ref_count(__result_obj__134, ((struct sNode*)__result_obj__134)->finalize, ((struct sNode*)__result_obj__134)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__134;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_315;
int i_316;
struct sNode* __result_obj__135;
struct sNode* default_value_317;
struct sNode* __result_obj__136;
default_value_317 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_315=self->head;
    i_316=0;
    while(    it_315!=((void*)0)) {
        if(        position==i_316) {
            __result_obj__135 = (struct sNode*)come_increment_ref_count(it_315->item);
            ((__result_obj__135) ? __result_obj__135 = come_decrement_ref_count(__result_obj__135, ((struct sNode*)__result_obj__135)->finalize, ((struct sNode*)__result_obj__135)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__135;
        }
        it_315=it_315->next;
        i_316++;
    }
    memset(&default_value_317,0,sizeof(struct sNode*));
    __result_obj__136 = (struct sNode*)come_increment_ref_count(default_value_317);
    ((default_value_317) ? default_value_317 = come_decrement_ref_count(default_value_317, ((struct sNode*)default_value_317)->finalize, ((struct sNode*)default_value_317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__136) ? __result_obj__136 = come_decrement_ref_count(__result_obj__136, ((struct sNode*)__result_obj__136)->finalize, ((struct sNode*)__result_obj__136)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__136;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_373;
int sline_374;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1sNode$ph* exps_375;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct buffer* value_376;
char* head_of_last_line_377;
int len_378;
void* __right_value601 = (void*)0;
struct sNode* exp_379;
int sline2_380;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value610 = (void*)0;
struct sNode* __result_obj__144;
int sline_real_382;
int sline_383;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct buffer* value_384;
char* p_385;
int sline_386;
int sline2_387;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value617 = (void*)0;
struct sNode* __result_obj__145;
int sline_real_388;
int sline_389;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct buffer* value_390;
unsigned long  int size_391;
char* p_392;
int sline_393;
int len_394;
int sline2_395;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value626 = (void*)0;
struct sNode* __result_obj__148;
int sline_real_397;
int sline_398;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct buffer* buf_399;
void* __right_value629 = (void*)0;
_Bool global_400;
_Bool ignore_case_401;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value633 = (void*)0;
struct sNode* obj_402;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_403;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct buffer* method_block_404;
int method_block_sline_405;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct list$1sType$ph* method_generics_types_406;
void* __right_value675 = (void*)0;
struct sNode* node_407;
struct sNode* __result_obj__149;
int sline_real_408;
int sline_409;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct buffer* value_410;
char* p_411;
int sline_412;
int len_413;
int sline2_414;
void* __right_value678 = (void*)0;
_Bool global_415;
_Bool ignore_case_416;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value682 = (void*)0;
struct sNode* obj_417;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_418;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct buffer* method_block_419;
int method_block_sline_420;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1sType$ph* method_generics_types_421;
void* __right_value724 = (void*)0;
struct sNode* node_422;
struct sNode* __result_obj__150;
int sline_real_423;
int c_424;
int n_425;
int n_426;
unsigned long long int n_429;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value730 = (void*)0;
struct sNode* __result_obj__153;
int sline_real_431;
unsigned int c_432;
_Bool quote_433;
int n_434;
int n_435;
unsigned long long int n_438;
unsigned char p2_439;
int size_440;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value738 = (void*)0;
struct sNode* __result_obj__156;
int sline_real_443;
int sline_444;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* value_445;
char* p_446;
int sline_447;
int sline2_448;
void* __right_value741 = (void*)0;
int len_449;
void* __right_value742 = (void*)0;
unsigned int* wstr_450;
char* str_451;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value748 = (void*)0;
struct sNode* __result_obj__159;
int sline_real_453;
int sline_454;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct list$1sNode$ph* exps_455;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct buffer* value_456;
char* p_457;
int sline_458;
int len_459;
void* __right_value753 = (void*)0;
struct sNode* exp_460;
int sline2_461;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value758 = (void*)0;
struct sNode* __result_obj__160;
int sline_real_462;
char* p_463;
_Bool no_comma_464;
void* __right_value759 = (void*)0;
struct sNode* node_465;
char* p2_466;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct buffer* first_element_source_467;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1sNode$ph* list_elements_468;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1sNode$ph* map_keys_469;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1sNode$ph* map_elements_470;
_Bool no_comma_471;
void* __right_value768 = (void*)0;
struct sNode* node2_472;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value775 = (void*)0;
struct sNode* __result_obj__163;
_Bool no_comma_474;
void* __right_value776 = (void*)0;
struct sNode* node2_475;
void* __right_value777 = (void*)0;
struct sNode* node3_476;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value782 = (void*)0;
struct sNode* __result_obj__164;
_Bool no_comma_477;
void* __right_value783 = (void*)0;
struct sNode* node2_478;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value792 = (void*)0;
struct sNode* __result_obj__167;
void* __right_value793 = (void*)0;
struct sNode* node_480;
struct sNode* __result_obj__168;
struct sNode* __result_obj__169;
memset(&c_424, 0, sizeof(int));
memset(&c_432, 0, sizeof(unsigned int));
memset(&quote_433, 0, sizeof(_Bool));
memset(&size_440, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_373=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_374=info->sline;
        exps_375=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1431, "struct list$1sNode$ph*"))));
        value_376=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1432, "struct buffer*"))));
        head_of_last_line_377=((void*)0);
        while(        1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_377) {
                    buffer_trim(value_376,info->p-head_of_last_line_377);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_376,37);
                buffer_append_char(value_376,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_376,92);
                buffer_append_char(value_376,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_376,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_378=0;
                    while(                    xisdigit(*info->p)&&len_378<3) {
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        len_378++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_376,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_379=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_375,(struct sNode*)come_increment_ref_count(exp_379));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_376,"%s");
                    ((exp_379) ? exp_379 = come_decrement_ref_count(exp_379, ((struct sNode*)exp_379)->finalize, ((struct sNode*)exp_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_376,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_380=info->sline;
                info->sline=sline_374;
                ((struct tuple2$2int$bool$*)(__right_value602=err_msg(info,"close \" to make embbeded string value")));
                /*c*/ come_call_finalizer3(__right_value602,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_376,92);
                    buffer_append_char(value_376,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_377=info->p;
                }
                else {
                    buffer_append_char(value_376,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_373;
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1571, "struct sNode");
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value605=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 1571, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_376)),(struct list$1sNode$ph*)come_increment_ref_count(exps_375),sline_374,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result_obj__144 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value610=_inf_value5)));
        /*c*/ come_call_finalizer3(exps_375,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_376,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value605,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value610) ? __right_value610 = come_decrement_ref_count(__right_value610, ((struct sNode*)__right_value610)->finalize, ((struct sNode*)__right_value610)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__144;
        /*c*/ come_call_finalizer3(exps_375,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_376,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_382=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_383=info->sline;
        value_384=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1581, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_385=info->p;
                sline_386=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_385;
                    info->sline=sline_386;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_384,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_384,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_384,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_387=info->sline;
                info->sline=sline_383;
                ((struct tuple2$2int$bool$*)(__right_value613=err_msg(info,"close \" to make c string value")));
                /*c*/ come_call_finalizer3(__right_value613,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline=sline2_387;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_384,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_382;
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1634, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value616=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1634, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_384)),sline_383,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result_obj__145 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value617=_inf_value6)));
        /*c*/ come_call_finalizer3(value_384,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value616,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value617) ? __right_value617 = come_decrement_ref_count(__right_value617, ((struct sNode*)__right_value617)->finalize, ((struct sNode*)__right_value617)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__145) ? __result_obj__145 = come_decrement_ref_count(__result_obj__145, ((struct sNode*)__result_obj__145)->finalize, ((struct sNode*)__result_obj__145)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__145;
        /*c*/ come_call_finalizer3(value_384,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_388=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_389=info->sline;
        value_390=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1644, "struct buffer*"))));
        size_391=0;
        while(        1) {
            if(            *info->p==34) {
                buffer_append_char(value_390,*info->p);
                info->p++;
                p_392=info->p;
                sline_393=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_392;
                    info->sline=sline_393;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_390,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_394=0;
                    while(                    xisdigit(*info->p)&&len_394<3) {
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        len_394++;
                    }
                    size_391++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_390,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                    }
                    size_391++;
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 110:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 116:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 114:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 118:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 102:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 97:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 98:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        case 92:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                        default:
                        buffer_append_char(value_390,*info->p);
                        info->p++;
                        size_391++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_395=info->sline;
                info->sline=sline_389;
                ((struct tuple2$2int$bool$*)(__right_value620=err_msg(info,"close \" to make embbeded string value")));
                /*c*/ come_call_finalizer3(__right_value620,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_390,*info->p);
                info->p++;
                size_391++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_388;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1771, "struct sNode");
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value622=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "06str.c", 1771, "struct sBufferNode*")),(struct buffer*)come_increment_ref_count(value_390),size_391,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result_obj__148 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value626=_inf_value7)));
        /*c*/ come_call_finalizer3(value_390,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value622,sBufferNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value626) ? __right_value626 = come_decrement_ref_count(__right_value626, ((struct sNode*)__right_value626)->finalize, ((struct sNode*)__right_value626)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__148) ? __result_obj__148 = come_decrement_ref_count(__result_obj__148, ((struct sNode*)__result_obj__148)->finalize, ((struct sNode*)__result_obj__148)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__148;
        /*c*/ come_call_finalizer3(value_390,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_397=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_398=info->sline;
        buf_399=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1780, "struct buffer*"))));
        while(        (_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_399,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                ((struct tuple2$2int$bool$*)(__right_value629=err_msg(info,"require closing / for regex")));
                /*c*/ come_call_finalizer3(__right_value629,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(5);
            }
            else {
                buffer_append_char(buf_399,*info->p);
                info->p++;
            }
        }
        global_400=(_Bool)0;
        ignore_case_401=(_Bool)0;
        while(        *info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_400=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_401=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1819, "struct sNode");
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value632=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1819, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(buf_399)),sline_398,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_402=(struct sNode*)come_increment_ref_count(_inf_value8);
        /*c*/ come_call_finalizer3(__right_value632,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_403=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1821, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1823, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_402))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1824, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_401)?(((struct sNode*)(__right_value640=create_int_node(1,info)))):(((struct sNode*)(__right_value641=create_int_node(0,info)))))))));
        ((__right_value640) ? __right_value640 = come_decrement_ref_count(__right_value640, ((struct sNode*)__right_value640)->finalize, ((struct sNode*)__right_value640)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value641) ? __right_value641 = come_decrement_ref_count(__right_value641, ((struct sNode*)__right_value641)->finalize, ((struct sNode*)__right_value641)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1825, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1826, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_400)?(((struct sNode*)(__right_value649=create_int_node(1,info)))):(((struct sNode*)(__right_value650=create_int_node(0,info)))))))));
        ((__right_value649) ? __right_value649 = come_decrement_ref_count(__right_value649, ((struct sNode*)__right_value649)->finalize, ((struct sNode*)__right_value649)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value650) ? __right_value650 = come_decrement_ref_count(__right_value650, ((struct sNode*)__right_value650)->finalize, ((struct sNode*)__right_value650)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1827, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1828, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1829, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1830, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_403,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1831, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_404=((void*)0);
        method_block_sline_405=info->sline;
        method_generics_types_406=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1837, "struct list$1sType$ph*"))));
        node_407=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_402),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_403),method_block_404,method_block_sline_405,method_generics_types_406,(_Bool)0,info,(_Bool)0));
        info->sline_real=sline_real_397;
        __result_obj__149 = (struct sNode*)come_increment_ref_count(node_407);
        /*c*/ come_call_finalizer3(buf_399,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_402) ? obj_402 = come_decrement_ref_count(obj_402, ((struct sNode*)obj_402)->finalize, ((struct sNode*)obj_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_403,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_406,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_407) ? node_407 = come_decrement_ref_count(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__149) ? __result_obj__149 = come_decrement_ref_count(__result_obj__149, ((struct sNode*)__result_obj__149)->finalize, ((struct sNode*)__result_obj__149)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__149;
        /*c*/ come_call_finalizer3(buf_399,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_402) ? obj_402 = come_decrement_ref_count(obj_402, ((struct sNode*)obj_402)->finalize, ((struct sNode*)obj_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_403,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_406,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_407) ? node_407 = come_decrement_ref_count(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_408=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_409=info->sline;
        value_410=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1851, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_411=info->p;
                sline_412=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_411;
                    info->sline=sline_412;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_410,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_413=0;
                    while(                    xisdigit(*info->p)&&len_413<3) {
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        len_413++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_410,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_410,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_414=info->sline;
                info->sline=sline_409;
                ((struct tuple2$2int$bool$*)(__right_value678=err_msg(info,"close \" to make embbeded string value")));
                /*c*/ come_call_finalizer3(__right_value678,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_410,*info->p);
                info->p++;
            }
        }
        global_415=(_Bool)0;
        ignore_case_416=(_Bool)0;
        while(        *info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_415=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_416=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1977, "struct sNode");
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value681=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1977, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_410)),sline_409,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_417=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value681,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_418=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1979, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1981, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_417))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1982, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_416)?(((struct sNode*)(__right_value689=create_int_node(1,info)))):(((struct sNode*)(__right_value690=create_int_node(0,info)))))))));
        ((__right_value689) ? __right_value689 = come_decrement_ref_count(__right_value689, ((struct sNode*)__right_value689)->finalize, ((struct sNode*)__right_value689)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value690) ? __right_value690 = come_decrement_ref_count(__right_value690, ((struct sNode*)__right_value690)->finalize, ((struct sNode*)__right_value690)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1983, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1984, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_415)?(((struct sNode*)(__right_value698=create_int_node(1,info)))):(((struct sNode*)(__right_value699=create_int_node(0,info)))))))));
        ((__right_value698) ? __right_value698 = come_decrement_ref_count(__right_value698, ((struct sNode*)__right_value698)->finalize, ((struct sNode*)__right_value698)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value699) ? __right_value699 = come_decrement_ref_count(__right_value699, ((struct sNode*)__right_value699)->finalize, ((struct sNode*)__right_value699)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1985, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1986, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1987, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1988, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_418,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1989, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_419=((void*)0);
        method_block_sline_420=info->sline;
        method_generics_types_421=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1995, "struct list$1sType$ph*"))));
        node_422=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_417),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_418),method_block_419,method_block_sline_420,method_generics_types_421,(_Bool)0,info,(_Bool)0));
        info->sline_real=sline_real_408;
        __result_obj__150 = (struct sNode*)come_increment_ref_count(node_422);
        /*c*/ come_call_finalizer3(value_410,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_417) ? obj_417 = come_decrement_ref_count(obj_417, ((struct sNode*)obj_417)->finalize, ((struct sNode*)obj_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_418,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_421,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_422) ? node_422 = come_decrement_ref_count(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__150) ? __result_obj__150 = come_decrement_ref_count(__result_obj__150, ((struct sNode*)__result_obj__150)->finalize, ((struct sNode*)__result_obj__150)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__150;
        /*c*/ come_call_finalizer3(value_410,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_417) ? obj_417 = come_decrement_ref_count(obj_417, ((struct sNode*)obj_417)->finalize, ((struct sNode*)obj_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_418,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_421,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_422) ? node_422 = come_decrement_ref_count(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==39) {
        sline_real_423=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_425=0;
                while(                xisdigit(*info->p)) {
                    n_425=n_425*8+*info->p-48;
                    info->p++;
                }
                c_424=n_425;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_424=10;
                    info->p++;
                    break;
                    case 116:
                    c_424=9;
                    info->p++;
                    break;
                    case 114:
                    c_424=13;
                    info->p++;
                    break;
                    case 97:
                    c_424=7;
                    info->p++;
                    break;
                    case 102:
                    c_424=12;
                    info->p++;
                    break;
                    case 118:
                    c_424=11;
                    info->p++;
                    break;
                    case 98:
                    c_424=8;
                    info->p++;
                    break;
                    case 92:
                    c_424=92;
                    info->p++;
                    break;
                    case 48:
                    c_424=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_426=0;
                        while(                        xisdigit(*info->p)) {
                            n_426=n_426*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_424=n_426;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_427[128];
                        memset(&buf_427, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_427,"0x",128);
                        while(                        *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_428[2];
                            memset(&buf2_428, 0, sizeof(char)                            *(2)                            );
                            buf2_428[0]=*info->p;
                            buf2_428[1]=0;
                            info->p++;
                            strncat(buf_427,buf2_428,128);
                        }
                        n_429=strtoll(buf_427,((void*)0),0);
                        c_424=n_429;
                    }
                    break;
                    default:
                    c_424=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_424=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            ((struct tuple2$2int$bool$*)(__right_value725=err_msg(info,"close \' to make character value")));
            /*c*/ come_call_finalizer3(__right_value725,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_423;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2120, "struct sNode");
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value727=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "06str.c", 2120, "struct sCharNode*")),c_424,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result_obj__153 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value730=_inf_value10)));
            /*c*/ come_call_finalizer3(__right_value727,sCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value730) ? __right_value730 = come_decrement_ref_count(__right_value730, ((struct sNode*)__right_value730)->finalize, ((struct sNode*)__right_value730)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__153) ? __result_obj__153 = come_decrement_ref_count(__result_obj__153, ((struct sNode*)__result_obj__153)->finalize, ((struct sNode*)__result_obj__153)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__153;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_431=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_433=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_434=0;
                while(                xisdigit(*info->p)) {
                    n_434=n_434*8+*info->p-48;
                    info->p++;
                }
                c_432=n_434;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_432=10;
                    info->p++;
                    break;
                    case 116:
                    c_432=9;
                    info->p++;
                    break;
                    case 114:
                    c_432=13;
                    info->p++;
                    break;
                    case 97:
                    c_432=7;
                    info->p++;
                    break;
                    case 92:
                    c_432=92;
                    info->p++;
                    break;
                    case 48:
                    c_432=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_435=0;
                        while(                        xisdigit(*info->p)) {
                            n_435=n_435*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_432=n_435;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_436[128];
                        memset(&buf_436, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_436,"0x",128);
                        while(                        *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_437[2];
                            memset(&buf2_437, 0, sizeof(char)                            *(2)                            );
                            buf2_437[0]=*info->p;
                            buf2_437[1]=0;
                            info->p++;
                            strncat(buf_436,buf2_437,128);
                        }
                        n_438=strtoll(buf_436,((void*)0),0);
                        c_432=n_438;
                    }
                    break;
                    default:
                    c_432=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_433=(_Bool)0;
            p2_439=*(unsigned char*)info->p;
            if(            p2_439>127) {
                char str_441[4+1];
                memset(&str_441, 0, sizeof(char)                *(4+1)                );
                size_440=((p2_439&128)>>7)+((p2_439&64)>>6)+((p2_439&32)>>5)+((p2_439&16)>>4);
                if(                size_440>4) {
                    ((struct tuple2$2int$bool$*)(__right_value731=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    /*c*/ come_call_finalizer3(__right_value731,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    info->err_num++;
                }
                else {
                    memcpy(str_441,info->p,size_440);
                    str_441[size_440]=0;
                    if(                    mbtowc(&c_432,str_441,size_440)<0) {
                        perror("mbtowc");
                        ((struct tuple2$2int$bool$*)(__right_value732=err_msg(info,"invalid utf-8 character. mbtowc")));
                        /*c*/ come_call_finalizer3(__right_value732,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        info->err_num++;
                    }
                    else {
                        info->p+=size_440;
                    }
                }
            }
            else {
                c_432=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            ((struct tuple2$2int$bool$*)(__right_value733=err_msg(info,"close \' to make character value")));
            /*c*/ come_call_finalizer3(__right_value733,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_431;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2262, "struct sNode");
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value735=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "06str.c", 2262, "struct sWCharNode*")),c_432,quote_433,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result_obj__156 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value738=_inf_value11)));
            /*c*/ come_call_finalizer3(__right_value735,sWCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value738) ? __right_value738 = come_decrement_ref_count(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__156) ? __result_obj__156 = come_decrement_ref_count(__result_obj__156, ((struct sNode*)__result_obj__156)->finalize, ((struct sNode*)__result_obj__156)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__156;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_443=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_444=info->sline;
        value_445=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2273, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_446=info->p;
                sline_447=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_446;
                    info->sline=sline_447;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_445,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_445,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_445,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_448=info->sline;
                info->sline=sline_444;
                ((struct tuple2$2int$bool$*)(__right_value741=err_msg(info,"close \" to make c string value")));
                /*c*/ come_call_finalizer3(__right_value741,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_445,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_449=value_445->len;
        wstr_450=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc_v2(1, sizeof(unsigned int)*(1*(len_449+1)), "06str.c", 2324, "unsigned int*"));
        str_451=value_445->buf;
        if(        mbstowcs(wstr_450,str_451,len_449+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_450[len_449]=0;
        info->sline_real=sline_real_443;
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2336, "struct sNode");
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value744=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "06str.c", 2336, "struct sWStringNode*")),(unsigned int*)come_increment_ref_count(wstr_450),sline_444,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result_obj__159 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value748=_inf_value12)));
        /*c*/ come_call_finalizer3(value_445,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_450 = come_decrement_ref_count(wstr_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value744,sWStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value748) ? __right_value748 = come_decrement_ref_count(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__159) ? __result_obj__159 = come_decrement_ref_count(__result_obj__159, ((struct sNode*)__result_obj__159)->finalize, ((struct sNode*)__result_obj__159)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__159;
        /*c*/ come_call_finalizer3(value_445,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_450 = come_decrement_ref_count(wstr_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_453=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_454=info->sline;
        exps_455=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2346, "struct list$1sNode$ph*"))));
        value_456=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2347, "struct buffer*"))));
        while(        1) {
            if(            *info->p==34) {
                info->p++;
                p_457=info->p;
                sline_458=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_457;
                    info->sline=sline_458;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_456,37);
                buffer_append_char(value_456,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_456,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_459=0;
                    while(                    xisdigit(*info->p)&&len_459<3) {
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        len_459++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_456,*info->p);
                    info->p++;
                    while(                    *info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_460=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_455,(struct sNode*)come_increment_ref_count(exp_460));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_456,"%s");
                    ((exp_460) ? exp_460 = come_decrement_ref_count(exp_460, ((struct sNode*)exp_460)->finalize, ((struct sNode*)exp_460)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_456,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_461=info->sline;
                info->sline=sline_454;
                ((struct tuple2$2int$bool$*)(__right_value754=err_msg(info,"close \" to make embbeded string value")));
                /*c*/ come_call_finalizer3(__right_value754,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_456,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_453;
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2495, "struct sNode");
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value757=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 2495, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_456)),(struct list$1sNode$ph*)come_increment_ref_count(exps_455),sline_454,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result_obj__160 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value758=_inf_value13)));
        /*c*/ come_call_finalizer3(exps_455,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_456,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value757,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value758) ? __right_value758 = come_decrement_ref_count(__right_value758, ((struct sNode*)__right_value758)->finalize, ((struct sNode*)__right_value758)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__160) ? __result_obj__160 = come_decrement_ref_count(__result_obj__160, ((struct sNode*)__result_obj__160)->finalize, ((struct sNode*)__result_obj__160)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__160;
        /*c*/ come_call_finalizer3(exps_455,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_456,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_462=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_463=info->p;
        no_comma_464=info->no_comma;
        info->no_comma=(_Bool)1;
        node_465=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_464;
        p2_466=info->p;
        first_element_source_467=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2514, "struct buffer*"))));
        buffer_append(first_element_source_467,p_463,p2_466-p_463);
        buffer_append_char(first_element_source_467,0);
        list_elements_468=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2519, "struct list$1sNode$ph*"))));
        map_keys_469=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2521, "struct list$1sNode$ph*"))));
        map_elements_470=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2522, "struct list$1sNode$ph*"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys_469,(struct sNode*)come_increment_ref_count(node_465));
            no_comma_471=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_472=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_471;
            list$1sNode$ph_push_back(map_elements_470,(struct sNode*)come_increment_ref_count(node2_472));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2545, "struct sNode");
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value770=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2545, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_469),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_470),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result_obj__163 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value775=_inf_value14)));
                ((node2_472) ? node2_472 = come_decrement_ref_count(node2_472, ((struct sNode*)node2_472)->finalize, ((struct sNode*)node2_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_465) ? node_465 = come_decrement_ref_count(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_467,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_468,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_469,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_470,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value770,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value775) ? __right_value775 = come_decrement_ref_count(__right_value775, ((struct sNode*)__right_value775)->finalize, ((struct sNode*)__right_value775)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__163) ? __result_obj__163 = come_decrement_ref_count(__result_obj__163, ((struct sNode*)__result_obj__163)->finalize, ((struct sNode*)__result_obj__163)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__163;
            }
            else {
                expected_next_character(44,info);
                while(                (_Bool)1) {
                    no_comma_474=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_475=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_474;
                    list$1sNode$ph_push_back(map_keys_469,(struct sNode*)come_increment_ref_count(node2_475));
                    expected_next_character(58,info);
                    no_comma_474=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_476=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_474;
                    list$1sNode$ph_push_back(map_elements_470,(struct sNode*)come_increment_ref_count(node3_476));
                    if(                    *info->p==0) {
                        ((struct tuple2$2int$bool$*)(__right_value778=err_msg(info,"invalid source end")));
                        /*c*/ come_call_finalizer3(__right_value778,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_475) ? node2_475 = come_decrement_ref_count(node2_475, ((struct sNode*)node2_475)->finalize, ((struct sNode*)node2_475)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        ((node3_476) ? node3_476 = come_decrement_ref_count(node3_476, ((struct sNode*)node3_476)->finalize, ((struct sNode*)node3_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value779=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        /*c*/ come_call_finalizer3(__right_value779,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                    ((node2_475) ? node2_475 = come_decrement_ref_count(node2_475, ((struct sNode*)node2_475)->finalize, ((struct sNode*)node2_475)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node3_476) ? node3_476 = come_decrement_ref_count(node3_476, ((struct sNode*)node3_476)->finalize, ((struct sNode*)node3_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2590, "struct sNode");
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value781=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2590, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_469),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_470),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result_obj__164 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value782=_inf_value15)));
                ((node2_472) ? node2_472 = come_decrement_ref_count(node2_472, ((struct sNode*)node2_472)->finalize, ((struct sNode*)node2_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_465) ? node_465 = come_decrement_ref_count(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_467,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_468,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_469,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_470,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value781,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value782) ? __right_value782 = come_decrement_ref_count(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__164) ? __result_obj__164 = come_decrement_ref_count(__result_obj__164, ((struct sNode*)__result_obj__164)->finalize, ((struct sNode*)__result_obj__164)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__164;
            }
            ((node2_472) ? node2_472 = come_decrement_ref_count(node2_472, ((struct sNode*)node2_472)->finalize, ((struct sNode*)node2_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_468,(struct sNode*)come_increment_ref_count(node_465));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_468,(struct sNode*)come_increment_ref_count(node_465));
            while(            (_Bool)1) {
                no_comma_477=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_478=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_477;
                list$1sNode$ph_push_back(list_elements_468,(struct sNode*)come_increment_ref_count(node2_478));
                if(                *info->p==0) {
                    ((struct tuple2$2int$bool$*)(__right_value784=err_msg(info,"invalid source end")));
                    /*c*/ come_call_finalizer3(__right_value784,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_478) ? node2_478 = come_decrement_ref_count(node2_478, ((struct sNode*)node2_478)->finalize, ((struct sNode*)node2_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value785=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    /*c*/ come_call_finalizer3(__right_value785,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                }
                ((node2_478) ? node2_478 = come_decrement_ref_count(node2_478, ((struct sNode*)node2_478)->finalize, ((struct sNode*)node2_478)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value786=err_msg(info,"invalid character(5)(%c)",*info->p)));
            /*c*/ come_call_finalizer3(__right_value786,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
        }
        if(        list$1sNode$ph_length(list_elements_468)>0) {
            info->sline_real=sline_real_462;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2642, "struct sNode");
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value788=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "06str.c", 2642, "struct sListNode*")),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_468),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result_obj__167 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value792=_inf_value16)));
            ((node_465) ? node_465 = come_decrement_ref_count(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(first_element_source_467,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(list_elements_468,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_keys_469,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_elements_470,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value788,sListNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value792) ? __right_value792 = come_decrement_ref_count(__right_value792, ((struct sNode*)__right_value792)->finalize, ((struct sNode*)__right_value792)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__167) ? __result_obj__167 = come_decrement_ref_count(__result_obj__167, ((struct sNode*)__result_obj__167)->finalize, ((struct sNode*)__result_obj__167)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__167;
        }
        else {
        }
        ((node_465) ? node_465 = come_decrement_ref_count(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(first_element_source_467,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(list_elements_468,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_keys_469,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_elements_470,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        node_480=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__168 = (struct sNode*)come_increment_ref_count(node_480);
        ((node_480) ? node_480 = come_decrement_ref_count(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__168;
        ((node_480) ? node_480 = come_decrement_ref_count(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__169 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__169;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__142;
void* __right_value606 = (void*)0;
struct sSStringNode* result_381;
void* __right_value607 = (void*)0;
char* __dec_obj136;
void* __right_value608 = (void*)0;
char* __dec_obj137;
void* __right_value609 = (void*)0;
struct list$1sNode$ph* __dec_obj138;
struct sSStringNode* __result_obj__143;
    if(    self==(void*)0) {
        __result_obj__142 = (void*)0;
        return __result_obj__142;
    }
    result_381=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*"));
    if(    self!=((void*)0)) {
        result_381->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj136=result_381->sname,
        result_381->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSStringNode_clone", 5, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj137=result_381->value,
        result_381->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sSStringNode_clone", 7, "char*"));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj138=result_381->exps,
        result_381->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj138,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__143 = result_381;
    /*c*/ come_call_finalizer3(result_381,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__143;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__146;
void* __right_value623 = (void*)0;
struct sBufferNode* result_396;
void* __right_value624 = (void*)0;
char* __dec_obj139;
void* __right_value625 = (void*)0;
struct buffer* __dec_obj140;
struct sBufferNode* __result_obj__147;
    if(    self==(void*)0) {
        __result_obj__146 = (void*)0;
        return __result_obj__146;
    }
    result_396=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*"));
    if(    self!=((void*)0)) {
        result_396->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj139=result_396->sname,
        result_396->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBufferNode_clone", 5, "char*"));
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_396->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj140=result_396->value,
        result_396->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        /*b*/ come_call_finalizer3(__dec_obj140,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_396->size=self->size;
    }
    __result_obj__147 = result_396;
    /*c*/ come_call_finalizer3(result_396,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__147;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__151;
void* __right_value728 = (void*)0;
struct sCharNode* result_430;
void* __right_value729 = (void*)0;
char* __dec_obj141;
struct sCharNode* __result_obj__152;
    if(    self==(void*)0) {
        __result_obj__151 = (void*)0;
        return __result_obj__151;
    }
    result_430=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*"));
    if(    self!=((void*)0)) {
        result_430->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj141=result_430->sname,
        result_430->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCharNode_clone", 5, "char*"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_430->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_430->value=self->value;
    }
    __result_obj__152 = result_430;
    /*c*/ come_call_finalizer3(result_430,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__152;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__154;
void* __right_value736 = (void*)0;
struct sWCharNode* result_442;
void* __right_value737 = (void*)0;
char* __dec_obj142;
struct sWCharNode* __result_obj__155;
    if(    self==(void*)0) {
        __result_obj__154 = (void*)0;
        return __result_obj__154;
    }
    result_442=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*"));
    if(    self!=((void*)0)) {
        result_442->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj142=result_442->sname,
        result_442->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWCharNode_clone", 5, "char*"));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_442->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_442->quote=self->quote;
    }
    __result_obj__155 = result_442;
    /*c*/ come_call_finalizer3(result_442,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__155;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__157;
void* __right_value745 = (void*)0;
struct sWStringNode* result_452;
void* __right_value746 = (void*)0;
char* __dec_obj143;
void* __right_value747 = (void*)0;
unsigned int* __dec_obj144;
struct sWStringNode* __result_obj__158;
    if(    self==(void*)0) {
        __result_obj__157 = (void*)0;
        return __result_obj__157;
    }
    result_452=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*"));
    if(    self!=((void*)0)) {
        result_452->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj143=result_452->sname,
        result_452->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWStringNode_clone", 5, "char*"));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_452->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj144=result_452->value,
        result_452->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__158 = result_452;
    /*c*/ come_call_finalizer3(result_452,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__158;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__161;
void* __right_value771 = (void*)0;
struct sMapNode* result_473;
void* __right_value772 = (void*)0;
char* __dec_obj145;
void* __right_value773 = (void*)0;
struct list$1sNode$ph* __dec_obj146;
void* __right_value774 = (void*)0;
struct list$1sNode$ph* __dec_obj147;
struct sMapNode* __result_obj__162;
    if(    self==(void*)0) {
        __result_obj__161 = (void*)0;
        return __result_obj__161;
    }
    result_473=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*"));
    if(    self!=((void*)0)) {
        result_473->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj145=result_473->sname,
        result_473->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMapNode_clone", 5, "char*"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_473->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj146=result_473->map_key_elements,
        result_473->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements));
        /*b*/ come_call_finalizer3(__dec_obj146,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj147=result_473->map_elements,
        result_473->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements));
        /*b*/ come_call_finalizer3(__dec_obj147,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__162 = result_473;
    /*c*/ come_call_finalizer3(result_473,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__162;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__165;
void* __right_value789 = (void*)0;
struct sListNode* result_479;
void* __right_value790 = (void*)0;
char* __dec_obj148;
void* __right_value791 = (void*)0;
struct list$1sNode$ph* __dec_obj149;
struct sListNode* __result_obj__166;
    if(    self==(void*)0) {
        __result_obj__165 = (void*)0;
        return __result_obj__165;
    }
    result_479=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*"));
    if(    self!=((void*)0)) {
        result_479->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj148=result_479->sname,
        result_479->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sListNode_clone", 5, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_479->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj149=result_479->list_elements,
        result_479->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements));
        /*b*/ come_call_finalizer3(__dec_obj149,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__166 = result_479;
    /*c*/ come_call_finalizer3(result_479,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__166;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_481;
char* p_482;
char* name_483;
void* __right_value796 = (void*)0;
char* __dec_obj150;
_Bool no_comma_484;
void* __right_value797 = (void*)0;
struct sNode* node_485;
void* __right_value798 = (void*)0;
struct sNode* __dec_obj151;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value815 = (void*)0;
struct sNode* __result_obj__175;
name_483 = (void*)0;
    tuple_elements_481=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2657, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    while(    (_Bool)1) {
        p_482=info->p;
        if(        named_tuple) {
            __dec_obj150=name_483,
            name_483=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_484=info->no_comma;
        info->no_comma=(_Bool)1;
        node_485=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj151=node_485,
        node_485=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_485),info));
        (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_484;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements_481,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2676, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_483, "06str.c", 2676, "char*")),(struct sNode*)come_increment_ref_count(node_485))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_483 = come_decrement_ref_count(name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_485) ? node_485 = come_decrement_ref_count(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value805=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            /*c*/ come_call_finalizer3(__right_value805,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
        }
        (name_483 = come_decrement_ref_count(name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_485) ? node_485 = come_decrement_ref_count(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2693, "struct sNode");
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value807=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "06str.c", 2693, "struct sTupleNode*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_481),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result_obj__175 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value815=_inf_value17)));
    /*c*/ come_call_finalizer3(tuple_elements_481,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value807,sTupleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value815) ? __right_value815 = come_decrement_ref_count(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__175;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value799 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_486;
struct tuple2$2char$phsNode$ph* __dec_obj152;
void* __right_value800 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_487;
struct tuple2$2char$phsNode$ph* __dec_obj153;
void* __right_value801 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_488;
struct tuple2$2char$phsNode$ph* __dec_obj154;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__170;
    if(    self->len==0) {
        litem_486=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value799=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        __dec_obj152=litem_486->item,
        litem_486->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj152,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1) {
        litem_487=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value800=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        __dec_obj153=litem_487->item,
        litem_487->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj153,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value801=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        __dec_obj154=litem_488->item,
        litem_488->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj154,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result_obj__170 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__171;
void* __right_value808 = (void*)0;
struct sTupleNode* result_489;
void* __right_value809 = (void*)0;
char* __dec_obj155;
void* __right_value814 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj156;
struct sTupleNode* __result_obj__174;
    if(    self==(void*)0) {
        __result_obj__171 = (void*)0;
        return __result_obj__171;
    }
    result_489=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*"));
    if(    self!=((void*)0)) {
        result_489->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_489->sname,
        result_489->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTupleNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj156=result_489->tuple_elements,
        result_489->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj156,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__174 = result_489;
    /*c*/ come_call_finalizer3(result_489,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__174;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__172;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_490;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_491;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__173;
    if(    self==((void*)0)) {
        __result_obj__172 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__172,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__172;
    }
    result_490=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_491=self->head;
    while(    it_491!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_490,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_491->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_490,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_491->item)));
        }
        it_491=it_491->next;
    }
    __result_obj__173 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_490);
    /*c*/ come_call_finalizer3(result_490,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct list$1sNode$ph* tuple_elements_492;
struct sNode* node_493;
void* __right_value818 = (void*)0;
struct sNode* node2_494;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value824 = (void*)0;
struct sNode* __result_obj__178;
    tuple_elements_492=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2698, "struct list$1sNode$ph*"))));
    node_493=(struct sNode*)come_increment_ref_count(exp);
    list$1sNode$ph_push_back(tuple_elements_492,(struct sNode*)come_increment_ref_count(node_493));
    node2_494=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_492,(struct sNode*)come_increment_ref_count(node2_494));
    _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2708, "struct sNode");
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value820=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "06str.c", 2708, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_492),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result_obj__178 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value824=_inf_value18)));
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(tuple_elements_492,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_493) ? node_493 = come_decrement_ref_count(node_493, ((struct sNode*)node_493)->finalize, ((struct sNode*)node_493)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_494) ? node2_494 = come_decrement_ref_count(node2_494, ((struct sNode*)node2_494)->finalize, ((struct sNode*)node2_494)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value820,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value824) ? __right_value824 = come_decrement_ref_count(__right_value824, ((struct sNode*)__right_value824)->finalize, ((struct sNode*)__right_value824)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__178;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
struct sSomeNode* __result_obj__176;
void* __right_value821 = (void*)0;
struct sSomeNode* result_495;
void* __right_value822 = (void*)0;
char* __dec_obj157;
void* __right_value823 = (void*)0;
struct list$1sNode$ph* __dec_obj158;
struct sSomeNode* __result_obj__177;
    if(    self==(void*)0) {
        __result_obj__176 = (void*)0;
        return __result_obj__176;
    }
    result_495=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*"));
    if(    self!=((void*)0)) {
        result_495->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_495->sname,
        result_495->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSomeNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_495->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj158=result_495->tuple_elements,
        result_495->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj158,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__177 = result_495;
    /*c*/ come_call_finalizer3(result_495,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__177;
}

struct sNode* parse_some(struct sInfo* info){
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1sNode$ph* tuple_elements_496;
void* __right_value827 = (void*)0;
struct sNode* node_497;
void* __right_value828 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value829 = (void*)0;
struct sNode* node2_498;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value832 = (void*)0;
struct sNode* __result_obj__179;
    tuple_elements_496=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2713, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_497=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj159=node_497,
    node_497=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_497),info));
    (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    list$1sNode$ph_push_back(tuple_elements_496,(struct sNode*)come_increment_ref_count(node_497));
    node2_498=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_496,(struct sNode*)come_increment_ref_count(node2_498));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2726, "struct sNode");
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value831=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc_v2(1, sizeof(struct sSomeNode)*(1), "06str.c", 2726, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_496),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result_obj__179 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value832=_inf_value19)));
    /*c*/ come_call_finalizer3(tuple_elements_496,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_497) ? node_497 = come_decrement_ref_count(node_497, ((struct sNode*)node_497)->finalize, ((struct sNode*)node_497)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_498) ? node2_498 = come_decrement_ref_count(node2_498, ((struct sNode*)node2_498)->finalize, ((struct sNode*)node2_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value831,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value832) ? __right_value832 = come_decrement_ref_count(__right_value832, ((struct sNode*)__right_value832)->finalize, ((struct sNode*)__right_value832)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__179;
}

struct sNode* parse_none(struct sInfo* info){
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct list$1sNode$ph* tuple_elements_499;
void* __right_value835 = (void*)0;
struct sNode* node_500;
void* __right_value836 = (void*)0;
struct sNode* __dec_obj160;
void* __right_value837 = (void*)0;
struct sNode* node2_501;
struct sNode* node3_502;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value843 = (void*)0;
struct sNode* __result_obj__182;
    tuple_elements_499=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2731, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_500=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj160=node_500,
    node_500=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_500),info));
    (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    node2_501=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNode$ph_push_back(tuple_elements_499,(struct sNode*)come_increment_ref_count(node2_501));
    node3_502=(struct sNode*)come_increment_ref_count(node_500);
    list$1sNode$ph_push_back(tuple_elements_499,(struct sNode*)come_increment_ref_count(node3_502));
    _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2746, "struct sNode");
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value839=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc_v2(1, sizeof(struct sNoneNode)*(1), "06str.c", 2746, "struct sNoneNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_499),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result_obj__182 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value843=_inf_value20)));
    /*c*/ come_call_finalizer3(tuple_elements_499,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_500) ? node_500 = come_decrement_ref_count(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_501) ? node2_501 = come_decrement_ref_count(node2_501, ((struct sNode*)node2_501)->finalize, ((struct sNode*)node2_501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node3_502) ? node3_502 = come_decrement_ref_count(node3_502, ((struct sNode*)node3_502)->finalize, ((struct sNode*)node3_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value839,sNoneNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value843) ? __right_value843 = come_decrement_ref_count(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__182;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
struct sNoneNode* __result_obj__180;
void* __right_value840 = (void*)0;
struct sNoneNode* result_503;
void* __right_value841 = (void*)0;
char* __dec_obj161;
void* __right_value842 = (void*)0;
struct list$1sNode$ph* __dec_obj162;
struct sNoneNode* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__180 = (void*)0;
        return __result_obj__180;
    }
    result_503=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc_v2(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*"));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_503->sname,
        result_503->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNoneNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_503->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj162=result_503->tuple_elements,
        result_503->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj162,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__181 = result_503;
    /*c*/ come_call_finalizer3(result_503,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__181;
}

