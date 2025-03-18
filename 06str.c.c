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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
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
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
char* __dec_obj16;
struct sStrNode* __result_obj__167;
    ((struct sNodeBase*)(__right_value186=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value186,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__167 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__167,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value188 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = come_increment_ref_count(((char*)(__right_value188=__builtin_string("sStrNode"))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__168;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct CVALUE* come_value_249;
void* __right_value191 = (void*)0;
char* __dec_obj17;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sType* __dec_obj18;
_Bool __result_obj__170;
    come_value_249=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*"))));
    __dec_obj17=come_value_249->c_value,
    come_value_249->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj18=come_value_249->type,
    come_value_249->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_249->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_249));
    add_come_last_code(info,"%s",come_value_249->c_value);
    __result_obj__170 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_249,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
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
struct list_item$1sType$ph* it_250;
struct list_item$1sType$ph* prev_it_251;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        /*c*/ come_call_finalizer3(prev_it_251,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_252;
struct list_item$1sNode$ph* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        /*c*/ come_call_finalizer3(prev_it_253,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value195 = (void*)0;
struct list_item$1CVALUE$ph* litem_254;
struct CVALUE* __dec_obj19;
void* __right_value196 = (void*)0;
struct list_item$1CVALUE$ph* litem_255;
struct CVALUE* __dec_obj20;
void* __right_value197 = (void*)0;
struct list_item$1CVALUE$ph* litem_256;
struct CVALUE* __dec_obj21;
struct list$1CVALUE$ph* __result_obj__169;
    if(    self->len==0) {
        litem_254=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value195=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_254->prev=((void*)0);
        litem_254->next=((void*)0);
        __dec_obj19=litem_254->item,
        litem_254->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_254;
        self->head=litem_254;
    }
    else if(    self->len==1) {
        litem_255=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value196=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_255->prev=self->head;
        litem_255->next=((void*)0);
        __dec_obj20=litem_255->item,
        litem_255->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_255;
        self->head->next=litem_255;
    }
    else {
        litem_256=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value197=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_256->prev=self->tail;
        litem_256->next=((void*)0);
        __dec_obj21=litem_256->item,
        litem_256->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_256;
        self->tail=litem_256;
    }
    self->len++;
    __result_obj__169 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
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
void* __right_value198 = (void*)0;
struct buffer* __dec_obj22;
struct sBufferNode* __result_obj__171;
    ((struct sNodeBase*)(__right_value198=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value198,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj22=self->value,
    self->value=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result_obj__171 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value199 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = come_increment_ref_count(((char*)(__right_value199=__builtin_string("sBufferNode"))));
    (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__172;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_257;
unsigned long  int size_258;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct CVALUE* come_value_259;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct buffer* buf_260;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct sType* type2_261;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sType* any_type_262;
void* __right_value210 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
char* finalizer_name_263=0;
char* cloner_name_264=0;
char* get_hash_key_name_265=0;
char* equaler_name_266=0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sType* type2_267;
void* __right_value215 = (void*)0;
char* __dec_obj23;
void* __right_value254 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__188;
    value_257=(struct buffer*)come_increment_ref_count(self->value);
    size_258=self->size;
    come_value_259=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*"))));
    buf_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*"))));
    type2_261=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    type2_261->mPointerNum++;
    any_type_262=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    any_type_262->mPointerNum=1;
    any_type_262->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value210=create_vtable((struct sType*)come_increment_ref_count(any_type_262),info)));
    finalizer_name_263=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_264=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_265=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_266=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    /*c*/ come_call_finalizer3(__right_value210,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_format(buf_260,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\"), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value211=buffer_to_string(value_257))),size_258);
    (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type2_267=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 69, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info));
    type2_267->mHeap=(_Bool)1;
    __dec_obj23=come_value_259->c_value,
    come_value_259->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_260));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_259->type,
    come_value_259->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_267));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_259->var=((void*)0);
    append_object_to_right_values2(come_value_259,(struct sType*)come_increment_ref_count(type2_267),info,(_Bool)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_259));
    add_come_last_code(info,"%s",come_value_259->c_value);
    __result_obj__188 = (_Bool)1;
    /*c*/ come_call_finalizer3(value_257,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_259,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_260,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(any_type_262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_263 = come_decrement_ref_count(finalizer_name_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_264 = come_decrement_ref_count(cloner_name_264, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_265 = come_decrement_ref_count(get_hash_key_name_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_266 = come_decrement_ref_count(equaler_name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_267,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
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

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__173;
void* __right_value216 = (void*)0;
struct sType* result_268;
void* __right_value217 = (void*)0;
struct sType* __dec_obj24;
void* __right_value218 = (void*)0;
struct sType* __dec_obj25;
void* __right_value226 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value227 = (void*)0;
struct sType* __dec_obj30;
void* __right_value228 = (void*)0;
struct sType* __dec_obj31;
void* __right_value230 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value231 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value232 = (void*)0;
char* __dec_obj34;
void* __right_value233 = (void*)0;
char* __dec_obj35;
void* __right_value234 = (void*)0;
char* __dec_obj36;
void* __right_value242 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value243 = (void*)0;
char* __dec_obj41;
void* __right_value244 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value252 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value253 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__187;
    if(    self==(void*)0) {
        __result_obj__173 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__173,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__173;
    }
    result_268=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_268->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_268->mOriginalLoadVarType,
        result_268->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_268->mChannelType,
        result_268->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_268->mGenericsTypes,
        result_268->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_268->mNoSolvedGenericsType,
        result_268->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_268->mAnyOriginalType,
        result_268->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_268->mSizeNum,
        result_268->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_268->mAlignas,
        result_268->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_268->mTupleName,
        result_268->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_268->mAttribute,
        result_268->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        __dec_obj36=result_268->mAsmName,
        result_268->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        __dec_obj40=result_268->mArrayNum,
        result_268->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
        __dec_obj41=result_268->mOriginalTypeName,
        result_268->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        __dec_obj42=result_268->mParamTypes,
        result_268->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_268->mParamNames,
        result_268->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_268->mResultType,
        result_268->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mVarArgs=self->mVarArgs;
    }
    __result_obj__187 = come_increment_ref_count(result_268);
    /*c*/ come_call_finalizer3(result_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__174;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1sType$ph* result_269;
struct list_item$1sType$ph* it_270;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1sType$ph* __result_obj__177;
    if(    self==((void*)0)) {
        __result_obj__174 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
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
    __result_obj__177 = come_increment_ref_count(result_269);
    /*c*/ come_call_finalizer3(result_269,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__175;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value221 = (void*)0;
struct list_item$1sType$ph* litem_271;
struct sType* __dec_obj26;
void* __right_value222 = (void*)0;
struct list_item$1sType$ph* litem_272;
struct sType* __dec_obj27;
void* __right_value223 = (void*)0;
struct list_item$1sType$ph* litem_273;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__176;
    if(    self->len==0) {
        litem_271=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value221=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj26=litem_271->item,
        litem_271->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1) {
        litem_272=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value222=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj27=litem_272->item,
        litem_272->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value223=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj28=litem_273->item,
        litem_273->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result_obj__176 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
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
struct sNode* __result_obj__178;
void* __right_value229 = (void*)0;
struct sNode* result_276;
struct sNode* __result_obj__179;
    if(    self==(void*)0) {
        __result_obj__178 = come_increment_ref_count((void*)0);
        ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__178;
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
    __result_obj__179 = come_increment_ref_count(result_276);
    ((result_276) ? result_276 = come_decrement_ref_count(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__179;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__180;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1sNode$ph* result_277;
struct list_item$1sNode$ph* it_278;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1sNode$ph* __result_obj__183;
    if(    self==((void*)0)) {
        __result_obj__180 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__180,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__180;
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
    __result_obj__183 = come_increment_ref_count(result_277);
    /*c*/ come_call_finalizer3(result_277,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__181;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__181 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value237 = (void*)0;
struct list_item$1sNode$ph* litem_279;
struct sNode* __dec_obj37;
void* __right_value238 = (void*)0;
struct list_item$1sNode$ph* litem_280;
struct sNode* __dec_obj38;
void* __right_value239 = (void*)0;
struct list_item$1sNode$ph* litem_281;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__182;
    if(    self->len==0) {
        litem_279=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value237=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj37=litem_279->item,
        litem_279->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value238=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj38=litem_280->item,
        litem_280->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value239=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj39=litem_281->item,
        litem_281->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__182 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__182;
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
struct list$1char$ph* __result_obj__184;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1char$ph* result_284;
struct list_item$1char$ph* it_285;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1char$ph* __result_obj__186;
    if(    self==((void*)0)) {
        __result_obj__184 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__184,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__184;
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
    __result_obj__186 = come_increment_ref_count(result_284);
    /*c*/ come_call_finalizer3(result_284,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__186,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value247 = (void*)0;
struct list_item$1char$ph* litem_286;
char* __dec_obj43;
void* __right_value248 = (void*)0;
struct list_item$1char$ph* litem_287;
char* __dec_obj44;
void* __right_value249 = (void*)0;
struct list_item$1char$ph* litem_288;
char* __dec_obj45;
struct list$1char$ph* __result_obj__185;
    if(    self->len==0) {
        litem_286=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value247=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj43=litem_286->item,
        litem_286->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value248=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj44=litem_287->item,
        litem_287->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value249=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj45=litem_288->item,
        litem_288->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__185 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__185;
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

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* __dec_obj49;
void* __right_value257 = (void*)0;
struct list$1sNode$ph* __dec_obj50;
struct sSStringNode* __result_obj__189;
    ((struct sNodeBase*)(__right_value255=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value255,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj49=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj50=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, exps));
    /*b*/ come_call_finalizer3(__dec_obj50,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__189 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value258 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = come_increment_ref_count(((char*)(__right_value258=__builtin_string("sSStringNode"))));
    (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__190;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct CVALUE* come_value_291;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct buffer* buf_292;
struct list$1sNode$ph* o2_saved_293;
struct sNode* it_296;
void* __right_value263 = (void*)0;
struct sNode* obj_299;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_300;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sNode* node_308;
_Bool Value_309;
_Bool __result_obj__202;
void* __right_value277 = (void*)0;
struct CVALUE* come_value_310;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* type2_311;
void* __right_value281 = (void*)0;
char* __dec_obj58;
void* __right_value282 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__203;
    come_value_291=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 103, "struct CVALUE*"))));
    buf_292=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 105, "struct buffer*"))));
    buffer_append_str(buf_292,"xsprintf(\"");
    buffer_append_str(buf_292,self->value);
    buffer_append_str(buf_292,"\"");
    if(    list$1sNode$ph_length(self->exps)>0) {
        for(        o2_saved_293=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_296=list$1sNode$ph_begin((o2_saved_293));        !list$1sNode$ph_end((o2_saved_293));        it_296=list$1sNode$ph_next((o2_saved_293))        ){
            obj_299=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_296));
            params_300=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 115, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_300,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 116, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_296)))));
            node_308=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_299),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_300),((void*)0),0,((void*)0),info));
            Value_309=node_compile(node_308,info);
            if(            !Value_309) {
                __result_obj__202 = (_Bool)0;
                ((obj_299) ? obj_299 = come_decrement_ref_count(obj_299, ((struct sNode*)obj_299)->finalize, ((struct sNode*)obj_299)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_300,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_308) ? node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(o2_saved_293,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_291,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_292,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__202;
            }
            else {
            }
            come_value_310=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_292,",");
            buffer_append_str(buf_292,come_value_310->c_value);
            ((obj_299) ? obj_299 = come_decrement_ref_count(obj_299, ((struct sNode*)obj_299)->finalize, ((struct sNode*)obj_299)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_300,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_308) ? node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_310,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_293,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buffer_append_str(buf_292,")");
    type2_311=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 133, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    type2_311->mHeap=(_Bool)1;
    __dec_obj58=come_value_291->c_value,
    come_value_291->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_292));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj59=come_value_291->type,
    come_value_291->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_311));
    /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_291->var=((void*)0);
    append_object_to_right_values2(come_value_291,(struct sType*)come_increment_ref_count(type2_311),info,(_Bool)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_291));
    add_come_last_code(info,"%s",come_value_291->c_value);
    __result_obj__203 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_291,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_292,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
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
struct sNode* result_294;
struct sNode* __result_obj__191;
struct sNode* __result_obj__192;
struct sNode* result_295;
struct sNode* __result_obj__193;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_294,0,sizeof(struct sNode*));
        __result_obj__191 = result_294;
        return __result_obj__191;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__192 = self->it->item;
        return __result_obj__192;
    }
    memset(&result_295,0,sizeof(struct sNode*));
    __result_obj__193 = result_295;
    return __result_obj__193;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_297;
struct sNode* __result_obj__194;
struct sNode* __result_obj__195;
struct sNode* result_298;
struct sNode* __result_obj__196;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_297,0,sizeof(struct sNode*));
        __result_obj__194 = result_297;
        return __result_obj__194;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__195 = self->it->item;
        return __result_obj__195;
    }
    memset(&result_298,0,sizeof(struct sNode*));
    __result_obj__196 = result_298;
    return __result_obj__196;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__197;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__197 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_301;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_302;
    it_301=self->head;
    while(it_301!=((void*)0)) {
        prev_it_302=it_301;
        it_301=it_301->next;
        /*c*/ come_call_finalizer3(prev_it_302,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value266 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_303;
struct tuple2$2char$phsNode$ph* __dec_obj51;
void* __right_value267 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_304;
struct tuple2$2char$phsNode$ph* __dec_obj52;
void* __right_value268 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_305;
struct tuple2$2char$phsNode$ph* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__198;
    if(    self->len==0) {
        litem_303=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value266=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_303->prev=((void*)0);
        litem_303->next=((void*)0);
        __dec_obj51=litem_303->item,
        litem_303->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_303;
        self->head=litem_303;
    }
    else if(    self->len==1) {
        litem_304=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value267=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_304->prev=self->head;
        litem_304->next=((void*)0);
        __dec_obj52=litem_304->item,
        litem_304->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_304;
        self->head->next=litem_304;
    }
    else {
        litem_305=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value268=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_305->prev=self->tail;
        litem_305->next=((void*)0);
        __dec_obj53=litem_305->item,
        litem_305->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_305;
        self->tail=litem_305;
    }
    self->len++;
    __result_obj__198 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
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
struct tuple2$2char$phsNode$ph* __result_obj__199;
void* __right_value271 = (void*)0;
struct tuple2$2char$phsNode$ph* result_306;
void* __right_value272 = (void*)0;
char* __dec_obj54;
void* __right_value273 = (void*)0;
struct sNode* __dec_obj55;
struct tuple2$2char$phsNode$ph* __result_obj__200;
    if(    self==(void*)0) {
        __result_obj__199 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__199,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__199;
    }
    result_306=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_306->v1,
        result_306->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_306->v2,
        result_306->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__200 = come_increment_ref_count(result_306);
    /*c*/ come_call_finalizer3(result_306,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__200,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_307;
    result_307=0;
    result_307+=int_get_hash_key(((int)self->v1));
    result_307+=int_get_hash_key(((int)self->v2));
    return result_307;
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
char* __dec_obj56;
struct sNode* __dec_obj57;
struct tuple2$2char$phsNode$ph* __result_obj__201;
    __dec_obj56=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__201 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value283 = (void*)0;
struct sCharNode* __result_obj__204;
    ((struct sNodeBase*)(__right_value283=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value283,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__204 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__204,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value284 = (void*)0;
char* __result_obj__205;
    __result_obj__205 = come_increment_ref_count(((char*)(__right_value284=__builtin_string("sCharNode"))));
    (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__205;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct CVALUE* come_value_312;
void* __right_value287 = (void*)0;
char* __dec_obj60;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__206;
    come_value_312=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 166, "struct CVALUE*"))));
    __dec_obj60=come_value_312->c_value,
    come_value_312->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj61=come_value_312->type,
    come_value_312->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 169, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_312->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_312));
    add_come_last_code(info,"%s",come_value_312->c_value);
    __result_obj__206 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_312,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __right_value291 = (void*)0;
struct sWCharNode* __result_obj__207;
    ((struct sNodeBase*)(__right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value291,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__207 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value292 = (void*)0;
char* __result_obj__208;
    __result_obj__208 = come_increment_ref_count(((char*)(__right_value292=__builtin_string("sWCharNode"))));
    (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__208 = come_decrement_ref_count(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__208;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_313;
void* __right_value295 = (void*)0;
char* __dec_obj62;
void* __right_value296 = (void*)0;
char* __dec_obj63;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__209;
    come_value_313=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 197, "struct CVALUE*"))));
    if(    self->quote) {
        __dec_obj62=come_value_313->c_value,
        come_value_313->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj63=come_value_313->c_value,
        come_value_313->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj64=come_value_313->type,
    come_value_313->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 205, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_313->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_313));
    add_come_last_code(info,"%s",come_value_313->c_value);
    __result_obj__209 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_313,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __right_value300 = (void*)0;
