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

_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
_Bool gComeBareMetal=(_Bool)0;
char* CC="clang";
static char* RM="rm -rf";
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
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* conditional_value, struct sInfo* info);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files);
static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
void create_pico_version_header();
int come_main(int argc, char** argv);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static char* list$1char$ph_join(struct list$1char$ph* self, char* sep);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self);
static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self);
static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void sInfo_finalize(struct sInfo* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
    if(    gComeOriginalSourcePosition    ) {
        if(        info->writing_source_file_position        ) {
            add_come_code(info,((char*)(__right_value2=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value0=int_to_string(info->sline))),((char*)(__right_value1=string_to_string(info->sname)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value3 = (void*)0;
char* sname_0;
int sline_1;
int sline_real_2;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj1;
_Bool result_3;
void* __right_value6 = (void*)0;
char* __dec_obj2;
_Bool __result_obj__1;
    sname_0=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_1=info->sline;
    sline_real_2=info->sline_real;
    __dec_obj1=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value4=node->sname(node->_protocol_obj)))));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_3=node->compile(node->_protocol_obj,info);
    __dec_obj2=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_0));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_1;
    info->sline_real=sline_real_2;
    __result_obj__1 = result_3;
    (sname_0 = come_decrement_ref_count(sname_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__1;
}

void transpile_conditional_with_free_right_object_value(struct CVALUE* conditional_value, struct sInfo* info){
int num_condtional_stack_5;
    add_last_code_to_source_with_comma(info);
    static int num_condtional_4=0;
    add_come_code_at_function_head(info,"_Bool _condtional_value_X%d;\n",++num_condtional_4);
    num_condtional_stack_5=num_condtional_4;
    add_come_code(info,"(_condtional_value_X%d=(%s)),",num_condtional_stack_5,conditional_value->c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_condtional_value_X%d",num_condtional_stack_5);
    come_call_finalizer(CVALUE_finalize, conditional_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_6;
struct list_item$1sType$ph* prev_it_7;
    it_6=self->head;
    while(    it_6!=((void*)0)    ) {
        prev_it_7=it_6;
        it_6=it_6->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_8;
struct list_item$1sNode$ph* prev_it_9;
    it_8=self->head;
    while(    it_8!=((void*)0)    ) {
        prev_it_9=it_8;
        it_8=it_8->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_10;
struct list_item$1char$ph* prev_it_11;
    it_10=self->head;
    while(    it_10!=((void*)0)    ) {
        prev_it_11=it_10;
        it_10=it_10->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_12;
void* __right_value7 = (void*)0;
    input_file_name_12=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_12!=((void*)0)&&string_operator_not_equals(input_file_name_12,"")    ) {
        (void)system(((char*)(__right_value7=xsprintf("%s %s.*",RM,input_file_name_12))));
        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (input_file_name_12 = come_decrement_ref_count(input_file_name_12, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_13;
void* __right_value8 = (void*)0;
    input_file_name_13=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_13!=((void*)0)&&string_operator_not_equals(input_file_name_13,"")    ) {
        (void)system(((char*)(__right_value8=xsprintf("%s %s.i* %s.c*",RM,input_file_name_13,input_file_name_13))));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (input_file_name_13 = come_decrement_ref_count(input_file_name_13, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_14;
void* __right_value9 = (void*)0;
    input_file_name_14=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_14!=((void*)0)&&string_operator_not_equals(input_file_name_14,"")    ) {
        (void)system(((char*)(__right_value9=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_14,input_file_name_14))));
        (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (input_file_name_14 = come_decrement_ref_count(input_file_name_14, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_15;
char* output_file_name_16;
void* __right_value10 = (void*)0;
char* __dec_obj3;
void* __right_value11 = (void*)0;
char* __dec_obj4;
_Bool exist_common_h_17;
struct _IO_FILE* Value_18;
int is_mac_19;
int is_android_20;
int is_debian_21;
int is_linux_22;
int is_m5stack_23;
int is_pico_24;
int is_emb_25;
_Bool _32bit_26;
struct _IO_FILE* f_27;
int is_raspi_28;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
char* __dec_obj5;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
char* cmd3_29;
int rc_30;
void* __right_value17 = (void*)0;
char* command2_31;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
char* cmd2_32;
int rc_33;
void* __right_value20 = (void*)0;
char* command2_34;
void* __right_value21 = (void*)0;
char* command2_35;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
char* cmd2_36;
void* __right_value24 = (void*)0;
char* command2_37;
int rc_38;
void* __right_value25 = (void*)0;
char* command2_39;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
char* cmd2_40;
void* __right_value28 = (void*)0;
char* command2_41;
int rc_42;
void* __right_value29 = (void*)0;
char* command2_43;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
char* cmd3_44;
int rc_45;
void* __right_value32 = (void*)0;
char* command2_46;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
char* cmd4_47;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
char* __dec_obj6;
void* __right_value37 = (void*)0;
char* command2_48;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
char* cmd3_49;
int rc_50;
void* __right_value40 = (void*)0;
char* command2_51;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
char* cmd4_52;
void* __right_value43 = (void*)0;
char* command2_53;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
char* cmd3_54;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
char* __dec_obj7;
int rc_55;
void* __right_value48 = (void*)0;
char* command2_56;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
char* cmd4_57;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
char* __dec_obj8;
void* __right_value53 = (void*)0;
char* command2_58;
_Bool __result_obj__2;
output_file_name_16 = (void*)0;
memset(&is_raspi_28, 0, sizeof(int));
    input_file_name_15=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name    ) {
        __dec_obj3=output_file_name_16,
        output_file_name_16=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj4=output_file_name_16,
        output_file_name_16=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    exist_common_h_17=(_Bool)0;
    {
        Value_18=fopen("common.h","r");
        if(        Value_18        ) {
            exist_common_h_17=(_Bool)1;
            fclose(Value_18);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")        ) {
            exist_common_h_17=(_Bool)0;
        }
        if(        !gCommonHeader        ) {
            exist_common_h_17=(_Bool)0;
        }
    }
    is_mac_19=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    is_android_20=system("uname -a | grep Android 1> /dev/null 2>/dev/null")==0;
    is_debian_21=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
    is_linux_22=1;
    is_m5stack_23=info->m5stack_cpp;
    is_pico_24=info->pico_cpp;
    is_emb_25=info->emb_cpp;
    _32bit_26=(_Bool)0;
    f_27=fopen("/proc/cpuinfo","r");
    if(    f_27    ) {
        fclose(f_27);
        is_raspi_28=system("cat /proc/cpuinfo | grep 'Model' | grep 'Raspberry Pi' > /dev/null 2> /dev/null ")==0;
        if(        is_raspi_28        ) {
            _32bit_26=system(" lscpu | grep armv7l > /dev/null 2> /dev/null ")==0;
        }
    }
    else {
        is_raspi_28=0;
    }
    if(    is_pico_24||is_m5stack_23    ) {
        _32bit_26=(_Bool)1;
    }
    if(    _32bit_26    ) {
        __dec_obj5=info->cpp_option,
        info->cpp_option=(char*)come_increment_ref_count(string_operator_add(info->cpp_option,((char*)(__right_value13=xsprintf(" -D__32BIT_CPU__ ")))));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    is_android_20    ) {
        cmd3_29=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value15=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
        (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->verbose        ) {
            puts(cmd3_29);
        }
        rc_30=system(cmd3_29);
        command2_31=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_31);
        }
        (void)system(command2_31);
        if(        rc_30!=0        ) {
            printf("cpp failed(%s)\n",command2_31);
            exit(2);
        }
        (cmd3_29 = come_decrement_ref_count(cmd3_29, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_31 = come_decrement_ref_count(command2_31, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    is_m5stack_23    ) {
        cmd2_32=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value18=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
        (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->verbose        ) {
            puts(cmd2_32);
        }
        rc_33=system(cmd2_32);
        command2_34=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_34);
        }
        (void)system(command2_34);
        if(        rc_33!=0        ) {
            printf("failed to cpp(2) (%s)\n",cmd2_32);
            exit(5);
        }
        (command2_34 = come_decrement_ref_count(command2_34, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        command2_35=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_35);
        }
        (void)system(command2_35);
        (cmd2_32 = come_decrement_ref_count(cmd2_32, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_35 = come_decrement_ref_count(command2_35, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    is_pico_24    ) {
        cmd2_36=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value22=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
        (__right_value22 = come_decrement_ref_count(__right_value22, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->verbose        ) {
            puts(cmd2_36);
        }
        command2_37=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_37);
        }
        (void)system(command2_37);
        rc_38=system(cmd2_36);
        if(        rc_38!=0        ) {
            printf("failed to cpp(2) (%s)\n",cmd2_36);
            exit(5);
        }
        (command2_37 = come_decrement_ref_count(command2_37, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        command2_39=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_39);
        }
        (void)system(command2_39);
        (cmd2_36 = come_decrement_ref_count(cmd2_36, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_39 = come_decrement_ref_count(command2_39, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    is_mac_19    ) {
        cmd2_40=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value26=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
        (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->verbose        ) {
            puts(cmd2_40);
        }
        command2_41=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_41);
        }
        (void)system(command2_41);
        rc_42=system(cmd2_40);
        if(        rc_42!=0        ) {
            printf("failed to cpp(2) (%s)\n",cmd2_40);
            exit(5);
        }
        (command2_41 = come_decrement_ref_count(command2_41, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        command2_43=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_43);
        }
        (void)system(command2_43);
        (cmd2_40 = come_decrement_ref_count(cmd2_40, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_43 = come_decrement_ref_count(command2_43, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    is_emb_25    ) {
        cmd3_44=(char*)come_increment_ref_count(xsprintf("clang -E %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value30=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
        (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->verbose        ) {
            puts(cmd3_44);
        }
        rc_45=system(cmd3_44);
        command2_46=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_46);
        }
        (void)system(command2_46);
        if(        rc_45!=0        ) {
            cmd4_47=(char*)come_increment_ref_count(xsprintf("clang -E %s -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value33=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
            (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            is_debian_21            ) {
                __dec_obj6=cmd4_47,
                cmd4_47=(char*)come_increment_ref_count(xsprintf("clang -E %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value35=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
                __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            command2_48=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
            if(            info->verbose            ) {
                puts(command2_48);
            }
            (void)system(command2_48);
            if(            rc_45!=0            ) {
                printf("failed to cpp(2) (%s)\n",cmd4_47);
                exit(5);
            }
            (cmd4_47 = come_decrement_ref_count(cmd4_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (command2_48 = come_decrement_ref_count(command2_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (cmd3_44 = come_decrement_ref_count(cmd3_44, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_46 = come_decrement_ref_count(command2_46, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    is_raspi_28    ) {
        cmd3_49=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value38=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
        (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        info->verbose        ) {
            puts(cmd3_49);
        }
        rc_50=system(cmd3_49);
        command2_51=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_51);
        }
        (void)system(command2_51);
        if(        rc_50!=0        ) {
            cmd4_52=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value41=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
            (__right_value41 = come_decrement_ref_count(__right_value41, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            command2_53=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
            if(            info->verbose            ) {
                puts(command2_53);
            }
            (void)system(command2_53);
            if(            rc_50!=0            ) {
                printf("failed to cpp(2) (%s)\n",cmd4_52);
                exit(5);
            }
            (cmd4_52 = come_decrement_ref_count(cmd4_52, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (command2_53 = come_decrement_ref_count(command2_53, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (cmd3_49 = come_decrement_ref_count(cmd3_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_51 = come_decrement_ref_count(command2_51, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    is_linux_22    ) {
        cmd3_54=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value44=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
        (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        is_debian_21        ) {
            __dec_obj7=cmd3_54,
            cmd3_54=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value46=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
            __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        info->verbose        ) {
            puts(cmd3_54);
        }
        rc_55=system(cmd3_54);
        command2_56=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
        if(        info->verbose        ) {
            puts(command2_56);
        }
        (void)system(command2_56);
        if(        rc_55!=0        ) {
            cmd4_57=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value49=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
            (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            is_debian_21            ) {
                __dec_obj8=cmd4_57,
                cmd4_57=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_17)?(((char*)(__right_value51=__builtin_string(" -include common.h ")))):("")),input_file_name_15,output_file_name_16,output_file_name_16));
                __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            command2_58=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out 2>/dev/null",output_file_name_16));
            if(            info->verbose            ) {
                puts(command2_58);
            }
            (void)system(command2_58);
            if(            rc_55!=0            ) {
                printf("failed to cpp(2) (%s)\n",cmd4_57);
                exit(5);
            }
            (cmd4_57 = come_decrement_ref_count(cmd4_57, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (command2_58 = come_decrement_ref_count(command2_58, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (cmd3_54 = come_decrement_ref_count(cmd3_54, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (command2_56 = come_decrement_ref_count(command2_56, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__2 = (_Bool)1;
    (input_file_name_15 = come_decrement_ref_count(input_file_name_15, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (output_file_name_16 = come_decrement_ref_count(output_file_name_16, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__2;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1char$ph* object_files){
void* __right_value54 = (void*)0;
char* input_file_name_59;
char* output_file_name_60;
void* __right_value55 = (void*)0;
char* __dec_obj9;
void* __right_value56 = (void*)0;
char* __dec_obj10;
int is_mac_61;
void* __if_result__0_62 = (void*)0;
void* __right_value57 = (void*)0;
char* __dec_obj11;
void* __right_value58 = (void*)0;
char* command_63;
int rc_64;
void* __right_value59 = (void*)0;
char* __dec_obj12;
int rc_65;
void* __right_value60 = (void*)0;
char* command2_66;
void* __right_value67 = (void*)0;
_Bool __result_obj__6;
output_file_name_60 = (void*)0;
    input_file_name_59=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file    ) {
        __dec_obj9=output_file_name_60,
        output_file_name_60=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj10=output_file_name_60,
        output_file_name_60=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    is_mac_61=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_61    ) {
        __dec_obj11=info->clang_option,
        __if_result__0_62=(void*)((char*)come_increment_ref_count(info->clang_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option," -std=gnu17 "))));
;
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    command_63=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_60,input_file_name_59,info->clang_option,input_file_name_59));
    if(    info->verbose    ) {
        puts(command_63);
    }
    rc_64=system(command_63);
    if(    rc_64!=0    ) {
        __dec_obj12=command_63,
        command_63=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_60,input_file_name_59,info->clang_option,input_file_name_59));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        info->verbose        ) {
            puts(command_63);
        }
        rc_65=system(command_63);
        if(        rc_65!=0        ) {
            printf("%s is faild\n",CC);
            command2_66=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out 2>/dev/null",input_file_name_59));
            if(            info->verbose            ) {
                puts(command2_66);
            }
            (void)system(command2_66);
            exit(2);
            (command2_66 = come_decrement_ref_count(command2_66, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(    !output_object_file    ) {
        list$1char$ph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_60)));
    }
    __result_obj__6 = (_Bool)1;
    (input_file_name_59 = come_decrement_ref_count(input_file_name_59, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (output_file_name_60 = come_decrement_ref_count(output_file_name_60, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__if_result__0_62 = come_decrement_ref_count(__if_result__0_62, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (command_63 = come_decrement_ref_count(command_63, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__6;
}

static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item){
int len_67;
int i_68;
char* default_value_69;
struct list$1char$ph* __result_obj__4;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_73;
char* __dec_obj16;
void* __right_value65 = (void*)0;
struct list_item$1char$ph* litem_74;
char* __dec_obj17;
struct list_item$1char$ph* it_75;
int i_76;
void* __right_value66 = (void*)0;
struct list_item$1char$ph* litem_77;
char* __dec_obj18;
struct list$1char$ph* __result_obj__5;
default_value_69 = (void*)0;
    if(    position<0    ) {
        position+=self->len+1;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_67=self->len;
        for(        i_68=0        ;        i_68<position-len_67        ;        i_68++        ){
            memset(&default_value_69,0,sizeof(char*));
            list$1char$ph_push_back(self,(char*)come_increment_ref_count(default_value_69));
            (default_value_69 = come_decrement_ref_count(default_value_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(item));
        __result_obj__4 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__4;
    }
    if(    position==0    ) {
        litem_73=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1174, "struct list_item$1char$ph*"))));
        litem_73->prev=((void*)0);
        litem_73->next=self->head;
        __dec_obj16=litem_73->item,
        litem_73->item=(char*)come_increment_ref_count(item);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->head->prev=litem_73;
        self->head=litem_73;
        self->len++;
    }
    else if(    self->len==1    ) {
        litem_74=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value65=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1186, "struct list_item$1char$ph*"))));
        litem_74->prev=self->head;
        litem_74->next=self->tail;
        __dec_obj17=litem_74->item,
        litem_74->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->prev=litem_74;
        self->head->next=litem_74;
        self->len++;
    }
    else {
        it_75=self->head;
        i_76=0;
        while(        it_75!=((void*)0)        ) {
            if(            position==i_76            ) {
                litem_77=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value66=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1202, "struct list_item$1char$ph*"))));
                litem_77->prev=it_75->prev;
                litem_77->next=it_75;
                __dec_obj18=litem_77->item,
                litem_77->item=(char*)come_increment_ref_count(item);
                __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                it_75->prev->next=litem_77;
                it_75->prev=litem_77;
                self->len++;
            }
            it_75=it_75->next;
            i_76++;
        }
    }
    __result_obj__5 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__5;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value61 = (void*)0;
struct list_item$1char$ph* litem_70;
char* __dec_obj13;
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_71;
char* __dec_obj14;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_72;
char* __dec_obj15;
struct list$1char$ph* __result_obj__3;
    if(    self->len==0    ) {
        litem_70=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value61=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1014, "struct list_item$1char$ph*"))));
        litem_70->prev=((void*)0);
        litem_70->next=((void*)0);
        __dec_obj13=litem_70->item,
        litem_70->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_70;
        self->head=litem_70;
    }
    else if(    self->len==1    ) {
        litem_71=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1024, "struct list_item$1char$ph*"))));
        litem_71->prev=self->head;
        litem_71->next=((void*)0);
        __dec_obj14=litem_71->item,
        litem_71->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_71;
        self->head->next=litem_71;
    }
    else {
        litem_72=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1034, "struct list_item$1char$ph*"))));
        litem_72->prev=self->tail;
        litem_72->next=((void*)0);
        __dec_obj15=litem_72->item,
        litem_72->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_72;
        self->tail=litem_72;
    }
    self->len++;
    __result_obj__3 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__3;
}

static _Bool linker(struct sInfo* info, struct list$1char$ph* object_files){
char* output_file_name_78;
void* __right_value68 = (void*)0;
char* __dec_obj19;
void* __right_value69 = (void*)0;
char* __dec_obj20;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct buffer* command_79;
int is_mac_80;
void* __if_result__1_81 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
char* __dec_obj21;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1char$ph* o2_saved_82;
char* it_85;
int is_mac_88;
void* __right_value78 = (void*)0;
char* cmd_89;
int rc_90;
void* __right_value79 = (void*)0;
char* cmd_91;
int rc_92;
void* __right_value80 = (void*)0;
char* cmd_93;
int rc_94;
int is_apline_95;
int is_debian_96;
int is_android_97;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
int Value_98;
_Bool _condtional_value_X1;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
char* str_99;
int Value_100;
_Bool __result_obj__13;
_Bool __result_obj__14;
    output_file_name_78=((void*)0);
    if(    info->output_file_name    ) {
        __dec_obj19=output_file_name_78,
        output_file_name_78=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj20=output_file_name_78,
        output_file_name_78=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    command_79=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 386, "struct buffer*"))));
    buffer_append_format(command_79,"%s -o %s ",CC,output_file_name_78);
    is_mac_80=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_80    ) {
        __dec_obj21=info->linker_option,
        __if_result__1_81=(void*)((char*)come_increment_ref_count(info->linker_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option,((char*)(__right_value73=xsprintf(" -std=gnu17 ")))))));
;
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    buffer_append_str(command_79,((char*)(__right_value77=string_operator_add(((char*)(__right_value76=charp_operator_add(" ",info->linker_option)))," "))));
    (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    for(    o2_saved_82=(object_files),it_85=list$1char$ph_begin((o2_saved_82))    ;    !list$1char$ph_end((o2_saved_82))    ;    it_85=list$1char$ph_next((o2_saved_82))    ){
        buffer_append_format(command_79,"%s ",it_85);
    }
    is_mac_88=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_88    ) {
        buffer_append_str(command_79," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_89=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_90=system(cmd_89);
    if(    rc_90==0    ) {
        buffer_append_str(command_79," -L. -L/usr/local/lib ");
    }
    (cmd_89 = come_decrement_ref_count(cmd_89, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    cmd_91=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_92=system(cmd_91);
    if(    rc_92==0    ) {
        buffer_append_format(command_79," -L%s/lib ",getenv("HOME"));
    }
    (cmd_91 = come_decrement_ref_count(cmd_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    cmd_93=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_94=system(cmd_93);
    if(    rc_94==0    ) {
        buffer_append_format(command_79," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_79," %s ",info->clang_option);
    if(    gComeStr    ) {
        buffer_append_format(command_79," -lpcre ");
    }
    if(    gComeGC    ) {
        buffer_append_str(command_79," -lgc ");
    }
    if(    gComePthread    ) {
        buffer_append_str(command_79," -lpthread ");
    }
    if(    gComeNet    ) {
        is_apline_95=system("which apk 1> /dev/null 2>/dev/null")==0;
        is_debian_96=system("uname -a | grep Debian 1> /dev/null 2>/dev/null")==0;
        is_android_97=system("uname -a | grep Android 1>/dev/null 2>/dev/null")==0;
        if(        is_android_97        ) {
            buffer_append_str(command_79," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(        is_apline_95||is_debian_96        ) {
            buffer_append_str(command_79," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(        is_mac_88        ) {
            buffer_append_format(command_79," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command_79," -lssl `mysql_config --cflags --libs`");
        }
    }
    if(    info->verbose    ) {
        puts(((char*)(__right_value81=buffer_to_string(command_79))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    Value_98=system(((char*)(__right_value82=buffer_to_string(command_79))));
    if(    (_condtional_value_X1=(Value_98)),    (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    _condtional_value_X1    ) {
        str_99=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value86=xsprintf("gcc"))),((char*)(__right_value88=charp_substring(((char*)(__right_value87=buffer_to_string(command_79))),strlen(CC),-1)))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        Value_100=system(str_99);
        if(        Value_100        ) {
            printf("%s is failed\n",CC);
            __result_obj__13 = (_Bool)0;
            (str_99 = come_decrement_ref_count(str_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (output_file_name_78 = come_decrement_ref_count(output_file_name_78, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, command_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (__if_result__1_81 = come_decrement_ref_count(__if_result__1_81, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (cmd_93 = come_decrement_ref_count(cmd_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__13;
        }
        else {
        }
        (str_99 = come_decrement_ref_count(str_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
    }
    __result_obj__14 = (_Bool)1;
    (output_file_name_78 = come_decrement_ref_count(output_file_name_78, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, command_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__if_result__1_81 = come_decrement_ref_count(__if_result__1_81, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (cmd_93 = come_decrement_ref_count(cmd_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_83;
char* __result_obj__7;
char* __result_obj__8;
char* result_84;
char* __result_obj__9;
result_83 = (void*)0;
result_84 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_83,0,sizeof(char*));
        __result_obj__7 = result_83;
        return __result_obj__7;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__8 = self->it->item;
        return __result_obj__8;
    }
    memset(&result_84,0,sizeof(char*));
    __result_obj__9 = result_84;
    return __result_obj__9;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_86;
char* __result_obj__10;
char* __result_obj__11;
char* result_87;
char* __result_obj__12;
result_86 = (void*)0;
result_87 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_86,0,sizeof(char*));
        __result_obj__10 = result_86;
        return __result_obj__10;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__11 = self->it->item;
        return __result_obj__11;
    }
    memset(&result_87,0,sizeof(char*));
    __result_obj__12 = result_87;
    return __result_obj__12;
}

_Bool new_project(int argc, char** argv){
void* __right_value90 = (void*)0;
char* project_name_101;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
char* project_name_debug_102;
void* __right_value96 = (void*)0;
char* cc_103;
void* __right_value97 = (void*)0;
char* install_104;
void* __right_value98 = (void*)0;
char* libs_105;
void* __right_value99 = (void*)0;
char* os_106;
void* __right_value100 = (void*)0;
char* prefix_107;
void* __right_value101 = (void*)0;
char* cflags_108;
void* __right_value102 = (void*)0;
char* cflags_debug_109;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
int Value_110;
_Bool _condtional_value_X2;
_Bool __exception_result_var_b1;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
_Bool __result_obj__15;
    project_name_101=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_102=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value93=__builtin_string(argv[2]))),((char*)(__right_value94=__builtin_string("-debug")))));
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    cc_103=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_104=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_105=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_106=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_107=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_108=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_109=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg -g "));
    Value_110=system(((char*)(__right_value104=xsprintf("mkdir \%s",((char*)(__right_value103=string_to_string(project_name_101)))))));
    if(    (_condtional_value_X2=(Value_110<0)),    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    _condtional_value_X2    ) {
        (come_push_stackframe("02transpile.c", 486, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value130=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c tmp-common-header.*\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value105=string_to_string(project_name_101))),((char*)(__right_value106=string_to_string(project_name_101))),((char*)(__right_value107=string_to_string(project_name_101))),((char*)(__right_value108=string_to_string(project_name_101))),((char*)(__right_value109=string_to_string(cc_103))),((char*)(__right_value110=string_to_string(install_104))),((char*)(__right_value111=string_to_string(cflags_108))),((char*)(__right_value112=string_to_string(cflags_debug_109))),((char*)(__right_value113=string_to_string(libs_105))),((char*)(__right_value114=string_to_string(os_106))),((char*)(__right_value115=string_to_string(prefix_107))),((char*)(__right_value116=string_to_string(project_name_101))),((char*)(__right_value117=string_to_string(project_name_debug_102))),((char*)(__right_value118=string_to_string(project_name_101))),((char*)(__right_value119=string_to_string(project_name_101))),((char*)(__right_value120=string_to_string(project_name_101))),((char*)(__right_value121=string_to_string(project_name_101))),((char*)(__right_value122=string_to_string(project_name_debug_102))),((char*)(__right_value123=string_to_string(project_name_101))),((char*)(__right_value124=string_to_string(project_name_101))),((char*)(__right_value125=string_to_string(project_name_101))),((char*)(__right_value126=string_to_string(project_name_101))),((char*)(__right_value127=string_to_string(project_name_101))),((char*)(__right_value128=string_to_string(project_name_debug_102))),((char*)(__right_value129=string_to_string(project_name_debug_102)))))),((char*)(__right_value132=xsprintf("\%s/Makefile",((char*)(__right_value131=string_to_string(project_name_101)))))),(_Bool)0);
    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __result_obj__15 = (_Bool)1;
    (project_name_101 = come_decrement_ref_count(project_name_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (project_name_debug_102 = come_decrement_ref_count(project_name_debug_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (cc_103 = come_decrement_ref_count(cc_103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (install_104 = come_decrement_ref_count(install_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (libs_105 = come_decrement_ref_count(libs_105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (os_106 = come_decrement_ref_count(os_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (prefix_107 = come_decrement_ref_count(prefix_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (cflags_108 = come_decrement_ref_count(cflags_108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (cflags_debug_109 = come_decrement_ref_count(cflags_debug_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__15;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* Value_111;
int Value_112;
_Bool __exception_result_var_b2;
int Value_113;
_Bool __exception_result_var_b3;
int Value_114;
_Bool __exception_result_var_b4;
    Value_111=fopen("common.h","r");
    if(    Value_111    ) {
        fclose(Value_111);
    }
    else {
        Value_112=system("make header");
        if(        Value_112<0        ) {
            (come_push_stackframe("02transpile.c", 592, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_113=system("make compile -j$(($(nproc)/2))");
    if(    Value_113<0    ) {
        (come_push_stackframe("02transpile.c", 602, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    Value_114=system("make run");
    if(    Value_114<0    ) {
        (come_push_stackframe("02transpile.c", 607, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_115;
_Bool __exception_result_var_b5;
    Value_115=system("make header");
    if(    Value_115<0    ) {
        (come_push_stackframe("02transpile.c", 616, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* Value_116;
int Value_117;
_Bool __exception_result_var_b6;
int Value_118;
_Bool __exception_result_var_b7;
    Value_116=fopen("common.h","r");
    if(    Value_116    ) {
        fclose(Value_116);
    }
    else {
        Value_117=system("make header");
        if(        Value_117<0        ) {
            (come_push_stackframe("02transpile.c", 629, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
        }
        else {
        }
    }
    Value_118=system("make compile -j$(($(nproc)/2))");
    if(    Value_118<0    ) {
        (come_push_stackframe("02transpile.c", 639, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* Value_119;
int Value_120;
_Bool __exception_result_var_b8;
int Value_121;
_Bool __exception_result_var_b9;
    Value_119=fopen("common.h","r");
    if(    Value_119    ) {
        fclose(Value_119);
    }
    else {
        Value_120=system("make header");
        if(        Value_120<0        ) {
            (come_push_stackframe("02transpile.c", 653, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
        }
        else {
        }
    }
    Value_121=system("make debug -j$(($(nproc)/2))");
    if(    Value_121<0    ) {
        (come_push_stackframe("02transpile.c", 663, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_122;
_Bool __exception_result_var_b10;
    Value_122=system("make clean");
    if(    Value_122<0    ) {
        (come_push_stackframe("02transpile.c", 673, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
int Value_123;
_Bool _condtional_value_X3;
_Bool __exception_result_var_b11;
    Value_123=system(((char*)(__right_value134=xsprintf("make install DESTDIR=\%s",((char*)(__right_value133=charp_to_string(prefix)))))));
    if(    (_condtional_value_X3=(Value_123<0)),    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
    _condtional_value_X3    ) {
        (come_push_stackframe("02transpile.c", 682, 10),__exception_result_var_b11=die("system"), come_pop_stackframe(), __exception_result_var_b11);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
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
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
int i_163;
void* __right_value192 = (void*)0;
char* generics_type_164;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
int i_165;
void* __right_value195 = (void*)0;
char* generics_type_166;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
int is_mac_167;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
char* type_name_168;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sType* type_169;
void* __right_value206 = (void*)0;
char* __dec_obj22;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sClass* klass_191;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 690, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 691, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 692, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 693, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 694, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 695, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 696, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 697, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 698, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 699, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("_Float16")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 700, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 701, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__uint128_t")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 702, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__int128")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
    for(    i_163=0    ;    i_163<12    ;    i_163++    ){
        generics_type_164=(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_163));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type_164),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 705, "struct sClass*")),(char*)come_increment_ref_count(generics_type_164),(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_163,-1,(_Bool)0,(_Bool)0,info)));
        (generics_type_164 = come_decrement_ref_count(generics_type_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    for(    i_165=0    ;    i_165<7    ;    i_165++    ){
        generics_type_166=(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_165));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(generics_type_166),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 709, "struct sClass*")),(char*)come_increment_ref_count(generics_type_166),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_165,(_Bool)0,(_Bool)0,info)));
        (generics_type_166 = come_decrement_ref_count(generics_type_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    is_mac_167=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null")==0;
    if(    is_mac_167    ) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 714, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        type_name_168=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_169=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 718, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,info));
        __dec_obj22=type_169->mOriginalTypeName,
        type_169->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_168)),(struct sType*)come_increment_ref_count(type_169));
        (type_name_168 = come_decrement_ref_count(type_name_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        klass_191=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "02transpile.c", 724, "struct sClass*")),(char*)come_increment_ref_count(xsprintf("__builtin_va_list")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_191->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 726, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 726, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_191->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 727, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 727, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_191->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 728, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 728, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_191->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 729, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 729, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        list$1tuple2$2char$phsType$ph$ph_push_back(klass_191->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "02transpile.c", 730, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "02transpile.c", 730, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info)))));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_191));
        come_call_finalizer(sClass_finalize, klass_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_143;
unsigned int it_144;
_Bool same_key_exist_161;
char* it2_162;
struct map$2char$phsClass$ph* __result_obj__30;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_143=string_get_hash_key(((char*)key))%self->size;
    it_144=hash_143;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_144]        ) {
            if(            string_equals(self->keys[it_144],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_144]);
                    (self->keys[it_144] = come_decrement_ref_count(self->keys[it_144], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_144]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_144]);
                    self->keys[it_144]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it_144], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_144]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_144]=item;
                }
                break;
            }
            it_144++;
            if(            it_144>=self->size            ) {
                it_144=0;
            }
            else if(            it_144==hash_143            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_144]=(_Bool)1;
            if(            1            ) {
                self->keys[it_144]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_144]=key;
            }
            if(            1            ) {
                self->items[it_144]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_144]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_161=(_Bool)0;
    for(    it2_162=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_162=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_162,key)        ) {
            same_key_exist_161=(_Bool)1;
        }
    }
    if(    !same_key_exist_161    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__30 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_124;
void* __right_value135 = (void*)0;
char** keys_125;
void* __right_value136 = (void*)0;
struct sClass** items_126;
void* __right_value137 = (void*)0;
_Bool* item_existance_127;
int len_128;
char* it_131;
struct sClass* default_value_134;
void* __right_value138 = (void*)0;
struct sClass* it2_135;
unsigned int hash_140;
int n_141;
struct sClass* default_value_142;
void* __right_value139 = (void*)0;
default_value_134 = (void*)0;
default_value_142 = (void*)0;
    size_124=self->size*10;
    keys_125=(char**)come_increment_ref_count(((char**)(__right_value135=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_124)), "./comelang.h", 2051, "char**"))));
    items_126=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value136=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_124)), "./comelang.h", 2052, "struct sClass**"))));
    item_existance_127=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value137=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_124)), "./comelang.h", 2053, "_Bool*"))));
    len_128=0;
    for(    it_131=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it_131=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_134,0,sizeof(struct sClass*));
        it2_135=((struct sClass*)(__right_value138=map$2char$phsClass$ph_at(self,it_131,(struct sClass*)come_increment_ref_count(default_value_134))));
        come_call_finalizer(sClass_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_140=string_get_hash_key(((char*)it_131))%size_124;
        n_141=hash_140;
        while(        (_Bool)1        ) {
            if(            item_existance_127[n_141]            ) {
                n_141++;
                if(                n_141>=size_124                ) {
                    n_141=0;
                }
                else if(                n_141==hash_140                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_127[n_141]=(_Bool)1;
                keys_125[n_141]=it_131;
                items_126[n_141]=((struct sClass*)(__right_value139=map$2char$phsClass$ph_at(self,it_131,(struct sClass*)come_increment_ref_count(default_value_142))));
                come_call_finalizer(sClass_finalize, __right_value139, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_128++;
                come_call_finalizer(sClass_finalize, default_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_125;
    self->items=items_126;
    self->item_existance=item_existance_127;
    self->size=size_124;
    self->len=len_128;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_129;
char* __result_obj__16;
char* __result_obj__17;
char* result_130;
char* __result_obj__18;
result_129 = (void*)0;
result_130 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_129,0,sizeof(char*));
        __result_obj__16 = result_129;
        return __result_obj__16;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__17 = self->key_list->it->item;
        return __result_obj__17;
    }
    memset(&result_130,0,sizeof(char*));
    __result_obj__18 = result_130;
    return __result_obj__18;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_132;
char* __result_obj__19;
char* __result_obj__20;
char* result_133;
char* __result_obj__21;
result_132 = (void*)0;
result_133 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_132,0,sizeof(char*));
        __result_obj__19 = result_132;
        return __result_obj__19;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__20 = self->key_list->it->item;
        return __result_obj__20;
    }
    memset(&result_133,0,sizeof(char*));
    __result_obj__21 = result_133;
    return __result_obj__21;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_136;
unsigned int it_137;
struct sClass* __result_obj__22;
struct sClass* __result_obj__23;
struct sClass* __result_obj__24;
struct sClass* __result_obj__25;
    hash_136=string_get_hash_key(((char*)key))%self->size;
    it_137=hash_136;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_137]        ) {
            if(            string_equals(self->keys[it_137],key)            ) {
                __result_obj__22 = (struct sClass*)come_increment_ref_count(self->items[it_137]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__22;
            }
            it_137++;
            if(            it_137>=self->size            ) {
                it_137=0;
            }
            else if(            it_137==hash_136            ) {
                __result_obj__23 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__23;
            }
        }
        else {
            __result_obj__24 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__24;
        }
    }
    __result_obj__25 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_138;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_139;
    it_138=self->head;
    while(    it_138!=((void*)0)    ) {
        prev_it_139=it_138;
        it_138=it_138->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_145;
struct list_item$1char$ph* it_146;
struct list$1char$ph* __result_obj__29;
    it2_145=0;
    it_146=self->head;
    while(    it_146!=((void*)0)    ) {
        if(        string_equals(it_146->item,item)        ) {
            list$1char$ph_delete(self,it2_145,it2_145+1);
            break;
        }
        it2_145++;
        it_146=it_146->next;
    }
    __result_obj__29 = self;
    return __result_obj__29;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_147;
struct list$1char$ph* __result_obj__26;
struct list_item$1char$ph* it_150;
int i_151;
struct list_item$1char$ph* prev_it_152;
struct list_item$1char$ph* it_153;
int i_154;
struct list_item$1char$ph* prev_it_155;
struct list_item$1char$ph* it_156;
struct list_item$1char$ph* head_prev_it_157;
struct list_item$1char$ph* tail_it_158;
int i_159;
struct list_item$1char$ph* prev_it_160;
struct list$1char$ph* __result_obj__28;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_147=tail;
        tail=head;
        head=tmp_147;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__26 = self;
        return __result_obj__26;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_150=self->head;
        i_151=0;
        while(        it_150!=((void*)0)        ) {
            if(            i_151<tail            ) {
                prev_it_152=it_150;
                it_150=it_150->next;
                i_151++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_151==tail            ) {
                self->head=it_150;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_150=it_150->next;
                i_151++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_153=self->head;
        i_154=0;
        while(        it_153!=((void*)0)        ) {
            if(            i_154==head            ) {
                self->tail=it_153->prev;
                self->tail->next=((void*)0);
            }
            if(            i_154>=head            ) {
                prev_it_155=it_153;
                it_153=it_153->next;
                i_154++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_153=it_153->next;
                i_154++;
            }
        }
    }
    else {
        it_156=self->head;
        head_prev_it_157=((void*)0);
        tail_it_158=((void*)0);
        i_159=0;
        while(        it_156!=((void*)0)        ) {
            if(            i_159==head            ) {
                head_prev_it_157=it_156->prev;
            }
            if(            i_159==tail            ) {
                tail_it_158=it_156;
            }
            if(            i_159>=head&&i_159<tail            ) {
                prev_it_160=it_156;
                it_156=it_156->next;
                i_159++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_156=it_156->next;
                i_159++;
            }
        }
        if(        head_prev_it_157!=((void*)0)        ) {
            head_prev_it_157->next=tail_it_158;
        }
        if(        tail_it_158!=((void*)0)        ) {
            tail_it_158->prev=head_prev_it_157;
        }
    }
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_148;
struct list_item$1char$ph* prev_it_149;
struct list$1char$ph* __result_obj__27;
    it_148=self->head;
    while(    it_148!=((void*)0)    ) {
        prev_it_149=it_148;
        it_148=it_148->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_187;
unsigned int it_188;
_Bool same_key_exist_189;
char* it2_190;
struct map$2char$phsType$ph* __result_obj__41;
    if(    self->len*10>=self->size    ) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_187=string_get_hash_key(((char*)key))%self->size;
    it_188=hash_187;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_188]        ) {
            if(            string_equals(self->keys[it_188],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_188]);
                    (self->keys[it_188] = come_decrement_ref_count(self->keys[it_188], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_188]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_188]);
                    self->keys[it_188]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sType_finalize, self->items[it_188], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_188]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_188]=item;
                }
                break;
            }
            it_188++;
            if(            it_188>=self->size            ) {
                it_188=0;
            }
            else if(            it_188==hash_187            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_188]=(_Bool)1;
            if(            1            ) {
                self->keys[it_188]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_188]=key;
            }
            if(            1            ) {
                self->items[it_188]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_188]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_189=(_Bool)0;
    for(    it2_190=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_190=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_190,key)        ) {
            same_key_exist_189=(_Bool)1;
        }
    }
    if(    !same_key_exist_189    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__41 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_170;
void* __right_value207 = (void*)0;
char** keys_171;
void* __right_value208 = (void*)0;
struct sType** items_172;
void* __right_value209 = (void*)0;
_Bool* item_existance_173;
int len_174;
char* it_177;
struct sType* default_value_180;
void* __right_value210 = (void*)0;
struct sType* it2_181;
unsigned int hash_184;
int n_185;
struct sType* default_value_186;
void* __right_value211 = (void*)0;
default_value_180 = (void*)0;
default_value_186 = (void*)0;
    size_170=self->size*10;
    keys_171=(char**)come_increment_ref_count(((char**)(__right_value207=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_170)), "./comelang.h", 2051, "char**"))));
    items_172=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value208=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size_170)), "./comelang.h", 2052, "struct sType**"))));
    item_existance_173=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value209=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_170)), "./comelang.h", 2053, "_Bool*"))));
    len_174=0;
    for(    it_177=map$2char$phsType$ph_begin(self)    ;    !map$2char$phsType$ph_end(self)    ;    it_177=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_180,0,sizeof(struct sType*));
        it2_181=((struct sType*)(__right_value210=map$2char$phsType$ph_at(self,it_177,(struct sType*)come_increment_ref_count(default_value_180))));
        come_call_finalizer(sType_finalize, __right_value210, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_184=string_get_hash_key(((char*)it_177))%size_170;
        n_185=hash_184;
        while(        (_Bool)1        ) {
            if(            item_existance_173[n_185]            ) {
                n_185++;
                if(                n_185>=size_170                ) {
                    n_185=0;
                }
                else if(                n_185==hash_184                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_173[n_185]=(_Bool)1;
                keys_171[n_185]=it_177;
                items_172[n_185]=((struct sType*)(__right_value211=map$2char$phsType$ph_at(self,it_177,(struct sType*)come_increment_ref_count(default_value_186))));
                come_call_finalizer(sType_finalize, __right_value211, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_174++;
                come_call_finalizer(sType_finalize, default_value_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_171;
    self->items=items_172;
    self->item_existance=item_existance_173;
    self->size=size_170;
    self->len=len_174;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_175;
char* __result_obj__31;
char* __result_obj__32;
char* result_176;
char* __result_obj__33;
result_175 = (void*)0;
result_176 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_175,0,sizeof(char*));
        __result_obj__31 = result_175;
        return __result_obj__31;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__32 = self->key_list->it->item;
        return __result_obj__32;
    }
    memset(&result_176,0,sizeof(char*));
    __result_obj__33 = result_176;
    return __result_obj__33;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_178;
char* __result_obj__34;
char* __result_obj__35;
char* result_179;
char* __result_obj__36;
result_178 = (void*)0;
result_179 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_178,0,sizeof(char*));
        __result_obj__34 = result_178;
        return __result_obj__34;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__35 = self->key_list->it->item;
        return __result_obj__35;
    }
    memset(&result_179,0,sizeof(char*));
    __result_obj__36 = result_179;
    return __result_obj__36;
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_182;
unsigned int it_183;
struct sType* __result_obj__37;
struct sType* __result_obj__38;
struct sType* __result_obj__39;
struct sType* __result_obj__40;
    hash_182=string_get_hash_key(((char*)key))%self->size;
    it_183=hash_182;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_183]        ) {
            if(            string_equals(self->keys[it_183],key)            ) {
                __result_obj__37 = (struct sType*)come_increment_ref_count(self->items[it_183]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__37;
            }
            it_183++;
            if(            it_183>=self->size            ) {
                it_183=0;
            }
            else if(            it_183==hash_182            ) {
                __result_obj__38 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value216 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_192;
struct tuple2$2char$phsType$ph* __dec_obj23;
void* __right_value217 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_193;
struct tuple2$2char$phsType$ph* __dec_obj24;
void* __right_value218 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_194;
struct tuple2$2char$phsType$ph* __dec_obj25;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__42;
    if(    self->len==0    ) {
        litem_192=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value216=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1014, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_192->prev=((void*)0);
        litem_192->next=((void*)0);
        __dec_obj23=litem_192->item,
        litem_192->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_192;
        self->head=litem_192;
    }
    else if(    self->len==1    ) {
        litem_193=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value217=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1024, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_193->prev=self->head;
        litem_193->next=((void*)0);
        __dec_obj24=litem_193->item,
        litem_193->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_193;
        self->head->next=litem_193;
    }
    else {
        litem_194=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value218=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1034, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_194->prev=self->tail;
        litem_194->next=((void*)0);
        __dec_obj25=litem_194->item,
        litem_194->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_194;
        self->tail=litem_194;
    }
    self->len++;
    __result_obj__42 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj26;
struct sType* __dec_obj27;
struct tuple2$2char$phsType$ph* __result_obj__43;
    __dec_obj26=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj27=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__43 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

void create_pico_version_header(){
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* Value_195;
_Bool _condtional_value_X4;
int version_major_196;
char* p_197;
int version_miner_198;
char* p_199;
int version_revision_200;
char* p_201;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* version_string_202;
int Value_203;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
    if(    getenv("PICO_SDK_PATH")    ) {
        Value_195=(char*)come_increment_ref_count(charp_read((((char*)(__right_value250=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_condtional_value_X4=(Value_195)),        (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X4        ) {
            version_major_196=0;
            p_197=strstr(Value_195,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_197            ) {
                p_197+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(                *p_197==32||*p_197==9                ) {
                    p_197++;
                }
                while(                xisdigit(*p_197)                ) {
                    version_major_196=version_major_196*10+(*p_197-48);
                    p_197++;
                }
            }
            version_miner_198=0;
            p_199=strstr(Value_195,"set(PICO_SDK_VERSION_MINOR");
            if(            p_199            ) {
                p_199+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(                *p_199==32||*p_199==9                ) {
                    p_199++;
                }
                while(                xisdigit(*p_199)                ) {
                    version_miner_198=version_miner_198*10+*p_199-48;
                    p_199++;
                }
            }
            version_revision_200=0;
            p_201=strstr(Value_195,"set(PICO_SDK_VERSION_REVISION");
            if(            p_201            ) {
                p_201+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(                *p_201==32||*p_201==9                ) {
                    p_201++;
                }
                while(                xisdigit(*p_201)                ) {
                    version_revision_200=version_revision_200*10+*p_201-48;
                    p_201++;
                }
            }
            version_string_202=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value252=int_to_string(version_major_196))),((char*)(__right_value253=int_to_string(version_miner_198))),((char*)(__right_value254=int_to_string(version_revision_200)))));
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            Value_203=system("mkdir -p pico");
            if(            !Value_203            ) {
                charp_write(((char*)(__right_value260=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value256=int_to_string(version_major_196))),((char*)(__right_value257=int_to_string(version_miner_198))),((char*)(__right_value258=int_to_string(version_revision_200))),((char*)(__right_value259=string_to_string(version_string_202)))))),"pico/version.h",(_Bool)0);
                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
            }
            (version_string_202 = come_decrement_ref_count(version_string_202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
        }
        (Value_195 = come_decrement_ref_count(Value_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main(int argc, char** argv){
int start_num_204;
void* __right_value261 = (void*)0;
char* output_file_name_str_205;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct buffer* clang_option_206;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* linker_option_207;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* cpp_option_208;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1char$ph* files_209;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1char$ph* object_files_210;
_Bool output_object_file_211;
_Bool output_cpp_file_212;
_Bool output_source_file_flag_213;
_Bool output_object_file_flag_214;
char* output_file_name_215;
_Bool verbose_216;
_Bool come_debug_217;
_Bool come_malloc_218;
_Bool m5stack_cpp_219;
_Bool pico_cpp_220;
_Bool emb_cpp_221;
_Bool gcc_compiler_222;
int i_223;
void* __right_value272 = (void*)0;
char* ext_name_224;
void* __right_value273 = (void*)0;
char* __dec_obj28;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
char* env_225;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct buffer* __dec_obj29;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* env_226;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct buffer* __dec_obj30;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
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
_Bool _condtional_value_X5;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
int Value_227;
_Bool _condtional_value_X8;
_Bool __exception_result_var_b12;
struct _IO_FILE* Value_228;
_Bool __exception_result_var_b13;
void* __right_value367 = (void*)0;
char* tmp_file_229;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
int Value_233;
_Bool _condtional_value_X9;
_Bool __exception_result_var_b14;
struct sInfo info_234;
void* __right_value375 = (void*)0;
char* __dec_obj31;
void* __right_value376 = (void*)0;
char* __dec_obj32;
void* __right_value377 = (void*)0;
char* __dec_obj33;
void* __right_value378 = (void*)0;
char* __dec_obj34;
void* __right_value379 = (void*)0;
char* __dec_obj35;
void* __right_value380 = (void*)0;
void* __right_value386 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj37;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj38;
void* __right_value389 = (void*)0;
void* __right_value395 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj40;
void* __right_value396 = (void*)0;
void* __right_value402 = (void*)0;
struct map$2char$phchar$ph* __dec_obj42;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj43;
void* __right_value405 = (void*)0;
void* __right_value411 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj45;
void* __right_value412 = (void*)0;
void* __right_value418 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj47;
void* __right_value419 = (void*)0;
void* __right_value425 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj49;
void* __right_value426 = (void*)0;
void* __right_value432 = (void*)0;
struct map$2char$phsType$ph* __dec_obj51;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sModule* __dec_obj52;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj53;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1CVALUE$ph* __dec_obj54;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sVarTable* __dec_obj55;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sVarTable* lv_table_282;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1char$ph* __dec_obj56;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct list$1char$ph* __dec_obj57;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj58;
void* __right_value449 = (void*)0;
char* __dec_obj59;
_Bool Value_284;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct buffer* __dec_obj60;
_Bool Value_285;
_Bool Value_286;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
_Bool Value_289;
_Bool Value_290;
_Bool Value_291;
_Bool Value_292;
_Bool Value_293;
_Bool Value_294;
_Bool Value_295;
_Bool Value_296;
int start_num_297;
char* output_file_name_str_298;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct buffer* clang_option_299;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct buffer* linker_option_300;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct buffer* cpp_option_301;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1char$ph* files_302;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1char$ph* object_files_303;
_Bool output_object_file_304;
_Bool output_cpp_file_305;
_Bool output_source_file_flag_306;
_Bool output_object_file_flag_307;
char* output_file_name_308;
_Bool verbose_309;
_Bool come_debug_310;
_Bool come_malloc_311;
_Bool m5stack_cpp_312;
_Bool pico_cpp_313;
_Bool emb_cpp_314;
_Bool gcc_compiler_315;
int i_316;
void* __right_value466 = (void*)0;
char* ext_name_317;
void* __right_value467 = (void*)0;
char* __dec_obj61;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* env_318;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct buffer* __dec_obj62;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
char* env_319;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct buffer* __dec_obj63;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
_Bool _condtional_value_X12;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1char$ph* o2_saved_320;
char* it_321;
struct sInfo info_322;
struct _IO_FILE* Value_323;
void* __right_value560 = (void*)0;
char* __dec_obj64;
void* __right_value561 = (void*)0;
char* __dec_obj65;
void* __right_value562 = (void*)0;
char* __dec_obj66;
void* __right_value563 = (void*)0;
char* __dec_obj67;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj68;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct map$2char$phsFun$ph* __dec_obj69;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj70;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct map$2char$phchar$ph* __dec_obj71;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct map$2char$phbuffer$ph* __dec_obj72;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct map$2char$phsGenericsFun$ph* __dec_obj73;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj74;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct map$2char$phsClassModule$ph* __dec_obj75;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct map$2char$phsType$ph* __dec_obj76;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sModule* __dec_obj77;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj78;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1CVALUE$ph* __dec_obj79;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sVarTable* __dec_obj80;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sVarTable* lv_table_324;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1char$ph* __dec_obj81;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1char$ph* __dec_obj82;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct map$2char$phsClass$ph* __dec_obj83;
_Bool Value_325;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct buffer* __dec_obj84;
void* __right_value601 = (void*)0;
char* __dec_obj85;
char* __dec_obj86;
_Bool Value_326;
_Bool Value_327;
_Bool Value_328;
_Bool Value_329;
struct sInfo info_330;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
char* __dec_obj87;
void* __right_value604 = (void*)0;
char* __dec_obj88;
void* __right_value605 = (void*)0;
char* __dec_obj89;
void* __right_value606 = (void*)0;
char* __dec_obj90;
char* __dec_obj91;
_Bool Value_337;
memset(&info_234, 0, sizeof(struct sInfo));
memset(&info_322, 0, sizeof(struct sInfo));
memset(&info_330, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3    ) {
        start_num_204=2;
        output_file_name_str_205=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 799, "struct buffer*"))));
        linker_option_207=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 800, "struct buffer*"))));
        cpp_option_208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 801, "struct buffer*"))));
        buffer_append_str(cpp_option_208,"-U__GNUC__");
        files_209=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 803, "struct list$1char$ph*"))));
        object_files_210=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 804, "struct list$1char$ph*"))));
        output_object_file_211=(_Bool)0;
        output_cpp_file_212=(_Bool)0;
        output_source_file_flag_213=(_Bool)0;
        output_object_file_flag_214=(_Bool)1;
        output_file_name_215=(char*)come_increment_ref_count(output_file_name_str_205);
        verbose_216=(_Bool)0;
        come_debug_217=(_Bool)0;
        come_malloc_218=(_Bool)0;
        m5stack_cpp_219=(_Bool)0;
        pico_cpp_220=(_Bool)0;
        emb_cpp_221=(_Bool)0;
        gcc_compiler_222=(_Bool)0;
        for(        i_223=start_num_204        ;        i_223<argc        ;        i_223++        ){
            ext_name_224=(char*)come_increment_ref_count(xextname(argv[i_223]));
            if(            charp_operator_equals(argv[i_223],"-o")&&i_223+1<argc            ) {
                __dec_obj28=output_file_name_215,
                output_file_name_215=(char*)come_increment_ref_count(__builtin_string(argv[i_223+1]));
                __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                i_223++;
            }
            else if(            charp_operator_equals(argv[i_223],"-e")&&i_223+1<argc            ) {
                buffer_append_str(linker_option_207,((char*)(__right_value275=xsprintf("-e \%s",((char*)(__right_value274=charp_to_string(argv[i_223+1])))))));
                (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_223++;
            }
            else if(            charp_operator_equals(argv[i_223],"-str")            ) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-pthread")            ) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-gc")            ) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_208,((char*)(__right_value276=xsprintf(" -DENABLE_GC "))));
                (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-gcc")            ) {
                gcc_compiler_222=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_223],"-riscv")            ) {
                gcc_compiler_222=(_Bool)1;
                output_object_file_flag_214=(_Bool)0;
                CC="riscv64-unknown-elf-gcc";
                buffer_append_format(cpp_option_208,((char*)(__right_value277=xsprintf(" -D__BARE_METAL__ -D__RISCV__ "))));
                (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_206,((char*)(__right_value278=xsprintf(" -nostdlib -ffreestanding -D__RISCV__"))));
                (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                gComeBareMetal=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-bare")            ) {
                gcc_compiler_222=(_Bool)1;
                output_object_file_flag_214=(_Bool)0;
                CC="gcc";
                buffer_append_format(cpp_option_208,((char*)(__right_value279=xsprintf(" -D__BARE_METAL__ "))));
                (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_206,((char*)(__right_value280=xsprintf(" -nostdlib -ffreestanding "))));
                (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-pico")            ) {
                output_source_file_flag_213=(_Bool)1;
                output_object_file_flag_214=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_225=getenv("PICO_SDK_PATH");
                __dec_obj29=cpp_option_208,
                cpp_option_208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 862, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option_208,((char*)(__right_value285=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value283=charp_to_string(env_225))),((char*)(__right_value284=charp_to_string(env_225)))))));
                (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                create_pico_version_header();
                pico_cpp_220=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-emb")            ) {
                output_source_file_flag_213=(_Bool)1;
                output_object_file_flag_214=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                emb_cpp_221=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-m5stack")            ) {
                m5stack_cpp_219=(_Bool)1;
                output_source_file_flag_213=(_Bool)1;
                output_object_file_flag_214=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_226=getenv("IDF_PATH");
                __dec_obj30=cpp_option_208,
                cpp_option_208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 879, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option_208,((char*)(__right_value309=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value288=charp_to_string(getenv("HOME")))),((char*)(__right_value289=charp_to_string(env_226))),((char*)(__right_value290=charp_to_string(env_226))),((char*)(__right_value291=charp_to_string(env_226))),((char*)(__right_value292=charp_to_string(env_226))),((char*)(__right_value293=charp_to_string(env_226))),((char*)(__right_value294=charp_to_string(env_226))),((char*)(__right_value295=charp_to_string(env_226))),((char*)(__right_value296=charp_to_string(env_226))),((char*)(__right_value297=charp_to_string(env_226))),((char*)(__right_value298=charp_to_string(env_226))),((char*)(__right_value299=charp_to_string(env_226))),((char*)(__right_value300=charp_to_string(env_226))),((char*)(__right_value301=charp_to_string(env_226))),((char*)(__right_value302=charp_to_string(env_226))),((char*)(__right_value303=charp_to_string(env_226))),((char*)(__right_value304=charp_to_string(env_226))),((char*)(__right_value305=charp_to_string(env_226))),((char*)(__right_value306=charp_to_string(env_226))),((char*)(__right_value307=charp_to_string(env_226))),((char*)(__right_value308=charp_to_string(env_226)))))),"/usr/local/");
                (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value300 = come_decrement_ref_count(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value308 = come_decrement_ref_count(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value309 = come_decrement_ref_count(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            i_223+1<argc&&charp_operator_equals(argv[i_223],"-target")            ) {
                buffer_append_str(clang_option_206,((char*)(__right_value311=xsprintf("-target \%s",((char*)(__right_value310=charp_to_string(argv[i_223+1])))))));
                (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_223++;
            }
            else if(            i_223+1<argc&&charp_operator_equals(argv[i_223],"-T")            ) {
                buffer_append_str(clang_option_206,((char*)(__right_value313=xsprintf(" -T \%s ",((char*)(__right_value312=charp_to_string(argv[i_223+1])))))));
                (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_223++;
            }
            else if(            charp_operator_equals(argv[i_223],"-net")            ) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-cg")            ) {
                come_debug_217=(_Bool)1;
                buffer_append_str(clang_option_206,"-g ");
            }
            else if(            charp_operator_equals(argv[i_223],"-cg2")            ) {
                buffer_append_str(clang_option_206," -fsanitize=address,undefined -g ");
                buffer_append_str(linker_option_207," -fsanitize=address,undefined -g ");
            }
            else if(            charp_operator_equals(argv[i_223],"-C")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value315=xsprintf("\%s ",((char*)(__right_value314=charp_to_string(argv[i_223])))))));
                (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-M")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value317=xsprintf("\%s ",((char*)(__right_value316=charp_to_string(argv[i_223])))))));
                (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-MM")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value319=xsprintf("\%s ",((char*)(__right_value318=charp_to_string(argv[i_223])))))));
                (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-dM")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value321=xsprintf("\%s ",((char*)(__right_value320=charp_to_string(argv[i_223])))))));
                (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-dD")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value323=xsprintf("\%s ",((char*)(__right_value322=charp_to_string(argv[i_223])))))));
                (__right_value322 = come_decrement_ref_count(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-H")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value325=xsprintf("\%s ",((char*)(__right_value324=charp_to_string(argv[i_223])))))));
                (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-P")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value327=xsprintf("\%s ",((char*)(__right_value326=charp_to_string(argv[i_223])))))));
                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-nostdinc")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value329=xsprintf("\%s ",((char*)(__right_value328=charp_to_string(argv[i_223])))))));
                (__right_value328 = come_decrement_ref_count(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-CC")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value331=xsprintf("\%s ",((char*)(__right_value330=charp_to_string(argv[i_223])))))));
                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            i_223+1<argc&&charp_operator_equals(argv[i_223],"-target")            ) {
                buffer_append_str(clang_option_206,((char*)(__right_value333=xsprintf("-target \%s",((char*)(__right_value332=charp_to_string(argv[i_223+1])))))));
                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_223++;
            }
            else if(            i_223+1<argc&&charp_operator_equals(argv[i_223],"-include")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value335=xsprintf("-iclude \%s",((char*)(__right_value334=charp_to_string(argv[i_223+1])))))));
                (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_223++;
            }
            else if(            i_223+1<argc&&charp_operator_equals(argv[i_223],"-isystem")            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value337=xsprintf("-isystem \%s",((char*)(__right_value336=charp_to_string(argv[i_223+1])))))));
                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_206,((char*)(__right_value339=xsprintf("-isystem \%s",((char*)(__right_value338=charp_to_string(argv[i_223+1])))))));
                (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_223++;
            }
            else if(            i_223+1<argc&&charp_operator_equals(argv[i_223],"-T")            ) {
                buffer_append_str(clang_option_206,((char*)(__right_value341=xsprintf(" -T \%s ",((char*)(__right_value340=charp_to_string(argv[i_223+1])))))));
                (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_223++;
            }
            else if(            charp_operator_equals(argv[i_223],"-common-header")            ) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-original-position")            ) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_condtional_value_X5=(string_operator_equals(((char*)(__right_value343=charp_operator_load_range_element(argv[i_223],0,2))),"-O"))),            (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            _condtional_value_X5            ) {
                buffer_append_str(clang_option_206,((char*)(__right_value345=xsprintf(" \%s ",((char*)(__right_value344=charp_to_string(argv[i_223])))))));
                (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_debug_217=(_Bool)0;
            }
            else if(            (_condtional_value_X6=(string_operator_equals(((char*)(__right_value347=charp_operator_load_range_element(argv[i_223],0,2))),"-D"))),            (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            _condtional_value_X6            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value349=xsprintf(" \%s ",((char*)(__right_value348=charp_to_string(argv[i_223])))))));
                (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_206,((char*)(__right_value351=xsprintf(" \%s ",((char*)(__right_value350=charp_to_string(argv[i_223])))))));
                (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            (_condtional_value_X7=(string_operator_equals(((char*)(__right_value353=charp_operator_load_range_element(argv[i_223],0,2))),"-U"))),            (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value353 = come_decrement_ref_count(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            _condtional_value_X7            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value355=xsprintf(" \%s ",((char*)(__right_value354=charp_to_string(argv[i_223])))))));
                (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_206,((char*)(__right_value357=xsprintf(" \%s ",((char*)(__right_value356=charp_to_string(argv[i_223])))))));
                (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-g")            ) {
                buffer_append_str(clang_option_206,"-g ");
            }
            else if(            charp_operator_equals(argv[i_223],"-v")            ) {
                buffer_append_str(clang_option_206,"-v ");
                buffer_append_str(cpp_option_208,"-v ");
                verbose_216=(_Bool)1;
            }
            else if(            strlen(argv[i_223])>=2&&memcmp(argv[i_223],"-I",strlen("-I"))==0            ) {
                buffer_append_str(cpp_option_208,((char*)(__right_value360=string_operator_add(((char*)(__right_value359=charp_operator_add(" ",argv[i_223])))," "))));
                (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_223],"-gdwarf-4")            ) {
                buffer_append_str(clang_option_206,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_223],"-s")||charp_operator_equals(argv[i_223],"-S")            ) {
                output_source_file_flag_213=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_223],"-c")            ) {
                output_object_file_211=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_223],"-E")            ) {
                output_cpp_file_212=(_Bool)1;
            }
            else if(            argv[i_223][0]==45            ) {
                buffer_append_str(clang_option_206,((char*)(__right_value361=charp_operator_add(argv[i_223]," "))));
                (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            strlen(argv[i_223])>2&&memcmp(argv[i_223]+strlen(argv[i_223])-2,".o",2)==0            ) {
                list$1char$ph_push_back(object_files_210,(char*)come_increment_ref_count(__builtin_string(argv[i_223])));
            }
            else if(            strlen(argv[i_223])>2&&memcmp(argv[i_223]+strlen(argv[i_223])-2,".a",2)==0            ) {
                list$1char$ph_push_back(object_files_210,(char*)come_increment_ref_count(__builtin_string(argv[i_223])));
            }
            else if(            string_operator_equals(ext_name_224,"c")            ) {
                list$1char$ph_push_back(files_209,(char*)come_increment_ref_count(__builtin_string(argv[i_223])));
            }
            else {
                buffer_append_str(clang_option_206,((char*)(__right_value365=charp_operator_add(argv[i_223]," "))));
                (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (ext_name_224 = come_decrement_ref_count(ext_name_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        gComeDebug=come_debug_217;
        gComeMalloc=come_malloc_218;
        Value_227=system(((char*)(__right_value366=xsprintf("%s %s",RM,output_file_name_215))));
        if(        (_condtional_value_X8=(Value_227<0)),        (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X8        ) {
            (come_push_stackframe("02transpile.c", 1022, 11),__exception_result_var_b12=die("rm"), come_pop_stackframe(), __exception_result_var_b12);
        }
        else {
        }
        Value_228=fopen(output_file_name_215,"w");
        if(        Value_228        ) {
            fclose(Value_228);
        }
        else {
            (come_push_stackframe("02transpile.c", 1029, 12),__exception_result_var_b13=die("fopen"), come_pop_stackframe(), __exception_result_var_b13);
        }
        tmp_file_229=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_233=system(((char*)(__right_value374=xsprintf("cat \%s > \%s",((char*)(__right_value372=string_to_string(((char*)(__right_value371=list$1char$ph_join(files_209," ")))))),((char*)(__right_value373=string_to_string(tmp_file_229)))))));
        if(        (_condtional_value_X9=(Value_233<0)),        (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
        _condtional_value_X9        ) {
            (come_push_stackframe("02transpile.c", 1035, 13),__exception_result_var_b14=die("cat"), come_pop_stackframe(), __exception_result_var_b14);
        }
        else {
        }
        memset(&info_234,0,sizeof(struct sInfo));
        __dec_obj31=info_234.base_sname,
        info_234.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_229));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj32=info_234.sname,
        info_234.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_229));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info_234.sline=1;
        info_234.err_num=0;
        __dec_obj33=info_234.clang_option,
        info_234.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_206));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj34=info_234.cpp_option,
        info_234.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_208));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj35=info_234.linker_option,
        info_234.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_207));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info_234.no_output_err=(_Bool)0;
        __dec_obj37=info_234.funcs,
        info_234.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1050, "struct map$2char$phsFun$ph*"))));
        come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj38=info_234.uniq_funcs,
        info_234.uniq_funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1051, "struct map$2char$phsFun$ph*"))));
        come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj40=info_234.struct_definition,
        info_234.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1052, "struct map$2char$phbuffer$ph*"))));
        come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj42=info_234.uniq_definition,
        info_234.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1053, "struct map$2char$phchar$ph*"))));
        come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj43=info_234.previous_struct_definition,
        info_234.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1054, "struct map$2char$phbuffer$ph*"))));
        come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj45=info_234.generics_funcs,
        info_234.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1055, "struct map$2char$phsGenericsFun$ph*"))));
        come_call_finalizer(map$2char$phsGenericsFun$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj47=info_234.classes,
        info_234.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1056, "struct map$2char$phsClass$ph*"))));
        come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj49=info_234.modules,
        info_234.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1057, "struct map$2char$phsClassModule$ph*"))));
        come_call_finalizer(map$2char$phsClassModule$ph_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj51=info_234.types,
        info_234.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1058, "struct map$2char$phsType$ph*"))));
        come_call_finalizer(map$2char$phsType$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj52=info_234.module,
        info_234.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc_v2(1, sizeof(struct sModule)*(1), "02transpile.c", 1059, "struct sModule*"))));
        come_call_finalizer(sModule_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj53=info_234.right_value_objects,
        info_234.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1060, "struct list$1sRightValueObject$ph*"))));
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj54=info_234.stack,
        info_234.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1061, "struct list$1CVALUE$ph*"))));
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj55=info_234.gv_table,
        info_234.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1062, "struct sVarTable*")),(_Bool)1,((void*)0)));
        come_call_finalizer(sVarTable_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        lv_table_282=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1063, "struct sVarTable*")),(_Bool)0,((void*)0)));
        info_234.lv_table=lv_table_282;
        __dec_obj56=info_234.generics_type_names,
        info_234.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1065, "struct list$1char$ph*"))));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj57=info_234.method_generics_type_names,
        info_234.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1066, "struct list$1char$ph*"))));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj58=info_234.generics_classes,
        info_234.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1067, "struct map$2char$phsClass$ph*"))));
        come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info_234.verbose=verbose_216;
        info_234.output_header_file=(_Bool)1;
        static int n_283=0;
        info_234.num_source_files=n_283++;
        info_234.max_source_files=list$1char$ph_length(files_209);
        __dec_obj59=info_234.output_file_name,
        info_234.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_215));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        init_classes(&info_234);
        clear_tmp_file(&info_234);
        Value_284=cpp(&info_234);
        if(        !Value_284        ) {
            printf("transpile failed\n");
            system(((char*)(__right_value450=xsprintf("%s %s*",RM,tmp_file_229))));
            (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            exit(2);
        }
        else {
        }
        __dec_obj60=info_234.source,
        info_234.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value452=charp_read(((char*)(__right_value451=xsprintf("%s.i",tmp_file_229))))))));
        come_call_finalizer(buffer_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        info_234.p=info_234.source->buf;
        info_234.head=info_234.source->buf;
        Value_285=output_cpp_file_212;
        if(        !Value_285        ) {
            transpile(&info_234);
            Value_286=output_header_file(&info_234);
            if(            !Value_286            ) {
                printf("output source file failed\n");
                system(((char*)(__right_value454=xsprintf("%s %s*",RM,tmp_file_229))));
                (__right_value454 = come_decrement_ref_count(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value455=xsprintf("%s %s*",RM,tmp_file_229))));
        (__right_value455 = come_decrement_ref_count(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (output_file_name_str_205 = come_decrement_ref_count(output_file_name_str_205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, clang_option_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, linker_option_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, cpp_option_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, files_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, object_files_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (output_file_name_215 = come_decrement_ref_count(output_file_name_215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (tmp_file_229 = come_decrement_ref_count(tmp_file_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sInfo_finalize, (&info_234), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVarTable_finalize, lv_table_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3    ) {
        Value_289=new_project(argc,argv);
        if(        !Value_289        ) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2    ) {
        Value_290=run_project(argc,argv);
        if(        !Value_290        ) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2    ) {
        Value_291=make_header_project(argc,argv);
        if(        !Value_291        ) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2    ) {
        Value_292=compile_project(argc,argv);
        if(        !Value_292        ) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2    ) {
        Value_293=debug_run_project(argc,argv);
        if(        !Value_293        ) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2    ) {
        Value_294=clean_project(argc,argv);
        if(        !Value_294        ) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2    ) {
        if(        argc==2        ) {
            Value_295=install_project(argc,argv,"/usr/local");
            if(            !Value_295            ) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3        ) {
            Value_296=install_project(argc,argv,argv[2]);
            if(            !Value_296            ) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        start_num_297=1;
        output_file_name_str_298=((void*)0);
        clang_option_299=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 799, "struct buffer*"))));
        linker_option_300=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 800, "struct buffer*"))));
        cpp_option_301=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 801, "struct buffer*"))));
        buffer_append_str(cpp_option_301,"-U__GNUC__");
        files_302=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 803, "struct list$1char$ph*"))));
        object_files_303=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 804, "struct list$1char$ph*"))));
        output_object_file_304=(_Bool)0;
        output_cpp_file_305=(_Bool)0;
        output_source_file_flag_306=(_Bool)0;
        output_object_file_flag_307=(_Bool)1;
        output_file_name_308=(char*)come_increment_ref_count(output_file_name_str_298);
        verbose_309=(_Bool)0;
        come_debug_310=(_Bool)0;
        come_malloc_311=(_Bool)0;
        m5stack_cpp_312=(_Bool)0;
        pico_cpp_313=(_Bool)0;
        emb_cpp_314=(_Bool)0;
        gcc_compiler_315=(_Bool)0;
        for(        i_316=start_num_297        ;        i_316<argc        ;        i_316++        ){
            ext_name_317=(char*)come_increment_ref_count(xextname(argv[i_316]));
            if(            charp_operator_equals(argv[i_316],"-o")&&i_316+1<argc            ) {
                __dec_obj61=output_file_name_308,
                output_file_name_308=(char*)come_increment_ref_count(__builtin_string(argv[i_316+1]));
                __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                i_316++;
            }
            else if(            charp_operator_equals(argv[i_316],"-e")&&i_316+1<argc            ) {
                buffer_append_str(linker_option_300,((char*)(__right_value469=xsprintf("-e \%s",((char*)(__right_value468=charp_to_string(argv[i_316+1])))))));
                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value469 = come_decrement_ref_count(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_316++;
            }
            else if(            charp_operator_equals(argv[i_316],"-str")            ) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-pthread")            ) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-gc")            ) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_301,((char*)(__right_value470=xsprintf(" -DENABLE_GC "))));
                (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-gcc")            ) {
                gcc_compiler_315=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_316],"-riscv")            ) {
                gcc_compiler_315=(_Bool)1;
                output_object_file_flag_307=(_Bool)0;
                CC="riscv64-unknown-elf-gcc";
                buffer_append_format(cpp_option_301,((char*)(__right_value471=xsprintf(" -D__BARE_METAL__ -D__RISCV__ "))));
                (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_299,((char*)(__right_value472=xsprintf(" -nostdlib -ffreestanding -D__RISCV__"))));
                (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                gComeBareMetal=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-bare")            ) {
                gcc_compiler_315=(_Bool)1;
                output_object_file_flag_307=(_Bool)0;
                CC="gcc";
                buffer_append_format(cpp_option_301,((char*)(__right_value473=xsprintf(" -D__BARE_METAL__ "))));
                (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_299,((char*)(__right_value474=xsprintf(" -nostdlib -ffreestanding "))));
                (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-pico")            ) {
                output_source_file_flag_306=(_Bool)1;
                output_object_file_flag_307=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_318=getenv("PICO_SDK_PATH");
                __dec_obj62=cpp_option_301,
                cpp_option_301=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 862, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option_301,((char*)(__right_value479=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value477=charp_to_string(env_318))),((char*)(__right_value478=charp_to_string(env_318)))))));
                (__right_value477 = come_decrement_ref_count(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value478 = come_decrement_ref_count(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value479 = come_decrement_ref_count(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                create_pico_version_header();
                pico_cpp_313=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-emb")            ) {
                output_source_file_flag_306=(_Bool)1;
                output_object_file_flag_307=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                emb_cpp_314=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-m5stack")            ) {
                m5stack_cpp_312=(_Bool)1;
                output_source_file_flag_306=(_Bool)1;
                output_object_file_flag_307=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_319=getenv("IDF_PATH");
                __dec_obj63=cpp_option_301,
                cpp_option_301=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "02transpile.c", 879, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                buffer_append_format(cpp_option_301,((char*)(__right_value503=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value482=charp_to_string(getenv("HOME")))),((char*)(__right_value483=charp_to_string(env_319))),((char*)(__right_value484=charp_to_string(env_319))),((char*)(__right_value485=charp_to_string(env_319))),((char*)(__right_value486=charp_to_string(env_319))),((char*)(__right_value487=charp_to_string(env_319))),((char*)(__right_value488=charp_to_string(env_319))),((char*)(__right_value489=charp_to_string(env_319))),((char*)(__right_value490=charp_to_string(env_319))),((char*)(__right_value491=charp_to_string(env_319))),((char*)(__right_value492=charp_to_string(env_319))),((char*)(__right_value493=charp_to_string(env_319))),((char*)(__right_value494=charp_to_string(env_319))),((char*)(__right_value495=charp_to_string(env_319))),((char*)(__right_value496=charp_to_string(env_319))),((char*)(__right_value497=charp_to_string(env_319))),((char*)(__right_value498=charp_to_string(env_319))),((char*)(__right_value499=charp_to_string(env_319))),((char*)(__right_value500=charp_to_string(env_319))),((char*)(__right_value501=charp_to_string(env_319))),((char*)(__right_value502=charp_to_string(env_319)))))),"/usr/local/");
                (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value484 = come_decrement_ref_count(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value485 = come_decrement_ref_count(__right_value485, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value486 = come_decrement_ref_count(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value488 = come_decrement_ref_count(__right_value488, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value489 = come_decrement_ref_count(__right_value489, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value491 = come_decrement_ref_count(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value495 = come_decrement_ref_count(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value498 = come_decrement_ref_count(__right_value498, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value499 = come_decrement_ref_count(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value500 = come_decrement_ref_count(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            i_316+1<argc&&charp_operator_equals(argv[i_316],"-target")            ) {
                buffer_append_str(clang_option_299,((char*)(__right_value505=xsprintf("-target \%s",((char*)(__right_value504=charp_to_string(argv[i_316+1])))))));
                (__right_value504 = come_decrement_ref_count(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value505 = come_decrement_ref_count(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_316++;
            }
            else if(            i_316+1<argc&&charp_operator_equals(argv[i_316],"-T")            ) {
                buffer_append_str(clang_option_299,((char*)(__right_value507=xsprintf(" -T \%s ",((char*)(__right_value506=charp_to_string(argv[i_316+1])))))));
                (__right_value506 = come_decrement_ref_count(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_316++;
            }
            else if(            charp_operator_equals(argv[i_316],"-net")            ) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-cg")            ) {
                come_debug_310=(_Bool)1;
                buffer_append_str(clang_option_299,"-g ");
            }
            else if(            charp_operator_equals(argv[i_316],"-cg2")            ) {
                buffer_append_str(clang_option_299," -fsanitize=address,undefined -g ");
                buffer_append_str(linker_option_300," -fsanitize=address,undefined -g ");
            }
            else if(            charp_operator_equals(argv[i_316],"-C")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value509=xsprintf("\%s ",((char*)(__right_value508=charp_to_string(argv[i_316])))))));
                (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-M")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value511=xsprintf("\%s ",((char*)(__right_value510=charp_to_string(argv[i_316])))))));
                (__right_value510 = come_decrement_ref_count(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-MM")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value513=xsprintf("\%s ",((char*)(__right_value512=charp_to_string(argv[i_316])))))));
                (__right_value512 = come_decrement_ref_count(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value513 = come_decrement_ref_count(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-dM")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value515=xsprintf("\%s ",((char*)(__right_value514=charp_to_string(argv[i_316])))))));
                (__right_value514 = come_decrement_ref_count(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-dD")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value517=xsprintf("\%s ",((char*)(__right_value516=charp_to_string(argv[i_316])))))));
                (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value517 = come_decrement_ref_count(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-H")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value519=xsprintf("\%s ",((char*)(__right_value518=charp_to_string(argv[i_316])))))));
                (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value519 = come_decrement_ref_count(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-P")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value521=xsprintf("\%s ",((char*)(__right_value520=charp_to_string(argv[i_316])))))));
                (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-nostdinc")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value523=xsprintf("\%s ",((char*)(__right_value522=charp_to_string(argv[i_316])))))));
                (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value523 = come_decrement_ref_count(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-CC")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value525=xsprintf("\%s ",((char*)(__right_value524=charp_to_string(argv[i_316])))))));
                (__right_value524 = come_decrement_ref_count(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value525 = come_decrement_ref_count(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            i_316+1<argc&&charp_operator_equals(argv[i_316],"-target")            ) {
                buffer_append_str(clang_option_299,((char*)(__right_value527=xsprintf("-target \%s",((char*)(__right_value526=charp_to_string(argv[i_316+1])))))));
                (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_316++;
            }
            else if(            i_316+1<argc&&charp_operator_equals(argv[i_316],"-include")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value529=xsprintf("-iclude \%s",((char*)(__right_value528=charp_to_string(argv[i_316+1])))))));
                (__right_value528 = come_decrement_ref_count(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_316++;
            }
            else if(            i_316+1<argc&&charp_operator_equals(argv[i_316],"-isystem")            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value531=xsprintf("-isystem \%s",((char*)(__right_value530=charp_to_string(argv[i_316+1])))))));
                (__right_value530 = come_decrement_ref_count(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value531 = come_decrement_ref_count(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_299,((char*)(__right_value533=xsprintf("-isystem \%s",((char*)(__right_value532=charp_to_string(argv[i_316+1])))))));
                (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_316++;
            }
            else if(            i_316+1<argc&&charp_operator_equals(argv[i_316],"-T")            ) {
                buffer_append_str(clang_option_299,((char*)(__right_value535=xsprintf(" -T \%s ",((char*)(__right_value534=charp_to_string(argv[i_316+1])))))));
                (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value535 = come_decrement_ref_count(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                i_316++;
            }
            else if(            charp_operator_equals(argv[i_316],"-common-header")            ) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-original-position")            ) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_condtional_value_X10=(string_operator_equals(((char*)(__right_value537=charp_operator_load_range_element(argv[i_316],0,2))),"-O"))),            (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            _condtional_value_X10            ) {
                buffer_append_str(clang_option_299,((char*)(__right_value539=xsprintf(" \%s ",((char*)(__right_value538=charp_to_string(argv[i_316])))))));
                (__right_value538 = come_decrement_ref_count(__right_value538, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value539 = come_decrement_ref_count(__right_value539, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_debug_310=(_Bool)0;
            }
            else if(            (_condtional_value_X11=(string_operator_equals(((char*)(__right_value541=charp_operator_load_range_element(argv[i_316],0,2))),"-D"))),            (__right_value540 = come_decrement_ref_count(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value541 = come_decrement_ref_count(__right_value541, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            _condtional_value_X11            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value543=xsprintf(" \%s ",((char*)(__right_value542=charp_to_string(argv[i_316])))))));
                (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value543 = come_decrement_ref_count(__right_value543, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_299,((char*)(__right_value545=xsprintf(" \%s ",((char*)(__right_value544=charp_to_string(argv[i_316])))))));
                (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            (_condtional_value_X12=(string_operator_equals(((char*)(__right_value547=charp_operator_load_range_element(argv[i_316],0,2))),"-U"))),            (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value547 = come_decrement_ref_count(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            _condtional_value_X12            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value549=xsprintf(" \%s ",((char*)(__right_value548=charp_to_string(argv[i_316])))))));
                (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value549 = come_decrement_ref_count(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                buffer_append_str(clang_option_299,((char*)(__right_value551=xsprintf(" \%s ",((char*)(__right_value550=charp_to_string(argv[i_316])))))));
                (__right_value550 = come_decrement_ref_count(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value551 = come_decrement_ref_count(__right_value551, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-g")            ) {
                buffer_append_str(clang_option_299,"-g ");
            }
            else if(            charp_operator_equals(argv[i_316],"-v")            ) {
                buffer_append_str(clang_option_299,"-v ");
                buffer_append_str(cpp_option_301,"-v ");
                verbose_309=(_Bool)1;
            }
            else if(            strlen(argv[i_316])>=2&&memcmp(argv[i_316],"-I",strlen("-I"))==0            ) {
                buffer_append_str(cpp_option_301,((char*)(__right_value554=string_operator_add(((char*)(__right_value553=charp_operator_add(" ",argv[i_316])))," "))));
                (__right_value552 = come_decrement_ref_count(__right_value552, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value553 = come_decrement_ref_count(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value554 = come_decrement_ref_count(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            charp_operator_equals(argv[i_316],"-gdwarf-4")            ) {
                buffer_append_str(clang_option_299,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_316],"-s")||charp_operator_equals(argv[i_316],"-S")            ) {
                output_source_file_flag_306=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_316],"-c")            ) {
                output_object_file_304=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_316],"-E")            ) {
                output_cpp_file_305=(_Bool)1;
            }
            else if(            argv[i_316][0]==45            ) {
                buffer_append_str(clang_option_299,((char*)(__right_value555=charp_operator_add(argv[i_316]," "))));
                (__right_value555 = come_decrement_ref_count(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            strlen(argv[i_316])>2&&memcmp(argv[i_316]+strlen(argv[i_316])-2,".o",2)==0            ) {
                list$1char$ph_push_back(object_files_303,(char*)come_increment_ref_count(__builtin_string(argv[i_316])));
            }
            else if(            strlen(argv[i_316])>2&&memcmp(argv[i_316]+strlen(argv[i_316])-2,".a",2)==0            ) {
                list$1char$ph_push_back(object_files_303,(char*)come_increment_ref_count(__builtin_string(argv[i_316])));
            }
            else if(            string_operator_equals(ext_name_317,"c")            ) {
                list$1char$ph_push_back(files_302,(char*)come_increment_ref_count(__builtin_string(argv[i_316])));
            }
            else {
                buffer_append_str(clang_option_299,((char*)(__right_value559=charp_operator_add(argv[i_316]," "))));
                (__right_value559 = come_decrement_ref_count(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (ext_name_317 = come_decrement_ref_count(ext_name_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        gComeDebug=come_debug_310;
        gComeMalloc=come_malloc_311;
        for(        o2_saved_320=(struct list$1char$ph*)come_increment_ref_count((files_302)),it_321=list$1char$ph_begin((o2_saved_320))        ;        !list$1char$ph_end((o2_saved_320))        ;        it_321=list$1char$ph_next((o2_saved_320))        ){
            memset(&info_322,0,sizeof(struct sInfo));
            Value_323=fopen(it_321,"r");
            if(            Value_323            ) {
                fclose(Value_323);
            }
            else {
                come_call_finalizer(sInfo_finalize, (&info_322), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                continue;
            }
            __dec_obj64=info_322.sname,
            info_322.sname=(char*)come_increment_ref_count(__builtin_string(it_321));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info_322.sline=1;
            info_322.err_num=0;
            __dec_obj65=info_322.clang_option,
            info_322.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_299));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj66=info_322.cpp_option,
            info_322.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_301));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj67=info_322.linker_option,
            info_322.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_300));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info_322.no_output_err=(_Bool)0;
            __dec_obj68=info_322.funcs,
            info_322.funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1169, "struct map$2char$phsFun$ph*"))));
            come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj69=info_322.uniq_funcs,
            info_322.uniq_funcs=(struct map$2char$phsFun$ph*)come_increment_ref_count(map$2char$phsFun$ph_initialize((struct map$2char$phsFun$ph*)come_increment_ref_count((struct map$2char$phsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsFun$ph)*(1), "02transpile.c", 1170, "struct map$2char$phsFun$ph*"))));
            come_call_finalizer(map$2char$phsFun$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj70=info_322.struct_definition,
            info_322.struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1171, "struct map$2char$phbuffer$ph*"))));
            come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj71=info_322.uniq_definition,
            info_322.uniq_definition=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "02transpile.c", 1172, "struct map$2char$phchar$ph*"))));
            come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj72=info_322.previous_struct_definition,
            info_322.previous_struct_definition=(struct map$2char$phbuffer$ph*)come_increment_ref_count(map$2char$phbuffer$ph_initialize((struct map$2char$phbuffer$ph*)come_increment_ref_count((struct map$2char$phbuffer$ph*)come_calloc_v2(1, sizeof(struct map$2char$phbuffer$ph)*(1), "02transpile.c", 1173, "struct map$2char$phbuffer$ph*"))));
            come_call_finalizer(map$2char$phbuffer$ph_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj73=info_322.generics_funcs,
            info_322.generics_funcs=(struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(map$2char$phsGenericsFun$ph_initialize((struct map$2char$phsGenericsFun$ph*)come_increment_ref_count((struct map$2char$phsGenericsFun$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsGenericsFun$ph)*(1), "02transpile.c", 1174, "struct map$2char$phsGenericsFun$ph*"))));
            come_call_finalizer(map$2char$phsGenericsFun$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj74=info_322.classes,
            info_322.classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1175, "struct map$2char$phsClass$ph*"))));
            come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj75=info_322.modules,
            info_322.modules=(struct map$2char$phsClassModule$ph*)come_increment_ref_count(map$2char$phsClassModule$ph_initialize((struct map$2char$phsClassModule$ph*)come_increment_ref_count((struct map$2char$phsClassModule$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClassModule$ph)*(1), "02transpile.c", 1176, "struct map$2char$phsClassModule$ph*"))));
            come_call_finalizer(map$2char$phsClassModule$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj76=info_322.types,
            info_322.types=(struct map$2char$phsType$ph*)come_increment_ref_count(map$2char$phsType$ph_initialize((struct map$2char$phsType$ph*)come_increment_ref_count((struct map$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsType$ph)*(1), "02transpile.c", 1177, "struct map$2char$phsType$ph*"))));
            come_call_finalizer(map$2char$phsType$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj77=info_322.module,
            info_322.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc_v2(1, sizeof(struct sModule)*(1), "02transpile.c", 1178, "struct sModule*"))));
            come_call_finalizer(sModule_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj78=info_322.right_value_objects,
            info_322.right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "02transpile.c", 1179, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj79=info_322.stack,
            info_322.stack=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "02transpile.c", 1180, "struct list$1CVALUE$ph*"))));
            come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj80=info_322.gv_table,
            info_322.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1181, "struct sVarTable*")),(_Bool)1,((void*)0)));
            come_call_finalizer(sVarTable_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            lv_table_324=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1182, "struct sVarTable*")),(_Bool)0,((void*)0)));
            info_322.lv_table=lv_table_324;
            __dec_obj81=info_322.generics_type_names,
            info_322.generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1184, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj82=info_322.method_generics_type_names,
            info_322.method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "02transpile.c", 1185, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj83=info_322.generics_classes,
            info_322.generics_classes=(struct map$2char$phsClass$ph*)come_increment_ref_count(map$2char$phsClass$ph_initialize((struct map$2char$phsClass$ph*)come_increment_ref_count((struct map$2char$phsClass$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsClass$ph)*(1), "02transpile.c", 1186, "struct map$2char$phsClass$ph*"))));
            come_call_finalizer(map$2char$phsClass$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info_322.verbose=verbose_309;
            info_322.m5stack_cpp=m5stack_cpp_312;
            info_322.pico_cpp=pico_cpp_313;
            info_322.emb_cpp=emb_cpp_314;
            info_322.gcc_compiler=gcc_compiler_315;
            init_classes(&info_322);
            clear_tmp_file(&info_322);
            Value_325=cpp(&info_322);
            if(            !Value_325            ) {
                printf("transpile failed\n");
                exit(2);
            }
            else {
            }
            __dec_obj84=info_322.source,
            info_322.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value599=charp_read(((char*)(__right_value598=xsprintf("%s.i",it_321))))))));
            come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (__right_value598 = come_decrement_ref_count(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value599 = come_decrement_ref_count(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info_322.p=info_322.source->buf;
            info_322.head=info_322.source->buf;
            if(            output_file_name_308            ) {
                __dec_obj85=info_322.output_file_name,
                info_322.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_308));
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj86=info_322.output_file_name,
                info_322.output_file_name=((void*)0);
                __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            Value_326=output_cpp_file_305;
            if(            !Value_326            ) {
                transpile(&info_322);
                Value_327=output_source_file(&info_322);
                if(                !Value_327                ) {
                    printf("output source file faield\n");
                    exit(2);
                }
                else {
                }
                if(                info_322.err_num>0                ) {
                    printf("transpile error. err num %d\n",info_322.err_num);
                    exit(2);
                }
                Value_328=output_object_file_flag_307;
                if(                Value_328                ) {
                    Value_329=compile(&info_322,output_object_file_304,object_files_303);
                    if(                    !Value_329                    ) {
                        printf("compile faield\n");
                        exit(27);
                    }
                    else {
                    }
                }
                else {
                }
            }
            else {
            }
            if(            output_cpp_file_305            ) {
            }
            else if(            info_322.err_num>0            ) {
            }
            else if(            output_source_file_flag_306            ) {
                clear_tmp_file_without_object_file_and_ccfile(&info_322);
            }
            else {
                clear_tmp_file_without_object_file(&info_322);
            }
            come_call_finalizer(sInfo_finalize, (&info_322), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sVarTable_finalize, lv_table_324, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_320, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !output_object_file_304&&!output_cpp_file_305&&(list$1char$ph_length(files_302)>0||list$1char$ph_length(object_files_303)>0)        ) {
            memset(&info_330,0,sizeof(struct sInfo));
            __dec_obj87=info_330.sname,
            info_330.sname=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value602=list$1char$ph_operator_load_element(files_302,0))), "02transpile.c", 1252, "char*"));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj88=info_330.clang_option,
            info_330.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_299));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj89=info_330.linker_option,
            info_330.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_300));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info_330.verbose=verbose_309;
            if(            output_file_name_308            ) {
                __dec_obj90=info_330.output_file_name,
                info_330.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_308));
                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj91=info_330.output_file_name,
                info_330.output_file_name=((void*)0);
                __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            output_object_file_flag_307            ) {
                Value_337=linker(&info_330,object_files_303);
                if(                !Value_337                ) {
                    printf("linker faield\n");
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_305&&!output_source_file_flag_306            ) {
                clear_tmp_file(&info_330);
            }
            come_call_finalizer(sInfo_finalize, (&info_330), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (output_file_name_str_298 = come_decrement_ref_count(output_file_name_str_298, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, clang_option_299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, linker_option_300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, cpp_option_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, files_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, object_files_303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (output_file_name_308 = come_decrement_ref_count(output_file_name_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    return 0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__44;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__44 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

static char* list$1char$ph_join(struct list$1char$ph* self, char* sep){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct buffer* buf_230;
int n_231;
char* it_232;
void* __right_value370 = (void*)0;
char* __result_obj__45;
    buf_230=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "./comelang.h", 1774, "struct buffer*"))));
    n_231=0;
    for(    it_232=list$1char$ph_begin(self)    ;    !list$1char$ph_end(self)    ;    it_232=list$1char$ph_next(self)    ){
        buffer_append_str(buf_230,it_232);
        if(        n_231<list$1char$ph_length(self)-1        ) {
            buffer_append_str(buf_230,sep);
        }
        n_231++;
    }
    __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value370=buffer_to_string(buf_230))));
    come_call_finalizer(buffer_finalize, buf_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__45;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_initialize(struct map$2char$phsFun$ph* self){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
int i_235;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1char$ph* __dec_obj36;
struct map$2char$phsFun$ph* __result_obj__47;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value381=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value382=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 1813, "struct sFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value383=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_235=0    ;    i_235<128    ;    i_235++    ){
        self->item_existance[i_235]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj36=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__47 = (struct map$2char$phsFun$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__46;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__46 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_236;
struct list_item$1char$p* prev_it_237;
    it_236=self->head;
    while(    it_236!=((void*)0)    ) {
        prev_it_237=it_236;
        it_236=it_236->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_238;
struct list_item$1char$ph* prev_it_239;
    it_238=self->head;
    while(    it_238!=((void*)0)    ) {
        prev_it_239=it_238;
        it_238=it_238->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_240;
int i_241;
    for(    i_240=0    ;    i_240<self->size    ;    i_240++    ){
        if(        self->item_existance[i_240]        ) {
            if(            1            ) {
                come_call_finalizer(sFun_finalize, self->items[i_240], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_241=0    ;    i_241<self->size    ;    i_241++    ){
        if(        self->item_existance[i_241]        ) {
            if(            1            ) {
                (self->keys[i_241] = come_decrement_ref_count(self->keys[i_241], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

static void map$2char$phsFun$ph_finalize(struct map$2char$phsFun$ph* self){
int i_242;
int i_243;
    for(    i_242=0    ;    i_242<self->size    ;    i_242++    ){
        if(        self->item_existance[i_242]        ) {
            if(            1            ) {
                come_call_finalizer(sFun_finalize, self->items[i_242], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_243=0    ;    i_243<self->size    ;    i_243++    ){
        if(        self->item_existance[i_243]        ) {
            if(            1            ) {
                (self->keys[i_243] = come_decrement_ref_count(self->keys[i_243], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_initialize(struct map$2char$phbuffer$ph* self){
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
int i_244;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1char$ph* __dec_obj39;
struct map$2char$phbuffer$ph* __result_obj__48;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value390=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value391=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(128)), "./comelang.h", 1813, "struct buffer**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value392=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_244=0    ;    i_244<128    ;    i_244++    ){
        self->item_existance[i_244]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj39=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__48 = (struct map$2char$phbuffer$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_245;
int i_246;
    for(    i_245=0    ;    i_245<self->size    ;    i_245++    ){
        if(        self->item_existance[i_245]        ) {
            if(            1            ) {
                come_call_finalizer(buffer_finalize, self->items[i_245], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_246=0    ;    i_246<self->size    ;    i_246++    ){
        if(        self->item_existance[i_246]        ) {
            if(            1            ) {
                (self->keys[i_246] = come_decrement_ref_count(self->keys[i_246], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phbuffer$ph_finalize(struct map$2char$phbuffer$ph* self){
int i_247;
int i_248;
    for(    i_247=0    ;    i_247<self->size    ;    i_247++    ){
        if(        self->item_existance[i_247]        ) {
            if(            1            ) {
                come_call_finalizer(buffer_finalize, self->items[i_247], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_248=0    ;    i_248<self->size    ;    i_248++    ){
        if(        self->item_existance[i_248]        ) {
            if(            1            ) {
                (self->keys[i_248] = come_decrement_ref_count(self->keys[i_248], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
int i_249;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct list$1char$ph* __dec_obj41;
struct map$2char$phchar$ph* __result_obj__49;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value397=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value398=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1813, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value399=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_249=0    ;    i_249<128    ;    i_249++    ){
        self->item_existance[i_249]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj41=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__49 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_250;
int i_251;
    for(    i_250=0    ;    i_250<self->size    ;    i_250++    ){
        if(        self->item_existance[i_250]        ) {
            if(            1            ) {
                (self->items[i_250] = come_decrement_ref_count(self->items[i_250], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_251=0    ;    i_251<self->size    ;    i_251++    ){
        if(        self->item_existance[i_251]        ) {
            if(            1            ) {
                (self->keys[i_251] = come_decrement_ref_count(self->keys[i_251], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_252;
int i_253;
    for(    i_252=0    ;    i_252<self->size    ;    i_252++    ){
        if(        self->item_existance[i_252]        ) {
            if(            1            ) {
                (self->items[i_252] = come_decrement_ref_count(self->items[i_252], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_253=0    ;    i_253<self->size    ;    i_253++    ){
        if(        self->item_existance[i_253]        ) {
            if(            1            ) {
                (self->keys[i_253] = come_decrement_ref_count(self->keys[i_253], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_initialize(struct map$2char$phsGenericsFun$ph* self){
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
int i_254;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1char$ph* __dec_obj44;
struct map$2char$phsGenericsFun$ph* __result_obj__50;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value406=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value407=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 1813, "struct sGenericsFun**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value408=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_254=0    ;    i_254<128    ;    i_254++    ){
        self->item_existance[i_254]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj44=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__50 = (struct map$2char$phsGenericsFun$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

static void map$2char$phsGenericsFun$ph$p_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_255;
int i_256;
    for(    i_255=0    ;    i_255<self->size    ;    i_255++    ){
        if(        self->item_existance[i_255]        ) {
            if(            1            ) {
                come_call_finalizer(sGenericsFun_finalize, self->items[i_255], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_256=0    ;    i_256<self->size    ;    i_256++    ){
        if(        self->item_existance[i_256]        ) {
            if(            1            ) {
                (self->keys[i_256] = come_decrement_ref_count(self->keys[i_256], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)    ) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void map$2char$phsGenericsFun$ph_finalize(struct map$2char$phsGenericsFun$ph* self){
int i_257;
int i_258;
    for(    i_257=0    ;    i_257<self->size    ;    i_257++    ){
        if(        self->item_existance[i_257]        ) {
            if(            1            ) {
                come_call_finalizer(sGenericsFun_finalize, self->items[i_257], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_258=0    ;    i_258<self->size    ;    i_258++    ){
        if(        self->item_existance[i_258]        ) {
            if(            1            ) {
                (self->keys[i_258] = come_decrement_ref_count(self->keys[i_258], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_initialize(struct map$2char$phsClass$ph* self){
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
int i_259;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1char$ph* __dec_obj46;
struct map$2char$phsClass$ph* __result_obj__51;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value413=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value414=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 1813, "struct sClass**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value415=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_259=0    ;    i_259<128    ;    i_259++    ){
        self->item_existance[i_259]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj46=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__51 = (struct map$2char$phsClass$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsClass$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsClass$ph$p_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

static void map$2char$phsClass$ph$p_finalize(struct map$2char$phsClass$ph* self){
int i_260;
int i_261;
    for(    i_260=0    ;    i_260<self->size    ;    i_260++    ){
        if(        self->item_existance[i_260]        ) {
            if(            1            ) {
                come_call_finalizer(sClass_finalize, self->items[i_260], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_261=0    ;    i_261<self->size    ;    i_261++    ){
        if(        self->item_existance[i_261]        ) {
            if(            1            ) {
                (self->keys[i_261] = come_decrement_ref_count(self->keys[i_261], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phsClass$ph_finalize(struct map$2char$phsClass$ph* self){
int i_262;
int i_263;
    for(    i_262=0    ;    i_262<self->size    ;    i_262++    ){
        if(        self->item_existance[i_262]        ) {
            if(            1            ) {
                come_call_finalizer(sClass_finalize, self->items[i_262], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_263=0    ;    i_263<self->size    ;    i_263++    ){
        if(        self->item_existance[i_263]        ) {
            if(            1            ) {
                (self->keys[i_263] = come_decrement_ref_count(self->keys[i_263], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_initialize(struct map$2char$phsClassModule$ph* self){
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
int i_264;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1char$ph* __dec_obj48;
struct map$2char$phsClassModule$ph* __result_obj__52;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value420=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value421=(struct sClassModule**)come_calloc_v2(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 1813, "struct sClassModule**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value422=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_264=0    ;    i_264<128    ;    i_264++    ){
        self->item_existance[i_264]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj48=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__52 = (struct map$2char$phsClassModule$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

static void map$2char$phsClassModule$ph$p_finalize(struct map$2char$phsClassModule$ph* self){
int i_265;
int i_266;
    for(    i_265=0    ;    i_265<self->size    ;    i_265++    ){
        if(        self->item_existance[i_265]        ) {
            if(            1            ) {
                come_call_finalizer(sClassModule_finalize, self->items[i_265], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_266=0    ;    i_266<self->size    ;    i_266++    ){
        if(        self->item_existance[i_266]        ) {
            if(            1            ) {
                (self->keys[i_266] = come_decrement_ref_count(self->keys[i_266], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)    ) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)    ) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void map$2char$phsClassModule$ph_finalize(struct map$2char$phsClassModule$ph* self){
int i_267;
int i_268;
    for(    i_267=0    ;    i_267<self->size    ;    i_267++    ){
        if(        self->item_existance[i_267]        ) {
            if(            1            ) {
                come_call_finalizer(sClassModule_finalize, self->items[i_267], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_268=0    ;    i_268<self->size    ;    i_268++    ){
        if(        self->item_existance[i_268]        ) {
            if(            1            ) {
                (self->keys[i_268] = come_decrement_ref_count(self->keys[i_268], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_initialize(struct map$2char$phsType$ph* self){
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
int i_269;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1char$ph* __dec_obj50;
struct map$2char$phsType$ph* __result_obj__53;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value427=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1812, "char**"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value428=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 1813, "struct sType**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value429=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1814, "_Bool*"))));
    for(    i_269=0    ;    i_269<128    ;    i_269++    ){
        self->item_existance[i_269]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj50=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1824, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__53 = (struct map$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsType$ph$p_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

static void map$2char$phsType$ph$p_finalize(struct map$2char$phsType$ph* self){
int i_270;
int i_271;
    for(    i_270=0    ;    i_270<self->size    ;    i_270++    ){
        if(        self->item_existance[i_270]        ) {
            if(            1            ) {
                come_call_finalizer(sType_finalize, self->items[i_270], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_271=0    ;    i_271<self->size    ;    i_271++    ){
        if(        self->item_existance[i_271]        ) {
            if(            1            ) {
                (self->keys[i_271] = come_decrement_ref_count(self->keys[i_271], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2char$phsType$ph_finalize(struct map$2char$phsType$ph* self){
int i_272;
int i_273;
    for(    i_272=0    ;    i_272<self->size    ;    i_272++    ){
        if(        self->item_existance[i_272]        ) {
            if(            1            ) {
                come_call_finalizer(sType_finalize, self->items[i_272], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_273=0    ;    i_273<self->size    ;    i_273++    ){
        if(        self->item_existance[i_273]        ) {
            if(            1            ) {
                (self->keys[i_273] = come_decrement_ref_count(self->keys[i_273], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)    ) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)    ) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)    ) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)    ) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeaderStructs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__54;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__54 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_274;
struct list_item$1sRightValueObject$ph* prev_it_275;
    it_274=self->head;
    while(    it_274!=((void*)0)    ) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)    ) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mObjType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mObjValue!=((void*)0)    ) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_276;
struct list_item$1sRightValueObject$ph* prev_it_277;
    it_276=self->head;
    while(    it_276!=((void*)0)    ) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__55;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__55 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_278;
struct list_item$1CVALUE$ph* prev_it_279;
    it_278=self->head;
    while(    it_278!=((void*)0)    ) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_280;
struct list_item$1CVALUE$ph* prev_it_281;
    it_280=self->head;
    while(    it_280!=((void*)0)    ) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sInfo_finalize(struct sInfo* self){
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->source, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)    ) {
        (self->sname_at_head = come_decrement_ref_count(self->sname_at_head, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)    ) {
        (self->base_sname = come_decrement_ref_count(self->base_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)    ) {
        (self->clang_option = come_decrement_ref_count(self->clang_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)    ) {
        (self->cpp_option = come_decrement_ref_count(self->cpp_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)    ) {
        (self->linker_option = come_decrement_ref_count(self->linker_option, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)    ) {
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, self->funcs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->uniq_funcs!=((void*)0)    ) {
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, self->uniq_funcs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)    ) {
        come_call_finalizer(map$2char$phsGenericsFun$ph$p_finalize, self->generics_funcs, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)    ) {
        come_call_finalizer(map$2char$phsClass$ph$p_finalize, self->classes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)    ) {
        come_call_finalizer(map$2char$phsClassModule$ph$p_finalize, self->modules, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)    ) {
        come_call_finalizer(map$2char$phsType$ph$p_finalize, self->types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)    ) {
        come_call_finalizer(map$2char$phsClass$ph$p_finalize, self->generics_classes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)    ) {
        come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self->struct_definition, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)    ) {
        come_call_finalizer(map$2char$phbuffer$ph$p_finalize, self->previous_struct_definition, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)    ) {
        come_call_finalizer(sModule_finalize, self->module, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)    ) {
        come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self->right_value_objects, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)    ) {
        come_call_finalizer(list$1CVALUE$ph$p_finalize, self->stack, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->come_function_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->come_method_block_function_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->gv_table, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->method_generics_type_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->impl_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->class_type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->class_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)    ) {
        (self->output_file_name = come_decrement_ref_count(self->output_file_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->function_result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)    ) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->module_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)    ) {
        (self->if_result_var_name = come_decrement_ref_count(self->if_result_var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)    ) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->match_it_var, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)    ) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->uniq_definition, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_287;
struct list_item$1sVar$ph* prev_it_288;
    it_287=self->head;
    while(    it_287!=((void*)0)    ) {
        prev_it_288=it_287;
        it_287=it_287->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_331;
int i_332;
char* __result_obj__56;
char* default_value_333;
char* __result_obj__57;
default_value_333 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_331=self->head;
    i_332=0;
    while(    it_331!=((void*)0)    ) {
        if(        position==i_332        ) {
            __result_obj__56 = (char*)come_increment_ref_count(it_331->item);
            (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__56;
        }
        it_331=it_331->next;
        i_332++;
    }
    memset(&default_value_333,0,sizeof(char*));
    __result_obj__57 = (char*)come_increment_ref_count(default_value_333);
    (default_value_333 = come_decrement_ref_count(default_value_333, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__57;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_334;
int i_335;
char* __result_obj__58;
char* default_value_336;
char* __result_obj__59;
default_value_336 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_334=self->head;
    i_335=0;
    while(    it_334!=((void*)0)    ) {
        if(        position==i_335        ) {
            __result_obj__58 = (char*)come_increment_ref_count(it_334->item);
            (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__58;
        }
        it_334=it_334->next;
        i_335++;
    }
    memset(&default_value_336,0,sizeof(char*));
    __result_obj__59 = (char*)come_increment_ref_count(default_value_336);
    (default_value_336 = come_decrement_ref_count(default_value_336, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__59;
}

