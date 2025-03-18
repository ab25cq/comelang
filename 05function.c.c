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

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self);
static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self);
static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self);
static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self);
static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self);
static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self);
static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self);
static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value231 = (void*)0;
struct sSemicolonNode* __result_obj__197;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value231,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__197 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value232 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = come_increment_ref_count(((char*)(__right_value232=__builtin_string("sSemicolonNode"))));
    (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value233 = (void*)0;
struct sLambdaNode* __result_obj__199;
    ((struct sNodeBase*)(__right_value233=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value233,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mFun=fun;
    __result_obj__199 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value234 = (void*)0;
char* __result_obj__200;
    __result_obj__200 = come_increment_ref_count(((char*)(__right_value234=__builtin_string("sLambdaNode"))));
    (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__200;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_274;
int block_level_275;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct CVALUE* come_value_276;
void* __right_value237 = (void*)0;
char* __dec_obj23;
void* __right_value276 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__217;
    come_fun_274=info->come_fun;
    info->come_fun=self->mFun;
    block_level_275=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_275;
    come_value_276=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj23=come_value_276->c_value,
    come_value_276->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_276->type,
    come_value_276->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_276->var=((void*)0);
    add_come_last_code(info,"%s",come_value_276->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_276));
    info->come_fun=come_fun_274;
    __result_obj__217 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_276,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__201;
void* __right_value238 = (void*)0;
struct sType* result_281;
void* __right_value239 = (void*)0;
struct sType* __dec_obj24;
void* __right_value240 = (void*)0;
struct sType* __dec_obj25;
void* __right_value248 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value249 = (void*)0;
struct sType* __dec_obj30;
void* __right_value250 = (void*)0;
struct sType* __dec_obj31;
void* __right_value252 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value253 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value254 = (void*)0;
char* __dec_obj34;
void* __right_value255 = (void*)0;
char* __dec_obj35;
void* __right_value256 = (void*)0;
char* __dec_obj36;
void* __right_value264 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value265 = (void*)0;
char* __dec_obj41;
void* __right_value266 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value274 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value275 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__215;
    if(    self==(void*)0) {
        __result_obj__201 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__201,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__201;
    }
    result_281=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_281->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_281->mOriginalLoadVarType,
        result_281->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_281->mChannelType,
        result_281->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_281->mGenericsTypes,
        result_281->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_281->mNoSolvedGenericsType,
        result_281->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_281->mAnyOriginalType,
        result_281->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_281->mSizeNum,
        result_281->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_281->mAlignas,
        result_281->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_281->mTupleName,
        result_281->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_281->mAttribute,
        result_281->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_281->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_281->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_281->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_281->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_281->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_281->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_281->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_281->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_281->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_281->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_281->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_281->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_281->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_281->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_281->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_281->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_281->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_281->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_281->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_281->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_281->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_281->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_281->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_281->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_281->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_281->mAsmName,
        result_281->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_281->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_281->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_281->mArrayNum,
        result_281->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_281->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_281->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_281->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_281->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_281->mOriginalTypeName,
        result_281->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_281->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_281->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_281->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_281->mParamTypes,
        result_281->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_281->mParamNames,
        result_281->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_281->mResultType,
        result_281->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mVarArgs=self->mVarArgs;
    }
    __result_obj__215 = come_increment_ref_count(result_281);
    /*c*/ come_call_finalizer3(result_281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
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
struct list_item$1sType$ph* it_277;
struct list_item$1sType$ph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*c*/ come_call_finalizer3(prev_it_278,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_279;
struct list_item$1sNode$ph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        /*c*/ come_call_finalizer3(prev_it_280,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__202;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct list$1sType$ph* result_282;
struct list_item$1sType$ph* it_283;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct list$1sType$ph* __result_obj__205;
    if(    self==((void*)0)) {
        __result_obj__202 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__202,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__202;
    }
    result_282=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1185, "struct list$1sType$ph*"))));
    it_283=self->head;
    while(it_283!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_282,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_283->item)));
        }
        else {
            list$1sType$ph_add(result_282,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_283->item)));
        }
        it_283=it_283->next;
    }
    __result_obj__205 = come_increment_ref_count(result_282);
    /*c*/ come_call_finalizer3(result_282,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__203;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__203 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value243 = (void*)0;
struct list_item$1sType$ph* litem_284;
struct sType* __dec_obj26;
void* __right_value244 = (void*)0;
struct list_item$1sType$ph* litem_285;
struct sType* __dec_obj27;
void* __right_value245 = (void*)0;
struct list_item$1sType$ph* litem_286;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__204;
    if(    self->len==0) {
        litem_284=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value243=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1204, "struct list_item$1sType$ph*"))));
        litem_284->prev=((void*)0);
        litem_284->next=((void*)0);
        __dec_obj26=litem_284->item,
        litem_284->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_284;
        self->head=litem_284;
    }
    else if(    self->len==1) {
        litem_285=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value244=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1214, "struct list_item$1sType$ph*"))));
        litem_285->prev=self->head;
        litem_285->next=((void*)0);
        __dec_obj27=litem_285->item,
        litem_285->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_285;
        self->head->next=litem_285;
    }
    else {
        litem_286=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value245=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1224, "struct list_item$1sType$ph*"))));
        litem_286->prev=self->tail;
        litem_286->next=((void*)0);
        __dec_obj28=litem_286->item,
        litem_286->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_286;
        self->tail=litem_286;
    }
    self->len++;
    __result_obj__204 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_287;
struct list_item$1sType$ph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        /*c*/ come_call_finalizer3(prev_it_288,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__206;
void* __right_value251 = (void*)0;
struct sNode* result_289;
struct sNode* __result_obj__207;
    if(    self==(void*)0) {
        __result_obj__206 = come_increment_ref_count((void*)0);
        ((__result_obj__206) ? __result_obj__206 = come_decrement_ref_count(__result_obj__206, ((struct sNode*)__result_obj__206)->finalize, ((struct sNode*)__result_obj__206)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__206;
    }
    result_289=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_289->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_289->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_289->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_289->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_289->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_289->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_289->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_289->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_289->kind=self->kind;
    }
    __result_obj__207 = come_increment_ref_count(result_289);
    ((result_289) ? result_289 = come_decrement_ref_count(result_289, ((struct sNode*)result_289)->finalize, ((struct sNode*)result_289)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__207) ? __result_obj__207 = come_decrement_ref_count(__result_obj__207, ((struct sNode*)__result_obj__207)->finalize, ((struct sNode*)__result_obj__207)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__207;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__208;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sNode$ph* result_290;
struct list_item$1sNode$ph* it_291;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1sNode$ph* __result_obj__211;
    if(    self==((void*)0)) {
        __result_obj__208 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__208,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__208;
    }
    result_290=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_291=self->head;
    while(it_291!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_290,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_291->item)));
        }
        else {
            list$1sNode$ph_add(result_290,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_291->item)));
        }
        it_291=it_291->next;
    }
    __result_obj__211 = come_increment_ref_count(result_290);
    /*c*/ come_call_finalizer3(result_290,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__209;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__209 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value259 = (void*)0;
struct list_item$1sNode$ph* litem_292;
struct sNode* __dec_obj37;
void* __right_value260 = (void*)0;
struct list_item$1sNode$ph* litem_293;
struct sNode* __dec_obj38;
void* __right_value261 = (void*)0;
struct list_item$1sNode$ph* litem_294;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__210;
    if(    self->len==0) {
        litem_292=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value259=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1204, "struct list_item$1sNode$ph*"))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj37=litem_292->item,
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value260=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1214, "struct list_item$1sNode$ph*"))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj38=litem_293->item,
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value261=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1224, "struct list_item$1sNode$ph*"))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj39=litem_294->item,
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_294;
        self->tail=litem_294;
    }
    self->len++;
    __result_obj__210 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__210;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_295;