unsigned int* __dec_obj65;
struct sWStringNode* __result_obj__210;
    ((struct sNodeBase*)(__right_value300=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value300,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj65=self->value,
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__210 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__210,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value301 = (void*)0;
char* __result_obj__211;
    __result_obj__211 = come_increment_ref_count(((char*)(__right_value301=__builtin_string("sWStringNode"))));
    (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__211;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct CVALUE* come_value_314;
void* __right_value304 = (void*)0;
char* __dec_obj66;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__212;
    come_value_314=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 232, "struct CVALUE*"))));
    __dec_obj66=come_value_314->c_value,
    come_value_314->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj67=come_value_314->type,
    come_value_314->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 235, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_314->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_314));
    add_come_last_code(info,"%s",come_value_314->c_value);
    __result_obj__212 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_314,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
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
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
char* __dec_obj68;
struct sRegexNode* __result_obj__213;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value308,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj68=self->str,
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__213 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__213,sRegexNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value310 = (void*)0;
char* __result_obj__214;
    __result_obj__214 = come_increment_ref_count(((char*)(__right_value310=__builtin_string("sRegexNode"))));
    (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__214;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value316 = (void*)0;
struct sNode* obj_node_315;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_317;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* node_318;
_Bool Value_319;
_Bool __result_obj__217;
_Bool __result_obj__218;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 264, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value312=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 264, "struct sStrNode*")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_315=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value312,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    params_317=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 266, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 268, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_315))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 269, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 270, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 271, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 272, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph_add(params_317,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_318=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_315),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_317),((void*)0),info->sline,((void*)0),info));
    Value_319=node_compile(node_318,info);
    if(    !Value_319) {
        __result_obj__217 = (_Bool)0;
        ((obj_node_315) ? obj_node_315 = come_decrement_ref_count(obj_node_315, ((struct sNode*)obj_node_315)->finalize, ((struct sNode*)obj_node_315)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_317,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_318) ? node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__217;
    }
    else {
    }
    __result_obj__218 = (_Bool)1;
    ((obj_node_315) ? obj_node_315 = come_decrement_ref_count(obj_node_315, ((struct sNode*)obj_node_315)->finalize, ((struct sNode*)obj_node_315)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params_317,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_318) ? node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__218;
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
struct sStrNode* __result_obj__215;
void* __right_value313 = (void*)0;
struct sStrNode* result_316;
void* __right_value314 = (void*)0;
char* __dec_obj69;
void* __right_value315 = (void*)0;
char* __dec_obj70;
struct sStrNode* __result_obj__216;
    if(    self==(void*)0) {
        __result_obj__215 = (void*)0;
        return __result_obj__215;
    }
    result_316=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*"));
    if(    self!=((void*)0)) {
        result_316->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj69=result_316->sname,
        result_316->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStrNode_clone", 5, "char*"));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_316->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj70=result_316->value,
        result_316->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sStrNode_clone", 7, "char*"));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__216 = result_316;
    /*c*/ come_call_finalizer3(result_316,sStrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value355 = (void*)0;
struct list$1sNode$ph* __dec_obj71;
struct sListNode* __result_obj__219;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value355,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj71=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    /*b*/ come_call_finalizer3(__dec_obj71,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__219 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__219,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__219;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value356 = (void*)0;
char* __result_obj__220;
    __result_obj__220 = come_increment_ref_count(((char*)(__right_value356=__builtin_string("sListNode"))));
    (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__220;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_320;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1CVALUE$ph* params_321;
struct sType* list_element_type_324;
int n_325;
struct list$1sNode$ph* o2_saved_326;
struct sNode* it_327;
void* __right_value359 = (void*)0;
_Bool _if_conditional1;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sNode* value_node_328;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_329;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sNode* exp_330;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj72;
_Bool Value_331;
_Bool __result_obj__222;
_Bool Value_332;
_Bool __result_obj__223;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_333;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_334=0;
char* Err_335=0;
_Bool _if_conditional2;
_Bool __result_obj__224;
void* __right_value377 = (void*)0;
struct sType* __dec_obj73;
void* __right_value378 = (void*)0;
struct sType* type_values_336;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
char* var_name_341;
void* __right_value384 = (void*)0;
struct sVar* var__342;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct buffer* source_343;
int i_344;
struct list$1CVALUE$ph* o2_saved_345;
struct CVALUE* it_348;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* list_type_354;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* obj_type_358;
char* fun_name_359;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_360=0;
struct sGenericsFun* generics_fun_361=0;
char* generics_fun_name_362;
void* __right_value400 = (void*)0;
struct sFun* fun_363;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
char* __dec_obj80;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_2_366=0;
char* Err_367=0;
_Bool _if_conditional3;
_Bool __result_obj__239;
void* __right_value405 = (void*)0;
struct sType* result_type_368;
struct sType* type_369;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct CVALUE* obj_value_370;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct buffer* num_string_371;
void* __right_value410 = (void*)0;
struct sType* type2_372;
void* __right_value411 = (void*)0;
char* type_name_373;
struct sType* any_type_374;
void* __right_value412 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var5 = (void*)0;
char* finalizer_name_375=0;
char* cloner_name_376=0;
char* get_hash_key_name_377=0;
char* equaler_name_378=0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* __dec_obj81;
void* __right_value415 = (void*)0;
struct sType* type3_379;
void* __right_value416 = (void*)0;
struct sType* __dec_obj82;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1CVALUE$ph* come_params_380;
void* __right_value419 = (void*)0;
_Bool _if_conditional4;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct CVALUE* come_value2_384;
void* __right_value423 = (void*)0;
char* __dec_obj83;
struct sType* __dec_obj84;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct CVALUE* come_value3_385;
void* __right_value426 = (void*)0;
char* __dec_obj85;
struct sType* __dec_obj86;
int j_386;
struct list$1CVALUE$ph* o2_saved_387;
struct CVALUE* it_388;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value4_389;
void* __right_value429 = (void*)0;
char* __dec_obj87;
void* __right_value430 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__242;
    list_elements_320=self->list_elements;
    params_321=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 308, "struct list$1CVALUE$ph*"))));
    list_element_type_324=((void*)0);
    n_325=0;
    for(    o2_saved_326=(list_elements_320),it_327=list$1sNode$ph_begin((o2_saved_326));    !list$1sNode$ph_end((o2_saved_326));    it_327=list$1sNode$ph_next((o2_saved_326))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value359=it_327->kind(it_327->_protocol_obj))),"sWildCard"))),        (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            value_node_328=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value360=xsprintf("Value"))),info));
            (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_329=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 316, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_329,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 317, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_328))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_329,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 318, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_325,info)))));
            exp_330=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value371=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_328),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_329),((void*)0),0,((void*)0),info));
            (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj72=exp_330,
            exp_330=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_330,info));
            (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            Value_331=node_compile(exp_330,info);
            if(            !Value_331) {
                __result_obj__222 = (_Bool)0;
                ((value_node_328) ? value_node_328 = come_decrement_ref_count(value_node_328, ((struct sNode*)value_node_328)->finalize, ((struct sNode*)value_node_328)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_329,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((exp_330) ? exp_330 = come_decrement_ref_count(exp_330, ((struct sNode*)exp_330)->finalize, ((struct sNode*)exp_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(params_321,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_324,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__222;
            }
            else {
            }
            ((value_node_328) ? value_node_328 = come_decrement_ref_count(value_node_328, ((struct sNode*)value_node_328)->finalize, ((struct sNode*)value_node_328)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(params_329,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((exp_330) ? exp_330 = come_decrement_ref_count(exp_330, ((struct sNode*)exp_330)->finalize, ((struct sNode*)exp_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_332=node_compile(it_327,info);
            if(            !Value_332) {
                __result_obj__223 = (_Bool)0;
                /*c*/ come_call_finalizer3(params_321,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_324,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__223;
            }
            else {
            }
        }
        come_value_333=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        list_element_type_324) {
            multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value376=check_assign_type(((char*)(__right_value375=xsprintf("invalid list element type"))),list_element_type_324,come_value_333->type,come_value_333,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_1_334=multiple_assign_var2->v1;
            Err_335=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional2=(Err_335)),            (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value376,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional2) {
                __result_obj__224 = (_Bool)1;
                (Err_335 = come_decrement_ref_count(Err_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_333,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(params_321,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_324,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__224;
            }
            else {
            }
            (Err_335 = come_decrement_ref_count(Err_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph_push_back(params_321,(struct CVALUE*)come_increment_ref_count(come_value_333));
        __dec_obj73=list_element_type_324,
        list_element_type_324=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_333->type));
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_325++;
        /*c*/ come_call_finalizer3(come_value_333,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_values_336=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_324));
    list$1sNode$ph_push_back(type_values_336->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(params_321),info)));
    type_values_336->mHeap=(_Bool)0;
    static int list_value_num_340=0;
    var_name_341=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_340));
    add_variable_to_table(var_name_341,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_336)),info,(_Bool)0);
    var__342=get_variable_from_table(info->lv_table,var_name_341);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value385=make_define_var(type_values_336,var__342->mCValueName,(_Bool)0,info))));
    (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_343=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 360, "struct buffer*"))));
    buffer_append_str(source_343,"(");
    i_344=0;
    for(    o2_saved_345=(struct list$1CVALUE$ph*)come_increment_ref_count((params_321)),it_348=list$1CVALUE$ph_begin((o2_saved_345));    !list$1CVALUE$ph_end((o2_saved_345));    it_348=list$1CVALUE$ph_next((o2_saved_345))    ){
        if(        list_element_type_324->mHeap) {
            buffer_append_format(source_343,"%s[%d]=%s,\n",var__342->mCValueName,i_344,((struct CVALUE*)(__right_value388=list$1CVALUE$ph$p_operator_load_element(params_321,i_344)))->c_value);
            /*c*/ come_call_finalizer3(__right_value388,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_format(source_343,"%s[%d]=%s,\n",var__342->mCValueName,i_344,((struct CVALUE*)(__right_value389=list$1CVALUE$ph$p_operator_load_element(params_321,i_344)))->c_value);
            /*c*/ come_call_finalizer3(__right_value389,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        i_344++;
    }
    /*c*/ come_call_finalizer3(o2_saved_345,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list_type_354=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 380, "struct sType*")),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info));
    list$1sType$ph_push_back(list_type_354->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value396=come_call_cloner(sType_clone, list_element_type_324))))));
    /*c*/ come_call_finalizer3(__right_value396,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_358=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_354));
    fun_name_359="initialize_with_values";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value399=make_generics_function(obj_type_358,(char*)come_increment_ref_count(__builtin_string(fun_name_359)),info,(_Bool)1)));
    name_360=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_361=multiple_assign_var3->v2;
    /*c*/ come_call_finalizer3(__right_value399,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_362=(char*)come_increment_ref_count(name_360);
    fun_363=((struct sFun*)(__right_value400=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_362,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value400,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_363==((void*)0)) {
        __dec_obj80=generics_fun_name_362,
        generics_fun_name_362=(char*)come_increment_ref_count(create_method_name(obj_type_358,(_Bool)0,((char*)(__right_value401=__builtin_string(fun_name_359))),info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_363=((struct sFun*)(__right_value403=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_362,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value403,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_363==((void*)0)) {
            multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value404=err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name_362,info->come_fun->mName)));
            come_exception_var_2_366=multiple_assign_var4->v1;
            Err_367=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            (_if_conditional3=(Err_367)),            /*c*/ come_call_finalizer3(__right_value404,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __result_obj__239 = (_Bool)1;
                (Err_367 = come_decrement_ref_count(Err_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_321,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_element_type_324,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_values_336,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_341 = come_decrement_ref_count(var_name_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(source_343,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_type_354,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_360 = come_decrement_ref_count(name_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_362 = come_decrement_ref_count(generics_fun_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__239;
            }
            else {
            }
            (Err_367 = come_decrement_ref_count(Err_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_368=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_363->mResultType));
    result_type_368->mStatic=(_Bool)0;
    type_369=list_type_354;
    obj_value_370=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 408, "struct CVALUE*"))));
    num_string_371=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 410, "struct buffer*"))));
    buffer_append_str(num_string_371,"1");
    type2_372=(struct sType*)come_increment_ref_count(solve_generics(type_369,type_369,info));
    type_name_373=(char*)come_increment_ref_count(make_type_name_string(type2_372,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_374=(struct sType*)come_increment_ref_count(type2_372);
    any_type_374->mPointerNum=1;
    any_type_374->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value412=create_vtable((struct sType*)come_increment_ref_count(any_type_374),info)));
    finalizer_name_375=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_376=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_377=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_378=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    /*c*/ come_call_finalizer3(__right_value412,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj81=obj_value_370->c_value,
    obj_value_370->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_373,type_name_373,((char*)(__right_value413=buffer_to_string(num_string_371))),info->sname,info->sline,type_name_373));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_379=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_372));
    type3_379->mPointerNum++;
    type3_379->mHeap=(_Bool)1;
    type2_372->mHeap=(_Bool)1;
    __dec_obj82=obj_value_370->type,
    obj_value_370->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_372));
    /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_370->type->mPointerNum++;
    obj_value_370->var=((void*)0);
    append_object_to_right_values2(obj_value_370,(struct sType*)come_increment_ref_count(type3_379),info,(_Bool)0);
    come_params_380=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 436, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional4=(((struct sType*)(__right_value419=list$1sType$ph$p_operator_load_element(fun_363->mParamTypes,0)))->mHeap&&obj_value_370->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value419,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)(__right_value420=list$1sType$ph$p_operator_load_element(fun_363->mParamTypes,0))),obj_value_370->type,obj_value_370,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value420,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_380,(struct CVALUE*)come_increment_ref_count(obj_value_370));
    come_value2_384=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 443, "struct CVALUE*"))));
    __dec_obj83=come_value2_384->c_value,
    come_value2_384->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params_321)));
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj84=come_value2_384->type,
    come_value2_384->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_384->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_380,(struct CVALUE*)come_increment_ref_count(come_value2_384));
    come_value3_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 451, "struct CVALUE*"))));
    __dec_obj85=come_value3_385->c_value,
    come_value3_385->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__342->mCValueName));
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj86=come_value3_385->type,
    come_value3_385->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_385->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_380,(struct CVALUE*)come_increment_ref_count(come_value3_385));
    buffer_append_str(source_343,generics_fun_name_362);
    buffer_append_str(source_343,"(");
    j_386=0;
    for(    o2_saved_387=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_380)),it_388=list$1CVALUE$ph_begin((o2_saved_387));    !list$1CVALUE$ph_end((o2_saved_387));    it_388=list$1CVALUE$ph_next((o2_saved_387))    ){
        buffer_append_str(source_343,it_388->c_value);
        if(        j_386!=list$1CVALUE$ph_length(come_params_380)-1) {
            buffer_append_str(source_343,",");
        }
        j_386++;
    }
    /*c*/ come_call_finalizer3(o2_saved_387,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_343,")");
    buffer_append_str(source_343,")");
    come_value4_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 477, "struct CVALUE*"))));
    __dec_obj87=come_value4_389->c_value,
    come_value4_389->c_value=(char*)come_increment_ref_count(buffer_to_string(source_343));
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj88=come_value4_389->type,
    come_value4_389->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_368));
    /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_389->type->mStatic=(_Bool)0;
    come_value4_389->var=((void*)0);
    if(    result_type_368->mHeap) {
        append_object_to_right_values2(come_value4_389,(struct sType*)come_increment_ref_count(result_type_368),info,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_389));
    add_come_last_code(info,"%s",come_value4_389->c_value);
    __result_obj__242 = (_Bool)1;
    /*c*/ come_call_finalizer3(params_321,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_element_type_324,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_values_336,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_341 = come_decrement_ref_count(var_name_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_343,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(list_type_354,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_360 = come_decrement_ref_count(name_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_362 = come_decrement_ref_count(generics_fun_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_368,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_370,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_371,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_373 = come_decrement_ref_count(type_name_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_374,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_375 = come_decrement_ref_count(finalizer_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_376 = come_decrement_ref_count(cloner_name_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_377 = come_decrement_ref_count(get_hash_key_name_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_378 = come_decrement_ref_count(equaler_name_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_379,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_380,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_384,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_385,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
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
struct list$1CVALUE$ph* __result_obj__221;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__221 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_322;
struct list_item$1CVALUE$ph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        /*c*/ come_call_finalizer3(prev_it_323,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value379 = (void*)0;
struct list_item$1sNode$ph* litem_337;
struct sNode* __dec_obj74;
void* __right_value380 = (void*)0;
struct list_item$1sNode$ph* litem_338;
struct sNode* __dec_obj75;
void* __right_value381 = (void*)0;
struct list_item$1sNode$ph* litem_339;
struct sNode* __dec_obj76;
struct list$1sNode$ph* __result_obj__225;
    if(    self->len==0) {
        litem_337=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value379=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1227, "struct list_item$1sNode$ph*"))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj74=litem_337->item,
        litem_337->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value380=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1237, "struct list_item$1sNode$ph*"))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj75=litem_338->item,
        litem_338->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value381=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1247, "struct list_item$1sNode$ph*"))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj76=litem_339->item,
        litem_339->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result_obj__225 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__225;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_346;
struct CVALUE* __result_obj__226;
struct CVALUE* __result_obj__227;
struct CVALUE* result_347;
struct CVALUE* __result_obj__228;
result_346 = (void*)0;
result_347 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_346,0,sizeof(struct CVALUE*));
        __result_obj__226 = result_346;
        return __result_obj__226;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__227 = self->it->item;
        return __result_obj__227;
    }
    memset(&result_347,0,sizeof(struct CVALUE*));
    __result_obj__228 = result_347;
    return __result_obj__228;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_349;
struct CVALUE* __result_obj__229;
struct CVALUE* __result_obj__230;
struct CVALUE* result_350;
struct CVALUE* __result_obj__231;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_349,0,sizeof(struct CVALUE*));
        __result_obj__229 = result_349;
        return __result_obj__229;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__230 = self->it->item;
        return __result_obj__230;
    }
    memset(&result_350,0,sizeof(struct CVALUE*));
    __result_obj__231 = result_350;
    return __result_obj__231;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_351;
int i_352;
struct CVALUE* __result_obj__232;
struct CVALUE* default_value_353;
struct CVALUE* __result_obj__233;
default_value_353 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_351=self->head;
    i_352=0;
    while(it_351!=((void*)0)) {
        if(        position==i_352) {
            __result_obj__232 = come_increment_ref_count(it_351->item);
            /*c*/ come_call_finalizer3(__result_obj__232,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__232;
        }
        it_351=it_351->next;
        i_352++;
    }
    memset(&default_value_353,0,sizeof(struct CVALUE*));
    __result_obj__233 = come_increment_ref_count(default_value_353);
    /*c*/ come_call_finalizer3(default_value_353,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__233,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value393 = (void*)0;
struct list_item$1sType$ph* litem_355;
struct sType* __dec_obj77;
void* __right_value394 = (void*)0;
struct list_item$1sType$ph* litem_356;
struct sType* __dec_obj78;
void* __right_value395 = (void*)0;
struct list_item$1sType$ph* litem_357;
struct sType* __dec_obj79;
struct list$1sType$ph* __result_obj__234;
    if(    self->len==0) {
        litem_355=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value393=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1227, "struct list_item$1sType$ph*"))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj77=litem_355->item,
        litem_355->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_355;
        self->head=litem_355;
    }
    else if(    self->len==1) {
        litem_356=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value394=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1237, "struct list_item$1sType$ph*"))));
        litem_356->prev=self->head;
        litem_356->next=((void*)0);
        __dec_obj78=litem_356->item,
        litem_356->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_356;
        self->head->next=litem_356;
    }
    else {
        litem_357=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value395=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1247, "struct list_item$1sType$ph*"))));
        litem_357->prev=self->tail;
        litem_357->next=((void*)0);
        __dec_obj79=litem_357->item,
        litem_357->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_357;
        self->tail=litem_357;
    }
    self->len++;
    __result_obj__234 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_364;
