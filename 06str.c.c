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

struct list_item$1void$ph
{
    void* item;
    struct list_item$1void$ph* prev;
    struct list_item$1void$ph* next;
};

struct list$1void$ph
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
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
    struct list$1void$ph* mFields;
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
    struct list$1void$ph* mGenericsTypes;
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
    struct list$1void$ph* mParamTypes;
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
    struct list$1void$ph* mParamTypes;
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
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1void$p
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
};

struct map$2void$phvoid$ph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1void$p* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2void$phvoid$ph* mHeader;
    struct map$2void$phvoid$ph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2void$phvoid$ph* mVars;
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
    struct map$2void$phvoid$ph* funcs;
    struct map$2void$phvoid$ph* generics_funcs;
    struct map$2void$phvoid$ph* classes;
    struct map$2void$phvoid$ph* modules;
    struct map$2void$phvoid$ph* types;
    struct map$2void$phvoid$ph* generics_classes;
    struct map$2void$phvoid$ph* struct_definition;
    struct map$2void$phvoid$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1void$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1void$ph* method_generics_types;
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
    struct map$2void$phvoid$ph* module_params;
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
    struct list$1void$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2void$phvoid$ph* uniq_definition;
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

struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1void$ph* v1;
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

extern struct list$1void$ph* gExceptionRightValueObjects;
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
char* come_get_sname(void* mem);
int come_get_sline(void* mem);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info);
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
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
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
int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, struct sInfo* info);
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
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static void list$1void$ph_finalize(struct list$1void$ph* self);
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
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
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
struct smart_pointer$1char$* __result_obj__85;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__85 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__85,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__85;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__88;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__90;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__90 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__90,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__90;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__92;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__92 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__92,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__92;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__95;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__95 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__95,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__95;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__100;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__100 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__100,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__100;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__102;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__102 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__102,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__102;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_184;
struct list$1char$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_184=0;    i_184<num_value;    i_184++    ){
        list$1char$$p_push_back(self,values[i_184]);
    }
    __result_obj__105 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__105,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__105;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_185;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_186;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_187;