struct list_item$1sNode$ph* prev_it_296;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        /*c*/ come_call_finalizer3(prev_it_296,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__212;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1char$ph* result_297;
struct list_item$1char$ph* it_298;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1char$ph* __result_obj__214;
    if(    self==((void*)0)) {
        __result_obj__212 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__212,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__212;
    }
    result_297=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1185, "struct list$1char$ph*"))));
    it_298=self->head;
    while(it_298!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_297,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_298->item)));
        }
        else {
            list$1char$ph_add(result_297,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_298->item)));
        }
        it_298=it_298->next;
    }
    __result_obj__214 = come_increment_ref_count(result_297);
    /*c*/ come_call_finalizer3(result_297,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__214,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value269 = (void*)0;
struct list_item$1char$ph* litem_299;
char* __dec_obj43;
void* __right_value270 = (void*)0;
struct list_item$1char$ph* litem_300;
char* __dec_obj44;
void* __right_value271 = (void*)0;
struct list_item$1char$ph* litem_301;
char* __dec_obj45;
struct list$1char$ph* __result_obj__213;
    if(    self->len==0) {
        litem_299=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value269=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1204, "struct list_item$1char$ph*"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj43=litem_299->item,
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value270=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1214, "struct list_item$1char$ph*"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj44=litem_300->item,
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value271=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1224, "struct list_item$1char$ph*"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj45=litem_301->item,
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result_obj__213 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__213;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_302;
struct list_item$1char$ph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        /*c*/ come_call_finalizer3(prev_it_303,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value277 = (void*)0;
struct list_item$1CVALUE$ph* litem_304;
struct CVALUE* __dec_obj49;
void* __right_value278 = (void*)0;
struct list_item$1CVALUE$ph* litem_305;
struct CVALUE* __dec_obj50;
void* __right_value279 = (void*)0;
struct list_item$1CVALUE$ph* litem_306;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__216;
    if(    self->len==0) {
        litem_304=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value277=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1274, "struct list_item$1CVALUE$ph*"))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj49=litem_304->item,
        litem_304->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value278=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1284, "struct list_item$1CVALUE$ph*"))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj50=litem_305->item,
        litem_305->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value279=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1294, "struct list_item$1CVALUE$ph*"))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj51=litem_306->item,
        litem_306->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result_obj__216 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
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

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value280 = (void*)0;
struct sFun* __dec_obj52;
struct sFunNode* __result_obj__218;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value280,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj52=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    /*b*/ come_call_finalizer3(__dec_obj52,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__218 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value281 = (void*)0;
char* __result_obj__219;
    __result_obj__219 = come_increment_ref_count(((char*)(__right_value281=__builtin_string("sFunNode"))));
    (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__219;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_307;
int block_level_308;
void* __right_value282 = (void*)0;
    come_fun_307=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_308=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_308;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value282=xsprintf("come_heap_final();\n"))));
            (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_307;
    return (_Bool)1;
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sBlock* result_309;
int sline_top_310;
int block_level_311;
char* p_saved_312;
int sline_saved_313;
char* sname_saved_314;
void* __right_value285 = (void*)0;
char* __dec_obj53;
char* __dec_obj54;
struct map$2char$phchar$ph* __dec_obj55;
char* p_317;
int sline_318;
void* __right_value286 = (void*)0;
char* sname_319;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* module_name_320;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1char$ph* params_321;
void* __right_value291 = (void*)0;
char* word_322;
void* __right_value292 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_323=0;
char* Err_324=0;
void* __right_value293 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_325=0;
char* Err_326=0;
void* __right_value294 = (void*)0;
char* __dec_obj56;
void* __right_value295 = (void*)0;
char* __dec_obj57;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
_Bool _if_conditional1;
void* __right_value298 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_330=0;
char* Err_331=0;
struct sBlock* __result_obj__224;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sClassModule* module_332;
void* __right_value301 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_333=0;
char* Err_334=0;
void* __right_value302 = (void*)0;
void* __right_value308 = (void*)0;
struct map$2char$phchar$ph* __dec_obj59;
int i_338;
struct list$1char$ph* o2_saved_339;
char* it_342;
void* __right_value309 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj60;
void* __right_value318 = (void*)0;
struct sNode* node_385;
void* __right_value319 = (void*)0;
char* __dec_obj61;
void* __right_value320 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_386=0;
char* Err_387=0;
_Bool omit_semicolon_391;
void* __right_value324 = (void*)0;
char* __dec_obj65;
char* head_406;
void* __right_value325 = (void*)0;
struct sNode* value_407;
char* tail_408;
void* __right_value326 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sNode* node_410;
void* __right_value329 = (void*)0;
char* __dec_obj67;
struct sNode* node_411;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value334 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value336 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_413=0;
char* Err_414=0;
_Bool omit_semicolon_415;
char* p_416;
char* head_417;
void* __right_value337 = (void*)0;
char* source_418;
void* __right_value338 = (void*)0;
struct sNode* node_419;
void* __right_value339 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_420=0;
char* Err_421=0;
struct sBlock* __result_obj__256;
node_411 = (void*)0;
    result_309=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 117, "struct sBlock*")),info));
    sline_top_310=info->sline_top;
    info->sline_top=info->sline;
    block_level_311=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_312=((void*)0);
        sline_saved_313=0;
        sname_saved_314=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_312) {
                if(                *info->p==0) {
                    info->p=p_saved_312;
                    info->sline=sline_saved_313;
                    __dec_obj53=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_314));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_312=((void*)0);
                    sline_saved_313=0;
                    __dec_obj54=sname_saved_314,
                    sname_saved_314=((void*)0);
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj55=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj55,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_317=info->p;
            sline_318=info->sline;
            sname_319=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_318;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value287=parse_word(info)));
                (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_320=(char*)come_increment_ref_count(parse_word(info));
                params_321=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 173, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_322=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_321,(char*)come_increment_ref_count(word_322));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value292=err_msg(info,"invalid source end")));
                            come_exception_var_c1_323=multiple_assign_var1->v1;
                            Err_324=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_324)?(puts(Err_324),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value292,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_324 = come_decrement_ref_count(Err_324, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_322 = come_decrement_ref_count(word_322, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value293=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_325=multiple_assign_var2->v1;
                            Err_326=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_326)?(puts(Err_326),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value293,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_326 = come_decrement_ref_count(Err_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_322 = come_decrement_ref_count(word_322, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_312=info->p;
                sline_saved_313=info->sline;
                __dec_obj56=sname_saved_314,
                sname_saved_314=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj57=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_320));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value297=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value296=__builtin_string(module_name_320))))))==((void*)0))),                (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value297,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value298=err_msg(info,"module not found")));
                    come_exception_var_c3_330=multiple_assign_var3->v1;
                    Err_331=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_331)?(puts(Err_331),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value298,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__224 = come_increment_ref_count(((void*)0));
                    (Err_331 = come_decrement_ref_count(Err_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_320 = come_decrement_ref_count(module_name_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_321,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_319 = come_decrement_ref_count(sname_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_314 = come_decrement_ref_count(sname_saved_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_309,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__224,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__224;
                    (Err_331 = come_decrement_ref_count(Err_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_332=((struct sClassModule*)(__right_value300=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value299=__builtin_string(module_name_320))))));
                (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value300,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_332->mParams)!=list$1char$ph_length(params_321)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value301=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_333=multiple_assign_var4->v1;
                    Err_334=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_334)?(puts(Err_334),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value301,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_334 = come_decrement_ref_count(Err_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj59=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 227, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj59,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_338=0;
                for(                o2_saved_339=(struct list$1char$ph*)come_increment_ref_count((module_332->mParams)),it_342=list$1char$ph_begin((o2_saved_339));                !list$1char$ph_end((o2_saved_339));                it_342=list$1char$ph_next((o2_saved_339))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_342)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value315=list$1char$ph$p_operator_load_element(params_321,i_338))))));
                    (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_338++;
                }
                /*c*/ come_call_finalizer3(o2_saved_339,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_332->mText;
                info->sline=module_332->mSLine;
                __dec_obj60=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_332->mSName));
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_320 = come_decrement_ref_count(module_name_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_321,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            node_385=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj61=info->sname,
            info->sname=(char*)come_increment_ref_count(node_385->sname(node_385->_protocol_obj));
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=node_385->sline(node_385->_protocol_obj);
            if(            node_385==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value320=err_msg(info,"Invalid expression")));
                come_exception_var_c5_386=multiple_assign_var5->v1;
                Err_387=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_387)?(puts(Err_387),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value320,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_387 = come_decrement_ref_count(Err_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph_push_back(result_309->mNodes,(struct sNode*)come_increment_ref_count(node_385));
            parse_sharp_v5(info);
            if(            node_385->terminated(node_385->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_391=(_Bool)1;
            if(            node_385->terminated(node_385->_protocol_obj)) {
                omit_semicolon_391=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_391=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_309->mOmitSemicolon=omit_semicolon_391;
                if(                omit_semicolon_391&&in_function) {
                    list$1sNode$ph_delete(result_309->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_317;
                    info->sline=sline_318;
                    __dec_obj65=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_319));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    head_406=info->p;
                    value_407=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_408=info->p;
                    __dec_obj66=value_407,
                    value_407=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_407),info));
                    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    char buf_409[tail_408-head_406+1];
                    memset(&buf_409, 0, sizeof(char)                    *(tail_408-head_406+1)                    );
                    memcpy(buf_409,head_406,tail_408-head_406);
                    buf_409[tail_408-head_406]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_410=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_407),(char*)come_increment_ref_count(__builtin_string(buf_409)),info));
                    list$1sNode$ph_push_back(result_309->mNodes,(struct sNode*)come_increment_ref_count(node_410));
                    ((value_407) ? value_407 = come_decrement_ref_count(value_407, ((struct sNode*)value_407)->finalize, ((struct sNode*)value_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_410) ? node_410 = come_decrement_ref_count(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_319 = come_decrement_ref_count(sname_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_407) ? value_407 = come_decrement_ref_count(value_407, ((struct sNode*)value_407)->finalize, ((struct sNode*)value_407)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_410) ? node_410 = come_decrement_ref_count(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_319 = come_decrement_ref_count(sname_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_319 = come_decrement_ref_count(sname_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_312) {
            if(            info->p==0) {
                info->p=p_saved_312;
                info->sline=sline_saved_313;
                __dec_obj67=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_314));
                __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_312=((void*)0);
                sline_saved_313=0;
            }
        }
        (sname_saved_314 = come_decrement_ref_count(sname_saved_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 331, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value331=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 331, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj69=node_411,
            node_411=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value331,sSemicolonNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1sNode$ph_push_back(result_309->mNodes,(struct sNode*)come_increment_ref_count(node_411));
        }
        else {
            __dec_obj70=node_411,
            node_411=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_411==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value336=err_msg(info,"Invalid expression")));
                come_exception_var_c6_413=multiple_assign_var6->v1;
                Err_414=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_414)?(puts(Err_414),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value336,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_414 = come_decrement_ref_count(Err_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_411->terminated(node_411->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_415=(_Bool)1;
            if(            node_411->terminated(node_411->_protocol_obj)) {
                omit_semicolon_415=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_415=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_309->mOmitSemicolon=omit_semicolon_415;
            list$1sNode$ph_push_back(result_309->mNodes,(struct sNode*)come_increment_ref_count(node_411));
        }
        ((node_411) ? node_411 = come_decrement_ref_count(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_416=info->p;
        head_417=info->head;
        source_418=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_418;
        info->head=source_418;
        node_419=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_419==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value339=err_msg(info,"Invalid expression")));
            come_exception_var_c7_420=multiple_assign_var7->v1;
            Err_421=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_421)?(puts(Err_421),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value339,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_421 = come_decrement_ref_count(Err_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph_push_back(result_309->mNodes,(struct sNode*)come_increment_ref_count(node_419));
        info->p=p_416;
        info->head=head_417;
        (source_418 = come_decrement_ref_count(source_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_419) ? node_419 = come_decrement_ref_count(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_311;
    __result_obj__256 = come_increment_ref_count(result_309);
    /*c*/ come_call_finalizer3(result_309,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__256,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_315;
int i_316;
    for(    i_315=0;    i_315<self->size;    i_315++    ){
        if(        self->item_existance[i_315]) {
            if(            1) {
                (self->items[i_315] = come_decrement_ref_count(self->items[i_315], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_316=0;    i_316<self->size;    i_316++    ){
        if(        self->item_existance[i_316]) {
            if(            1) {
                (self->keys[i_316] = come_decrement_ref_count(self->keys[i_316], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_327;
unsigned int hash_328;
unsigned int it_329;
struct sClassModule* __result_obj__220;
struct sClassModule* __result_obj__221;
struct sClassModule* __result_obj__222;
struct sClassModule* __result_obj__223;
default_value_327 = (void*)0;
    memset(&default_value_327,0,sizeof(struct sClassModule*));
    hash_328=string_get_hash_key(((char*)key))%self->size;
    it_329=hash_328;
    while((_Bool)1) {
        if(        self->item_existance[it_329]) {
            if(            string_equals(self->keys[it_329],key)) {
                __result_obj__220 = come_increment_ref_count(self->items[it_329]);
                /*c*/ come_call_finalizer3(default_value_327,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__220,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__220;
            }
            it_329++;
            if(            it_329>=self->size) {
                it_329=0;
            }
            else if(            it_329==hash_328) {
                __result_obj__221 = come_increment_ref_count(default_value_327);
                /*c*/ come_call_finalizer3(default_value_327,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__221,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__221;
            }
        }
        else {
            __result_obj__222 = come_increment_ref_count(default_value_327);
            /*c*/ come_call_finalizer3(default_value_327,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__222,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__222;
        }
    }
    __result_obj__223 = come_increment_ref_count(default_value_327);
    /*c*/ come_call_finalizer3(default_value_327,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
int i_335;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1char$ph* __dec_obj58;
struct map$2char$phchar$ph* __result_obj__226;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value303=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2089, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value304=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2090, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value305=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2091, "_Bool*"))));
    for(    i_335=0;    i_335<128;    i_335++    ){
        self->item_existance[i_335]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj58=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2101, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj58,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__226 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__225;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__225 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__225,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_336;
int i_337;
    for(    i_336=0;    i_336<self->size;    i_336++    ){
        if(        self->item_existance[i_336]) {
            if(            1) {
                (self->items[i_336] = come_decrement_ref_count(self->items[i_336], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_337=0;    i_337<self->size;    i_337++    ){
        if(        self->item_existance[i_337]) {
            if(            1) {
                (self->keys[i_337] = come_decrement_ref_count(self->keys[i_337], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_340;
char* __result_obj__227;
char* __result_obj__228;
char* result_341;
char* __result_obj__229;
result_340 = (void*)0;
result_341 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_340,0,sizeof(char*));
        __result_obj__227 = result_340;
        return __result_obj__227;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__228 = self->it->item;
        return __result_obj__228;
    }
    memset(&result_341,0,sizeof(char*));
    __result_obj__229 = result_341;
    return __result_obj__229;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_343;
char* __result_obj__230;
char* __result_obj__231;
char* result_344;
char* __result_obj__232;
result_343 = (void*)0;
result_344 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_343,0,sizeof(char*));
        __result_obj__230 = result_343;
        return __result_obj__230;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__231 = self->it->item;
        return __result_obj__231;
    }
    memset(&result_344,0,sizeof(char*));
    __result_obj__232 = result_344;
    return __result_obj__232;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_362;
unsigned int it_363;
_Bool same_key_exist_380;
char* it2_381;
struct map$2char$phchar$ph* __result_obj__247;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_362=string_get_hash_key(((char*)key))%self->size;
    it_363=hash_362;
    while((_Bool)1) {
        if(        self->item_existance[it_363]) {
            if(            string_equals(self->keys[it_363],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_363]);
                    (self->keys[it_363] = come_decrement_ref_count(self->keys[it_363], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_363]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_363]);
                    self->keys[it_363]=key;
                }
                if(                1) {
                    (self->items[it_363] = come_decrement_ref_count(self->items[it_363], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_363]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_363]=item;
                }
                break;
            }
            it_363++;
            if(            it_363>=self->size) {
                it_363=0;
            }
            else if(            it_363==hash_362) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_363]=(_Bool)1;
            if(            1) {
                self->keys[it_363]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_363]=key;
            }
            if(            1) {
                self->items[it_363]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_363]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_380=(_Bool)0;
    for(    it2_381=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_381=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_381,key)) {
            same_key_exist_380=(_Bool)1;
        }
    }
    if(    !same_key_exist_380) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__247 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__247;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_345;
void* __right_value310 = (void*)0;
char** keys_346;
void* __right_value311 = (void*)0;
char** items_347;
void* __right_value312 = (void*)0;
_Bool* item_existance_348;
int len_349;
char* it_352;
char* default_value_355;
void* __right_value313 = (void*)0;
char* it2_356;
unsigned int hash_359;
int n_360;
char* default_value_361;
void* __right_value314 = (void*)0;
default_value_355 = (void*)0;
default_value_361 = (void*)0;
    size_345=self->size*10;
    keys_346=(char**)come_increment_ref_count(((char**)(__right_value310=(char**)come_calloc(1, sizeof(char*)*(1*(size_345)), "./comelang.h", 2328, "char**"))));
    items_347=(char**)come_increment_ref_count(((char**)(__right_value311=(char**)come_calloc(1, sizeof(char*)*(1*(size_345)), "./comelang.h", 2329, "char**"))));
    item_existance_348=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value312=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_345)), "./comelang.h", 2330, "_Bool*"))));
    len_349=0;
    for(    it_352=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_352=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_355,0,sizeof(char*));
        it2_356=((char*)(__right_value313=map$2char$phchar$ph_at(self,it_352,(char*)come_increment_ref_count(default_value_355))));
        (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_359=string_get_hash_key(((char*)it_352))%size_345;
        n_360=hash_359;
        while((_Bool)1) {
            if(            item_existance_348[n_360]) {
                n_360++;
                if(                n_360>=size_345) {
                    n_360=0;
                }
                else if(                n_360==hash_359) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_348[n_360]=(_Bool)1;
                keys_346[n_360]=it_352;
                items_347[n_360]=((char*)(__right_value314=map$2char$phchar$ph_at(self,it_352,(char*)come_increment_ref_count(default_value_361))));
                (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_349++;
                (default_value_361 = come_decrement_ref_count(default_value_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_361 = come_decrement_ref_count(default_value_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_355 = come_decrement_ref_count(default_value_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_346;
    self->items=items_347;
    self->item_existance=item_existance_348;
    self->size=size_345;
    self->len=len_349;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_350;
char* __result_obj__233;
char* __result_obj__234;
char* result_351;
char* __result_obj__235;
result_350 = (void*)0;
result_351 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_350,0,sizeof(char*));
        __result_obj__233 = result_350;
        return __result_obj__233;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__234 = self->key_list->it->item;
        return __result_obj__234;
    }
    memset(&result_351,0,sizeof(char*));
    __result_obj__235 = result_351;
    return __result_obj__235;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_353;
char* __result_obj__236;
char* __result_obj__237;
char* result_354;
char* __result_obj__238;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result_obj__236 = result_353;
        return __result_obj__236;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__237 = self->key_list->it->item;
        return __result_obj__237;
    }
    memset(&result_354,0,sizeof(char*));
    __result_obj__238 = result_354;
    return __result_obj__238;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_357;
unsigned int it_358;
char* __result_obj__239;
char* __result_obj__240;
char* __result_obj__241;
char* __result_obj__242;
    hash_357=string_get_hash_key(((char*)key))%self->size;
    it_358=hash_357;
    while((_Bool)1) {
        if(        self->item_existance[it_358]) {
            if(            string_equals(self->keys[it_358],key)) {
                __result_obj__239 = come_increment_ref_count(self->items[it_358]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__239 = come_decrement_ref_count(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__239;
            }
            it_358++;
            if(            it_358>=self->size) {
                it_358=0;
            }
            else if(            it_358==hash_357) {
                __result_obj__240 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__240 = come_decrement_ref_count(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__240;
            }
        }
        else {
            __result_obj__241 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__241;
        }
    }
    __result_obj__242 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_364;
struct list_item$1char$ph* it_365;
struct list$1char$ph* __result_obj__246;
    it2_364=0;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        if(        string_equals(it_365->item,item)) {
            list$1char$ph_delete(self,it2_364,it2_364+1);
            break;
        }
        it2_364++;
        it_365=it_365->next;
    }
    __result_obj__246 = self;
    return __result_obj__246;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_366;
struct list$1char$ph* __result_obj__243;
struct list_item$1char$ph* it_369;
int i_370;
struct list_item$1char$ph* prev_it_371;
struct list_item$1char$ph* it_372;
int i_373;
struct list_item$1char$ph* prev_it_374;
struct list_item$1char$ph* it_375;
struct list_item$1char$ph* head_prev_it_376;
struct list_item$1char$ph* tail_it_377;
int i_378;
struct list_item$1char$ph* prev_it_379;
struct list$1char$ph* __result_obj__245;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_366=tail;
        tail=head;
        head=tmp_366;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__243 = self;
        return __result_obj__243;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_369=self->head;
        i_370=0;
        while(it_369!=((void*)0)) {
            if(            i_370<tail) {
                prev_it_371=it_369;
                it_369=it_369->next;
                i_370++;
                /*c*/ come_call_finalizer3(prev_it_371,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_370==tail) {
                self->head=it_369;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_369=it_369->next;
                i_370++;
            }
        }
    }
    else if(    tail==self->len) {
        it_372=self->head;
        i_373=0;
        while(it_372!=((void*)0)) {
            if(            i_373==head) {
                self->tail=it_372->prev;
                self->tail->next=((void*)0);
            }
            if(            i_373>=head) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                /*c*/ come_call_finalizer3(prev_it_374,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else {
        it_375=self->head;
        head_prev_it_376=((void*)0);
        tail_it_377=((void*)0);
        i_378=0;
        while(it_375!=((void*)0)) {
            if(            i_378==head) {
                head_prev_it_376=it_375->prev;
            }
            if(            i_378==tail) {
                tail_it_377=it_375;
            }
            if(            i_378>=head&&i_378<tail) {
                prev_it_379=it_375;
                it_375=it_375->next;
                i_378++;
                /*c*/ come_call_finalizer3(prev_it_379,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_378++;
            }
        }
        if(        head_prev_it_376!=((void*)0)) {
            head_prev_it_376->next=tail_it_377;
        }
        if(        tail_it_377!=((void*)0)) {
            tail_it_377->prev=head_prev_it_376;
        }
    }
    __result_obj__245 = self;
    return __result_obj__245;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_367;
struct list_item$1char$ph* prev_it_368;
struct list$1char$ph* __result_obj__244;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        prev_it_368=it_367;
        it_367=it_367->next;
        /*c*/ come_call_finalizer3(prev_it_368,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__244 = self;
    return __result_obj__244;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_382;
int i_383;
char* __result_obj__248;
char* default_value_384;
char* __result_obj__249;
default_value_384 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_382=self->head;
    i_383=0;
    while(it_382!=((void*)0)) {
        if(        position==i_383) {
            __result_obj__248 = come_increment_ref_count(it_382->item);
            (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__248;
        }
        it_382=it_382->next;
        i_383++;
    }
    memset(&default_value_384,0,sizeof(char*));
    __result_obj__249 = come_increment_ref_count(default_value_384);
    (default_value_384 = come_decrement_ref_count(default_value_384, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__249 = come_decrement_ref_count(__result_obj__249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value321 = (void*)0;
struct list_item$1sNode$ph* litem_388;
struct sNode* __dec_obj62;
void* __right_value322 = (void*)0;
struct list_item$1sNode$ph* litem_389;
struct sNode* __dec_obj63;
void* __right_value323 = (void*)0;
struct list_item$1sNode$ph* litem_390;
struct sNode* __dec_obj64;
struct list$1sNode$ph* __result_obj__250;
    if(    self->len==0) {
        litem_388=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value321=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1274, "struct list_item$1sNode$ph*"))));
        litem_388->prev=((void*)0);
        litem_388->next=((void*)0);
        __dec_obj62=litem_388->item,
        litem_388->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_388;
        self->head=litem_388;
    }
    else if(    self->len==1) {
        litem_389=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value322=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1284, "struct list_item$1sNode$ph*"))));
        litem_389->prev=self->head;
        litem_389->next=((void*)0);
        __dec_obj63=litem_389->item,
        litem_389->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_389;
        self->head->next=litem_389;
    }
    else {
        litem_390=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value323=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1294, "struct list_item$1sNode$ph*"))));
        litem_390->prev=self->tail;
        litem_390->next=((void*)0);
        __dec_obj64=litem_390->item,
        litem_390->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_390;
        self->tail=litem_390;
    }
    self->len++;
    __result_obj__250 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__250;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_392;
struct list$1sNode$ph* __result_obj__251;
struct list_item$1sNode$ph* it_395;
int i_396;
struct list_item$1sNode$ph* prev_it_397;
struct list_item$1sNode$ph* it_398;
int i_399;
struct list_item$1sNode$ph* prev_it_400;
struct list_item$1sNode$ph* it_401;
struct list_item$1sNode$ph* head_prev_it_402;
struct list_item$1sNode$ph* tail_it_403;
int i_404;
struct list_item$1sNode$ph* prev_it_405;
struct list$1sNode$ph* __result_obj__253;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_392=tail;
        tail=head;
        head=tmp_392;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__251 = self;
        return __result_obj__251;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_395=self->head;
        i_396=0;
        while(it_395!=((void*)0)) {
            if(            i_396<tail) {
                prev_it_397=it_395;
                it_395=it_395->next;
                i_396++;
                /*c*/ come_call_finalizer3(prev_it_397,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_396==tail) {
                self->head=it_395;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_395=it_395->next;
                i_396++;
            }
        }
    }
    else if(    tail==self->len) {
        it_398=self->head;
        i_399=0;
        while(it_398!=((void*)0)) {
            if(            i_399==head) {
                self->tail=it_398->prev;
                self->tail->next=((void*)0);
            }
            if(            i_399>=head) {
                prev_it_400=it_398;
                it_398=it_398->next;
                i_399++;
                /*c*/ come_call_finalizer3(prev_it_400,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_398=it_398->next;
                i_399++;
            }
        }
    }
    else {
        it_401=self->head;
        head_prev_it_402=((void*)0);
        tail_it_403=((void*)0);
        i_404=0;
        while(it_401!=((void*)0)) {
            if(            i_404==head) {
                head_prev_it_402=it_401->prev;
            }
            if(            i_404==tail) {
                tail_it_403=it_401;
            }
            if(            i_404>=head&&i_404<tail) {
                prev_it_405=it_401;
                it_401=it_401->next;
                i_404++;
                /*c*/ come_call_finalizer3(prev_it_405,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_401=it_401->next;
                i_404++;
            }
        }
        if(        head_prev_it_402!=((void*)0)) {
            head_prev_it_402->next=tail_it_403;
        }
        if(        tail_it_403!=((void*)0)) {
            tail_it_403->prev=head_prev_it_402;
        }
    }
    __result_obj__253 = self;
    return __result_obj__253;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_393;
struct list_item$1sNode$ph* prev_it_394;
struct list$1sNode$ph* __result_obj__252;
    it_393=self->head;
    while(it_393!=((void*)0)) {
        prev_it_394=it_393;
        it_393=it_393->next;
        /*c*/ come_call_finalizer3(prev_it_394,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__252 = self;
    return __result_obj__252;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__254;
void* __right_value332 = (void*)0;
struct sSemicolonNode* result_412;
void* __right_value333 = (void*)0;
char* __dec_obj68;
struct sSemicolonNode* __result_obj__255;
    if(    self==(void*)0) {
        __result_obj__254 = (void*)0;
        return __result_obj__254;
    }
    result_412=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)) {
        result_412->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj68=result_412->sname,
        result_412->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_412->sline_real=self->sline_real;
    }
    __result_obj__255 = result_412;
    /*c*/ come_call_finalizer3(result_412,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_422;
struct sVarTable* old_table_423;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sVarTable* __dec_obj71;
struct sVarTable* current_loop_vtable_424;
int i_425;
struct list$1char$ph* o2_saved_426;
char* name_427;
void* __right_value342 = (void*)0;
struct sType* type_428;
void* __right_value343 = (void*)0;
int block_level_432;
int i_433;
struct list$1sNode$ph* o2_saved_434;
struct sNode* node_437;
struct list$1sRightValueObject$ph* right_value_objects_440;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj72;
char* __dec_obj73;
char* __dec_obj74;
int stack_num_before_445;
int sline_446;
void* __right_value346 = (void*)0;
char* sname_447;
void* __right_value347 = (void*)0;
char* __dec_obj75;
_Bool Value_448;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_449;
void* __right_value354 = (void*)0;
struct CVALUE* come_value2_450;
void* __right_value355 = (void*)0;
char* __dec_obj80;
void* __right_value356 = (void*)0;
struct CVALUE* come_value2_452;
struct sVar* var__453;
void* __right_value357 = (void*)0;
struct CVALUE* come_value3_454;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_471=0;
char* Err_472=0;
_Bool _if_conditional2;
int __result_obj__268;
void* __right_value360 = (void*)0;
struct sType* __dec_obj81;
void* __right_value361 = (void*)0;
char* c_value_473;
void* __right_value362 = (void*)0;
char* __dec_obj82;
void* __right_value363 = (void*)0;
char* __dec_obj83;
void* __right_value364 = (void*)0;
char* __dec_obj84;
_Bool Value_474;
void* __right_value365 = (void*)0;
char* __dec_obj85;
struct list$1sRightValueObject$ph* __dec_obj86;
void* __if_result__0_477 = (void*)0;
struct list$1sVar$ph* o2_saved_478;
struct sVar* it_481;
void* __right_value366 = (void*)0;
struct list$1sVar$ph* __dec_obj87;
memset(&i_425, 0, sizeof(int));
memset(&i_433, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_422=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_423=info->lv_table;
    if(    !no_var_table) {
        __dec_obj71=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 405, "struct sVarTable*")),(_Bool)0,old_table_423));
        /*b*/ come_call_finalizer3(__dec_obj71,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_424=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_426=(param_names),name_427=list$1char$ph_begin((o2_saved_426));        !list$1char$ph_end((o2_saved_426));        name_427=list$1char$ph_next((o2_saved_426))        ){
            type_428=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types,i_425));
            type_428->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_427,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_428)),info,(_Bool)1);
            i_425++;
            /*c*/ come_call_finalizer3(type_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    block_level_432=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_434=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_437=list$1sNode$ph_begin((o2_saved_434));        !list$1sNode$ph_end((o2_saved_434));        node_437=list$1sNode$ph_next((o2_saved_434))        ){
            right_value_objects_440=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj72=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 435, "struct list$1sRightValueObject$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj72,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj73=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj74=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            stack_num_before_445=list$1CVALUE$ph_length(info->stack);
            sline_446=info->sline;
            sname_447=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_437->sline(node_437->_protocol_obj);
            __dec_obj75=info->sname,
            info->sname=(char*)come_increment_ref_count(node_437->sname(node_437->_protocol_obj));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            i_433==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_448=node_compile(node_437,info);
                if(                !Value_448) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_445+1) {
                    come_value_449=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_449->type->mClass->mName,"void")&&come_value_449->type->mPointerNum==0) {
                        come_value2_450=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_449));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_450));
                        __dec_obj80=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_450->c_value));
                        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_450,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        come_value2_452=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_449));
                        var__453=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__453) {
                            come_value3_454=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 470, "struct CVALUE*"));
                            if(                            var__453->mType->mClass=="void"&&var__453->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value359=check_assign_type("invalid if result value",var__453->mType,((struct sType*)(__right_value358=come_call_cloner(sType_clone, come_value_449->type))),come_value3_454,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_471=multiple_assign_var8->v1;
                                Err_472=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_472)),                                /*c*/ come_call_finalizer3(__right_value358,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                /*c*/ come_call_finalizer3(__right_value359,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                _if_conditional2) {
                                    __result_obj__268 = (_Bool)1;
                                    (Err_472 = come_decrement_ref_count(Err_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(come_value3_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value2_452,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value_449,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(right_value_objects_440,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    (sname_447 = come_decrement_ref_count(sname_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(o2_saved_434,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    return __result_obj__268;
                                }
                                else {
                                }
                                (Err_472 = come_decrement_ref_count(Err_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj81=var__453->mType,
                            var__453->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_449->type));
                            /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_449->type->mHeap) {
                                c_value_473=(char*)come_increment_ref_count(increment_ref_count_object(come_value_449->type,come_value_449->c_value,info));
                                __dec_obj82=come_value2_452->c_value,
                                come_value2_452->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__453->mCValueName,c_value_473));
                                __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                (c_value_473 = come_decrement_ref_count(c_value_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj83=come_value2_452->c_value,
                                come_value2_452->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__453->mCValueName,come_value_449->c_value));
                                __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            /*c*/ come_call_finalizer3(come_value3_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_452));
                        __dec_obj84=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_452->c_value));
                        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_452,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(come_value_449,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            else {
                Value_474=node_compile(node_437,info);
                if(                !Value_474) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_446;
            __dec_obj85=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_447));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_445);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj86=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_440);
            /*b*/ come_call_finalizer3(__dec_obj86,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_433++;
            /*c*/ come_call_finalizer3(right_value_objects_440,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_447 = come_decrement_ref_count(sname_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_434,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_432==0) {
            for(            o2_saved_478=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_481=list$1sVar$ph_begin((o2_saved_478));            !list$1sVar$ph_end((o2_saved_478));            it_481=list$1sVar$ph_next((o2_saved_478))            ){
                free_object(((struct sType*)(__right_value366=come_call_cloner(sType_clone, it_481->mType))),it_481->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value366,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_478,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj87=info->match_it_var,
            __if_result__0_477=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            /*b*/ come_call_finalizer3(__dec_obj87,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        /*c*/ come_call_finalizer3(__if_result__0_477,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->lv_table=old_table_423;
    info->block_level=block_level_432;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_424;
    info->inhibits_output_code=inhibits_output_code_422;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_429;
int i_430;
struct sType* __result_obj__257;
struct sType* default_value_431;
struct sType* __result_obj__258;
default_value_431 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_429=self->head;
    i_430=0;
    while(it_429!=((void*)0)) {
        if(        position==i_430) {
            __result_obj__257 = come_increment_ref_count(it_429->item);
            /*c*/ come_call_finalizer3(__result_obj__257,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__257;
        }
        it_429=it_429->next;
        i_430++;
    }
    memset(&default_value_431,0,sizeof(struct sType*));
    __result_obj__258 = come_increment_ref_count(default_value_431);
    /*c*/ come_call_finalizer3(default_value_431,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_435;
struct sNode* __result_obj__259;
struct sNode* __result_obj__260;
struct sNode* result_436;
struct sNode* __result_obj__261;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_435,0,sizeof(struct sNode*));
        __result_obj__259 = result_435;
        return __result_obj__259;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__260 = self->it->item;
        return __result_obj__260;
    }
    memset(&result_436,0,sizeof(struct sNode*));
    __result_obj__261 = result_436;
    return __result_obj__261;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_438;
struct sNode* __result_obj__262;
struct sNode* __result_obj__263;
struct sNode* result_439;
struct sNode* __result_obj__264;
result_438 = (void*)0;
result_439 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_438,0,sizeof(struct sNode*));
        __result_obj__262 = result_438;
        return __result_obj__262;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__263 = self->it->item;
        return __result_obj__263;
    }
    memset(&result_439,0,sizeof(struct sNode*));
    __result_obj__264 = result_439;
    return __result_obj__264;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__265;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__265 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_441;
struct list_item$1sRightValueObject$ph* prev_it_442;
    it_441=self->head;
    while(it_441!=((void*)0)) {
        prev_it_442=it_441;
        it_441=it_441->next;
        /*c*/ come_call_finalizer3(prev_it_442,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_443;
struct list_item$1sRightValueObject$ph* prev_it_444;
    it_443=self->head;
    while(it_443!=((void*)0)) {
        prev_it_444=it_443;
        it_443=it_443->next;
        /*c*/ come_call_finalizer3(prev_it_444,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__266;
void* __right_value349 = (void*)0;
struct CVALUE* result_451;
void* __right_value350 = (void*)0;
char* __dec_obj76;
void* __right_value351 = (void*)0;
struct sType* __dec_obj77;
void* __right_value352 = (void*)0;
char* __dec_obj78;
void* __right_value353 = (void*)0;
char* __dec_obj79;
struct CVALUE* __result_obj__267;
    if(    self==(void*)0) {
        __result_obj__266 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__266,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__266;
    }
    result_451=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj76=result_451->c_value,
        result_451->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj77=result_451->type,
        result_451->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_451->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_451->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj78=result_451->c_value_without_right_value_objects,
        result_451->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj79=result_451->c_value_without_cast_object_value,
        result_451->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__267 = come_increment_ref_count(result_451);
    /*c*/ come_call_finalizer3(result_451,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_455;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_456;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_455=left->head;
    it2_456=right->head;
    while(it_455!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_455->item,it2_456->item)) {
            return (_Bool)0;
        }
        it_455=it_455->next;
        it2_456=it2_456->next;
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

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_457;
struct list_item$1sType$ph* it2_458;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_457=left->head;
    it2_458=right->head;
    while(it_457!=((void*)0)) {
        if(        !sType_equals(it_457->item,it2_458->item)) {
            return (_Bool)0;
        }
        it_457=it_457->next;
        it2_458=it2_458->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_459;
struct list_item$1sNode$ph* it2_460;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_459=left->head;
    it2_460=right->head;
    while(it_459!=((void*)0)) {
        if(        !sNode_equals(it_459->item,it2_460->item)) {
            return (_Bool)0;
        }
        it_459=it_459->next;
        it2_460=it2_460->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_461;
struct list_item$1char$ph* it2_462;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_461=left->head;
    it2_462=right->head;
    while(it_461!=((void*)0)) {
        if(        !string_equals(it_461->item,it2_462->item)) {
            return (_Bool)0;
        }
        it_461=it_461->next;
        it2_462=it2_462->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
    return !list$1tuple2$2char$phsType$ph$ph_operator_equals(left,right);
}

static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_463;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_464;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_463=left->head;
    it2_464=right->head;
    while(it_463!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_463->item,it2_464->item))) {
            return (_Bool)0;
        }
        it_463=it_463->next;
        it2_464=it2_464->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    list$1sNode$ph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1char$ph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)&&string_equals(left->mParentClassName,right->mParentClassName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mDynamic,right->mDynamic));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2char$phsType$ph$ph_operator_equals(left->mFields,right->mFields))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mDynamic,right->mDynamic))));
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mChannelType,right->mChannelType)&&list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&sNode_equals(left->mAlignas,right->mAlignas)&&string_equals(left->mTupleName,right->mTupleName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&bool_equals(left->mGenerate,right->mGenerate)&&bool_equals(left->mCreateVTable,right->mCreateVTable)&&bool_equals(left->mDynamic,right->mDynamic)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&string_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&string_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)&&list$1char$ph_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(list$1sType$ph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(bool_operator_equals(left->mGenerate,right->mGenerate))&&(bool_operator_equals(left->mCreateVTable,right->mCreateVTable))&&(bool_operator_equals(left->mDynamic,right->mDynamic))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(list$1sNode$ph_operator_equals(left->mArrayNum,right->mArrayNum))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(list$1sType$ph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1char$ph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))));
}

static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_465;
struct list_item$1sType$ph* it2_466;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_465=left->head;
    it2_466=right->head;
    while(it_465!=((void*)0)) {
        if(        !(sType_operator_equals(it_465->item,it2_466->item))) {
            return (_Bool)0;
        }
        it_465=it_465->next;
        it2_466=it2_466->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_467;
struct list_item$1sNode$ph* it2_468;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_467=left->head;
    it2_468=right->head;
    while(it_467!=((void*)0)) {
        if(        !(sNode_operator_equals(it_467->item,it2_468->item))) {
            return (_Bool)0;
        }
        it_467=it_467->next;
        it2_468=it2_468->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_469;
struct list_item$1char$ph* it2_470;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_469=left->head;
    it2_470=right->head;
    while(it_469!=((void*)0)) {
        if(        !(string_operator_equals(it_469->item,it2_470->item))) {
            return (_Bool)0;
        }
        it_469=it_469->next;
        it2_470=it2_470->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    return !list$1sType$ph_operator_equals(left,right);
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    return !list$1sNode$ph_operator_equals(left,right);
}

static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    return !list$1char$ph_operator_equals(left,right);
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_475;
struct list_item$1sRightValueObject$ph* prev_it_476;
struct list$1sRightValueObject$ph* __result_obj__269;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        /*c*/ come_call_finalizer3(prev_it_476,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__269 = self;
    return __result_obj__269;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_479;
struct sVar* __result_obj__270;
struct sVar* __result_obj__271;
struct sVar* result_480;
struct sVar* __result_obj__272;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(struct sVar*));
        __result_obj__270 = result_479;
        return __result_obj__270;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__271 = self->it->item;
        return __result_obj__271;
    }
    memset(&result_480,0,sizeof(struct sVar*));
    __result_obj__272 = result_480;
    return __result_obj__272;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_482;
struct sVar* __result_obj__273;
struct sVar* __result_obj__274;
struct sVar* result_483;
struct sVar* __result_obj__275;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(struct sVar*));
        __result_obj__273 = result_482;
        return __result_obj__273;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__274 = self->it->item;
        return __result_obj__274;
    }
    memset(&result_483,0,sizeof(struct sVar*));
    __result_obj__275 = result_483;
    return __result_obj__275;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_484;
struct list_item$1sVar$ph* prev_it_485;
    it_484=self->head;
    while(it_484!=((void*)0)) {
        prev_it_485=it_484;
        it_484=it_484->next;
        /*c*/ come_call_finalizer3(prev_it_485,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_486;
struct list_item$1sVar$ph* prev_it_487;
    it_486=self->head;
    while(it_486!=((void*)0)) {
        prev_it_487=it_486;
        it_486=it_486->next;
        /*c*/ come_call_finalizer3(prev_it_487,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info){
char* head_488;
_Bool dquort_489;
_Bool squort_490;
int sline_491;
int nest_492;
void* __right_value367 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_493=0;
char* Err_494=0;
void* __right_value368 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_495=0;
char* Err_496=0;
void* __right_value369 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_497=0;
char* Err_498=0;
void* __right_value370 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_499=0;
char* Err_500=0;
void* __right_value371 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_501=0;
char* Err_502=0;
void* __right_value372 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_503=0;
char* Err_504=0;
void* __right_value373 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_505=0;
char* Err_506=0;
void* __right_value374 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_507=0;
char* Err_508=0;
char* tail_509;
void* __right_value375 = (void*)0;
char* buf_510;
void* __right_value376 = (void*)0;
char* __result_obj__276;
    head_488=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_489=(_Bool)0;
        squort_490=(_Bool)0;
        sline_491=0;
        nest_492=0;
        while(1) {
            if(            dquort_489) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value367=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491)));
                        come_exception_var_c8_493=multiple_assign_var9->v1;
                        Err_494=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                        ((Err_494)?(puts(Err_494),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value367,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_494 = come_decrement_ref_count(Err_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_489=!dquort_489;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value368=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491)));
                        come_exception_var_c9_495=multiple_assign_var10->v1;
                        Err_496=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_496)?(puts(Err_496),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value368,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_496 = come_decrement_ref_count(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value369=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491)));
                        come_exception_var_c10_497=multiple_assign_var11->v1;
                        Err_498=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_498)?(puts(Err_498),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value369,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_498 = come_decrement_ref_count(Err_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_490) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value370=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491)));
                        come_exception_var_c11_499=multiple_assign_var12->v1;
                        Err_500=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_500)?(puts(Err_500),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value370,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_500 = come_decrement_ref_count(Err_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_490=!squort_490;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value371=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491)));
                        come_exception_var_c12_501=multiple_assign_var13->v1;
                        Err_502=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_502)?(puts(Err_502),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value371,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_502 = come_decrement_ref_count(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value372=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491)));
                        come_exception_var_c13_503=multiple_assign_var14->v1;
                        Err_504=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_504)?(puts(Err_504),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value372,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_504 = come_decrement_ref_count(Err_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_491=info->sline;
                info->p++;
                squort_490=!squort_490;
            }
            else if(            *info->p==34) {
                sline_491=info->sline;
                info->p++;
                dquort_489=!dquort_489;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_492++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_492==0) {
                    break;
                }
                nest_492--;
            }
            else if(            *info->p==0) {
                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value373=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c14_505=multiple_assign_var15->v1;
                Err_506=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                ((Err_506)?(puts(Err_506),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value373,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_506 = come_decrement_ref_count(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value374=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c15_507=multiple_assign_var16->v1;
        Err_508=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        ((Err_508)?(puts(Err_508),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value374,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (Err_508 = come_decrement_ref_count(Err_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_509=info->p;
    buf_510=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_509-head_488+1)), "05function.c", 686, "char*"));
    memcpy(buf_510,head_488,tail_509-head_488);
    buf_510[tail_509-head_488]=0;
    skip_spaces_and_lf(info);
    __result_obj__276 = come_increment_ref_count(((char*)(__right_value376=__builtin_string(buf_510))));
    (buf_510 = come_decrement_ref_count(buf_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__276 = come_decrement_ref_count(__result_obj__276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__276;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct buffer* asm_fun_name_511;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct buffer* result_512;
char* head_513;
int brace_num_514;
char* tail_515;
char* head_516;
int brace_num_517;
char* tail_518;
char* head_519;
char* tail_520;
char* head_521;
char* tail_522;
int len_523;
_Bool in_dquort_524;
int brace_num_525;
char* head_526;
char* tail_527;
char* head_528;
char* tail_529;
char* head_530;
char* tail_531;
char* head_532;
int nest_533;
char* tail_534;
char* head_535;
int nest_536;
char* tail_537;
char* head_538;
int nest_539;
char* tail_540;
char* head_541;
int nest_542;
char* tail_543;
char* head_544;
int nest_545;
char* tail_546;
char* head_547;
char* tail_548;
char* head_549;
char* tail_550;
char* head_551;
char* tail_552;
char* head_553;
char* tail_554;
char* head_555;
char* tail_556;
char* head_557;
int brace_num_558;
char* tail_559;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__280;
    asm_fun_name_511=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 697, "struct buffer*"))));
    result_512=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 698, "struct buffer*"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_513=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_514=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_514++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_514--;
                        if(                        brace_num_514==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_515=info->p;
            buffer_append(result_512,head_513,tail_515-head_513);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_516=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_517=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_517++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_517--;
                        if(                        brace_num_517==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_518=info->p;
            buffer_append(result_512,head_516,tail_518-head_516);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_519=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_520=info->p;
            buffer_append(result_512,head_519,tail_520-head_519);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_521=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_522=info->p;
            buffer_append(result_512,head_521,tail_522-head_521);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_523=0;
            if(            *info->p==40) {
                in_dquort_524=(_Bool)0;
                brace_num_525=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_524=!in_dquort_524;
                    }
                    else if(                    in_dquort_524) {
                        buffer_append_char(asm_fun_name_511,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_525++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_525--;
                        if(                        brace_num_525==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_526=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_527=info->p;
            buffer_append(result_512,head_526,tail_527-head_526);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_528=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_529=info->p;
            buffer_append(result_512,head_528,tail_529-head_528);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_530=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_531=info->p;
            buffer_append(result_512,head_530,tail_531-head_530);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_532=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_533=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_533++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_533--;
                        if(                        nest_533==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_534=info->p;
            buffer_append(result_512,head_532,tail_534-head_532);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_535=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_536=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_536++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_536--;
                        if(                        nest_536==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_537=info->p;
            buffer_append(result_512,head_535,tail_537-head_535);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_538=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_539=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_539++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_539--;
                        if(                        nest_539==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_540=info->p;
            buffer_append(result_512,head_538,tail_540-head_538);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_541=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_542=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_542++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_542--;
                        if(                        nest_542==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_543=info->p;
            buffer_append(result_512,head_541,tail_543-head_541);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_544=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_545=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_545++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_545--;
                        if(                        nest_545==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_546=info->p;
            buffer_append(result_512,head_544,tail_546-head_544);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_547=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_548=info->p;
            buffer_append(result_512,head_547,tail_548-head_547);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_549=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_550=info->p;
            buffer_append(result_512,head_549,tail_550-head_549);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_551=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_552=info->p;
            buffer_append(result_512,head_551,tail_552-head_551);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_553=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_554=info->p;
            buffer_append(result_512,head_553,tail_554-head_553);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_555=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_556=info->p;
            buffer_append(result_512,head_555,tail_556-head_555);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_557=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_558=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_558++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_558--;
                        if(                        brace_num_558==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_559=info->p;
            buffer_append(result_512,head_557,tail_559-head_557);
        }
        else {
            break;
        }
    }
    __result_obj__280 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value387=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1112, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_511)),(char*)come_increment_ref_count(buffer_to_string(result_512))))));
    /*c*/ come_call_finalizer3(asm_fun_name_511,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_512,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value387,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__280,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
}

static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self){
struct tuple2$2char$phchar$ph* __result_obj__277;
void* __right_value383 = (void*)0;
struct tuple2$2char$phchar$ph* result_560;
void* __right_value384 = (void*)0;
char* __dec_obj88;
void* __right_value385 = (void*)0;
char* __dec_obj89;
struct tuple2$2char$phchar$ph* __result_obj__278;
    if(    self==(void*)0) {
        __result_obj__277 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__277,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__277;
    }
    result_560=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj88=result_560->v1,
        result_560->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj89=result_560->v2,
        result_560->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__278 = come_increment_ref_count(result_560);
    /*c*/ come_call_finalizer3(result_560,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__278,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_561;
    result_561=0;
    result_561+=int_get_hash_key(((int)self->v1));
    result_561+=int_get_hash_key(((int)self->v2));
    return result_561;
}

static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj90;
char* __dec_obj91;
struct tuple2$2char$phchar$ph* __result_obj__279;
    __dec_obj90=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj91=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__279 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__279,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct buffer* asm_fun_name_562;
void* __right_value390 = (void*)0;
char* attribute_563;
int nest_564;
int nest_565;
int nest_566;
int nest_567;
int nest_568;
void* __right_value391 = (void*)0;
char* __dec_obj92;
int len_569;
_Bool in_dquort_570;
int brace_num_571;
int brace_num_572;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__281;
    asm_fun_name_562=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1117, "struct buffer*"))));
    attribute_563=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_564=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_564++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_564--;
                        if(                        nest_564==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_565=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_565++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_565--;
                        if(                        nest_565==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_566=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_566++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_566--;
                        if(                        nest_566==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_567=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_567++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_567--;
                        if(                        nest_567==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_568=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_568++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_568--;
                        if(                        nest_568==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj92=attribute_563,
            attribute_563=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_569=0;
            if(            *info->p==40) {
                in_dquort_570=(_Bool)0;
                brace_num_571=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_570=!in_dquort_570;
                    }
                    else if(                    in_dquort_570) {
                        buffer_append_char(asm_fun_name_562,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_571++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_571--;
                        if(                        brace_num_571==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_572=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_572++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_572--;
                        if(                        brace_num_572==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__281 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value394=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1386, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_562)),(char*)come_increment_ref_count(attribute_563)))));
    /*c*/ come_call_finalizer3(asm_fun_name_562,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute_563 = come_decrement_ref_count(attribute_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value394,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__281,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__281;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value395 = (void*)0;
char* __dec_obj93;
char* head_573;
int head_sline_574;
void* __right_value396 = (void*)0;
char* buf_575;
void* __right_value397 = (void*)0;
struct sNode* node_576;
_Bool Value_577;
    while(*info->p) {
        __dec_obj93=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        head_573=info->p;
        head_sline_574=info->sline;
        buf_575=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_575 = come_decrement_ref_count(buf_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_576=(struct sNode*)come_increment_ref_count(top_level_v99(buf_575,head_573,head_sline_574,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_576!=((void*)0)) {
            Value_577=node_compile(node_576,info);
            if(            !Value_577) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_575 = come_decrement_ref_count(buf_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_576) ? node_576 = come_decrement_ref_count(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_575 = come_decrement_ref_count(buf_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_576) ? node_576 = come_decrement_ref_count(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value398 = (void*)0;
char* name_578;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* result_type_579;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1sType$ph* param_types_580;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1char$ph* param_names_581;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1char$ph* param_default_parametors_582;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sFun* fun_583;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* name_605;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* result_type_606;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1sType$ph* param_types_607;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1char$ph* param_names_608;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1char$ph* param_default_parametors_609;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sFun* fun_610;
void* __right_value432 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_578=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1442, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_580=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1443, "struct list$1sType$ph*"))));
        param_names_581=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1444, "struct list$1char$ph*"))));
        param_default_parametors_582=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1445, "struct list$1char$ph*"))));
        fun_583=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1446, "struct sFun*")),(char*)come_increment_ref_count(name_578),(struct sType*)come_increment_ref_count(result_type_579),(struct list$1sType$ph*)come_increment_ref_count(param_types_580),(struct list$1char$ph*)come_increment_ref_count(param_names_581),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_582),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_578)),(struct sFun*)come_increment_ref_count(fun_583));
        (name_578 = come_decrement_ref_count(name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_580,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_581,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_582,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_583,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_605=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_607=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1456, "struct list$1sType$ph*"))));
        param_names_608=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1457, "struct list$1char$ph*"))));
        param_default_parametors_609=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1458, "struct list$1char$ph*"))));
        fun_610=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1459, "struct sFun*")),(char*)come_increment_ref_count(name_605),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sType$ph*)come_increment_ref_count(param_types_607),(struct list$1char$ph*)come_increment_ref_count(param_names_608),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_609),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_605)),(struct sFun*)come_increment_ref_count(fun_610));
        (name_605 = come_decrement_ref_count(name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_606,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_607,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_608,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_609,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_610,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_601;
unsigned int it_602;
_Bool same_key_exist_603;
char* it2_604;
struct map$2char$phsFun$ph* __result_obj__292;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_601=string_get_hash_key(((char*)key))%self->size;
    it_602=hash_601;
    while((_Bool)1) {
        if(        self->item_existance[it_602]) {
            if(            string_equals(self->keys[it_602],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_602]);
                    (self->keys[it_602] = come_decrement_ref_count(self->keys[it_602], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_602]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_602]);
                    self->keys[it_602]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_602],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_602]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_602]=item;
                }
                break;
            }
            it_602++;
            if(            it_602>=self->size) {
                it_602=0;
            }
            else if(            it_602==hash_601) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_602]=(_Bool)1;
            if(            1) {
                self->keys[it_602]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_602]=key;
            }
            if(            1) {
                self->items[it_602]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_602]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_603=(_Bool)0;
    for(    it2_604=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_604=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_604,key)) {
            same_key_exist_603=(_Bool)1;
        }
    }
    if(    !same_key_exist_603) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__292 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_584;