unsigned int it_365;
struct sFun* __result_obj__235;
struct sFun* __result_obj__236;
struct sFun* __result_obj__237;
struct sFun* __result_obj__238;
    hash_364=string_get_hash_key(((char*)key))%self->size;
    it_365=hash_364;
    while((_Bool)1) {
        if(        self->item_existance[it_365]) {
            if(            string_equals(self->keys[it_365],key)) {
                __result_obj__235 = come_increment_ref_count(self->items[it_365]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__235,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__235;
            }
            it_365++;
            if(            it_365>=self->size) {
                it_365=0;
            }
            else if(            it_365==hash_364) {
                __result_obj__236 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__236,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__236;
            }
        }
        else {
            __result_obj__237 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__237,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__237;
        }
    }
    __result_obj__238 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__238,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
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

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_381;
int i_382;
struct sType* __result_obj__240;
struct sType* default_value_383;
struct sType* __result_obj__241;
default_value_383 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_381=self->head;
    i_382=0;
    while(it_381!=((void*)0)) {
        if(        position==i_382) {
            __result_obj__240 = come_increment_ref_count(it_381->item);
            /*c*/ come_call_finalizer3(__result_obj__240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__240;
        }
        it_381=it_381->next;
        i_382++;
    }
    memset(&default_value_383,0,sizeof(struct sType*));
    __result_obj__241 = come_increment_ref_count(default_value_383);
    /*c*/ come_call_finalizer3(default_value_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value431 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj89;
struct sTupleNode* __result_obj__243;
    ((struct sNodeBase*)(__right_value431=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value431,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj89=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj89,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__243 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value432 = (void*)0;
char* __result_obj__244;
    __result_obj__244 = come_increment_ref_count(((char*)(__right_value432=__builtin_string("sTupleNode"))));
    (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_392;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1sType$ph* tuple_types_393;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1CVALUE$ph* tuple_values_394;
int n_395;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_396;
struct tuple2$2char$phsNode$ph* it_399;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* name_402=0;
struct sNode* node_403=0;
void* __right_value437 = (void*)0;
_Bool _if_conditional5;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sNode* value_node_404;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* exp_405;
_Bool Value_406;
_Bool __result_obj__251;
_Bool Value_407;
_Bool __result_obj__252;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* type_410;
char* __dec_obj94;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* type_411;
struct list$1sType$ph* o2_saved_412;
struct sType* it_415;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct CVALUE* obj_value_418;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct buffer* num_string_419;
void* __right_value458 = (void*)0;
struct sType* type2_420;
void* __right_value459 = (void*)0;
char* type_name_421;
struct sType* any_type_422;
void* __right_value460 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var7 = (void*)0;
char* finalizer_name_423=0;
char* cloner_name_424=0;
char* get_hash_key_name_425=0;
char* equaler_name_426=0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
char* __dec_obj95;
void* __right_value463 = (void*)0;
struct sType* type3_427;
void* __right_value464 = (void*)0;
struct sType* __dec_obj96;
void* __right_value465 = (void*)0;
struct sType* obj_type_428;
char* fun_name_429;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_430=0;
struct sGenericsFun* generics_fun_431=0;
char* generics_fun_name_432;
void* __right_value468 = (void*)0;
struct sFun* fun_433;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* __dec_obj97;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_3_434=0;
char* Err_435=0;
_Bool _if_conditional6;
_Bool __result_obj__261;
void* __right_value473 = (void*)0;
struct sType* result_type_436;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct list$1CVALUE$ph* come_params_437;
void* __right_value476 = (void*)0;
_Bool _if_conditional7;
void* __right_value477 = (void*)0;
int i_438;
struct list$1CVALUE$ph* o2_saved_439;
struct CVALUE* it_440;
void* __right_value478 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
_Bool _if_conditional8;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct buffer* buf_442;
int j_443;
struct list$1CVALUE$ph* o2_saved_444;
struct CVALUE* it_445;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value2_446;
void* __right_value486 = (void*)0;
char* __dec_obj98;
void* __right_value487 = (void*)0;
struct sType* __dec_obj99;
_Bool __result_obj__262;
    tuple_elements_392=self->tuple_elements;
    tuple_types_393=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 514, "struct list$1sType$ph*"))));
    tuple_values_394=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 515, "struct list$1CVALUE$ph*"))));
    n_395=0;
    for(    o2_saved_396=(tuple_elements_392),it_399=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_396));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_396));    it_399=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_396))    ){
        multiple_assign_var6=it_399;
        name_402=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_403=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value437=node_403->kind(node_403->_protocol_obj))),"sWildCard"))),        (__right_value437 = come_decrement_ref_count(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            value_node_404=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value438=xsprintf("Value"))),info));
            (__right_value438 = come_decrement_ref_count(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_405=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_404),(char*)come_increment_ref_count(xsprintf("v%d",n_395+1)),info));
            Value_406=node_compile(exp_405,info);
            if(            !Value_406) {
                __result_obj__251 = (_Bool)0;
                ((value_node_404) ? value_node_404 = come_decrement_ref_count(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_405) ? exp_405 = come_decrement_ref_count(exp_405, ((struct sNode*)exp_405)->finalize, ((struct sNode*)exp_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (name_402 = come_decrement_ref_count(name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_403) ? node_403 = come_decrement_ref_count(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_393,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_394,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__251;
            }
            else {
            }
            ((value_node_404) ? value_node_404 = come_decrement_ref_count(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_405) ? exp_405 = come_decrement_ref_count(exp_405, ((struct sNode*)exp_405)->finalize, ((struct sNode*)exp_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_407=node_compile(node_403,info);
            if(            !Value_407) {
                __result_obj__252 = (_Bool)0;
                (name_402 = come_decrement_ref_count(name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_403) ? node_403 = come_decrement_ref_count(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(tuple_types_393,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_394,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__252;
            }
            else {
            }
        }
        come_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_394,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_408)));
        type_410=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_408->type));
        __dec_obj94=type_410->mTupleName,
        type_410->mTupleName=(char*)come_increment_ref_count(name_402);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        list$1sType$ph_push_back(tuple_types_393,(struct sType*)come_increment_ref_count(type_410));
        n_395++;
        (name_402 = come_decrement_ref_count(name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_403) ? node_403 = come_decrement_ref_count(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_410,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_411=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 544, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_393))),(_Bool)0,info));
    for(    o2_saved_412=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_393)),it_415=list$1sType$ph_begin((o2_saved_412));    !list$1sType$ph_end((o2_saved_412));    it_415=list$1sType$ph_next((o2_saved_412))    ){
        list$1sType$ph_push_back(type_411->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value453=come_call_cloner(sType_clone, it_415))))));
        /*c*/ come_call_finalizer3(__right_value453,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_412,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 550, "struct CVALUE*"))));
    num_string_419=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 552, "struct buffer*"))));
    buffer_append_str(num_string_419,"1");
    type2_420=(struct sType*)come_increment_ref_count(solve_generics(type_411,type_411,info));
    type_name_421=(char*)come_increment_ref_count(make_type_name_string(type2_420,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_422=(struct sType*)come_increment_ref_count(type2_420);
    any_type_422->mPointerNum=1;
    any_type_422->mHeap=(_Bool)1;
    multiple_assign_var7=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value460=create_vtable((struct sType*)come_increment_ref_count(any_type_422),info)));
    finalizer_name_423=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_424=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_425=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_426=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    /*c*/ come_call_finalizer3(__right_value460,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj95=obj_value_418->c_value,
    obj_value_418->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_421,type_name_421,((char*)(__right_value461=buffer_to_string(num_string_419))),info->sname,info->sline,type_name_421));
    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value461 = come_decrement_ref_count(__right_value461, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_420));
    type3_427->mPointerNum++;
    type3_427->mHeap=(_Bool)1;
    type2_420->mHeap=(_Bool)1;
    __dec_obj96=obj_value_418->type,
    obj_value_418->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_420));
    /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_418->type->mPointerNum++;
    obj_value_418->var=((void*)0);
    append_object_to_right_values2(obj_value_418,(struct sType*)come_increment_ref_count(type3_427),info,(_Bool)0);
    obj_type_428=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_420));
    fun_name_429="initialize";
    multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value467=make_generics_function(obj_type_428,(char*)come_increment_ref_count(__builtin_string(fun_name_429)),info,(_Bool)1)));
    name_430=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_431=multiple_assign_var8->v2;
    /*c*/ come_call_finalizer3(__right_value467,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_432=(char*)come_increment_ref_count(name_430);
    fun_433=((struct sFun*)(__right_value468=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_432,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value468,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_433==((void*)0)) {
        __dec_obj97=generics_fun_name_432,
        generics_fun_name_432=(char*)come_increment_ref_count(create_method_name(obj_type_428,(_Bool)0,((char*)(__right_value469=__builtin_string(fun_name_429))),info,(_Bool)1));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value469 = come_decrement_ref_count(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_433=((struct sFun*)(__right_value471=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_432,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value471,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_433==((void*)0)) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value472=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_432,info->come_fun->mName)));
            come_exception_var_3_434=multiple_assign_var9->v1;
            Err_435=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional6=(Err_435)),            /*c*/ come_call_finalizer3(__right_value472,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                __result_obj__261 = (_Bool)1;
                (Err_435 = come_decrement_ref_count(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(tuple_types_393,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_394,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_411,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_418,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_419,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_420,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_421 = come_decrement_ref_count(type_name_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(any_type_422,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (finalizer_name_423 = come_decrement_ref_count(finalizer_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_424 = come_decrement_ref_count(cloner_name_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_425 = come_decrement_ref_count(get_hash_key_name_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_426 = come_decrement_ref_count(equaler_name_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_427,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_430 = come_decrement_ref_count(name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_432 = come_decrement_ref_count(generics_fun_name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__261;
            }
            else {
            }
            (Err_435 = come_decrement_ref_count(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_436=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_433->mResultType));
    result_type_436->mStatic=(_Bool)0;
    come_params_437=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 601, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional7=(((struct sType*)(__right_value476=list$1sType$ph$p_operator_load_element(fun_433->mParamTypes,0)))->mHeap&&obj_value_418->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value476,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional7) {
        std_move(((struct sType*)(__right_value477=list$1sType$ph$p_operator_load_element(fun_433->mParamTypes,0))),obj_value_418->type,obj_value_418,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value477,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_437,(struct CVALUE*)come_increment_ref_count(obj_value_418));
    i_438=1;
    for(    o2_saved_439=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_394)),it_440=list$1CVALUE$ph_begin((o2_saved_439));    !list$1CVALUE$ph_end((o2_saved_439));    it_440=list$1CVALUE$ph_next((o2_saved_439))    ){
        come_value_441=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_440));
        if(        (_if_conditional8=(((struct sType*)(__right_value479=list$1sType$ph$p_operator_load_element(fun_433->mParamTypes,i_438)))&&((struct sType*)(__right_value480=list$1sType$ph$p_operator_load_element(fun_433->mParamTypes,i_438)))->mHeap&&come_value_441->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value479,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value480,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional8) {
            std_move(((struct sType*)(__right_value481=list$1sType$ph$p_operator_load_element(fun_433->mParamTypes,i_438))),come_value_441->type,come_value_441,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value481,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_437,(struct CVALUE*)come_increment_ref_count(come_value_441));
        i_438++;
        /*c*/ come_call_finalizer3(come_value_441,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_439,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_442=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 620, "struct buffer*"))));
    buffer_append_str(buf_442,generics_fun_name_432);
    buffer_append_str(buf_442,"(");
    j_443=0;
    for(    o2_saved_444=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_437)),it_445=list$1CVALUE$ph_begin((o2_saved_444));    !list$1CVALUE$ph_end((o2_saved_444));    it_445=list$1CVALUE$ph_next((o2_saved_444))    ){
        buffer_append_str(buf_442,it_445->c_value);
        if(        j_443!=list$1CVALUE$ph_length(come_params_437)-1) {
            buffer_append_str(buf_442,",");
        }
        j_443++;
    }
    /*c*/ come_call_finalizer3(o2_saved_444,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_442,")");
    come_value2_446=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 637, "struct CVALUE*"))));
    __dec_obj98=come_value2_446->c_value,
    come_value2_446->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_442));
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj99=come_value2_446->type,
    come_value2_446->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_436));
    /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_446->type->mStatic=(_Bool)0;
    come_value2_446->var=((void*)0);
    if(    result_type_436->mHeap) {
        append_object_to_right_values2(come_value2_446,(struct sType*)come_increment_ref_count(result_type_436),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_446->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_446));
    __result_obj__262 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_393,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_394,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_411,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_418,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_419,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_420,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_421 = come_decrement_ref_count(type_name_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_422,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_423 = come_decrement_ref_count(finalizer_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_424 = come_decrement_ref_count(cloner_name_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_425 = come_decrement_ref_count(get_hash_key_name_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_426 = come_decrement_ref_count(equaler_name_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_427,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_430 = come_decrement_ref_count(name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_432 = come_decrement_ref_count(generics_fun_name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_436,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_437,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_442,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_446,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_390;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        /*c*/ come_call_finalizer3(prev_it_391,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsNode$ph* result_397;
struct tuple2$2char$phsNode$ph* __result_obj__245;
struct tuple2$2char$phsNode$ph* __result_obj__246;
struct tuple2$2char$phsNode$ph* result_398;
struct tuple2$2char$phsNode$ph* __result_obj__247;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_397,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__245 = result_397;
        return __result_obj__245;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__246 = self->it->item;
        return __result_obj__246;
    }
    memset(&result_398,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__247 = result_398;
    return __result_obj__247;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_400;
struct tuple2$2char$phsNode$ph* __result_obj__248;
struct tuple2$2char$phsNode$ph* __result_obj__249;
struct tuple2$2char$phsNode$ph* result_401;
struct tuple2$2char$phsNode$ph* __result_obj__250;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_400,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__248 = result_400;
        return __result_obj__248;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__249 = self->it->item;
        return __result_obj__249;
    }
    memset(&result_401,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__250 = result_401;
    return __result_obj__250;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__253;
void* __right_value443 = (void*)0;
struct CVALUE* result_409;
void* __right_value444 = (void*)0;
char* __dec_obj90;
void* __right_value445 = (void*)0;
struct sType* __dec_obj91;
void* __right_value446 = (void*)0;
char* __dec_obj92;
void* __right_value447 = (void*)0;
char* __dec_obj93;
struct CVALUE* __result_obj__254;
    if(    self==(void*)0) {
        __result_obj__253 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__253,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__253;
    }
    result_409=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj90=result_409->c_value,
        result_409->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj91=result_409->type,
        result_409->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_409->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_409->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj92=result_409->c_value_without_right_value_objects,
        result_409->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj93=result_409->c_value_without_cast_object_value,
        result_409->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__254 = come_increment_ref_count(result_409);
    /*c*/ come_call_finalizer3(result_409,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__254,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_413;
struct sType* __result_obj__255;
struct sType* __result_obj__256;
struct sType* result_414;
struct sType* __result_obj__257;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_413,0,sizeof(struct sType*));
        __result_obj__255 = result_413;
        return __result_obj__255;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__256 = self->it->item;
        return __result_obj__256;
    }
    memset(&result_414,0,sizeof(struct sType*));
    __result_obj__257 = result_414;
    return __result_obj__257;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_416;
struct sType* __result_obj__258;
struct sType* __result_obj__259;
struct sType* result_417;
struct sType* __result_obj__260;
result_416 = (void*)0;
result_417 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_416,0,sizeof(struct sType*));
        __result_obj__258 = result_416;
        return __result_obj__258;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__259 = self->it->item;
        return __result_obj__259;
    }
    memset(&result_417,0,sizeof(struct sType*));
    __result_obj__260 = result_417;
    return __result_obj__260;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value488 = (void*)0;
struct list$1sNode$ph* __dec_obj100;
struct sSomeNode* __result_obj__263;
    ((struct sNodeBase*)(__right_value488=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value488,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj100=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj100,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__263 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __right_value489 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = come_increment_ref_count(((char*)(__right_value489=__builtin_string("sSomeNode"))));
    (__right_value489 = come_decrement_ref_count(__right_value489, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_447;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1sType$ph* tuple_types_448;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1CVALUE$ph* tuple_values_449;
struct list$1sNode$ph* o2_saved_450;
struct sNode* it_451;
_Bool Value_452;
_Bool __result_obj__265;
void* __right_value494 = (void*)0;
struct CVALUE* come_value_453;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* type_454;
struct list$1sType$ph* o2_saved_455;
struct sType* it_456;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct CVALUE* obj_value_457;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct buffer* num_string_458;
void* __right_value505 = (void*)0;
struct sType* type2_459;
void* __right_value506 = (void*)0;
char* type_name_460;
void* __right_value507 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var10 = (void*)0;
char* finalizer_name_461=0;
char* cloner_name_462=0;
char* get_hash_key_name_463=0;
char* equaler_name_464=0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
char* __dec_obj101;
void* __right_value510 = (void*)0;
struct sType* type3_465;
void* __right_value511 = (void*)0;
struct sType* __dec_obj102;
void* __right_value512 = (void*)0;
struct sType* obj_type_466;
char* fun_name_467;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var11 = (void*)0;
char* name_468=0;
struct sGenericsFun* generics_fun_469=0;
char* generics_fun_name_470;
void* __right_value515 = (void*)0;
struct sFun* fun_471;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj103;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_4_472=0;
char* Err_473=0;
_Bool _if_conditional9;
_Bool __result_obj__266;
void* __right_value520 = (void*)0;
struct sType* result_type_474;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1CVALUE$ph* come_params_475;
void* __right_value523 = (void*)0;
_Bool _if_conditional10;
void* __right_value524 = (void*)0;
int i_476;
struct list$1CVALUE$ph* o2_saved_477;
struct CVALUE* it_478;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
_Bool _if_conditional11;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct buffer* buf_480;
int j_481;
struct list$1CVALUE$ph* o2_saved_482;
struct CVALUE* it_483;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct CVALUE* come_value2_484;
void* __right_value533 = (void*)0;
char* __dec_obj104;
void* __right_value534 = (void*)0;
struct sType* __dec_obj105;
_Bool __result_obj__267;
    tuple_elements_447=self->tuple_elements;
    tuple_types_448=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 674, "struct list$1sType$ph*"))));
    tuple_values_449=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 675, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_450=(tuple_elements_447),it_451=list$1sNode$ph_begin((o2_saved_450));    !list$1sNode$ph_end((o2_saved_450));    it_451=list$1sNode$ph_next((o2_saved_450))    ){
        Value_452=node_compile(it_451,info);
        if(        !Value_452) {
            __result_obj__265 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_448,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_449,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__265;
        }
        else {
        }
        come_value_453=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_449,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_453)));
        list$1sType$ph_push_back(tuple_types_448,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_453->type)));
        /*c*/ come_call_finalizer3(come_value_453,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_454=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 688, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_448))),(_Bool)0,info));
    for(    o2_saved_455=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_448)),it_456=list$1sType$ph_begin((o2_saved_455));    !list$1sType$ph_end((o2_saved_455));    it_456=list$1sType$ph_next((o2_saved_455))    ){
        list$1sType$ph_push_back(type_454->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value500=come_call_cloner(sType_clone, it_456))))));
        /*c*/ come_call_finalizer3(__right_value500,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_455,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 694, "struct CVALUE*"))));
    num_string_458=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 696, "struct buffer*"))));
    buffer_append_str(num_string_458,"1");
    type2_459=(struct sType*)come_increment_ref_count(solve_generics(type_454,type_454,info));
    type_name_460=(char*)come_increment_ref_count(make_type_name_string(type2_459,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var10=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value507=create_vtable((struct sType*)come_increment_ref_count(type2_459),info)));
    finalizer_name_461=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    cloner_name_462=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    get_hash_key_name_463=(char*)come_increment_ref_count(multiple_assign_var10->v3);
    equaler_name_464=(char*)come_increment_ref_count(multiple_assign_var10->v4);
    /*c*/ come_call_finalizer3(__right_value507,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj101=obj_value_457->c_value,
    obj_value_457->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_460,type_name_460,((char*)(__right_value508=buffer_to_string(num_string_458))),info->sname,info->sline,type_name_460));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_465=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_459));
    type3_465->mPointerNum++;
    type3_465->mHeap=(_Bool)1;
    type2_459->mHeap=(_Bool)1;
    __dec_obj102=obj_value_457->type,
    obj_value_457->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_459));
    /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_457->type->mPointerNum++;
    obj_value_457->var=((void*)0);
    append_object_to_right_values2(obj_value_457,(struct sType*)come_increment_ref_count(type3_465),info,(_Bool)0);
    obj_type_466=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_459));
    fun_name_467="initialize";
    multiple_assign_var11=((struct tuple2$2char$phsGenericsFun$p*)(__right_value514=make_generics_function(obj_type_466,(char*)come_increment_ref_count(__builtin_string(fun_name_467)),info,(_Bool)1)));
    name_468=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_469=multiple_assign_var11->v2;
    /*c*/ come_call_finalizer3(__right_value514,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_470=(char*)come_increment_ref_count(name_468);
    fun_471=((struct sFun*)(__right_value515=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_470,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value515,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_471==((void*)0)) {
        __dec_obj103=generics_fun_name_470,
        generics_fun_name_470=(char*)come_increment_ref_count(create_method_name(obj_type_466,(_Bool)0,((char*)(__right_value516=__builtin_string(fun_name_467))),info,(_Bool)1));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_471=((struct sFun*)(__right_value518=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_470,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value518,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_471==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value519=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_470,info->come_fun->mName)));
            come_exception_var_4_472=multiple_assign_var12->v1;
            Err_473=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional9=(Err_473)),            /*c*/ come_call_finalizer3(__right_value519,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __result_obj__266 = (_Bool)1;
                (Err_473 = come_decrement_ref_count(Err_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(tuple_types_448,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_449,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_454,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_458,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_459,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_460 = come_decrement_ref_count(type_name_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_461 = come_decrement_ref_count(finalizer_name_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_462 = come_decrement_ref_count(cloner_name_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_463 = come_decrement_ref_count(get_hash_key_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_464 = come_decrement_ref_count(equaler_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_465,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_466,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_468 = come_decrement_ref_count(name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_470 = come_decrement_ref_count(generics_fun_name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__266;
            }
            else {
            }
            (Err_473 = come_decrement_ref_count(Err_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_474=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_471->mResultType));
    result_type_474->mStatic=(_Bool)0;
    come_params_475=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 741, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional10=(((struct sType*)(__right_value523=list$1sType$ph$p_operator_load_element(fun_471->mParamTypes,0)))->mHeap&&obj_value_457->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value523,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)(__right_value524=list$1sType$ph$p_operator_load_element(fun_471->mParamTypes,0))),obj_value_457->type,obj_value_457,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value524,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_475,(struct CVALUE*)come_increment_ref_count(obj_value_457));
    i_476=1;
    for(    o2_saved_477=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_449)),it_478=list$1CVALUE$ph_begin((o2_saved_477));    !list$1CVALUE$ph_end((o2_saved_477));    it_478=list$1CVALUE$ph_next((o2_saved_477))    ){
        come_value_479=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_478));
        if(        (_if_conditional11=(((struct sType*)(__right_value526=list$1sType$ph$p_operator_load_element(fun_471->mParamTypes,i_476)))&&((struct sType*)(__right_value527=list$1sType$ph$p_operator_load_element(fun_471->mParamTypes,i_476)))->mHeap&&come_value_479->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value526,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value527,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)(__right_value528=list$1sType$ph$p_operator_load_element(fun_471->mParamTypes,i_476))),come_value_479->type,come_value_479,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value528,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_475,(struct CVALUE*)come_increment_ref_count(come_value_479));
        i_476++;
        /*c*/ come_call_finalizer3(come_value_479,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_477,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_480=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 760, "struct buffer*"))));
    buffer_append_str(buf_480,generics_fun_name_470);
    buffer_append_str(buf_480,"(");
    j_481=0;
    for(    o2_saved_482=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_475)),it_483=list$1CVALUE$ph_begin((o2_saved_482));    !list$1CVALUE$ph_end((o2_saved_482));    it_483=list$1CVALUE$ph_next((o2_saved_482))    ){
        buffer_append_str(buf_480,it_483->c_value);
        if(        j_481!=list$1CVALUE$ph_length(come_params_475)-1) {
            buffer_append_str(buf_480,",");
        }
        j_481++;
    }
    /*c*/ come_call_finalizer3(o2_saved_482,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_480,")");
    come_value2_484=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 777, "struct CVALUE*"))));
    __dec_obj104=come_value2_484->c_value,
    come_value2_484->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_480));
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj105=come_value2_484->type,
    come_value2_484->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_474));
    /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_484->type->mStatic=(_Bool)0;
    come_value2_484->var=((void*)0);
    if(    result_type_474->mHeap) {
        append_object_to_right_values2(come_value2_484,(struct sType*)come_increment_ref_count(result_type_474),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_484->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_484));
    __result_obj__267 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_448,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_449,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_454,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_458,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_459,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_460 = come_decrement_ref_count(type_name_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_461 = come_decrement_ref_count(finalizer_name_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_462 = come_decrement_ref_count(cloner_name_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_463 = come_decrement_ref_count(get_hash_key_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_464 = come_decrement_ref_count(equaler_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_465,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_466,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_468 = come_decrement_ref_count(name_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_470 = come_decrement_ref_count(generics_fun_name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_474,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_475,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_480,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_484,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
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
void* __right_value535 = (void*)0;
struct sNullReturnValue* __result_obj__268;
    ((struct sNodeBase*)(__right_value535=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value535,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__268 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__268,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __right_value536 = (void*)0;
char* __result_obj__269;
    __result_obj__269 = come_increment_ref_count(((char*)(__right_value536=__builtin_string("sNullReturnValue"))));
    (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__269 = come_decrement_ref_count(__result_obj__269, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__269;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_485;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct buffer* buf_486;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
char* var_name_488;
void* __right_value543 = (void*)0;
struct sType* result_type_489;
void* __right_value544 = (void*)0;
struct sType* result_type2_490;
struct sType* left_type_491;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct CVALUE* come_value2_492;
char* __dec_obj106;
struct sType* __dec_obj107;
    if(    info->come_fun) {
        come_value_485=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 812, "struct CVALUE*"))));
        buf_486=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 814, "struct buffer*"))));
        static int num_487=0;
        num_487++;
        var_name_488=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value541=int_to_string(num_487)))));
        (__right_value541 = come_decrement_ref_count(__right_value541, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_489=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_490=(struct sType*)come_increment_ref_count(solve_generics(result_type_489,info->generics_type,info));
        left_type_491=(struct sType*)come_increment_ref_count(result_type2_490);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value545=make_define_var(left_type_491,var_name_488,(_Bool)0,info))));
        (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_488,((char*)(__right_value546=make_type_name_string(left_type_491,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_492=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 830, "struct CVALUE*"))));
        __dec_obj106=come_value2_492->c_value,
        come_value2_492->c_value=(char*)come_increment_ref_count(var_name_488);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj107=come_value2_492->type,
        come_value2_492->type=(struct sType*)come_increment_ref_count(result_type2_490);
        /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_492->type->mStatic=(_Bool)0;
        come_value2_492->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_492));
        /*c*/ come_call_finalizer3(come_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_486,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_488 = come_decrement_ref_count(var_name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_489,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_490,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_492,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value553 = (void*)0;
struct sNode* __result_obj__272;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 847, "struct sNode");
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value550=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 847, "struct sNullReturnValue*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result_obj__272 = come_increment_ref_count(((struct sNode*)(__right_value553=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value550,sNullReturnValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value553) ? __right_value553 = come_decrement_ref_count(__right_value553, ((struct sNode*)__right_value553)->finalize, ((struct sNode*)__right_value553)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__272) ? __result_obj__272 = come_decrement_ref_count(__result_obj__272, ((struct sNode*)__result_obj__272)->finalize, ((struct sNode*)__result_obj__272)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__272;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
struct sNullReturnValue* __result_obj__270;
void* __right_value551 = (void*)0;
struct sNullReturnValue* result_493;
void* __right_value552 = (void*)0;
char* __dec_obj108;
struct sNullReturnValue* __result_obj__271;
    if(    self==(void*)0) {
        __result_obj__270 = (void*)0;
        return __result_obj__270;
    }
    result_493=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*"));
    if(    self!=((void*)0)) {
        result_493->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj108=result_493->sname,
        result_493->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValue_clone", 5, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_493->sline_real=self->sline_real;
    }
    __result_obj__271 = result_493;
    /*c*/ come_call_finalizer3(result_493,sNullReturnValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value554 = (void*)0;
struct sNullReturnValueOfException* __result_obj__273;
    ((struct sNodeBase*)(__right_value554=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value554,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__273 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __right_value555 = (void*)0;
char* __result_obj__274;
    __result_obj__274 = come_increment_ref_count(((char*)(__right_value555=__builtin_string("sNullReturnValue"))));
    (__right_value555 = come_decrement_ref_count(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__274 = come_decrement_ref_count(__result_obj__274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__274;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct CVALUE* come_value_494;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct buffer* buf_495;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
char* var_name_497;
void* __right_value562 = (void*)0;
struct sType* result_type_498;
void* __right_value563 = (void*)0;
struct sType* result_type2_499;
struct sType* __dec_obj109;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* left_type_500;
void* __right_value566 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_5_501=0;
char* Err_502=0;
_Bool _if_conditional12;
_Bool __result_obj__275;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct CVALUE* come_value2_503;
char* __dec_obj110;
struct sType* __dec_obj111;
    if(    info->come_fun) {
        come_value_494=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 865, "struct CVALUE*"))));
        buf_495=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 867, "struct buffer*"))));
        static int num_496=0;
        num_496++;
        var_name_497=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value560=int_to_string(num_496)))));
        (__right_value560 = come_decrement_ref_count(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_498=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_499=(struct sType*)come_increment_ref_count(solve_generics(result_type_498,info->generics_type,info));
        if(        result_type2_499->mNoSolvedGenericsType) {
            __dec_obj109=result_type2_499,
            result_type2_499=(struct sType*)come_increment_ref_count(result_type2_499->mNoSolvedGenericsType);
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_500=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value564=list$1sType$ph$p_operator_load_element(result_type2_499->mGenericsTypes,0)))));
        /*c*/ come_call_finalizer3(__right_value564,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        left_type_500==((void*)0)||string_operator_not_equals(result_type2_499->mClass->mName,"tuple2")) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value566=err_msg(info,"function is not exception type")));
            come_exception_var_5_501=multiple_assign_var13->v1;
            Err_502=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            (_if_conditional12=(Err_502)),            /*c*/ come_call_finalizer3(__right_value566,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional12) {
                __result_obj__275 = (_Bool)1;
                (Err_502 = come_decrement_ref_count(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_494,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_495,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_497 = come_decrement_ref_count(var_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_498,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_500,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__275;
            }
            else {
            }
            (Err_502 = come_decrement_ref_count(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value567=make_define_var(left_type_500,var_name_497,(_Bool)0,info))));
        (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_497,((char*)(__right_value568=make_type_name_string(left_type_500,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 893, "struct CVALUE*"))));
        __dec_obj110=come_value2_503->c_value,
        come_value2_503->c_value=(char*)come_increment_ref_count(var_name_497);
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj111=come_value2_503->type,
        come_value2_503->type=(struct sType*)come_increment_ref_count(left_type_500);
        /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_503->type->mStatic=(_Bool)0;
        come_value2_503->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_503));
        /*c*/ come_call_finalizer3(come_value_494,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_495,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_497 = come_decrement_ref_count(var_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_498,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_500,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_503,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value575 = (void*)0;
struct sNode* __result_obj__278;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 910, "struct sNode");
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value572=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 910, "struct sNullReturnValueOfException*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result_obj__278 = come_increment_ref_count(((struct sNode*)(__right_value575=_inf_value3)));
    /*c*/ come_call_finalizer3(__right_value572,sNullReturnValueOfException_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value575) ? __right_value575 = come_decrement_ref_count(__right_value575, ((struct sNode*)__right_value575)->finalize, ((struct sNode*)__right_value575)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__278) ? __result_obj__278 = come_decrement_ref_count(__result_obj__278, ((struct sNode*)__result_obj__278)->finalize, ((struct sNode*)__result_obj__278)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__278;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
struct sNullReturnValueOfException* __result_obj__276;
void* __right_value573 = (void*)0;
struct sNullReturnValueOfException* result_504;
void* __right_value574 = (void*)0;
char* __dec_obj112;
struct sNullReturnValueOfException* __result_obj__277;
    if(    self==(void*)0) {
        __result_obj__276 = (void*)0;
        return __result_obj__276;
    }
    result_504=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*"));
    if(    self!=((void*)0)) {
        result_504->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj112=result_504->sname,
        result_504->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullReturnValueOfException_clone", 5, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_504->sline_real=self->sline_real;
    }
    __result_obj__277 = result_504;
    /*c*/ come_call_finalizer3(result_504,sNullReturnValueOfException_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __right_value576 = (void*)0;
struct sType* __dec_obj113;
struct sNullValue* __result_obj__279;
    ((struct sNodeBase*)(__right_value576=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value576,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj113=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__279 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

char* sNullValue_kind(struct sNullValue* self){
void* __right_value577 = (void*)0;
char* __result_obj__280;
    __result_obj__280 = come_increment_ref_count(((char*)(__right_value577=__builtin_string("sNullValue"))));
    (__right_value577 = come_decrement_ref_count(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__280 = come_decrement_ref_count(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__280;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct buffer* buf_506;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* var_name_508;
struct sType* left_type_509;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct CVALUE* come_value2_510;
char* __dec_obj114;
struct sType* __dec_obj115;
_Bool __result_obj__281;
    come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 929, "struct CVALUE*"))));
    buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 931, "struct buffer*"))));
    static int num_507=0;
    num_507++;
    var_name_508=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value582=int_to_string(num_507)))));
    (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_509=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value584=make_define_var(left_type_509,var_name_508,(_Bool)0,info))));
    (__right_value584 = come_decrement_ref_count(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_508,((char*)(__right_value585=make_type_name_string(left_type_509,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value585 = come_decrement_ref_count(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 943, "struct CVALUE*"))));
    __dec_obj114=come_value2_510->c_value,
    come_value2_510->c_value=(char*)come_increment_ref_count(var_name_508);
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj115=come_value2_510->type,
    come_value2_510->type=(struct sType*)come_increment_ref_count(self->type);
    /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_510->type->mStatic=(_Bool)0;
    come_value2_510->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_510));
    __result_obj__281 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_505,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_506,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_508 = come_decrement_ref_count(var_name_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_type_509,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_510,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__281;
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
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value593 = (void*)0;
struct sNode* __result_obj__284;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 959, "struct sNode");
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value589=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 959, "struct sNullValue*")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result_obj__284 = come_increment_ref_count(((struct sNode*)(__right_value593=_inf_value4)));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value589,sNullValue_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value593) ? __right_value593 = come_decrement_ref_count(__right_value593, ((struct sNode*)__right_value593)->finalize, ((struct sNode*)__right_value593)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__284) ? __result_obj__284 = come_decrement_ref_count(__result_obj__284, ((struct sNode*)__result_obj__284)->finalize, ((struct sNode*)__result_obj__284)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__284;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
struct sNullValue* __result_obj__282;
void* __right_value590 = (void*)0;
struct sNullValue* result_511;
void* __right_value591 = (void*)0;
char* __dec_obj116;
void* __right_value592 = (void*)0;
struct sType* __dec_obj117;
struct sNullValue* __result_obj__283;
    if(    self==(void*)0) {
        __result_obj__282 = (void*)0;
        return __result_obj__282;
    }
    result_511=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*"));
    if(    self!=((void*)0)) {
        result_511->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj116=result_511->sname,
        result_511->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullValue_clone", 5, "char*"));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_511->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj117=result_511->type,
        result_511->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__283 = result_511;
    /*c*/ come_call_finalizer3(result_511,sNullValue_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value594 = (void*)0;
struct list$1sNode$ph* __dec_obj118;
struct sNoneNode* __result_obj__285;
    ((struct sNodeBase*)(__right_value594=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value594,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj118=self->tuple_elements,
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    /*b*/ come_call_finalizer3(__dec_obj118,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__285 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __right_value595 = (void*)0;
char* __result_obj__286;
    __result_obj__286 = come_increment_ref_count(((char*)(__right_value595=__builtin_string("sNoneNode"))));
    (__right_value595 = come_decrement_ref_count(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__286 = come_decrement_ref_count(__result_obj__286, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__286;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_512;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1sType$ph* tuple_types_513;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1CVALUE$ph* tuple_values_514;
int i_515;
struct list$1sNode$ph* o2_saved_516;
struct sNode* it_517;
_Bool Value_518;
_Bool __result_obj__287;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sType* string_type_520;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_6_521=0;
char* Err_522=0;
_Bool _if_conditional13;
_Bool __result_obj__288;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* type_523;
struct list$1sType$ph* o2_saved_524;
struct sType* it_525;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct CVALUE* obj_value_526;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct buffer* num_string_527;
void* __right_value616 = (void*)0;
struct sType* type2_528;
void* __right_value617 = (void*)0;
char* type_name_529;
void* __right_value618 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var15 = (void*)0;
char* finalizer_name_530=0;
char* cloner_name_531=0;
char* get_hash_key_name_532=0;
char* equaler_name_533=0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
char* __dec_obj119;
void* __right_value621 = (void*)0;
struct sType* type3_534;
void* __right_value622 = (void*)0;
struct sType* __dec_obj120;
void* __right_value623 = (void*)0;
struct sType* obj_type_535;
char* fun_name_536;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_537=0;
struct sGenericsFun* generics_fun_538=0;
char* generics_fun_name_539;
void* __right_value626 = (void*)0;
struct sFun* fun_540;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
char* __dec_obj121;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_7_541=0;
char* Err_542=0;
_Bool _if_conditional14;
_Bool __result_obj__289;
void* __right_value631 = (void*)0;
struct sType* result_type_543;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1CVALUE$ph* come_params_544;
void* __right_value634 = (void*)0;
_Bool _if_conditional15;
void* __right_value635 = (void*)0;
struct list$1CVALUE$ph* o2_saved_545;
struct CVALUE* it_546;
void* __right_value636 = (void*)0;
struct CVALUE* come_value_547;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
_Bool _if_conditional16;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct buffer* buf_548;
int j_549;
struct list$1CVALUE$ph* o2_saved_550;
struct CVALUE* it_551;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value2_552;
void* __right_value644 = (void*)0;
char* __dec_obj122;
void* __right_value645 = (void*)0;
struct sType* __dec_obj123;
_Bool __result_obj__290;
    tuple_elements_512=self->tuple_elements;
    tuple_types_513=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 979, "struct list$1sType$ph*"))));
    tuple_values_514=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 980, "struct list$1CVALUE$ph*"))));
    i_515=0;
    for(    o2_saved_516=(tuple_elements_512),it_517=list$1sNode$ph_begin((o2_saved_516));    !list$1sNode$ph_end((o2_saved_516));    it_517=list$1sNode$ph_next((o2_saved_516))    ){
        Value_518=node_compile(it_517,info);
        if(        !Value_518) {
            __result_obj__287 = (_Bool)0;
            /*c*/ come_call_finalizer3(tuple_types_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(tuple_values_514,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__287;
        }
        else {
        }
        come_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values_514,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_519)));
        list$1sType$ph_push_back(tuple_types_513,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_519->type)));
        if(        i_515==1) {
            string_type_520=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 994, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
            string_type_520->mHeap=(_Bool)1;
            multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value607=check_assign_type(((char*)(__right_value606=xsprintf("invalid none type"))),string_type_520,come_value_519->type,come_value_519,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_6_521=multiple_assign_var14->v1;
            Err_522=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            (_if_conditional13=(Err_522)),            (__right_value606 = come_decrement_ref_count(__right_value606, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value607,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                __result_obj__288 = (_Bool)1;
                /*c*/ come_call_finalizer3(string_type_520,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_522 = come_decrement_ref_count(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_519,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_types_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_514,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__288;
            }
            else {
            }
            /*c*/ come_call_finalizer3(string_type_520,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (Err_522 = come_decrement_ref_count(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_515++;
        /*c*/ come_call_finalizer3(come_value_519,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_523=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1004, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types_513))),(_Bool)0,info));
    for(    o2_saved_524=(struct list$1sType$ph*)come_increment_ref_count((tuple_types_513)),it_525=list$1sType$ph_begin((o2_saved_524));    !list$1sType$ph_end((o2_saved_524));    it_525=list$1sType$ph_next((o2_saved_524))    ){
        list$1sType$ph_push_back(type_523->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value611=come_call_cloner(sType_clone, it_525))))));
        /*c*/ come_call_finalizer3(__right_value611,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_524,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_value_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1010, "struct CVALUE*"))));
    num_string_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1012, "struct buffer*"))));
    buffer_append_str(num_string_527,"1");
    type2_528=(struct sType*)come_increment_ref_count(solve_generics(type_523,type_523,info));
    type_name_529=(char*)come_increment_ref_count(make_type_name_string(type2_528,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var15=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value618=create_vtable((struct sType*)come_increment_ref_count(type2_528),info)));
    finalizer_name_530=(char*)come_increment_ref_count(multiple_assign_var15->v1);
    cloner_name_531=(char*)come_increment_ref_count(multiple_assign_var15->v2);
    get_hash_key_name_532=(char*)come_increment_ref_count(multiple_assign_var15->v3);
    equaler_name_533=(char*)come_increment_ref_count(multiple_assign_var15->v4);
    /*c*/ come_call_finalizer3(__right_value618,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj119=obj_value_526->c_value,
    obj_value_526->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_529,type_name_529,((char*)(__right_value619=buffer_to_string(num_string_527))),info->sname,info->sline,type_name_529));
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value619 = come_decrement_ref_count(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_534=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_528));
    type3_534->mPointerNum++;
    type3_534->mHeap=(_Bool)1;
    type2_528->mHeap=(_Bool)1;
    __dec_obj120=obj_value_526->type,
    obj_value_526->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_528));
    /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_526->type->mPointerNum++;
    obj_value_526->var=((void*)0);
    append_object_to_right_values2(obj_value_526,(struct sType*)come_increment_ref_count(type3_534),info,(_Bool)0);
    obj_type_535=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_528));
    fun_name_536="initialize";
    multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value625=make_generics_function(obj_type_535,(char*)come_increment_ref_count(__builtin_string(fun_name_536)),info,(_Bool)1)));
    name_537=(char*)come_increment_ref_count(multiple_assign_var16->v1);
    generics_fun_538=multiple_assign_var16->v2;
    /*c*/ come_call_finalizer3(__right_value625,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_539=(char*)come_increment_ref_count(name_537);
    fun_540=((struct sFun*)(__right_value626=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_539,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value626,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_540==((void*)0)) {
        __dec_obj121=generics_fun_name_539,
        generics_fun_name_539=(char*)come_increment_ref_count(create_method_name(obj_type_535,(_Bool)0,((char*)(__right_value627=__builtin_string(fun_name_536))),info,(_Bool)1));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value627 = come_decrement_ref_count(__right_value627, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_540=((struct sFun*)(__right_value629=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_539,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value629,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_540==((void*)0)) {
            multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value630=err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name_539,info->come_fun->mName)));
            come_exception_var_7_541=multiple_assign_var17->v1;
            Err_542=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional14=(Err_542)),            /*c*/ come_call_finalizer3(__right_value630,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional14) {
                __result_obj__289 = (_Bool)1;
                (Err_542 = come_decrement_ref_count(Err_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(tuple_types_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(tuple_values_514,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_523,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_526,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_527,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_528,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_529 = come_decrement_ref_count(type_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_530 = come_decrement_ref_count(finalizer_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_531 = come_decrement_ref_count(cloner_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_532 = come_decrement_ref_count(get_hash_key_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_533 = come_decrement_ref_count(equaler_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_534,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_535,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_537 = come_decrement_ref_count(name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_539 = come_decrement_ref_count(generics_fun_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__289;
            }
            else {
            }
            (Err_542 = come_decrement_ref_count(Err_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_543=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_540->mResultType));
    result_type_543->mStatic=(_Bool)0;
    come_params_544=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1057, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional15=(((struct sType*)(__right_value634=list$1sType$ph$p_operator_load_element(fun_540->mParamTypes,0)))->mHeap&&obj_value_526->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value634,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional15) {
        std_move(((struct sType*)(__right_value635=list$1sType$ph$p_operator_load_element(fun_540->mParamTypes,0))),obj_value_526->type,obj_value_526,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value635,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_544,(struct CVALUE*)come_increment_ref_count(obj_value_526));
    i_515=1;
    for(    o2_saved_545=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_514)),it_546=list$1CVALUE$ph_begin((o2_saved_545));    !list$1CVALUE$ph_end((o2_saved_545));    it_546=list$1CVALUE$ph_next((o2_saved_545))    ){
        come_value_547=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_546));
        if(        (_if_conditional16=(((struct sType*)(__right_value637=list$1sType$ph$p_operator_load_element(fun_540->mParamTypes,i_515)))&&((struct sType*)(__right_value638=list$1sType$ph$p_operator_load_element(fun_540->mParamTypes,i_515)))->mHeap&&come_value_547->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value637,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value638,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional16) {
            std_move(((struct sType*)(__right_value639=list$1sType$ph$p_operator_load_element(fun_540->mParamTypes,i_515))),come_value_547->type,come_value_547,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value639,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params_544,(struct CVALUE*)come_increment_ref_count(come_value_547));
        i_515++;
        /*c*/ come_call_finalizer3(come_value_547,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_545,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buf_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1076, "struct buffer*"))));
    buffer_append_str(buf_548,generics_fun_name_539);
    buffer_append_str(buf_548,"(");
    j_549=0;
    for(    o2_saved_550=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_544)),it_551=list$1CVALUE$ph_begin((o2_saved_550));    !list$1CVALUE$ph_end((o2_saved_550));    it_551=list$1CVALUE$ph_next((o2_saved_550))    ){
        buffer_append_str(buf_548,it_551->c_value);
        if(        j_549!=list$1CVALUE$ph_length(come_params_544)-1) {
            buffer_append_str(buf_548,",");
        }
        j_549++;
    }
    /*c*/ come_call_finalizer3(o2_saved_550,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_548,")");
    come_value2_552=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1093, "struct CVALUE*"))));
    __dec_obj122=come_value2_552->c_value,
    come_value2_552->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_548));
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj123=come_value2_552->type,
    come_value2_552->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_543));
    /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_552->type->mStatic=(_Bool)0;
    come_value2_552->var=((void*)0);
    if(    result_type_543->mHeap) {
        append_object_to_right_values2(come_value2_552,(struct sType*)come_increment_ref_count(result_type_543),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_552->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_552));
    __result_obj__290 = (_Bool)1;
    /*c*/ come_call_finalizer3(tuple_types_513,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(tuple_values_514,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_523,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_526,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_527,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_528,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_529 = come_decrement_ref_count(type_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_530 = come_decrement_ref_count(finalizer_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_531 = come_decrement_ref_count(cloner_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_532 = come_decrement_ref_count(get_hash_key_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_533 = come_decrement_ref_count(equaler_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_534,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_535,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_537 = come_decrement_ref_count(name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_539 = come_decrement_ref_count(generics_fun_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_543,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_544,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_548,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_552,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
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
void* __right_value646 = (void*)0;
struct list$1sNode$ph* __dec_obj124;
struct list$1sNode$ph* __dec_obj125;
struct sMapNode* __result_obj__291;
    ((struct sNodeBase*)(__right_value646=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value646,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj124=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    /*b*/ come_call_finalizer3(__dec_obj124,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj125=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    /*b*/ come_call_finalizer3(__dec_obj125,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__291 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_elements,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value647 = (void*)0;
char* __result_obj__292;
    __result_obj__292 = come_increment_ref_count(((char*)(__right_value647=__builtin_string("sMapNode"))));
    (__right_value647 = come_decrement_ref_count(__right_value647, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__292 = come_decrement_ref_count(__result_obj__292, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__292;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_553;
struct list$1sNode$ph* map_elements_554;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1CVALUE$ph* key_params_555;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1CVALUE$ph* element_params_556;
struct sType* map_key_type_557;
struct sType* map_element_type_558;
int i_559;
void* __right_value652 = (void*)0;
struct sNode* key_elements_560;
void* __right_value653 = (void*)0;
struct sNode* elements_564;
void* __right_value654 = (void*)0;
_Bool _if_conditional17;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* value_node_565;
struct sNode* exp_566;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_567;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* __dec_obj126;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_568;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* __dec_obj127;
void* __right_value675 = (void*)0;
struct sNode* __dec_obj128;
_Bool Value_569;
_Bool __result_obj__295;
void* __right_value676 = (void*)0;
struct CVALUE* come_value_570;
void* __right_value677 = (void*)0;
struct sType* __dec_obj129;
_Bool Value_571;
_Bool __result_obj__296;
void* __right_value678 = (void*)0;
struct CVALUE* come_value_572;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_573=0;
char* Err_574=0;
_Bool _if_conditional18;
_Bool __result_obj__297;
void* __right_value681 = (void*)0;
struct sType* __dec_obj130;
void* __right_value682 = (void*)0;
_Bool _if_conditional19;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sNode* value_node_575;
struct sNode* exp2_576;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_577;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_578;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value703 = (void*)0;
struct sNode* __dec_obj133;
_Bool Value_579;
_Bool __result_obj__298;
void* __right_value704 = (void*)0;
struct CVALUE* come_value2_580;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_9_581=0;
char* Err_582=0;
_Bool _if_conditional20;
_Bool __result_obj__299;
void* __right_value707 = (void*)0;
struct sType* __dec_obj134;
_Bool Value_583;
_Bool __result_obj__300;
void* __right_value708 = (void*)0;
struct CVALUE* come_value2_584;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_10_585=0;
char* Err_586=0;
_Bool _if_conditional21;
_Bool __result_obj__301;
void* __right_value711 = (void*)0;
struct sType* __dec_obj135;
void* __right_value712 = (void*)0;
struct sType* key_type_values_588;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
char* var_name_589;
void* __right_value715 = (void*)0;
struct sVar* var__590;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sType* element_type_values_591;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
char* var_name2_592;
void* __right_value720 = (void*)0;
struct sVar* var2__593;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct buffer* source_594;
int i_595;
void* __right_value724 = (void*)0;
struct CVALUE* key_param_596;
void* __right_value725 = (void*)0;
struct CVALUE* element_param_597;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* map_type_598;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sType* obj_type_599;
char* fun_name_600;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var21 = (void*)0;
char* name_601=0;
struct sGenericsFun* generics_fun_602=0;
char* generics_fun_name_603;
void* __right_value734 = (void*)0;
struct sFun* fun_604;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
char* __dec_obj136;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_11_605=0;
char* Err_606=0;
_Bool _if_conditional22;
_Bool __result_obj__302;
void* __right_value739 = (void*)0;
struct sType* result_type_607;
struct sType* type_608;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct CVALUE* obj_value_609;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct buffer* num_string_610;
void* __right_value744 = (void*)0;
struct sType* type2_611;
void* __right_value745 = (void*)0;
char* type_name_612;
struct sType* any_type_613;
void* __right_value746 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var23 = (void*)0;
char* finalizer_name_614=0;
char* cloner_name_615=0;
char* get_hash_key_name_616=0;
char* equaler_name_617=0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
char* __dec_obj137;
void* __right_value749 = (void*)0;
struct sType* type3_618;
void* __right_value750 = (void*)0;
struct sType* __dec_obj138;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1CVALUE$ph* come_params_619;
void* __right_value753 = (void*)0;
_Bool _if_conditional23;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct CVALUE* come_value2_620;
void* __right_value757 = (void*)0;
char* __dec_obj139;
struct sType* __dec_obj140;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct CVALUE* come_value3_621;
void* __right_value760 = (void*)0;
char* __dec_obj141;
struct sType* __dec_obj142;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct CVALUE* come_value4_622;
void* __right_value763 = (void*)0;
char* __dec_obj143;
struct sType* __dec_obj144;
int j_623;
struct list$1CVALUE$ph* o2_saved_624;
struct CVALUE* it_625;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct CVALUE* come_value5_626;
void* __right_value766 = (void*)0;
char* __dec_obj145;
void* __right_value767 = (void*)0;
struct sType* __dec_obj146;
_Bool __result_obj__303;
exp_566 = (void*)0;
exp2_576 = (void*)0;
    map_key_elements_553=self->map_key_elements;
    map_elements_554=self->map_elements;
    key_params_555=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1133, "struct list$1CVALUE$ph*"))));
    element_params_556=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1134, "struct list$1CVALUE$ph*"))));
    map_key_type_557=((void*)0);
    map_element_type_558=((void*)0);
    for(    i_559=0;    i_559<list$1sNode$ph_length(map_key_elements_553);    i_559++    ){
        key_elements_560=((struct sNode*)(__right_value652=list$1sNode$ph$p_operator_load_element(map_key_elements_553,i_559)));
        ((__right_value652) ? __right_value652 = come_decrement_ref_count(__right_value652, ((struct sNode*)__right_value652)->finalize, ((struct sNode*)__right_value652)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        elements_564=((struct sNode*)(__right_value653=list$1sNode$ph$p_operator_load_element(map_elements_554,i_559)));
        ((__right_value653) ? __right_value653 = come_decrement_ref_count(__right_value653, ((struct sNode*)__right_value653)->finalize, ((struct sNode*)__right_value653)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        (_if_conditional17=(string_operator_equals(((char*)(__right_value654=key_elements_560->kind(key_elements_560->_protocol_obj))),"sWildCard"))),        (__right_value654 = come_decrement_ref_count(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional17) {
            value_node_565=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value655=xsprintf("Value"))),info));
            (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_567=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1147, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_567,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1148, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_565))));
                __dec_obj126=exp_566,
                exp_566=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value662=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_565),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_567),((void*)0),0,((void*)0),info));
                (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value662 = come_decrement_ref_count(__right_value662, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_567,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_568=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1153, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_568,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1154, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_566))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_568,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1155, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_559,info)))));
                __dec_obj127=exp_566,
                exp_566=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value673=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_566),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_568),((void*)0),0,((void*)0),info));
                (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value673 = come_decrement_ref_count(__right_value673, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj128=exp_566,
                exp_566=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_566,info));
                (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_568,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_569=node_compile(exp_566,info);
            if(            !Value_569) {
                __result_obj__295 = (_Bool)0;
                ((value_node_565) ? value_node_565 = come_decrement_ref_count(value_node_565, ((struct sNode*)value_node_565)->finalize, ((struct sNode*)value_node_565)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_566) ? exp_566 = come_decrement_ref_count(exp_566, ((struct sNode*)exp_566)->finalize, ((struct sNode*)exp_566)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__295;
            }
            else {
            }
            come_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(key_params_555,(struct CVALUE*)come_increment_ref_count(come_value_570));
            __dec_obj129=map_key_type_557,
            map_key_type_557=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_570->type));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_565) ? value_node_565 = come_decrement_ref_count(value_node_565, ((struct sNode*)value_node_565)->finalize, ((struct sNode*)value_node_565)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_566) ? exp_566 = come_decrement_ref_count(exp_566, ((struct sNode*)exp_566)->finalize, ((struct sNode*)exp_566)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_570,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_571=node_compile(key_elements_560,info);
            if(            !Value_571) {
                __result_obj__296 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__296;
            }
            else {
            }
            come_value_572=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_key_type_557) {
                multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value680=check_assign_type(((char*)(__right_value679=xsprintf("invalid map key type"))),map_key_type_557,come_value_572->type,come_value_572,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_8_573=multiple_assign_var18->v1;
                Err_574=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                (_if_conditional18=(Err_574)),                (__right_value679 = come_decrement_ref_count(__right_value679, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value680,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional18) {
                    __result_obj__297 = (_Bool)1;
                    (Err_574 = come_decrement_ref_count(Err_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_572,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__297;
                }
                else {
                }
                (Err_574 = come_decrement_ref_count(Err_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(key_params_555,(struct CVALUE*)come_increment_ref_count(come_value_572));
            __dec_obj130=map_key_type_557,
            map_key_type_557=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_572->type));
            /*b*/ come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value_572,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        (_if_conditional19=(string_operator_equals(((char*)(__right_value682=elements_564->kind(elements_564->_protocol_obj))),"sWildCard"))),        (__right_value682 = come_decrement_ref_count(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional19) {
            value_node_575=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value683=xsprintf("Value"))),info));
            (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_577=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1191, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_577,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1192, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_575))));
                __dec_obj131=exp2_576,
                exp2_576=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value690=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_575),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_577),((void*)0),0,((void*)0),info));
                (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value690 = come_decrement_ref_count(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_577,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            {
                params_578=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1197, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_578,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1198, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_576))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_578,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1199, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_559,info)))));
                __dec_obj132=exp2_576,
                exp2_576=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value701=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_576),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_578),((void*)0),0,((void*)0),info));
                (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                (__right_value701 = come_decrement_ref_count(__right_value701, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj133=exp2_576,
                exp2_576=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_576,info));
                (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(params_578,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            Value_579=node_compile(exp2_576,info);
            if(            !Value_579) {
                __result_obj__298 = (_Bool)0;
                ((value_node_575) ? value_node_575 = come_decrement_ref_count(value_node_575, ((struct sNode*)value_node_575)->finalize, ((struct sNode*)value_node_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp2_576) ? exp2_576 = come_decrement_ref_count(exp2_576, ((struct sNode*)exp2_576)->finalize, ((struct sNode*)exp2_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__298;
            }
            else {
            }
            come_value2_580=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_558) {
                multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value706=check_assign_type(((char*)(__right_value705=xsprintf("invalid map element type"))),map_element_type_558,come_value2_580->type,come_value2_580,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_9_581=multiple_assign_var19->v1;
                Err_582=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional20=(Err_582)),                (__right_value705 = come_decrement_ref_count(__right_value705, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value706,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional20) {
                    __result_obj__299 = (_Bool)1;
                    (Err_582 = come_decrement_ref_count(Err_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((value_node_575) ? value_node_575 = come_decrement_ref_count(value_node_575, ((struct sNode*)value_node_575)->finalize, ((struct sNode*)value_node_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((exp2_576) ? exp2_576 = come_decrement_ref_count(exp2_576, ((struct sNode*)exp2_576)->finalize, ((struct sNode*)exp2_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value2_580,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__299;
                }
                else {
                }
                (Err_582 = come_decrement_ref_count(Err_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_556,(struct CVALUE*)come_increment_ref_count(come_value2_580));
            __dec_obj134=map_element_type_558,
            map_element_type_558=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_580->type));
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_575) ? value_node_575 = come_decrement_ref_count(value_node_575, ((struct sNode*)value_node_575)->finalize, ((struct sNode*)value_node_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_576) ? exp2_576 = come_decrement_ref_count(exp2_576, ((struct sNode*)exp2_576)->finalize, ((struct sNode*)exp2_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value2_580,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            Value_583=node_compile(elements_564,info);
            if(            !Value_583) {
                __result_obj__300 = (_Bool)0;
                /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__300;
            }
            else {
            }
            come_value2_584=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            map_element_type_558) {
                multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value710=check_assign_type(((char*)(__right_value709=xsprintf("invalid map element type"))),map_element_type_558,come_value2_584->type,come_value2_584,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_10_585=multiple_assign_var20->v1;
                Err_586=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                (_if_conditional21=(Err_586)),                (__right_value709 = come_decrement_ref_count(__right_value709, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value710,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional21) {
                    __result_obj__301 = (_Bool)1;
                    (Err_586 = come_decrement_ref_count(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value2_584,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__301;
                }
                else {
                }
                (Err_586 = come_decrement_ref_count(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph_push_back(element_params_556,(struct CVALUE*)come_increment_ref_count(come_value2_584));
            __dec_obj135=map_element_type_558,
            map_element_type_558=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_584->type));
            /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(come_value2_584,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    static int map_value_num_587=0;
    key_type_values_588=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_557));
    list$1sNode$ph_push_back(key_type_values_588->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(key_params_555),info)));
    key_type_values_588->mHeap=(_Bool)0;
    var_name_589=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_587));
    add_variable_to_table(var_name_589,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_588)),info,(_Bool)0);
    var__590=get_variable_from_table(info->lv_table,var_name_589);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value716=make_define_var(key_type_values_588,var__590->mCValueName,(_Bool)0,info))));
    (__right_value716 = come_decrement_ref_count(__right_value716, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_591=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_558));
    list$1sNode$ph_push_back(element_type_values_591->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph_length(element_params_556),info)));
    element_type_values_591->mHeap=(_Bool)0;
    var_name2_592=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_587));
    add_variable_to_table(var_name2_592,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_591)),info,(_Bool)0);
    var2__593=get_variable_from_table(info->lv_table,var_name2_592);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value721=make_define_var(element_type_values_591,var2__593->mCValueName,(_Bool)0,info))));
    (__right_value721 = come_decrement_ref_count(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_594=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1262, "struct buffer*"))));
    buffer_append_str(source_594,"(");
    for(    i_595=0;    i_595<list$1CVALUE$ph_length(key_params_555);    i_595++    ){
        key_param_596=((struct CVALUE*)(__right_value724=list$1CVALUE$ph$p_operator_load_element(key_params_555,i_595)));
        /*c*/ come_call_finalizer3(__right_value724,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        element_param_597=((struct CVALUE*)(__right_value725=list$1CVALUE$ph$p_operator_load_element(element_params_556,i_595)));
        /*c*/ come_call_finalizer3(__right_value725,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        map_key_type_557->mHeap) {
            buffer_append_format(source_594,"%s[%d]=%s,\n",var__590->mCValueName,i_595,key_param_596->c_value);
        }
        else {
            buffer_append_format(source_594,"%s[%d]=%s,\n",var__590->mCValueName,i_595,key_param_596->c_value);
        }
        if(        map_element_type_558->mHeap) {
            buffer_append_format(source_594,"%s[%d]=%s,\n",var2__593->mCValueName,i_595,element_param_597->c_value);
        }
        else {
            buffer_append_format(source_594,"%s[%d]=%s,\n",var2__593->mCValueName,i_595,element_param_597->c_value);
        }
    }
    map_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1287, "struct sType*")),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info));
    list$1sType$ph_push_back(map_type_598->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value729=come_call_cloner(sType_clone, map_key_type_557))))));
    /*c*/ come_call_finalizer3(__right_value729,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1sType$ph_push_back(map_type_598->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value730=come_call_cloner(sType_clone, map_element_type_558))))));
    /*c*/ come_call_finalizer3(__right_value730,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    obj_type_599=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_598));
    fun_name_600="initialize_with_values";
    multiple_assign_var21=((struct tuple2$2char$phsGenericsFun$p*)(__right_value733=make_generics_function(obj_type_599,(char*)come_increment_ref_count(__builtin_string(fun_name_600)),info,(_Bool)1)));
    name_601=(char*)come_increment_ref_count(multiple_assign_var21->v1);
    generics_fun_602=multiple_assign_var21->v2;
    /*c*/ come_call_finalizer3(__right_value733,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_fun_name_603=(char*)come_increment_ref_count(name_601);
    fun_604=((struct sFun*)(__right_value734=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_603,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value734,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_604==((void*)0)) {
        __dec_obj136=generics_fun_name_603,
        generics_fun_name_603=(char*)come_increment_ref_count(create_method_name(obj_type_599,(_Bool)0,((char*)(__right_value735=__builtin_string(fun_name_600))),info,(_Bool)1));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value735 = come_decrement_ref_count(__right_value735, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_604=((struct sFun*)(__right_value737=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_603,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value737,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_604==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value738=err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name_603,info->come_fun->mName)));
            come_exception_var_11_605=multiple_assign_var22->v1;
            Err_606=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional22=(Err_606)),            /*c*/ come_call_finalizer3(__right_value738,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional22) {
                __result_obj__302 = (_Bool)1;
                (Err_606 = come_decrement_ref_count(Err_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(key_type_values_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_589 = come_decrement_ref_count(var_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(element_type_values_591,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name2_592 = come_decrement_ref_count(var_name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(source_594,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_type_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_599,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_601 = come_decrement_ref_count(name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_603 = come_decrement_ref_count(generics_fun_name_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__302;
            }
            else {
            }
            (Err_606 = come_decrement_ref_count(Err_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_607=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_604->mResultType));
    result_type_607->mStatic=(_Bool)0;
    type_608=map_type_598;
    obj_value_609=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1316, "struct CVALUE*"))));
    num_string_610=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1318, "struct buffer*"))));
    buffer_append_str(num_string_610,"1");
    type2_611=(struct sType*)come_increment_ref_count(solve_generics(type_608,type_608,info));
    type_name_612=(char*)come_increment_ref_count(make_type_name_string(type2_611,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_613=(struct sType*)come_increment_ref_count(type2_611);
    any_type_613->mPointerNum=1;
    any_type_613->mHeap=(_Bool)1;
    multiple_assign_var23=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value746=create_vtable((struct sType*)come_increment_ref_count(any_type_613),info)));
    finalizer_name_614=(char*)come_increment_ref_count(multiple_assign_var23->v1);
    cloner_name_615=(char*)come_increment_ref_count(multiple_assign_var23->v2);
    get_hash_key_name_616=(char*)come_increment_ref_count(multiple_assign_var23->v3);
    equaler_name_617=(char*)come_increment_ref_count(multiple_assign_var23->v4);
    /*c*/ come_call_finalizer3(__right_value746,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj137=obj_value_609->c_value,
    obj_value_609->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_612,type_name_612,((char*)(__right_value747=buffer_to_string(num_string_610))),info->sname,info->sline,type_name_612));
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value747 = come_decrement_ref_count(__right_value747, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_618=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_611));
    type3_618->mPointerNum++;
    type3_618->mHeap=(_Bool)1;
    type2_611->mHeap=(_Bool)1;
    __dec_obj138=obj_value_609->type,
    obj_value_609->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_611));
    /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_609->type->mPointerNum++;
    obj_value_609->var=((void*)0);
    append_object_to_right_values2(obj_value_609,(struct sType*)come_increment_ref_count(type3_618),info,(_Bool)0);
    come_params_619=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1344, "struct list$1CVALUE$ph*"))));
    if(    (_if_conditional23=(((struct sType*)(__right_value753=list$1sType$ph$p_operator_load_element(fun_604->mParamTypes,0)))->mHeap&&obj_value_609->type->mHeap)),    /*c*/ come_call_finalizer3(__right_value753,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional23) {
        std_move(((struct sType*)(__right_value754=list$1sType$ph$p_operator_load_element(fun_604->mParamTypes,0))),obj_value_609->type,obj_value_609,info,(_Bool)1);
        /*c*/ come_call_finalizer3(__right_value754,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params_619,(struct CVALUE*)come_increment_ref_count(obj_value_609));
    come_value2_620=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1351, "struct CVALUE*"))));
    __dec_obj139=come_value2_620->c_value,
    come_value2_620->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params_555)));
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj140=come_value2_620->type,
    come_value2_620->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_620->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_619,(struct CVALUE*)come_increment_ref_count(come_value2_620));
    come_value3_621=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1359, "struct CVALUE*"))));
    __dec_obj141=come_value3_621->c_value,
    come_value3_621->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__590->mCValueName));
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj142=come_value3_621->type,
    come_value3_621->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_621->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_619,(struct CVALUE*)come_increment_ref_count(come_value3_621));
    come_value4_622=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1367, "struct CVALUE*"))));
    __dec_obj143=come_value4_622->c_value,
    come_value4_622->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__593->mCValueName));
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj144=come_value4_622->type,
    come_value4_622->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_622->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_619,(struct CVALUE*)come_increment_ref_count(come_value4_622));
    buffer_append_str(source_594,generics_fun_name_603);
    buffer_append_str(source_594,"(");
    j_623=0;
    for(    o2_saved_624=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_619)),it_625=list$1CVALUE$ph_begin((o2_saved_624));    !list$1CVALUE$ph_end((o2_saved_624));    it_625=list$1CVALUE$ph_next((o2_saved_624))    ){
        buffer_append_str(source_594,it_625->c_value);
        if(        j_623!=list$1CVALUE$ph_length(come_params_619)-1) {
            buffer_append_str(source_594,",");
        }
        j_623++;
    }
    /*c*/ come_call_finalizer3(o2_saved_624,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(source_594,")");
    buffer_append_str(source_594,")");
    come_value5_626=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1393, "struct CVALUE*"))));
    __dec_obj145=come_value5_626->c_value,
    come_value5_626->c_value=(char*)come_increment_ref_count(buffer_to_string(source_594));
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj146=come_value5_626->type,
    come_value5_626->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_607));
    /*b*/ come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_626->type->mStatic=(_Bool)0;
    come_value5_626->var=((void*)0);
    if(    result_type_607->mHeap) {
        append_object_to_right_values2(come_value5_626,(struct sType*)come_increment_ref_count(result_type_607),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_626->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_626));
    __result_obj__303 = (_Bool)1;
    /*c*/ come_call_finalizer3(key_params_555,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_params_556,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_key_type_557,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_element_type_558,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(key_type_values_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_589 = come_decrement_ref_count(var_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(element_type_values_591,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name2_592 = come_decrement_ref_count(var_name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_594,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(map_type_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_599,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_601 = come_decrement_ref_count(name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_603 = come_decrement_ref_count(generics_fun_name_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_607,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_609,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_610,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_611,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_612 = come_decrement_ref_count(type_name_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(any_type_613,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_614 = come_decrement_ref_count(finalizer_name_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_615 = come_decrement_ref_count(cloner_name_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_616 = come_decrement_ref_count(get_hash_key_name_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_617 = come_decrement_ref_count(equaler_name_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type3_618,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_619,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_620,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value3_621,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value4_622,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value5_626,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
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
struct list_item$1sNode$ph* it_561;
int i_562;
struct sNode* __result_obj__293;
struct sNode* default_value_563;
struct sNode* __result_obj__294;
default_value_563 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_561=self->head;
    i_562=0;
    while(it_561!=((void*)0)) {
        if(        position==i_562) {
            __result_obj__293 = come_increment_ref_count(it_561->item);
            ((__result_obj__293) ? __result_obj__293 = come_decrement_ref_count(__result_obj__293, ((struct sNode*)__result_obj__293)->finalize, ((struct sNode*)__result_obj__293)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__293;
        }
        it_561=it_561->next;
        i_562++;
    }
    memset(&default_value_563,0,sizeof(struct sNode*));
    __result_obj__294 = come_increment_ref_count(default_value_563);
    ((default_value_563) ? default_value_563 = come_decrement_ref_count(default_value_563, ((struct sNode*)default_value_563)->finalize, ((struct sNode*)default_value_563)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__294;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_627;
int sline_628;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct list$1sNode$ph* exps_629;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct buffer* value_630;
char* head_of_last_line_631;
int len_632;
void* __right_value772 = (void*)0;
struct sNode* exp_633;
int sline2_634;
void* __right_value773 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c1_635=0;
char* Err_636=0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value781 = (void*)0;
struct sNode* __result_obj__306;
int sline_real_638;
int sline_639;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct buffer* value_640;
char* p_641;
int sline_642;
int sline2_643;
void* __right_value784 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c2_644=0;
char* Err_645=0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value788 = (void*)0;
struct sNode* __result_obj__307;
int sline_real_646;
int sline_647;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct buffer* value_648;
unsigned long  int size_649;
char* p_650;
int sline_651;
int len_652;
int sline2_653;
void* __right_value791 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c3_654=0;
char* Err_655=0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value797 = (void*)0;
struct sNode* __result_obj__310;
int sline_real_657;
int sline_658;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct buffer* buf_659;
void* __right_value800 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c4_660=0;
char* Err_661=0;
_Bool global_662;
_Bool ignore_case_663;
_Bool catch_exception_664;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value804 = (void*)0;
struct sNode* obj_665;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_666;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct buffer* method_block_667;
int method_block_sline_668;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct list$1sType$ph* method_generics_types_669;
void* __right_value846 = (void*)0;
struct sNode* node_670;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sNode* __dec_obj152;
struct sNode* __result_obj__311;
int sline_real_671;
int sline_672;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct buffer* value_673;
char* p_674;
int sline_675;
int len_676;
int sline2_677;
void* __right_value851 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c5_678=0;
char* Err_679=0;
_Bool global_680;
_Bool ignore_case_681;
_Bool catch_exception_682;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value855 = (void*)0;
struct sNode* obj_683;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_684;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
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
struct buffer* method_block_685;
int method_block_sline_686;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1sType$ph* method_generics_types_687;
void* __right_value897 = (void*)0;
struct sNode* node_688;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sNode* __dec_obj153;
struct sNode* __result_obj__312;
int sline_real_689;
int c_690;
int n_691;
int n_692;
unsigned long long int n_695;
void* __right_value900 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c6_696=0;
char* Err_697=0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value905 = (void*)0;
struct sNode* __result_obj__315;
int sline_real_699;
unsigned int c_700;
_Bool quote_701;
int n_702;
int n_703;
unsigned long long int n_706;
unsigned char p2_707;
int size_708;
void* __right_value906 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_c7_710=0;
char* Err_711=0;
void* __right_value907 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c8_712=0;
char* Err_713=0;
void* __right_value908 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c9_714=0;
char* Err_715=0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value913 = (void*)0;
struct sNode* __result_obj__318;
int sline_real_717;
int sline_718;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct buffer* value_719;
char* p_720;
int sline_721;
int sline2_722;
void* __right_value916 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c10_723=0;
char* Err_724=0;
int len_725;
void* __right_value917 = (void*)0;
unsigned int* wstr_726;
char* str_727;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value923 = (void*)0;
struct sNode* __result_obj__321;
int sline_real_729;
int sline_730;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct list$1sNode$ph* exps_731;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct buffer* value_732;
char* p_733;
int sline_734;
int len_735;
void* __right_value928 = (void*)0;
struct sNode* exp_736;
int sline2_737;
void* __right_value929 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c11_738=0;
char* Err_739=0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value933 = (void*)0;
struct sNode* __result_obj__322;
int sline_real_740;
char* p_741;
_Bool no_comma_742;
void* __right_value934 = (void*)0;
struct sNode* node_743;
char* p2_744;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct buffer* first_element_source_745;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1sNode$ph* list_elements_746;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct list$1sNode$ph* map_keys_747;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct list$1sNode$ph* map_elements_748;
_Bool no_comma_749;
void* __right_value943 = (void*)0;
struct sNode* node2_750;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value950 = (void*)0;
struct sNode* __result_obj__325;
_Bool no_comma_752;
void* __right_value951 = (void*)0;
struct sNode* node2_753;
void* __right_value952 = (void*)0;
struct sNode* node3_754;
void* __right_value953 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c12_755=0;
char* Err_756=0;
void* __right_value954 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c13_757=0;
char* Err_758=0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value957 = (void*)0;
struct sNode* __result_obj__326;
_Bool no_comma_759;
void* __right_value958 = (void*)0;
struct sNode* node2_760;
void* __right_value959 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c14_761=0;
char* Err_762=0;
void* __right_value960 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c15_763=0;
char* Err_764=0;
void* __right_value961 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var39 = (void*)0;
int come_exception_var_c16_765=0;
char* Err_766=0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value967 = (void*)0;
struct sNode* __result_obj__329;
void* __right_value968 = (void*)0;
struct sNode* node_768;
struct sNode* __result_obj__330;
struct sNode* __result_obj__331;
memset(&c_690, 0, sizeof(int));
memset(&c_700, 0, sizeof(unsigned int));
memset(&quote_701, 0, sizeof(_Bool));
memset(&size_708, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_627=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_628=info->sline;
        exps_629=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1423, "struct list$1sNode$ph*"))));
        value_630=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1424, "struct buffer*"))));
        head_of_last_line_631=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_631) {
                    buffer_trim(value_630,info->p-head_of_last_line_631);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_630,37);
                buffer_append_char(value_630,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_630,92);
                buffer_append_char(value_630,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_630,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_632=0;
                    while(xisdigit(*info->p)&&len_632<3) {
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        len_632++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_630,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_633=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_629,(struct sNode*)come_increment_ref_count(exp_633));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_630,"%s");
                    ((exp_633) ? exp_633 = come_decrement_ref_count(exp_633, ((struct sNode*)exp_633)->finalize, ((struct sNode*)exp_633)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_630,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_634=info->sline;
                info->sline=sline_628;
                multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value773=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c1_635=multiple_assign_var24->v1;
                Err_636=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                ((Err_636)?(puts(Err_636),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value773,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_636 = come_decrement_ref_count(Err_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_630,92);
                    buffer_append_char(value_630,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_631=info->p;
                }
                else {
                    buffer_append_char(value_630,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_627;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1563, "struct sNode");
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value776=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1563, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_630)),(struct list$1sNode$ph*)come_increment_ref_count(exps_629),sline_628,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result_obj__306 = come_increment_ref_count(((struct sNode*)(__right_value781=_inf_value5)));
        /*c*/ come_call_finalizer3(exps_629,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_630,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value776,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value781) ? __right_value781 = come_decrement_ref_count(__right_value781, ((struct sNode*)__right_value781)->finalize, ((struct sNode*)__right_value781)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__306;
        /*c*/ come_call_finalizer3(exps_629,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_630,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_638=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_639=info->sline;
        value_640=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1573, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_641=info->p;
                sline_642=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_641;
                    info->sline=sline_642;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_640,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_640,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_640,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_643=info->sline;
                info->sline=sline_639;
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value784=err_msg(info,"close \" to make c string value")));
                come_exception_var_c2_644=multiple_assign_var25->v1;
                Err_645=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                ((Err_645)?(puts(Err_645),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value784,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline=sline2_643;
                exit(2);
                (Err_645 = come_decrement_ref_count(Err_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_640,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_638;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1626, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value787=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1626, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_640)),sline_639,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result_obj__307 = come_increment_ref_count(((struct sNode*)(__right_value788=_inf_value6)));
        /*c*/ come_call_finalizer3(value_640,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value787,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value788) ? __right_value788 = come_decrement_ref_count(__right_value788, ((struct sNode*)__right_value788)->finalize, ((struct sNode*)__right_value788)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__307;
        /*c*/ come_call_finalizer3(value_640,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_646=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_647=info->sline;
        value_648=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1636, "struct buffer*"))));
        size_649=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_648,*info->p);
                info->p++;
                p_650=info->p;
                sline_651=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_650;
                    info->sline=sline_651;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_648,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_652=0;
                    while(xisdigit(*info->p)&&len_652<3) {
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        len_652++;
                    }
                    size_649++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_648,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                    }
                    size_649++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 110:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 116:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 114:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 118:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 102:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 97:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 98:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        case 92:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                        default:
                        buffer_append_char(value_648,*info->p);
                        info->p++;
                        size_649++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_653=info->sline;
                info->sline=sline_647;
                multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value791=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c3_654=multiple_assign_var26->v1;
                Err_655=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                ((Err_655)?(puts(Err_655),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value791,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_655 = come_decrement_ref_count(Err_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_648,*info->p);
                info->p++;
                size_649++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_646;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1763, "struct sNode");
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value793=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1763, "struct sBufferNode*")),(struct buffer*)come_increment_ref_count(value_648),size_649,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result_obj__310 = come_increment_ref_count(((struct sNode*)(__right_value797=_inf_value7)));
        /*c*/ come_call_finalizer3(value_648,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value793,sBufferNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value797) ? __right_value797 = come_decrement_ref_count(__right_value797, ((struct sNode*)__right_value797)->finalize, ((struct sNode*)__right_value797)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__310) ? __result_obj__310 = come_decrement_ref_count(__result_obj__310, ((struct sNode*)__result_obj__310)->finalize, ((struct sNode*)__result_obj__310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__310;
        /*c*/ come_call_finalizer3(value_648,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_657=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_658=info->sline;
        buf_659=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1772, "struct buffer*"))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_659,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value800=err_msg(info,"require closing / for regex")));
                come_exception_var_c4_660=multiple_assign_var27->v1;
                Err_661=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                ((Err_661)?(puts(Err_661),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value800,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(5);
                (Err_661 = come_decrement_ref_count(Err_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_char(buf_659,*info->p);
                info->p++;
            }
        }
        global_662=(_Bool)0;
        ignore_case_663=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_662=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_663=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_664=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_664=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1816, "struct sNode");
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value803=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1816, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(buf_659)),sline_658,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_665=(struct sNode*)come_increment_ref_count(_inf_value8);
        /*c*/ come_call_finalizer3(__right_value803,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_666=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1818, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1820, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_665))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1821, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_663)?(((struct sNode*)(__right_value811=create_int_node(1,info)))):(((struct sNode*)(__right_value812=create_int_node(0,info)))))))));
        ((__right_value811) ? __right_value811 = come_decrement_ref_count(__right_value811, ((struct sNode*)__right_value811)->finalize, ((struct sNode*)__right_value811)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value812) ? __right_value812 = come_decrement_ref_count(__right_value812, ((struct sNode*)__right_value812)->finalize, ((struct sNode*)__right_value812)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1822, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1823, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_662)?(((struct sNode*)(__right_value820=create_int_node(1,info)))):(((struct sNode*)(__right_value821=create_int_node(0,info)))))))));
        ((__right_value820) ? __right_value820 = come_decrement_ref_count(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value821) ? __right_value821 = come_decrement_ref_count(__right_value821, ((struct sNode*)__right_value821)->finalize, ((struct sNode*)__right_value821)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1824, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1825, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1826, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1827, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_666,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1828, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_667=((void*)0);
        method_block_sline_668=info->sline;
        method_generics_types_669=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1834, "struct list$1sType$ph*"))));
        node_670=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_665),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_666),method_block_667,method_block_sline_668,method_generics_types_669,info));
        if(        !catch_exception_664) {
            __dec_obj152=node_670,
            node_670=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_670)),info));
            (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        info->sline_real=sline_real_657;
        __result_obj__311 = come_increment_ref_count(node_670);
        /*c*/ come_call_finalizer3(buf_659,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_665) ? obj_665 = come_decrement_ref_count(obj_665, ((struct sNode*)obj_665)->finalize, ((struct sNode*)obj_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_666,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_669,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_670) ? node_670 = come_decrement_ref_count(node_670, ((struct sNode*)node_670)->finalize, ((struct sNode*)node_670)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__311) ? __result_obj__311 = come_decrement_ref_count(__result_obj__311, ((struct sNode*)__result_obj__311)->finalize, ((struct sNode*)__result_obj__311)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__311;
        /*c*/ come_call_finalizer3(buf_659,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_665) ? obj_665 = come_decrement_ref_count(obj_665, ((struct sNode*)obj_665)->finalize, ((struct sNode*)obj_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_666,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_669,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_670) ? node_670 = come_decrement_ref_count(node_670, ((struct sNode*)node_670)->finalize, ((struct sNode*)node_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_671=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_672=info->sline;
        value_673=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1852, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_674=info->p;
                sline_675=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_674;
                    info->sline=sline_675;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_673,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_676=0;
                    while(xisdigit(*info->p)&&len_676<3) {
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        len_676++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_673,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_673,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_677=info->sline;
                info->sline=sline_672;
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value851=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c5_678=multiple_assign_var28->v1;
                Err_679=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_679)?(puts(Err_679),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value851,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_679 = come_decrement_ref_count(Err_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_673,*info->p);
                info->p++;
            }
        }
        global_680=(_Bool)0;
        ignore_case_681=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_680=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_681=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_682=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_682=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1983, "struct sNode");
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value854=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1983, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_673)),sline_672,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_683=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value854,sStrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        params_684=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1985, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1987, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_683))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1988, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_681)?(((struct sNode*)(__right_value862=create_int_node(1,info)))):(((struct sNode*)(__right_value863=create_int_node(0,info)))))))));
        ((__right_value862) ? __right_value862 = come_decrement_ref_count(__right_value862, ((struct sNode*)__right_value862)->finalize, ((struct sNode*)__right_value862)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value863) ? __right_value863 = come_decrement_ref_count(__right_value863, ((struct sNode*)__right_value863)->finalize, ((struct sNode*)__right_value863)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1989, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1990, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_680)?(((struct sNode*)(__right_value871=create_int_node(1,info)))):(((struct sNode*)(__right_value872=create_int_node(0,info)))))))));
        ((__right_value871) ? __right_value871 = come_decrement_ref_count(__right_value871, ((struct sNode*)__right_value871)->finalize, ((struct sNode*)__right_value871)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value872) ? __right_value872 = come_decrement_ref_count(__right_value872, ((struct sNode*)__right_value872)->finalize, ((struct sNode*)__right_value872)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1991, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1992, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1993, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1994, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_684,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1995, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_685=((void*)0);
        method_block_sline_686=info->sline;
        method_generics_types_687=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 2001, "struct list$1sType$ph*"))));
        node_688=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_683),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_684),method_block_685,method_block_sline_686,method_generics_types_687,info));
        if(        !catch_exception_682) {
            __dec_obj153=node_688,
            node_688=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_688)),info));
            (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        info->sline_real=sline_real_671;
        __result_obj__312 = come_increment_ref_count(node_688);
        /*c*/ come_call_finalizer3(value_673,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_683) ? obj_683 = come_decrement_ref_count(obj_683, ((struct sNode*)obj_683)->finalize, ((struct sNode*)obj_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_684,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_687,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_688) ? node_688 = come_decrement_ref_count(node_688, ((struct sNode*)node_688)->finalize, ((struct sNode*)node_688)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__312;
        /*c*/ come_call_finalizer3(value_673,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_683) ? obj_683 = come_decrement_ref_count(obj_683, ((struct sNode*)obj_683)->finalize, ((struct sNode*)obj_683)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_684,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_687,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_688) ? node_688 = come_decrement_ref_count(node_688, ((struct sNode*)node_688)->finalize, ((struct sNode*)node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==39) {
        sline_real_689=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_691=0;
                while(xisdigit(*info->p)) {
                    n_691=n_691*8+*info->p-48;
                    info->p++;
                }
                c_690=n_691;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_690=10;
                    info->p++;
                    break;
                    case 116:
                    c_690=9;
                    info->p++;
                    break;
                    case 114:
                    c_690=13;
                    info->p++;
                    break;
                    case 97:
                    c_690=7;
                    info->p++;
                    break;
                    case 102:
                    c_690=12;
                    info->p++;
                    break;
                    case 118:
                    c_690=11;
                    info->p++;
                    break;
                    case 98:
                    c_690=8;
                    info->p++;
                    break;
                    case 92:
                    c_690=92;
                    info->p++;
                    break;
                    case 48:
                    c_690=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_692=0;
                        while(xisdigit(*info->p)) {
                            n_692=n_692*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_690=n_692;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_693[128];
                        memset(&buf_693, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_693,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_694[2];
                            memset(&buf2_694, 0, sizeof(char)                            *(2)                            );
                            buf2_694[0]=*info->p;
                            buf2_694[1]=0;
                            info->p++;
                            strncat(buf_693,buf2_694,128);
                        }
                        n_695=strtoll(buf_693,((void*)0),0);
                        c_690=n_695;
                    }
                    break;
                    default:
                    c_690=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_690=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value900=err_msg(info,"close \' to make character value")));
            come_exception_var_c6_696=multiple_assign_var29->v1;
            Err_697=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            ((Err_697)?(puts(Err_697),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value900,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (Err_697 = come_decrement_ref_count(Err_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_689;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2130, "struct sNode");
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value902=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2130, "struct sCharNode*")),c_690,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result_obj__315 = come_increment_ref_count(((struct sNode*)(__right_value905=_inf_value10)));
            /*c*/ come_call_finalizer3(__right_value902,sCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value905) ? __right_value905 = come_decrement_ref_count(__right_value905, ((struct sNode*)__right_value905)->finalize, ((struct sNode*)__right_value905)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__315) ? __result_obj__315 = come_decrement_ref_count(__result_obj__315, ((struct sNode*)__result_obj__315)->finalize, ((struct sNode*)__result_obj__315)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__315;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_699=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_701=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_702=0;
                while(xisdigit(*info->p)) {
                    n_702=n_702*8+*info->p-48;
                    info->p++;
                }
                c_700=n_702;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_700=10;
                    info->p++;
                    break;
                    case 116:
                    c_700=9;
                    info->p++;
                    break;
                    case 114:
                    c_700=13;
                    info->p++;
                    break;
                    case 97:
                    c_700=7;
                    info->p++;
                    break;
                    case 92:
                    c_700=92;
                    info->p++;
                    break;
                    case 48:
                    c_700=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_703=0;
                        while(xisdigit(*info->p)) {
                            n_703=n_703*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_700=n_703;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_704[128];
                        memset(&buf_704, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_704,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_705[2];
                            memset(&buf2_705, 0, sizeof(char)                            *(2)                            );
                            buf2_705[0]=*info->p;
                            buf2_705[1]=0;
                            info->p++;
                            strncat(buf_704,buf2_705,128);
                        }
                        n_706=strtoll(buf_704,((void*)0),0);
                        c_700=n_706;
                    }
                    break;
                    default:
                    c_700=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_701=(_Bool)0;
            p2_707=*(unsigned char*)info->p;
            if(            p2_707>127) {
                char str_709[4+1];
                memset(&str_709, 0, sizeof(char)                *(4+1)                );
                size_708=((p2_707&128)>>7)+((p2_707&64)>>6)+((p2_707&32)>>5)+((p2_707&16)>>4);
                if(                size_708>4) {
                    multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value906=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    come_exception_var_c7_710=multiple_assign_var30->v1;
                    Err_711=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                    ((Err_711)?(puts(Err_711),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value906,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    info->err_num++;
                    (Err_711 = come_decrement_ref_count(Err_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    memcpy(str_709,info->p,size_708);
                    str_709[size_708]=0;
                    if(                    mbtowc(&c_700,str_709,size_708)<0) {
                        perror("mbtowc");
                        multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value907=err_msg(info,"invalid utf-8 character. mbtowc")));
                        come_exception_var_c8_712=multiple_assign_var31->v1;
                        Err_713=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        ((Err_713)?(puts(Err_713),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value907,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        info->err_num++;
                        (Err_713 = come_decrement_ref_count(Err_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        info->p+=size_708;
                    }
                }
            }
            else {
                c_700=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value908=err_msg(info,"close \' to make character value")));
            come_exception_var_c9_714=multiple_assign_var32->v1;
            Err_715=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_715)?(puts(Err_715),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value908,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->err_num++;
            (Err_715 = come_decrement_ref_count(Err_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_699;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2272, "struct sNode");
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value910=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2272, "struct sWCharNode*")),c_700,quote_701,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result_obj__318 = come_increment_ref_count(((struct sNode*)(__right_value913=_inf_value11)));
            /*c*/ come_call_finalizer3(__right_value910,sWCharNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value913) ? __right_value913 = come_decrement_ref_count(__right_value913, ((struct sNode*)__right_value913)->finalize, ((struct sNode*)__right_value913)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__318;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_717=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_718=info->sline;
        value_719=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2283, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_720=info->p;
                sline_721=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_720;
                    info->sline=sline_721;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_719,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_719,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_719,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_722=info->sline;
                info->sline=sline_718;
                multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value916=err_msg(info,"close \" to make c string value")));
                come_exception_var_c10_723=multiple_assign_var33->v1;
                Err_724=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_724)?(puts(Err_724),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value916,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_724 = come_decrement_ref_count(Err_724, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_719,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_725=value_719->len;
        wstr_726=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_725+1)), "06str.c", 2334, "unsigned int*"));
        str_727=value_719->buf;
        if(        mbstowcs(wstr_726,str_727,len_725+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_726[len_725]=0;
        info->sline_real=sline_real_717;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2346, "struct sNode");
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value919=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2346, "struct sWStringNode*")),(unsigned int*)come_increment_ref_count(wstr_726),sline_718,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result_obj__321 = come_increment_ref_count(((struct sNode*)(__right_value923=_inf_value12)));
        /*c*/ come_call_finalizer3(value_719,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_726 = come_decrement_ref_count(wstr_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value919,sWStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value923) ? __right_value923 = come_decrement_ref_count(__right_value923, ((struct sNode*)__right_value923)->finalize, ((struct sNode*)__right_value923)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__321;
        /*c*/ come_call_finalizer3(value_719,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (wstr_726 = come_decrement_ref_count(wstr_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_729=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_730=info->sline;
        exps_731=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2356, "struct list$1sNode$ph*"))));
        value_732=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2357, "struct buffer*"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_733=info->p;
                sline_734=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_733;
                    info->sline=sline_734;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_732,37);
                buffer_append_char(value_732,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_732,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_735=0;
                    while(xisdigit(*info->p)&&len_735<3) {
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        len_735++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_732,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_736=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_731,(struct sNode*)come_increment_ref_count(exp_736));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_732,"%s");
                    ((exp_736) ? exp_736 = come_decrement_ref_count(exp_736, ((struct sNode*)exp_736)->finalize, ((struct sNode*)exp_736)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_732,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_737=info->sline;
                info->sline=sline_730;
                multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value929=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c11_738=multiple_assign_var34->v1;
                Err_739=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                ((Err_739)?(puts(Err_739),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value929,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_739 = come_decrement_ref_count(Err_739, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_732,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_729;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2505, "struct sNode");
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value932=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2505, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_732)),(struct list$1sNode$ph*)come_increment_ref_count(exps_731),sline_730,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result_obj__322 = come_increment_ref_count(((struct sNode*)(__right_value933=_inf_value13)));
        /*c*/ come_call_finalizer3(exps_731,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_732,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value932,sSStringNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value933) ? __right_value933 = come_decrement_ref_count(__right_value933, ((struct sNode*)__right_value933)->finalize, ((struct sNode*)__right_value933)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__322;
        /*c*/ come_call_finalizer3(exps_731,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value_732,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_740=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_741=info->p;
        no_comma_742=info->no_comma;
        info->no_comma=(_Bool)1;
        node_743=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_742;
        p2_744=info->p;
        first_element_source_745=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2524, "struct buffer*"))));
        buffer_append(first_element_source_745,p_741,p2_744-p_741);
        buffer_append_char(first_element_source_745,0);
        list_elements_746=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2529, "struct list$1sNode$ph*"))));
        map_keys_747=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2531, "struct list$1sNode$ph*"))));
        map_elements_748=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2532, "struct list$1sNode$ph*"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys_747,(struct sNode*)come_increment_ref_count(node_743));
            no_comma_749=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_750=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_749;
            list$1sNode$ph_push_back(map_elements_748,(struct sNode*)come_increment_ref_count(node2_750));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2555, "struct sNode");
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value945=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2555, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_747),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_748),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result_obj__325 = come_increment_ref_count(((struct sNode*)(__right_value950=_inf_value14)));
                ((node2_750) ? node2_750 = come_decrement_ref_count(node2_750, ((struct sNode*)node2_750)->finalize, ((struct sNode*)node2_750)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_745,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_746,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_747,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_748,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value945,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value950) ? __right_value950 = come_decrement_ref_count(__right_value950, ((struct sNode*)__right_value950)->finalize, ((struct sNode*)__right_value950)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__325;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_752=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_753=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_752;
                    list$1sNode$ph_push_back(map_keys_747,(struct sNode*)come_increment_ref_count(node2_753));
                    expected_next_character(58,info);
                    no_comma_752=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_754=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_752;
                    list$1sNode$ph_push_back(map_elements_748,(struct sNode*)come_increment_ref_count(node3_754));
                    if(                    *info->p==0) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value953=err_msg(info,"invalid source end")));
                        come_exception_var_c12_755=multiple_assign_var35->v1;
                        Err_756=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        ((Err_756)?(puts(Err_756),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value953,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_756 = come_decrement_ref_count(Err_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_753) ? node2_753 = come_decrement_ref_count(node2_753, ((struct sNode*)node2_753)->finalize, ((struct sNode*)node2_753)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        ((node3_754) ? node3_754 = come_decrement_ref_count(node3_754, ((struct sNode*)node3_754)->finalize, ((struct sNode*)node3_754)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                    }
                    else {
                        multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value954=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        come_exception_var_c13_757=multiple_assign_var36->v1;
                        Err_758=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                        ((Err_758)?(puts(Err_758),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value954,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_758 = come_decrement_ref_count(Err_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_753) ? node2_753 = come_decrement_ref_count(node2_753, ((struct sNode*)node2_753)->finalize, ((struct sNode*)node2_753)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node3_754) ? node3_754 = come_decrement_ref_count(node3_754, ((struct sNode*)node3_754)->finalize, ((struct sNode*)node3_754)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2600, "struct sNode");
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value956=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2600, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_747),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_748),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result_obj__326 = come_increment_ref_count(((struct sNode*)(__right_value957=_inf_value15)));
                ((node2_750) ? node2_750 = come_decrement_ref_count(node2_750, ((struct sNode*)node2_750)->finalize, ((struct sNode*)node2_750)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(first_element_source_745,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(list_elements_746,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_keys_747,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(map_elements_748,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value956,sMapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value957) ? __right_value957 = come_decrement_ref_count(__right_value957, ((struct sNode*)__right_value957)->finalize, ((struct sNode*)__right_value957)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__326;
            }
            ((node2_750) ? node2_750 = come_decrement_ref_count(node2_750, ((struct sNode*)node2_750)->finalize, ((struct sNode*)node2_750)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_746,(struct sNode*)come_increment_ref_count(node_743));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements_746,(struct sNode*)come_increment_ref_count(node_743));
            while((_Bool)1) {
                no_comma_759=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_760=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_759;
                list$1sNode$ph_push_back(list_elements_746,(struct sNode*)come_increment_ref_count(node2_760));
                if(                *info->p==0) {
                    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value959=err_msg(info,"invalid source end")));
                    come_exception_var_c14_761=multiple_assign_var37->v1;
                    Err_762=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                    ((Err_762)?(puts(Err_762),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value959,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_762 = come_decrement_ref_count(Err_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_760) ? node2_760 = come_decrement_ref_count(node2_760, ((struct sNode*)node2_760)->finalize, ((struct sNode*)node2_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value960=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    come_exception_var_c15_763=multiple_assign_var38->v1;
                    Err_764=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_764)?(puts(Err_764),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value960,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_764 = come_decrement_ref_count(Err_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                ((node2_760) ? node2_760 = come_decrement_ref_count(node2_760, ((struct sNode*)node2_760)->finalize, ((struct sNode*)node2_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            multiple_assign_var39=((struct tuple2$2int$char$ph*)(__right_value961=err_msg(info,"invalid character(5)(%c)",*info->p)));
            come_exception_var_c16_765=multiple_assign_var39->v1;
            Err_766=(char*)come_increment_ref_count(multiple_assign_var39->v2);
            ((Err_766)?(puts(Err_766),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value961,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_766 = come_decrement_ref_count(Err_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sNode$ph_length(list_elements_746)>0) {
            info->sline_real=sline_real_740;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2652, "struct sNode");
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value963=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2652, "struct sListNode*")),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_746),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result_obj__329 = come_increment_ref_count(((struct sNode*)(__right_value967=_inf_value16)));
            ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(first_element_source_745,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(list_elements_746,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_keys_747,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(map_elements_748,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value963,sListNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value967) ? __right_value967 = come_decrement_ref_count(__right_value967, ((struct sNode*)__right_value967)->finalize, ((struct sNode*)__right_value967)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__329) ? __result_obj__329 = come_decrement_ref_count(__result_obj__329, ((struct sNode*)__result_obj__329)->finalize, ((struct sNode*)__result_obj__329)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__329;
        }
        else {
        }
        ((node_743) ? node_743 = come_decrement_ref_count(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(first_element_source_745,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(list_elements_746,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_keys_747,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(map_elements_748,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        node_768=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__330 = come_increment_ref_count(node_768);
        ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__330) ? __result_obj__330 = come_decrement_ref_count(__result_obj__330, ((struct sNode*)__result_obj__330)->finalize, ((struct sNode*)__result_obj__330)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__330;
        ((node_768) ? node_768 = come_decrement_ref_count(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__331 = come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__331;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__304;
void* __right_value777 = (void*)0;
struct sSStringNode* result_637;
void* __right_value778 = (void*)0;
char* __dec_obj147;
void* __right_value779 = (void*)0;
char* __dec_obj148;
void* __right_value780 = (void*)0;
struct list$1sNode$ph* __dec_obj149;
struct sSStringNode* __result_obj__305;
    if(    self==(void*)0) {
        __result_obj__304 = (void*)0;
        return __result_obj__304;
    }
    result_637=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*"));
    if(    self!=((void*)0)) {
        result_637->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj147=result_637->sname,
        result_637->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSStringNode_clone", 5, "char*"));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_637->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj148=result_637->value,
        result_637->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sSStringNode_clone", 7, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj149=result_637->exps,
        result_637->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        /*b*/ come_call_finalizer3(__dec_obj149,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__305 = result_637;
    /*c*/ come_call_finalizer3(result_637,sSStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__308;
void* __right_value794 = (void*)0;
struct sBufferNode* result_656;
void* __right_value795 = (void*)0;
char* __dec_obj150;
void* __right_value796 = (void*)0;
struct buffer* __dec_obj151;
struct sBufferNode* __result_obj__309;
    if(    self==(void*)0) {
        __result_obj__308 = (void*)0;
        return __result_obj__308;
    }
    result_656=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*"));
    if(    self!=((void*)0)) {
        result_656->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=result_656->sname,
        result_656->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBufferNode_clone", 5, "char*"));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_656->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj151=result_656->value,
        result_656->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        /*b*/ come_call_finalizer3(__dec_obj151,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_656->size=self->size;
    }
    __result_obj__309 = result_656;
    /*c*/ come_call_finalizer3(result_656,sBufferNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__313;
void* __right_value903 = (void*)0;
struct sCharNode* result_698;
void* __right_value904 = (void*)0;
char* __dec_obj154;
struct sCharNode* __result_obj__314;
    if(    self==(void*)0) {
        __result_obj__313 = (void*)0;
        return __result_obj__313;
    }
    result_698=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*"));
    if(    self!=((void*)0)) {
        result_698->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_698->sname,
        result_698->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCharNode_clone", 5, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_698->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_698->value=self->value;
    }
    __result_obj__314 = result_698;
    /*c*/ come_call_finalizer3(result_698,sCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__314;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__316;
void* __right_value911 = (void*)0;
struct sWCharNode* result_716;
void* __right_value912 = (void*)0;
char* __dec_obj155;
struct sWCharNode* __result_obj__317;
    if(    self==(void*)0) {
        __result_obj__316 = (void*)0;
        return __result_obj__316;
    }
    result_716=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*"));
    if(    self!=((void*)0)) {
        result_716->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_716->sname,
        result_716->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWCharNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_716->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_716->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_716->quote=self->quote;
    }
    __result_obj__317 = result_716;
    /*c*/ come_call_finalizer3(result_716,sWCharNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__317;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__319;
void* __right_value920 = (void*)0;
struct sWStringNode* result_728;
void* __right_value921 = (void*)0;
char* __dec_obj156;
void* __right_value922 = (void*)0;
unsigned int* __dec_obj157;
struct sWStringNode* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__319 = (void*)0;
        return __result_obj__319;
    }
    result_728=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*"));
    if(    self!=((void*)0)) {
        result_728->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj156=result_728->sname,
        result_728->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWStringNode_clone", 5, "char*"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_728->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj157=result_728->value,
        result_728->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__320 = result_728;
    /*c*/ come_call_finalizer3(result_728,sWStringNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__320;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__323;
void* __right_value946 = (void*)0;
struct sMapNode* result_751;
void* __right_value947 = (void*)0;
char* __dec_obj158;
void* __right_value948 = (void*)0;
struct list$1sNode$ph* __dec_obj159;
void* __right_value949 = (void*)0;
struct list$1sNode$ph* __dec_obj160;
struct sMapNode* __result_obj__324;
    if(    self==(void*)0) {
        __result_obj__323 = (void*)0;
        return __result_obj__323;
    }
    result_751=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*"));
    if(    self!=((void*)0)) {
        result_751->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj158=result_751->sname,
        result_751->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMapNode_clone", 5, "char*"));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj159=result_751->map_key_elements,
        result_751->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_key_elements));
        /*b*/ come_call_finalizer3(__dec_obj159,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj160=result_751->map_elements,
        result_751->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_elements));
        /*b*/ come_call_finalizer3(__dec_obj160,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__324 = result_751;
    /*c*/ come_call_finalizer3(result_751,sMapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__327;
void* __right_value964 = (void*)0;
struct sListNode* result_767;
void* __right_value965 = (void*)0;
char* __dec_obj161;
void* __right_value966 = (void*)0;
struct list$1sNode$ph* __dec_obj162;
struct sListNode* __result_obj__328;
    if(    self==(void*)0) {
        __result_obj__327 = (void*)0;
        return __result_obj__327;
    }
    result_767=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*"));
    if(    self!=((void*)0)) {
        result_767->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_767->sname,
        result_767->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sListNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_767->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj162=result_767->list_elements,
        result_767->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->list_elements));
        /*b*/ come_call_finalizer3(__dec_obj162,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__328 = result_767;
    /*c*/ come_call_finalizer3(result_767,sListNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__328;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_769;
char* p_770;
char* name_771;
void* __right_value971 = (void*)0;
char* __dec_obj163;
_Bool no_comma_772;
void* __right_value972 = (void*)0;
struct sNode* node_773;
void* __right_value973 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c17_777=0;
char* Err_778=0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value990 = (void*)0;
struct sNode* __result_obj__337;
name_771 = (void*)0;
    tuple_elements_769=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2667, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    while((_Bool)1) {
        p_770=info->p;
        if(        named_tuple) {
            __dec_obj163=name_771,
            name_771=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_772=info->no_comma;
        info->no_comma=(_Bool)1;
        node_773=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj164=node_773,
        node_773=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_773),info));
        (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_772;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements_769,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2686, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_771, "06str.c", 2686, "char*")),(struct sNode*)come_increment_ref_count(node_773))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_771 = come_decrement_ref_count(name_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_773) ? node_773 = come_decrement_ref_count(node_773, ((struct sNode*)node_773)->finalize, ((struct sNode*)node_773)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        else {
            multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value980=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            come_exception_var_c17_777=multiple_assign_var40->v1;
            Err_778=(char*)come_increment_ref_count(multiple_assign_var40->v2);
            ((Err_778)?(puts(Err_778),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value980,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_778 = come_decrement_ref_count(Err_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (name_771 = come_decrement_ref_count(name_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_773) ? node_773 = come_decrement_ref_count(node_773, ((struct sNode*)node_773)->finalize, ((struct sNode*)node_773)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2703, "struct sNode");
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value982=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2703, "struct sTupleNode*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_769),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result_obj__337 = come_increment_ref_count(((struct sNode*)(__right_value990=_inf_value17)));
    /*c*/ come_call_finalizer3(tuple_elements_769,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value982,sTupleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value990) ? __right_value990 = come_decrement_ref_count(__right_value990, ((struct sNode*)__right_value990)->finalize, ((struct sNode*)__right_value990)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__337) ? __result_obj__337 = come_decrement_ref_count(__result_obj__337, ((struct sNode*)__result_obj__337)->finalize, ((struct sNode*)__result_obj__337)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__337;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value974 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_774;
struct tuple2$2char$phsNode$ph* __dec_obj165;
void* __right_value975 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_775;
struct tuple2$2char$phsNode$ph* __dec_obj166;
void* __right_value976 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_776;
struct tuple2$2char$phsNode$ph* __dec_obj167;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__332;
    if(    self->len==0) {
        litem_774=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value974=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1227, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_774->prev=((void*)0);
        litem_774->next=((void*)0);
        __dec_obj165=litem_774->item,
        litem_774->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj165,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_774;
        self->head=litem_774;
    }
    else if(    self->len==1) {
        litem_775=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value975=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1237, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_775->prev=self->head;
        litem_775->next=((void*)0);
        __dec_obj166=litem_775->item,
        litem_775->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj166,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_775;
        self->head->next=litem_775;
    }
    else {
        litem_776=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value976=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1247, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_776->prev=self->tail;
        litem_776->next=((void*)0);
        __dec_obj167=litem_776->item,
        litem_776->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj167,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_776;
        self->tail=litem_776;
    }
    self->len++;
    __result_obj__332 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__332;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__333;
void* __right_value983 = (void*)0;
struct sTupleNode* result_779;
void* __right_value984 = (void*)0;
char* __dec_obj168;
void* __right_value989 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj169;
struct sTupleNode* __result_obj__336;
    if(    self==(void*)0) {
        __result_obj__333 = (void*)0;
        return __result_obj__333;
    }
    result_779=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*"));
    if(    self!=((void*)0)) {
        result_779->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_779->sname,
        result_779->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTupleNode_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_779->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj169=result_779->tuple_elements,
        result_779->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj169,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__336 = result_779;
    /*c*/ come_call_finalizer3(result_779,sTupleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__336;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__334;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_780;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_781;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__335;
    if(    self==((void*)0)) {
        __result_obj__334 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__334,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__334;
    }
    result_780=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_781=self->head;
    while(it_781!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_780,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_781->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_780,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_781->item)));
        }
        it_781=it_781->next;
    }
    __result_obj__335 = come_increment_ref_count(result_780);
    /*c*/ come_call_finalizer3(result_780,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__335,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct list$1sNode$ph* tuple_elements_782;
struct sNode* node_783;
void* __right_value993 = (void*)0;
struct sNode* node2_784;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value999 = (void*)0;
struct sNode* __result_obj__340;
    tuple_elements_782=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2708, "struct list$1sNode$ph*"))));
    node_783=(struct sNode*)come_increment_ref_count(exp);
    list$1sNode$ph_push_back(tuple_elements_782,(struct sNode*)come_increment_ref_count(node_783));
    node2_784=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_782,(struct sNode*)come_increment_ref_count(node2_784));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2718, "struct sNode");
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value995=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2718, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_782),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result_obj__340 = come_increment_ref_count(((struct sNode*)(__right_value999=_inf_value18)));
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(tuple_elements_782,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_783) ? node_783 = come_decrement_ref_count(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_784) ? node2_784 = come_decrement_ref_count(node2_784, ((struct sNode*)node2_784)->finalize, ((struct sNode*)node2_784)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value995,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value999) ? __right_value999 = come_decrement_ref_count(__right_value999, ((struct sNode*)__right_value999)->finalize, ((struct sNode*)__right_value999)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__340;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
struct sSomeNode* __result_obj__338;
void* __right_value996 = (void*)0;
struct sSomeNode* result_785;
void* __right_value997 = (void*)0;
char* __dec_obj170;
void* __right_value998 = (void*)0;
struct list$1sNode$ph* __dec_obj171;
struct sSomeNode* __result_obj__339;
    if(    self==(void*)0) {
        __result_obj__338 = (void*)0;
        return __result_obj__338;
    }
    result_785=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*"));
    if(    self!=((void*)0)) {
        result_785->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_785->sname,
        result_785->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSomeNode_clone", 5, "char*"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_785->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj171=result_785->tuple_elements,
        result_785->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj171,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__339 = result_785;
    /*c*/ come_call_finalizer3(result_785,sSomeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__339;
}

struct sNode* parse_some(struct sInfo* info){
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct list$1sNode$ph* tuple_elements_786;
void* __right_value1002 = (void*)0;
struct sNode* node_787;
void* __right_value1003 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value1004 = (void*)0;
struct sNode* node2_788;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1007 = (void*)0;
struct sNode* __result_obj__341;
    tuple_elements_786=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2723, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_787=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj172=node_787,
    node_787=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_787),info));
    (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    list$1sNode$ph_push_back(tuple_elements_786,(struct sNode*)come_increment_ref_count(node_787));
    node2_788=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph_push_back(tuple_elements_786,(struct sNode*)come_increment_ref_count(node2_788));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2736, "struct sNode");
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1006=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2736, "struct sSomeNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_786),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result_obj__341 = come_increment_ref_count(((struct sNode*)(__right_value1007=_inf_value19)));
    /*c*/ come_call_finalizer3(tuple_elements_786,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_787) ? node_787 = come_decrement_ref_count(node_787, ((struct sNode*)node_787)->finalize, ((struct sNode*)node_787)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_788) ? node2_788 = come_decrement_ref_count(node2_788, ((struct sNode*)node2_788)->finalize, ((struct sNode*)node2_788)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value1006,sSomeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value1007) ? __right_value1007 = come_decrement_ref_count(__right_value1007, ((struct sNode*)__right_value1007)->finalize, ((struct sNode*)__right_value1007)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__341;
}

struct sNode* parse_none(struct sInfo* info){
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct list$1sNode$ph* tuple_elements_789;
void* __right_value1010 = (void*)0;
struct sNode* node_790;
void* __right_value1011 = (void*)0;
struct sNode* __dec_obj173;
void* __right_value1012 = (void*)0;
struct sNode* node2_791;
struct sNode* node3_792;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1018 = (void*)0;
struct sNode* __result_obj__344;
    tuple_elements_789=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2741, "struct list$1sNode$ph*"))));
    expected_next_character(40,info);
    node_790=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj173=node_790,
    node_790=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_790),info));
    (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    expected_next_character(41,info);
    node2_791=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNode$ph_push_back(tuple_elements_789,(struct sNode*)come_increment_ref_count(node2_791));
    node3_792=(struct sNode*)come_increment_ref_count(node_790);
    list$1sNode$ph_push_back(tuple_elements_789,(struct sNode*)come_increment_ref_count(node3_792));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2756, "struct sNode");
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1014=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2756, "struct sNoneNode*")),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_789),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result_obj__344 = come_increment_ref_count(((struct sNode*)(__right_value1018=_inf_value20)));
    /*c*/ come_call_finalizer3(tuple_elements_789,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_790) ? node_790 = come_decrement_ref_count(node_790, ((struct sNode*)node_790)->finalize, ((struct sNode*)node_790)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_791) ? node2_791 = come_decrement_ref_count(node2_791, ((struct sNode*)node2_791)->finalize, ((struct sNode*)node2_791)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node3_792) ? node3_792 = come_decrement_ref_count(node3_792, ((struct sNode*)node3_792)->finalize, ((struct sNode*)node3_792)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value1014,sNoneNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value1018) ? __right_value1018 = come_decrement_ref_count(__right_value1018, ((struct sNode*)__right_value1018)->finalize, ((struct sNode*)__right_value1018)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__344) ? __result_obj__344 = come_decrement_ref_count(__result_obj__344, ((struct sNode*)__result_obj__344)->finalize, ((struct sNode*)__result_obj__344)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__344;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
struct sNoneNode* __result_obj__342;
void* __right_value1015 = (void*)0;
struct sNoneNode* result_793;
void* __right_value1016 = (void*)0;
char* __dec_obj174;
void* __right_value1017 = (void*)0;
struct list$1sNode$ph* __dec_obj175;
struct sNoneNode* __result_obj__343;
    if(    self==(void*)0) {
        __result_obj__342 = (void*)0;
        return __result_obj__342;
    }
    result_793=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*"));
    if(    self!=((void*)0)) {
        result_793->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj174=result_793->sname,
        result_793->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNoneNode_clone", 5, "char*"));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_793->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj175=result_793->tuple_elements,
        result_793->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        /*b*/ come_call_finalizer3(__dec_obj175,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__343 = result_793;
    /*c*/ come_call_finalizer3(result_793,sNoneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
}