struct list$1char$* __result_obj__104;
    if(    self->len==0) {
        litem_185=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1545, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=((void*)0);
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head=litem_185;
    }
    else if(    self->len==1) {
        litem_186=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1555, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->head;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head->next=litem_186;
    }
    else {
        litem_187=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1565, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=self->tail;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail->next=litem_187;
        self->tail=litem_187;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_188;
struct list_item$1char$* prev_it_189;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer3(prev_it_189,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_190;
struct list$1char$p* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_190=0;    i_190<num_value;    i_190++    ){
        list$1char$p$p_push_back(self,values[i_190]);
    }
    __result_obj__108 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__108,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__108;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_191;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_192;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_193;
struct list$1char$p* __result_obj__107;
    if(    self->len==0) {
        litem_191=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1545, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head=litem_191;
    }
    else if(    self->len==1) {
        litem_192=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1555, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->head;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head->next=litem_192;
    }
    else {
        litem_193=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1565, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=self->tail;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail->next=litem_193;
        self->tail=litem_193;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_194;
struct list_item$1char$p* prev_it_195;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer3(prev_it_195,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_196;
struct list$1short$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_196=0;    i_196<num_value;    i_196++    ){
        list$1short$$p_push_back(self,values[i_196]);
    }
    __result_obj__111 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__111,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__111;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_197;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_198;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_199;
struct list$1short$* __result_obj__110;
    if(    self->len==0) {
        litem_197=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1545, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1) {
        litem_198=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1555, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1565, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_200;
struct list_item$1short$* prev_it_201;
    it_200=self->head;
    while(it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        come_call_finalizer3(prev_it_201,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_202;
struct list$1int$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0;    i_202<num_value;    i_202++    ){
        list$1int$$p_push_back(self,values[i_202]);
    }
    __result_obj__114 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__114,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__114;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_203;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_204;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_205;
struct list$1int$* __result_obj__113;
    if(    self->len==0) {
        litem_203=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1545, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1) {
        litem_204=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1555, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1565, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_206;
struct list_item$1int$* prev_it_207;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        come_call_finalizer3(prev_it_207,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_208;
struct list$1long$* __result_obj__117;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_208=0;    i_208<num_value;    i_208++    ){
        list$1long$$p_push_back(self,values[i_208]);
    }
    __result_obj__117 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__117,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__117;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_209;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_210;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_211;
struct list$1long$* __result_obj__116;
    if(    self->len==0) {
        litem_209=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1545, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_209->prev=((void*)0);
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head=litem_209;
    }
    else if(    self->len==1) {
        litem_210=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1555, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_210->prev=self->head;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail=litem_210;
        self->head->next=litem_210;
    }
    else {
        litem_211=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1565, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=self->tail;
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail->next=litem_211;
        self->tail=litem_211;
    }
    self->len++;
    __result_obj__116 = self;
    return __result_obj__116;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_212;
struct list_item$1long$* prev_it_213;
    it_212=self->head;
    while(it_212!=((void*)0)) {
        prev_it_213=it_212;
        it_212=it_212->next;
        come_call_finalizer3(prev_it_213,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_214;
struct list$1float$* __result_obj__120;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_214=0;    i_214<num_value;    i_214++    ){
        list$1float$$p_push_back(self,values[i_214]);
    }
    __result_obj__120 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__120,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__120;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_215;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_216;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_217;
struct list$1float$* __result_obj__119;
    if(    self->len==0) {
        litem_215=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1545, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_215->prev=((void*)0);
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head=litem_215;
    }
    else if(    self->len==1) {
        litem_216=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1555, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_216->prev=self->head;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head->next=litem_216;
    }
    else {
        litem_217=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1565, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=self->tail;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail->next=litem_217;
        self->tail=litem_217;
    }
    self->len++;
    __result_obj__119 = self;
    return __result_obj__119;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_218;
struct list_item$1float$* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        come_call_finalizer3(prev_it_219,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_220;
struct list$1double$* __result_obj__123;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_220=0;    i_220<num_value;    i_220++    ){
        list$1double$$p_push_back(self,values[i_220]);
    }
    __result_obj__123 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__123,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__123;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_221;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_222;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_223;
struct list$1double$* __result_obj__122;
    if(    self->len==0) {
        litem_221=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1545, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_221->prev=((void*)0);
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail=litem_221;
        self->head=litem_221;
    }
    else if(    self->len==1) {
        litem_222=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1555, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_222->prev=self->head;
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail=litem_222;
        self->head->next=litem_222;
    }
    else {
        litem_223=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1565, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_223->prev=self->tail;
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail->next=litem_223;
        self->tail=litem_223;
    }
    self->len++;
    __result_obj__122 = self;
    return __result_obj__122;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_224;
struct list_item$1double$* prev_it_225;
    it_224=self->head;
    while(it_224!=((void*)0)) {
        prev_it_225=it_224;
        it_224=it_224->next;
        come_call_finalizer3(prev_it_225,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_226;
struct vector$1char$* __result_obj__126;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2362, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_226=0;    i_226<num_value;    i_226++    ){
        vector$1char$$p_add(self,values[i_226]);
    }
    __result_obj__126 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__126,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__126;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_227;
char* items_228;
void* __right_value128 = (void*)0;
int i_229;
struct vector$1char$* __result_obj__125;
memset(&i_229, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_227=self->size*2;
        items_228=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_227)), "./comelang.h", 2489, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_229=0;        i_229<self->size;        i_229++        ){
            self->items[i_229]=items_228[i_229];
        }
        self->size=new_size_227;
        come_free(items_228);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__125 = self;
    return __result_obj__125;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_230;
    if(    0) {
        for(        i_230=0;        i_230<self->len;        i_230++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_231;
struct vector$1char$p* __result_obj__129;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2362, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_231=0;    i_231<num_value;    i_231++    ){
        vector$1char$p$p_add(self,values[i_231]);
    }
    __result_obj__129 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__129,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__129;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_232;
char** items_233;
void* __right_value132 = (void*)0;
int i_234;
struct vector$1char$p* __result_obj__128;
memset(&i_234, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_232=self->size*2;
        items_233=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_232)), "./comelang.h", 2489, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_234=0;        i_234<self->size;        i_234++        ){
            self->items[i_234]=items_233[i_234];
        }
        self->size=new_size_232;
        come_free(items_233);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__128 = self;
    return __result_obj__128;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_235;
    if(    0) {
        for(        i_235=0;        i_235<self->len;        i_235++        ){
            (self->items[i_235] = come_decrement_ref_count2(self->items[i_235], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_236;
struct vector$1short$* __result_obj__132;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2362, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_236=0;    i_236<num_value;    i_236++    ){
        vector$1short$$p_add(self,values[i_236]);
    }
    __result_obj__132 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__132,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__132;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_237;
short* items_238;
void* __right_value136 = (void*)0;
int i_239;
struct vector$1short$* __result_obj__131;
memset(&i_239, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_237=self->size*2;
        items_238=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_237)), "./comelang.h", 2489, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_239=0;        i_239<self->size;        i_239++        ){
            self->items[i_239]=items_238[i_239];
        }
        self->size=new_size_237;
        come_free(items_238);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__131 = self;
    return __result_obj__131;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_240;
    if(    0) {
        for(        i_240=0;        i_240<self->len;        i_240++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_241;
struct vector$1int$* __result_obj__135;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2362, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_241=0;    i_241<num_value;    i_241++    ){
        vector$1int$$p_add(self,values[i_241]);
    }
    __result_obj__135 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__135,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__135;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_242;
int* items_243;
void* __right_value140 = (void*)0;
int i_244;
struct vector$1int$* __result_obj__134;
memset(&i_244, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_242=self->size*2;
        items_243=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_242)), "./comelang.h", 2489, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_244=0;        i_244<self->size;        i_244++        ){
            self->items[i_244]=items_243[i_244];
        }
        self->size=new_size_242;
        come_free(items_243);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_245;
    if(    0) {
        for(        i_245=0;        i_245<self->len;        i_245++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_246;
struct vector$1long$* __result_obj__138;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2362, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_246=0;    i_246<num_value;    i_246++    ){
        vector$1long$$p_add(self,values[i_246]);
    }
    __result_obj__138 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__138,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__138;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_247;
long* items_248;
void* __right_value144 = (void*)0;
int i_249;
struct vector$1long$* __result_obj__137;
memset(&i_249, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_247=self->size*2;
        items_248=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_247)), "./comelang.h", 2489, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_249=0;        i_249<self->size;        i_249++        ){
            self->items[i_249]=items_248[i_249];
        }
        self->size=new_size_247;
        come_free(items_248);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__137 = self;
    return __result_obj__137;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_250;
    if(    0) {
        for(        i_250=0;        i_250<self->len;        i_250++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_251;
struct vector$1float$* __result_obj__141;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2362, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_251=0;    i_251<num_value;    i_251++    ){
        vector$1float$$p_add(self,values[i_251]);
    }
    __result_obj__141 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__141,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__141;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_252;
float* items_253;
void* __right_value148 = (void*)0;
int i_254;
struct vector$1float$* __result_obj__140;
memset(&i_254, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_252=self->size*2;
        items_253=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_252)), "./comelang.h", 2489, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_254=0;        i_254<self->size;        i_254++        ){
            self->items[i_254]=items_253[i_254];
        }
        self->size=new_size_252;
        come_free(items_253);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__140 = self;
    return __result_obj__140;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_255;
    if(    0) {
        for(        i_255=0;        i_255<self->len;        i_255++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_256;
struct vector$1double$* __result_obj__144;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2362, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_256=0;    i_256<num_value;    i_256++    ){
        vector$1double$$p_add(self,values[i_256]);
    }
    __result_obj__144 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__144,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__144;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_257;
double* items_258;
void* __right_value152 = (void*)0;
int i_259;
struct vector$1double$* __result_obj__143;
memset(&i_259, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_257=self->size*2;
        items_258=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_257)), "./comelang.h", 2489, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_259=0;        i_259<self->size;        i_259++        ){
            self->items[i_259]=items_258[i_259];
        }
        self->size=new_size_257;
        come_free(items_258);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__143 = self;
    return __result_obj__143;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_260;
    if(    0) {
        for(        i_260=0;        i_260<self->len;        i_260++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__182;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__182 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__182,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__182;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_294;
struct list_item$1char$ph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_299;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_300;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_301;
char* __dec_obj22;
struct list$1char$ph* __result_obj__184;
    if(    self->len==0) {
        litem_299=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1545, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj20=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1555, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj21=litem_300->item;
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1565, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj22=litem_301->item;
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result_obj__184 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__184;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
char* __dec_obj23;
struct sStrNode* __result_obj__241;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj23=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__241,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__242;
    __result_obj__242 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sStrNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__242 = come_decrement_ref_count2(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_354;
void* __right_value264 = (void*)0;
char* __dec_obj24;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__259;
    come_value_354=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj24=come_value_354->c_value;
    come_value_354->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=come_value_354->type;
    come_value_354->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_354->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_354));
    add_come_last_code(info,"%s",come_value_354->c_value);
    __result_obj__259 = (_Bool)1;
    come_call_finalizer3(come_value_354,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__259;
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
        come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_355;
struct list_item$1void$ph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_357;
struct list_item$1sNode$ph* prev_it_358;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer3(prev_it_358,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__243;
void* __right_value265 = (void*)0;
struct sType* result_366;
void* __right_value266 = (void*)0;
struct sType* __dec_obj25;
void* __right_value267 = (void*)0;
struct sType* __dec_obj26;
void* __right_value275 = (void*)0;
struct list$1void$ph* __dec_obj30;
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
struct list$1void$ph* __dec_obj43;
void* __right_value301 = (void*)0;
struct list$1char$ph* __dec_obj47;
void* __right_value302 = (void*)0;
struct sType* __dec_obj48;
struct sType* __result_obj__257;
    if(    self==(void*)0) {
        __result_obj__243 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__243,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__243;
    }
    result_366=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_366->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj25=result_366->mOriginalLoadVarType;
        result_366->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj26=result_366->mChannelType;
        result_366->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj30=result_366->mGenericsTypes;
        result_366->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj30,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj31=result_366->mNoSolvedGenericsType;
        result_366->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj32=result_366->mAnyOriginalType;
        result_366->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_366->mSizeNum;
        result_366->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj34=result_366->mAlignas;
        result_366->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj35=result_366->mTupleName;
        result_366->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj36=result_366->mAttribute;
        result_366->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_366->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_366->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_366->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_366->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_366->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_366->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_366->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_366->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_366->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_366->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_366->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_366->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_366->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_366->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_366->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_366->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_366->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_366->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_366->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_366->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_366->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_366->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_366->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj37=result_366->mAsmName;
        result_366->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_366->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj41=result_366->mArrayNum;
        result_366->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_366->mOriginalTypeName;
        result_366->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_366->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_366->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj43=result_366->mParamTypes;
        result_366->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj43,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj47=result_366->mParamNames;
        result_366->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj47,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj48=result_366->mResultType;
        result_366->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mVarArgs=self->mVarArgs;
    }
    __result_obj__257 = come_increment_ref_count(result_366);
    come_call_finalizer3(result_366,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__257,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__257;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_359;
    result_359=0;
    result_359+=int_get_hash_key(((int)self->mClass));
    result_359+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_359+=int_get_hash_key(((int)self->mChannelType));
    result_359+=int_get_hash_key(((int)self->mGenericsTypes));
    result_359+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_359+=int_get_hash_key(((int)self->mAnyClass));
    result_359+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_359+=int_get_hash_key(((int)self->mSizeNum));
    result_359+=int_get_hash_key(((int)self->mAlignas));
    result_359+=int_get_hash_key(((int)self->mTupleName));
    result_359+=int_get_hash_key(((int)self->mAttribute));
    result_359+=int_get_hash_key(((int)self->mAllocaValue));
    result_359+=int_get_hash_key(((int)self->mUnsigned));
    result_359+=int_get_hash_key(((int)self->mShort));
    result_359+=int_get_hash_key(((int)self->mLong));
    result_359+=int_get_hash_key(((int)self->mLongLong));
    result_359+=int_get_hash_key(((int)self->mConstant));
    result_359+=int_get_hash_key(((int)self->mAtomic));
    result_359+=int_get_hash_key(((int)self->mRegister));
    result_359+=int_get_hash_key(((int)self->mVolatile));
    result_359+=int_get_hash_key(((int)self->mStatic));
    result_359+=int_get_hash_key(((int)self->mUniq));
    result_359+=int_get_hash_key(((int)self->mRecord));
    result_359+=int_get_hash_key(((int)self->mExtern));
    result_359+=int_get_hash_key(((int)self->mRestrict));
    result_359+=int_get_hash_key(((int)self->mImmutable));
    result_359+=int_get_hash_key(((int)self->mHeap));
    result_359+=int_get_hash_key(((int)self->mChannel));
    result_359+=int_get_hash_key(((int)self->mNoHeap));
    result_359+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_359+=int_get_hash_key(((int)self->mException));
    result_359+=int_get_hash_key(((int)self->mGenerate));
    result_359+=int_get_hash_key(((int)self->mCreateVTable));
    result_359+=int_get_hash_key(((int)self->mDynamic));
    result_359+=int_get_hash_key(((int)self->mInline));
    result_359+=int_get_hash_key(((int)self->mNullValue));
    result_359+=int_get_hash_key(((int)self->mGuardValue));
    result_359+=int_get_hash_key(((int)self->mAsmName));
    result_359+=int_get_hash_key(((int)self->mTypedef));
    result_359+=int_get_hash_key(((int)self->mMultipleTypes));
    result_359+=int_get_hash_key(((int)self->mOriginIsArray));
    result_359+=int_get_hash_key(((int)self->mArrayNum));
    result_359+=int_get_hash_key(((int)self->mPointerNum));
    result_359+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_359+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_359+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_359+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_359+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_359+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_359+=int_get_hash_key(((int)self->mArrayPointerType));
    result_359+=int_get_hash_key(((int)self->mLambdaArray));
    result_359+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_359+=int_get_hash_key(((int)self->mParamTypes));
    result_359+=int_get_hash_key(((int)self->mParamNames));
    result_359+=int_get_hash_key(((int)self->mResultType));
    result_359+=int_get_hash_key(((int)self->mVarArgs));
    return result_359;
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
    if(    !list$1void$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1void$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
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
    if(    !list$1void$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right){
struct list_item$1void$ph* it_360;
struct list_item$1void$ph* it2_361;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_360=left->head;
    it2_361=right->head;
    while(it_360!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_360->item, it2_361->item)) {
            return (_Bool)0;
        }
        it_360=it_360->next;
        it2_361=it2_361->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_362;
struct list_item$1sNode$ph* it2_363;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_362=left->head;
    it2_363=right->head;
    while(it_362!=((void*)0)) {
        if(        !sNode_equals(it_362->item,it2_363->item)) {
            return (_Bool)0;
        }
        it_362=it_362->next;
        it2_363=it2_363->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_364;
struct list_item$1char$ph* it2_365;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_364=left->head;
    it2_365=right->head;
    while(it_364!=((void*)0)) {
        if(        !string_equals(it_364->item,it2_365->item)) {
            return (_Bool)0;
        }
        it_364=it_364->next;
        it2_365=it2_365->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__244;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1void$ph* result_368;
struct list_item$1void$ph* it_369;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1void$ph* __result_obj__247;
    if(    self==((void*)0)) {
        __result_obj__244 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__244,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__244;
    }
    result_368=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1456, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_369=self->head;
    while(it_369!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_368,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_369->item)));
        }
        else {
            list$1void$ph$p_add(result_368,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_369->item)));
        }
        it_369=it_369->next;
    }
    __result_obj__247 = come_increment_ref_count(result_368);
    come_call_finalizer3(result_368,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_367;
    result_367=0;
    result_367+=int_get_hash_key(((int)self->head));
    result_367+=int_get_hash_key(((int)self->tail));
    result_367+=int_get_hash_key(((int)self->len));
    result_367+=int_get_hash_key(((int)self->it));
    return result_367;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__245;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__245 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value270 = (void*)0;
struct list_item$1void$ph* litem_370;
void* __dec_obj27;
void* __right_value271 = (void*)0;
struct list_item$1void$ph* litem_371;
void* __dec_obj28;
void* __right_value272 = (void*)0;
struct list_item$1void$ph* litem_372;
void* __dec_obj29;
struct list$1void$ph* __result_obj__246;
    if(    self->len==0) {
        litem_370=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value270=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1475, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj27=litem_370->item;
        litem_370->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1) {
        litem_371=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value271=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1485, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj28=litem_371->item;
        litem_371->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value272=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1495, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj29=litem_372->item;
        litem_372->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result_obj__246 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__246;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_373;
struct list_item$1void$ph* prev_it_374;
    it_373=self->head;
    while(it_373!=((void*)0)) {
        prev_it_374=it_373;
        it_373=it_373->next;
        come_call_finalizer3(prev_it_374,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__248;
void* __right_value278 = (void*)0;
struct sNode* result_375;
struct sNode* __result_obj__249;
    if(    self==(void*)0) {
        __result_obj__248 = come_increment_ref_count((void*)0);
        ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count2(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__248;
    }
    result_375=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_375->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_375->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_375->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_375->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_375->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_375->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_375->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_375->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_375->kind=self->kind;
    }
    __result_obj__249 = come_increment_ref_count(result_375);
    ((result_375) ? result_375 = come_decrement_ref_count2(result_375, ((struct sNode*)result_375)->finalize, ((struct sNode*)result_375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__249) ? __result_obj__249 = come_decrement_ref_count2(__result_obj__249, ((struct sNode*)__result_obj__249)->finalize, ((struct sNode*)__result_obj__249)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__250;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sNode$ph* result_376;
struct list_item$1sNode$ph* it_377;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1sNode$ph* __result_obj__253;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__250,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_376=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1456, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_377=self->head;
    while(it_377!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_376,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_377->item)));
        }
        else {
            list$1sNode$ph$p_add(result_376,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_377->item)));
        }
        it_377=it_377->next;
    }
    __result_obj__253 = come_increment_ref_count(result_376);
    come_call_finalizer3(result_376,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__251;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__251 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__251,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value286 = (void*)0;
struct list_item$1sNode$ph* litem_378;
struct sNode* __dec_obj38;
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_379;
struct sNode* __dec_obj39;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_380;
struct sNode* __dec_obj40;
struct list$1sNode$ph* __result_obj__252;
    if(    self->len==0) {
        litem_378=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value286=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1475, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj38=litem_378->item;
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1485, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj39=litem_379->item;
        litem_379->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1495, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj40=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result_obj__252 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__252;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_381;
struct list_item$1sNode$ph* prev_it_382;
    it_381=self->head;
    while(it_381!=((void*)0)) {
        prev_it_382=it_381;
        it_381=it_381->next;
        come_call_finalizer3(prev_it_382,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__254;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1char$ph* result_383;
struct list_item$1char$ph* it_384;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1char$ph* __result_obj__256;
    if(    self==((void*)0)) {
        __result_obj__254 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__254,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__254;
    }
    result_383=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1456, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_384=self->head;
    while(it_384!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_383,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_384->item)));
        }
        else {
            list$1char$ph$p_add(result_383,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_384->item)));
        }
        it_384=it_384->next;
    }
    __result_obj__256 = come_increment_ref_count(result_383);
    come_call_finalizer3(result_383,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__256,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__256;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value296 = (void*)0;
struct list_item$1char$ph* litem_385;
char* __dec_obj44;
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_386;
char* __dec_obj45;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_387;
char* __dec_obj46;
struct list$1char$ph* __result_obj__255;
    if(    self->len==0) {
        litem_385=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value296=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1475, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=((void*)0);
        litem_385->next=((void*)0);
        __dec_obj44=litem_385->item;
        litem_385->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_385;
        self->head=litem_385;
    }
    else if(    self->len==1) {
        litem_386=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1485, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=self->head;
        litem_386->next=((void*)0);
        __dec_obj45=litem_386->item;
        litem_386->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_386;
        self->head->next=litem_386;
    }
    else {
        litem_387=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1495, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=self->tail;
        litem_387->next=((void*)0);
        __dec_obj46=litem_387->item;
        litem_387->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_387;
        self->tail=litem_387;
    }
    self->len++;
    __result_obj__255 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_388;
struct list_item$1char$ph* prev_it_389;
    it_388=self->head;
    while(it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        come_call_finalizer3(prev_it_389,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_390;
struct CVALUE* __dec_obj50;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_391;
struct CVALUE* __dec_obj51;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_392;
struct CVALUE* __dec_obj52;
struct list$1CVALUE$ph* __result_obj__258;
    if(    self->len==0) {
        litem_390=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1545, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=((void*)0);
        litem_390->next=((void*)0);
        __dec_obj50=litem_390->item;
        litem_390->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_390;
        self->head=litem_390;
    }
    else if(    self->len==1) {
        litem_391=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1555, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_391->prev=self->head;
        litem_391->next=((void*)0);
        __dec_obj51=litem_391->item;
        litem_391->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_391;
        self->head->next=litem_391;
    }
    else {
        litem_392=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1565, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_392->prev=self->tail;
        litem_392->next=((void*)0);
        __dec_obj52=litem_392->item;
        litem_392->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_392;
        self->tail=litem_392;
    }
    self->len++;
    __result_obj__258 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__258;
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
void* __right_value308 = (void*)0;
struct buffer* __dec_obj53;
struct sBufferNode* __result_obj__260;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value308,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj53=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj53,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result_obj__260 = come_increment_ref_count(self);
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__260,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__260;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__261;
    __result_obj__261 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sBufferNode"))));
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__261 = come_decrement_ref_count2(__result_obj__261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__261;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_393;
unsigned long  int size_394;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct buffer* buf_396;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* type2_397;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* any_type_398;
void* __right_value318 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
char* finalizer_name_399=0;
char* cloner_name_400=0;
char* get_hash_key_name_401=0;
char* equaler_name_402=0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* type2_403;
void* __right_value322 = (void*)0;
char* __dec_obj54;
void* __right_value323 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__262;
    value_393=(struct buffer*)come_increment_ref_count(self->value);
    size_394=self->size;
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_396=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    type2_397=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    type2_397->mPointerNum++;
    any_type_398=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    any_type_398->mPointerNum=1;
    any_type_398->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value318=create_vtable((struct sType*)come_increment_ref_count(any_type_398),info)));
    finalizer_name_399=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_400=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_401=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_402=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    come_call_finalizer3(__right_value318,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_396,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_399,cloner_name_400,get_hash_key_name_401,equaler_name_402,((char*)(__right_value319=buffer_to_string(value_393))),size_394);
    (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_397,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_403=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer*",(_Bool)0,info));
    type2_403->mHeap=(_Bool)1;
    __dec_obj54=come_value_395->c_value;
    come_value_395->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_396));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=come_value_395->type;
    come_value_395->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_403));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_395->var=((void*)0);
    append_object_to_right_values2(come_value_395,(struct sType*)come_increment_ref_count(type2_403),info,(_Bool)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    add_come_last_code(info,"%s",come_value_395->c_value);
    __result_obj__262 = (_Bool)1;
    come_call_finalizer3(value_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_399 = come_decrement_ref_count2(finalizer_name_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_400 = come_decrement_ref_count2(cloner_name_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_401 = come_decrement_ref_count2(get_hash_key_name_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_402 = come_decrement_ref_count2(equaler_name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_403,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__262;
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
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj56;
void* __right_value326 = (void*)0;
struct list$1sNode$ph* __dec_obj57;
struct sSStringNode* __result_obj__263;
    ((struct sNodeBase*)(__right_value324=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value324,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj56=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=self->exps;
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, exps));
    come_call_finalizer3(__dec_obj57,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__263 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__263,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__263;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value327 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = come_increment_ref_count(((char*)(__right_value327=__builtin_string("sSStringNode"))));
    (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count2(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct buffer* buf_405;
struct list$1sNode$ph* o2_saved_406;
struct sNode* it_409;
void* __right_value332 = (void*)0;
struct sNode* obj_412;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_413;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* node_421;
_Bool Value_422;
_Bool __result_obj__276;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sType* type2_424;
void* __right_value349 = (void*)0;
char* __dec_obj65;
void* __right_value350 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__277;
    come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 103, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_405=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 105, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_405,"xsprintf(\"");
    buffer_append_str(buf_405,self->value);
    buffer_append_str(buf_405,"\"");
    if(    list$1sNode$ph$p_length(self->exps)>0) {
        for(        o2_saved_406=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_409=list$1sNode$ph$p_begin((o2_saved_406));        !list$1sNode$ph$p_end((o2_saved_406));        it_409=list$1sNode$ph$p_next((o2_saved_406))        ){
            obj_412=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_409));
            params_413=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 115, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_413,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 116, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_409)))));
            node_421=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_412),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_413),((void*)0),0,((void*)0),info));
            Value_422=node_compile(node_421,info);
            if(            !Value_422) {
                __result_obj__276 = (_Bool)0;
                ((obj_412) ? obj_412 = come_decrement_ref_count2(obj_412, ((struct sNode*)obj_412)->finalize, ((struct sNode*)obj_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_413,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((node_421) ? node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(o2_saved_406,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_405,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__276;
            }
            else {
            }
            come_value_423=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_405,",");
            buffer_append_str(buf_405,come_value_423->c_value);
            ((obj_412) ? obj_412 = come_decrement_ref_count2(obj_412, ((struct sNode*)obj_412)->finalize, ((struct sNode*)obj_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(params_413,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((node_421) ? node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_406,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_405,")");
    type2_424=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 134, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    type2_424->mHeap=(_Bool)1;
    __dec_obj65=come_value_404->c_value;
    come_value_404->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_405));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj66=come_value_404->type;
    come_value_404->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_424));
    come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_404->var=((void*)0);
    append_object_to_right_values2(come_value_404,(struct sType*)come_increment_ref_count(type2_424),info,(_Bool)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
    add_come_last_code(info,"%s",come_value_404->c_value);
    __result_obj__277 = (_Bool)1;
    come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_405,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_424,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__277;
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
struct sNode* result_407;
struct sNode* __result_obj__265;
struct sNode* __result_obj__266;
struct sNode* result_408;
struct sNode* __result_obj__267;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_407,0,sizeof(struct sNode*));
        __result_obj__265 = result_407;
        return __result_obj__265;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__266 = self->it->item;
        return __result_obj__266;
    }
    memset(&result_408,0,sizeof(struct sNode*));
    __result_obj__267 = result_408;
    return __result_obj__267;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_410;
struct sNode* __result_obj__268;
struct sNode* __result_obj__269;
struct sNode* result_411;
struct sNode* __result_obj__270;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_410,0,sizeof(struct sNode*));
        __result_obj__268 = result_410;
        return __result_obj__268;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__269 = self->it->item;
        return __result_obj__269;
    }
    memset(&result_411,0,sizeof(struct sNode*));
    __result_obj__270 = result_411;
    return __result_obj__270;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__271;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__271 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_414;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_415;
    it_414=self->head;
    while(it_414!=((void*)0)) {
        prev_it_415=it_414;
        it_414=it_414->next;
        come_call_finalizer3(prev_it_415,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_416;
struct tuple2$2char$phsNode$ph* __dec_obj58;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_417;
struct tuple2$2char$phsNode$ph* __dec_obj59;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_418;
struct tuple2$2char$phsNode$ph* __dec_obj60;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__272;
    if(    self->len==0) {
        litem_416=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value335=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1475, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=((void*)0);
        litem_416->next=((void*)0);
        __dec_obj58=litem_416->item;
        litem_416->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_416;
        self->head=litem_416;
    }
    else if(    self->len==1) {
        litem_417=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value336=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1485, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_417->prev=self->head;
        litem_417->next=((void*)0);
        __dec_obj59=litem_417->item;
        litem_417->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_417;
        self->head->next=litem_417;
    }
    else {
        litem_418=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value337=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1495, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_418->prev=self->tail;
        litem_418->next=((void*)0);
        __dec_obj60=litem_418->item;
        litem_418->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_418;
        self->tail=litem_418;
    }
    self->len++;
    __result_obj__272 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__272;
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
struct tuple2$2char$phsNode$ph* __result_obj__273;
void* __right_value340 = (void*)0;
struct tuple2$2char$phsNode$ph* result_419;
void* __right_value341 = (void*)0;
char* __dec_obj61;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj62;
struct tuple2$2char$phsNode$ph* __result_obj__274;
    if(    self==(void*)0) {
        __result_obj__273 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__273,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__273;
    }
    result_419=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj61=result_419->v1;
        result_419->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj62=result_419->v2;
        result_419->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__274 = come_increment_ref_count(result_419);
    come_call_finalizer3(result_419,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__274,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__274;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_420;
    result_420=0;
    result_420+=int_get_hash_key(((int)self->v1));
    result_420+=int_get_hash_key(((int)self->v2));
    return result_420;
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
struct tuple2$2char$phsNode$ph* __result_obj__275;
    __dec_obj63=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj64=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__275 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__275,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__275;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value351 = (void*)0;
struct sCharNode* __result_obj__278;
    ((struct sNodeBase*)(__right_value351=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value351,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->value=value;
    __result_obj__278 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__278,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__278;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value352 = (void*)0;
char* __result_obj__279;
    __result_obj__279 = come_increment_ref_count(((char*)(__right_value352=__builtin_string("sCharNode"))));
    (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__279 = come_decrement_ref_count2(__result_obj__279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__279;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value355 = (void*)0;
char* __dec_obj67;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__280;
    come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 167, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj67=come_value_425->c_value;
    come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj68=come_value_425->type;
    come_value_425->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 170, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_425->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
    add_come_last_code(info,"%s",come_value_425->c_value);
    __result_obj__280 = (_Bool)1;
    come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__280;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __right_value358 = (void*)0;
struct sWCharNode* __result_obj__281;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__281 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__281,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__281;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value359 = (void*)0;
char* __result_obj__282;
    __result_obj__282 = come_increment_ref_count(((char*)(__right_value359=__builtin_string("sWCharNode"))));
    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__282 = come_decrement_ref_count2(__result_obj__282, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__282;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_426;
void* __right_value362 = (void*)0;
char* __dec_obj69;
void* __right_value363 = (void*)0;
char* __dec_obj70;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__283;
    come_value_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 198, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj69=come_value_426->c_value;
        come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj70=come_value_426->c_value;
        come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj71=come_value_426->type;
    come_value_426->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 206, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_426->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_426));
    add_come_last_code(info,"%s",come_value_426->c_value);
    __result_obj__283 = (_Bool)1;
    come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__283;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __right_value366 = (void*)0;
unsigned int* __dec_obj72;
struct sWStringNode* __result_obj__284;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value366,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj72=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__284 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__284,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__284;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value367 = (void*)0;
char* __result_obj__285;
    __result_obj__285 = come_increment_ref_count(((char*)(__right_value367=__builtin_string("sWStringNode"))));
    (__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__285 = come_decrement_ref_count2(__result_obj__285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_427;
void* __right_value370 = (void*)0;
char* __dec_obj73;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* __dec_obj74;
_Bool __result_obj__286;
    come_value_427=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 233, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj73=come_value_427->c_value;
    come_value_427->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj74=come_value_427->type;
    come_value_427->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 236, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_427->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_427));
    add_come_last_code(info,"%s",come_value_427->c_value);
    __result_obj__286 = (_Bool)1;
    come_call_finalizer3(come_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__286;
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
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* __dec_obj75;
struct sRegexNode* __result_obj__287;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj75=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__287 = come_increment_ref_count(self);
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    (str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__287,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__287;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value375 = (void*)0;
char* __result_obj__288;
    __result_obj__288 = come_increment_ref_count(((char*)(__right_value375=__builtin_string("sRegexNode"))));
    (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__288 = come_decrement_ref_count2(__result_obj__288, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__288;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value381 = (void*)0;
struct sNode* obj_node_428;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_430;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
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
struct sNode* node_431;
_Bool Value_432;
_Bool __result_obj__291;
_Bool __result_obj__292;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value377=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 265, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_428=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value377,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_430=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 267, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 269, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_428))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 270, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 271, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 272, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_430,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 277, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_431=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_428),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_430),((void*)0),info->sline,((void*)0),info));
    Value_432=node_compile(node_431,info);
    if(    !Value_432) {
        __result_obj__291 = (_Bool)0;
        ((obj_node_428) ? obj_node_428 = come_decrement_ref_count2(obj_node_428, ((struct sNode*)obj_node_428)->finalize, ((struct sNode*)obj_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_430,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_431) ? node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__291;
    }
    else {
    }
    __result_obj__292 = (_Bool)1;
    ((obj_node_428) ? obj_node_428 = come_decrement_ref_count2(obj_node_428, ((struct sNode*)obj_node_428)->finalize, ((struct sNode*)obj_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params_430,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_431) ? node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__292;
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
struct sStrNode* __result_obj__289;
void* __right_value378 = (void*)0;
struct sStrNode* result_429;
void* __right_value379 = (void*)0;
char* __dec_obj76;
void* __right_value380 = (void*)0;
char* __dec_obj77;
struct sStrNode* __result_obj__290;
    if(    self==(void*)0) {
        __result_obj__289 = (void*)0;
        return __result_obj__289;
    }
    result_429=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_429->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj76=result_429->sname;
        result_429->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj77=result_429->value;
        result_429->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__290 = result_429;
    come_call_finalizer3(result_429,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__290;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value420 = (void*)0;
struct list$1sNode$ph* __dec_obj78;
struct sListNode* __result_obj__293;
    ((struct sNodeBase*)(__right_value420=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value420,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj78=self->list_elements;
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj78,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__293 = come_increment_ref_count(self);
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__293,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__293;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value421 = (void*)0;
char* __result_obj__294;
    __result_obj__294 = come_increment_ref_count(((char*)(__right_value421=__builtin_string("sListNode"))));
    (__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__294 = come_decrement_ref_count2(__result_obj__294, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__294;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_433;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUE$ph* params_434;
struct sType* list_element_type_437;
int n_438;
struct list$1sNode$ph* o2_saved_439;
struct sNode* it_440;
void* __right_value424 = (void*)0;
_Bool _if_conditional1;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sNode* value_node_441;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_442;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sNode* exp_443;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj79;
_Bool Value_444;
_Bool __result_obj__296;
_Bool Value_445;
_Bool __result_obj__297;
void* __right_value439 = (void*)0;
struct CVALUE* come_value_446;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_447=0;
char* Err_448=0;
_Bool _if_conditional2;
_Bool __result_obj__298;
void* __right_value442 = (void*)0;
struct sType* __dec_obj80;
void* __right_value443 = (void*)0;
struct sType* type_values_449;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
char* var_name_454;
void* __right_value449 = (void*)0;
struct sVar* var__455;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct buffer* source_456;
int i_457;
struct list$1CVALUE$ph* o2_saved_458;
struct CVALUE* it_461;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* list_type_467;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* obj_type_471;
char* fun_name_472;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_473=0;
struct sGenericsFun* generics_fun_474=0;
char* generics_fun_name_475;
void* __right_value464 = (void*)0;
struct sFun* fun_476;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
char* __dec_obj87;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_2_479=0;
char* Err_480=0;
_Bool _if_conditional3;
_Bool __result_obj__313;
void* __right_value469 = (void*)0;
struct sType* result_type_481;
struct sType* type_482;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct CVALUE* obj_value_483;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct buffer* num_string_484;
void* __right_value474 = (void*)0;
struct sType* type2_485;
void* __right_value475 = (void*)0;
char* type_name_486;
struct sType* any_type_487;
void* __right_value476 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var5 = (void*)0;
char* finalizer_name_488=0;
char* cloner_name_489=0;
char* get_hash_key_name_490=0;
char* equaler_name_491=0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* __dec_obj88;
void* __right_value479 = (void*)0;
struct sType* type3_492;
void* __right_value480 = (void*)0;
struct sType* __dec_obj89;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1CVALUE$ph* come_params_493;
void* __right_value483 = (void*)0;
_Bool _if_conditional4;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct CVALUE* come_value2_497;
void* __right_value487 = (void*)0;
char* __dec_obj90;
struct sType* __dec_obj91;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct CVALUE* come_value3_498;
void* __right_value490 = (void*)0;
char* __dec_obj92;
struct sType* __dec_obj93;
int j_499;
struct list$1CVALUE$ph* o2_saved_500;
struct CVALUE* it_501;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct CVALUE* come_value4_502;
void* __right_value493 = (void*)0;
char* __dec_obj94;
void* __right_value494 = (void*)0;
struct sType* __dec_obj95;
_Bool __result_obj__316;
    list_elements_433=self->list_elements;
    params_434=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 309, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list_element_type_437=((void*)0);
    n_438=0;
    for(    o2_saved_439=(list_elements_433),it_440=list$1sNode$ph$p_begin((o2_saved_439));    !list$1sNode$ph$p_end((o2_saved_439));    it_440=list$1sNode$ph$p_next((o2_saved_439))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value424=it_440->kind(it_440->_protocol_obj))),"sWildCard"))),        (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            value_node_441=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value425=xsprintf("Value"))),info));
            (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_442=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 317, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_442,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 318, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_441))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_442,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 319, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_438,info)))));
            exp_443=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value436=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_441),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_442),((void*)0),0,((void*)0),info));
            (__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj79=exp_443;
            exp_443=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_443,info));
            if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
            Value_444=node_compile(exp_443,info);
            if(            !Value_444) {
                __result_obj__296 = (_Bool)0;
                ((value_node_441) ? value_node_441 = come_decrement_ref_count2(value_node_441, ((struct sNode*)value_node_441)->finalize, ((struct sNode*)value_node_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_442,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((exp_443) ? exp_443 = come_decrement_ref_count2(exp_443, ((struct sNode*)exp_443)->finalize, ((struct sNode*)exp_443)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_434,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__296;
            }
            else {
            }
            ((value_node_441) ? value_node_441 = come_decrement_ref_count2(value_node_441, ((struct sNode*)value_node_441)->finalize, ((struct sNode*)value_node_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(params_442,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((exp_443) ? exp_443 = come_decrement_ref_count2(exp_443, ((struct sNode*)exp_443)->finalize, ((struct sNode*)exp_443)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_445=node_compile(it_440,info);
            if(            !Value_445) {
                __result_obj__297 = (_Bool)0;
                come_call_finalizer3(params_434,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__297;
            }
            else {
            }
        }
        come_value_446=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_437) {
            multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value441=check_assign_type(((char*)(__right_value440=xsprintf("invalid list element type"))),list_element_type_437,come_value_446->type,come_value_446,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_1_447=multiple_assign_var2->v1;
            Err_448=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional2=(Err_448)),            (__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value441,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                __result_obj__298 = (_Bool)1;
                (Err_448 = come_decrement_ref_count2(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_434,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__298;
            }
            else {
            }
            (Err_448 = come_decrement_ref_count2(Err_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(params_434,(struct CVALUE*)come_increment_ref_count(come_value_446));
        __dec_obj80=list_element_type_437;
        list_element_type_437=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_446->type));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_438++;
        come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_449=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_437));
    list$1sNode$ph$p_push_back(type_values_449->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(params_434),info)));
    type_values_449->mHeap=(_Bool)0;
    static int list_value_num_453=0;
    var_name_454=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_453));
    add_variable_to_table(var_name_454,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_449)),info,(_Bool)0);
    var__455=get_variable_from_table(info->lv_table,var_name_454);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value450=make_define_var(type_values_449,var__455->mCValueName,(_Bool)0,info))));
    (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_456=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 362, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_456,"(");
    i_457=0;
    for(    o2_saved_458=(struct list$1CVALUE$ph*)come_increment_ref_count((params_434)),it_461=list$1CVALUE$ph$p_begin((o2_saved_458));    !list$1CVALUE$ph$p_end((o2_saved_458));    it_461=list$1CVALUE$ph$p_next((o2_saved_458))    ){
        if(        list_element_type_437->mHeap) {
            buffer_append_format(source_456,"%s[%d]=%s,\n",var__455->mCValueName,i_457,((struct CVALUE*)(__right_value453=list$1CVALUE$ph$p_operator_load_element(params_434,i_457)))->c_value);
            come_call_finalizer3(__right_value453,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_456,"%s[%d]=%s,\n",var__455->mCValueName,i_457,((struct CVALUE*)(__right_value454=list$1CVALUE$ph$p_operator_load_element(params_434,i_457)))->c_value);
            come_call_finalizer3(__right_value454,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_457++;
    }
    come_call_finalizer3(o2_saved_458,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list_type_467=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"list",(_Bool)0,info));
    list$1void$ph$p_push_back(list_type_467->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value460=come_call_cloner(sType_clone, list_element_type_437))))));
    come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_471=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_467));
    fun_name_472="initialize_with_values";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value463=make_generics_function(obj_type_471,(char*)come_increment_ref_count(__builtin_string(fun_name_472)),info,(_Bool)1)));
    name_473=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_474=multiple_assign_var3->v2;
    come_call_finalizer3(__right_value463,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_475=(char*)come_increment_ref_count(name_473);
    fun_476=((struct sFun*)((void*)(__right_value464=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_475,((void*)0)))));
    come_call_finalizer3(__right_value464,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_476==((void*)0)) {
        __dec_obj87=generics_fun_name_475;
        generics_fun_name_475=(char*)come_increment_ref_count(create_method_name(obj_type_471,(_Bool)0,((char*)(__right_value465=__builtin_string(fun_name_472))),info,(_Bool)1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_476=((struct sFun*)((void*)(__right_value467=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_475,((void*)0)))));
        come_call_finalizer3(__right_value467,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_476==((void*)0)) {
            multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value468=err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_475,info->come_fun->mName)));
            come_exception_var_2_479=multiple_assign_var4->v1;
            Err_480=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            (_if_conditional3=(Err_480)),            come_call_finalizer3(__right_value468,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result_obj__313 = (_Bool)1;
                (Err_480 = come_decrement_ref_count2(Err_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_434,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_values_449,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_454 = come_decrement_ref_count2(var_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_456,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_475 = come_decrement_ref_count2(generics_fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__313;
            }
            else {
            }
            (Err_480 = come_decrement_ref_count2(Err_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_481=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_476->mResultType));
    result_type_481->mStatic=(_Bool)0;
    type_482=list_type_467;
    obj_value_483=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 410, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_484=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 412, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_484,"1");
    type2_485=(struct sType*)come_increment_ref_count(solve_generics(type_482,type_482,info));
    type_name_486=(char*)come_increment_ref_count(make_type_name_string(type2_485,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_487=(struct sType*)come_increment_ref_count(type2_485);
    any_type_487->mPointerNum=1;
    any_type_487->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value476=create_vtable((struct sType*)come_increment_ref_count(any_type_487),info)));
    finalizer_name_488=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_489=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_490=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_491=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    come_call_finalizer3(__right_value476,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj88=obj_value_483->c_value;
    obj_value_483->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_486,type_name_486,((char*)(__right_value477=buffer_to_string(num_string_484))),info->sname,info->sline,type_name_486,finalizer_name_488,cloner_name_489,get_hash_key_name_490,equaler_name_491));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_492=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_485));
    type3_492->mPointerNum++;
    type3_492->mHeap=(_Bool)1;
    type2_485->mHeap=(_Bool)1;
    __dec_obj89=obj_value_483->type;
    obj_value_483->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_485));
    come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_483->type->mPointerNum++;
    obj_value_483->var=((void*)0);
    append_object_to_right_values2(obj_value_483,(struct sType*)come_increment_ref_count(type3_492),info,(_Bool)0);
    come_params_493=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 438, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional4=(((struct sType*)((void*)(__right_value483=list$1void$ph$p_operator_load_element(fun_476->mParamTypes,0))))->mHeap&&obj_value_483->type->mHeap)),    come_call_finalizer3(__right_value483,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)((void*)(__right_value484=list$1void$ph$p_operator_load_element(fun_476->mParamTypes,0)))),obj_value_483->type,obj_value_483,info,(_Bool)1);
        come_call_finalizer3(__right_value484,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_493,(struct CVALUE*)come_increment_ref_count(obj_value_483));
    come_value2_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 445, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj90=come_value2_497->c_value;
    come_value2_497->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph$p_length(params_434)));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=come_value2_497->type;
    come_value2_497->type=((void*)0);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_497->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_493,(struct CVALUE*)come_increment_ref_count(come_value2_497));
    come_value3_498=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 453, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj92=come_value3_498->c_value;
    come_value3_498->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__455->mCValueName));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value3_498->type;
    come_value3_498->type=((void*)0);
    come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_498->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_493,(struct CVALUE*)come_increment_ref_count(come_value3_498));
    buffer_append_str(source_456,generics_fun_name_475);
    buffer_append_str(source_456,"(");
    j_499=0;
    for(    o2_saved_500=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_493)),it_501=list$1CVALUE$ph$p_begin((o2_saved_500));    !list$1CVALUE$ph$p_end((o2_saved_500));    it_501=list$1CVALUE$ph$p_next((o2_saved_500))    ){
        buffer_append_str(source_456,it_501->c_value);
        if(        j_499!=list$1CVALUE$ph$p_length(come_params_493)-1) {
            buffer_append_str(source_456,",");
        }
        j_499++;
    }
    come_call_finalizer3(o2_saved_500,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_456,")");
    buffer_append_str(source_456,")");
    come_value4_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 479, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj94=come_value4_502->c_value;
    come_value4_502->c_value=(char*)come_increment_ref_count(buffer_to_string(source_456));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=come_value4_502->type;
    come_value4_502->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_481));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_502->type->mStatic=(_Bool)0;
    come_value4_502->var=((void*)0);
    if(    result_type_481->mHeap) {
        append_object_to_right_values2(come_value4_502,(struct sType*)come_increment_ref_count(result_type_481),info,(_Bool)0);
    }
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_502));
    add_come_last_code(info,"%s",come_value4_502->c_value);
    __result_obj__316 = (_Bool)1;
    come_call_finalizer3(params_434,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_437,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_454 = come_decrement_ref_count2(var_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_456,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_475 = come_decrement_ref_count2(generics_fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_486 = come_decrement_ref_count2(type_name_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_488 = come_decrement_ref_count2(finalizer_name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_489 = come_decrement_ref_count2(cloner_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_490 = come_decrement_ref_count2(get_hash_key_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_491 = come_decrement_ref_count2(equaler_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_492,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_493,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_498,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__316;
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
struct list$1CVALUE$ph* __result_obj__295;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__295 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__295,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__295;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_435;
struct list_item$1CVALUE$ph* prev_it_436;
    it_435=self->head;
    while(it_435!=((void*)0)) {
        prev_it_436=it_435;
        it_435=it_435->next;
        come_call_finalizer3(prev_it_436,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value444 = (void*)0;
struct list_item$1sNode$ph* litem_450;
struct sNode* __dec_obj81;
void* __right_value445 = (void*)0;
struct list_item$1sNode$ph* litem_451;
struct sNode* __dec_obj82;
void* __right_value446 = (void*)0;
struct list_item$1sNode$ph* litem_452;
struct sNode* __dec_obj83;
struct list$1sNode$ph* __result_obj__299;
    if(    self->len==0) {
        litem_450=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value444=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1545, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_450->prev=((void*)0);
        litem_450->next=((void*)0);
        __dec_obj81=litem_450->item;
        litem_450->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_450;
        self->head=litem_450;
    }
    else if(    self->len==1) {
        litem_451=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value445=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1555, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=self->head;
        litem_451->next=((void*)0);
        __dec_obj82=litem_451->item;
        litem_451->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_451;
        self->head->next=litem_451;
    }
    else {
        litem_452=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value446=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1565, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_452->prev=self->tail;
        litem_452->next=((void*)0);
        __dec_obj83=litem_452->item;
        litem_452->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_452;
        self->tail=litem_452;
    }
    self->len++;
    __result_obj__299 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__299;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_459;
struct CVALUE* __result_obj__300;
struct CVALUE* __result_obj__301;
struct CVALUE* result_460;
struct CVALUE* __result_obj__302;
result_459 = (void*)0;
result_460 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_459,0,sizeof(struct CVALUE*));
        __result_obj__300 = result_459;
        return __result_obj__300;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__301 = self->it->item;
        return __result_obj__301;
    }
    memset(&result_460,0,sizeof(struct CVALUE*));
    __result_obj__302 = result_460;
    return __result_obj__302;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_462;
struct CVALUE* __result_obj__303;
struct CVALUE* __result_obj__304;
struct CVALUE* result_463;
struct CVALUE* __result_obj__305;
result_462 = (void*)0;
result_463 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_462,0,sizeof(struct CVALUE*));
        __result_obj__303 = result_462;
        return __result_obj__303;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__304 = self->it->item;
        return __result_obj__304;
    }
    memset(&result_463,0,sizeof(struct CVALUE*));
    __result_obj__305 = result_463;
    return __result_obj__305;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_464;
int i_465;
struct CVALUE* __result_obj__306;
struct CVALUE* default_value_466;
struct CVALUE* __result_obj__307;
default_value_466 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_464=self->head;
    i_465=0;
    while(it_464!=((void*)0)) {
        if(        position==i_465) {
            __result_obj__306 = come_increment_ref_count(it_464->item);
            come_call_finalizer3(__result_obj__306,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__306;
        }
        it_464=it_464->next;
        i_465++;
    }
    memset(&default_value_466,0,sizeof(struct CVALUE*));
    __result_obj__307 = come_increment_ref_count(default_value_466);
    come_call_finalizer3(default_value_466,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__307,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__307;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value457 = (void*)0;
struct list_item$1void$ph* litem_468;
void* __dec_obj84;
void* __right_value458 = (void*)0;
struct list_item$1void$ph* litem_469;
void* __dec_obj85;
void* __right_value459 = (void*)0;
struct list_item$1void$ph* litem_470;
void* __dec_obj86;
struct list$1void$ph* __result_obj__308;
    if(    self->len==0) {
        litem_468=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value457=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1545, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_468->prev=((void*)0);
        litem_468->next=((void*)0);
        __dec_obj84=litem_468->item;
        litem_468->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_468;
        self->head=litem_468;
    }
    else if(    self->len==1) {
        litem_469=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value458=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1555, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_469->prev=self->head;
        litem_469->next=((void*)0);
        __dec_obj85=litem_469->item;
        litem_469->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_469;
        self->head->next=litem_469;
    }
    else {
        litem_470=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value459=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1565, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_470->prev=self->tail;
        litem_470->next=((void*)0);
        __dec_obj86=litem_470->item;
        litem_470->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_470;
        self->tail=litem_470;
    }
    self->len++;
    __result_obj__308 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__308;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_477;
unsigned int it_478;
void* __result_obj__309;
void* __result_obj__310;
void* __result_obj__311;
void* __result_obj__312;
    hash_477=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_478=hash_477;
    while((_Bool)1) {
        if(        self->item_existance[it_478]) {
            if(            come_call_equals((void*)0, self->keys[it_478], key)) {
                __result_obj__309 = come_increment_ref_count(self->items[it_478]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__309,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__309;
            }
            it_478++;
            if(            it_478>=self->size) {
                it_478=0;
            }
            else if(            it_478==hash_477) {
                __result_obj__310 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__310,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__310;
            }
        }
        else {
            __result_obj__311 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__311,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__311;
        }
    }
    __result_obj__312 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__312,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__312;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_494;
int i_495;
void* __result_obj__314;
void* default_value_496;
void* __result_obj__315;
default_value_496 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_494=self->head;
    i_495=0;
    while(it_494!=((void*)0)) {
        if(        position==i_495) {
            __result_obj__314 = come_increment_ref_count(it_494->item);
            come_call_finalizer3(__result_obj__314,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__314;
        }
        it_494=it_494->next;
        i_495++;
    }
    memset(&default_value_496,0,sizeof(void*));
    __result_obj__315 = come_increment_ref_count(((struct sType*)default_value_496));
    come_call_finalizer3(default_value_496,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__315,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__315;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value495 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj96;
struct sTupleNode* __result_obj__317;
    ((struct sNodeBase*)(__right_value495=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value495,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj96=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj96,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__317 = come_increment_ref_count(self);
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__317,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__317;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value496 = (void*)0;
char* __result_obj__318;
    __result_obj__318 = come_increment_ref_count(((char*)(__right_value496=__builtin_string("sTupleNode"))));
    (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__318 = come_decrement_ref_count2(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__318;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_505;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1void$ph* tuple_types_506;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1CVALUE$ph* tuple_values_507;
int n_508;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_509;
struct tuple2$2char$phsNode$ph* it_512;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* name_515=0;
struct sNode* node_516=0;
void* __right_value501 = (void*)0;
_Bool _if_conditional5;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sNode* value_node_517;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* exp_518;
_Bool Value_519;
_Bool __result_obj__325;
_Bool Value_520;
_Bool __result_obj__326;
void* __right_value506 = (void*)0;
struct CVALUE* come_value_521;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* type_523;
char* __dec_obj101;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* type_524;
struct list$1void$ph* o2_saved_525;
struct sType* it_528;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* obj_value_531;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct buffer* num_string_532;
void* __right_value522 = (void*)0;
struct sType* type2_533;
void* __right_value523 = (void*)0;
char* type_name_534;
struct sType* any_type_535;
void* __right_value524 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var7 = (void*)0;
char* finalizer_name_536=0;
char* cloner_name_537=0;
char* get_hash_key_name_538=0;
char* equaler_name_539=0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* __dec_obj102;
void* __right_value527 = (void*)0;
struct sType* type3_540;
void* __right_value528 = (void*)0;
struct sType* __dec_obj103;
void* __right_value529 = (void*)0;
struct sType* obj_type_541;
char* fun_name_542;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_543=0;
struct sGenericsFun* generics_fun_544=0;
char* generics_fun_name_545;
void* __right_value532 = (void*)0;
struct sFun* fun_546;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
char* __dec_obj104;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_3_547=0;
char* Err_548=0;
_Bool _if_conditional6;
_Bool __result_obj__335;
void* __right_value537 = (void*)0;
struct sType* result_type_549;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct list$1CVALUE$ph* come_params_550;
void* __right_value540 = (void*)0;
_Bool _if_conditional7;
void* __right_value541 = (void*)0;
int i_551;
struct list$1CVALUE$ph* o2_saved_552;
struct CVALUE* it_553;
void* __right_value542 = (void*)0;
struct CVALUE* come_value_554;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
_Bool _if_conditional8;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* buf_555;
int j_556;
struct list$1CVALUE$ph* o2_saved_557;
struct CVALUE* it_558;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* come_value2_559;
void* __right_value550 = (void*)0;
char* __dec_obj105;
void* __right_value551 = (void*)0;
struct sType* __dec_obj106;
_Bool __result_obj__336;
    tuple_elements_505=self->tuple_elements;
    tuple_types_506=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 516, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    tuple_values_507=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 517, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_508=0;
    for(    o2_saved_509=(tuple_elements_505),it_512=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_509));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_509));    it_512=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_509))    ){
        multiple_assign_var6=it_512;
        name_515=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_516=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value501=node_516->kind(node_516->_protocol_obj))),"sWildCard"))),        (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            value_node_517=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value502=xsprintf("Value"))),info));
            (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_518=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_517),(char*)come_increment_ref_count(xsprintf("v%d",n_508+1)),info));
            Value_519=node_compile(exp_518,info);
            if(            !Value_519) {
                __result_obj__325 = (_Bool)0;
                ((value_node_517) ? value_node_517 = come_decrement_ref_count2(value_node_517, ((struct sNode*)value_node_517)->finalize, ((struct sNode*)value_node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_518) ? exp_518 = come_decrement_ref_count2(exp_518, ((struct sNode*)exp_518)->finalize, ((struct sNode*)exp_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (name_515 = come_decrement_ref_count2(name_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_516) ? node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(tuple_types_506,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_507,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__325;
            }
            else {
            }
            ((value_node_517) ? value_node_517 = come_decrement_ref_count2(value_node_517, ((struct sNode*)value_node_517)->finalize, ((struct sNode*)value_node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_518) ? exp_518 = come_decrement_ref_count2(exp_518, ((struct sNode*)exp_518)->finalize, ((struct sNode*)exp_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_520=node_compile(node_516,info);
            if(            !Value_520) {
                __result_obj__326 = (_Bool)0;
                (name_515 = come_decrement_ref_count2(name_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_516) ? node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(tuple_types_506,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_507,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__326;
            }
            else {
            }
        }
        come_value_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_507,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_521)));
        type_523=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_521->type));
        __dec_obj101=type_523->mTupleName;
        type_523->mTupleName=(char*)come_increment_ref_count(name_515);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1void$ph$p_push_back(tuple_types_506,(struct sType*)come_increment_ref_count(type_523));
        n_508++;
        (name_515 = come_decrement_ref_count2(name_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_516) ? node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_524=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 547, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value515=xsprintf("tuple%d",list$1void$ph$p_length(tuple_types_506)))),(_Bool)0,info));
    (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_525=(struct list$1void$ph*)come_increment_ref_count((tuple_types_506)),it_528=((struct sType*)list$1void$ph$p_begin((o2_saved_525)));    !list$1void$ph$p_end((o2_saved_525));    it_528=((struct sType*)list$1void$ph$p_next((o2_saved_525)))    ){
        list$1void$ph$p_push_back(type_524->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value517=come_call_cloner(sType_clone, it_528))))));
        come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_525,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_531=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 553, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_532=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 555, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_532,"1");
    type2_533=(struct sType*)come_increment_ref_count(solve_generics(type_524,type_524,info));
    type_name_534=(char*)come_increment_ref_count(make_type_name_string(type2_533,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_535=(struct sType*)come_increment_ref_count(type2_533);
    any_type_535->mPointerNum=1;
    any_type_535->mHeap=(_Bool)1;
    multiple_assign_var7=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value524=create_vtable((struct sType*)come_increment_ref_count(any_type_535),info)));
    finalizer_name_536=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_537=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_538=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_539=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    come_call_finalizer3(__right_value524,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj102=obj_value_531->c_value;
    obj_value_531->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_534,type_name_534,((char*)(__right_value525=buffer_to_string(num_string_532))),info->sname,info->sline,type_name_534,finalizer_name_536,cloner_name_537,get_hash_key_name_538,equaler_name_539));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_540=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_533));
    type3_540->mPointerNum++;
    type3_540->mHeap=(_Bool)1;
    type2_533->mHeap=(_Bool)1;
    __dec_obj103=obj_value_531->type;
    obj_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_533));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_531->type->mPointerNum++;
    obj_value_531->var=((void*)0);
    append_object_to_right_values2(obj_value_531,(struct sType*)come_increment_ref_count(type3_540),info,(_Bool)0);
    obj_type_541=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_533));
    fun_name_542="initialize";
    multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value531=make_generics_function(obj_type_541,(char*)come_increment_ref_count(__builtin_string(fun_name_542)),info,(_Bool)1)));
    name_543=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_544=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value531,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_545=(char*)come_increment_ref_count(name_543);
    fun_546=((struct sFun*)((void*)(__right_value532=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_545,((void*)0)))));
    come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_546==((void*)0)) {
        __dec_obj104=generics_fun_name_545;
        generics_fun_name_545=(char*)come_increment_ref_count(create_method_name(obj_type_541,(_Bool)0,((char*)(__right_value533=__builtin_string(fun_name_542))),info,(_Bool)1));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_546=((struct sFun*)((void*)(__right_value535=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_545,((void*)0)))));
        come_call_finalizer3(__right_value535,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_546==((void*)0)) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value536=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_545,info->come_fun->mName)));
            come_exception_var_3_547=multiple_assign_var9->v1;
            Err_548=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional6=(Err_548)),            come_call_finalizer3(__right_value536,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__335 = (_Bool)1;
                (Err_548 = come_decrement_ref_count2(Err_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_506,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_507,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_532,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_534 = come_decrement_ref_count2(type_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(any_type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
                (finalizer_name_536 = come_decrement_ref_count2(finalizer_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_537 = come_decrement_ref_count2(cloner_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_538 = come_decrement_ref_count2(get_hash_key_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_539 = come_decrement_ref_count2(equaler_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_543 = come_decrement_ref_count2(name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_545 = come_decrement_ref_count2(generics_fun_name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__335;
            }
            else {
            }
            (Err_548 = come_decrement_ref_count2(Err_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_549=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_546->mResultType));
    result_type_549->mStatic=(_Bool)0;
    come_params_550=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 604, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional7=(((struct sType*)((void*)(__right_value540=list$1void$ph$p_operator_load_element(fun_546->mParamTypes,0))))->mHeap&&obj_value_531->type->mHeap)),    come_call_finalizer3(__right_value540,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional7) {
        std_move(((struct sType*)((void*)(__right_value541=list$1void$ph$p_operator_load_element(fun_546->mParamTypes,0)))),obj_value_531->type,obj_value_531,info,(_Bool)1);
        come_call_finalizer3(__right_value541,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_550,(struct CVALUE*)come_increment_ref_count(obj_value_531));
    i_551=1;
    for(    o2_saved_552=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_507)),it_553=list$1CVALUE$ph$p_begin((o2_saved_552));    !list$1CVALUE$ph$p_end((o2_saved_552));    it_553=list$1CVALUE$ph$p_next((o2_saved_552))    ){
        come_value_554=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_553));
        if(        (_if_conditional8=(((struct sType*)((void*)(__right_value543=list$1void$ph$p_operator_load_element(fun_546->mParamTypes,i_551))))&&((struct sType*)((void*)(__right_value544=list$1void$ph$p_operator_load_element(fun_546->mParamTypes,i_551))))->mHeap&&come_value_554->type->mHeap)),        come_call_finalizer3(__right_value543,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value544,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional8) {
            std_move(((struct sType*)((void*)(__right_value545=list$1void$ph$p_operator_load_element(fun_546->mParamTypes,i_551)))),come_value_554->type,come_value_554,info,(_Bool)1);
            come_call_finalizer3(__right_value545,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_550,(struct CVALUE*)come_increment_ref_count(come_value_554));
        i_551++;
        come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_552,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_555=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 623, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_555,generics_fun_name_545);
    buffer_append_str(buf_555,"(");
    j_556=0;
    for(    o2_saved_557=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_550)),it_558=list$1CVALUE$ph$p_begin((o2_saved_557));    !list$1CVALUE$ph$p_end((o2_saved_557));    it_558=list$1CVALUE$ph$p_next((o2_saved_557))    ){
        buffer_append_str(buf_555,it_558->c_value);
        if(        j_556!=list$1CVALUE$ph$p_length(come_params_550)-1) {
            buffer_append_str(buf_555,",");
        }
        j_556++;
    }
    come_call_finalizer3(o2_saved_557,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_555,")");
    come_value2_559=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 640, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj105=come_value2_559->c_value;
    come_value2_559->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_555));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=come_value2_559->type;
    come_value2_559->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_549));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_559->type->mStatic=(_Bool)0;
    come_value2_559->var=((void*)0);
    if(    result_type_549->mHeap) {
        append_object_to_right_values2(come_value2_559,(struct sType*)come_increment_ref_count(result_type_549),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_559->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_559));
    __result_obj__336 = (_Bool)1;
    come_call_finalizer3(tuple_types_506,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_507,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_532,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_533,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_534 = come_decrement_ref_count2(type_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_536 = come_decrement_ref_count2(finalizer_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_537 = come_decrement_ref_count2(cloner_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_538 = come_decrement_ref_count2(get_hash_key_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_539 = come_decrement_ref_count2(equaler_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_540,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_543 = come_decrement_ref_count2(name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_545 = come_decrement_ref_count2(generics_fun_name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_550,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__336;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_503;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_504;
    it_503=self->head;
    while(it_503!=((void*)0)) {
        prev_it_504=it_503;
        it_503=it_503->next;
        come_call_finalizer3(prev_it_504,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2char$phsNode$ph* result_510;
struct tuple2$2char$phsNode$ph* __result_obj__319;
struct tuple2$2char$phsNode$ph* __result_obj__320;
struct tuple2$2char$phsNode$ph* result_511;
struct tuple2$2char$phsNode$ph* __result_obj__321;
result_510 = (void*)0;
result_511 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_510,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__319 = result_510;
        return __result_obj__319;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__320 = self->it->item;
        return __result_obj__320;
    }
    memset(&result_511,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__321 = result_511;
    return __result_obj__321;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_513;
struct tuple2$2char$phsNode$ph* __result_obj__322;
struct tuple2$2char$phsNode$ph* __result_obj__323;
struct tuple2$2char$phsNode$ph* result_514;
struct tuple2$2char$phsNode$ph* __result_obj__324;
result_513 = (void*)0;
result_514 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_513,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__322 = result_513;
        return __result_obj__322;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__323 = self->it->item;
        return __result_obj__323;
    }
    memset(&result_514,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__324 = result_514;
    return __result_obj__324;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__327;
void* __right_value507 = (void*)0;
struct CVALUE* result_522;
void* __right_value508 = (void*)0;
char* __dec_obj97;
void* __right_value509 = (void*)0;
struct sType* __dec_obj98;
void* __right_value510 = (void*)0;
char* __dec_obj99;
void* __right_value511 = (void*)0;
char* __dec_obj100;
struct CVALUE* __result_obj__328;
    if(    self==(void*)0) {
        __result_obj__327 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__327,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__327;
    }
    result_522=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj97=result_522->c_value;
        result_522->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj98=result_522->type;
        result_522->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_522->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_522->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj99=result_522->c_value_without_right_value_objects;
        result_522->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj100=result_522->c_value_without_cast_object_value;
        result_522->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__328 = come_increment_ref_count(result_522);
    come_call_finalizer3(result_522,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__328,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__328;
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_526;
void* __result_obj__329;
void* __result_obj__330;
void* result_527;
void* __result_obj__331;
result_526 = (void*)0;
result_527 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_526,0,sizeof(void*));
        __result_obj__329 = result_526;
        return __result_obj__329;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__330 = self->it->item;
        return __result_obj__330;
    }
    memset(&result_527,0,sizeof(void*));
    __result_obj__331 = result_527;
    return __result_obj__331;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_529;
void* __result_obj__332;
void* __result_obj__333;
void* result_530;
void* __result_obj__334;
result_529 = (void*)0;
result_530 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_529,0,sizeof(void*));
        __result_obj__332 = result_529;
        return __result_obj__332;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__333 = self->it->item;
        return __result_obj__333;
    }
    memset(&result_530,0,sizeof(void*));
    __result_obj__334 = result_530;
    return __result_obj__334;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value552 = (void*)0;
struct list$1sNode$ph* __dec_obj107;
struct sSomeNode* __result_obj__337;
    ((struct sNodeBase*)(__right_value552=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value552,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj107=self->tuple_elements;
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj107,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__337 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__337,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__337;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __right_value553 = (void*)0;
char* __result_obj__338;
    __result_obj__338 = come_increment_ref_count(((char*)(__right_value553=__builtin_string("sSomeNode"))));
    (__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__338 = come_decrement_ref_count2(__result_obj__338, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__338;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_560;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1void$ph* tuple_types_561;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1CVALUE$ph* tuple_values_562;
struct list$1sNode$ph* o2_saved_563;
struct sNode* it_564;
_Bool Value_565;
_Bool __result_obj__339;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_566;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* type_567;
struct list$1void$ph* o2_saved_568;
struct sType* it_569;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct CVALUE* obj_value_570;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct buffer* num_string_571;
void* __right_value569 = (void*)0;
struct sType* type2_572;
void* __right_value570 = (void*)0;
char* type_name_573;
void* __right_value571 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var10 = (void*)0;
char* finalizer_name_574=0;
char* cloner_name_575=0;
char* get_hash_key_name_576=0;
char* equaler_name_577=0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
char* __dec_obj108;
void* __right_value574 = (void*)0;
struct sType* type3_578;
void* __right_value575 = (void*)0;
struct sType* __dec_obj109;
void* __right_value576 = (void*)0;
struct sType* obj_type_579;
char* fun_name_580;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var11 = (void*)0;
char* name_581=0;
struct sGenericsFun* generics_fun_582=0;
char* generics_fun_name_583;
void* __right_value579 = (void*)0;
struct sFun* fun_584;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
char* __dec_obj110;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_4_585=0;
char* Err_586=0;
_Bool _if_conditional9;
_Bool __result_obj__340;
void* __right_value584 = (void*)0;
struct sType* result_type_587;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1CVALUE$ph* come_params_588;
void* __right_value587 = (void*)0;
_Bool _if_conditional10;
void* __right_value588 = (void*)0;
int i_589;
struct list$1CVALUE$ph* o2_saved_590;
struct CVALUE* it_591;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_592;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
_Bool _if_conditional11;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* buf_593;
int j_594;
struct list$1CVALUE$ph* o2_saved_595;
struct CVALUE* it_596;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct CVALUE* come_value2_597;
void* __right_value597 = (void*)0;
char* __dec_obj111;
void* __right_value598 = (void*)0;
struct sType* __dec_obj112;
_Bool __result_obj__341;
    tuple_elements_560=self->tuple_elements;
    tuple_types_561=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 677, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    tuple_values_562=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 678, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_563=(tuple_elements_560),it_564=list$1sNode$ph$p_begin((o2_saved_563));    !list$1sNode$ph$p_end((o2_saved_563));    it_564=list$1sNode$ph$p_next((o2_saved_563))    ){
        Value_565=node_compile(it_564,info);
        if(        !Value_565) {
            __result_obj__339 = (_Bool)0;
            come_call_finalizer3(tuple_types_561,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_562,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__339;
        }
        else {
        }
        come_value_566=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_562,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_566)));
        list$1void$ph$p_push_back(tuple_types_561,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_566->type)));
        come_call_finalizer3(come_value_566,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_567=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 692, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value562=xsprintf("tuple%d",list$1void$ph$p_length(tuple_types_561)))),(_Bool)0,info));
    (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_568=(struct list$1void$ph*)come_increment_ref_count((tuple_types_561)),it_569=((struct sType*)list$1void$ph$p_begin((o2_saved_568)));    !list$1void$ph$p_end((o2_saved_568));    it_569=((struct sType*)list$1void$ph$p_next((o2_saved_568)))    ){
        list$1void$ph$p_push_back(type_567->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value564=come_call_cloner(sType_clone, it_569))))));
        come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_570=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 698, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_571=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 700, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_571,"1");
    type2_572=(struct sType*)come_increment_ref_count(solve_generics(type_567,type_567,info));
    type_name_573=(char*)come_increment_ref_count(make_type_name_string(type2_572,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var10=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value571=create_vtable((struct sType*)come_increment_ref_count(type2_572),info)));
    finalizer_name_574=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    cloner_name_575=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    get_hash_key_name_576=(char*)come_increment_ref_count(multiple_assign_var10->v3);
    equaler_name_577=(char*)come_increment_ref_count(multiple_assign_var10->v4);
    come_call_finalizer3(__right_value571,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj108=obj_value_570->c_value;
    obj_value_570->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_573,type_name_573,((char*)(__right_value572=buffer_to_string(num_string_571))),info->sname,info->sline,type_name_573));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_578=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_572));
    type3_578->mPointerNum++;
    type3_578->mHeap=(_Bool)1;
    type2_572->mHeap=(_Bool)1;
    __dec_obj109=obj_value_570->type;
    obj_value_570->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_572));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_570->type->mPointerNum++;
    obj_value_570->var=((void*)0);
    append_object_to_right_values2(obj_value_570,(struct sType*)come_increment_ref_count(type3_578),info,(_Bool)0);
    obj_type_579=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_572));
    fun_name_580="initialize";
    multiple_assign_var11=((struct tuple2$2char$phsGenericsFun$p*)(__right_value578=make_generics_function(obj_type_579,(char*)come_increment_ref_count(__builtin_string(fun_name_580)),info,(_Bool)1)));
    name_581=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_582=multiple_assign_var11->v2;
    come_call_finalizer3(__right_value578,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_583=(char*)come_increment_ref_count(name_581);
    fun_584=((struct sFun*)((void*)(__right_value579=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_583,((void*)0)))));
    come_call_finalizer3(__right_value579,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_584==((void*)0)) {
        __dec_obj110=generics_fun_name_583;
        generics_fun_name_583=(char*)come_increment_ref_count(create_method_name(obj_type_579,(_Bool)0,((char*)(__right_value580=__builtin_string(fun_name_580))),info,(_Bool)1));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_584=((struct sFun*)((void*)(__right_value582=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_583,((void*)0)))));
        come_call_finalizer3(__right_value582,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_584==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value583=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_583,info->come_fun->mName)));
            come_exception_var_4_585=multiple_assign_var12->v1;
            Err_586=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional9=(Err_586)),            come_call_finalizer3(__right_value583,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result_obj__340 = (_Bool)1;
                (Err_586 = come_decrement_ref_count2(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_561,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_562,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_571,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_573 = come_decrement_ref_count2(type_name_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_574 = come_decrement_ref_count2(finalizer_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_575 = come_decrement_ref_count2(cloner_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_576 = come_decrement_ref_count2(get_hash_key_name_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_577 = come_decrement_ref_count2(equaler_name_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_578,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_581 = come_decrement_ref_count2(name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_583 = come_decrement_ref_count2(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__340;
            }
            else {
            }
            (Err_586 = come_decrement_ref_count2(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_587=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_584->mResultType));
    result_type_587->mStatic=(_Bool)0;
    come_params_588=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 745, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional10=(((struct sType*)((void*)(__right_value587=list$1void$ph$p_operator_load_element(fun_584->mParamTypes,0))))->mHeap&&obj_value_570->type->mHeap)),    come_call_finalizer3(__right_value587,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)((void*)(__right_value588=list$1void$ph$p_operator_load_element(fun_584->mParamTypes,0)))),obj_value_570->type,obj_value_570,info,(_Bool)1);
        come_call_finalizer3(__right_value588,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_588,(struct CVALUE*)come_increment_ref_count(obj_value_570));
    i_589=1;
    for(    o2_saved_590=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_562)),it_591=list$1CVALUE$ph$p_begin((o2_saved_590));    !list$1CVALUE$ph$p_end((o2_saved_590));    it_591=list$1CVALUE$ph$p_next((o2_saved_590))    ){
        come_value_592=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_591));
        if(        (_if_conditional11=(((struct sType*)((void*)(__right_value590=list$1void$ph$p_operator_load_element(fun_584->mParamTypes,i_589))))&&((struct sType*)((void*)(__right_value591=list$1void$ph$p_operator_load_element(fun_584->mParamTypes,i_589))))->mHeap&&come_value_592->type->mHeap)),        come_call_finalizer3(__right_value590,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value591,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)((void*)(__right_value592=list$1void$ph$p_operator_load_element(fun_584->mParamTypes,i_589)))),come_value_592->type,come_value_592,info,(_Bool)1);
            come_call_finalizer3(__right_value592,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_588,(struct CVALUE*)come_increment_ref_count(come_value_592));
        i_589++;
        come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_590,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_593=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 764, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_593,generics_fun_name_583);
    buffer_append_str(buf_593,"(");
    j_594=0;
    for(    o2_saved_595=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_588)),it_596=list$1CVALUE$ph$p_begin((o2_saved_595));    !list$1CVALUE$ph$p_end((o2_saved_595));    it_596=list$1CVALUE$ph$p_next((o2_saved_595))    ){
        buffer_append_str(buf_593,it_596->c_value);
        if(        j_594!=list$1CVALUE$ph$p_length(come_params_588)-1) {
            buffer_append_str(buf_593,",");
        }
        j_594++;
    }
    come_call_finalizer3(o2_saved_595,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_593,")");
    come_value2_597=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 781, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj111=come_value2_597->c_value;
    come_value2_597->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_593));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=come_value2_597->type;
    come_value2_597->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_587));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_597->type->mStatic=(_Bool)0;
    come_value2_597->var=((void*)0);
    if(    result_type_587->mHeap) {
        append_object_to_right_values2(come_value2_597,(struct sType*)come_increment_ref_count(result_type_587),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_597->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_597));
    __result_obj__341 = (_Bool)1;
    come_call_finalizer3(tuple_types_561,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_562,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_567,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_571,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_572,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_573 = come_decrement_ref_count2(type_name_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_574 = come_decrement_ref_count2(finalizer_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_575 = come_decrement_ref_count2(cloner_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_576 = come_decrement_ref_count2(get_hash_key_name_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_577 = come_decrement_ref_count2(equaler_name_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_578,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_581 = come_decrement_ref_count2(name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_583 = come_decrement_ref_count2(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_588,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_593,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_597,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__341;
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
void* __right_value599 = (void*)0;
struct sNullReturnValue* __result_obj__342;
    ((struct sNodeBase*)(__right_value599=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value599,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__342 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__342,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__342;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __right_value600 = (void*)0;
char* __result_obj__343;
    __result_obj__343 = come_increment_ref_count(((char*)(__right_value600=__builtin_string("sNullReturnValue"))));
    (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__343 = come_decrement_ref_count2(__result_obj__343, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__343;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct CVALUE* come_value_598;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct buffer* buf_599;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
char* var_name_601;
void* __right_value607 = (void*)0;
struct sType* result_type_602;
void* __right_value608 = (void*)0;
struct sType* result_type2_603;
struct sType* left_type_604;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct CVALUE* come_value2_605;
char* __dec_obj113;
struct sType* __dec_obj114;
    if(    info->come_fun) {
        come_value_598=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 816, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 818, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_600=0;
        num_600++;
        var_name_601=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value605=int_to_string(num_600)))));
        (__right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_603=(struct sType*)come_increment_ref_count(solve_generics(result_type_602,info->generics_type,info));
        left_type_604=(struct sType*)come_increment_ref_count(result_type2_603);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value609=make_define_var(left_type_604,var_name_601,(_Bool)0,info))));
        (__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_601,((char*)(__right_value610=make_type_name_string(left_type_604,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_605=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 834, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj113=come_value2_605->c_value;
        come_value2_605->c_value=(char*)come_increment_ref_count(var_name_601);
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=come_value2_605->type;
        come_value2_605->type=(struct sType*)come_increment_ref_count(result_type2_603);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_605->type->mStatic=(_Bool)0;
        come_value2_605->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_605));
        come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_603,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_605,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value617 = (void*)0;
struct sNode* __result_obj__346;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 851, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value614=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 851, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result_obj__346 = come_increment_ref_count(((struct sNode*)(__right_value617=_inf_value2)));
    come_call_finalizer3(__right_value614,sNullReturnValue_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value617) ? __right_value617 = come_decrement_ref_count2(__right_value617, ((struct sNode*)__right_value617)->finalize, ((struct sNode*)__right_value617)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count2(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__346;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
struct sNullReturnValue* __result_obj__344;
void* __right_value615 = (void*)0;
struct sNullReturnValue* result_606;
void* __right_value616 = (void*)0;
char* __dec_obj115;
struct sNullReturnValue* __result_obj__345;
    if(    self==(void*)0) {
        __result_obj__344 = (void*)0;
        return __result_obj__344;
    }
    result_606=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_606->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_606->sname;
        result_606->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_606->sline_real=self->sline_real;
    }
    __result_obj__345 = result_606;
    come_call_finalizer3(result_606,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__345;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value618 = (void*)0;
struct sNullReturnValueOfException* __result_obj__347;
    ((struct sNodeBase*)(__right_value618=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value618,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__347 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__347,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__347;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __right_value619 = (void*)0;
char* __result_obj__348;
    __result_obj__348 = come_increment_ref_count(((char*)(__right_value619=__builtin_string("sNullReturnValue"))));
    (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__348 = come_decrement_ref_count2(__result_obj__348, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__348;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct CVALUE* come_value_607;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct buffer* buf_608;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* var_name_610;
void* __right_value626 = (void*)0;
struct sType* result_type_611;
void* __right_value627 = (void*)0;
struct sType* result_type2_612;
struct sType* __dec_obj116;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sType* left_type_613;
void* __right_value630 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_5_614=0;
char* Err_615=0;
_Bool _if_conditional12;
_Bool __result_obj__349;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct CVALUE* come_value2_616;
char* __dec_obj117;
struct sType* __dec_obj118;
    if(    info->come_fun) {
        come_value_607=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 869, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_608=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 871, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_609=0;
        num_609++;
        var_name_610=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value624=int_to_string(num_609)))));
        (__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_611=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_612=(struct sType*)come_increment_ref_count(solve_generics(result_type_611,info->generics_type,info));
        if(        result_type2_612->mNoSolvedGenericsType) {
            __dec_obj116=result_type2_612;
            result_type2_612=(struct sType*)come_increment_ref_count(result_type2_612->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_613=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value628=list$1void$ph$p_operator_load_element(result_type2_612->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value628,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        left_type_613==((void*)0)||string_operator_not_equals(result_type2_612->mClass->mName,"tuple2")) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value630=err_msg(info,"function is not exception type")));
            come_exception_var_5_614=multiple_assign_var13->v1;
            Err_615=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            (_if_conditional12=(Err_615)),            come_call_finalizer3(__right_value630,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                __result_obj__349 = (_Bool)1;
                (Err_615 = come_decrement_ref_count2(Err_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_610 = come_decrement_ref_count2(var_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_612,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__349;
            }
            else {
            }
            (Err_615 = come_decrement_ref_count2(Err_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value631=make_define_var(left_type_613,var_name_610,(_Bool)0,info))));
        (__right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_610,((char*)(__right_value632=make_type_name_string(left_type_613,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_616=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 897, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj117=come_value2_616->c_value;
        come_value2_616->c_value=(char*)come_increment_ref_count(var_name_610);
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj118=come_value2_616->type;
        come_value2_616->type=(struct sType*)come_increment_ref_count(left_type_613);
        come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_616->type->mStatic=(_Bool)0;
        come_value2_616->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_616));
        come_call_finalizer3(come_value_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_610 = come_decrement_ref_count2(var_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_616,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value639 = (void*)0;
struct sNode* __result_obj__352;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 914, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value636=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 914, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result_obj__352 = come_increment_ref_count(((struct sNode*)(__right_value639=_inf_value3)));
    come_call_finalizer3(__right_value636,sNullReturnValueOfException_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value639) ? __right_value639 = come_decrement_ref_count2(__right_value639, ((struct sNode*)__right_value639)->finalize, ((struct sNode*)__right_value639)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count2(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__352;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
struct sNullReturnValueOfException* __result_obj__350;
void* __right_value637 = (void*)0;
struct sNullReturnValueOfException* result_617;
void* __right_value638 = (void*)0;
char* __dec_obj119;
struct sNullReturnValueOfException* __result_obj__351;
    if(    self==(void*)0) {
        __result_obj__350 = (void*)0;
        return __result_obj__350;
    }
    result_617=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_617->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_617->sname;
        result_617->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_617->sline_real=self->sline_real;
    }
    __result_obj__351 = result_617;
    come_call_finalizer3(result_617,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__351;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __right_value640 = (void*)0;
struct sType* __dec_obj120;
struct sNullValue* __result_obj__353;
    ((struct sNodeBase*)(__right_value640=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value640,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj120=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__353 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__353,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__353;
}

char* sNullValue_kind(struct sNullValue* self){
void* __right_value641 = (void*)0;
char* __result_obj__354;
    __result_obj__354 = come_increment_ref_count(((char*)(__right_value641=__builtin_string("sNullValue"))));
    (__right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__354 = come_decrement_ref_count2(__result_obj__354, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__354;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value_618;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct buffer* buf_619;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
char* var_name_621;
struct sType* left_type_622;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct CVALUE* come_value2_623;
char* __dec_obj121;
struct sType* __dec_obj122;
_Bool __result_obj__355;
    come_value_618=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 933, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_619=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 935, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    static int num_620=0;
    num_620++;
    var_name_621=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value646=int_to_string(num_620)))));
    (__right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_622=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value648=make_define_var(left_type_622,var_name_621,(_Bool)0,info))));
    (__right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_621,((char*)(__right_value649=make_type_name_string(left_type_622,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_623=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 947, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj121=come_value2_623->c_value;
    come_value2_623->c_value=(char*)come_increment_ref_count(var_name_621);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=come_value2_623->type;
    come_value2_623->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_623->type->mStatic=(_Bool)0;
    come_value2_623->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_623));
    __result_obj__355 = (_Bool)1;
    come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_619,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_621 = come_decrement_ref_count2(var_name_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__355;
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
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value657 = (void*)0;
struct sNode* __result_obj__358;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 963, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value653=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 963, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result_obj__358 = come_increment_ref_count(((struct sNode*)(__right_value657=_inf_value4)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value653,sNullValue_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value657) ? __right_value657 = come_decrement_ref_count2(__right_value657, ((struct sNode*)__right_value657)->finalize, ((struct sNode*)__right_value657)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__358) ? __result_obj__358 = come_decrement_ref_count2(__result_obj__358, ((struct sNode*)__result_obj__358)->finalize, ((struct sNode*)__result_obj__358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__358;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
struct sNullValue* __result_obj__356;
void* __right_value654 = (void*)0;
struct sNullValue* result_624;
void* __right_value655 = (void*)0;
char* __dec_obj123;
void* __right_value656 = (void*)0;
struct sType* __dec_obj124;
struct sNullValue* __result_obj__357;
    if(    self==(void*)0) {
        __result_obj__356 = (void*)0;
        return __result_obj__356;
    }
    result_624=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_624->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_624->sname;
        result_624->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_624->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj124=result_624->type;
        result_624->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__357 = result_624;
    come_call_finalizer3(result_624,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__357;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value658 = (void*)0;
struct list$1sNode$ph* __dec_obj125;
struct sNoneNode* __result_obj__359;
    ((struct sNodeBase*)(__right_value658=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value658,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj125=self->tuple_elements;
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj125,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__359 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__359,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__359;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __right_value659 = (void*)0;
char* __result_obj__360;
    __result_obj__360 = come_increment_ref_count(((char*)(__right_value659=__builtin_string("sNoneNode"))));
    (__right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__360 = come_decrement_ref_count2(__result_obj__360, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__360;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_625;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1void$ph* tuple_types_626;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1CVALUE$ph* tuple_values_627;
int i_628;
struct list$1sNode$ph* o2_saved_629;
struct sNode* it_630;
_Bool Value_631;
_Bool __result_obj__361;
void* __right_value664 = (void*)0;
struct CVALUE* come_value_632;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* string_type_633;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_6_634=0;
char* Err_635=0;
_Bool _if_conditional13;
_Bool __result_obj__362;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sType* type_636;
struct list$1void$ph* o2_saved_637;
struct sType* it_638;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct CVALUE* obj_value_639;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct buffer* num_string_640;
void* __right_value679 = (void*)0;
struct sType* type2_641;
void* __right_value680 = (void*)0;
char* type_name_642;
void* __right_value681 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var15 = (void*)0;
char* finalizer_name_643=0;
char* cloner_name_644=0;
char* get_hash_key_name_645=0;
char* equaler_name_646=0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* __dec_obj126;
void* __right_value684 = (void*)0;
struct sType* type3_647;
void* __right_value685 = (void*)0;
struct sType* __dec_obj127;
void* __right_value686 = (void*)0;
struct sType* obj_type_648;
char* fun_name_649;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_650=0;
struct sGenericsFun* generics_fun_651=0;
char* generics_fun_name_652;
void* __right_value689 = (void*)0;
struct sFun* fun_653;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
char* __dec_obj128;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_7_654=0;
char* Err_655=0;
_Bool _if_conditional14;
_Bool __result_obj__363;
void* __right_value694 = (void*)0;
struct sType* result_type_656;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct list$1CVALUE$ph* come_params_657;
void* __right_value697 = (void*)0;
_Bool _if_conditional15;
void* __right_value698 = (void*)0;
struct list$1CVALUE$ph* o2_saved_658;
struct CVALUE* it_659;
void* __right_value699 = (void*)0;
struct CVALUE* come_value_660;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
_Bool _if_conditional16;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct buffer* buf_661;
int j_662;
struct list$1CVALUE$ph* o2_saved_663;
struct CVALUE* it_664;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct CVALUE* come_value2_665;
void* __right_value707 = (void*)0;
char* __dec_obj129;
void* __right_value708 = (void*)0;
struct sType* __dec_obj130;
_Bool __result_obj__364;
    tuple_elements_625=self->tuple_elements;
    tuple_types_626=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 983, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    tuple_values_627=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 984, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    i_628=0;
    for(    o2_saved_629=(tuple_elements_625),it_630=list$1sNode$ph$p_begin((o2_saved_629));    !list$1sNode$ph$p_end((o2_saved_629));    it_630=list$1sNode$ph$p_next((o2_saved_629))    ){
        Value_631=node_compile(it_630,info);
        if(        !Value_631) {
            __result_obj__361 = (_Bool)0;
            come_call_finalizer3(tuple_types_626,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_627,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__361;
        }
        else {
        }
        come_value_632=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_627,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_632)));
        list$1void$ph$p_push_back(tuple_types_626,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_632->type)));
        if(        i_628==1) {
            string_type_633=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 999, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
            string_type_633->mHeap=(_Bool)1;
            multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value670=check_assign_type(((char*)(__right_value669=xsprintf("invalid none type"))),string_type_633,come_value_632->type,come_value_632,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_6_634=multiple_assign_var14->v1;
            Err_635=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            (_if_conditional13=(Err_635)),            (__right_value669 = come_decrement_ref_count2(__right_value669, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value670,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                __result_obj__362 = (_Bool)1;
                come_call_finalizer3(string_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
                (Err_635 = come_decrement_ref_count2(Err_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_types_626,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_627,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__362;
            }
            else {
            }
            come_call_finalizer3(string_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            (Err_635 = come_decrement_ref_count2(Err_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_628++;
        come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_636=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1009, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value672=xsprintf("tuple%d",list$1void$ph$p_length(tuple_types_626)))),(_Bool)0,info));
    (__right_value672 = come_decrement_ref_count2(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_637=(struct list$1void$ph*)come_increment_ref_count((tuple_types_626)),it_638=((struct sType*)list$1void$ph$p_begin((o2_saved_637)));    !list$1void$ph$p_end((o2_saved_637));    it_638=((struct sType*)list$1void$ph$p_next((o2_saved_637)))    ){
        list$1void$ph$p_push_back(type_636->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value674=come_call_cloner(sType_clone, it_638))))));
        come_call_finalizer3(__right_value674,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_637,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_639=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1015, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_640=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1017, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_640,"1");
    type2_641=(struct sType*)come_increment_ref_count(solve_generics(type_636,type_636,info));
    type_name_642=(char*)come_increment_ref_count(make_type_name_string(type2_641,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var15=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value681=create_vtable((struct sType*)come_increment_ref_count(type2_641),info)));
    finalizer_name_643=(char*)come_increment_ref_count(multiple_assign_var15->v1);
    cloner_name_644=(char*)come_increment_ref_count(multiple_assign_var15->v2);
    get_hash_key_name_645=(char*)come_increment_ref_count(multiple_assign_var15->v3);
    equaler_name_646=(char*)come_increment_ref_count(multiple_assign_var15->v4);
    come_call_finalizer3(__right_value681,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj126=obj_value_639->c_value;
    obj_value_639->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_642,type_name_642,((char*)(__right_value682=buffer_to_string(num_string_640))),info->sname,info->sline,type_name_642));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_647=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_641));
    type3_647->mPointerNum++;
    type3_647->mHeap=(_Bool)1;
    type2_641->mHeap=(_Bool)1;
    __dec_obj127=obj_value_639->type;
    obj_value_639->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_641));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_639->type->mPointerNum++;
    obj_value_639->var=((void*)0);
    append_object_to_right_values2(obj_value_639,(struct sType*)come_increment_ref_count(type3_647),info,(_Bool)0);
    obj_type_648=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_641));
    fun_name_649="initialize";
    multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value688=make_generics_function(obj_type_648,(char*)come_increment_ref_count(__builtin_string(fun_name_649)),info,(_Bool)1)));
    name_650=(char*)come_increment_ref_count(multiple_assign_var16->v1);
    generics_fun_651=multiple_assign_var16->v2;
    come_call_finalizer3(__right_value688,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_652=(char*)come_increment_ref_count(name_650);
    fun_653=((struct sFun*)((void*)(__right_value689=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_652,((void*)0)))));
    come_call_finalizer3(__right_value689,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_653==((void*)0)) {
        __dec_obj128=generics_fun_name_652;
        generics_fun_name_652=(char*)come_increment_ref_count(create_method_name(obj_type_648,(_Bool)0,((char*)(__right_value690=__builtin_string(fun_name_649))),info,(_Bool)1));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_653=((struct sFun*)((void*)(__right_value692=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_652,((void*)0)))));
        come_call_finalizer3(__right_value692,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_653==((void*)0)) {
            multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value693=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_652,info->come_fun->mName)));
            come_exception_var_7_654=multiple_assign_var17->v1;
            Err_655=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional14=(Err_655)),            come_call_finalizer3(__right_value693,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                __result_obj__363 = (_Bool)1;
                (Err_655 = come_decrement_ref_count2(Err_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_626,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_627,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_640,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_641,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_642 = come_decrement_ref_count2(type_name_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_643 = come_decrement_ref_count2(finalizer_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_644 = come_decrement_ref_count2(cloner_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_645 = come_decrement_ref_count2(get_hash_key_name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_646 = come_decrement_ref_count2(equaler_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_647,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_648,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_652 = come_decrement_ref_count2(generics_fun_name_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__363;
            }
            else {
            }
            (Err_655 = come_decrement_ref_count2(Err_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_656=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_653->mResultType));
    result_type_656->mStatic=(_Bool)0;
    come_params_657=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1062, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional15=(((struct sType*)((void*)(__right_value697=list$1void$ph$p_operator_load_element(fun_653->mParamTypes,0))))->mHeap&&obj_value_639->type->mHeap)),    come_call_finalizer3(__right_value697,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional15) {
        std_move(((struct sType*)((void*)(__right_value698=list$1void$ph$p_operator_load_element(fun_653->mParamTypes,0)))),obj_value_639->type,obj_value_639,info,(_Bool)1);
        come_call_finalizer3(__right_value698,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_657,(struct CVALUE*)come_increment_ref_count(obj_value_639));
    i_628=1;
    for(    o2_saved_658=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_627)),it_659=list$1CVALUE$ph$p_begin((o2_saved_658));    !list$1CVALUE$ph$p_end((o2_saved_658));    it_659=list$1CVALUE$ph$p_next((o2_saved_658))    ){
        come_value_660=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_659));
        if(        (_if_conditional16=(((struct sType*)((void*)(__right_value700=list$1void$ph$p_operator_load_element(fun_653->mParamTypes,i_628))))&&((struct sType*)((void*)(__right_value701=list$1void$ph$p_operator_load_element(fun_653->mParamTypes,i_628))))->mHeap&&come_value_660->type->mHeap)),        come_call_finalizer3(__right_value700,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value701,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional16) {
            std_move(((struct sType*)((void*)(__right_value702=list$1void$ph$p_operator_load_element(fun_653->mParamTypes,i_628)))),come_value_660->type,come_value_660,info,(_Bool)1);
            come_call_finalizer3(__right_value702,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_657,(struct CVALUE*)come_increment_ref_count(come_value_660));
        i_628++;
        come_call_finalizer3(come_value_660,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_658,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_661=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1081, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_661,generics_fun_name_652);
    buffer_append_str(buf_661,"(");
    j_662=0;
    for(    o2_saved_663=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_657)),it_664=list$1CVALUE$ph$p_begin((o2_saved_663));    !list$1CVALUE$ph$p_end((o2_saved_663));    it_664=list$1CVALUE$ph$p_next((o2_saved_663))    ){
        buffer_append_str(buf_661,it_664->c_value);
        if(        j_662!=list$1CVALUE$ph$p_length(come_params_657)-1) {
            buffer_append_str(buf_661,",");
        }
        j_662++;
    }
    come_call_finalizer3(o2_saved_663,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_661,")");
    come_value2_665=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1098, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj129=come_value2_665->c_value;
    come_value2_665->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_661));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value2_665->type;
    come_value2_665->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_656));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_665->type->mStatic=(_Bool)0;
    come_value2_665->var=((void*)0);
    if(    result_type_656->mHeap) {
        append_object_to_right_values2(come_value2_665,(struct sType*)come_increment_ref_count(result_type_656),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_665->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_665));
    __result_obj__364 = (_Bool)1;
    come_call_finalizer3(tuple_types_626,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_627,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_640,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_641,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_642 = come_decrement_ref_count2(type_name_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_643 = come_decrement_ref_count2(finalizer_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_644 = come_decrement_ref_count2(cloner_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_645 = come_decrement_ref_count2(get_hash_key_name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_646 = come_decrement_ref_count2(equaler_name_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_647,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_648,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_652 = come_decrement_ref_count2(generics_fun_name_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_657,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_661,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_665,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__364;
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
void* __right_value709 = (void*)0;
struct list$1sNode$ph* __dec_obj131;
struct list$1sNode$ph* __dec_obj132;
struct sMapNode* __result_obj__365;
    ((struct sNodeBase*)(__right_value709=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value709,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj131=self->map_key_elements;
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj131,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj132=self->map_elements;
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj132,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__365 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__365,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__365;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value710 = (void*)0;
char* __result_obj__366;
    __result_obj__366 = come_increment_ref_count(((char*)(__right_value710=__builtin_string("sMapNode"))));
    (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__366 = come_decrement_ref_count2(__result_obj__366, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__366;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_666;
struct list$1sNode$ph* map_elements_667;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1CVALUE$ph* key_params_668;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1CVALUE$ph* element_params_669;
struct sType* map_key_type_670;
struct sType* map_element_type_671;
int i_672;
void* __right_value715 = (void*)0;
struct sNode* key_elements_673;
void* __right_value716 = (void*)0;
struct sNode* elements_677;
void* __right_value717 = (void*)0;
_Bool _if_conditional17;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sNode* value_node_678;
struct sNode* exp_679;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_680;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sNode* __dec_obj133;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_681;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj135;
_Bool Value_682;
_Bool __result_obj__369;
void* __right_value739 = (void*)0;
struct CVALUE* come_value_683;
void* __right_value740 = (void*)0;
struct sType* __dec_obj136;
_Bool Value_684;
_Bool __result_obj__370;
void* __right_value741 = (void*)0;
struct CVALUE* come_value_685;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_686=0;
char* Err_687=0;
_Bool _if_conditional18;
_Bool __result_obj__371;
void* __right_value744 = (void*)0;
struct sType* __dec_obj137;
void* __right_value745 = (void*)0;
_Bool _if_conditional19;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* value_node_688;
struct sNode* exp2_689;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_690;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_691;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj140;
_Bool Value_692;
_Bool __result_obj__372;
void* __right_value767 = (void*)0;
struct CVALUE* come_value2_693;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_9_694=0;
char* Err_695=0;
_Bool _if_conditional20;
_Bool __result_obj__373;
void* __right_value770 = (void*)0;
struct sType* __dec_obj141;
_Bool Value_696;
_Bool __result_obj__374;
void* __right_value771 = (void*)0;
struct CVALUE* come_value2_697;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_10_698=0;
char* Err_699=0;
_Bool _if_conditional21;
_Bool __result_obj__375;
void* __right_value774 = (void*)0;
struct sType* __dec_obj142;
void* __right_value775 = (void*)0;
struct sType* key_type_values_701;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
char* var_name_702;
void* __right_value778 = (void*)0;
struct sVar* var__703;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sType* element_type_values_704;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
char* var_name2_705;
void* __right_value783 = (void*)0;
struct sVar* var2__706;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct buffer* source_707;
int i_708;
void* __right_value787 = (void*)0;
struct CVALUE* key_param_709;
void* __right_value788 = (void*)0;
struct CVALUE* element_param_710;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sType* map_type_711;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sType* obj_type_712;
char* fun_name_713;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var21 = (void*)0;
char* name_714=0;
struct sGenericsFun* generics_fun_715=0;
char* generics_fun_name_716;
void* __right_value796 = (void*)0;
struct sFun* fun_717;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
char* __dec_obj143;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_11_718=0;
char* Err_719=0;
_Bool _if_conditional22;
_Bool __result_obj__376;
void* __right_value801 = (void*)0;
struct sType* result_type_720;
struct sType* type_721;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct CVALUE* obj_value_722;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct buffer* num_string_723;
void* __right_value806 = (void*)0;
struct sType* type2_724;
void* __right_value807 = (void*)0;
char* type_name_725;
struct sType* any_type_726;
void* __right_value808 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var23 = (void*)0;
char* finalizer_name_727=0;
char* cloner_name_728=0;
char* get_hash_key_name_729=0;
char* equaler_name_730=0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
char* __dec_obj144;
void* __right_value811 = (void*)0;
struct sType* type3_731;
void* __right_value812 = (void*)0;
struct sType* __dec_obj145;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1CVALUE$ph* come_params_732;
void* __right_value815 = (void*)0;
_Bool _if_conditional23;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct CVALUE* come_value2_733;
void* __right_value819 = (void*)0;
char* __dec_obj146;
struct sType* __dec_obj147;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct CVALUE* come_value3_734;
void* __right_value822 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct CVALUE* come_value4_735;
void* __right_value825 = (void*)0;
char* __dec_obj150;
struct sType* __dec_obj151;
int j_736;
struct list$1CVALUE$ph* o2_saved_737;
struct CVALUE* it_738;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct CVALUE* come_value5_739;
void* __right_value828 = (void*)0;
char* __dec_obj152;
void* __right_value829 = (void*)0;
struct sType* __dec_obj153;
_Bool __result_obj__377;
exp_679 = (void*)0;
exp2_689 = (void*)0;
    map_key_elements_666=self->map_key_elements;
    map_elements_667=self->map_elements;
    key_params_668=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1138, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    element_params_669=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1139, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    map_key_type_670=((void*)0);
    map_element_type_671=((void*)0);
    for(    i_672=0;    i_672<list$1sNode$ph$p_length(map_key_elements_666);    i_672++    ){
        key_elements_673=((struct sNode*)(__right_value715=list$1sNode$ph$p_operator_load_element(map_key_elements_666,i_672)));
        ((__right_value715) ? __right_value715 = come_decrement_ref_count2(__right_value715, ((struct sNode*)__right_value715)->finalize, ((struct sNode*)__right_value715)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        elements_677=((struct sNode*)(__right_value716=list$1sNode$ph$p_operator_load_element(map_elements_667,i_672)));
        ((__right_value716) ? __right_value716 = come_decrement_ref_count2(__right_value716, ((struct sNode*)__right_value716)->finalize, ((struct sNode*)__right_value716)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        (_if_conditional17=(string_operator_equals(((char*)(__right_value717=key_elements_673->kind(key_elements_673->_protocol_obj))),"sWildCard"))),        (__right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional17) {
            value_node_678=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value718=xsprintf("Value"))),info));
            (__right_value718 = come_decrement_ref_count2(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_680=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1152, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_680,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1153, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_678))));
                __dec_obj133=exp_679;
                exp_679=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value725=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_678),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_680),((void*)0),0,((void*)0),info));
                if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_680,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_681=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1158, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_681,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1159, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_679))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_681,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1160, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_672,info)))));
                __dec_obj134=exp_679;
                exp_679=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value736=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_679),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_681),((void*)0),0,((void*)0),info));
                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj135=exp_679;
                exp_679=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_679,info));
                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_681,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_682=node_compile(exp_679,info);
            if(            !Value_682) {
                __result_obj__369 = (_Bool)0;
                ((value_node_678) ? value_node_678 = come_decrement_ref_count2(value_node_678, ((struct sNode*)value_node_678)->finalize, ((struct sNode*)value_node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_679) ? exp_679 = come_decrement_ref_count2(exp_679, ((struct sNode*)exp_679)->finalize, ((struct sNode*)exp_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__369;
            }
            else {
            }
            come_value_683=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_push_back(key_params_668,(struct CVALUE*)come_increment_ref_count(come_value_683));
            __dec_obj136=map_key_type_670;
            map_key_type_670=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_683->type));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_678) ? value_node_678 = come_decrement_ref_count2(value_node_678, ((struct sNode*)value_node_678)->finalize, ((struct sNode*)value_node_678)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_679) ? exp_679 = come_decrement_ref_count2(exp_679, ((struct sNode*)exp_679)->finalize, ((struct sNode*)exp_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_683,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_684=node_compile(key_elements_673,info);
            if(            !Value_684) {
                __result_obj__370 = (_Bool)0;
                come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__370;
            }
            else {
            }
            come_value_685=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_670) {
                multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value743=check_assign_type(((char*)(__right_value742=xsprintf("invalid map key type"))),map_key_type_670,come_value_685->type,come_value_685,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_8_686=multiple_assign_var18->v1;
                Err_687=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                (_if_conditional18=(Err_687)),                (__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value743,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result_obj__371 = (_Bool)1;
                    (Err_687 = come_decrement_ref_count2(Err_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_685,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__371;
                }
                else {
                }
                (Err_687 = come_decrement_ref_count2(Err_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(key_params_668,(struct CVALUE*)come_increment_ref_count(come_value_685));
            __dec_obj137=map_key_type_670;
            map_key_type_670=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_685->type));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value_685,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional19=(string_operator_equals(((char*)(__right_value745=elements_677->kind(elements_677->_protocol_obj))),"sWildCard"))),        (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional19) {
            value_node_688=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value746=xsprintf("Value"))),info));
            (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_690=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1198, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_690,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1199, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_688))));
                __dec_obj138=exp2_689;
                exp2_689=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value753=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_688),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_690),((void*)0),0,((void*)0),info));
                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_690,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_691=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1204, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_691,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1205, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_689))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_691,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1206, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_672,info)))));
                __dec_obj139=exp2_689;
                exp2_689=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value764=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_689),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_691),((void*)0),0,((void*)0),info));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj140=exp2_689;
                exp2_689=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_689,info));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_691,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_692=node_compile(exp2_689,info);
            if(            !Value_692) {
                __result_obj__372 = (_Bool)0;
                ((value_node_688) ? value_node_688 = come_decrement_ref_count2(value_node_688, ((struct sNode*)value_node_688)->finalize, ((struct sNode*)value_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp2_689) ? exp2_689 = come_decrement_ref_count2(exp2_689, ((struct sNode*)exp2_689)->finalize, ((struct sNode*)exp2_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__372;
            }
            else {
            }
            come_value2_693=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_671) {
                multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value769=check_assign_type(((char*)(__right_value768=xsprintf("invalid map element type"))),map_element_type_671,come_value2_693->type,come_value2_693,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_9_694=multiple_assign_var19->v1;
                Err_695=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional20=(Err_695)),                (__right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value769,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional20) {
                    __result_obj__373 = (_Bool)1;
                    (Err_695 = come_decrement_ref_count2(Err_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((value_node_688) ? value_node_688 = come_decrement_ref_count2(value_node_688, ((struct sNode*)value_node_688)->finalize, ((struct sNode*)value_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((exp2_689) ? exp2_689 = come_decrement_ref_count2(exp2_689, ((struct sNode*)exp2_689)->finalize, ((struct sNode*)exp2_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value2_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__373;
                }
                else {
                }
                (Err_695 = come_decrement_ref_count2(Err_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(element_params_669,(struct CVALUE*)come_increment_ref_count(come_value2_693));
            __dec_obj141=map_element_type_671;
            map_element_type_671=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_693->type));
            come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_688) ? value_node_688 = come_decrement_ref_count2(value_node_688, ((struct sNode*)value_node_688)->finalize, ((struct sNode*)value_node_688)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_689) ? exp2_689 = come_decrement_ref_count2(exp2_689, ((struct sNode*)exp2_689)->finalize, ((struct sNode*)exp2_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value2_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_696=node_compile(elements_677,info);
            if(            !Value_696) {
                __result_obj__374 = (_Bool)0;
                come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__374;
            }
            else {
            }
            come_value2_697=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_671) {
                multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value773=check_assign_type(((char*)(__right_value772=xsprintf("invalid map element type"))),map_element_type_671,come_value2_697->type,come_value2_697,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_10_698=multiple_assign_var20->v1;
                Err_699=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                (_if_conditional21=(Err_699)),                (__right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value773,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional21) {
                    __result_obj__375 = (_Bool)1;
                    (Err_699 = come_decrement_ref_count2(Err_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value2_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__375;
                }
                else {
                }
                (Err_699 = come_decrement_ref_count2(Err_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(element_params_669,(struct CVALUE*)come_increment_ref_count(come_value2_697));
            __dec_obj142=map_element_type_671;
            map_element_type_671=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_697->type));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value2_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_700=0;
    key_type_values_701=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_670));
    list$1sNode$ph$p_push_back(key_type_values_701->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(key_params_668),info)));
    key_type_values_701->mHeap=(_Bool)0;
    var_name_702=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_700));
    add_variable_to_table(var_name_702,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_701)),info,(_Bool)0);
    var__703=get_variable_from_table(info->lv_table,var_name_702);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value779=make_define_var(key_type_values_701,var__703->mCValueName,(_Bool)0,info))));
    (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_704=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_671));
    list$1sNode$ph$p_push_back(element_type_values_704->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(element_params_669),info)));
    element_type_values_704->mHeap=(_Bool)0;
    var_name2_705=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_700));
    add_variable_to_table(var_name2_705,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_704)),info,(_Bool)0);
    var2__706=get_variable_from_table(info->lv_table,var_name2_705);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value784=make_define_var(element_type_values_704,var2__706->mCValueName,(_Bool)0,info))));
    (__right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_707=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1271, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_707,"(");
    for(    i_708=0;    i_708<list$1CVALUE$ph$p_length(key_params_668);    i_708++    ){
        key_param_709=((struct CVALUE*)(__right_value787=list$1CVALUE$ph$p_operator_load_element(key_params_668,i_708)));
        come_call_finalizer3(__right_value787,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_710=((struct CVALUE*)(__right_value788=list$1CVALUE$ph$p_operator_load_element(element_params_669,i_708)));
        come_call_finalizer3(__right_value788,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_670->mHeap) {
            buffer_append_format(source_707,"%s[%d]=%s,\n",var__703->mCValueName,i_708,key_param_709->c_value);
        }
        else {
            buffer_append_format(source_707,"%s[%d]=%s,\n",var__703->mCValueName,i_708,key_param_709->c_value);
        }
        if(        map_element_type_671->mHeap) {
            buffer_append_format(source_707,"%s[%d]=%s,\n",var2__706->mCValueName,i_708,element_param_710->c_value);
        }
        else {
            buffer_append_format(source_707,"%s[%d]=%s,\n",var2__706->mCValueName,i_708,element_param_710->c_value);
        }
    }
    map_type_711=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1296, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"map",(_Bool)0,info));
    list$1void$ph$p_push_back(map_type_711->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value791=come_call_cloner(sType_clone, map_key_type_670))))));
    come_call_finalizer3(__right_value791,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1void$ph$p_push_back(map_type_711->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value792=come_call_cloner(sType_clone, map_element_type_671))))));
    come_call_finalizer3(__right_value792,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_712=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_711));
    fun_name_713="initialize_with_values";
    multiple_assign_var21=((struct tuple2$2char$phsGenericsFun$p*)(__right_value795=make_generics_function(obj_type_712,(char*)come_increment_ref_count(__builtin_string(fun_name_713)),info,(_Bool)1)));
    name_714=(char*)come_increment_ref_count(multiple_assign_var21->v1);
    generics_fun_715=multiple_assign_var21->v2;
    come_call_finalizer3(__right_value795,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_716=(char*)come_increment_ref_count(name_714);
    fun_717=((struct sFun*)((void*)(__right_value796=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_716,((void*)0)))));
    come_call_finalizer3(__right_value796,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_717==((void*)0)) {
        __dec_obj143=generics_fun_name_716;
        generics_fun_name_716=(char*)come_increment_ref_count(create_method_name(obj_type_712,(_Bool)0,((char*)(__right_value797=__builtin_string(fun_name_713))),info,(_Bool)1));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_717=((struct sFun*)((void*)(__right_value799=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_716,((void*)0)))));
        come_call_finalizer3(__right_value799,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_717==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value800=err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_716,info->come_fun->mName)));
            come_exception_var_11_718=multiple_assign_var22->v1;
            Err_719=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional22=(Err_719)),            come_call_finalizer3(__right_value800,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional22) {
                __result_obj__376 = (_Bool)1;
                (Err_719 = come_decrement_ref_count2(Err_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(key_type_values_701,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(element_type_values_704,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name2_705 = come_decrement_ref_count2(var_name2_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_712,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_714 = come_decrement_ref_count2(name_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_716 = come_decrement_ref_count2(generics_fun_name_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__376;
            }
            else {
            }
            (Err_719 = come_decrement_ref_count2(Err_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_720=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_717->mResultType));
    result_type_720->mStatic=(_Bool)0;
    type_721=map_type_711;
    obj_value_722=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1325, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_723=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1327, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_723,"1");
    type2_724=(struct sType*)come_increment_ref_count(solve_generics(type_721,type_721,info));
    type_name_725=(char*)come_increment_ref_count(make_type_name_string(type2_724,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_726=(struct sType*)come_increment_ref_count(type2_724);
    any_type_726->mPointerNum=1;
    any_type_726->mHeap=(_Bool)1;
    multiple_assign_var23=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value808=create_vtable((struct sType*)come_increment_ref_count(any_type_726),info)));
    finalizer_name_727=(char*)come_increment_ref_count(multiple_assign_var23->v1);
    cloner_name_728=(char*)come_increment_ref_count(multiple_assign_var23->v2);
    get_hash_key_name_729=(char*)come_increment_ref_count(multiple_assign_var23->v3);
    equaler_name_730=(char*)come_increment_ref_count(multiple_assign_var23->v4);
    come_call_finalizer3(__right_value808,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj144=obj_value_722->c_value;
    obj_value_722->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_725,type_name_725,((char*)(__right_value809=buffer_to_string(num_string_723))),info->sname,info->sline,type_name_725,finalizer_name_727,cloner_name_728,get_hash_key_name_729,equaler_name_730));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value809 = come_decrement_ref_count2(__right_value809, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_731=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_724));
    type3_731->mPointerNum++;
    type3_731->mHeap=(_Bool)1;
    type2_724->mHeap=(_Bool)1;
    __dec_obj145=obj_value_722->type;
    obj_value_722->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_724));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_722->type->mPointerNum++;
    obj_value_722->var=((void*)0);
    append_object_to_right_values2(obj_value_722,(struct sType*)come_increment_ref_count(type3_731),info,(_Bool)0);
    come_params_732=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1353, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional23=(((struct sType*)((void*)(__right_value815=list$1void$ph$p_operator_load_element(fun_717->mParamTypes,0))))->mHeap&&obj_value_722->type->mHeap)),    come_call_finalizer3(__right_value815,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional23) {
        std_move(((struct sType*)((void*)(__right_value816=list$1void$ph$p_operator_load_element(fun_717->mParamTypes,0)))),obj_value_722->type,obj_value_722,info,(_Bool)1);
        come_call_finalizer3(__right_value816,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_732,(struct CVALUE*)come_increment_ref_count(obj_value_722));
    come_value2_733=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1360, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj146=come_value2_733->c_value;
    come_value2_733->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph$p_length(key_params_668)));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value2_733->type;
    come_value2_733->type=((void*)0);
    come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_733->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_732,(struct CVALUE*)come_increment_ref_count(come_value2_733));
    come_value3_734=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1368, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj148=come_value3_734->c_value;
    come_value3_734->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__703->mCValueName));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value3_734->type;
    come_value3_734->type=((void*)0);
    come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_734->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_732,(struct CVALUE*)come_increment_ref_count(come_value3_734));
    come_value4_735=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1376, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj150=come_value4_735->c_value;
    come_value4_735->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__706->mCValueName));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=come_value4_735->type;
    come_value4_735->type=((void*)0);
    come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_735->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_732,(struct CVALUE*)come_increment_ref_count(come_value4_735));
    buffer_append_str(source_707,generics_fun_name_716);
    buffer_append_str(source_707,"(");
    j_736=0;
    for(    o2_saved_737=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_732)),it_738=list$1CVALUE$ph$p_begin((o2_saved_737));    !list$1CVALUE$ph$p_end((o2_saved_737));    it_738=list$1CVALUE$ph$p_next((o2_saved_737))    ){
        buffer_append_str(source_707,it_738->c_value);
        if(        j_736!=list$1CVALUE$ph$p_length(come_params_732)-1) {
            buffer_append_str(source_707,",");
        }
        j_736++;
    }
    come_call_finalizer3(o2_saved_737,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_707,")");
    buffer_append_str(source_707,")");
    come_value5_739=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1402, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj152=come_value5_739->c_value;
    come_value5_739->c_value=(char*)come_increment_ref_count(buffer_to_string(source_707));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value5_739->type;
    come_value5_739->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_720));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_739->type->mStatic=(_Bool)0;
    come_value5_739->var=((void*)0);
    if(    result_type_720->mHeap) {
        append_object_to_right_values2(come_value5_739,(struct sType*)come_increment_ref_count(result_type_720),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_739->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_739));
    __result_obj__377 = (_Bool)1;
    come_call_finalizer3(key_params_668,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_669,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_701,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(element_type_values_704,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name2_705 = come_decrement_ref_count2(var_name2_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_712,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_714 = come_decrement_ref_count2(name_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_716 = come_decrement_ref_count2(generics_fun_name_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_722,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_724,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_725 = come_decrement_ref_count2(type_name_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_726,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_727 = come_decrement_ref_count2(finalizer_name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_728 = come_decrement_ref_count2(cloner_name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_729 = come_decrement_ref_count2(get_hash_key_name_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_730 = come_decrement_ref_count2(equaler_name_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_731,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_732,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_734,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_735,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_739,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__377;
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
struct list_item$1sNode$ph* it_674;
int i_675;
struct sNode* __result_obj__367;
struct sNode* default_value_676;
struct sNode* __result_obj__368;
default_value_676 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_674=self->head;
    i_675=0;
    while(it_674!=((void*)0)) {
        if(        position==i_675) {
            __result_obj__367 = come_increment_ref_count(it_674->item);
            ((__result_obj__367) ? __result_obj__367 = come_decrement_ref_count2(__result_obj__367, ((struct sNode*)__result_obj__367)->finalize, ((struct sNode*)__result_obj__367)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__367;
        }
        it_674=it_674->next;
        i_675++;
    }
    memset(&default_value_676,0,sizeof(struct sNode*));
    __result_obj__368 = come_increment_ref_count(default_value_676);
    ((default_value_676) ? default_value_676 = come_decrement_ref_count2(default_value_676, ((struct sNode*)default_value_676)->finalize, ((struct sNode*)default_value_676)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count2(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__368;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_740;
int sline_741;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct list$1sNode$ph* exps_742;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* value_743;
char* head_of_last_line_744;
int len_745;
void* __right_value834 = (void*)0;
struct sNode* exp_746;
int sline2_747;
void* __right_value835 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c1_748=0;
char* Err_749=0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value843 = (void*)0;
struct sNode* __result_obj__380;
int sline_real_751;
int sline_752;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct buffer* value_753;
char* p_754;
int sline_755;
int sline2_756;
void* __right_value846 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c2_757=0;
char* Err_758=0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value850 = (void*)0;
struct sNode* __result_obj__381;
int sline_real_759;
int sline_760;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct buffer* value_761;
unsigned long  int size_762;
char* p_763;
int sline_764;
int len_765;
int sline2_766;
void* __right_value853 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c3_767=0;
char* Err_768=0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value859 = (void*)0;
struct sNode* __result_obj__384;
int sline_real_770;
int sline_771;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct buffer* buf_772;
void* __right_value862 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c4_773=0;
char* Err_774=0;
_Bool global_775;
_Bool ignore_case_776;
_Bool catch_exception_777;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value866 = (void*)0;
struct sNode* obj_778;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_779;
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
struct buffer* method_block_780;
int method_block_sline_781;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1void$ph* method_generics_types_782;
void* __right_value908 = (void*)0;
struct sNode* node_783;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* __dec_obj159;
struct sNode* __result_obj__385;
int sline_real_784;
int sline_785;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct buffer* value_786;
char* p_787;
int sline_788;
int len_789;
int sline2_790;
void* __right_value913 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c5_791=0;
char* Err_792=0;
_Bool global_793;
_Bool ignore_case_794;
_Bool catch_exception_795;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value917 = (void*)0;
struct sNode* obj_796;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_797;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
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
struct buffer* method_block_798;
int method_block_sline_799;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct list$1void$ph* method_generics_types_800;
void* __right_value959 = (void*)0;
struct sNode* node_801;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sNode* __dec_obj160;
struct sNode* __result_obj__386;
int sline_real_802;
int c_803;
int n_804;
int n_805;
unsigned long long int n_808;
void* __right_value962 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c6_809=0;
char* Err_810=0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value967 = (void*)0;
struct sNode* __result_obj__389;
int sline_real_812;
unsigned int c_813;
_Bool quote_814;
int n_815;
int n_816;
unsigned long long int n_819;
unsigned char p2_820;
int size_821;
void* __right_value968 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_c7_823=0;
char* Err_824=0;
void* __right_value969 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c8_825=0;
char* Err_826=0;
void* __right_value970 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c9_827=0;
char* Err_828=0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value975 = (void*)0;
struct sNode* __result_obj__392;
int sline_real_830;
int sline_831;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct buffer* value_832;
char* p_833;
int sline_834;
int sline2_835;
void* __right_value978 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c10_836=0;
char* Err_837=0;
int len_838;
void* __right_value979 = (void*)0;
unsigned int* wstr_839;
char* str_840;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value985 = (void*)0;
struct sNode* __result_obj__395;
int sline_real_842;
int sline_843;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct list$1sNode$ph* exps_844;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct buffer* value_845;
char* p_846;
int sline_847;
int len_848;
void* __right_value990 = (void*)0;
struct sNode* exp_849;
int sline2_850;
void* __right_value991 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c11_851=0;
char* Err_852=0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value995 = (void*)0;
struct sNode* __result_obj__396;
int sline_real_853;
char* p_854;
_Bool no_comma_855;
void* __right_value996 = (void*)0;
struct sNode* node_856;
char* p2_857;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct buffer* first_element_source_858;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct list$1sNode$ph* list_elements_859;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct list$1sNode$ph* map_keys_860;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct list$1sNode$ph* map_elements_861;
_Bool no_comma_862;
void* __right_value1005 = (void*)0;
struct sNode* node2_863;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value1012 = (void*)0;
struct sNode* __result_obj__399;
_Bool no_comma_865;
void* __right_value1013 = (void*)0;
struct sNode* node2_866;
void* __right_value1014 = (void*)0;
struct sNode* node3_867;
void* __right_value1015 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c12_868=0;
char* Err_869=0;
void* __right_value1016 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c13_870=0;
char* Err_871=0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value1019 = (void*)0;
struct sNode* __result_obj__400;
_Bool no_comma_872;
void* __right_value1020 = (void*)0;
struct sNode* node2_873;
void* __right_value1021 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c14_874=0;
char* Err_875=0;
void* __right_value1022 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c15_876=0;
char* Err_877=0;
void* __right_value1023 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var39 = (void*)0;
int come_exception_var_c16_878=0;
char* Err_879=0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value1029 = (void*)0;
struct sNode* __result_obj__403;
void* __right_value1030 = (void*)0;
struct sNode* node_881;
struct sNode* __result_obj__404;
struct sNode* __result_obj__405;
memset(&c_803, 0, sizeof(int));
memset(&c_813, 0, sizeof(unsigned int));
memset(&quote_814, 0, sizeof(_Bool));
memset(&size_821, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_740=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_741=info->sline;
        exps_742=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1432, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_743=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1433, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        head_of_last_line_744=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_744) {
                    buffer_trim(value_743,info->p-head_of_last_line_744);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_743,37);
                buffer_append_char(value_743,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_743,92);
                buffer_append_char(value_743,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_743,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_745=0;
                    while(xisdigit(*info->p)&&len_745<3) {
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        len_745++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_743,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_746=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_742,(struct sNode*)come_increment_ref_count(exp_746));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_743,"%s");
                    ((exp_746) ? exp_746 = come_decrement_ref_count2(exp_746, ((struct sNode*)exp_746)->finalize, ((struct sNode*)exp_746)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_743,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_747=info->sline;
                info->sline=sline_741;
                multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value835=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c1_748=multiple_assign_var24->v1;
                Err_749=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                ((Err_749)?(puts(Err_749),exit(0)):(0));
                come_call_finalizer3(__right_value835,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_749 = come_decrement_ref_count2(Err_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_743,92);
                    buffer_append_char(value_743,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_744=info->p;
                }
                else {
                    buffer_append_char(value_743,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_740;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1572, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value838=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1572, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_743)),(struct list$1sNode$ph*)come_increment_ref_count(exps_742),sline_741,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result_obj__380 = come_increment_ref_count(((struct sNode*)(__right_value843=_inf_value5)));
        come_call_finalizer3(exps_742,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value838,sSStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value843) ? __right_value843 = come_decrement_ref_count2(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count2(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        come_call_finalizer3(exps_742,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_751=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_752=info->sline;
        value_753=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1582, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_754=info->p;
                sline_755=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_754;
                    info->sline=sline_755;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_753,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_753,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_753,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_756=info->sline;
                info->sline=sline_752;
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value846=err_msg(info,"close \" to make c string value")));
                come_exception_var_c2_757=multiple_assign_var25->v1;
                Err_758=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                ((Err_758)?(puts(Err_758),exit(0)):(0));
                come_call_finalizer3(__right_value846,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                info->sline=sline2_756;
                exit(2);
                (Err_758 = come_decrement_ref_count2(Err_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_753,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_751;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1635, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value849=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1635, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_753)),sline_752,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result_obj__381 = come_increment_ref_count(((struct sNode*)(__right_value850=_inf_value6)));
        come_call_finalizer3(value_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value849,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value850) ? __right_value850 = come_decrement_ref_count2(__right_value850, ((struct sNode*)__right_value850)->finalize, ((struct sNode*)__right_value850)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count2(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
        come_call_finalizer3(value_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_759=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_760=info->sline;
        value_761=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1645, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        size_762=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_761,*info->p);
                info->p++;
                p_763=info->p;
                sline_764=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_763;
                    info->sline=sline_764;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_761,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_765=0;
                    while(xisdigit(*info->p)&&len_765<3) {
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        len_765++;
                    }
                    size_762++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_761,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                    }
                    size_762++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 110:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 116:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 114:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 118:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 102:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 97:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 98:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        case 92:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                        default:
                        buffer_append_char(value_761,*info->p);
                        info->p++;
                        size_762++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_766=info->sline;
                info->sline=sline_760;
                multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value853=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c3_767=multiple_assign_var26->v1;
                Err_768=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                ((Err_768)?(puts(Err_768),exit(0)):(0));
                come_call_finalizer3(__right_value853,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_768 = come_decrement_ref_count2(Err_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_761,*info->p);
                info->p++;
                size_762++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_759;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1772, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value855=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1772, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_761),size_762,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result_obj__384 = come_increment_ref_count(((struct sNode*)(__right_value859=_inf_value7)));
        come_call_finalizer3(value_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value855,sBufferNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value859) ? __right_value859 = come_decrement_ref_count2(__right_value859, ((struct sNode*)__right_value859)->finalize, ((struct sNode*)__right_value859)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count2(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__384;
        come_call_finalizer3(value_761,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_770=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_771=info->sline;
        buf_772=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1781, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_772,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value862=err_msg(info,"require closing / for regex")));
                come_exception_var_c4_773=multiple_assign_var27->v1;
                Err_774=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                ((Err_774)?(puts(Err_774),exit(0)):(0));
                come_call_finalizer3(__right_value862,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(5);
                (Err_774 = come_decrement_ref_count2(Err_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_char(buf_772,*info->p);
                info->p++;
            }
        }
        global_775=(_Bool)0;
        ignore_case_776=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_775=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_776=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_777=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_777=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1825, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value865=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1825, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_772)),sline_771,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_778=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value865,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        params_779=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1827, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1829, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_778))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1830, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_776)?(((struct sNode*)(__right_value873=create_int_node(1,info)))):(((struct sNode*)(__right_value874=create_int_node(0,info)))))))));
        ((__right_value873) ? __right_value873 = come_decrement_ref_count2(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value874) ? __right_value874 = come_decrement_ref_count2(__right_value874, ((struct sNode*)__right_value874)->finalize, ((struct sNode*)__right_value874)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1831, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1832, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_775)?(((struct sNode*)(__right_value882=create_int_node(1,info)))):(((struct sNode*)(__right_value883=create_int_node(0,info)))))))));
        ((__right_value882) ? __right_value882 = come_decrement_ref_count2(__right_value882, ((struct sNode*)__right_value882)->finalize, ((struct sNode*)__right_value882)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value883) ? __right_value883 = come_decrement_ref_count2(__right_value883, ((struct sNode*)__right_value883)->finalize, ((struct sNode*)__right_value883)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1833, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1834, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1835, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1836, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_779,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1837, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_780=((void*)0);
        method_block_sline_781=info->sline;
        method_generics_types_782=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 1843, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        node_783=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_778),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_779),method_block_780,method_block_sline_781,method_generics_types_782,info));
        if(        !catch_exception_777) {
            __dec_obj159=node_783;
            node_783=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_783)),info));
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_770;
        __result_obj__385 = come_increment_ref_count(node_783);
        come_call_finalizer3(buf_772,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_778) ? obj_778 = come_decrement_ref_count2(obj_778, ((struct sNode*)obj_778)->finalize, ((struct sNode*)obj_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_779,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_782,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_783) ? node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__385) ? __result_obj__385 = come_decrement_ref_count2(__result_obj__385, ((struct sNode*)__result_obj__385)->finalize, ((struct sNode*)__result_obj__385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__385;
        come_call_finalizer3(buf_772,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_778) ? obj_778 = come_decrement_ref_count2(obj_778, ((struct sNode*)obj_778)->finalize, ((struct sNode*)obj_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_779,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_782,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_783) ? node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_784=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_785=info->sline;
        value_786=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1861, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_787=info->p;
                sline_788=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_787;
                    info->sline=sline_788;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_786,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_789=0;
                    while(xisdigit(*info->p)&&len_789<3) {
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        len_789++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_786,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_786,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_790=info->sline;
                info->sline=sline_785;
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value913=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c5_791=multiple_assign_var28->v1;
                Err_792=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_792)?(puts(Err_792),exit(0)):(0));
                come_call_finalizer3(__right_value913,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_792 = come_decrement_ref_count2(Err_792, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_786,*info->p);
                info->p++;
            }
        }
        global_793=(_Bool)0;
        ignore_case_794=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_793=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_794=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_795=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_795=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1992, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value916=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1992, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_786)),sline_785,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_796=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value916,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        params_797=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1994, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1996, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_796))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1997, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_794)?(((struct sNode*)(__right_value924=create_int_node(1,info)))):(((struct sNode*)(__right_value925=create_int_node(0,info)))))))));
        ((__right_value924) ? __right_value924 = come_decrement_ref_count2(__right_value924, ((struct sNode*)__right_value924)->finalize, ((struct sNode*)__right_value924)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value925) ? __right_value925 = come_decrement_ref_count2(__right_value925, ((struct sNode*)__right_value925)->finalize, ((struct sNode*)__right_value925)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1998, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1999, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_793)?(((struct sNode*)(__right_value933=create_int_node(1,info)))):(((struct sNode*)(__right_value934=create_int_node(0,info)))))))));
        ((__right_value933) ? __right_value933 = come_decrement_ref_count2(__right_value933, ((struct sNode*)__right_value933)->finalize, ((struct sNode*)__right_value933)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value934) ? __right_value934 = come_decrement_ref_count2(__right_value934, ((struct sNode*)__right_value934)->finalize, ((struct sNode*)__right_value934)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2000, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2001, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2002, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2003, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_797,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2004, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_798=((void*)0);
        method_block_sline_799=info->sline;
        method_generics_types_800=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 2010, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        node_801=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_796),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_797),method_block_798,method_block_sline_799,method_generics_types_800,info));
        if(        !catch_exception_795) {
            __dec_obj160=node_801;
            node_801=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_801)),info));
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_784;
        __result_obj__386 = come_increment_ref_count(node_801);
        come_call_finalizer3(value_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_796) ? obj_796 = come_decrement_ref_count2(obj_796, ((struct sNode*)obj_796)->finalize, ((struct sNode*)obj_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_797,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_800,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_801) ? node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__386) ? __result_obj__386 = come_decrement_ref_count2(__result_obj__386, ((struct sNode*)__result_obj__386)->finalize, ((struct sNode*)__result_obj__386)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__386;
        come_call_finalizer3(value_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_796) ? obj_796 = come_decrement_ref_count2(obj_796, ((struct sNode*)obj_796)->finalize, ((struct sNode*)obj_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_797,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_800,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_801) ? node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==39) {
        sline_real_802=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_804=0;
                while(xisdigit(*info->p)) {
                    n_804=n_804*8+*info->p-48;
                    info->p++;
                }
                c_803=n_804;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_803=10;
                    info->p++;
                    break;
                    case 116:
                    c_803=9;
                    info->p++;
                    break;
                    case 114:
                    c_803=13;
                    info->p++;
                    break;
                    case 97:
                    c_803=7;
                    info->p++;
                    break;
                    case 102:
                    c_803=12;
                    info->p++;
                    break;
                    case 118:
                    c_803=11;
                    info->p++;
                    break;
                    case 98:
                    c_803=8;
                    info->p++;
                    break;
                    case 92:
                    c_803=92;
                    info->p++;
                    break;
                    case 48:
                    c_803=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_805=0;
                        while(xisdigit(*info->p)) {
                            n_805=n_805*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_803=n_805;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_806[128];
                        memset(&buf_806, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_806,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_807[2];
                            memset(&buf2_807, 0, sizeof(char)                            *(2)                            );
                            buf2_807[0]=*info->p;
                            buf2_807[1]=0;
                            info->p++;
                            strncat(buf_806,buf2_807,128);
                        }
                        n_808=strtoll(buf_806,((void*)0),0);
                        c_803=n_808;
                    }
                    break;
                    default:
                    c_803=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_803=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value962=err_msg(info,"close \' to make character value")));
            come_exception_var_c6_809=multiple_assign_var29->v1;
            Err_810=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            ((Err_810)?(puts(Err_810),exit(0)):(0));
            come_call_finalizer3(__right_value962,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            (Err_810 = come_decrement_ref_count2(Err_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_802;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2139, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value964=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2139, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_803,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result_obj__389 = come_increment_ref_count(((struct sNode*)(__right_value967=_inf_value10)));
            come_call_finalizer3(__right_value964,sCharNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value967) ? __right_value967 = come_decrement_ref_count2(__right_value967, ((struct sNode*)__right_value967)->finalize, ((struct sNode*)__right_value967)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__389) ? __result_obj__389 = come_decrement_ref_count2(__result_obj__389, ((struct sNode*)__result_obj__389)->finalize, ((struct sNode*)__result_obj__389)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__389;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_812=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_814=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_815=0;
                while(xisdigit(*info->p)) {
                    n_815=n_815*8+*info->p-48;
                    info->p++;
                }
                c_813=n_815;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_813=10;
                    info->p++;
                    break;
                    case 116:
                    c_813=9;
                    info->p++;
                    break;
                    case 114:
                    c_813=13;
                    info->p++;
                    break;
                    case 97:
                    c_813=7;
                    info->p++;
                    break;
                    case 92:
                    c_813=92;
                    info->p++;
                    break;
                    case 48:
                    c_813=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_816=0;
                        while(xisdigit(*info->p)) {
                            n_816=n_816*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_813=n_816;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_817[128];
                        memset(&buf_817, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_817,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_818[2];
                            memset(&buf2_818, 0, sizeof(char)                            *(2)                            );
                            buf2_818[0]=*info->p;
                            buf2_818[1]=0;
                            info->p++;
                            strncat(buf_817,buf2_818,128);
                        }
                        n_819=strtoll(buf_817,((void*)0),0);
                        c_813=n_819;
                    }
                    break;
                    default:
                    c_813=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_814=(_Bool)0;
            p2_820=*(unsigned char*)info->p;
            if(            p2_820>127) {
                char str_822[4+1];
                memset(&str_822, 0, sizeof(char)                *(4+1)                );
                size_821=((p2_820&128)>>7)+((p2_820&64)>>6)+((p2_820&32)>>5)+((p2_820&16)>>4);
                if(                size_821>4) {
                    multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value968=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    come_exception_var_c7_823=multiple_assign_var30->v1;
                    Err_824=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                    ((Err_824)?(puts(Err_824),exit(0)):(0));
                    come_call_finalizer3(__right_value968,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    info->err_num++;
                    (Err_824 = come_decrement_ref_count2(Err_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    memcpy(str_822,info->p,size_821);
                    str_822[size_821]=0;
                    if(                    mbtowc(&c_813,str_822,size_821)<0) {
                        perror("mbtowc");
                        multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value969=err_msg(info,"invalid utf-8 character. mbtowc")));
                        come_exception_var_c8_825=multiple_assign_var31->v1;
                        Err_826=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        ((Err_826)?(puts(Err_826),exit(0)):(0));
                        come_call_finalizer3(__right_value969,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        info->err_num++;
                        (Err_826 = come_decrement_ref_count2(Err_826, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        info->p+=size_821;
                    }
                }
            }
            else {
                c_813=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value970=err_msg(info,"close \' to make character value")));
            come_exception_var_c9_827=multiple_assign_var32->v1;
            Err_828=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_828)?(puts(Err_828),exit(0)):(0));
            come_call_finalizer3(__right_value970,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            info->err_num++;
            (Err_828 = come_decrement_ref_count2(Err_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_812;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2281, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value972=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2281, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_813,quote_814,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result_obj__392 = come_increment_ref_count(((struct sNode*)(__right_value975=_inf_value11)));
            come_call_finalizer3(__right_value972,sWCharNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value975) ? __right_value975 = come_decrement_ref_count2(__right_value975, ((struct sNode*)__right_value975)->finalize, ((struct sNode*)__right_value975)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__392) ? __result_obj__392 = come_decrement_ref_count2(__result_obj__392, ((struct sNode*)__result_obj__392)->finalize, ((struct sNode*)__result_obj__392)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__392;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_830=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_831=info->sline;
        value_832=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2292, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_833=info->p;
                sline_834=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_833;
                    info->sline=sline_834;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_832,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_832,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_832,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_835=info->sline;
                info->sline=sline_831;
                multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value978=err_msg(info,"close \" to make c string value")));
                come_exception_var_c10_836=multiple_assign_var33->v1;
                Err_837=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_837)?(puts(Err_837),exit(0)):(0));
                come_call_finalizer3(__right_value978,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_837 = come_decrement_ref_count2(Err_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_832,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_838=value_832->len;
        wstr_839=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_838+1)), "06str.c", 2343, "unsigned int*", (void*)0, (void*)0, (void*)0, (void*)0));
        str_840=value_832->buf;
        if(        mbstowcs(wstr_839,str_840,len_838+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_839[len_838]=0;
        info->sline_real=sline_real_830;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2355, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value981=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2355, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(unsigned int*)come_increment_ref_count(wstr_839),sline_831,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result_obj__395 = come_increment_ref_count(((struct sNode*)(__right_value985=_inf_value12)));
        come_call_finalizer3(value_832,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_839 = come_decrement_ref_count2(wstr_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value981,sWStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value985) ? __right_value985 = come_decrement_ref_count2(__right_value985, ((struct sNode*)__right_value985)->finalize, ((struct sNode*)__right_value985)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__395) ? __result_obj__395 = come_decrement_ref_count2(__result_obj__395, ((struct sNode*)__result_obj__395)->finalize, ((struct sNode*)__result_obj__395)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__395;
        come_call_finalizer3(value_832,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_839 = come_decrement_ref_count2(wstr_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_842=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_843=info->sline;
        exps_844=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2365, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_845=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2366, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_846=info->p;
                sline_847=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_846;
                    info->sline=sline_847;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_845,37);
                buffer_append_char(value_845,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_845,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_848=0;
                    while(xisdigit(*info->p)&&len_848<3) {
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        len_848++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_845,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_849=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_844,(struct sNode*)come_increment_ref_count(exp_849));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_845,"%s");
                    ((exp_849) ? exp_849 = come_decrement_ref_count2(exp_849, ((struct sNode*)exp_849)->finalize, ((struct sNode*)exp_849)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_845,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_850=info->sline;
                info->sline=sline_843;
                multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value991=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c11_851=multiple_assign_var34->v1;
                Err_852=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                ((Err_852)?(puts(Err_852),exit(0)):(0));
                come_call_finalizer3(__right_value991,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_852 = come_decrement_ref_count2(Err_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_845,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_842;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2514, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value994=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2514, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_845)),(struct list$1sNode$ph*)come_increment_ref_count(exps_844),sline_843,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result_obj__396 = come_increment_ref_count(((struct sNode*)(__right_value995=_inf_value13)));
        come_call_finalizer3(exps_844,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_845,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value994,sSStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value995) ? __right_value995 = come_decrement_ref_count2(__right_value995, ((struct sNode*)__right_value995)->finalize, ((struct sNode*)__right_value995)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__396) ? __result_obj__396 = come_decrement_ref_count2(__result_obj__396, ((struct sNode*)__result_obj__396)->finalize, ((struct sNode*)__result_obj__396)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__396;
        come_call_finalizer3(exps_844,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_845,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_853=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_854=info->p;
        no_comma_855=info->no_comma;
        info->no_comma=(_Bool)1;
        node_856=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_855;
        p2_857=info->p;
        first_element_source_858=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2533, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(first_element_source_858,p_854,p2_857-p_854);
        buffer_append_char(first_element_source_858,0);
        list_elements_859=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2538, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_keys_860=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2540, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_elements_861=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2541, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(map_keys_860,(struct sNode*)come_increment_ref_count(node_856));
            no_comma_862=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_863=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_862;
            list$1sNode$ph$p_push_back(map_elements_861,(struct sNode*)come_increment_ref_count(node2_863));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2564, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1007=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2564, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_860),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_861),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result_obj__399 = come_increment_ref_count(((struct sNode*)(__right_value1012=_inf_value14)));
                ((node2_863) ? node2_863 = come_decrement_ref_count2(node2_863, ((struct sNode*)node2_863)->finalize, ((struct sNode*)node2_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_856) ? node_856 = come_decrement_ref_count2(node_856, ((struct sNode*)node_856)->finalize, ((struct sNode*)node_856)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(first_element_source_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_859,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_860,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_861,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1007,sMapNode_finalize, 0, 1, 0, 0, (void*)0);
                ((__right_value1012) ? __right_value1012 = come_decrement_ref_count2(__right_value1012, ((struct sNode*)__right_value1012)->finalize, ((struct sNode*)__right_value1012)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__399) ? __result_obj__399 = come_decrement_ref_count2(__result_obj__399, ((struct sNode*)__result_obj__399)->finalize, ((struct sNode*)__result_obj__399)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__399;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_865=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_866=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_865;
                    list$1sNode$ph$p_push_back(map_keys_860,(struct sNode*)come_increment_ref_count(node2_866));
                    expected_next_character(58,info);
                    no_comma_865=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_867=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_865;
                    list$1sNode$ph$p_push_back(map_elements_861,(struct sNode*)come_increment_ref_count(node3_867));
                    if(                    *info->p==0) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1015=err_msg(info,"invalid source end")));
                        come_exception_var_c12_868=multiple_assign_var35->v1;
                        Err_869=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        ((Err_869)?(puts(Err_869),exit(0)):(0));
                        come_call_finalizer3(__right_value1015,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_869 = come_decrement_ref_count2(Err_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_866) ? node2_866 = come_decrement_ref_count2(node2_866, ((struct sNode*)node2_866)->finalize, ((struct sNode*)node2_866)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        ((node3_867) ? node3_867 = come_decrement_ref_count2(node3_867, ((struct sNode*)node3_867)->finalize, ((struct sNode*)node3_867)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                    }
                    else {
                        multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1016=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        come_exception_var_c13_870=multiple_assign_var36->v1;
                        Err_871=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                        ((Err_871)?(puts(Err_871),exit(0)):(0));
                        come_call_finalizer3(__right_value1016,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_871 = come_decrement_ref_count2(Err_871, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_866) ? node2_866 = come_decrement_ref_count2(node2_866, ((struct sNode*)node2_866)->finalize, ((struct sNode*)node2_866)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node3_867) ? node3_867 = come_decrement_ref_count2(node3_867, ((struct sNode*)node3_867)->finalize, ((struct sNode*)node3_867)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2609, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1018=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2609, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_860),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_861),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result_obj__400 = come_increment_ref_count(((struct sNode*)(__right_value1019=_inf_value15)));
                ((node2_863) ? node2_863 = come_decrement_ref_count2(node2_863, ((struct sNode*)node2_863)->finalize, ((struct sNode*)node2_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_856) ? node_856 = come_decrement_ref_count2(node_856, ((struct sNode*)node_856)->finalize, ((struct sNode*)node_856)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(first_element_source_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_859,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_860,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_861,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1018,sMapNode_finalize, 0, 1, 0, 0, (void*)0);
                ((__right_value1019) ? __right_value1019 = come_decrement_ref_count2(__right_value1019, ((struct sNode*)__right_value1019)->finalize, ((struct sNode*)__right_value1019)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__400) ? __result_obj__400 = come_decrement_ref_count2(__result_obj__400, ((struct sNode*)__result_obj__400)->finalize, ((struct sNode*)__result_obj__400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__400;
            }
            ((node2_863) ? node2_863 = come_decrement_ref_count2(node2_863, ((struct sNode*)node2_863)->finalize, ((struct sNode*)node2_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(list_elements_859,(struct sNode*)come_increment_ref_count(node_856));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(list_elements_859,(struct sNode*)come_increment_ref_count(node_856));
            while((_Bool)1) {
                no_comma_872=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_873=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_872;
                list$1sNode$ph$p_push_back(list_elements_859,(struct sNode*)come_increment_ref_count(node2_873));
                if(                *info->p==0) {
                    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1021=err_msg(info,"invalid source end")));
                    come_exception_var_c14_874=multiple_assign_var37->v1;
                    Err_875=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                    ((Err_875)?(puts(Err_875),exit(0)):(0));
                    come_call_finalizer3(__right_value1021,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_875 = come_decrement_ref_count2(Err_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_873) ? node2_873 = come_decrement_ref_count2(node2_873, ((struct sNode*)node2_873)->finalize, ((struct sNode*)node2_873)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1022=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    come_exception_var_c15_876=multiple_assign_var38->v1;
                    Err_877=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_877)?(puts(Err_877),exit(0)):(0));
                    come_call_finalizer3(__right_value1022,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_877 = come_decrement_ref_count2(Err_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                ((node2_873) ? node2_873 = come_decrement_ref_count2(node2_873, ((struct sNode*)node2_873)->finalize, ((struct sNode*)node2_873)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            multiple_assign_var39=((struct tuple2$2int$char$ph*)(__right_value1023=err_msg(info,"invalid character(5)(%c)",*info->p)));
            come_exception_var_c16_878=multiple_assign_var39->v1;
            Err_879=(char*)come_increment_ref_count(multiple_assign_var39->v2);
            ((Err_879)?(puts(Err_879),exit(0)):(0));
            come_call_finalizer3(__right_value1023,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_879 = come_decrement_ref_count2(Err_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sNode$ph$p_length(list_elements_859)>0) {
            info->sline_real=sline_real_853;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2661, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1025=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2661, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_859),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result_obj__403 = come_increment_ref_count(((struct sNode*)(__right_value1029=_inf_value16)));
            ((node_856) ? node_856 = come_decrement_ref_count2(node_856, ((struct sNode*)node_856)->finalize, ((struct sNode*)node_856)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(first_element_source_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_859,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_860,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_861,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1025,sListNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1029) ? __right_value1029 = come_decrement_ref_count2(__right_value1029, ((struct sNode*)__right_value1029)->finalize, ((struct sNode*)__right_value1029)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count2(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__403;
        }
        else {
        }
        ((node_856) ? node_856 = come_decrement_ref_count2(node_856, ((struct sNode*)node_856)->finalize, ((struct sNode*)node_856)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(first_element_source_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_859,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_860,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_861,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_881=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__404 = come_increment_ref_count(node_881);
        ((node_881) ? node_881 = come_decrement_ref_count2(node_881, ((struct sNode*)node_881)->finalize, ((struct sNode*)node_881)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__404) ? __result_obj__404 = come_decrement_ref_count2(__result_obj__404, ((struct sNode*)__result_obj__404)->finalize, ((struct sNode*)__result_obj__404)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__404;
        ((node_881) ? node_881 = come_decrement_ref_count2(node_881, ((struct sNode*)node_881)->finalize, ((struct sNode*)node_881)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__405 = come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__405) ? __result_obj__405 = come_decrement_ref_count2(__result_obj__405, ((struct sNode*)__result_obj__405)->finalize, ((struct sNode*)__result_obj__405)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__405;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__378;
void* __right_value839 = (void*)0;
struct sSStringNode* result_750;
void* __right_value840 = (void*)0;
char* __dec_obj154;
void* __right_value841 = (void*)0;
char* __dec_obj155;
void* __right_value842 = (void*)0;
struct list$1sNode$ph* __dec_obj156;
struct sSStringNode* __result_obj__379;
    if(    self==(void*)0) {
        __result_obj__378 = (void*)0;
        return __result_obj__378;
    }
    result_750=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_750->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_750->sname;
        result_750->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_750->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj155=result_750->value;
        result_750->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj156=result_750->exps;
        result_750->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj156,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__379 = result_750;
    come_call_finalizer3(result_750,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__379;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__382;
void* __right_value856 = (void*)0;
struct sBufferNode* result_769;
void* __right_value857 = (void*)0;
char* __dec_obj157;
void* __right_value858 = (void*)0;
struct buffer* __dec_obj158;
struct sBufferNode* __result_obj__383;
    if(    self==(void*)0) {
        __result_obj__382 = (void*)0;
        return __result_obj__382;
    }
    result_769=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_769->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_769->sname;
        result_769->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_769->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj158=result_769->value;
        result_769->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_769->size=self->size;
    }
    __result_obj__383 = result_769;
    come_call_finalizer3(result_769,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__383;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__387;
void* __right_value965 = (void*)0;
struct sCharNode* result_811;
void* __right_value966 = (void*)0;
char* __dec_obj161;
struct sCharNode* __result_obj__388;
    if(    self==(void*)0) {
        __result_obj__387 = (void*)0;
        return __result_obj__387;
    }
    result_811=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_811->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_811->sname;
        result_811->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_811->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_811->value=self->value;
    }
    __result_obj__388 = result_811;
    come_call_finalizer3(result_811,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__388;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__390;
void* __right_value973 = (void*)0;
struct sWCharNode* result_829;
void* __right_value974 = (void*)0;
char* __dec_obj162;
struct sWCharNode* __result_obj__391;
    if(    self==(void*)0) {
        __result_obj__390 = (void*)0;
        return __result_obj__390;
    }
    result_829=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_829->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_829->sname;
        result_829->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_829->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_829->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_829->quote=self->quote;
    }
    __result_obj__391 = result_829;
    come_call_finalizer3(result_829,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__391;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__393;
void* __right_value982 = (void*)0;
struct sWStringNode* result_841;
void* __right_value983 = (void*)0;
char* __dec_obj163;
void* __right_value984 = (void*)0;
unsigned int* __dec_obj164;
struct sWStringNode* __result_obj__394;
    if(    self==(void*)0) {
        __result_obj__393 = (void*)0;
        return __result_obj__393;
    }
    result_841=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_841->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_841->sname;
        result_841->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_841->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj164=result_841->value;
        result_841->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__394 = result_841;
    come_call_finalizer3(result_841,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__394;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__397;
void* __right_value1008 = (void*)0;
struct sMapNode* result_864;
void* __right_value1009 = (void*)0;
char* __dec_obj165;
void* __right_value1010 = (void*)0;
struct list$1sNode$ph* __dec_obj166;
void* __right_value1011 = (void*)0;
struct list$1sNode$ph* __dec_obj167;
struct sMapNode* __result_obj__398;
    if(    self==(void*)0) {
        __result_obj__397 = (void*)0;
        return __result_obj__397;
    }
    result_864=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_864->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj165=result_864->sname;
        result_864->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_864->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj166=result_864->map_key_elements;
        result_864->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj166,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj167=result_864->map_elements;
        result_864->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_elements));
        come_call_finalizer3(__dec_obj167,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__398 = result_864;
    come_call_finalizer3(result_864,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__398;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__401;
void* __right_value1026 = (void*)0;
struct sListNode* result_880;
void* __right_value1027 = (void*)0;
char* __dec_obj168;
void* __right_value1028 = (void*)0;
struct list$1sNode$ph* __dec_obj169;
struct sListNode* __result_obj__402;
    if(    self==(void*)0) {
        __result_obj__401 = (void*)0;
        return __result_obj__401;
    }
    result_880=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_880->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_880->sname;
        result_880->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_880->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj169=result_880->list_elements;
        result_880->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->list_elements));
        come_call_finalizer3(__dec_obj169,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__402 = result_880;
    come_call_finalizer3(result_880,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__402;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_882;
char* p_883;
char* name_884;
void* __right_value1033 = (void*)0;
char* __dec_obj170;
_Bool no_comma_885;
void* __right_value1034 = (void*)0;
struct sNode* node_886;
void* __right_value1035 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c17_890=0;
char* Err_891=0;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1052 = (void*)0;
struct sNode* __result_obj__411;
name_884 = (void*)0;
    tuple_elements_882=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2676, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_883=info->p;
        if(        named_tuple) {
            __dec_obj170=name_884;
            name_884=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_885=info->no_comma;
        info->no_comma=(_Bool)1;
        node_886=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj171=node_886;
        node_886=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_886),info));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_885;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(tuple_elements_882,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2695, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_884)),(struct sNode*)come_increment_ref_count(node_886))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_884 = come_decrement_ref_count2(name_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_886) ? node_886 = come_decrement_ref_count2(node_886, ((struct sNode*)node_886)->finalize, ((struct sNode*)node_886)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        else {
            multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1042=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            come_exception_var_c17_890=multiple_assign_var40->v1;
            Err_891=(char*)come_increment_ref_count(multiple_assign_var40->v2);
            ((Err_891)?(puts(Err_891),exit(0)):(0));
            come_call_finalizer3(__right_value1042,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_891 = come_decrement_ref_count2(Err_891, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (name_884 = come_decrement_ref_count2(name_884, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_886) ? node_886 = come_decrement_ref_count2(node_886, ((struct sNode*)node_886)->finalize, ((struct sNode*)node_886)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2712, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1044=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2712, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_882),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result_obj__411 = come_increment_ref_count(((struct sNode*)(__right_value1052=_inf_value17)));
    come_call_finalizer3(tuple_elements_882,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1044,sTupleNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1052) ? __right_value1052 = come_decrement_ref_count2(__right_value1052, ((struct sNode*)__right_value1052)->finalize, ((struct sNode*)__right_value1052)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count2(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__411;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value1036 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_887;
struct tuple2$2char$phsNode$ph* __dec_obj172;
void* __right_value1037 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_888;
struct tuple2$2char$phsNode$ph* __dec_obj173;
void* __right_value1038 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_889;
struct tuple2$2char$phsNode$ph* __dec_obj174;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__406;
    if(    self->len==0) {
        litem_887=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1036=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1545, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_887->prev=((void*)0);
        litem_887->next=((void*)0);
        __dec_obj172=litem_887->item;
        litem_887->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj172,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_887;
        self->head=litem_887;
    }
    else if(    self->len==1) {
        litem_888=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1037=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1555, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_888->prev=self->head;
        litem_888->next=((void*)0);
        __dec_obj173=litem_888->item;
        litem_888->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj173,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_888;
        self->head->next=litem_888;
    }
    else {
        litem_889=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1038=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1565, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_889->prev=self->tail;
        litem_889->next=((void*)0);
        __dec_obj174=litem_889->item;
        litem_889->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj174,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_889;
        self->tail=litem_889;
    }
    self->len++;
    __result_obj__406 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__406;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__407;
void* __right_value1045 = (void*)0;
struct sTupleNode* result_892;
void* __right_value1046 = (void*)0;
char* __dec_obj175;
void* __right_value1051 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj176;
struct sTupleNode* __result_obj__410;
    if(    self==(void*)0) {
        __result_obj__407 = (void*)0;
        return __result_obj__407;
    }
    result_892=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_892->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_892->sname;
        result_892->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_892->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj176=result_892->tuple_elements;
        result_892->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj176,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__410 = result_892;
    come_call_finalizer3(result_892,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__410;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__408;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_893;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_894;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__409;
    if(    self==((void*)0)) {
        __result_obj__408 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__408,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__408;
    }
    result_893=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1456, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_894=self->head;
    while(it_894!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_893,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_894->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_893,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_894->item)));
        }
        it_894=it_894->next;
    }
    __result_obj__409 = come_increment_ref_count(result_893);
    come_call_finalizer3(result_893,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__409,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__409;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct list$1sNode$ph* tuple_elements_895;
struct sNode* node_896;
void* __right_value1055 = (void*)0;
struct sNode* node2_897;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1061 = (void*)0;
struct sNode* __result_obj__414;
    tuple_elements_895=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2717, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    node_896=(struct sNode*)come_increment_ref_count(exp);
    list$1sNode$ph$p_push_back(tuple_elements_895,(struct sNode*)come_increment_ref_count(node_896));
    node2_897=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph$p_push_back(tuple_elements_895,(struct sNode*)come_increment_ref_count(node2_897));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2727, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1057=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2727, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_895),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result_obj__414 = come_increment_ref_count(((struct sNode*)(__right_value1061=_inf_value18)));
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(tuple_elements_895,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_896) ? node_896 = come_decrement_ref_count2(node_896, ((struct sNode*)node_896)->finalize, ((struct sNode*)node_896)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_897) ? node2_897 = come_decrement_ref_count2(node2_897, ((struct sNode*)node2_897)->finalize, ((struct sNode*)node2_897)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1057,sSomeNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1061) ? __right_value1061 = come_decrement_ref_count2(__right_value1061, ((struct sNode*)__right_value1061)->finalize, ((struct sNode*)__right_value1061)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count2(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__414;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
struct sSomeNode* __result_obj__412;
void* __right_value1058 = (void*)0;
struct sSomeNode* result_898;
void* __right_value1059 = (void*)0;
char* __dec_obj177;
void* __right_value1060 = (void*)0;
struct list$1sNode$ph* __dec_obj178;
struct sSomeNode* __result_obj__413;
    if(    self==(void*)0) {
        __result_obj__412 = (void*)0;
        return __result_obj__412;
    }
    result_898=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_898->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj177=result_898->sname;
        result_898->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_898->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj178=result_898->tuple_elements;
        result_898->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj178,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__413 = result_898;
    come_call_finalizer3(result_898,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__413;
}

struct sNode* parse_some(struct sInfo* info){
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct list$1sNode$ph* tuple_elements_899;
void* __right_value1064 = (void*)0;
struct sNode* node_900;
void* __right_value1065 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value1066 = (void*)0;
struct sNode* node2_901;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1069 = (void*)0;
struct sNode* __result_obj__415;
    tuple_elements_899=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2732, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_900=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj179=node_900;
    node_900=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_900),info));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNode$ph$p_push_back(tuple_elements_899,(struct sNode*)come_increment_ref_count(node_900));
    node2_901=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph$p_push_back(tuple_elements_899,(struct sNode*)come_increment_ref_count(node2_901));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2745, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1068=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2745, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_899),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result_obj__415 = come_increment_ref_count(((struct sNode*)(__right_value1069=_inf_value19)));
    come_call_finalizer3(tuple_elements_899,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_900) ? node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_901) ? node2_901 = come_decrement_ref_count2(node2_901, ((struct sNode*)node2_901)->finalize, ((struct sNode*)node2_901)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1068,sSomeNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1069) ? __right_value1069 = come_decrement_ref_count2(__right_value1069, ((struct sNode*)__right_value1069)->finalize, ((struct sNode*)__right_value1069)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__415) ? __result_obj__415 = come_decrement_ref_count2(__result_obj__415, ((struct sNode*)__result_obj__415)->finalize, ((struct sNode*)__result_obj__415)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__415;
}

struct sNode* parse_none(struct sInfo* info){
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct list$1sNode$ph* tuple_elements_902;
void* __right_value1072 = (void*)0;
struct sNode* node_903;
void* __right_value1073 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value1074 = (void*)0;
struct sNode* node2_904;
struct sNode* node3_905;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1080 = (void*)0;
struct sNode* __result_obj__418;
    tuple_elements_902=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2750, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_903=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj180=node_903;
    node_903=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_903),info));
    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_904=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNode$ph$p_push_back(tuple_elements_902,(struct sNode*)come_increment_ref_count(node2_904));
    node3_905=(struct sNode*)come_increment_ref_count(node_903);
    list$1sNode$ph$p_push_back(tuple_elements_902,(struct sNode*)come_increment_ref_count(node3_905));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2765, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1076=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2765, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_902),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result_obj__418 = come_increment_ref_count(((struct sNode*)(__right_value1080=_inf_value20)));
    come_call_finalizer3(tuple_elements_902,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_903) ? node_903 = come_decrement_ref_count2(node_903, ((struct sNode*)node_903)->finalize, ((struct sNode*)node_903)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_904) ? node2_904 = come_decrement_ref_count2(node2_904, ((struct sNode*)node2_904)->finalize, ((struct sNode*)node2_904)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node3_905) ? node3_905 = come_decrement_ref_count2(node3_905, ((struct sNode*)node3_905)->finalize, ((struct sNode*)node3_905)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1076,sNoneNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1080) ? __right_value1080 = come_decrement_ref_count2(__right_value1080, ((struct sNode*)__right_value1080)->finalize, ((struct sNode*)__right_value1080)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__418) ? __result_obj__418 = come_decrement_ref_count2(__result_obj__418, ((struct sNode*)__result_obj__418)->finalize, ((struct sNode*)__result_obj__418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__418;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
struct sNoneNode* __result_obj__416;
void* __right_value1077 = (void*)0;
struct sNoneNode* result_906;
void* __right_value1078 = (void*)0;
char* __dec_obj181;
void* __right_value1079 = (void*)0;
struct list$1sNode$ph* __dec_obj182;
struct sNoneNode* __result_obj__417;
    if(    self==(void*)0) {
        __result_obj__416 = (void*)0;
        return __result_obj__416;
    }
    result_906=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_906->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result_906->sname;
        result_906->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_906->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj182=result_906->tuple_elements;
        result_906->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj182,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__417 = result_906;
    come_call_finalizer3(result_906,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__417;
}