void* __right_value412 = (void*)0;
char** keys_585;
void* __right_value413 = (void*)0;
struct sFun** items_586;
void* __right_value414 = (void*)0;
_Bool* item_existance_587;
int len_588;
char* it_591;
struct sFun* default_value_594;
void* __right_value415 = (void*)0;
struct sFun* it2_595;
unsigned int hash_598;
int n_599;
struct sFun* default_value_600;
void* __right_value416 = (void*)0;
default_value_594 = (void*)0;
default_value_600 = (void*)0;
    size_584=self->size*10;
    keys_585=(char**)come_increment_ref_count(((char**)(__right_value412=(char**)come_calloc(1, sizeof(char*)*(1*(size_584)), "./comelang.h", 2328, "char**"))));
    items_586=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value413=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_584)), "./comelang.h", 2329, "struct sFun**"))));
    item_existance_587=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value414=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_584)), "./comelang.h", 2330, "_Bool*"))));
    len_588=0;
    for(    it_591=map$2char$phsFun$ph_begin(self);    !map$2char$phsFun$ph_end(self);    it_591=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_594,0,sizeof(struct sFun*));
        it2_595=((struct sFun*)(__right_value415=map$2char$phsFun$ph_at(self,it_591,(struct sFun*)come_increment_ref_count(default_value_594))));
        /*c*/ come_call_finalizer3(__right_value415,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_598=string_get_hash_key(((char*)it_591))%size_584;
        n_599=hash_598;
        while((_Bool)1) {
            if(            item_existance_587[n_599]) {
                n_599++;
                if(                n_599>=size_584) {
                    n_599=0;
                }
                else if(                n_599==hash_598) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_587[n_599]=(_Bool)1;
                keys_585[n_599]=it_591;
                items_586[n_599]=((struct sFun*)(__right_value416=map$2char$phsFun$ph_at(self,it_591,(struct sFun*)come_increment_ref_count(default_value_600))));
                /*c*/ come_call_finalizer3(__right_value416,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_588++;
                /*c*/ come_call_finalizer3(default_value_600,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_600,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_594,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_585;
    self->items=items_586;
    self->item_existance=item_existance_587;
    self->size=size_584;
    self->len=len_588;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_589;
char* __result_obj__282;
char* __result_obj__283;
char* result_590;
char* __result_obj__284;
result_589 = (void*)0;
result_590 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_589,0,sizeof(char*));
        __result_obj__282 = result_589;
        return __result_obj__282;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__283 = self->key_list->it->item;
        return __result_obj__283;
    }
    memset(&result_590,0,sizeof(char*));
    __result_obj__284 = result_590;
    return __result_obj__284;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_592;
char* __result_obj__285;
char* __result_obj__286;
char* result_593;
char* __result_obj__287;
result_592 = (void*)0;
result_593 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_592,0,sizeof(char*));
        __result_obj__285 = result_592;
        return __result_obj__285;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__286 = self->key_list->it->item;
        return __result_obj__286;
    }
    memset(&result_593,0,sizeof(char*));
    __result_obj__287 = result_593;
    return __result_obj__287;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_596;
unsigned int it_597;
struct sFun* __result_obj__288;
struct sFun* __result_obj__289;
struct sFun* __result_obj__290;
struct sFun* __result_obj__291;
    hash_596=string_get_hash_key(((char*)key))%self->size;
    it_597=hash_596;
    while((_Bool)1) {
        if(        self->item_existance[it_597]) {
            if(            string_equals(self->keys[it_597],key)) {
                __result_obj__288 = come_increment_ref_count(self->items[it_597]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__288,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__288;
            }
            it_597++;
            if(            it_597>=self->size) {
                it_597=0;
            }
            else if(            it_597==hash_596) {
                __result_obj__289 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__289,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__289;
            }
        }
        else {
            __result_obj__290 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__290,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__290;
        }
    }
    __result_obj__291 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_611;
_Bool is_type_name_flag_612;
int sline_613;
_Bool define_struct_nobody_614;
char* p_615;
int sline_616;
void* __right_value433 = (void*)0;
char* word_617;
_Bool define_function_pointer_result_function_618;
_Bool define_variable_between_brace_619;
char* p_620;
void* __right_value434 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* result_type_621=0;
char* fun_name_622=0;
_Bool err_623=0;
void* __right_value435 = (void*)0;
char* word_624;
_Bool define_function_flag_625;
char* p_626;
void* __right_value436 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_627=0;
char* fun_name_628=0;
_Bool err_629=0;
char* word_630;
void* __right_value437 = (void*)0;
char* __dec_obj94;
void* __right_value438 = (void*)0;
char* __dec_obj95;
char* __dec_obj96;
void* __right_value439 = (void*)0;
char* __dec_obj97;
_Bool define_variable_631;
char* p_632;
void* __right_value440 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_633=0;
char* fun_name_634=0;
_Bool err_635=0;
void* __right_value441 = (void*)0;
char* word_636;
void* __right_value442 = (void*)0;
char* word_637;
char* p_638;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* word_639;
void* __right_value446 = (void*)0;
char* __dec_obj98;
void* __right_value447 = (void*)0;
char* word_640;
void* __right_value448 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c16_641=0;
char* Err_642=0;
void* __right_value449 = (void*)0;
char* word_643;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* node_644;
struct sNode* __result_obj__293;
void* __right_value452 = (void*)0;
struct sNode* __result_obj__294;
char* header_head_645;
void* __right_value453 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* result_type_646=0;
char* fun_name_647=0;
_Bool err_648=0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1sType$ph* param_types_649;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1char$ph* param_names_650;
void* __right_value458 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* param_type_651=0;
char* param_name_652=0;
_Bool err_653=0;
void* __right_value459 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_c17_654=0;
char* Err_655=0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_660=0;
char* Err_661=0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1sType$ph* param_types2_662;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1char$ph* param_names2_663;
void* __right_value470 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var25 = (void*)0;
struct sType* param_type_664=0;
char* param_name_665=0;
_Bool err_666=0;
void* __right_value471 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c19_667=0;
char* Err_668=0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_670=0;
char* Err_671=0;
char* header_tail_672;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* result_type2_673;
struct sType* __dec_obj102;
void* __right_value478 = (void*)0;
struct list$1sType$ph* __dec_obj103;
void* __right_value479 = (void*)0;
struct list$1char$ph* __dec_obj104;
_Bool var_args_674;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct list$1char$ph* param_default_parametors_675;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sFun* fun_676;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sFun* fun2_680;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value540 = (void*)0;
struct sNode* result_681;
struct sNode* __result_obj__324;
void* __right_value541 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_717=0;
char* Err_718=0;
void* __right_value542 = (void*)0;
struct sNode* node_719;
struct sNode* __result_obj__325;
void* __right_value543 = (void*)0;
struct sNode* node_720;
struct sNode* __result_obj__326;
void* __right_value544 = (void*)0;
struct sNode* node_721;
char* source_tail_722;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct buffer* header_723;
struct sNode* __result_obj__327;
void* __right_value547 = (void*)0;
char* buf2_724;
void* __right_value548 = (void*)0;
struct sNode* __result_obj__328;
    info->in_top_level=(_Bool)1;
    source_head_611=info->p;
    is_type_name_flag_612=is_type_name(buf,info);
    sline_613=info->sline;
    define_struct_nobody_614=(_Bool)0;
    {
        p_615=info->p;
        sline_616=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_617=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_614=(_Bool)1;
                }
                (word_617 = come_decrement_ref_count(word_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_616;
    }
    define_function_pointer_result_function_618=(_Bool)0;
    define_variable_between_brace_619=(_Bool)0;
    if(    is_type_name_flag_612) {
        p_620=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value434=backtrace_parse_type((_Bool)0,info)));
            result_type_621=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            fun_name_622=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_623=multiple_assign_var17->v3;
            /*c*/ come_call_finalizer3(__right_value434,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_618=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_624=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_624,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_619=(_Bool)1;
                            }
                        }
                        (word_624 = come_decrement_ref_count(word_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            /*c*/ come_call_finalizer3(result_type_621,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_622 = come_decrement_ref_count(fun_name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_613;
    }
    define_function_flag_625=(_Bool)0;
    if(    is_type_name_flag_612&&!define_function_pointer_result_function_618&&charp_operator_not_equals(buf,"__typeof__")) {
        p_626=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value436=backtrace_parse_type((_Bool)0,info)));
            result_type_627=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_628=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_629=multiple_assign_var18->v3;
            /*c*/ come_call_finalizer3(__right_value436,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_627,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_628 = come_decrement_ref_count(fun_name_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_630=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj94=word_630,
                word_630=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(word_630,"extern")) {
                    __dec_obj95=word_630,
                    word_630=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj96=word_630,
                word_630=((void*)0);
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_630) {
                if(                is_type_name(word_630,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj97=word_630,
                        word_630=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                }
                if(                strlen(word_630)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_612) {
                        define_function_flag_625=(_Bool)1;
                    }
                }
            }
            (word_630 = come_decrement_ref_count(word_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_626;
        info->sline=sline_613;
    }
    define_variable_631=(_Bool)1;
    if(    is_type_name_flag_612&&!define_function_pointer_result_function_618) {
        p_632=info->p;
        info->p=head;
        if(        !is_type_name_flag_612) {
            define_variable_631=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value440=backtrace_parse_type((_Bool)0,info)));
            result_type_633=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_634=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_635=multiple_assign_var19->v3;
            /*c*/ come_call_finalizer3(__right_value440,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_636=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_631=(_Bool)1;
                            }
                        }
                        (word_636 = come_decrement_ref_count(word_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_637=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_637,info)&&*info->p!=40) {
                            define_variable_631=(_Bool)1;
                        }
                    }
                    (word_637 = come_decrement_ref_count(word_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(result_type_633,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_634 = come_decrement_ref_count(fun_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_631=(_Bool)0;
        }
        else if(        define_variable_631) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_631=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_631=(_Bool)0;
            }
        }
        info->p=p_632;
        info->sline=sline_613;
    }
    else {
        define_variable_631=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_618) {
        p_638=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value443=parse_struct_attribute(info)));
            (__right_value443 = come_decrement_ref_count(__right_value443, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value444=parse_word(info)));
                (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_639=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj98=word_639,
                        word_639=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_639,"extends")) {
                            define_variable_631=(_Bool)0;
                        }
                    }
                    (word_639 = come_decrement_ref_count(word_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_631=(_Bool)0;
        }
        else if(        define_variable_631) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_631=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_631=(_Bool)0;
            }
        }
        info->p=p_638;
        info->sline=sline_613;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_640=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value448=err_msg(info,"unexpected source end")));
                    come_exception_var_c16_641=multiple_assign_var20->v1;
                    Err_642=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                    ((Err_642)?(puts(Err_642),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value448,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_642 = come_decrement_ref_count(Err_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_643=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_643)));
                    (word_643 = come_decrement_ref_count(word_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_644=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__293 = come_increment_ref_count(node_644);
            ((node_644) ? node_644 = come_decrement_ref_count(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_640 = come_decrement_ref_count(word_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__293) ? __result_obj__293 = come_decrement_ref_count(__result_obj__293, ((struct sNode*)__result_obj__293)->finalize, ((struct sNode*)__result_obj__293)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__293;
            ((node_644) ? node_644 = come_decrement_ref_count(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_640 = come_decrement_ref_count(word_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_614) {
    }
    else if(    define_variable_between_brace_619) {
        info->p=head;
        info->sline=sline_613;
        __result_obj__294 = come_increment_ref_count(((struct sNode*)(__right_value452=parse_global_variable(info))));
        ((__right_value452) ? __right_value452 = come_decrement_ref_count(__right_value452, ((struct sNode*)__right_value452)->finalize, ((struct sNode*)__right_value452)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__294;
    }
    else if(    define_function_pointer_result_function_618) {
        header_head_645=info->p;
        multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value453=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_646=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
        fun_name_647=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        err_648=multiple_assign_var21->v3;
        /*c*/ come_call_finalizer3(__right_value453,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_649=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1783, "struct list$1sType$ph*"))));
            param_names_650=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1784, "struct list$1char$ph*"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value458=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_651=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                    param_name_652=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    err_653=multiple_assign_var22->v3;
                    /*c*/ come_call_finalizer3(__right_value458,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_653) {
                        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value459=err_msg(info,"parse_type is failed")));
                        come_exception_var_c17_654=multiple_assign_var23->v1;
                        Err_655=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                        ((Err_655)?(puts(Err_655),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value459,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_655 = come_decrement_ref_count(Err_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph_push_back(param_types_649,(struct sType*)come_increment_ref_count(param_type_651));
                    static int num_function_pointer_result_var_name_a_659=0;
                    list$1char$ph_push_back(param_names_650,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_659)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value464=parse_word(info)));
                        (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*c*/ come_call_finalizer3(param_type_651,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_652 = come_decrement_ref_count(param_name_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value465=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c18_660=multiple_assign_var24->v1;
                        Err_661=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_661)?(puts(Err_661),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value465,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_661 = come_decrement_ref_count(Err_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    /*c*/ come_call_finalizer3(param_type_651,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_652 = come_decrement_ref_count(param_name_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_662=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1830, "struct list$1sType$ph*"))));
                param_names2_663=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1831, "struct list$1char$ph*"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var25=((struct tuple3$3sType$phchar$phbool$*)(__right_value470=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_664=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                        param_name_665=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        err_666=multiple_assign_var25->v3;
                        /*c*/ come_call_finalizer3(__right_value470,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        !err_666) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value471=err_msg(info,"parse_type is failed")));
                            come_exception_var_c19_667=multiple_assign_var26->v1;
                            Err_668=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_668)?(puts(Err_668),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value471,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_668 = come_decrement_ref_count(Err_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph_push_back(param_types2_662,(struct sType*)come_increment_ref_count(param_type_664));
                        static int num_function_pointer_result_var_name_b_669=0;
                        list$1char$ph_push_back(param_names2_663,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_669)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value473=parse_word(info)));
                            (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*c*/ come_call_finalizer3(param_type_664,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (param_name_665 = come_decrement_ref_count(param_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value474=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c20_670=multiple_assign_var27->v1;
                            Err_671=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_671)?(puts(Err_671),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value474,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_671 = come_decrement_ref_count(Err_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        /*c*/ come_call_finalizer3(param_type_664,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_665 = come_decrement_ref_count(param_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_672=info->p;
                result_type2_673=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1873, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj102=result_type2_673->mResultType,
                result_type2_673->mResultType=(struct sType*)come_increment_ref_count(result_type_646);
                /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj103=result_type2_673->mParamTypes,
                result_type2_673->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types2_662));
                /*b*/ come_call_finalizer3(__dec_obj103,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj104=result_type2_673->mParamNames,
                result_type2_673->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_663));
                /*b*/ come_call_finalizer3(__dec_obj104,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_673->mVarArgs=(_Bool)0;
                result_type2_673->mStatic=(_Bool)0;
                var_args_674=(_Bool)0;
                param_default_parametors_675=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1883, "struct list$1char$ph*"))));
                fun_676=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1885, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_647)),(struct sType*)come_increment_ref_count(result_type2_673),(struct list$1sType$ph*)come_increment_ref_count(param_types_649),(struct list$1char$ph*)come_increment_ref_count(param_names_650),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_675),(_Bool)1,var_args_674,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_680=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value487=__builtin_string(fun_name_647)))));
                (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_680==((void*)0)||fun2_680->mExternal) {
                    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_647)),(struct sFun*)come_increment_ref_count(fun_676));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1898, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value491=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1898, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_676),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_681=(struct sNode*)come_increment_ref_count(_inf_value2);
                /*c*/ come_call_finalizer3(__right_value491,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__324 = come_increment_ref_count(result_681);
                /*c*/ come_call_finalizer3(param_types2_662,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_663,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_673,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_675,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_676,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun2_680,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_681) ? result_681 = come_decrement_ref_count(result_681, ((struct sNode*)result_681)->finalize, ((struct sNode*)result_681)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(param_types_649,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_650,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_646,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_647 = come_decrement_ref_count(fun_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__324;
                /*c*/ come_call_finalizer3(param_types2_662,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_663,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_673,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_675,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_676,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun2_680,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_681) ? result_681 = come_decrement_ref_count(result_681, ((struct sNode*)result_681)->finalize, ((struct sNode*)result_681)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value541=err_msg(info,"require (")));
                come_exception_var_c21_717=multiple_assign_var28->v1;
                Err_718=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_718)?(puts(Err_718),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value541,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_718 = come_decrement_ref_count(Err_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(param_types_649,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_650,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(result_type_646,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_647 = come_decrement_ref_count(fun_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_613;
        node_719=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__325 = come_increment_ref_count(node_719);
        ((node_719) ? node_719 = come_decrement_ref_count(node_719, ((struct sNode*)node_719)->finalize, ((struct sNode*)node_719)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__325;
        ((node_719) ? node_719 = come_decrement_ref_count(node_719, ((struct sNode*)node_719)->finalize, ((struct sNode*)node_719)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_625) {
        info->p=head;
        info->sline=sline_613;
        node_720=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__326 = come_increment_ref_count(node_720);
        ((node_720) ? node_720 = come_decrement_ref_count(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__326;
        ((node_720) ? node_720 = come_decrement_ref_count(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_631) {
        info->p=head;
        info->sline=sline_613;
        node_721=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_722=info->p;
        header_723=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1932, "struct buffer*"))));
        buffer_append(header_723,source_head_611,source_tail_722-source_head_611);
        __result_obj__327 = come_increment_ref_count(node_721);
        ((node_721) ? node_721 = come_decrement_ref_count(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_723,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__327;
        ((node_721) ? node_721 = come_decrement_ref_count(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_723,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->p=head;
    info->sline=sline_613;
    buf2_724=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__328 = come_increment_ref_count(((struct sNode*)(__right_value548=top_level_v98(buf2_724,head,head_sline,info))));
    (buf2_724 = come_decrement_ref_count(buf2_724, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value548) ? __right_value548 = come_decrement_ref_count(__right_value548, ((struct sNode*)__right_value548)->finalize, ((struct sNode*)__right_value548)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__328;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value460 = (void*)0;
struct list_item$1sType$ph* litem_656;
struct sType* __dec_obj99;
void* __right_value461 = (void*)0;
struct list_item$1sType$ph* litem_657;
struct sType* __dec_obj100;
void* __right_value462 = (void*)0;
struct list_item$1sType$ph* litem_658;
struct sType* __dec_obj101;
struct list$1sType$ph* __result_obj__295;
    if(    self->len==0) {
        litem_656=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value460=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1274, "struct list_item$1sType$ph*"))));
        litem_656->prev=((void*)0);
        litem_656->next=((void*)0);
        __dec_obj99=litem_656->item,
        litem_656->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_656;
        self->head=litem_656;
    }
    else if(    self->len==1) {
        litem_657=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value461=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1284, "struct list_item$1sType$ph*"))));
        litem_657->prev=self->head;
        litem_657->next=((void*)0);
        __dec_obj100=litem_657->item,
        litem_657->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_657;
        self->head->next=litem_657;
    }
    else {
        litem_658=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value462=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1294, "struct list_item$1sType$ph*"))));
        litem_658->prev=self->tail;
        litem_658->next=((void*)0);
        __dec_obj101=litem_658->item,
        litem_658->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_658;
        self->tail=litem_658;
    }
    self->len++;
    __result_obj__295 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_677;
unsigned int hash_678;
unsigned int it_679;
struct sFun* __result_obj__296;
struct sFun* __result_obj__297;
struct sFun* __result_obj__298;
struct sFun* __result_obj__299;
default_value_677 = (void*)0;
    memset(&default_value_677,0,sizeof(struct sFun*));
    hash_678=string_get_hash_key(((char*)key))%self->size;
    it_679=hash_678;
    while((_Bool)1) {
        if(        self->item_existance[it_679]) {
            if(            string_equals(self->keys[it_679],key)) {
                __result_obj__296 = come_increment_ref_count(self->items[it_679]);
                /*c*/ come_call_finalizer3(default_value_677,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__296,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__296;
            }
            it_679++;
            if(            it_679>=self->size) {
                it_679=0;
            }
            else if(            it_679==hash_678) {
                __result_obj__297 = come_increment_ref_count(default_value_677);
                /*c*/ come_call_finalizer3(default_value_677,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__297,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__297;
            }
        }
        else {
            __result_obj__298 = come_increment_ref_count(default_value_677);
            /*c*/ come_call_finalizer3(default_value_677,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__298,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__298;
        }
    }
    __result_obj__299 = come_increment_ref_count(default_value_677);
    /*c*/ come_call_finalizer3(default_value_677,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__299,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__300;
void* __right_value492 = (void*)0;
struct sFunNode* result_682;
void* __right_value493 = (void*)0;
char* __dec_obj105;
void* __right_value539 = (void*)0;
struct sFun* __dec_obj128;
struct sFunNode* __result_obj__323;
    if(    self==(void*)0) {
        __result_obj__300 = (void*)0;
        return __result_obj__300;
    }
    result_682=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)) {
        result_682->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_682->sname,
        result_682->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_682->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj128=result_682->mFun,
        result_682->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        /*b*/ come_call_finalizer3(__dec_obj128,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__323 = result_682;
    /*c*/ come_call_finalizer3(result_682,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__323;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__301;
void* __right_value494 = (void*)0;
struct sFun* result_683;
void* __right_value495 = (void*)0;
char* __dec_obj106;
void* __right_value496 = (void*)0;
struct sType* __dec_obj107;
void* __right_value497 = (void*)0;
struct list$1sType$ph* __dec_obj108;
void* __right_value498 = (void*)0;
struct list$1char$ph* __dec_obj109;
void* __right_value499 = (void*)0;
struct list$1char$ph* __dec_obj110;
void* __right_value500 = (void*)0;
struct sType* __dec_obj111;
void* __right_value532 = (void*)0;
struct sBlock* __dec_obj121;
void* __right_value533 = (void*)0;
struct buffer* __dec_obj122;
void* __right_value534 = (void*)0;
struct buffer* __dec_obj123;
void* __right_value535 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value536 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value537 = (void*)0;
char* __dec_obj126;
void* __right_value538 = (void*)0;
char* __dec_obj127;
struct sFun* __result_obj__322;
    if(    self==(void*)0) {
        __result_obj__301 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__301,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__301;
    }
    result_683=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj106=result_683->mName,
        result_683->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj107=result_683->mResultType,
        result_683->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj108=result_683->mParamTypes,
        result_683->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj108,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj109=result_683->mParamNames,
        result_683->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj109,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj110=result_683->mParamDefaultParametors,
        result_683->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        /*b*/ come_call_finalizer3(__dec_obj110,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj111=result_683->mLambdaType,
        result_683->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj121=result_683->mBlock,
        result_683->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj121,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj122=result_683->mSource,
        result_683->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        /*b*/ come_call_finalizer3(__dec_obj122,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj123=result_683->mSourceHead,
        result_683->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        /*b*/ come_call_finalizer3(__dec_obj123,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj124=result_683->mSourceHead2,
        result_683->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        /*b*/ come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj125=result_683->mSourceDefer,
        result_683->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        /*b*/ come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_683->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_683->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_683->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_683->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_683->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_683->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_683->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj126=result_683->mAttribute,
        result_683->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj127=result_683->mFunAttribute,
        result_683->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__322 = come_increment_ref_count(result_683);
    /*c*/ come_call_finalizer3(result_683,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__322,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__302;
void* __right_value501 = (void*)0;
struct sBlock* result_684;
void* __right_value502 = (void*)0;
struct list$1sNode$ph* __dec_obj112;
void* __right_value531 = (void*)0;
struct sVarTable* __dec_obj120;
struct sBlock* __result_obj__321;
    if(    self==(void*)0) {
        __result_obj__302 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__302,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__302;
    }
    result_684=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj112=result_684->mNodes,
        result_684->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj112,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj120=result_684->mVarTable,
        result_684->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj120,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_684->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__321 = come_increment_ref_count(result_684);
    /*c*/ come_call_finalizer3(result_684,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__321,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__303;
void* __right_value503 = (void*)0;
struct sVarTable* result_685;
void* __right_value530 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj119;
struct sVarTable* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__303 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__303,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__303;
    }
    result_685=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj119=result_685->mVars,
        result_685->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj119,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_685->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_685->mParent=self->mParent;
    }
    __result_obj__320 = come_increment_ref_count(result_685);
    /*c*/ come_call_finalizer3(result_685,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__320,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__320;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__304;
void* __right_value504 = (void*)0;
void* __right_value510 = (void*)0;
struct map$2char$phsVar$ph* result_689;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1char$ph* __dec_obj114;
char* it_692;
struct sVar* default_value_695;
void* __right_value513 = (void*)0;
struct sVar* it2_698;
void* __right_value519 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__319;
default_value_695 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__304 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__304,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__304;
    }
    result_689=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2160, "struct map$2char$phsVar$ph*"))));
    __dec_obj114=result_689->key_list,
    result_689->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2162, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj114,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_692=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_692=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_695,0,sizeof(struct sVar*));
        it2_698=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_692,(struct sVar*)come_increment_ref_count(default_value_695)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_689,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_692)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_698)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_689,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_692)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_698)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_689,(char*)come_increment_ref_count(it_692),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_698)));
        }
        else {
            map$2char$phsVar$ph_put(result_689,(char*)come_increment_ref_count(it_692),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_698)));
        }
        /*c*/ come_call_finalizer3(default_value_695,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_698,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__319 = come_increment_ref_count(result_689);
    /*c*/ come_call_finalizer3(result_689,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__319,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__319;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_686;
int i_687;
    for(    i_686=0;    i_686<self->size;    i_686++    ){
        if(        self->item_existance[i_686]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_686],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_687=0;    i_687<self->size;    i_687++    ){
        if(        self->item_existance[i_687]) {
            if(            1) {
                (self->keys[i_687] = come_decrement_ref_count(self->keys[i_687], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
int i_688;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1char$ph* __dec_obj113;
struct map$2char$phsVar$ph* __result_obj__305;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value505=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2089, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value506=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2090, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value507=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2091, "_Bool*"))));
    for(    i_688=0;    i_688<128;    i_688++    ){
        self->item_existance[i_688]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj113=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2101, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj113,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__305 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__305,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_690;
char* __result_obj__306;
char* __result_obj__307;
char* result_691;
char* __result_obj__308;
result_690 = (void*)0;
result_691 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_690,0,sizeof(char*));
        __result_obj__306 = result_690;
        return __result_obj__306;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__307 = self->key_list->it->item;
        return __result_obj__307;
    }
    memset(&result_691,0,sizeof(char*));
    __result_obj__308 = result_691;
    return __result_obj__308;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_693;
char* __result_obj__309;
char* __result_obj__310;
char* result_694;
char* __result_obj__311;
result_693 = (void*)0;
result_694 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_693,0,sizeof(char*));
        __result_obj__309 = result_693;
        return __result_obj__309;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__310 = self->key_list->it->item;
        return __result_obj__310;
    }
    memset(&result_694,0,sizeof(char*));
    __result_obj__311 = result_694;
    return __result_obj__311;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_696;
unsigned int it_697;
struct sVar* __result_obj__312;
struct sVar* __result_obj__313;
struct sVar* __result_obj__314;
struct sVar* __result_obj__315;
    hash_696=string_get_hash_key(((char*)key))%self->size;
    it_697=hash_696;
    while((_Bool)1) {
        if(        self->item_existance[it_697]) {
            if(            string_equals(self->keys[it_697],key)) {
                __result_obj__312 = come_increment_ref_count(self->items[it_697]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__312,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__312;
            }
            it_697++;
            if(            it_697>=self->size) {
                it_697=0;
            }
            else if(            it_697==hash_696) {
                __result_obj__313 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__313,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__313;
            }
        }
        else {
            __result_obj__314 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__314,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__314;
        }
    }
    __result_obj__315 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__315,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_710;
int it_711;
_Bool same_key_exist_712;
char* it2_713;
struct map$2char$phsVar$ph* __result_obj__316;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_710=string_get_hash_key(((char*)key))%self->size;
    it_711=hash_710;
    while((_Bool)1) {
        if(        self->item_existance[it_711]) {
            if(            string_equals(self->keys[it_711],key)) {
                if(                1) {
                    (self->keys[it_711] = come_decrement_ref_count(self->keys[it_711], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_711]);
                    self->keys[it_711]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_711]);
                    self->keys[it_711]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_711],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_711]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_711]=item;
                }
                break;
            }
            it_711++;
            if(            it_711>=self->size) {
                it_711=0;
            }
            else if(            it_711==hash_710) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_711]=(_Bool)1;
            if(            1) {
                self->keys[it_711]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_711]=key;
            }
            if(            1) {
                self->items[it_711]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_711]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_712=(_Bool)0;
    for(    it2_713=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_713=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_713,key)) {
            same_key_exist_712=(_Bool)1;
        }
    }
    if(    !same_key_exist_712) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__316 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_699;
void* __right_value514 = (void*)0;
char** keys_700;
void* __right_value515 = (void*)0;
struct sVar** items_701;
void* __right_value516 = (void*)0;
_Bool* item_existance_702;
int len_703;
char* it_704;
struct sVar* default_value_705;
void* __right_value517 = (void*)0;
struct sVar* it2_706;
unsigned int hash_707;
int n_708;
struct sVar* default_value_709;
void* __right_value518 = (void*)0;
default_value_705 = (void*)0;
default_value_709 = (void*)0;
    size_699=self->size*10;
    keys_700=(char**)come_increment_ref_count(((char**)(__right_value514=(char**)come_calloc(1, sizeof(char*)*(1*(size_699)), "./comelang.h", 2328, "char**"))));
    items_701=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value515=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_699)), "./comelang.h", 2329, "struct sVar**"))));
    item_existance_702=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value516=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_699)), "./comelang.h", 2330, "_Bool*"))));
    len_703=0;
    for(    it_704=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_704=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_705,0,sizeof(struct sVar*));
        it2_706=((struct sVar*)(__right_value517=map$2char$phsVar$ph_at(self,it_704,(struct sVar*)come_increment_ref_count(default_value_705))));
        /*c*/ come_call_finalizer3(__right_value517,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_707=string_get_hash_key(((char*)it_704))%size_699;
        n_708=hash_707;
        while((_Bool)1) {
            if(            item_existance_702[n_708]) {
                n_708++;
                if(                n_708>=size_699) {
                    n_708=0;
                }
                else if(                n_708==hash_707) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_702[n_708]=(_Bool)1;
                keys_700[n_708]=it_704;
                items_701[n_708]=((struct sVar*)(__right_value518=map$2char$phsVar$ph_at(self,it_704,(struct sVar*)come_increment_ref_count(default_value_709))));
                /*c*/ come_call_finalizer3(__right_value518,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_703++;
                /*c*/ come_call_finalizer3(default_value_709,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_709,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_705,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_700;
    self->items=items_701;
    self->item_existance=item_existance_702;
    self->size=size_699;
    self->len=len_703;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__317;
void* __right_value520 = (void*)0;
struct sVar* result_714;
void* __right_value521 = (void*)0;
char* __dec_obj115;
void* __right_value522 = (void*)0;
char* __dec_obj116;
void* __right_value523 = (void*)0;
struct sType* __dec_obj117;
void* __right_value524 = (void*)0;
char* __dec_obj118;
struct sVar* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__317 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__317,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__317;
    }
    result_714=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_714->mName,
        result_714->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj116=result_714->mCValueName,
        result_714->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj117=result_714->mType,
        result_714->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_714->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_714->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_714->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj118=result_714->mFunName,
        result_714->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__318 = come_increment_ref_count(result_714);
    /*c*/ come_call_finalizer3(result_714,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__318,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_715;
int i_716;
    for(    i_715=0;    i_715<self->size;    i_715++    ){
        if(        self->item_existance[i_715]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_715],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_716=0;    i_716<self->size;    i_716++    ){
        if(        self->item_existance[i_716]) {
            if(            1) {
                (self->keys[i_716] = come_decrement_ref_count(self->keys[i_716], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_725;
int caller_line_726;
char* caller_sname_727;
_Bool comma_instead_of_semicolon_728;
_Bool without_semicolon_729;
char* last_code_730;
char* __dec_obj129;
char* last_code2_731;
char* __dec_obj130;
void* __right_value549 = (void*)0;
char* sname_top_732;
int sline_top_733;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sFun* funX_734;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__332;
void* __right_value556 = (void*)0;
struct sType* result_type_737;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1sType$ph* param_types_738;
struct list$1sType$ph* o2_saved_739;
struct sType* it_742;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* param_type_745;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1char$ph* param_names_746;
void* __right_value563 = (void*)0;
struct list$1char$ph* param_default_parametors_747;
char* p_748;
int sline_749;
char* sname_750;
char* head_751;
struct buffer* source_752;
void* __right_value564 = (void*)0;
struct buffer* __dec_obj133;
struct sType* generics_type_saved_753;
void* __right_value565 = (void*)0;
struct sType* __dec_obj134;
struct list$1char$ph* method_generics_type_names_754;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1char$ph* __dec_obj135;
struct list$1char$ph* o2_saved_755;
char* it_756;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1char$ph* __dec_obj136;
char* __dec_obj137;
void* __right_value570 = (void*)0;
struct sBlock* block_757;
struct buffer* __dec_obj138;
char* __dec_obj139;
_Bool var_args_758;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sFun* fun_759;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value578 = (void*)0;
struct sNode* node_760;
_Bool in_generics_fun_761;
_Bool Value_762;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__339;
struct sType* __dec_obj140;
struct list$1char$ph* __dec_obj141;
void* __right_value582 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__340;
    caller_fun_725=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_726=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_727=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_728=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_729=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_730=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj129=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_731=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj130=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_732=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_733=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_734=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value550=__builtin_string(fun_name)))));
    (__right_value550 = come_decrement_ref_count(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_734) {
        __result_obj__332 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value555=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1973, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_730 = come_decrement_ref_count(last_code_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_731 = come_decrement_ref_count(last_code2_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_732 = come_decrement_ref_count(sname_top_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_734,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value555,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__332,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__332;
    }
    result_type_737=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_738=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1979, "struct list$1sType$ph*"))));
    for(    o2_saved_739=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_742=list$1sType$ph_begin((o2_saved_739));    !list$1sType$ph_end((o2_saved_739));    it_742=list$1sType$ph_next((o2_saved_739))    ){
        param_type_745=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value559=come_call_cloner(sType_clone, it_742))),generics_type,info));
        /*c*/ come_call_finalizer3(__right_value559,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_738,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_745)));
        /*c*/ come_call_finalizer3(param_type_745,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_739,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_746=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_747=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_748=info->p;
    sline_749=info->sline;
    sname_750=(char*)come_increment_ref_count(info->sname);
    head_751=info->head;
    source_752=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj133=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj133,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_753=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj134=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_754=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj135=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2007, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj135,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_755=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_756=list$1char$ph_begin((o2_saved_755));    !list$1char$ph_end((o2_saved_755));    it_756=list$1char$ph_next((o2_saved_755))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_756)));
    }
    /*c*/ come_call_finalizer3(o2_saved_755,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj136=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj136,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj137=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_757=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_751;
    __dec_obj138=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_752);
    /*b*/ come_call_finalizer3(__dec_obj138,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_748;
    info->sline=sline_749;
    __dec_obj139=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_750);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_737->mInline=(_Bool)0;
    result_type_737->mStatic=(_Bool)0;
    result_type_737->mUniq=(_Bool)0;
    var_args_758=generics_fun->mVarArgs;
    fun_759=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2031, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_737),(struct list$1sType$ph*)come_increment_ref_count(param_types_738),(struct list$1char$ph*)come_increment_ref_count(param_names_746),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_747),(_Bool)0,var_args_758,(struct sBlock*)come_increment_ref_count(block_757),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_759));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2038, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value577=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2038, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_759),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_760=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value577,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    in_generics_fun_761=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_762=node_compile(node_760,info);
    if(    !Value_762) {
        __result_obj__339 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value581=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2043, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_730 = come_decrement_ref_count(last_code_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_731 = come_decrement_ref_count(last_code2_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_732 = come_decrement_ref_count(sname_top_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_734,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_737,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_738,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_746,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_747,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_750 = come_decrement_ref_count(sname_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_752,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type_saved_753,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_754,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_757,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_759,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value581,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__339,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__339;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_761;
    __dec_obj140=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_753);
    /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj141=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_754);
    /*b*/ come_call_finalizer3(__dec_obj141,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj142=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_732));
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_733;
    __dec_obj143=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_730);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj144=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_731);
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_725;
    info->caller_line=caller_line_726;
    info->caller_sname=caller_sname_727;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_728;
    info->without_semicolon=without_semicolon_729;
    __result_obj__340 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value585=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2064, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_730 = come_decrement_ref_count(last_code_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_731 = come_decrement_ref_count(last_code2_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_732 = come_decrement_ref_count(sname_top_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(funX_734,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_737,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_738,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_746,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_747,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_750 = come_decrement_ref_count(sname_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_752,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(generics_type_saved_753,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_754,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_757,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_759,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_760) ? node_760 = come_decrement_ref_count(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value585,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__340,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__340;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__329;
void* __right_value552 = (void*)0;
struct tuple2$2char$phbool$* result_735;
void* __right_value553 = (void*)0;
char* __dec_obj131;
struct tuple2$2char$phbool$* __result_obj__330;
    if(    self==(void*)0) {
        __result_obj__329 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__329,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__329;
    }
    result_735=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj131=result_735->v1,
        result_735->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_735->v2=self->v2;
    }
    __result_obj__330 = come_increment_ref_count(result_735);
    /*c*/ come_call_finalizer3(result_735,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__330,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__330;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_736;
    result_736=0;
    result_736+=int_get_hash_key(((int)self->v1));
    result_736+=int_get_hash_key(((int)self->v2));
    return result_736;
}

static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj132;
struct tuple2$2char$phbool$* __result_obj__331;
    __dec_obj132=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__331 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__331,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_740;
struct sType* __result_obj__333;
struct sType* __result_obj__334;
struct sType* result_741;
struct sType* __result_obj__335;
result_740 = (void*)0;
result_741 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_740,0,sizeof(struct sType*));
        __result_obj__333 = result_740;
        return __result_obj__333;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__334 = self->it->item;
        return __result_obj__334;
    }
    memset(&result_741,0,sizeof(struct sType*));
    __result_obj__335 = result_741;
    return __result_obj__335;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_743;
struct sType* __result_obj__336;
struct sType* __result_obj__337;
struct sType* result_744;
struct sType* __result_obj__338;
result_743 = (void*)0;
result_744 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_743,0,sizeof(struct sType*));
        __result_obj__336 = result_743;
        return __result_obj__336;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__337 = self->it->item;
        return __result_obj__337;
    }
    memset(&result_744,0,sizeof(struct sType*));
    __result_obj__338 = result_744;
    return __result_obj__338;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_763;
int caller_line_764;
char* caller_sname_765;
_Bool comma_instead_of_semicolon_766;
char* last_code_767;
char* __dec_obj145;
char* last_code2_768;
char* __dec_obj146;
void* __right_value586 = (void*)0;
char* sname_top_769;
int sline_top_770;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sFun* funX_771;
_Bool __result_obj__341;
void* __right_value589 = (void*)0;
struct sType* result_type_772;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1sType$ph* param_types_773;
struct list$1sType$ph* o2_saved_774;
struct sType* it_775;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sType* param_type_776;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1char$ph* param_names_777;
void* __right_value596 = (void*)0;
struct list$1char$ph* param_default_parametors_778;
char* p_779;
int sline_780;
char* sname_781;
char* head_782;
struct buffer* source_783;
void* __right_value597 = (void*)0;
struct buffer* __dec_obj147;
struct list$1char$ph* method_generics_type_names_784;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1char$ph* __dec_obj148;
struct list$1char$ph* o2_saved_785;
char* it_786;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1char$ph* __dec_obj149;
char* __dec_obj150;
void* __right_value602 = (void*)0;
struct sBlock* block_787;
struct buffer* __dec_obj151;
char* __dec_obj152;
_Bool generate__788;
_Bool var_args_789;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sFun* fun_790;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value611 = (void*)0;
struct sNode* node_791;
_Bool Value_792;
void* __if_result__1_793 = (void*)0;
_Bool __result_obj__342;
struct list$1char$ph* __dec_obj153;
void* __right_value612 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
_Bool __result_obj__343;
    caller_fun_763=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_764=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_765=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_766=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_767=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj145=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_768=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj146=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_769=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_770=info->sline;
    funX_771=((struct sFun*)(__right_value588=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value587=__builtin_string(fun_name))))));
    (__right_value587 = come_decrement_ref_count(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value588,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    funX_771) {
        __result_obj__341 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_767 = come_decrement_ref_count(last_code_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_768 = come_decrement_ref_count(last_code2_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_769 = come_decrement_ref_count(sname_top_769, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__341;
    }
    result_type_772=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_773=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2093, "struct list$1sType$ph*"))));
    for(    o2_saved_774=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_775=list$1sType$ph_begin((o2_saved_774));    !list$1sType$ph_end((o2_saved_774));    it_775=list$1sType$ph_next((o2_saved_774))    ){
        param_type_776=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value592=come_call_cloner(sType_clone, it_775))),info));
        /*c*/ come_call_finalizer3(__right_value592,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_773,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_776)));
        /*c*/ come_call_finalizer3(param_type_776,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_774,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_777=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_778=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_779=info->p;
    sline_780=info->sline;
    sname_781=(char*)come_increment_ref_count(info->sname);
    head_782=info->head;
    source_783=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj147=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_784=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj148=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2115, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj148,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_785=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_786=list$1char$ph_begin((o2_saved_785));    !list$1char$ph_end((o2_saved_785));    it_786=list$1char$ph_next((o2_saved_785))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_786)));
    }
    /*c*/ come_call_finalizer3(o2_saved_785,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj149=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj149,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj150=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_787=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_782;
    __dec_obj151=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_783);
    /*b*/ come_call_finalizer3(__dec_obj151,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_779;
    info->sline=sline_780;
    __dec_obj152=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_781);
    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_772->mInline=(_Bool)0;
    result_type_772->mStatic=(_Bool)0;
    result_type_772->mUniq=(_Bool)0;
    generate__788=(_Bool)0;
    if(    result_type_772->mGenerate) {
        result_type_772->mGenerate=(_Bool)0;
        generate__788=(_Bool)1;
    }
    var_args_789=generics_fun->mVarArgs;
    fun_790=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2145, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_772),(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_773)),(struct list$1char$ph*)come_increment_ref_count(param_names_777),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_778),(_Bool)0,var_args_789,(struct sBlock*)come_increment_ref_count(block_787),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__788,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_790));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2152, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value610=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2152, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_790),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_791=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value610,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_792=node_compile(node_791,info);
    if(    !Value_792) {
        __result_obj__342 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_767 = come_decrement_ref_count(last_code_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_768 = come_decrement_ref_count(last_code2_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_769 = come_decrement_ref_count(sname_top_769, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_772,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_773,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_777,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_778,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_781 = come_decrement_ref_count(sname_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_783,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_784,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_787,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_790,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_791) ? node_791 = come_decrement_ref_count(node_791, ((struct sNode*)node_791)->finalize, ((struct sNode*)node_791)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__342;
    }
    else {
        __if_result__1_793=(void*)(Value_792);
;
    }
    __dec_obj153=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_784);
    /*b*/ come_call_finalizer3(__dec_obj153,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj154=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_769));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_770;
    __dec_obj155=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_767);
    __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj156=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_768);
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_763;
    info->caller_line=caller_line_764;
    info->caller_sname=caller_sname_765;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_766;
    __result_obj__343 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_767 = come_decrement_ref_count(last_code_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_768 = come_decrement_ref_count(last_code2_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_769 = come_decrement_ref_count(sname_top_769, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_772,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_773,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_777,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_778,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_781 = come_decrement_ref_count(sname_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_783,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_784,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_787,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_790,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_791) ? node_791 = come_decrement_ref_count(node_791, ((struct sNode*)node_791)->finalize, ((struct sNode*)node_791)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__343;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_794;
char* source_head_795;
void* __right_value613 = (void*)0;
char* attribute_796;
struct sType* result_type_797;
char* var_name_798;
_Bool constructor__799;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __dec_obj157;
void* __right_value616 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* result_type2_800=0;
char* var_name2_801=0;
_Bool err_802=0;
struct sType* __dec_obj158;
char* __dec_obj159;
_Bool method_definition_803;
char* p_804;
int sline_805;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct buffer* buf2_806;
char* fun_name_807;
char* base_fun_name_808;
struct sType* obj_type2_809;
void* __right_value619 = (void*)0;
char* __dec_obj160;
void* __right_value620 = (void*)0;
char* __dec_obj161;
void* __right_value621 = (void*)0;
struct sType* __dec_obj162;
void* __right_value622 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* obj_type_810=0;
char* name_811=0;
_Bool err_812=0;
void* __right_value623 = (void*)0;
char* __dec_obj163;
void* __right_value624 = (void*)0;
char* __dec_obj164;
void* __right_value625 = (void*)0;
struct sType* __dec_obj165;
void* __right_value626 = (void*)0;
char* __dec_obj166;
void* __right_value627 = (void*)0;
char* __dec_obj167;
void* __right_value628 = (void*)0;
struct sType* __dec_obj168;
void* __right_value629 = (void*)0;
char* __dec_obj169;
void* __right_value630 = (void*)0;
char* __dec_obj170;
void* __right_value631 = (void*)0;
struct sType* __dec_obj171;
void* __right_value632 = (void*)0;
char* __dec_obj172;
void* __right_value633 = (void*)0;
char* __dec_obj173;
void* __right_value634 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var31 = (void*)0;
struct list$1sType$ph* param_types_813=0;
struct list$1char$ph* param_names_814=0;
struct list$1char$ph* param_default_parametors_815=0;
_Bool var_args_816=0;
char* header_tail_817;
int version_818;
int n_819;
void* __right_value635 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var32 = (void*)0;
char* asm_fun_820=0;
char* fun_attribute_821=0;
void* __right_value636 = (void*)0;
char* __dec_obj174;
_Bool in_top_level_822;
void* __right_value637 = (void*)0;
struct sBlock* block_823;
void* __right_value638 = (void*)0;
char* fun_name_825;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sFun* fun_826;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sFun* fun2_827;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value651 = (void*)0;
struct sNode* __result_obj__346;
void* __right_value652 = (void*)0;
char* none_generics_name_829;
void* __right_value653 = (void*)0;
char* generics_sname_830;
int generics_sline_831;
void* __right_value654 = (void*)0;
char* block_832;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sGenericsFun* fun_833;
void* __right_value661 = (void*)0;
char* fun_name3_834;
void* __right_value667 = (void*)0;
struct sNode* __result_obj__358;
void* __right_value668 = (void*)0;
char* generics_sname_856;
int generics_sline_857;
void* __right_value669 = (void*)0;
char* block_858;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sGenericsFun* fun_859;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sNode* __result_obj__359;
char* source_tail_860;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
char* new_fun_name_861;
void* __right_value680 = (void*)0;
char* __dec_obj176;
void* __right_value681 = (void*)0;
struct sBlock* block_862;
_Bool static_fun_863;
_Bool inline_fun_864;
_Bool uniq_fun_865;
_Bool generate_fun_866;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sFun* fun_867;
void* __right_value686 = (void*)0;
char* header_868;
void* __right_value687 = (void*)0;
char* id_869;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sFun* fun2_870;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value694 = (void*)0;
struct sNode* __result_obj__360;
void* __right_value695 = (void*)0;
char* new_fun_name_871;
void* __right_value696 = (void*)0;
char* __dec_obj177;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sFun* fun_872;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sFun* fun2_873;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
char* header_874;
void* __right_value704 = (void*)0;
char* id_875;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value707 = (void*)0;
struct sNode* __result_obj__361;
void* __right_value708 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_876=0;
char* fun_attribute2_877=0;
void* __right_value709 = (void*)0;
char* __dec_obj178;
void* __right_value710 = (void*)0;
char* __dec_obj179;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sFun* fun_878;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sFun* fun2_879;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* header_880;
void* __right_value718 = (void*)0;
char* id_881;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value721 = (void*)0;
struct sNode* __result_obj__362;
void* __right_value722 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c22_882=0;
char* Err_883=0;
struct sNode* __result_obj__363;
fun_name_807 = (void*)0;
    header_head_794=info->p;
    source_head_795=info->p;
    attribute_796=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_797=((void*)0);
    var_name_798=((void*)0);
    constructor__799=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value614=parse_word(info)));
        (__right_value614 = come_decrement_ref_count(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj157=result_type_797,
        result_type_797=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_797->mHeap=(_Bool)1;
        constructor__799=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value616=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_800=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
        var_name2_801=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        err_802=multiple_assign_var29->v3;
        /*c*/ come_call_finalizer3(__right_value616,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj158=result_type_797,
        result_type_797=(struct sType*)come_increment_ref_count(result_type2_800);
        /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj159=var_name_798,
        var_name_798=(char*)come_increment_ref_count(var_name2_801);
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !err_802) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*c*/ come_call_finalizer3(result_type2_800,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name2_801 = come_decrement_ref_count(var_name2_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_803=(_Bool)0;
    {
        p_804=info->p;
        sline_805=info->sline;
        buf2_806=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2213, "struct buffer*"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_806,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_806)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_803=(_Bool)1;
        }
        info->p=p_804;
        info->sline=sline_805;
        /*c*/ come_call_finalizer3(buf2_806,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    base_fun_name_808=((void*)0);
    obj_type2_809=((void*)0);
    if(    constructor__799) {
        __dec_obj160=base_fun_name_808,
        base_fun_name_808=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj161=fun_name_807,
        fun_name_807=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_808,info,(_Bool)1));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj162=obj_type2_809,
        obj_type2_809=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj162,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_803) {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value622=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_810=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        name_811=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_812=multiple_assign_var30->v3;
        /*c*/ come_call_finalizer3(__right_value622,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_812) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj163=base_fun_name_808,
        base_fun_name_808=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj164=fun_name_807,
        fun_name_807=(char*)come_increment_ref_count(create_method_name(obj_type_810,(_Bool)0,base_fun_name_808,info,(_Bool)1));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj165=obj_type2_809,
        obj_type2_809=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_type_810));
        /*b*/ come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(obj_type_810,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_811 = come_decrement_ref_count(name_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj166=base_fun_name_808,
        base_fun_name_808=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj167=fun_name_807,
        fun_name_807=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_808,info,(_Bool)1));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj168=obj_type2_809,
        obj_type2_809=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj169=base_fun_name_808,
        base_fun_name_808=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj170=fun_name_807,
        fun_name_807=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_808,info,(_Bool)1));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj171=obj_type2_809,
        obj_type2_809=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj172=fun_name_807,
        fun_name_807=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj173=base_fun_name_808,
        base_fun_name_808=(char*)come_increment_ref_count(__builtin_string(fun_name_807));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_808,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var31=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value634=parse_params(info,constructor__799)));
    param_types_813=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var31->v1);
    param_names_814=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v2);
    param_default_parametors_815=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v3);
    var_args_816=multiple_assign_var31->v4;
    /*c*/ come_call_finalizer3(__right_value634,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    header_tail_817=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_808,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_818=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_819=0;
        while(xisdigit(*info->p)) {
            n_819=n_819*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_818=n_819;
    }
    multiple_assign_var32=((struct tuple2$2char$phchar$ph*)(__right_value635=parse_function_attribute(info)));
    asm_fun_820=(char*)come_increment_ref_count(multiple_assign_var32->v1);
    fun_attribute_821=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    /*c*/ come_call_finalizer3(__right_value635,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(asm_fun_820,"")) {
        __dec_obj174=fun_name_807,
        fun_name_807=(char*)come_increment_ref_count(__builtin_string(asm_fun_820));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    in_top_level_822=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_808,"lambda")) {
        block_823=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_824=0;
        lambda_num_824++;
        fun_name_825=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_824));
        result_type_797->mInline=(_Bool)0;
        result_type_797->mStatic=(_Bool)0;
        result_type_797->mUniq=(_Bool)0;
        result_type_797->mGenerate=(_Bool)0;
        fun_826=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2333, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_825)),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sType$ph*)come_increment_ref_count(param_types_813),(struct list$1char$ph*)come_increment_ref_count(param_names_814),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_815),(_Bool)0,var_args_816,(struct sBlock*)come_increment_ref_count(block_823),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_827=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value644=__builtin_string(fun_name_825)))));
        (__right_value644 = come_decrement_ref_count(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_827==((void*)0)||fun2_827->mExternal) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_825)),(struct sFun*)come_increment_ref_count(fun_826));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2343, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value648=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2343, "struct sLambdaNode*")),fun_826,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__346 = come_increment_ref_count(((struct sNode*)(__right_value651=_inf_value5)));
        /*c*/ come_call_finalizer3(block_823,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_825 = come_decrement_ref_count(fun_name_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_826,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_827,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_796 = come_decrement_ref_count(attribute_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_797,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_798 = come_decrement_ref_count(var_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_807 = come_decrement_ref_count(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_808 = come_decrement_ref_count(base_fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_809,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_813,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_814,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_815,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_820 = come_decrement_ref_count(asm_fun_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_821 = come_decrement_ref_count(fun_attribute_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value648,sLambdaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value651) ? __right_value651 = come_decrement_ref_count(__right_value651, ((struct sNode*)__right_value651)->finalize, ((struct sNode*)__right_value651)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__346;
        /*c*/ come_call_finalizer3(block_823,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_825 = come_decrement_ref_count(fun_name_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_826,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_827,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        none_generics_name_829=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_830=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_831=info->sline;
        block_832=(char*)come_increment_ref_count(skip_block(info));
        fun_833=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2353, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value656=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value657=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sType$ph*)come_increment_ref_count(param_types_813),(struct list$1char$ph*)come_increment_ref_count(param_names_814),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_815),var_args_816,(char*)come_increment_ref_count(block_832),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_830)),generics_sline_831));
        /*c*/ come_call_finalizer3(__right_value656,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value657,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fun_name3_834=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_829,base_fun_name_808));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_834)),(struct sGenericsFun*)come_increment_ref_count(fun_833));
        __result_obj__358 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_829 = come_decrement_ref_count(none_generics_name_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_830 = come_decrement_ref_count(generics_sname_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_832 = come_decrement_ref_count(block_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_833,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_834 = come_decrement_ref_count(fun_name3_834, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_796 = come_decrement_ref_count(attribute_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_797,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_798 = come_decrement_ref_count(var_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_807 = come_decrement_ref_count(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_808 = come_decrement_ref_count(base_fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_809,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_813,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_814,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_815,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_820 = come_decrement_ref_count(asm_fun_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_821 = come_decrement_ref_count(fun_attribute_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__358) ? __result_obj__358 = come_decrement_ref_count(__result_obj__358, ((struct sNode*)__result_obj__358)->finalize, ((struct sNode*)__result_obj__358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__358;
        (none_generics_name_829 = come_decrement_ref_count(none_generics_name_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_830 = come_decrement_ref_count(generics_sname_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_832 = come_decrement_ref_count(block_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_833,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_834 = come_decrement_ref_count(fun_name3_834, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0) {
        generics_sname_856=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_857=info->sline;
        block_858=(char*)come_increment_ref_count(skip_block(info));
        fun_859=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2367, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value671=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value672=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sType$ph*)come_increment_ref_count(param_types_813),(struct list$1char$ph*)come_increment_ref_count(param_names_814),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_815),var_args_816,(char*)come_increment_ref_count(block_858),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_856)),generics_sline_857));
        /*c*/ come_call_finalizer3(__right_value671,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value672,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        method_definition_803) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sGenericsFun*)come_increment_ref_count(fun_859));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_808)),(struct sGenericsFun*)come_increment_ref_count(fun_859));
        }
        __result_obj__359 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_856 = come_decrement_ref_count(generics_sname_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_858 = come_decrement_ref_count(block_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_859,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_796 = come_decrement_ref_count(attribute_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_797,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_798 = come_decrement_ref_count(var_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_807 = come_decrement_ref_count(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_808 = come_decrement_ref_count(base_fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_809,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_813,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_814,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_815,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_820 = come_decrement_ref_count(asm_fun_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_821 = come_decrement_ref_count(fun_attribute_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__359) ? __result_obj__359 = come_decrement_ref_count(__result_obj__359, ((struct sNode*)__result_obj__359)->finalize, ((struct sNode*)__result_obj__359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__359;
        (generics_sname_856 = come_decrement_ref_count(generics_sname_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_858 = come_decrement_ref_count(block_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_859,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_860=info->p-1;
        if(        version_818>0) {
            new_fun_name_861=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value678=__builtin_string(fun_name_807))),version_818));
            (__right_value678 = come_decrement_ref_count(__right_value678, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj176=fun_name_807,
            fun_name_807=(char*)come_increment_ref_count(__builtin_string(new_fun_name_861));
            __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_861 = come_decrement_ref_count(new_fun_name_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_862=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__799,(_Bool)1));
        static_fun_863=(_Bool)0;
        if(        result_type_797->mStatic) {
            result_type_797->mStatic=(_Bool)0;
            result_type_797->mUniq=(_Bool)0;
            static_fun_863=(_Bool)1;
        }
        inline_fun_864=(_Bool)0;
        if(        result_type_797->mInline) {
            result_type_797->mInline=(_Bool)0;
            result_type_797->mUniq=(_Bool)0;
            inline_fun_864=(_Bool)1;
        }
        uniq_fun_865=(_Bool)0;
        if(        result_type_797->mUniq) {
            result_type_797->mUniq=(_Bool)0;
            result_type_797->mInline=(_Bool)0;
            result_type_797->mStatic=(_Bool)0;
            uniq_fun_865=(_Bool)1;
        }
        generate_fun_866=(_Bool)0;
        if(        result_type_797->mUniq) {
            result_type_797->mUniq=(_Bool)0;
            result_type_797->mInline=(_Bool)0;
            result_type_797->mStatic=(_Bool)0;
            generate_fun_866=(_Bool)1;
        }
        fun_867=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2417, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sType$ph*)come_increment_ref_count(param_types_813),(struct list$1char$ph*)come_increment_ref_count(param_names_814),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_815),(_Bool)0,var_args_816,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_862)),static_fun_863,info,inline_fun_864,uniq_fun_865,generate_fun_866,(char*)come_increment_ref_count(attribute_796),(char*)come_increment_ref_count(fun_attribute_821)));
        if(        info->output_header_file) {
            if(            !result_type_797->mStatic&&!info->no_output_come_code) {
                header_868=(char*)come_increment_ref_count(make_come_header_function(fun_867,(char*)come_increment_ref_count(base_fun_name_808),(struct sType*)come_increment_ref_count(obj_type2_809),version_818,info));
                id_869=(char*)come_increment_ref_count(__builtin_string(fun_name_807));
                add_come_code_at_come_header(info,id_869,"%s",header_868);
                (header_868 = come_decrement_ref_count(header_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_869 = come_decrement_ref_count(id_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        info->in_class) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sFun*)come_increment_ref_count(fun_867));
        }
        else {
            fun2_870=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value689=__builtin_string(fun_name_807)))));
            (__right_value689 = come_decrement_ref_count(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_870==((void*)0)||fun2_870->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sFun*)come_increment_ref_count(fun_867));
            }
            /*c*/ come_call_finalizer3(fun2_870,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2443, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value693=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2443, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_867),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__360 = come_increment_ref_count(((struct sNode*)(__right_value694=_inf_value6)));
        /*c*/ come_call_finalizer3(block_862,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_867,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_796 = come_decrement_ref_count(attribute_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_797,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_798 = come_decrement_ref_count(var_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_807 = come_decrement_ref_count(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_808 = come_decrement_ref_count(base_fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_809,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_813,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_814,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_815,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_820 = come_decrement_ref_count(asm_fun_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_821 = come_decrement_ref_count(fun_attribute_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value693,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value694) ? __right_value694 = come_decrement_ref_count(__right_value694, ((struct sNode*)__right_value694)->finalize, ((struct sNode*)__right_value694)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__360) ? __result_obj__360 = come_decrement_ref_count(__result_obj__360, ((struct sNode*)__result_obj__360)->finalize, ((struct sNode*)__result_obj__360)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__360;
        /*c*/ come_call_finalizer3(block_862,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_867,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_818>0) {
            new_fun_name_871=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_807,version_818));
            __dec_obj177=fun_name_807,
            fun_name_807=(char*)come_increment_ref_count(__builtin_string(new_fun_name_871));
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_871 = come_decrement_ref_count(new_fun_name_871, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_797->mStatic=(_Bool)0;
            result_type_797->mUniq=(_Bool)0;
            result_type_797->mInline=(_Bool)0;
            result_type_797->mGenerate=(_Bool)0;
            fun_872=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2460, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sType$ph*)come_increment_ref_count(param_types_813),(struct list$1char$ph*)come_increment_ref_count(param_names_814),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_815),(_Bool)1,var_args_816,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_796),(char*)come_increment_ref_count(fun_attribute_821)));
            fun2_873=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value700=__builtin_string(fun_name_807)))));
            (__right_value700 = come_decrement_ref_count(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_873==((void*)0)||fun2_873->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sFun*)come_increment_ref_count(fun_872));
            }
            if(            info->output_header_file) {
                if(                !result_type_797->mStatic&&!info->no_output_come_code) {
                    header_874=(char*)come_increment_ref_count(make_come_header_function(fun_872,(char*)come_increment_ref_count(base_fun_name_808),(struct sType*)come_increment_ref_count(obj_type2_809),version_818,info));
                    id_875=(char*)come_increment_ref_count(__builtin_string(fun_name_807));
                    add_come_code_at_come_header(info,id_875,"%s",header_874);
                    (header_874 = come_decrement_ref_count(header_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_875 = come_decrement_ref_count(id_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2480, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value706=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2480, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_872),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__361 = come_increment_ref_count(((struct sNode*)(__right_value707=_inf_value7)));
            /*c*/ come_call_finalizer3(fun_872,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_873,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_796 = come_decrement_ref_count(attribute_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_797,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_798 = come_decrement_ref_count(var_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_807 = come_decrement_ref_count(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_808 = come_decrement_ref_count(base_fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_809,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_813,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_814,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_815,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_820 = come_decrement_ref_count(asm_fun_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_821 = come_decrement_ref_count(fun_attribute_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value706,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value707) ? __right_value707 = come_decrement_ref_count(__right_value707, ((struct sNode*)__right_value707)->finalize, ((struct sNode*)__right_value707)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__361) ? __result_obj__361 = come_decrement_ref_count(__result_obj__361, ((struct sNode*)__result_obj__361)->finalize, ((struct sNode*)__result_obj__361)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__361;
            /*c*/ come_call_finalizer3(fun_872,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_873,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value708=parse_function_attribute(info)));
            asm_fun_876=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute2_877=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            /*c*/ come_call_finalizer3(__right_value708,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            string_operator_not_equals(asm_fun_876,"")) {
                __dec_obj178=fun_name_807,
                fun_name_807=(char*)come_increment_ref_count(__builtin_string(asm_fun_876));
                __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            __dec_obj179=fun_attribute_821,
            fun_attribute_821=(char*)come_increment_ref_count(string_operator_add(fun_attribute_821,fun_attribute2_877));
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            result_type_797->mStatic=(_Bool)0;
            result_type_797->mUniq=(_Bool)0;
            result_type_797->mInline=(_Bool)0;
            result_type_797->mGenerate=(_Bool)0;
            fun_878=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2496, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sType$ph*)come_increment_ref_count(param_types_813),(struct list$1char$ph*)come_increment_ref_count(param_names_814),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_815),(_Bool)1,var_args_816,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_796),(char*)come_increment_ref_count(fun_attribute_821)));
            fun2_879=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value714=__builtin_string(fun_name_807)))));
            (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_879==((void*)0)||fun2_879->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_807)),(struct sFun*)come_increment_ref_count(fun_878));
            }
            if(            info->output_header_file) {
                if(                !result_type_797->mStatic&&!info->no_output_come_code) {
                    header_880=(char*)come_increment_ref_count(make_come_header_function(fun_878,(char*)come_increment_ref_count(base_fun_name_808),(struct sType*)come_increment_ref_count(obj_type2_809),version_818,info));
                    id_881=(char*)come_increment_ref_count(__builtin_string(fun_name_807));
                    add_come_code_at_come_header(info,id_881,"%s",header_880);
                    (header_880 = come_decrement_ref_count(header_880, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_881 = come_decrement_ref_count(id_881, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2518, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value720=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2518, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_878),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__362 = come_increment_ref_count(((struct sNode*)(__right_value721=_inf_value8)));
            (asm_fun_876 = come_decrement_ref_count(asm_fun_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_877 = come_decrement_ref_count(fun_attribute2_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_878,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_879,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_796 = come_decrement_ref_count(attribute_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_797,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_798 = come_decrement_ref_count(var_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_807 = come_decrement_ref_count(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_808 = come_decrement_ref_count(base_fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_809,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_813,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_814,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_815,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_820 = come_decrement_ref_count(asm_fun_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_821 = come_decrement_ref_count(fun_attribute_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value720,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value721) ? __right_value721 = come_decrement_ref_count(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__362;
            (asm_fun_876 = come_decrement_ref_count(asm_fun_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_877 = come_decrement_ref_count(fun_attribute2_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_878,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_879,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value722=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_exception_var_c22_882=multiple_assign_var34->v1;
        Err_883=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_883)?(puts(Err_883),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value722,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
        (Err_883 = come_decrement_ref_count(Err_883, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_822;
    __result_obj__363 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_796 = come_decrement_ref_count(attribute_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_797,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_798 = come_decrement_ref_count(var_name_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_807 = come_decrement_ref_count(fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_808 = come_decrement_ref_count(base_fun_name_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(obj_type2_809,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_813,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_814,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_815,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (asm_fun_820 = come_decrement_ref_count(asm_fun_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute_821 = come_decrement_ref_count(fun_attribute_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__363;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__344;
void* __right_value649 = (void*)0;
struct sLambdaNode* result_828;
void* __right_value650 = (void*)0;
char* __dec_obj175;
struct sLambdaNode* __result_obj__345;
    if(    self==(void*)0) {
        __result_obj__344 = (void*)0;
        return __result_obj__344;
    }
    result_828=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)) {
        result_828->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_828->sname,
        result_828->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_828->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_828->mFun=self->mFun;
    }
    __result_obj__345 = result_828;
    /*c*/ come_call_finalizer3(result_828,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__345;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_852;
unsigned int it_853;
_Bool same_key_exist_854;
char* it2_855;
struct map$2char$phsGenericsFun$ph* __result_obj__357;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_852=string_get_hash_key(((char*)key))%self->size;
    it_853=hash_852;
    while((_Bool)1) {
        if(        self->item_existance[it_853]) {
            if(            string_equals(self->keys[it_853],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_853]);
                    (self->keys[it_853] = come_decrement_ref_count(self->keys[it_853], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_853]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_853]);
                    self->keys[it_853]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_853],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_853]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_853]=item;
                }
                break;
            }
            it_853++;
            if(            it_853>=self->size) {
                it_853=0;
            }
            else if(            it_853==hash_852) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_853]=(_Bool)1;
            if(            1) {
                self->keys[it_853]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_853]=key;
            }
            if(            1) {
                self->items[it_853]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_853]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_854=(_Bool)0;
    for(    it2_855=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_855=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_855,key)) {
            same_key_exist_854=(_Bool)1;
        }
    }
    if(    !same_key_exist_854) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__357 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__357;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_835;
void* __right_value662 = (void*)0;
char** keys_836;
void* __right_value663 = (void*)0;
struct sGenericsFun** items_837;
void* __right_value664 = (void*)0;
_Bool* item_existance_838;
int len_839;
char* it_842;
struct sGenericsFun* default_value_845;
void* __right_value665 = (void*)0;
struct sGenericsFun* it2_846;
unsigned int hash_849;
int n_850;
struct sGenericsFun* default_value_851;
void* __right_value666 = (void*)0;
default_value_845 = (void*)0;
default_value_851 = (void*)0;
    size_835=self->size*10;
    keys_836=(char**)come_increment_ref_count(((char**)(__right_value662=(char**)come_calloc(1, sizeof(char*)*(1*(size_835)), "./comelang.h", 2328, "char**"))));
    items_837=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value663=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_835)), "./comelang.h", 2329, "struct sGenericsFun**"))));
    item_existance_838=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value664=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_835)), "./comelang.h", 2330, "_Bool*"))));
    len_839=0;
    for(    it_842=map$2char$phsGenericsFun$ph_begin(self);    !map$2char$phsGenericsFun$ph_end(self);    it_842=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_845,0,sizeof(struct sGenericsFun*));
        it2_846=((struct sGenericsFun*)(__right_value665=map$2char$phsGenericsFun$ph_at(self,it_842,(struct sGenericsFun*)come_increment_ref_count(default_value_845))));
        /*c*/ come_call_finalizer3(__right_value665,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_849=string_get_hash_key(((char*)it_842))%size_835;
        n_850=hash_849;
        while((_Bool)1) {
            if(            item_existance_838[n_850]) {
                n_850++;
                if(                n_850>=size_835) {
                    n_850=0;
                }
                else if(                n_850==hash_849) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_838[n_850]=(_Bool)1;
                keys_836[n_850]=it_842;
                items_837[n_850]=((struct sGenericsFun*)(__right_value666=map$2char$phsGenericsFun$ph_at(self,it_842,(struct sGenericsFun*)come_increment_ref_count(default_value_851))));
                /*c*/ come_call_finalizer3(__right_value666,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_839++;
                /*c*/ come_call_finalizer3(default_value_851,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_851,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_845,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_836;
    self->items=items_837;
    self->item_existance=item_existance_838;
    self->size=size_835;
    self->len=len_839;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_840;
char* __result_obj__347;
char* __result_obj__348;
char* result_841;
char* __result_obj__349;
result_840 = (void*)0;
result_841 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_840,0,sizeof(char*));
        __result_obj__347 = result_840;
        return __result_obj__347;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__348 = self->key_list->it->item;
        return __result_obj__348;
    }
    memset(&result_841,0,sizeof(char*));
    __result_obj__349 = result_841;
    return __result_obj__349;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_843;
char* __result_obj__350;
char* __result_obj__351;
char* result_844;
char* __result_obj__352;
result_843 = (void*)0;
result_844 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_843,0,sizeof(char*));
        __result_obj__350 = result_843;
        return __result_obj__350;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__351 = self->key_list->it->item;
        return __result_obj__351;
    }
    memset(&result_844,0,sizeof(char*));
    __result_obj__352 = result_844;
    return __result_obj__352;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_847;
unsigned int it_848;
struct sGenericsFun* __result_obj__353;
struct sGenericsFun* __result_obj__354;
struct sGenericsFun* __result_obj__355;
struct sGenericsFun* __result_obj__356;
    hash_847=string_get_hash_key(((char*)key))%self->size;
    it_848=hash_847;
    while((_Bool)1) {
        if(        self->item_existance[it_848]) {
            if(            string_equals(self->keys[it_848],key)) {
                __result_obj__353 = come_increment_ref_count(self->items[it_848]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__353,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__353;
            }
            it_848++;
            if(            it_848>=self->size) {
                it_848=0;
            }
            else if(            it_848==hash_847) {
                __result_obj__354 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__354,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__354;
            }
        }
        else {
            __result_obj__355 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__355,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__355;
        }
    }
    __result_obj__356 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__356,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__356;
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

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_884;
char* __dec_obj180;
char* last_code2_885;
char* __dec_obj181;
_Bool comma_instead_of_semicolon_886;
struct sClass* current_stack_frame_struct_887;
char* real_fun_name_888;
struct sFun* finalizer_889;
void* __right_value723 = (void*)0;
struct sType* type_before_890;
void* __right_value724 = (void*)0;
struct sType* type2_891;
void* __right_value725 = (void*)0;
char* fun_name2_892;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
char* none_generics_name_893;
void* __right_value728 = (void*)0;
char* generics_fun_name_894;
void* __right_value729 = (void*)0;
struct sGenericsFun* generics_fun_895;
void* __right_value730 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_899=0;
_Bool err_900=0;
void* __right_value731 = (void*)0;
char* __dec_obj182;
int i_901;
void* __right_value732 = (void*)0;
char* new_fun_name_902;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
char* __dec_obj183;
void* __right_value735 = (void*)0;
char* __dec_obj184;
void* __right_value736 = (void*)0;
char* __dec_obj185;
void* __right_value737 = (void*)0;
char* user_real_fun_name_903;
void* __right_value738 = (void*)0;
struct sFun* user_finalizer_904;
void* __right_value739 = (void*)0;
struct sType* type2_905;
struct sClass* klass_906;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct buffer* source_907;
void* __right_value742 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_914;
struct tuple2$2char$phsType$ph* it_917;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_920=0;
struct sType* field_type_921=0;
char* p_924;
int sline_925;
char* sname_926;
char* head_927;
struct buffer* source3_928;
struct buffer* __dec_obj186;
void* __right_value743 = (void*)0;
char* __dec_obj187;
void* __right_value744 = (void*)0;
struct sBlock* block_929;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sType* result_type_930;
void* __right_value748 = (void*)0;
char* name_931;
void* __right_value749 = (void*)0;
struct sType* self_type_932;
struct sType* __list_values1___934[1];
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1sType$ph* param_types_933;
void* __right_value753 = (void*)0;
char* __list_values2___938[1];
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1char$ph* param_names_942;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct list$1char$ph* param_default_parametors_943;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sFun* fun2_944;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sFun* fun_945;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value768 = (void*)0;
struct sNode* node_946;
_Bool Value_947;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__389;
memset(&i_901, 0, sizeof(int));
    last_code_884=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj180=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_885=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj181=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_886=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_887=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_888=((void*)0);
    finalizer_889=((void*)0);
    type_before_890=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_891=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_891->mHeap=(_Bool)0;
    fun_name2_892=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        finalizer_889=((struct sFun*)(__right_value726=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_892)));
        /*c*/ come_call_finalizer3(__right_value726,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        finalizer_889==((void*)0)) {
            none_generics_name_893=(char*)come_increment_ref_count(get_none_generics_name(type2_891->mClass->mName));
            generics_fun_name_894=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_893,fun_name));
            generics_fun_895=((struct sGenericsFun*)(__right_value729=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_894)));
            /*c*/ come_call_finalizer3(__right_value729,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_895) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value730=create_generics_fun((char*)come_increment_ref_count(fun_name2_892),generics_fun_895,type,info)));
                name_899=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_900=multiple_assign_var35->v2;
                /*c*/ come_call_finalizer3(__right_value730,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_900) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_889=((struct sFun*)(__right_value731=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_899)));
                /*c*/ come_call_finalizer3(__right_value731,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_899 = come_decrement_ref_count(name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_893 = come_decrement_ref_count(none_generics_name_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_894 = come_decrement_ref_count(generics_fun_name_894, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj182=real_fun_name_888,
        real_fun_name_888=(char*)come_increment_ref_count(fun_name2_892);
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        for(        i_901=128-1;        i_901>=1;        i_901--        ){
            new_fun_name_902=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_892,i_901));
            finalizer_889=((struct sFun*)(__right_value733=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_902)));
            /*c*/ come_call_finalizer3(__right_value733,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_889) {
                __dec_obj183=fun_name2_892,
                fun_name2_892=(char*)come_increment_ref_count(__builtin_string(new_fun_name_902));
                __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_902 = come_decrement_ref_count(new_fun_name_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_902 = come_decrement_ref_count(new_fun_name_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_889==((void*)0)) {
            finalizer_889=((struct sFun*)(__right_value735=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_892)));
            /*c*/ come_call_finalizer3(__right_value735,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj184=real_fun_name_888,
        real_fun_name_888=(char*)come_increment_ref_count(fun_name2_892);
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    finalizer_889==((void*)0)) {
        type=type_before_890;
        __dec_obj185=real_fun_name_888,
        real_fun_name_888=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        user_real_fun_name_903=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_904=((struct sFun*)(__right_value738=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_903)));
        /*c*/ come_call_finalizer3(__right_value738,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_905=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_905;
        klass_906=type->mClass;
        if(        type->mPointerNum>0&&klass_906->mStruct||type->mAllocaValue) {
            source_907=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2618, "struct buffer*"))));
            buffer_append_char(source_907,123);
            if(            user_finalizer_904) {
                char source2_908[1024];
                memset(&source2_908, 0, sizeof(char)                *(1024)                );
                snprintf(source2_908,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_903);
                buffer_append_str(source_907,source2_908);
            }
            klass_906=((struct sClass*)(__right_value742=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_906->mName)));
            /*c*/ come_call_finalizer3(__right_value742,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_914=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_906->mFields)),it_917=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_914));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_914));            it_917=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_914))            ){
                multiple_assign_var36=it_917;
                name_920=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_921=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_921->mHeap) {
                    char source2_922[1024];
                    memset(&source2_922, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_922,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_920,name_920,name_920,name_920);
                    buffer_append_str(source_907,source2_922);
                }
                else if(                field_type_921->mChannel) {
                    char source2_923[1024];
                    memset(&source2_923, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_923,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_920,name_920);
                    buffer_append_str(source_907,source2_923);
                    snprintf(source2_923,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_920,name_920);
                    buffer_append_str(source_907,source2_923);
                }
                (name_920 = come_decrement_ref_count(name_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_921,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_914,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_char(source_907,125);
            p_924=info->p;
            sline_925=info->sline;
            sname_926=(char*)come_increment_ref_count(info->sname);
            head_927=info->head;
            source3_928=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj186=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_907);
            /*b*/ come_call_finalizer3(__dec_obj186,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_907->buf;
            info->head=source_907->buf;
            __dec_obj187=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_888));
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=0;
            block_929=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_930=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2667, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_931=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_888));
            self_type_932=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_932->mHeap=(_Bool)0;
            if(            self_type_932->mPointerNum==0) {
                self_type_932->mPointerNum=1;
            }
            if(            self_type_932->mPointerNum>1) {
                self_type_932->mPointerNum=1;
            }
            param_types_933=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___934[0]=self_type_932,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2677, "struct list$1sType$ph")),1,__list_values1___934)));
            param_names_942=(struct list$1char$ph*)come_increment_ref_count((__list_values2___938[0]=((char*)(__right_value753=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2678, "struct list$1char$ph")),1,__list_values2___938)));
            (__right_value753 = come_decrement_ref_count(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_943=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2679, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_943,((void*)0));
            result_type_930->mStatic=(_Bool)0;
            result_type_930->mUniq=(_Bool)0;
            result_type_930->mInline=(_Bool)0;
            result_type_930->mGenerate=(_Bool)0;
            fun2_944=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value759=__builtin_string(name_931)))));
            (__right_value759 = come_decrement_ref_count(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_944==((void*)0)||fun2_944->mExternal) {
                fun_945=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2689, "struct sFun*")),(char*)come_increment_ref_count(name_931),(struct sType*)come_increment_ref_count(result_type_930),(struct list$1sType$ph*)come_increment_ref_count(param_types_933),(struct list$1char$ph*)come_increment_ref_count(param_names_942),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_943),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_929),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_931)),(struct sFun*)come_increment_ref_count(fun_945));
                finalizer_889=fun_945;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2699, "struct sNode");
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value767=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2699, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_945),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_946=(struct sNode*)come_increment_ref_count(_inf_value9);
                /*c*/ come_call_finalizer3(__right_value767,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_947=node_compile(node_946,info);
                if(                !Value_947) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                /*c*/ come_call_finalizer3(fun_945,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_946) ? node_946 = come_decrement_ref_count(node_946, ((struct sNode*)node_946)->finalize, ((struct sNode*)node_946)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_889=fun2_944;
            }
            __dec_obj188=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_928);
            /*b*/ come_call_finalizer3(__dec_obj188,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_924;
            info->head=head_927;
            info->sline=sline_925;
            __dec_obj189=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_926);
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(source_907,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_926 = come_decrement_ref_count(sname_926, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_928,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(block_929,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_930,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_931 = come_decrement_ref_count(name_931, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(self_type_932,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_933,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_942,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_943,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_944,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (user_real_fun_name_903 = come_decrement_ref_count(user_real_fun_name_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_905,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_887;
    __dec_obj190=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_884);
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj191=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_885);
    __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_886;
    __result_obj__389 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value775=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2724, "struct tuple2$2sFun$pchar$ph")),finalizer_889,(char*)come_increment_ref_count(real_fun_name_888)))));
    (last_code_884 = come_decrement_ref_count(last_code_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_885 = come_decrement_ref_count(last_code2_885, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_888 = come_decrement_ref_count(real_fun_name_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_890,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_891,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_892 = come_decrement_ref_count(fun_name2_892, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value775,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__389,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__389;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_896;
unsigned int hash_897;
unsigned int it_898;
struct sGenericsFun* __result_obj__364;
struct sGenericsFun* __result_obj__365;
struct sGenericsFun* __result_obj__366;
struct sGenericsFun* __result_obj__367;
default_value_896 = (void*)0;
    memset(&default_value_896,0,sizeof(struct sGenericsFun*));
    hash_897=string_get_hash_key(((char*)key))%self->size;
    it_898=hash_897;
    while((_Bool)1) {
        if(        self->item_existance[it_898]) {
            if(            string_equals(self->keys[it_898],key)) {
                __result_obj__364 = come_increment_ref_count(self->items[it_898]);
                /*c*/ come_call_finalizer3(default_value_896,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__364,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__364;
            }
            it_898++;
            if(            it_898>=self->size) {
                it_898=0;
            }
            else if(            it_898==hash_897) {
                __result_obj__365 = come_increment_ref_count(default_value_896);
                /*c*/ come_call_finalizer3(default_value_896,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__365,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__365;
            }
        }
        else {
            __result_obj__366 = come_increment_ref_count(default_value_896);
            /*c*/ come_call_finalizer3(default_value_896,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__366,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__366;
        }
    }
    __result_obj__367 = come_increment_ref_count(default_value_896);
    /*c*/ come_call_finalizer3(default_value_896,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__367,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__367;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_909;
unsigned int hash_910;
unsigned int it_911;
struct sClass* __result_obj__368;
struct sClass* __result_obj__369;
struct sClass* __result_obj__370;
struct sClass* __result_obj__371;
default_value_909 = (void*)0;
    memset(&default_value_909,0,sizeof(struct sClass*));
    hash_910=string_get_hash_key(((char*)key))%self->size;
    it_911=hash_910;
    while((_Bool)1) {
        if(        self->item_existance[it_911]) {
            if(            string_equals(self->keys[it_911],key)) {
                __result_obj__368 = come_increment_ref_count(self->items[it_911]);
                /*c*/ come_call_finalizer3(default_value_909,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__368,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__368;
            }
            it_911++;
            if(            it_911>=self->size) {
                it_911=0;
            }
            else if(            it_911==hash_910) {
                __result_obj__369 = come_increment_ref_count(default_value_909);
                /*c*/ come_call_finalizer3(default_value_909,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__369,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__369;
            }
        }
        else {
            __result_obj__370 = come_increment_ref_count(default_value_909);
            /*c*/ come_call_finalizer3(default_value_909,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__370,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__370;
        }
    }
    __result_obj__371 = come_increment_ref_count(default_value_909);
    /*c*/ come_call_finalizer3(default_value_909,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__371,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
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

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_912;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_913;
    it_912=self->head;
    while(it_912!=((void*)0)) {
        prev_it_913=it_912;
        it_912=it_912->next;
        /*c*/ come_call_finalizer3(prev_it_913,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_915;
struct tuple2$2char$phsType$ph* __result_obj__372;
struct tuple2$2char$phsType$ph* __result_obj__373;
struct tuple2$2char$phsType$ph* result_916;
struct tuple2$2char$phsType$ph* __result_obj__374;
result_915 = (void*)0;
result_916 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_915,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__372 = result_915;
        return __result_obj__372;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__373 = self->it->item;
        return __result_obj__373;
    }
    memset(&result_916,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__374 = result_916;
    return __result_obj__374;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_918;
struct tuple2$2char$phsType$ph* __result_obj__375;
struct tuple2$2char$phsType$ph* __result_obj__376;
struct tuple2$2char$phsType$ph* result_919;
struct tuple2$2char$phsType$ph* __result_obj__377;
result_918 = (void*)0;
result_919 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_918,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__375 = result_918;
        return __result_obj__375;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__376 = self->it->item;
        return __result_obj__376;
    }
    memset(&result_919,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__377 = result_919;
    return __result_obj__377;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_935;
struct list$1sType$ph* __result_obj__378;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_935=0;    i_935<num_value;    i_935++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_935]));
    }
    __result_obj__378 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__378,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__378;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__379;
void* __right_value750 = (void*)0;
struct list$1sType$ph* result_936;
struct list$1sType$ph* __result_obj__380;
    if(    self==(void*)0) {
        __result_obj__379 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__379,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__379;
    }
    result_936=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*"));
    if(    self!=((void*)0)) {
        result_936->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_936->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_936->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_936->it=self->it;
    }
    __result_obj__380 = come_increment_ref_count(result_936);
    /*c*/ come_call_finalizer3(result_936,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__380,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__380;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_937;
    result_937=0;
    result_937+=int_get_hash_key(((int)self->head));
    result_937+=int_get_hash_key(((int)self->tail));
    result_937+=int_get_hash_key(((int)self->len));
    result_937+=int_get_hash_key(((int)self->it));
    return result_937;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_939;
struct list$1char$ph* __result_obj__381;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_939=0;    i_939<num_value;    i_939++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_939]));
    }
    __result_obj__381 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__381,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__381;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__382;
void* __right_value754 = (void*)0;
struct list$1char$ph* result_940;
struct list$1char$ph* __result_obj__383;
    if(    self==(void*)0) {
        __result_obj__382 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__382,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__382;
    }
    result_940=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*"));
    if(    self!=((void*)0)) {
        result_940->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_940->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_940->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_940->it=self->it;
    }
    __result_obj__383 = come_increment_ref_count(result_940);
    /*c*/ come_call_finalizer3(result_940,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__383,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__383;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_941;
    result_941=0;
    result_941+=int_get_hash_key(((int)self->head));
    result_941+=int_get_hash_key(((int)self->tail));
    result_941+=int_get_hash_key(((int)self->len));
    result_941+=int_get_hash_key(((int)self->it));
    return result_941;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__384;
void* __right_value769 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_948;
void* __right_value770 = (void*)0;
char* __dec_obj192;
struct tuple2$2sFun$pchar$ph* __result_obj__385;
    if(    self==(void*)0) {
        __result_obj__384 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__384,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__384;
    }
    result_948=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*"));
    if(    self!=((void*)0)) {
        result_948->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj192=result_948->v2,
        result_948->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__385 = come_increment_ref_count(result_948);
    /*c*/ come_call_finalizer3(result_948,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__385,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__385;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_949;
    result_949=0;
    result_949+=int_get_hash_key(((int)self->v1));
    result_949+=int_get_hash_key(((int)self->v2));
    return result_949;
}

static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right){
    if(    !sFun_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNode$ph_equals(left->mNodes,right->mNodes)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mVarTable,right->mVarTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitSemicolon,right->mOmitSemicolon)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2char$phsVar$ph_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2char$phsVar$ph_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right){
int n_950;
_Bool result_951;
char* it_952;
char* default_value_953;
void* __right_value771 = (void*)0;
char* it2_954;
struct sVar* default_value2_957;
void* __right_value772 = (void*)0;
struct sVar* item_958;
void* __right_value773 = (void*)0;
struct sVar* item2_959;
default_value_953 = (void*)0;
default_value2_957 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_950=0;
    result_951=(_Bool)1;
    for(    it_952=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_952=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_953,0,sizeof(char*));
        it2_954=((char*)(__right_value771=list$1char$ph_item(right->key_list,n_950,default_value_953)));
        (__right_value771 = come_decrement_ref_count(__right_value771, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_952,it2_954)) {
            memset(&default_value2_957,0,sizeof(struct sVar*));
            item_958=((struct sVar*)(__right_value772=map$2char$phsVar$ph_at(left,it_952,(struct sVar*)come_increment_ref_count(default_value2_957))));
            /*c*/ come_call_finalizer3(__right_value772,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_959=((struct sVar*)(__right_value773=map$2char$phsVar$ph_at(right,it2_954,(struct sVar*)come_increment_ref_count(default_value2_957))));
            /*c*/ come_call_finalizer3(__right_value773,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_958,item2_959)) {
                result_951=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_957,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_951=(_Bool)0;
        }
        n_950++;
        (default_value_953 = come_decrement_ref_count(default_value_953, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_951;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_955;
int i_956;
char* __result_obj__386;
char* __result_obj__387;
    if(    position<0) {
        position+=self->len;
    }
    it_955=self->head;
    i_956=0;
    while(it_955!=((void*)0)) {
        if(        position==i_956) {
            __result_obj__386 = come_increment_ref_count(it_955->item);
            (__result_obj__386 = come_decrement_ref_count(__result_obj__386, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__386;
        }
        it_955=it_955->next;
        i_956++;
    }
    __result_obj__387 = come_increment_ref_count(default_value);
    (__result_obj__387 = come_decrement_ref_count(__result_obj__387, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__387;
}

static _Bool sVar_equals(struct sVar* left, struct sVar* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mCValueName,right->mCValueName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoFree,right->mNoFree)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj193;
struct tuple2$2sFun$pchar$ph* __result_obj__388;
    self->v1=v1;
    __dec_obj193=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__388 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__388,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__388;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_960;
char* __dec_obj194;
char* last_code2_961;
char* __dec_obj195;
_Bool comma_instead_of_semicolon_962;
struct sClass* current_stack_frame_struct_963;
struct sFun* equaler_964;
void* __right_value776 = (void*)0;
char* real_fun_name_965;
void* __right_value777 = (void*)0;
struct sType* type2_966;
struct sClass* klass_967;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct buffer* source_968;
char* name_969;
void* __right_value780 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_971;
struct tuple2$2char$phsType$ph* it_972;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_973=0;
struct sType* field_type_974=0;
char* p_976;
int sline_977;
char* sname_978;
char* head_979;
struct buffer* source3_980;
struct buffer* __dec_obj196;
void* __right_value781 = (void*)0;
char* __dec_obj197;
void* __right_value782 = (void*)0;
struct sBlock* block_981;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sType* result_type_982;
void* __right_value786 = (void*)0;
char* name_983;
void* __right_value787 = (void*)0;
struct sType* left_type_984;
void* __right_value788 = (void*)0;
struct sType* right_type_985;
struct sType* __list_values3___987[2];
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct list$1sType$ph* param_types_986;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
char* __list_values4___988[2];
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct list$1char$ph* param_names_989;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct list$1char$ph* param_default_parametors_990;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sFun* fun2_991;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sFun* fun_992;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value806 = (void*)0;
struct sNode* node_993;
_Bool Value_994;
void* __right_value807 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c23_995=0;
char* Err_996=0;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__390;
    last_code_960=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj194=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_961=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj195=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_962=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_963=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_964=((void*)0);
    real_fun_name_965=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_966=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_966;
    klass_967=type->mClass;
    if(    type->mPointerNum>0&&!klass_967->mNumber) {
        source_968=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2750, "struct buffer*"))));
        buffer_append_char(source_968,123);
        if(        klass_967->mProtocol) {
            name_969="_protocol_obj";
            char source2_970[1024];
            memset(&source2_970, 0, sizeof(char)            *(1024)            );
            snprintf(source2_970,1024,"return left.%s.equals(right.%s);\n",name_969,name_969);
            buffer_append_str(source_968,source2_970);
        }
        else {
            klass_967=((struct sClass*)(__right_value780=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_967->mName)));
            /*c*/ come_call_finalizer3(__right_value780,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_971=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_967->mFields)),it_972=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_971));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_971));            it_972=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_971))            ){
                multiple_assign_var37=it_972;
                name_973=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_974=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_975[1024];
                memset(&source2_975, 0, sizeof(char)                *(1024)                );
                snprintf(source2_975,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_973,name_973,name_973);
                buffer_append_str(source_968,source2_975);
                (name_973 = come_decrement_ref_count(name_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_974,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_971,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_968,"return true;");
        buffer_append_char(source_968,125);
        p_976=info->p;
        sline_977=info->sline;
        sname_978=(char*)come_increment_ref_count(info->sname);
        head_979=info->head;
        source3_980=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_968);
        /*b*/ come_call_finalizer3(__dec_obj196,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_968->buf;
        info->head=source_968->buf;
        __dec_obj197=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_965));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_981=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_982=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2790, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_983=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_965));
        left_type_984=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_984->mHeap=(_Bool)0;
        right_type_985=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_985->mHeap=(_Bool)0;
        param_types_986=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___987[0]=left_type_984,
__list_values3___987[1]=right_type_985,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2796, "struct list$1sType$ph")),2,__list_values3___987)));
        param_names_989=(struct list$1char$ph*)come_increment_ref_count((__list_values4___988[0]=((char*)(__right_value791=__builtin_string("left"))),
__list_values4___988[1]=((char*)(__right_value792=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2797, "struct list$1char$ph")),2,__list_values4___988)));
        (__right_value791 = come_decrement_ref_count(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value792 = come_decrement_ref_count(__right_value792, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_990=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2798, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_990,((void*)0));
        list$1char$ph_push_back(param_default_parametors_990,((void*)0));
        result_type_982->mStatic=(_Bool)0;
        result_type_982->mUniq=(_Bool)0;
        result_type_982->mInline=(_Bool)0;
        result_type_982->mGenerate=(_Bool)0;
        fun2_991=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value797=__builtin_string(name_983)))));
        (__right_value797 = come_decrement_ref_count(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_991==((void*)0)||fun2_991->mExternal) {
            fun_992=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2809, "struct sFun*")),(char*)come_increment_ref_count(name_983),(struct sType*)come_increment_ref_count(result_type_982),(struct list$1sType$ph*)come_increment_ref_count(param_types_986),(struct list$1char$ph*)come_increment_ref_count(param_names_989),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_990),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_981),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_983)),(struct sFun*)come_increment_ref_count(fun_992));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2817, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value805=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2817, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_992),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_993=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value805,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_994=node_compile(node_993,info);
            if(            !Value_994) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value807=err_msg(info,"compiling error")));
                come_exception_var_c23_995=multiple_assign_var38->v1;
                Err_996=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_996)?(puts(Err_996),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value807,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_996 = come_decrement_ref_count(Err_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_964=fun_992;
            /*c*/ come_call_finalizer3(fun_992,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_993) ? node_993 = come_decrement_ref_count(node_993, ((struct sNode*)node_993)->finalize, ((struct sNode*)node_993)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_964=fun2_991;
        }
        __dec_obj198=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_980);
        /*b*/ come_call_finalizer3(__dec_obj198,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_976;
        info->head=head_979;
        info->sline=sline_977;
        __dec_obj199=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_978);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_968,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_978 = come_decrement_ref_count(sname_978, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_980,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_981,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_982,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_983 = come_decrement_ref_count(name_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_984,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_985,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_986,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_989,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_990,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_991,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_963;
    __dec_obj200=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_960);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj201=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_961);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_962;
    __result_obj__390 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value809=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2843, "struct tuple2$2sFun$pchar$ph")),equaler_964,(char*)come_increment_ref_count(real_fun_name_965)))));
    (last_code_960 = come_decrement_ref_count(last_code_960, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_961 = come_decrement_ref_count(last_code2_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_965 = come_decrement_ref_count(real_fun_name_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_966,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value809,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__390,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__390;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_997;
char* __dec_obj202;
char* last_code2_998;
char* __dec_obj203;
_Bool comma_instead_of_semicolon_999;
struct sClass* current_stack_frame_struct_1000;
struct sFun* equaler_1001;
void* __right_value810 = (void*)0;
char* real_fun_name_1002;
void* __right_value811 = (void*)0;
struct sType* type2_1003;
struct sClass* klass_1004;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct buffer* source_1005;
char* name_1006;
int i_1009;
void* __right_value814 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1010;
struct tuple2$2char$phsType$ph* it_1011;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1012=0;
struct sType* field_type_1013=0;
char* p_1017;
int sline_1018;
char* sname_1019;
char* head_1020;
struct buffer* source3_1021;
struct buffer* __dec_obj204;
void* __right_value815 = (void*)0;
char* __dec_obj205;
void* __right_value816 = (void*)0;
struct sBlock* block_1022;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sType* result_type_1023;
void* __right_value820 = (void*)0;
char* name_1024;
void* __right_value821 = (void*)0;
struct sType* left_type_1025;
void* __right_value822 = (void*)0;
struct sType* right_type_1026;
struct sType* __list_values5___1028[2];
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1sType$ph* param_types_1027;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
char* __list_values6___1029[2];
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1char$ph* param_names_1030;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct list$1char$ph* param_default_parametors_1031;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sFun* fun2_1032;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sFun* fun_1033;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value840 = (void*)0;
struct sNode* node_1034;
_Bool Value_1035;
void* __right_value841 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c24_1036=0;
char* Err_1037=0;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__391;
    last_code_997=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj202=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_998=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj203=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_999=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1000=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1001=((void*)0);
    real_fun_name_1002=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1003=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1003;
    klass_1004=type->mClass;
    if(    type->mPointerNum>0&&!klass_1004->mNumber) {
        source_1005=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2868, "struct buffer*"))));
        buffer_append_char(source_1005,123);
        if(        klass_1004->mProtocol) {
            name_1006="_protocol_obj";
            char source2_1007[1024];
            memset(&source2_1007, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1007,1024,"return left.%s !== right.%s;\n",name_1006,name_1006);
            buffer_append_str(source_1005,source2_1007);
        }
        else {
            char source2_1008[1024];
            memset(&source2_1008, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1008,1024,"return !(");
            buffer_append_str(source_1005,source2_1008);
            snprintf(source2_1008,1024,"( ");
            buffer_append_str(source_1005,source2_1008);
            i_1009=0;
            klass_1004=((struct sClass*)(__right_value814=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1004->mName)));
            /*c*/ come_call_finalizer3(__right_value814,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1010=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1004->mFields)),it_1011=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1010));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1010));            it_1011=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1010))            ){
                multiple_assign_var39=it_1011;
                name_1012=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1013=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1014[1024];
                memset(&source2_1014, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1014,1024,"(left.%s === right.%s)",name_1012,name_1012,name_1012);
                buffer_append_str(source_1005,source2_1014);
                if(                i_1009==list$1tuple2$2char$phsType$ph$ph_length(klass_1004->mFields)-1) {
                    char source2_1015[1024];
                    memset(&source2_1015, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1015,1024,"));");
                    buffer_append_str(source_1005,source2_1015);
                }
                else {
                    char source2_1016[1024];
                    memset(&source2_1016, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1016,1024," && ");
                    buffer_append_str(source_1005,source2_1016);
                }
                i_1009++;
                (name_1012 = come_decrement_ref_count(name_1012, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1013,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1010,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_1005,125);
        p_1017=info->p;
        sline_1018=info->sline;
        sname_1019=(char*)come_increment_ref_count(info->sname);
        head_1020=info->head;
        source3_1021=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj204=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1005);
        /*b*/ come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1005->buf;
        info->head=source_1005->buf;
        __dec_obj205=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1002));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1022=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1023=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2928, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1024=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1002));
        left_type_1025=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1025->mHeap=(_Bool)0;
        right_type_1026=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1026->mHeap=(_Bool)0;
        param_types_1027=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___1028[0]=left_type_1025,
__list_values5___1028[1]=right_type_1026,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2934, "struct list$1sType$ph")),2,__list_values5___1028)));
        param_names_1030=(struct list$1char$ph*)come_increment_ref_count((__list_values6___1029[0]=((char*)(__right_value825=__builtin_string("left"))),
__list_values6___1029[1]=((char*)(__right_value826=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2935, "struct list$1char$ph")),2,__list_values6___1029)));
        (__right_value825 = come_decrement_ref_count(__right_value825, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value826 = come_decrement_ref_count(__right_value826, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1031=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2936, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1031,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1031,((void*)0));
        result_type_1023->mStatic=(_Bool)0;
        result_type_1023->mUniq=(_Bool)0;
        result_type_1023->mInline=(_Bool)0;
        result_type_1023->mGenerate=(_Bool)0;
        fun2_1032=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value831=__builtin_string(name_1024)))));
        (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1032==((void*)0)||fun2_1032->mExternal) {
            fun_1033=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2947, "struct sFun*")),(char*)come_increment_ref_count(name_1024),(struct sType*)come_increment_ref_count(result_type_1023),(struct list$1sType$ph*)come_increment_ref_count(param_types_1027),(struct list$1char$ph*)come_increment_ref_count(param_names_1030),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1031),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1022),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1024)),(struct sFun*)come_increment_ref_count(fun_1033));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2955, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value839=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2955, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1033),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1034=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value839,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1035=node_compile(node_1034,info);
            if(            !Value_1035) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value841=err_msg(info,"compiling error")));
                come_exception_var_c24_1036=multiple_assign_var40->v1;
                Err_1037=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1037)?(puts(Err_1037),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value841,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1037 = come_decrement_ref_count(Err_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1001=fun_1033;
            /*c*/ come_call_finalizer3(fun_1033,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1034) ? node_1034 = come_decrement_ref_count(node_1034, ((struct sNode*)node_1034)->finalize, ((struct sNode*)node_1034)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1001=fun2_1032;
        }
        __dec_obj206=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1021);
        /*b*/ come_call_finalizer3(__dec_obj206,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1017;
        info->head=head_1020;
        info->sline=sline_1018;
        __dec_obj207=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1019);
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1005,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1019 = come_decrement_ref_count(sname_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1021,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1022,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1023,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1024 = come_decrement_ref_count(name_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1025,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1026,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1027,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1030,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1031,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1032,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1000;
    __dec_obj208=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_997);
    __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj209=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_998);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_999;
    __result_obj__391 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value843=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2981, "struct tuple2$2sFun$pchar$ph")),equaler_1001,(char*)come_increment_ref_count(real_fun_name_1002)))));
    (last_code_997 = come_decrement_ref_count(last_code_997, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_998 = come_decrement_ref_count(last_code2_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1002 = come_decrement_ref_count(real_fun_name_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1003,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value843,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__391,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__391;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1038;
char* __dec_obj210;
char* last_code2_1039;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_1040;
struct sClass* current_stack_frame_struct_1041;
struct sFun* equaler_1042;
void* __right_value844 = (void*)0;
char* real_fun_name_1043;
void* __right_value845 = (void*)0;
struct sType* type2_1044;
struct sClass* klass_1045;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct buffer* source_1046;
char* name_1047;
int i_1050;
void* __right_value848 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1051;
struct tuple2$2char$phsType$ph* it_1052;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1053=0;
struct sType* field_type_1054=0;
char* p_1058;
int sline_1059;
char* sname_1060;
char* head_1061;
struct buffer* source3_1062;
struct buffer* __dec_obj212;
void* __right_value849 = (void*)0;
char* __dec_obj213;
void* __right_value850 = (void*)0;
struct sBlock* block_1063;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sType* result_type_1064;
void* __right_value854 = (void*)0;
char* name_1065;
void* __right_value855 = (void*)0;
struct sType* left_type_1066;
void* __right_value856 = (void*)0;
struct sType* right_type_1067;
struct sType* __list_values7___1069[2];
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct list$1sType$ph* param_types_1068;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
char* __list_values8___1070[2];
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1char$ph* param_names_1071;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1char$ph* param_default_parametors_1072;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sFun* fun2_1073;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sFun* fun_1074;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value874 = (void*)0;
struct sNode* node_1075;
_Bool Value_1076;
void* __right_value875 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c25_1077=0;
char* Err_1078=0;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__392;
    last_code_1038=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1039=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1040=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1041=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1042=((void*)0);
    real_fun_name_1043=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1044=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1044;
    klass_1045=type->mClass;
    if(    type->mPointerNum>0&&!klass_1045->mNumber) {
        source_1046=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3006, "struct buffer*"))));
        buffer_append_char(source_1046,123);
        if(        klass_1045->mProtocol) {
            name_1047="_protocol_obj";
            char source2_1048[1024];
            memset(&source2_1048, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1048,1024,"return !left.%s.equals(right.%s);\n",name_1047,name_1047);
            buffer_append_str(source_1046,source2_1048);
        }
        else {
            char source2_1049[1024];
            memset(&source2_1049, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1049,1024,"return !(");
            buffer_append_str(source_1046,source2_1049);
            i_1050=0;
            klass_1045=((struct sClass*)(__right_value848=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1045->mName)));
            /*c*/ come_call_finalizer3(__right_value848,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1051=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1045->mFields)),it_1052=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1051));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1051));            it_1052=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1051))            ){
                multiple_assign_var41=it_1052;
                name_1053=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1054=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1055[1024];
                memset(&source2_1055, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1055,1024,"left.%s.equals(right.%s)",name_1053,name_1053);
                buffer_append_str(source_1046,source2_1055);
                if(                i_1050==list$1tuple2$2char$phsType$ph$ph_length(klass_1045->mFields)-1) {
                    char source2_1056[1024];
                    memset(&source2_1056, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1056,1024,");");
                    buffer_append_str(source_1046,source2_1056);
                }
                else {
                    char source2_1057[1024];
                    memset(&source2_1057, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1057,1024," && ");
                    buffer_append_str(source_1046,source2_1057);
                }
                i_1050++;
                (name_1053 = come_decrement_ref_count(name_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1054,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1051,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_1046,125);
        p_1058=info->p;
        sline_1059=info->sline;
        sname_1060=(char*)come_increment_ref_count(info->sname);
        head_1061=info->head;
        source3_1062=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1046);
        /*b*/ come_call_finalizer3(__dec_obj212,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1046->buf;
        info->head=source_1046->buf;
        __dec_obj213=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1043));
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1063=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1064=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3063, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1065=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1043));
        left_type_1066=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1066->mHeap=(_Bool)0;
        right_type_1067=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1067->mHeap=(_Bool)0;
        param_types_1068=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___1069[0]=left_type_1066,
__list_values7___1069[1]=right_type_1067,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3069, "struct list$1sType$ph")),2,__list_values7___1069)));
        param_names_1071=(struct list$1char$ph*)come_increment_ref_count((__list_values8___1070[0]=((char*)(__right_value859=__builtin_string("left"))),
__list_values8___1070[1]=((char*)(__right_value860=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3070, "struct list$1char$ph")),2,__list_values8___1070)));
        (__right_value859 = come_decrement_ref_count(__right_value859, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value860 = come_decrement_ref_count(__right_value860, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1072=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3071, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1072,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1072,((void*)0));
        result_type_1064->mStatic=(_Bool)0;
        result_type_1064->mUniq=(_Bool)0;
        result_type_1064->mInline=(_Bool)0;
        result_type_1064->mGenerate=(_Bool)0;
        fun2_1073=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value865=__builtin_string(name_1065)))));
        (__right_value865 = come_decrement_ref_count(__right_value865, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1073==((void*)0)||fun2_1073->mExternal) {
            fun_1074=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3082, "struct sFun*")),(char*)come_increment_ref_count(name_1065),(struct sType*)come_increment_ref_count(result_type_1064),(struct list$1sType$ph*)come_increment_ref_count(param_types_1068),(struct list$1char$ph*)come_increment_ref_count(param_names_1071),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1072),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1063),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1065)),(struct sFun*)come_increment_ref_count(fun_1074));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3090, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value873=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3090, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1074),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1075=(struct sNode*)come_increment_ref_count(_inf_value12);
            /*c*/ come_call_finalizer3(__right_value873,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1076=node_compile(node_1075,info);
            if(            !Value_1076) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value875=err_msg(info,"compiling error")));
                come_exception_var_c25_1077=multiple_assign_var42->v1;
                Err_1078=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1078)?(puts(Err_1078),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value875,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1078 = come_decrement_ref_count(Err_1078, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1042=fun_1074;
            /*c*/ come_call_finalizer3(fun_1074,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1075) ? node_1075 = come_decrement_ref_count(node_1075, ((struct sNode*)node_1075)->finalize, ((struct sNode*)node_1075)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1042=fun2_1073;
        }
        __dec_obj214=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1062);
        /*b*/ come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1058;
        info->head=head_1061;
        info->sline=sline_1059;
        __dec_obj215=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1060);
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1046,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1060 = come_decrement_ref_count(sname_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1062,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1063,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1064,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1065 = come_decrement_ref_count(name_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1066,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1067,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1068,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1071,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1072,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1073,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1041;
    __dec_obj216=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1038);
    __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj217=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1039);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1040;
    __result_obj__392 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value877=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3116, "struct tuple2$2sFun$pchar$ph")),equaler_1042,(char*)come_increment_ref_count(real_fun_name_1043)))));
    (last_code_1038 = come_decrement_ref_count(last_code_1038, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1039 = come_decrement_ref_count(last_code2_1039, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1043 = come_decrement_ref_count(real_fun_name_1043, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1044,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value877,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__392,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__392;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1079;
char* __dec_obj218;
char* last_code2_1080;
char* __dec_obj219;
_Bool comma_instead_of_semicolon_1081;
struct sClass* current_stack_frame_struct_1082;
struct sFun* equaler_1083;
void* __right_value878 = (void*)0;
char* real_fun_name_1084;
void* __right_value879 = (void*)0;
struct sType* type2_1085;
struct sClass* klass_1086;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct buffer* source_1087;
char* name_1088;
void* __right_value882 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1091;
struct tuple2$2char$phsType$ph* it_1092;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1093=0;
struct sType* field_type_1094=0;
char* p_1096;
int sline_1097;
char* sname_1098;
char* head_1099;
struct buffer* source3_1100;
struct buffer* __dec_obj220;
void* __right_value883 = (void*)0;
char* __dec_obj221;
void* __right_value884 = (void*)0;
struct sBlock* block_1101;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sType* result_type_1102;
void* __right_value888 = (void*)0;
char* name_1103;
void* __right_value889 = (void*)0;
struct sType* left_type_1104;
void* __right_value890 = (void*)0;
struct sType* right_type_1105;
struct sType* __list_values9___1107[2];
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct list$1sType$ph* param_types_1106;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
char* __list_values10___1108[2];
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1char$ph* param_names_1109;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1char$ph* param_default_parametors_1110;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sFun* fun2_1111;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sFun* fun_1112;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value908 = (void*)0;
struct sNode* node_1113;
_Bool Value_1114;
void* __right_value909 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c26_1115=0;
char* Err_1116=0;
struct buffer* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__393;
    last_code_1079=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj218=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1080=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj219=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1081=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1082=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1083=((void*)0);
    real_fun_name_1084=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1085=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1085;
    klass_1086=type->mClass;
    if(    type->mPointerNum>0&&!klass_1086->mNumber) {
        source_1087=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3141, "struct buffer*"))));
        buffer_append_char(source_1087,123);
        if(        klass_1086->mProtocol) {
            name_1088="_protocol_obj";
            char source2_1089[1024];
            memset(&source2_1089, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1089,1024,"return left.%s === right.%s;\n",name_1088,name_1088);
            buffer_append_str(source_1087,source2_1089);
        }
        else {
            char source2_1090[1024];
            memset(&source2_1090, 0, sizeof(char)            *(1024)            );
            klass_1086=((struct sClass*)(__right_value882=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1086->mName)));
            /*c*/ come_call_finalizer3(__right_value882,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1091=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1086->mFields)),it_1092=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1091));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1091));            it_1092=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1091))            ){
                multiple_assign_var43=it_1092;
                name_1093=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1094=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1095[1024];
                memset(&source2_1095, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1095,1024,"if(left.%s !== right.%s) { return false; }\n",name_1093,name_1093,name_1093);
                buffer_append_str(source_1087,source2_1095);
                (name_1093 = come_decrement_ref_count(name_1093, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1094,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1091,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_1087,"return true;\n");
        buffer_append_char(source_1087,125);
        p_1096=info->p;
        sline_1097=info->sline;
        sname_1098=(char*)come_increment_ref_count(info->sname);
        head_1099=info->head;
        source3_1100=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj220=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1087);
        /*b*/ come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1087->buf;
        info->head=source_1087->buf;
        __dec_obj221=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1084));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1101=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1102=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3183, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1103=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1084));
        left_type_1104=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1104->mHeap=(_Bool)0;
        right_type_1105=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1105->mHeap=(_Bool)0;
        param_types_1106=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___1107[0]=left_type_1104,
__list_values9___1107[1]=right_type_1105,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3189, "struct list$1sType$ph")),2,__list_values9___1107)));
        param_names_1109=(struct list$1char$ph*)come_increment_ref_count((__list_values10___1108[0]=((char*)(__right_value893=__builtin_string("left"))),
__list_values10___1108[1]=((char*)(__right_value894=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3190, "struct list$1char$ph")),2,__list_values10___1108)));
        (__right_value893 = come_decrement_ref_count(__right_value893, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value894 = come_decrement_ref_count(__right_value894, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1110=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3191, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1110,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1110,((void*)0));
        result_type_1102->mStatic=(_Bool)0;
        result_type_1102->mUniq=(_Bool)0;
        result_type_1102->mInline=(_Bool)0;
        result_type_1102->mGenerate=(_Bool)0;
        fun2_1111=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value899=__builtin_string(name_1103)))));
        (__right_value899 = come_decrement_ref_count(__right_value899, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1111==((void*)0)||fun2_1111->mExternal) {
            fun_1112=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3202, "struct sFun*")),(char*)come_increment_ref_count(name_1103),(struct sType*)come_increment_ref_count(result_type_1102),(struct list$1sType$ph*)come_increment_ref_count(param_types_1106),(struct list$1char$ph*)come_increment_ref_count(param_names_1109),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1110),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1101),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1103)),(struct sFun*)come_increment_ref_count(fun_1112));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3210, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value907=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3210, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1112),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1113=(struct sNode*)come_increment_ref_count(_inf_value13);
            /*c*/ come_call_finalizer3(__right_value907,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1114=node_compile(node_1113,info);
            if(            !Value_1114) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value909=err_msg(info,"compiling error(X)")));
                come_exception_var_c26_1115=multiple_assign_var44->v1;
                Err_1116=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1116)?(puts(Err_1116),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value909,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1116 = come_decrement_ref_count(Err_1116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1083=fun_1112;
            /*c*/ come_call_finalizer3(fun_1112,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1113) ? node_1113 = come_decrement_ref_count(node_1113, ((struct sNode*)node_1113)->finalize, ((struct sNode*)node_1113)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1083=fun2_1111;
        }
        __dec_obj222=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1100);
        /*b*/ come_call_finalizer3(__dec_obj222,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1096;
        info->head=head_1099;
        info->sline=sline_1097;
        __dec_obj223=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1098);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1087,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1098 = come_decrement_ref_count(sname_1098, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1100,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1101,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1102,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1103 = come_decrement_ref_count(name_1103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1104,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1105,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1106,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1109,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1110,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1111,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1082;
    __dec_obj224=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1079);
    __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj225=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1080);
    __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1081;
    __result_obj__393 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value911=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3236, "struct tuple2$2sFun$pchar$ph")),equaler_1083,(char*)come_increment_ref_count(real_fun_name_1084)))));
    (last_code_1079 = come_decrement_ref_count(last_code_1079, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1080 = come_decrement_ref_count(last_code2_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1084 = come_decrement_ref_count(real_fun_name_1084, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1085,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value911,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__393,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__393;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__394;
char* last_code_1117;
char* __dec_obj226;
char* last_code2_1118;
char* __dec_obj227;
_Bool comma_instead_of_semicolon_1119;
struct sClass* current_stack_frame_struct_1120;
struct sFun* cloner_1121;
void* __right_value914 = (void*)0;
char* real_fun_name_1122;
void* __right_value915 = (void*)0;
struct sType* type2_1123;
struct sClass* klass_1124;
char* fun_name2_1125;
void* __right_value916 = (void*)0;
char* none_generics_name_1126;
void* __right_value917 = (void*)0;
struct sType* obj_type_1127;
void* __right_value918 = (void*)0;
char* __dec_obj228;
void* __right_value919 = (void*)0;
char* fun_name3_1128;
void* __right_value920 = (void*)0;
struct sGenericsFun* generics_fun_1129;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1130=0;
_Bool err_1131=0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__395;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
char* __dec_obj229;
void* __right_value927 = (void*)0;
char* __dec_obj230;
int i_1132;
void* __right_value928 = (void*)0;
char* new_fun_name_1133;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
char* __dec_obj231;
void* __right_value931 = (void*)0;
char* __dec_obj232;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct buffer* source_1134;
void* __right_value934 = (void*)0;
char* name_1135;
void* __right_value935 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1137;
struct tuple2$2char$phsType$ph* it_1138;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1139=0;
struct sType* field_type_1140=0;
void* __right_value936 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1143;
struct tuple2$2char$phsType$ph* it_1144;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1145=0;
struct sType* field_type_1146=0;
void* __right_value937 = (void*)0;
char* user_real_fun_name_1150;
void* __right_value938 = (void*)0;
struct sFun* user_cloner_1151;
char* p_1153;
int sline_1154;
char* sname_1155;
struct buffer* source3_1156;
char* head_1157;
struct buffer* __dec_obj233;
void* __right_value939 = (void*)0;
char* __dec_obj234;
void* __right_value940 = (void*)0;
struct sBlock* block_1158;
void* __right_value941 = (void*)0;
struct sType* result_type_1159;
void* __right_value942 = (void*)0;
char* name_1160;
void* __right_value943 = (void*)0;
struct sType* self_type_1161;
struct sType* __list_values11___1163[1];
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct list$1sType$ph* param_types_1162;
void* __right_value946 = (void*)0;
char* __list_values12___1164[1];
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct list$1char$ph* param_names_1165;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct list$1char$ph* param_default_parametors_1166;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sFun* fun2_1167;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sFun* fun_1168;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value960 = (void*)0;
struct sNode* node_1169;
_Bool Value_1170;
void* __right_value961 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c27_1171=0;
char* Err_1172=0;
char* __dec_obj235;
struct buffer* __dec_obj236;
char* __dec_obj237;
char* __dec_obj238;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__396;
fun_name2_1125 = (void*)0;
memset(&i_1132, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__394 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value913=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3242, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        /*c*/ come_call_finalizer3(__right_value913,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__394,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__394;
    }
    last_code_1117=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1118=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1119=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1120=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1121=((void*)0);
    real_fun_name_1122=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1123=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1123;
    klass_1124=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1126=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1127=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj228=fun_name2_1125,
        fun_name2_1125=(char*)come_increment_ref_count(create_method_name(obj_type_1127,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1128=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1126,fun_name));
        generics_fun_1129=((struct sGenericsFun*)(__right_value920=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1128,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value920,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1129) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value922=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1125)),generics_fun_1129,obj_type_1127,info)));
            name_1130=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1131=multiple_assign_var45->v2;
            /*c*/ come_call_finalizer3(__right_value922,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1131) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__395 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value924=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3282, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1130 = come_decrement_ref_count(name_1130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1126 = come_decrement_ref_count(none_generics_name_1126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(obj_type_1127,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name3_1128 = come_decrement_ref_count(fun_name3_1128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1117 = come_decrement_ref_count(last_code_1117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1118 = come_decrement_ref_count(last_code2_1118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1122 = come_decrement_ref_count(real_fun_name_1122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_1123,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_1125 = come_decrement_ref_count(fun_name2_1125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value924,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__395,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__395;
                }
            }
            cloner_1121=((struct sFun*)(__right_value925=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1130)));
            /*c*/ come_call_finalizer3(__right_value925,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1130 = come_decrement_ref_count(name_1130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1121=((struct sFun*)(__right_value926=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1125)));
            /*c*/ come_call_finalizer3(__right_value926,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj229=real_fun_name_1122,
        real_fun_name_1122=(char*)come_increment_ref_count(fun_name2_1125);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (none_generics_name_1126 = come_decrement_ref_count(none_generics_name_1126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1127,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1128 = come_decrement_ref_count(fun_name3_1128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj230=fun_name2_1125,
        fun_name2_1125=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1132=128-1;        i_1132>=1;        i_1132--        ){
            new_fun_name_1133=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1125,i_1132));
            cloner_1121=((struct sFun*)(__right_value929=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1133)));
            /*c*/ come_call_finalizer3(__right_value929,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1121) {
                __dec_obj231=fun_name2_1125,
                fun_name2_1125=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1133));
                __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1133 = come_decrement_ref_count(new_fun_name_1133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1133 = come_decrement_ref_count(new_fun_name_1133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1121==((void*)0)) {
            cloner_1121=((struct sFun*)(__right_value931=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1125)));
            /*c*/ come_call_finalizer3(__right_value931,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj232=real_fun_name_1122,
        real_fun_name_1122=(char*)come_increment_ref_count(fun_name2_1125);
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    cloner_1121==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1134=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3317, "struct buffer*"))));
        buffer_append_str(source_1134,"{\n");
        buffer_append_str(source_1134,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1134,"var result = new %s;\n",((char*)(__right_value934=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value934 = come_decrement_ref_count(__right_value934, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1124->mProtocol) {
            name_1135="_protocol_obj";
            char source2_1136[1024];
            memset(&source2_1136, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1136,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1134,source2_1136);
            klass_1124=((struct sClass*)(__right_value935=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1124->mName)));
            /*c*/ come_call_finalizer3(__right_value935,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1137=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1124->mFields)),it_1138=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1137));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1137));            it_1138=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1137))            ){
                multiple_assign_var46=it_1138;
                name_1139=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1140=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1139,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph_length(field_type_1140->mArrayNum)>0) {
                    char source2_1141[1024];
                    memset(&source2_1141, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1141,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1139,name_1139,name_1139);
                    buffer_append_str(source_1134,source2_1141);
                }
                else {
                    char source2_1142[1024];
                    memset(&source2_1142, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1142,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1139,name_1139);
                    buffer_append_str(source_1134,source2_1142);
                }
                (name_1139 = come_decrement_ref_count(name_1139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1140,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1137,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_1124=((struct sClass*)(__right_value936=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1124->mName)));
            /*c*/ come_call_finalizer3(__right_value936,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1143=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1124->mFields)),it_1144=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1143));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1143));            it_1144=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1143))            ){
                multiple_assign_var47=it_1144;
                name_1145=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1146=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1146->mHeap) {
                    char source2_1147[1024];
                    memset(&source2_1147, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1147,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1145,name_1145,name_1145);
                    buffer_append_str(source_1134,source2_1147);
                }
                else if(                list$1sNode$ph_length(field_type_1146->mArrayNum)>0) {
                    char source2_1148[1024];
                    memset(&source2_1148, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1148,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1145,name_1145,name_1145);
                    buffer_append_str(source_1134,source2_1148);
                }
                else {
                    char source2_1149[1024];
                    memset(&source2_1149, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1149,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1145,name_1145);
                    buffer_append_str(source_1134,source2_1149);
                }
                (name_1145 = come_decrement_ref_count(name_1145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1146,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1143,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        user_real_fun_name_1150=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1151=((struct sFun*)(__right_value938=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1150)));
        /*c*/ come_call_finalizer3(__right_value938,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        user_cloner_1151) {
            char source2_1152[1024];
            memset(&source2_1152, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1152,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1150);
            buffer_append_str(source_1134,source2_1152);
        }
        buffer_append_format(source_1134,"return result;");
        buffer_append_char(source_1134,125);
        p_1153=info->p;
        sline_1154=info->sline;
        sname_1155=(char*)come_increment_ref_count(info->sname);
        source3_1156=(struct buffer*)come_increment_ref_count(info->source);
        head_1157=info->head;
        __dec_obj233=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1134);
        /*b*/ come_call_finalizer3(__dec_obj233,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj234=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1122));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1158=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1159=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1160=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1122));
        self_type_1161=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1161->mHeap=(_Bool)0;
        param_types_1162=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___1163[0]=self_type_1161,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3408, "struct list$1sType$ph")),1,__list_values11___1163)));
        param_names_1165=(struct list$1char$ph*)come_increment_ref_count((__list_values12___1164[0]=((char*)(__right_value946=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3409, "struct list$1char$ph")),1,__list_values12___1164)));
        (__right_value946 = come_decrement_ref_count(__right_value946, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1166=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3410, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1166,((void*)0));
        result_type_1159->mStatic=(_Bool)0;
        result_type_1159->mUniq=(_Bool)0;
        result_type_1159->mInline=(_Bool)0;
        result_type_1159->mGenerate=(_Bool)0;
        fun2_1167=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value951=__builtin_string(name_1160)))));
        (__right_value951 = come_decrement_ref_count(__right_value951, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1167==((void*)0)||fun2_1167->mExternal) {
            fun_1168=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3421, "struct sFun*")),(char*)come_increment_ref_count(name_1160),(struct sType*)come_increment_ref_count(result_type_1159),(struct list$1sType$ph*)come_increment_ref_count(param_types_1162),(struct list$1char$ph*)come_increment_ref_count(param_names_1165),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1166),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1158),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1160)),(struct sFun*)come_increment_ref_count(fun_1168));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3429, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value959=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3429, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1168),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1169=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value959,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1170=node_compile(node_1169,info);
            if(            !Value_1170) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value961=err_msg(info,"compiling error(Y)")));
                come_exception_var_c27_1171=multiple_assign_var48->v1;
                Err_1172=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1172)?(puts(Err_1172),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value961,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1172 = come_decrement_ref_count(Err_1172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1121=fun_1168;
            /*c*/ come_call_finalizer3(fun_1168,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1169) ? node_1169 = come_decrement_ref_count(node_1169, ((struct sNode*)node_1169)->finalize, ((struct sNode*)node_1169)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1121=fun2_1167;
        }
        __dec_obj235=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1155);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1154;
        __dec_obj236=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1156);
        /*b*/ come_call_finalizer3(__dec_obj236,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1153;
        info->head=head_1157;
        info->sline=sline_1154;
        /*c*/ come_call_finalizer3(source_1134,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (user_real_fun_name_1150 = come_decrement_ref_count(user_real_fun_name_1150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1155 = come_decrement_ref_count(sname_1155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1156,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1158,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1159,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1160 = come_decrement_ref_count(name_1160, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1161,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1162,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1165,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1166,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1167,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1120;
    __dec_obj237=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1117);
    __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj238=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1118);
    __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1119;
    __result_obj__396 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value963=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3457, "struct tuple2$2sFun$pchar$ph")),cloner_1121,(char*)come_increment_ref_count(real_fun_name_1122)))));
    (last_code_1117 = come_decrement_ref_count(last_code_1117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1118 = come_decrement_ref_count(last_code2_1118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1122 = come_decrement_ref_count(real_fun_name_1122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1123,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1125 = come_decrement_ref_count(fun_name2_1125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value963,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__396,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__396;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1173;
char* __dec_obj239;
char* last_code2_1174;
char* __dec_obj240;
_Bool comma_instead_of_semicolon_1175;
struct sClass* current_stack_frame_struct_1176;
struct sFun* cloner_1177;
void* __right_value964 = (void*)0;
char* real_fun_name_1178;
void* __right_value965 = (void*)0;
struct sType* type2_1179;
struct sClass* klass_1180;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct buffer* source_1181;
int i_1182;
void* __right_value968 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1183;
struct tuple2$2char$phsType$ph* it_1184;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1185=0;
struct sType* field_type_1186=0;
char* p_1189;
int sline_1190;
char* sname_1191;
struct buffer* source3_1192;
char* head_1193;
struct buffer* __dec_obj241;
void* __right_value969 = (void*)0;
char* __dec_obj242;
void* __right_value970 = (void*)0;
struct sBlock* block_1194;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sType* result_type_1195;
void* __right_value974 = (void*)0;
char* name_1196;
void* __right_value975 = (void*)0;
struct sType* self_type_1197;
struct sType* __list_values13___1199[1];
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct list$1sType$ph* param_types_1198;
void* __right_value978 = (void*)0;
char* __list_values14___1200[1];
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct list$1char$ph* param_names_1201;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct list$1char$ph* param_default_parametors_1202;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sFun* fun2_1203;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sFun* fun_1204;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value992 = (void*)0;
struct sNode* node_1205;
_Bool Value_1206;
void* __right_value993 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c28_1207=0;
char* Err_1208=0;
char* __dec_obj243;
struct buffer* __dec_obj244;
char* __dec_obj245;
char* __dec_obj246;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__397;
    last_code_1173=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj239=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1174=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj240=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1175=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1176=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1177=((void*)0);
    real_fun_name_1178=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1179=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1179;
    klass_1180=type->mClass;
    if(    type->mPointerNum>0&&!klass_1180->mNumber) {
        source_1181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3482, "struct buffer*"))));
        buffer_append_str(source_1181,"{\n");
        buffer_append_str(source_1181,"var result = new buffer();\n");
        buffer_append_format(source_1181,"result.append_str(\"%s {\");\n",klass_1180->mName);
        i_1182=0;
        klass_1180=((struct sClass*)(__right_value968=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1180->mName)));
        /*c*/ come_call_finalizer3(__right_value968,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1183=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1180->mFields)),it_1184=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1183));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1183));        it_1184=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1183))        ){
            multiple_assign_var49=it_1184;
            name_1185=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1186=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1182==list$1tuple2$2char$phsType$ph$ph_length(klass_1180->mFields)-1) {
                char source2_1187[1024];
                memset(&source2_1187, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1187,1024,"result.append_str(\"%s:\");\n",name_1185);
                buffer_append_str(source_1181,source2_1187);
                snprintf(source2_1187,1024,"result.append_str(self.%s.to_string());\n",name_1185);
                buffer_append_str(source_1181,source2_1187);
            }
            else {
                char source2_1188[1024];
                memset(&source2_1188, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1188,1024,"result.append_str(\"%s:\");\n",name_1185);
                buffer_append_str(source_1181,source2_1188);
                snprintf(source2_1188,1024,"result.append_str(self.%s.to_string());\n",name_1185);
                buffer_append_str(source_1181,source2_1188);
                snprintf(source2_1188,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1181,source2_1188);
            }
            i_1182++;
            (name_1185 = come_decrement_ref_count(name_1185, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1186,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1183,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(source_1181,"result.append_str(\"}\");\n");
        buffer_append_format(source_1181,"return result.to_string();\n");
        buffer_append_char(source_1181,125);
        p_1189=info->p;
        sline_1190=info->sline;
        sname_1191=(char*)come_increment_ref_count(info->sname);
        source3_1192=(struct buffer*)come_increment_ref_count(info->source);
        head_1193=info->head;
        __dec_obj241=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1181);
        /*b*/ come_call_finalizer3(__dec_obj241,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj242=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1178));
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1194=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1195=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3543, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1195->mHeap=(_Bool)1;
        name_1196=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1178));
        self_type_1197=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1197->mHeap=(_Bool)0;
        param_types_1198=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___1199[0]=self_type_1197,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3548, "struct list$1sType$ph")),1,__list_values13___1199)));
        param_names_1201=(struct list$1char$ph*)come_increment_ref_count((__list_values14___1200[0]=((char*)(__right_value978=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3549, "struct list$1char$ph")),1,__list_values14___1200)));
        (__right_value978 = come_decrement_ref_count(__right_value978, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1202=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3550, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1202,((void*)0));
        result_type_1195->mStatic=(_Bool)0;
        result_type_1195->mUniq=(_Bool)0;
        result_type_1195->mInline=(_Bool)0;
        result_type_1195->mGenerate=(_Bool)0;
        fun2_1203=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value983=__builtin_string(name_1196)))));
        (__right_value983 = come_decrement_ref_count(__right_value983, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1203==((void*)0)||fun2_1203->mExternal) {
            fun_1204=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3560, "struct sFun*")),(char*)come_increment_ref_count(name_1196),(struct sType*)come_increment_ref_count(result_type_1195),(struct list$1sType$ph*)come_increment_ref_count(param_types_1198),(struct list$1char$ph*)come_increment_ref_count(param_names_1201),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1202),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1194),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1196)),(struct sFun*)come_increment_ref_count(fun_1204));
            cloner_1177=fun_1204;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3570, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value991=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3570, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1204),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1205=(struct sNode*)come_increment_ref_count(_inf_value15);
            /*c*/ come_call_finalizer3(__right_value991,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1206=node_compile(node_1205,info);
            if(            !Value_1206) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value993=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1207=multiple_assign_var50->v1;
                Err_1208=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1208)?(puts(Err_1208),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value993,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1208 = come_decrement_ref_count(Err_1208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1204,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1205) ? node_1205 = come_decrement_ref_count(node_1205, ((struct sNode*)node_1205)->finalize, ((struct sNode*)node_1205)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1177=fun2_1203;
        }
        __dec_obj243=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1191);
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1190;
        __dec_obj244=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1192);
        /*b*/ come_call_finalizer3(__dec_obj244,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1189;
        info->head=head_1193;
        info->sline=sline_1190;
        /*c*/ come_call_finalizer3(source_1181,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1191 = come_decrement_ref_count(sname_1191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1192,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1194,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1195,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1196 = come_decrement_ref_count(name_1196, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1197,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1198,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1201,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1202,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1203,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1176;
    __dec_obj245=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1173);
    __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj246=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1174);
    __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1175;
    __result_obj__397 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value995=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3596, "struct tuple2$2sFun$pchar$ph")),cloner_1177,(char*)come_increment_ref_count(real_fun_name_1178)))));
    (last_code_1173 = come_decrement_ref_count(last_code_1173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1174 = come_decrement_ref_count(last_code2_1174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1178 = come_decrement_ref_count(real_fun_name_1178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1179,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value995,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__397,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__397;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1254;
char* __dec_obj257;
char* last_code2_1255;
char* __dec_obj258;
_Bool comma_instead_of_semicolon_1256;
struct sClass* current_stack_frame_struct_1257;
struct sFun* get_hash_key_fun_1258;
void* __right_value1040 = (void*)0;
char* real_fun_name_1259;
void* __right_value1041 = (void*)0;
struct sType* type2_1260;
struct sClass* klass_1261;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
char* none_generics_name_1262;
void* __right_value1044 = (void*)0;
char* generics_fun_name_1263;
void* __right_value1045 = (void*)0;
struct sGenericsFun* generics_fun_1264;
void* __right_value1046 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1265=0;
_Bool err_1266=0;
void* __right_value1047 = (void*)0;
int i_1267;
void* __right_value1048 = (void*)0;
char* new_fun_name_1268;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
char* __dec_obj259;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct buffer* source_1269;
int i_1270;
void* __right_value1054 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1271;
struct tuple2$2char$phsType$ph* it_1272;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1273=0;
struct sType* field_type_1274=0;
char* p_1276;
int sline_1277;
char* sname_1278;
struct buffer* source3_1279;
char* head_1280;
struct buffer* __dec_obj260;
void* __right_value1055 = (void*)0;
char* __dec_obj261;
void* __right_value1056 = (void*)0;
struct sBlock* block_1281;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct sType* result_type_1282;
void* __right_value1060 = (void*)0;
char* name_1283;
void* __right_value1061 = (void*)0;
struct sType* self_type_1284;
struct sType* __list_values17___1286[1];
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct list$1sType$ph* param_types_1285;
void* __right_value1064 = (void*)0;
char* __list_values18___1287[1];
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct list$1char$ph* param_names_1288;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct list$1char$ph* param_default_parametors_1289;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct sFun* fun2_1290;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct sFun* fun_1291;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1078 = (void*)0;
struct sNode* node_1292;
_Bool Value_1293;
void* __right_value1079 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c30_1294=0;
char* Err_1295=0;
char* __dec_obj262;
struct buffer* __dec_obj263;
char* __dec_obj264;
char* __dec_obj265;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__399;
memset(&i_1267, 0, sizeof(int));
    last_code_1254=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj257=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1255=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj258=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1256=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1257=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1258=((void*)0);
    real_fun_name_1259=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1260=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1260;
    klass_1261=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1258=((struct sFun*)(__right_value1042=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1259)));
        /*c*/ come_call_finalizer3(__right_value1042,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        get_hash_key_fun_1258==((void*)0)) {
            none_generics_name_1262=(char*)come_increment_ref_count(get_none_generics_name(type2_1260->mClass->mName));
            generics_fun_name_1263=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1262,fun_name));
            generics_fun_1264=((struct sGenericsFun*)(__right_value1045=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1263)));
            /*c*/ come_call_finalizer3(__right_value1045,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1264) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1046=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1259),generics_fun_1264,type,info)));
                name_1265=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1266=multiple_assign_var54->v2;
                /*c*/ come_call_finalizer3(__right_value1046,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1266) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1258=((struct sFun*)(__right_value1047=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1265)));
                /*c*/ come_call_finalizer3(__right_value1047,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1265 = come_decrement_ref_count(name_1265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1262 = come_decrement_ref_count(none_generics_name_1262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1263 = come_decrement_ref_count(generics_fun_name_1263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1267=128-1;        i_1267>=1;        i_1267--        ){
            new_fun_name_1268=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1259,i_1267));
            get_hash_key_fun_1258=((struct sFun*)(__right_value1049=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1268)));
            /*c*/ come_call_finalizer3(__right_value1049,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            get_hash_key_fun_1258) {
                __dec_obj259=real_fun_name_1259,
                real_fun_name_1259=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1268));
                __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1268 = come_decrement_ref_count(new_fun_name_1268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1268 = come_decrement_ref_count(new_fun_name_1268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1258==((void*)0)) {
            get_hash_key_fun_1258=((struct sFun*)(__right_value1051=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1259)));
            /*c*/ come_call_finalizer3(__right_value1051,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    get_hash_key_fun_1258==((void*)0)&&type->mPointerNum>0&&!klass_1261->mNumber&&!klass_1261->mProtocol) {
        source_1269=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3859, "struct buffer*"))));
        buffer_append_str(source_1269,"{\n");
        buffer_append_str(source_1269,"unsigned int result = 0;\n");
        i_1270=0;
        klass_1261=((struct sClass*)(__right_value1054=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1261->mName)));
        /*c*/ come_call_finalizer3(__right_value1054,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1271=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1261->mFields)),it_1272=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1271));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1271));        it_1272=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1271))        ){
            multiple_assign_var55=it_1272;
            name_1273=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1274=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1275[1024];
            memset(&source2_1275, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1275,1024,"result += ((int)self.%s).get_hash_key();\n",name_1273);
            buffer_append_str(source_1269,source2_1275);
            i_1270++;
            (name_1273 = come_decrement_ref_count(name_1273, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1274,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1271,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_format(source_1269,"return result;\n");
        buffer_append_char(source_1269,125);
        p_1276=info->p;
        sline_1277=info->sline;
        sname_1278=(char*)come_increment_ref_count(info->sname);
        source3_1279=(struct buffer*)come_increment_ref_count(info->source);
        head_1280=info->head;
        __dec_obj260=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1269);
        /*b*/ come_call_finalizer3(__dec_obj260,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj261=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1259));
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1281=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1282=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3896, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1282->mUnsigned=(_Bool)1;
        name_1283=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1259));
        self_type_1284=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1284->mHeap=(_Bool)0;
        param_types_1285=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___1286[0]=self_type_1284,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3901, "struct list$1sType$ph")),1,__list_values17___1286)));
        param_names_1288=(struct list$1char$ph*)come_increment_ref_count((__list_values18___1287[0]=((char*)(__right_value1064=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3902, "struct list$1char$ph")),1,__list_values18___1287)));
        (__right_value1064 = come_decrement_ref_count(__right_value1064, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1289=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3903, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1289,((void*)0));
        result_type_1282->mStatic=(_Bool)0;
        result_type_1282->mUniq=(_Bool)0;
        result_type_1282->mInline=(_Bool)0;
        result_type_1282->mGenerate=(_Bool)0;
        fun2_1290=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1069=__builtin_string(name_1283)))));
        (__right_value1069 = come_decrement_ref_count(__right_value1069, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1290==((void*)0)||fun2_1290->mExternal) {
            fun_1291=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3913, "struct sFun*")),(char*)come_increment_ref_count(name_1283),(struct sType*)come_increment_ref_count(result_type_1282),(struct list$1sType$ph*)come_increment_ref_count(param_types_1285),(struct list$1char$ph*)come_increment_ref_count(param_names_1288),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1289),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1281),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1283)),(struct sFun*)come_increment_ref_count(fun_1291));
            get_hash_key_fun_1258=fun_1291;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3923, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1077=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3923, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1291),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1292=(struct sNode*)come_increment_ref_count(_inf_value17);
            /*c*/ come_call_finalizer3(__right_value1077,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1293=node_compile(node_1292,info);
            if(            !Value_1293) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1079=err_msg(info,"compiling error(Y)")));
                come_exception_var_c30_1294=multiple_assign_var56->v1;
                Err_1295=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1295)?(puts(Err_1295),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value1079,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1295 = come_decrement_ref_count(Err_1295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1291,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1292) ? node_1292 = come_decrement_ref_count(node_1292, ((struct sNode*)node_1292)->finalize, ((struct sNode*)node_1292)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1258=fun2_1290;
        }
        __dec_obj262=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1278);
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1277;
        __dec_obj263=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1279);
        /*b*/ come_call_finalizer3(__dec_obj263,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1276;
        info->head=head_1280;
        info->sline=sline_1277;
        /*c*/ come_call_finalizer3(source_1269,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1278 = come_decrement_ref_count(sname_1278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1281,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1282,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1283 = come_decrement_ref_count(name_1283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1284,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1285,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1288,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1289,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1290,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1257;
    __dec_obj264=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1254);
    __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj265=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1255);
    __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1256;
    __result_obj__399 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1081=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3949, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_1258,(char*)come_increment_ref_count(real_fun_name_1259)))));
    (last_code_1254 = come_decrement_ref_count(last_code_1254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1255 = come_decrement_ref_count(last_code2_1255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1259 = come_decrement_ref_count(real_fun_name_1259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1260,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value1081,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__399,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__399;
}

