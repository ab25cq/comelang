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

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline);
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
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
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
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
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
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void show_type(struct sType* type, struct sInfo* info);
static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sType* get_no_solved_type(struct sType* type);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
char* output_function(struct sFun* fun, struct sInfo* info);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);
static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);
void add_come_code(struct sInfo* info, const char* msg, ...);
static void va_list_finalize(va_list self);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key);
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
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
_Bool output_source_file(struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
_Bool output_header_file(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_last_code_to_source(struct sInfo* info);
void add_last_code_to_source_with_comma(struct sInfo* info);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info);
static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail);
static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
char* class_name_1;
void* __right_value2 = (void*)0;
char* __result_obj__1;
void* __right_value3 = (void*)0;
struct CVALUE* come_value_2;
void* __right_value4 = (void*)0;
char* result_type_str_9;
int j_10;
struct list$1sType$ph* o2_saved_11;
struct sType* it_14;
void* __right_value5 = (void*)0;
char* param_type_str_17;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
char* __result_obj__8;
int i_18;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
char* __result_obj__9;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "struct buffer*"))));
    class_name_1=type->mClass->mName;
    if(    type->mAlignas) {
        if(        !node_compile(type->mAlignas,info)) {
            printf("_Alignas error\n");
            __result_obj__1 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_0,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__1 = come_decrement_ref_count(__result_obj__1, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__1;
        }
        come_value_2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf_0,"_Alignas(%s) ",come_value_2->c_value);
        /*c*/ come_call_finalizer3(come_value_2,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    type->mStatic&&!no_static) {
        buffer_append_str(buf_0,"static ");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_0,"_Atomic(");
    }
    if(    type->mConstant) {
        buffer_append_str(buf_0,"const ");
    }
    if(    type->mUnsigned) {
        buffer_append_str(buf_0,"unsigned ");
    }
    if(    type->mShort) {
        buffer_append_str(buf_0,"short ");
    }
    if(    string_operator_equals(type->mOriginalTypeName,"va_list")) {
        buffer_append_str(buf_0,"va_list");
    }
    else if(    string_operator_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_0,"__builtin_va_list");
    }
    else if(    charp_operator_equals(class_name_1,"__builtin_va_list")) {
        if(        in_header) {
            buffer_append_str(buf_0,class_name_1);
        }
        else {
            buffer_append_str(buf_0,"va_list");
        }
    }
    else if(    type->mClass->mStruct) {
        buffer_append_str(buf_0,"struct ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(    type->mClass->mUnion) {
        buffer_append_str(buf_0,"union ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(    type->mClass->mEnum) {
        buffer_append_str(buf_0,"enum ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(    type->mLongLong) {
        if(        charp_operator_equals(class_name_1,"int")) {
            buffer_append_str(buf_0,"long long int");
        }
        else if(        charp_operator_equals(class_name_1,"long")) {
            buffer_append_str(buf_0,"long long");
        }
    }
    else if(    type->mLong) {
        buffer_append_str(buf_0,"long ");
        if(        charp_operator_equals(class_name_1,"int")) {
            buffer_append_str(buf_0," int");
        }
        else if(        charp_operator_equals(class_name_1,"long")) {
            buffer_append_str(buf_0," long");
        }
        else if(        charp_operator_equals(class_name_1,"double")) {
            buffer_append_str(buf_0," double");
        }
    }
    else if(    charp_operator_equals(class_name_1,"long")) {
        buffer_append_str(buf_0,"long");
    }
    else if(    charp_operator_equals(class_name_1,"__uint128_t")) {
        buffer_append_str(buf_0,"__uint128_t");
    }
    else if(    charp_operator_equals(class_name_1,"bool")) {
        buffer_append_str(buf_0,"_Bool");
    }
    else if(    charp_operator_equals(class_name_1,"lambda")) {
        result_type_str_9=(char*)come_increment_ref_count(make_type_name_string(type->mResultType,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
        buffer_append_str(buf_0,result_type_str_9);
        buffer_append_str(buf_0," (*)(");
        j_10=0;
        for(        o2_saved_11=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_14=list$1sType$ph_begin((o2_saved_11));        !list$1sType$ph_end((o2_saved_11));        it_14=list$1sType$ph_next((o2_saved_11))        ){
            param_type_str_17=(char*)come_increment_ref_count(make_type_name_string(it_14,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
            buffer_append_str(buf_0,param_type_str_17);
            if(            j_10!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_0,",");
            }
            j_10++;
            (param_type_str_17 = come_decrement_ref_count(param_type_str_17, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_11,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_0,")");
        (result_type_str_9 = come_decrement_ref_count(result_type_str_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        class_name_1==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value6=err_msg(info,"class name is null")));
            /*c*/ come_call_finalizer3(__right_value6,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__8 = (char*)come_increment_ref_count(((char*)(__right_value7=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_0,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__8 = come_decrement_ref_count(__result_obj__8, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__8;
        }
        buffer_append_str(buf_0,class_name_1);
    }
    if(    charp_operator_not_equals(class_name_1,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        for(        i_18=0;        i_18<type->mPointerNum;        i_18++        ){
            buffer_append_str(buf_0,"*");
        }
    }
    if(    array_cast_pointer&&list$1sNode$ph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_0,"*");
    }
    if(    type->mRestrict) {
        buffer_append_str(buf_0,"restrict");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_0,")");
    }
    if(    type->mAttribute) {
        buffer_append_str(buf_0,((char*)(__right_value8=charp_operator_add(" ",type->mAttribute))));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__9 = (char*)come_increment_ref_count(((char*)(__right_value9=buffer_to_string(buf_0))));
    /*c*/ come_call_finalizer3(buf_0,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__9 = come_decrement_ref_count(__result_obj__9, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__9;
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
struct list_item$1sType$ph* it_3;
struct list_item$1sType$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)) {
        prev_it_4=it_3;
        it_3=it_3->next;
        /*c*/ come_call_finalizer3(prev_it_4,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_5;
struct list_item$1sNode$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)) {
        prev_it_6=it_5;
        it_5=it_5->next;
        /*c*/ come_call_finalizer3(prev_it_6,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_7;
struct list_item$1char$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)) {
        prev_it_8=it_7;
        it_7=it_7->next;
        /*c*/ come_call_finalizer3(prev_it_8,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_12;
struct sType* __result_obj__2;
struct sType* __result_obj__3;
struct sType* result_13;
struct sType* __result_obj__4;
result_12 = (void*)0;
result_13 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_12,0,sizeof(struct sType*));
        __result_obj__2 = result_12;
        return __result_obj__2;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__3 = self->it->item;
        return __result_obj__3;
    }
    memset(&result_13,0,sizeof(struct sType*));
    __result_obj__4 = result_13;
    return __result_obj__4;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_15;
struct sType* __result_obj__5;
struct sType* __result_obj__6;
struct sType* result_16;
struct sType* __result_obj__7;
result_15 = (void*)0;
result_16 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_15,0,sizeof(struct sType*));
        __result_obj__5 = result_15;
        return __result_obj__5;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__6 = self->it->item;
        return __result_obj__6;
    }
    memset(&result_16,0,sizeof(struct sType*));
    __result_obj__7 = result_16;
    return __result_obj__7;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* buf_19;
void* __right_value49 = (void*)0;
struct sType* type2_20;
char* class_name_44;
int i_45;
void* __right_value50 = (void*)0;
struct sType* gtype_46;
void* __right_value51 = (void*)0;
int i_53;
int i_54;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
char* __result_obj__30;
    buf_19=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 153, "struct buffer*"))));
    type2_20=(struct sType*)come_increment_ref_count(sType_clone(type));
    class_name_44=type2_20->mClass->mName;
    buffer_append_str(buf_19,class_name_44);
    if(    list$1sType$ph_length(type2_20->mGenericsTypes)>0) {
        buffer_append_str(buf_19,"<");
        for(        i_45=0;        i_45<list$1sType$ph_length(type2_20->mGenericsTypes);        i_45++        ){
            gtype_46=((struct sType*)(__right_value50=list$1sType$ph_operator_load_element(type2_20->mGenericsTypes,i_45)));
            /*c*/ come_call_finalizer3(__right_value50,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_str(buf_19,((char*)(__right_value51=make_come_type_name_string(gtype_46,info))));
            (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_45!=list$1sType$ph_length(type2_20->mGenericsTypes)-1) {
                buffer_append_str(buf_19,",");
            }
        }
        buffer_append_str(buf_19,">");
    }
    if(    charp_operator_not_equals(class_name_44,"lambda")) {
        for(        i_53=0;        i_53<type2_20->mPointerNum;        i_53++        ){
            buffer_append_str(buf_19,"*");
        }
    }
    if(    list$1sNode$ph_length(type2_20->mArrayNum)>0) {
        for(        i_54=0;        i_54<list$1sNode$ph_length(type2_20->mArrayNum);        i_54++        ){
            buffer_append_str(buf_19,"[]");
        }
    }
    if(    type2_20->mHeap) {
        buffer_append_str(buf_19,"%");
    }
    if(    type2_20->mAttribute) {
        buffer_append_str(buf_19,((char*)(__right_value52=charp_operator_add(" ",type2_20->mAttribute))));
        (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__30 = (char*)come_increment_ref_count(((char*)(__right_value53=buffer_to_string(buf_19))));
    /*c*/ come_call_finalizer3(buf_19,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_20,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__30 = come_decrement_ref_count(__result_obj__30, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__30;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__10;
void* __right_value12 = (void*)0;
struct sType* result_21;
void* __right_value13 = (void*)0;
struct sType* __dec_obj1;
void* __right_value14 = (void*)0;
struct sType* __dec_obj2;
void* __right_value22 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value23 = (void*)0;
struct sType* __dec_obj7;
void* __right_value25 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value26 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value27 = (void*)0;
char* __dec_obj10;
void* __right_value28 = (void*)0;
char* __dec_obj11;
void* __right_value29 = (void*)0;
char* __dec_obj12;
void* __right_value37 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value38 = (void*)0;
char* __dec_obj17;
void* __right_value39 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value47 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value48 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__25;
    if(    self==(void*)0) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    result_21=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_21->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj1=result_21->mOriginalLoadVarType,
        result_21->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj1,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj2=result_21->mChannelType,
        result_21->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj2,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj6=result_21->mGenericsTypes,
        result_21->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj6,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=result_21->mNoSolvedGenericsType,
        result_21->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj7,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj8=result_21->mSizeNum,
        result_21->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj9=result_21->mAlignas,
        result_21->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj10=result_21->mTupleName,
        result_21->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj11=result_21->mAttribute,
        result_21->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_21->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_21->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_21->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_21->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_21->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_21->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_21->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_21->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_21->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_21->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_21->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_21->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_21->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_21->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_21->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_21->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_21->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_21->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_21->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_21->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_21->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_21->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_21->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj12=result_21->mAsmName,
        result_21->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_21->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_21->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_21->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj16=result_21->mArrayNum,
        result_21->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj16,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_21->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_21->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_21->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_21->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_21->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj17=result_21->mOriginalTypeName,
        result_21->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_21->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_21->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_21->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_21->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj18=result_21->mParamTypes,
        result_21->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj18,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj22=result_21->mParamNames,
        result_21->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj23=result_21->mResultType,
        result_21->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_21->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_21->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__25 = result_21;
    /*c*/ come_call_finalizer3(result_21,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__25;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__11;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* result_22;
struct list_item$1sType$ph* it_23;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1sType$ph* __result_obj__14;
    if(    self==((void*)0)) {
        __result_obj__11 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__11,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__11;
    }
    result_22=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_23=self->head;
    while(    it_23!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_22,(struct sType*)come_increment_ref_count(sType_clone(it_23->item)));
        }
        else {
            list$1sType$ph_add(result_22,(struct sType*)come_increment_ref_count(sType_clone(it_23->item)));
        }
        it_23=it_23->next;
    }
    __result_obj__14 = (struct list$1sType$ph*)come_increment_ref_count(result_22);
    /*c*/ come_call_finalizer3(result_22,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__14,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__14;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__12;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__12 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__12,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__12;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value17 = (void*)0;
struct list_item$1sType$ph* litem_24;
struct sType* __dec_obj3;
void* __right_value18 = (void*)0;
struct list_item$1sType$ph* litem_25;
struct sType* __dec_obj4;
void* __right_value19 = (void*)0;
struct list_item$1sType$ph* litem_26;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__13;
    if(    self->len==0) {
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value17=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        __dec_obj3=litem_24->item,
        litem_24->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value18=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        __dec_obj4=litem_25->item,
        litem_25->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value19=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        __dec_obj5=litem_26->item,
        litem_26->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result_obj__13 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_27;
struct list_item$1sType$ph* prev_it_28;
    it_27=self->head;
    while(    it_27!=((void*)0)) {
        prev_it_28=it_27;
        it_27=it_27->next;
        /*c*/ come_call_finalizer3(prev_it_28,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__15;
void* __right_value24 = (void*)0;
struct sNode* result_29;
struct sNode* __result_obj__16;
    if(    self==(void*)0) {
        __result_obj__15 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__15) ? __result_obj__15 = come_decrement_ref_count(__result_obj__15, ((struct sNode*)__result_obj__15)->finalize, ((struct sNode*)__result_obj__15)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__15;
    }
    result_29=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_29->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_29->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_29->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_29->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_29->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_29->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_29->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_29->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_29->kind=self->kind;
    }
    __result_obj__16 = (struct sNode*)come_increment_ref_count(result_29);
    ((result_29) ? result_29 = come_decrement_ref_count(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__16) ? __result_obj__16 = come_decrement_ref_count(__result_obj__16, ((struct sNode*)__result_obj__16)->finalize, ((struct sNode*)__result_obj__16)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__16;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__17;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* result_30;
struct list_item$1sNode$ph* it_31;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1sNode$ph* __result_obj__20;
    if(    self==((void*)0)) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__17,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__17;
    }
    result_30=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_31=self->head;
    while(    it_31!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_30,(struct sNode*)come_increment_ref_count(sNode_clone(it_31->item)));
        }
        else {
            list$1sNode$ph_add(result_30,(struct sNode*)come_increment_ref_count(sNode_clone(it_31->item)));
        }
        it_31=it_31->next;
    }
    __result_obj__20 = (struct list$1sNode$ph*)come_increment_ref_count(result_30);
    /*c*/ come_call_finalizer3(result_30,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__20,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__20;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__18,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__18;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value32 = (void*)0;
struct list_item$1sNode$ph* litem_32;
struct sNode* __dec_obj13;
void* __right_value33 = (void*)0;
struct list_item$1sNode$ph* litem_33;
struct sNode* __dec_obj14;
void* __right_value34 = (void*)0;
struct list_item$1sNode$ph* litem_34;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__19;
    if(    self->len==0) {
        litem_32=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value32=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        __dec_obj13=litem_32->item,
        litem_32->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value33=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj14=litem_33->item,
        litem_33->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value34=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj15=litem_34->item,
        litem_34->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__19 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__19;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_35;
struct list_item$1sNode$ph* prev_it_36;
    it_35=self->head;
    while(    it_35!=((void*)0)) {
        prev_it_36=it_35;
        it_35=it_35->next;
        /*c*/ come_call_finalizer3(prev_it_36,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__21;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* result_37;
struct list_item$1char$ph* it_38;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1char$ph* __result_obj__24;
    if(    self==((void*)0)) {
        __result_obj__21 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__21,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__21;
    }
    result_37=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_38=self->head;
    while(    it_38!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_37,(char*)come_increment_ref_count((char*)come_memdup(it_38->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_37,(char*)come_increment_ref_count((char*)come_memdup(it_38->item, "./comelang.h", 1032, "char*")));
        }
        it_38=it_38->next;
    }
    __result_obj__24 = (struct list$1char$ph*)come_increment_ref_count(result_37);
    /*c*/ come_call_finalizer3(result_37,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__24,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__22;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__22 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__22,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__22;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value42 = (void*)0;
struct list_item$1char$ph* litem_39;
char* __dec_obj19;
void* __right_value43 = (void*)0;
struct list_item$1char$ph* litem_40;
char* __dec_obj20;
void* __right_value44 = (void*)0;
struct list_item$1char$ph* litem_41;
char* __dec_obj21;
struct list$1char$ph* __result_obj__23;
    if(    self->len==0) {
        litem_39=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value42=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_39->prev=((void*)0);
        litem_39->next=((void*)0);
        __dec_obj19=litem_39->item,
        litem_39->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_39;
        self->head=litem_39;
    }
    else if(    self->len==1) {
        litem_40=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value43=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_40->prev=self->head;
        litem_40->next=((void*)0);
        __dec_obj20=litem_40->item,
        litem_40->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_40;
        self->head->next=litem_40;
    }
    else {
        litem_41=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value44=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_41->prev=self->tail;
        litem_41->next=((void*)0);
        __dec_obj21=litem_41->item,
        litem_41->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_41;
        self->tail=litem_41;
    }
    self->len++;
    __result_obj__23 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__23;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_42;
struct list_item$1char$ph* prev_it_43;
    it_42=self->head;
    while(    it_42!=((void*)0)) {
        prev_it_43=it_42;
        it_42=it_42->next;
        /*c*/ come_call_finalizer3(prev_it_43,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_47;
int i_48;
struct sType* __result_obj__26;
struct sType* default_value_49;
struct sType* __result_obj__27;
default_value_49 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_47=self->head;
    i_48=0;
    while(    it_47!=((void*)0)) {
        if(        position==i_48) {
            __result_obj__26 = (struct sType*)come_increment_ref_count(it_47->item);
            /*c*/ come_call_finalizer3(__result_obj__26,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__26;
        }
        it_47=it_47->next;
        i_48++;
    }
    memset(&default_value_49,0,sizeof(struct sType*));
    __result_obj__27 = (struct sType*)come_increment_ref_count(default_value_49);
    /*c*/ come_call_finalizer3(default_value_49,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__27,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__27;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_50;
int i_51;
struct sType* __result_obj__28;
struct sType* default_value_52;
struct sType* __result_obj__29;
default_value_52 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_50=self->head;
    i_51=0;
    while(    it_50!=((void*)0)) {
        if(        position==i_51) {
            __result_obj__28 = (struct sType*)come_increment_ref_count(it_50->item);
            /*c*/ come_call_finalizer3(__result_obj__28,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__28;
        }
        it_50=it_50->next;
        i_51++;
    }
    memset(&default_value_52,0,sizeof(struct sType*));
    __result_obj__29 = (struct sType*)come_increment_ref_count(default_value_52);
    /*c*/ come_call_finalizer3(default_value_52,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__29,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__29;
}

void show_type(struct sType* type, struct sInfo* info){
void* __right_value54 = (void*)0;
    puts(((char*)(__right_value54=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct buffer* buf_55;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
char* __result_obj__31;
int i_56;
struct list$1sType$ph* o2_saved_57;
struct sType* it_58;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
char* __result_obj__32;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
int i_59;
int i_60;
struct list$1sType$ph* o2_saved_61;
struct sType* it_62;
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
char* __result_obj__33;
void* __right_value69 = (void*)0;
char* __result_obj__34;
    buf_55=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 206, "struct buffer*"))));
    if(    type->mResultType==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value57=err_msg(info,"invalid lambda type")));
        /*c*/ come_call_finalizer3(__right_value57,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__31 = (char*)come_increment_ref_count(((char*)(__right_value58=__builtin_string(""))));
        /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__31 = come_decrement_ref_count(__result_obj__31, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__31;
    }
    if(    type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")) {
        buffer_append_format(buf_55,"(*%s)(",var_name);
        i_56=0;
        for(        o2_saved_57=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_58=list$1sType$ph_begin((o2_saved_57));        !list$1sType$ph_end((o2_saved_57));        it_58=list$1sType$ph_next((o2_saved_57))        ){
            buffer_append_str(buf_55,((char*)(__right_value59=make_type_name_string(it_58,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_56!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_55,",");
            }
            i_56++;
        }
        /*c*/ come_call_finalizer3(o2_saved_57,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_55,")");
        if(        type->mAttribute) {
            buffer_append_str(buf_55,((char*)(__right_value60=charp_operator_add(" ",type->mAttribute))));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__32 = (char*)come_increment_ref_count(((char*)(__right_value62=make_lambda_type_name_string(type->mResultType,((char*)(__right_value61=buffer_to_string(buf_55))),info))));
        /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__32 = come_decrement_ref_count(__result_obj__32, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__32;
    }
    else {
        if(        type->mLambdaArray) {
            if(            type->mLambdaArrayNum==0) {
                buffer_append_format(buf_55,"%s (*%s[])(",((char*)(__right_value63=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name);
                (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_55,"%s (*%s[%d])(",((char*)(__right_value64=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name,type->mLambdaArrayNum);
                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append_format(buf_55,"%s ",((char*)(__right_value65=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            type->mFunctionPointerNum>1) {
                buffer_append_str(buf_55,"(");
                for(                i_59=0;                i_59<type->mFunctionPointerNum;                i_59++                ){
                    buffer_append_str(buf_55,"*");
                }
                buffer_append_format(buf_55,"%s)(",var_name);
            }
            else {
                buffer_append_format(buf_55,"(*%s)(",var_name);
            }
        }
        i_60=0;
        for(        o2_saved_61=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_62=list$1sType$ph_begin((o2_saved_61));        !list$1sType$ph_end((o2_saved_61));        it_62=list$1sType$ph_next((o2_saved_61))        ){
            buffer_append_str(buf_55,((char*)(__right_value66=make_type_name_string(it_62,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_60!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_55,",");
            }
            i_60++;
        }
        /*c*/ come_call_finalizer3(o2_saved_61,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_55,")");
        if(        type->mAttribute) {
            buffer_append_str(buf_55,((char*)(__right_value67=charp_operator_add(" ",type->mAttribute))));
            (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__33 = (char*)come_increment_ref_count(((char*)(__right_value68=buffer_to_string(buf_55))));
        /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__33 = come_decrement_ref_count(__result_obj__33, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__33;
    }
    __result_obj__34 = (char*)come_increment_ref_count(((char*)(__right_value69=buffer_to_string(buf_55))));
    /*c*/ come_call_finalizer3(buf_55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__34 = come_decrement_ref_count(__result_obj__34, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__34;
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct buffer* buf_63;
void* __right_value72 = (void*)0;
struct sType* type2_64;
void* __right_value73 = (void*)0;
char* str_65;
void* __right_value74 = (void*)0;
char* str_66;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
char* __result_obj__35;
void* __right_value77 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value78 = (void*)0;
char* type_str_68;
void* __right_value79 = (void*)0;
char* type_str_69;
struct list$1sNode$ph* o2_saved_70;
struct sNode* it_73;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
char* __result_obj__42;
void* __right_value82 = (void*)0;
struct CVALUE* cvalue_76;
void* __right_value83 = (void*)0;
char* type_str_77;
void* __right_value84 = (void*)0;
char* __result_obj__43;
void* __right_value85 = (void*)0;
char* __result_obj__44;
    buf_63=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 283, "struct buffer*"))));
    type2_64=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type2_64->mArrayPointerType) {
        type2_64->mPointerNum--;
    }
    if(    string_operator_equals(type2_64->mClass->mName,"lambda")&&type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")) {
        str_65=(char*)come_increment_ref_count(header_lambda(type2_64,(char*)come_increment_ref_count(type2_64->mAsmName),info));
        buffer_append_str(buf_63,str_65);
        (str_65 = come_decrement_ref_count(str_65, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    string_operator_equals(type2_64->mClass->mName,"lambda")) {
        str_66=(char*)come_increment_ref_count(make_lambda_type_name_string(type2_64,name,info));
        buffer_append_str(buf_63,str_66);
        (str_66 = come_decrement_ref_count(str_66, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    type2_64->mSizeNum!=((void*)0)) {
        if(        !node_compile(type2_64->mSizeNum,info)) {
            ((struct tuple2$2int$bool$*)(__right_value75=err_msg(info,"invalid bit field number")));
            /*c*/ come_call_finalizer3(__right_value75,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__35 = (char*)come_increment_ref_count(((char*)(__right_value76=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__35 = come_decrement_ref_count(__result_obj__35, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__35;
        }
        come_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        type_str_68=(char*)come_increment_ref_count(make_type_name_string(type2_64,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_format(buf_63,"%s ",type_str_68);
        buffer_append_format(buf_63,"%s:%s",name,come_value_67->c_value);
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        /*c*/ come_call_finalizer3(come_value_67,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_str_68 = come_decrement_ref_count(type_str_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(type2_64->mArrayNum)>0) {
        type_str_69=(char*)come_increment_ref_count(make_type_name_string(type2_64,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(buf_63,type_str_69);
        buffer_append_str(buf_63," ");
        buffer_append_str(buf_63,name);
        for(        o2_saved_70=(struct list$1sNode$ph*)come_increment_ref_count((type2_64->mArrayNum)),it_73=list$1sNode$ph_begin((o2_saved_70));        !list$1sNode$ph_end((o2_saved_70));        it_73=list$1sNode$ph_next((o2_saved_70))        ){
            if(            !node_compile(it_73,info)) {
                ((struct tuple2$2int$bool$*)(__right_value80=err_msg(info,"invalid array number")));
                /*c*/ come_call_finalizer3(__right_value80,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__42 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string(""))));
                /*c*/ come_call_finalizer3(o2_saved_70,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_str_69 = come_decrement_ref_count(type_str_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__42;
            }
            cvalue_76=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(buf_63,"[%s]",cvalue_76->c_value);
            /*c*/ come_call_finalizer3(cvalue_76,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_70,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        type2_64->mArrayPointerType) {
            buffer_append_str(buf_63,"[]");
        }
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        (type_str_69 = come_decrement_ref_count(type_str_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type_str_77=(char*)come_increment_ref_count(make_type_name_string(type2_64,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        string_operator_equals(type_str_77,"")) {
            __result_obj__43 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
            (type_str_77 = come_decrement_ref_count(type_str_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__43;
        }
        buffer_append_str(buf_63,type_str_77);
        buffer_append_str(buf_63," ");
        buffer_append_str(buf_63,name);
        if(        type2_64->mArrayPointerType) {
            buffer_append_str(buf_63,"[]");
        }
        if(        type2_64->mAsmName!=((void*)0)&&string_operator_not_equals(type2_64->mAsmName,"")) {
            buffer_append_format(buf_63," __asm__(\"%s\")",type2_64->mAsmName);
        }
        (type_str_77 = come_decrement_ref_count(type_str_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value85=buffer_to_string(buf_63))));
    /*c*/ come_call_finalizer3(buf_63,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_64,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__44;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_71;
struct sNode* __result_obj__36;
struct sNode* __result_obj__37;
struct sNode* result_72;
struct sNode* __result_obj__38;
result_71 = (void*)0;
result_72 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_71,0,sizeof(struct sNode*));
        __result_obj__36 = result_71;
        return __result_obj__36;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__37 = self->it->item;
        return __result_obj__37;
    }
    memset(&result_72,0,sizeof(struct sNode*));
    __result_obj__38 = result_72;
    return __result_obj__38;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_74;
struct sNode* __result_obj__39;
struct sNode* __result_obj__40;
struct sNode* result_75;
struct sNode* __result_obj__41;
result_74 = (void*)0;
result_75 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_74,0,sizeof(struct sNode*));
        __result_obj__39 = result_74;
        return __result_obj__39;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_75,0,sizeof(struct sNode*));
    __result_obj__41 = result_75;
    return __result_obj__41;
}

struct sType* get_no_solved_type(struct sType* type){
struct sType* result_78;
struct sType* __dec_obj24;
void* __right_value86 = (void*)0;
struct sType* __dec_obj25;
int i_79;
struct list$1sType$ph* o2_saved_80;
struct sType* it_81;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct sType* __result_obj__48;
result_78 = (void*)0;
    if(    type->mNoSolvedGenericsType) {
        __dec_obj24=result_78,
        result_78=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj25=result_78,
        result_78=(struct sType*)come_increment_ref_count(sType_clone(type));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_79=0;
    for(    o2_saved_80=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_81=list$1sType$ph_begin((o2_saved_80));    !list$1sType$ph_end((o2_saved_80));    it_81=list$1sType$ph_next((o2_saved_80))    ){
        list$1sType$ph_operator_store_element(result_78->mGenericsTypes,i_79,(struct sType*)come_increment_ref_count(get_no_solved_type(it_81)));
        /*c*/ come_call_finalizer3(__right_value90,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_79++;
    }
    /*c*/ come_call_finalizer3(o2_saved_80,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__48 = (struct sType*)come_increment_ref_count(result_78);
    /*c*/ come_call_finalizer3(result_78,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__48,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_82;
int i_83;
struct sType* default_value_84;
struct list$1sType$ph* __result_obj__46;
struct list_item$1sType$ph* it_88;
int i_89;
struct sType* __dec_obj29;
struct list$1sType$ph* __result_obj__47;
default_value_84 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_82=self->len;
        for(        i_83=0;        i_83<position-len_82;        i_83++        ){
            memset(&default_value_84,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_84));
            /*c*/ come_call_finalizer3(default_value_84,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__46 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__46;
    }
    it_88=self->head;
    i_89=0;
    while(    it_88!=((void*)0)) {
        if(        position==i_89) {
            __dec_obj29=it_88->item,
            it_88->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_88=it_88->next;
        i_89++;
    }
    __result_obj__47 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__47;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value87 = (void*)0;
struct list_item$1sType$ph* litem_85;
struct sType* __dec_obj26;
void* __right_value88 = (void*)0;
struct list_item$1sType$ph* litem_86;
struct sType* __dec_obj27;
void* __right_value89 = (void*)0;
struct list_item$1sType$ph* litem_87;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__45;
    if(    self->len==0) {
        litem_85=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value87=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_85->prev=((void*)0);
        litem_85->next=((void*)0);
        __dec_obj26=litem_85->item,
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_85;
        self->head=litem_85;
    }
    else if(    self->len==1) {
        litem_86=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value88=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_86->prev=self->head;
        litem_86->next=((void*)0);
        __dec_obj27=litem_86->item,
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_86;
        self->head->next=litem_86;
    }
    else {
        litem_87=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value89=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_87->prev=self->tail;
        litem_87->next=((void*)0);
        __dec_obj28=litem_87->item,
        litem_87->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_87;
        self->tail=litem_87;
    }
    self->len++;
    __result_obj__45 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__45;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info){
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_90;
int i_91;
void* __right_value94 = (void*)0;
char* __result_obj__49;
void* __right_value95 = (void*)0;
struct sType* no_solved_type_92;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* buf_93;
char* class_name_94;
int i_95;
void* __right_value98 = (void*)0;
struct sType* gtype_96;
void* __right_value99 = (void*)0;
int i_97;
int i_98;
void* __right_value100 = (void*)0;
char* __result_obj__50;
    if(    original_type_name&&type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")) {
        buf_90=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 392, "struct buffer*"))));
        buffer_append_str(buf_90,type->mOriginalTypeName);
        for(        i_91=0;        i_91<type->mOriginalTypeNamePointerNum;        i_91++        ){
            buffer_append_str(buf_90,"*");
        }
        if(        type->mOriginalTypeNameHeap) {
            buffer_append_str(buf_90,"%");
        }
        __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_90))));
        /*c*/ come_call_finalizer3(buf_90,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__49;
        /*c*/ come_call_finalizer3(buf_90,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        no_solved_type_92=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
        buf_93=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 407, "struct buffer*"))));
        class_name_94=no_solved_type_92->mClass->mName;
        buffer_append_str(buf_93,class_name_94);
        if(        list$1sType$ph_length(no_solved_type_92->mGenericsTypes)>0) {
            buffer_append_str(buf_93,"<");
            for(            i_95=0;            i_95<list$1sType$ph_length(no_solved_type_92->mGenericsTypes);            i_95++            ){
                gtype_96=((struct sType*)(__right_value98=list$1sType$ph_operator_load_element(no_solved_type_92->mGenericsTypes,i_95)));
                /*c*/ come_call_finalizer3(__right_value98,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                buffer_append_str(buf_93,((char*)(__right_value99=make_come_type_name_string_no_solved(gtype_96,(_Bool)1,info))));
                (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                i_95!=list$1sType$ph_length(no_solved_type_92->mGenericsTypes)-1) {
                    buffer_append_str(buf_93,",");
                }
            }
            buffer_append_str(buf_93,">");
        }
        if(        charp_operator_not_equals(class_name_94,"lambda")) {
            for(            i_97=0;            i_97<no_solved_type_92->mPointerNum;            i_97++            ){
                buffer_append_str(buf_93,"*");
            }
        }
        if(        list$1sNode$ph_length(no_solved_type_92->mArrayNum)>0) {
            for(            i_98=0;            i_98<list$1sNode$ph_length(no_solved_type_92->mArrayNum);            i_98++            ){
                buffer_append_str(buf_93,"[]");
            }
        }
        if(        no_solved_type_92->mHeap) {
            buffer_append_str(buf_93,"%");
        }
        __result_obj__50 = (char*)come_increment_ref_count(((char*)(__right_value100=buffer_to_string(buf_93))));
        /*c*/ come_call_finalizer3(no_solved_type_92,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_93,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__50;
        /*c*/ come_call_finalizer3(no_solved_type_92,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_93,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info){
void* __right_value101 = (void*)0;
char* type_name_99;
void* __right_value102 = (void*)0;
char* __result_obj__51;
    type_name_99=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(type,original_type_name,info));
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value102=xsprintf("%s %s",type_name_99,name))));
    (type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__51;
}

char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info){
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct buffer* header_100;
void* __right_value105 = (void*)0;
char* result_type_name_101;
void* __right_value106 = (void*)0;
char* impl_name_102;
int i_103;
void* __right_value107 = (void*)0;
struct sType* param_type_104;
void* __right_value108 = (void*)0;
char* param_name_111;
void* __right_value109 = (void*)0;
char* default_parametor_112;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__56;
    header_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 457, "struct buffer*"))));
    result_type_name_101=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(fun->mResultType,(_Bool)0,info));
    if(    impl_type) {
        impl_name_102=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(impl_type,(_Bool)0,info));
        buffer_append_format(header_100,"extern %s %s::%s(",result_type_name_101,impl_name_102,base_fun_name);
        (impl_name_102 = come_decrement_ref_count(impl_name_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_format(header_100,"extern %s %s(",result_type_name_101,base_fun_name);
    }
    for(    i_103=0;    i_103<list$1sType$ph_length(fun->mParamTypes);    i_103++    ){
        param_type_104=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(fun->mParamTypes,i_103));
        param_name_111=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamNames,i_103));
        default_parametor_112=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamDefaultParametors,i_103));
        if(        default_parametor_112) {
            buffer_append_format(header_100,"%s %s=%s",((char*)(__right_value110=make_come_type_name_string_no_solved(param_type_104,(_Bool)0,info))),param_name_111,default_parametor_112);
            (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(header_100,"%s %s",((char*)(__right_value111=make_come_type_name_string_no_solved(param_type_104,(_Bool)0,info))),param_name_111);
            (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_103!=list$1sType$ph_length(fun->mParamTypes)-1) {
            buffer_append_str(header_100,",");
        }
        /*c*/ come_call_finalizer3(param_type_104,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_111 = come_decrement_ref_count(param_name_111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (default_parametor_112 = come_decrement_ref_count(default_parametor_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    version_==-1||version_==0) {
        buffer_append_str(header_100,");\n");
    }
    else {
        buffer_append_format(header_100,") version %d;\n",version_);
    }
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value112=buffer_to_string(header_100))));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(impl_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(header_100,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_name_101 = come_decrement_ref_count(result_type_name_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__56;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_105;
int i_106;
char* __result_obj__52;
char* default_value_107;
char* __result_obj__53;
default_value_107 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_105=self->head;
    i_106=0;
    while(    it_105!=((void*)0)) {
        if(        position==i_106) {
            __result_obj__52 = (char*)come_increment_ref_count(it_105->item);
            (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__52;
        }
        it_105=it_105->next;
        i_106++;
    }
    memset(&default_value_107,0,sizeof(char*));
    __result_obj__53 = (char*)come_increment_ref_count(default_value_107);
    (default_value_107 = come_decrement_ref_count(default_value_107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__53;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_108;
int i_109;
char* __result_obj__54;
char* default_value_110;
char* __result_obj__55;
default_value_110 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_108=self->head;
    i_109=0;
    while(    it_108!=((void*)0)) {
        if(        position==i_109) {
            __result_obj__54 = (char*)come_increment_ref_count(it_108->item);
            (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__54;
        }
        it_108=it_108->next;
        i_109++;
    }
    memset(&default_value_110,0,sizeof(char*));
    __result_obj__55 = (char*)come_increment_ref_count(default_value_110);
    (default_value_110 = come_decrement_ref_count(default_value_110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__55;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct buffer* output_113;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct buffer* output2_114;
int i_115;
struct list$1sType$ph* o2_saved_116;
struct sType* it_117;
void* __right_value117 = (void*)0;
char* name_118;
void* __right_value118 = (void*)0;
char* str_119;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
char* str_120;
void* __right_value121 = (void*)0;
struct sType* base_result_type_121;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1sNode$ph* __dec_obj30;
void* __right_value124 = (void*)0;
char* result_type_str_122;
int i_123;
struct list$1sType$ph* o2_saved_124;
struct sType* it_125;
void* __right_value125 = (void*)0;
char* name_126;
void* __right_value126 = (void*)0;
char* str_127;
void* __right_value127 = (void*)0;
struct sNode* node_128;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
char* __result_obj__61;
void* __right_value130 = (void*)0;
struct CVALUE* cvalue_135;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
char* result_type_str_136;
int i_137;
struct list$1sType$ph* o2_saved_138;
struct sType* it_139;
void* __right_value133 = (void*)0;
char* name_140;
void* __right_value134 = (void*)0;
char* str_141;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
char* __result_obj__62;
    output_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 498, "struct buffer*"))));
    if(    fun->mResultType->mResultType) {
        output2_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 500, "struct buffer*"))));
        buffer_append_str(output2_114,fun->mName);
        buffer_append_str(output2_114,"(");
        i_115=0;
        for(        o2_saved_116=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_117=list$1sType$ph_begin((o2_saved_116));        !list$1sType$ph_end((o2_saved_116));        it_117=list$1sType$ph_next((o2_saved_116))        ){
            name_118=((char*)(__right_value117=list$1char$ph_operator_load_element(fun->mParamNames,i_115)));
            (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_119=(char*)come_increment_ref_count(make_define_var(it_117,name_118,(_Bool)0,info));
            buffer_append_str(output2_114,str_119);
            if(            i_115==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output2_114,", ...");
                }
            }
            else {
                buffer_append_str(output2_114,", ");
            }
            i_115++;
            (str_119 = come_decrement_ref_count(str_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_116,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_114,")");
        str_120=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value119=buffer_to_string(output2_114))),info));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic) {
            buffer_append_str(output_113,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_113,"inline ");
        }
        buffer_append_str(output_113,str_120);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value121=buffer_to_string(output_113))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(output2_114,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_120 = come_decrement_ref_count(str_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_121=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj30=base_result_type_121->mArrayNum,
        base_result_type_121->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 554, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj30,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_122=(char*)come_increment_ref_count(make_type_name_string(base_result_type_121,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_113,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_113,"inline ");
        }
        buffer_append_str(output_113,result_type_str_122);
        buffer_append_str(output_113," (*");
        buffer_append_str(output_113,fun->mName);
        buffer_append_str(output_113,"(");
        i_123=0;
        for(        o2_saved_124=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_125=list$1sType$ph_begin((o2_saved_124));        !list$1sType$ph_end((o2_saved_124));        it_125=list$1sType$ph_next((o2_saved_124))        ){
            name_126=((char*)(__right_value125=list$1char$ph_operator_load_element(fun->mParamNames,i_123)));
            (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_127=(char*)come_increment_ref_count(make_define_var(it_125,name_126,(_Bool)0,info));
            buffer_append_str(output_113,str_127);
            if(            i_123==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_113,", ...");
                }
            }
            else {
                buffer_append_str(output_113,", ");
            }
            i_123++;
            (str_127 = come_decrement_ref_count(str_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_124,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_128=((struct sNode*)(__right_value127=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value127) ? __right_value127 = come_decrement_ref_count(__right_value127, ((struct sNode*)__right_value127)->finalize, ((struct sNode*)__right_value127)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_128,info)) {
            ((struct tuple2$2int$bool$*)(__right_value128=err_msg(info,"invalid array number")));
            /*c*/ come_call_finalizer3(__right_value128,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value129=__builtin_string(""))));
            /*c*/ come_call_finalizer3(base_result_type_121,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_122 = come_decrement_ref_count(result_type_str_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_113,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__61;
        }
        cvalue_135=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_113,"))[%s]",cvalue_135->c_value);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value131=buffer_to_string(output_113))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(base_result_type_121,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_122 = come_decrement_ref_count(result_type_str_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_135,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_136=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_113,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_113,"inline ");
        }
        buffer_append_str(output_113,result_type_str_136);
        buffer_append_str(output_113," ");
        buffer_append_str(output_113,fun->mName);
        buffer_append_str(output_113,"(");
        i_137=0;
        for(        o2_saved_138=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_139=list$1sType$ph_begin((o2_saved_138));        !list$1sType$ph_end((o2_saved_138));        it_139=list$1sType$ph_next((o2_saved_138))        ){
            name_140=((char*)(__right_value133=list$1char$ph_operator_load_element(fun->mParamNames,i_137)));
            (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_141=(char*)come_increment_ref_count(make_define_var(it_139,name_140,(_Bool)0,info));
            buffer_append_str(output_113,str_141);
            if(            i_137==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_113,", ...");
                }
            }
            else {
                buffer_append_str(output_113,", ");
            }
            i_137++;
            (str_141 = come_decrement_ref_count(str_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_138,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output_113,")");
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value135=buffer_to_string(output_113))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        (result_type_str_136 = come_decrement_ref_count(result_type_str_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buffer_append_str(output_113,"{\n");
    buffer_append_str(output_113,((char*)(__right_value136=buffer_to_string(fun->mSourceHead))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_113,((char*)(__right_value137=buffer_to_string(fun->mSourceHead2))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_113,((char*)(__right_value138=buffer_to_string(fun->mSource))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_113,"}\n");
    __result_obj__62 = (char*)come_increment_ref_count(((char*)(__right_value139=buffer_to_string(output_113))));
    /*c*/ come_call_finalizer3(output_113,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__62;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_129;
int i_130;
struct sNode* __result_obj__57;
struct sNode* default_value_131;
struct sNode* __result_obj__58;
default_value_131 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_129=self->head;
    i_130=0;
    while(    it_129!=((void*)0)) {
        if(        position==i_130) {
            __result_obj__57 = (struct sNode*)come_increment_ref_count(it_129->item);
            ((__result_obj__57) ? __result_obj__57 = come_decrement_ref_count(__result_obj__57, ((struct sNode*)__result_obj__57)->finalize, ((struct sNode*)__result_obj__57)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__57;
        }
        it_129=it_129->next;
        i_130++;
    }
    memset(&default_value_131,0,sizeof(struct sNode*));
    __result_obj__58 = (struct sNode*)come_increment_ref_count(default_value_131);
    ((default_value_131) ? default_value_131 = come_decrement_ref_count(default_value_131, ((struct sNode*)default_value_131)->finalize, ((struct sNode*)default_value_131)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__58) ? __result_obj__58 = come_decrement_ref_count(__result_obj__58, ((struct sNode*)__result_obj__58)->finalize, ((struct sNode*)__result_obj__58)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__58;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_132;
int i_133;
struct sNode* __result_obj__59;
struct sNode* default_value_134;
struct sNode* __result_obj__60;
default_value_134 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_132=self->head;
    i_133=0;
    while(    it_132!=((void*)0)) {
        if(        position==i_133) {
            __result_obj__59 = (struct sNode*)come_increment_ref_count(it_132->item);
            ((__result_obj__59) ? __result_obj__59 = come_decrement_ref_count(__result_obj__59, ((struct sNode*)__result_obj__59)->finalize, ((struct sNode*)__result_obj__59)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__59;
        }
        it_132=it_132->next;
        i_133++;
    }
    memset(&default_value_134,0,sizeof(struct sNode*));
    __result_obj__60 = (struct sNode*)come_increment_ref_count(default_value_134);
    ((default_value_134) ? default_value_134 = come_decrement_ref_count(default_value_134, ((struct sNode*)default_value_134)->finalize, ((struct sNode*)default_value_134)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__60) ? __result_obj__60 = come_decrement_ref_count(__result_obj__60, ((struct sNode*)__result_obj__60)->finalize, ((struct sNode*)__result_obj__60)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__60;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct buffer* output_142;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct buffer* output2_143;
int i_144;
struct list$1sType$ph* o2_saved_145;
struct sType* it_146;
void* __right_value144 = (void*)0;
char* name_147;
void* __right_value145 = (void*)0;
char* str_148;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
char* str_149;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct sType* base_result_type_150;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct list$1sNode$ph* __dec_obj31;
void* __right_value152 = (void*)0;
char* result_type_str_151;
int i_152;
struct list$1sType$ph* o2_saved_153;
struct sType* it_154;
void* __right_value153 = (void*)0;
char* name_155;
void* __right_value154 = (void*)0;
char* str_156;
void* __right_value155 = (void*)0;
struct sNode* node_157;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
char* __result_obj__63;
void* __right_value158 = (void*)0;
struct CVALUE* cvalue_158;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
char* result_type_str_159;
int i_160;
struct list$1sType$ph* o2_saved_161;
struct sType* it_162;
void* __right_value162 = (void*)0;
char* name_163;
void* __right_value163 = (void*)0;
char* str_164;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* __result_obj__64;
    output_142=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 680, "struct buffer*"))));
    if(    fun->mResultType->mResultType) {
        output2_143=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 683, "struct buffer*"))));
        buffer_append_str(output2_143,fun->mName);
        buffer_append_str(output2_143,"(");
        i_144=0;
        for(        o2_saved_145=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_146=list$1sType$ph_begin((o2_saved_145));        !list$1sType$ph_end((o2_saved_145));        it_146=list$1sType$ph_next((o2_saved_145))        ){
            name_147=((char*)(__right_value144=list$1char$ph_operator_load_element(fun->mParamNames,i_144)));
            (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_148=(char*)come_increment_ref_count(make_define_var(it_146,name_147,(_Bool)0,info));
            buffer_append_str(output2_143,str_148);
            if(            i_144!=list$1sType$ph_length(fun->mParamTypes)-1) {
                buffer_append_str(output2_143,", ");
            }
            i_144++;
            (str_148 = come_decrement_ref_count(str_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_145,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_143,")");
        str_149=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value146=buffer_to_string(output2_143))),info));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic) {
            buffer_append_str(output_142,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_142,"inline ");
        }
        buffer_append_str(output_142,str_149);
        if(        string_operator_not_equals(fun->mFunAttribute,"")) {
            buffer_append_str(output_142,((char*)(__right_value149=xsprintf(" \%s ",((char*)(__right_value148=string_to_string(fun->mFunAttribute)))))));
            (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(output_142,";\n");
        /*c*/ come_call_finalizer3(output2_143,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_149 = come_decrement_ref_count(str_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_150=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj31=base_result_type_150->mArrayNum,
        base_result_type_150->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 719, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj31,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_151=(char*)come_increment_ref_count(make_type_name_string(base_result_type_150,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_142,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_142,"inline ");
        }
        buffer_append_str(output_142,result_type_str_151);
        buffer_append_str(output_142," (*");
        buffer_append_str(output_142,fun->mName);
        buffer_append_str(output_142,"(");
        i_152=0;
        for(        o2_saved_153=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_154=list$1sType$ph_begin((o2_saved_153));        !list$1sType$ph_end((o2_saved_153));        it_154=list$1sType$ph_next((o2_saved_153))        ){
            name_155=((char*)(__right_value153=list$1char$ph_operator_load_element(fun->mParamNames,i_152)));
            (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_156=(char*)come_increment_ref_count(make_define_var(it_154,name_155,(_Bool)0,info));
            buffer_append_str(output_142,str_156);
            if(            i_152==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_142,", ...");
                }
            }
            else {
                buffer_append_str(output_142,", ");
            }
            i_152++;
            (str_156 = come_decrement_ref_count(str_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_153,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_157=((struct sNode*)(__right_value155=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value155) ? __right_value155 = come_decrement_ref_count(__right_value155, ((struct sNode*)__right_value155)->finalize, ((struct sNode*)__right_value155)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_157,info)) {
            ((struct tuple2$2int$bool$*)(__right_value156=err_msg(info,"invalid array number")));
            /*c*/ come_call_finalizer3(__right_value156,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__63 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(""))));
            /*c*/ come_call_finalizer3(base_result_type_150,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_151 = come_decrement_ref_count(result_type_str_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_142,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__63 = come_decrement_ref_count(__result_obj__63, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__63;
        }
        cvalue_158=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_142,"))[%s]",cvalue_158->c_value);
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_142,((char*)(__right_value160=xsprintf("\%s ",((char*)(__right_value159=string_to_string(fun->mAttribute)))))));
            (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_format(output_142,";\n");
        /*c*/ come_call_finalizer3(base_result_type_150,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_151 = come_decrement_ref_count(result_type_str_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_158,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_159=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_142,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_142,"inline ");
        }
        buffer_append_str(output_142,result_type_str_159);
        buffer_append_str(output_142," ");
        buffer_append_str(output_142,fun->mName);
        buffer_append_str(output_142,"(");
        i_160=0;
        for(        o2_saved_161=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_162=list$1sType$ph_begin((o2_saved_161));        !list$1sType$ph_end((o2_saved_161));        it_162=list$1sType$ph_next((o2_saved_161))        ){
            name_163=((char*)(__right_value162=list$1char$ph_operator_load_element(fun->mParamNames,i_160)));
            (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_164=(char*)come_increment_ref_count(make_define_var(it_162,name_163,(_Bool)0,info));
            buffer_append_str(output_142,str_164);
            if(            i_160==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_142,", ...");
                }
            }
            else {
                buffer_append_str(output_142,", ");
            }
            i_160++;
            (str_164 = come_decrement_ref_count(str_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_161,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        string_operator_not_equals(fun->mFunAttribute,"")) {
            buffer_append_str(output_142,((char*)(__right_value165=xsprintf(") \%s;\n",((char*)(__right_value164=string_to_string(fun->mFunAttribute)))))));
            (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_str(output_142,");\n");
        }
        (result_type_str_159 = come_decrement_ref_count(result_type_str_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value166=buffer_to_string(output_142))));
    /*c*/ come_call_finalizer3(output_142,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__64;
}

static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct buffer* output_165;
void* __right_value169 = (void*)0;
char* result_type_str_166;
int i_167;
struct list$1sType$ph* o2_saved_168;
struct sType* it_169;
void* __right_value170 = (void*)0;
char* name_170;
void* __right_value171 = (void*)0;
char* str_171;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* __result_obj__65;
    output_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 814, "struct buffer*"))));
    result_type_str_166=(char*)come_increment_ref_count(make_type_name_string(lambda_type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    buffer_append_str(output_165,result_type_str_166);
    buffer_append_str(output_165," ");
    buffer_append_str(output_165,name);
    buffer_append_str(output_165,"(");
    i_167=0;
    for(    o2_saved_168=(struct list$1sType$ph*)come_increment_ref_count((lambda_type->mParamTypes)),it_169=list$1sType$ph_begin((o2_saved_168));    !list$1sType$ph_end((o2_saved_168));    it_169=list$1sType$ph_next((o2_saved_168))    ){
        name_170=((char*)(__right_value170=list$1char$ph_operator_load_element(lambda_type->mParamNames,i_167)));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        str_171=(char*)come_increment_ref_count(make_define_var(it_169,name_170,(_Bool)0,info));
        buffer_append_str(output_165,str_171);
        if(        i_167==list$1sType$ph_length(lambda_type->mParamTypes)-1) {
            if(            lambda_type->mVarArgs) {
                buffer_append_str(output_165,", ...");
            }
        }
        else {
            buffer_append_str(output_165,", ");
        }
        i_167++;
        (str_171 = come_decrement_ref_count(str_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    lambda_type->mAttribute) {
        buffer_append_str(output_165,((char*)(__right_value174=string_operator_add(((char*)(__right_value173=charp_operator_add(" ",lambda_type->mAttribute))),");\n"))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(output_165,");\n");
    }
    __result_obj__65 = (char*)come_increment_ref_count(((char*)(__right_value175=buffer_to_string(output_165))));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(output_165,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_str_166 = come_decrement_ref_count(result_type_str_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__65 = come_decrement_ref_count(__result_obj__65, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__65;
}

void add_come_code(struct sInfo* info, const char* msg, ...){
char* msg2_172;
va_list args_173;
int len_174;
int i_175;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
msg2_172 = (void*)0;
memset(&args_173, 0, sizeof(va_list));
memset(&i_175, 0, sizeof(int));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_173,msg);
    len_174=vasprintf(&msg2_172,msg,args_173);
    __builtin_va_end(args_173);
    if(    info->come_fun) {
        for(        i_175=0;        i_175<info->block_level;        i_175++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(__right_value176=xsprintf("%s",msg2_172))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value177=xsprintf("%s",msg2_172))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    free(msg2_172);
    /*c*/ come_call_finalizer3((&args_173),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static void va_list_finalize(va_list self){
}

void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_176;
va_list args_177;
int len_178;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
_Bool _if_conditional1;
void* __right_value181 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
msg2_176 = (void*)0;
memset(&args_177, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_177,msg);
        len_178=vasprintf(&msg2_176,msg,args_177);
        __builtin_va_end(args_177);
        if(        (_if_conditional1=(((char*)(__right_value180=map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value179=__builtin_string(id))))))==((void*)0))),        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeader,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_176)));
            (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        free(msg2_176);
        /*c*/ come_call_finalizer3((&args_177),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_179;
unsigned int hash_180;
unsigned int it_181;
char* __result_obj__66;
char* __result_obj__67;
char* __result_obj__68;
char* __result_obj__69;
default_value_179 = (void*)0;
    memset(&default_value_179,0,sizeof(char*));
    hash_180=string_get_hash_key(((char*)key))%self->size;
    it_181=hash_180;
    while(    (_Bool)1) {
        if(        self->item_existance[it_181]) {
            if(            string_equals(self->keys[it_181],key)) {
                __result_obj__66 = (char*)come_increment_ref_count(self->items[it_181]);
                (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__66;
            }
            it_181++;
            if(            it_181>=self->size) {
                it_181=0;
            }
            else if(            it_181==hash_180) {
                __result_obj__67 = (char*)come_increment_ref_count(default_value_179);
                (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__67;
            }
        }
        else {
            __result_obj__68 = (char*)come_increment_ref_count(default_value_179);
            (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__68;
        }
    }
    __result_obj__69 = (char*)come_increment_ref_count(default_value_179);
    (default_value_179 = come_decrement_ref_count(default_value_179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__69;
}

static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_182;
unsigned int hash_183;
unsigned int it_184;
char* __result_obj__70;
char* __result_obj__71;
char* __result_obj__72;
char* __result_obj__73;
default_value_182 = (void*)0;
    memset(&default_value_182,0,sizeof(char*));
    hash_183=string_get_hash_key(((char*)key))%self->size;
    it_184=hash_183;
    while(    (_Bool)1) {
        if(        self->item_existance[it_184]) {
            if(            string_equals(self->keys[it_184],key)) {
                __result_obj__70 = (char*)come_increment_ref_count(self->items[it_184]);
                (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__70;
            }
            it_184++;
            if(            it_184>=self->size) {
                it_184=0;
            }
            else if(            it_184==hash_183) {
                __result_obj__71 = (char*)come_increment_ref_count(default_value_182);
                (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__71;
            }
        }
        else {
            __result_obj__72 = (char*)come_increment_ref_count(default_value_182);
            (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__72;
        }
    }
    __result_obj__73 = (char*)come_increment_ref_count(default_value_182);
    (default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__73;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_202;
unsigned int it_203;
_Bool same_key_exist_220;
char* it2_223;
struct map$2char$phchar$ph* __result_obj__95;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_202=string_get_hash_key(((char*)key))%self->size;
    it_203=hash_202;
    while(    (_Bool)1) {
        if(        self->item_existance[it_203]) {
            if(            string_equals(self->keys[it_203],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_203]);
                    (self->keys[it_203] = come_decrement_ref_count(self->keys[it_203], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_203]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_203]);
                    self->keys[it_203]=key;
                }
                if(                1) {
                    (self->items[it_203] = come_decrement_ref_count(self->items[it_203], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_203]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_203]=item;
                }
                break;
            }
            it_203++;
            if(            it_203>=self->size) {
                it_203=0;
            }
            else if(            it_203==hash_202) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_203]=(_Bool)1;
            if(            1) {
                self->keys[it_203]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_203]=key;
            }
            if(            1) {
                self->items[it_203]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_203]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_220=(_Bool)0;
    for(    it2_223=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_223=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_223,key)) {
            same_key_exist_220=(_Bool)1;
        }
    }
    if(    !same_key_exist_220) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__95 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__95;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_185;
void* __right_value182 = (void*)0;
char** keys_186;
void* __right_value183 = (void*)0;
char** items_187;
void* __right_value184 = (void*)0;
_Bool* item_existance_188;
int len_189;
char* it_192;
char* default_value_195;
void* __right_value185 = (void*)0;
char* it2_196;
unsigned int hash_199;
int n_200;
char* default_value_201;
void* __right_value186 = (void*)0;
default_value_195 = (void*)0;
default_value_201 = (void*)0;
    size_185=self->size*10;
    keys_186=(char**)come_increment_ref_count(((char**)(__right_value182=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_185)), "./comelang.h", 2167, "char**"))));
    items_187=(char**)come_increment_ref_count(((char**)(__right_value183=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_185)), "./comelang.h", 2168, "char**"))));
    item_existance_188=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value184=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_185)), "./comelang.h", 2169, "_Bool*"))));
    len_189=0;
    for(    it_192=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_192=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_195,0,sizeof(char*));
        it2_196=((char*)(__right_value185=map$2char$phchar$ph_at(self,it_192,(char*)come_increment_ref_count(default_value_195))));
        (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_199=string_get_hash_key(((char*)it_192))%size_185;
        n_200=hash_199;
        while(        (_Bool)1) {
            if(            item_existance_188[n_200]) {
                n_200++;
                if(                n_200>=size_185) {
                    n_200=0;
                }
                else if(                n_200==hash_199) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_188[n_200]=(_Bool)1;
                keys_186[n_200]=it_192;
                items_187[n_200]=((char*)(__right_value186=map$2char$phchar$ph_at(self,it_192,(char*)come_increment_ref_count(default_value_201))));
                (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_189++;
                (default_value_201 = come_decrement_ref_count(default_value_201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_201 = come_decrement_ref_count(default_value_201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_195 = come_decrement_ref_count(default_value_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_186;
    self->items=items_187;
    self->item_existance=item_existance_188;
    self->size=size_185;
    self->len=len_189;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_190;
char* __result_obj__74;
char* __result_obj__75;
char* result_191;
char* __result_obj__76;
result_190 = (void*)0;
result_191 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_190,0,sizeof(char*));
        __result_obj__74 = result_190;
        return __result_obj__74;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__75 = self->key_list->it->item;
        return __result_obj__75;
    }
    memset(&result_191,0,sizeof(char*));
    __result_obj__76 = result_191;
    return __result_obj__76;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_193;
char* __result_obj__77;
char* __result_obj__78;
char* result_194;
char* __result_obj__79;
result_193 = (void*)0;
result_194 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_193,0,sizeof(char*));
        __result_obj__77 = result_193;
        return __result_obj__77;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__78 = self->key_list->it->item;
        return __result_obj__78;
    }
    memset(&result_194,0,sizeof(char*));
    __result_obj__79 = result_194;
    return __result_obj__79;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_197;
unsigned int it_198;
char* __result_obj__80;
char* __result_obj__81;
char* __result_obj__82;
char* __result_obj__83;
    hash_197=string_get_hash_key(((char*)key))%self->size;
    it_198=hash_197;
    while(    (_Bool)1) {
        if(        self->item_existance[it_198]) {
            if(            string_equals(self->keys[it_198],key)) {
                __result_obj__80 = (char*)come_increment_ref_count(self->items[it_198]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__80;
            }
            it_198++;
            if(            it_198>=self->size) {
                it_198=0;
            }
            else if(            it_198==hash_197) {
                __result_obj__81 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__81;
            }
        }
        else {
            __result_obj__82 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__82;
        }
    }
    __result_obj__83 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__83;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_204;
struct list_item$1char$ph* it_205;
struct list$1char$ph* __result_obj__87;
    it2_204=0;
    it_205=self->head;
    while(    it_205!=((void*)0)) {
        if(        string_equals(it_205->item,item)) {
            list$1char$ph_delete(self,it2_204,it2_204+1);
            break;
        }
        it2_204++;
        it_205=it_205->next;
    }
    __result_obj__87 = self;
    return __result_obj__87;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_206;
struct list$1char$ph* __result_obj__84;
struct list_item$1char$ph* it_209;
int i_210;
struct list_item$1char$ph* prev_it_211;
struct list_item$1char$ph* it_212;
int i_213;
struct list_item$1char$ph* prev_it_214;
struct list_item$1char$ph* it_215;
struct list_item$1char$ph* head_prev_it_216;
struct list_item$1char$ph* tail_it_217;
int i_218;
struct list_item$1char$ph* prev_it_219;
struct list$1char$ph* __result_obj__86;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_206=tail;
        tail=head;
        head=tmp_206;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__84 = self;
        return __result_obj__84;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_209=self->head;
        i_210=0;
        while(        it_209!=((void*)0)) {
            if(            i_210<tail) {
                prev_it_211=it_209;
                it_209=it_209->next;
                i_210++;
                /*c*/ come_call_finalizer3(prev_it_211,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_210==tail) {
                self->head=it_209;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_209=it_209->next;
                i_210++;
            }
        }
    }
    else if(    tail==self->len) {
        it_212=self->head;
        i_213=0;
        while(        it_212!=((void*)0)) {
            if(            i_213==head) {
                self->tail=it_212->prev;
                self->tail->next=((void*)0);
            }
            if(            i_213>=head) {
                prev_it_214=it_212;
                it_212=it_212->next;
                i_213++;
                /*c*/ come_call_finalizer3(prev_it_214,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_212=it_212->next;
                i_213++;
            }
        }
    }
    else {
        it_215=self->head;
        head_prev_it_216=((void*)0);
        tail_it_217=((void*)0);
        i_218=0;
        while(        it_215!=((void*)0)) {
            if(            i_218==head) {
                head_prev_it_216=it_215->prev;
            }
            if(            i_218==tail) {
                tail_it_217=it_215;
            }
            if(            i_218>=head&&i_218<tail) {
                prev_it_219=it_215;
                it_215=it_215->next;
                i_218++;
                /*c*/ come_call_finalizer3(prev_it_219,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_215=it_215->next;
                i_218++;
            }
        }
        if(        head_prev_it_216!=((void*)0)) {
            head_prev_it_216->next=tail_it_217;
        }
        if(        tail_it_217!=((void*)0)) {
            tail_it_217->prev=head_prev_it_216;
        }
    }
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_207;
struct list_item$1char$ph* prev_it_208;
struct list$1char$ph* __result_obj__85;
    it_207=self->head;
    while(    it_207!=((void*)0)) {
        prev_it_208=it_207;
        it_207=it_207->next;
        /*c*/ come_call_finalizer3(prev_it_208,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_221;
char* __result_obj__88;
char* __result_obj__89;
char* result_222;
char* __result_obj__90;
result_221 = (void*)0;
result_222 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_221,0,sizeof(char*));
        __result_obj__88 = result_221;
        return __result_obj__88;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__89 = self->it->item;
        return __result_obj__89;
    }
    memset(&result_222,0,sizeof(char*));
    __result_obj__90 = result_222;
    return __result_obj__90;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_224;
char* __result_obj__91;
char* __result_obj__92;
char* result_225;
char* __result_obj__93;
result_224 = (void*)0;
result_225 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_224,0,sizeof(char*));
        __result_obj__91 = result_224;
        return __result_obj__91;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__92 = self->it->item;
        return __result_obj__92;
    }
    memset(&result_225,0,sizeof(char*));
    __result_obj__93 = result_225;
    return __result_obj__93;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value187 = (void*)0;
struct list_item$1char$ph* litem_226;
char* __dec_obj32;
void* __right_value188 = (void*)0;
struct list_item$1char$ph* litem_227;
char* __dec_obj33;
void* __right_value189 = (void*)0;
struct list_item$1char$ph* litem_228;
char* __dec_obj34;
struct list$1char$ph* __result_obj__94;
    if(    self->len==0) {
        litem_226=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value187=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_226->prev=((void*)0);
        litem_226->next=((void*)0);
        __dec_obj32=litem_226->item,
        litem_226->item=(char*)come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_226;
        self->head=litem_226;
    }
    else if(    self->len==1) {
        litem_227=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value188=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_227->prev=self->head;
        litem_227->next=((void*)0);
        __dec_obj33=litem_227->item,
        litem_227->item=(char*)come_increment_ref_count(item);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_227;
        self->head->next=litem_227;
    }
    else {
        litem_228=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value189=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_228->prev=self->tail;
        litem_228->next=((void*)0);
        __dec_obj34=litem_228->item,
        litem_228->item=(char*)come_increment_ref_count(item);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_228;
        self->tail=litem_228;
    }
    self->len++;
    __result_obj__94 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__94;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_229;
va_list args_230;
int len_231;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
_Bool _if_conditional2;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
msg2_229 = (void*)0;
memset(&args_230, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_230,msg);
        len_231=vasprintf(&msg2_229,msg,args_230);
        __builtin_va_end(args_230);
        if(        (_if_conditional2=(((char*)(__right_value195=map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value194=__builtin_string(id))))))==((void*)0))),        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional2) {
            map$2char$phchar$ph_operator_store_element(info->module->mHeaderStructs,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_229)));
            (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        free(msg2_229);
        /*c*/ come_call_finalizer3((&args_230),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_source_file(struct sInfo* info){
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct sFun* main_fun_232;
_Bool main_module_239;
struct map$2char$phsFun$ph* o2_saved_240;
char* it_243;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sFun* it2_246;
void* __right_value206 = (void*)0;
struct sFun* new_fun_247;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
char* output_file_name_267;
struct _IO_FILE* f_268;
_Bool __exception_result_var_b1;
struct map$2char$phbuffer$ph* o2_saved_269;
char* it_272;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct buffer* buf_275;
void* __right_value217 = (void*)0;
struct map$2char$phbuffer$ph* o2_saved_284;
char* it_285;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct buffer* buf_286;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct map$2char$phsFun$ph* o2_saved_287;
char* it_288;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sFun* it2_289;
void* __right_value226 = (void*)0;
char* header_290;
struct map$2char$phchar$ph* o2_saved_291;
char* it_292;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
char* str_293;
struct map$2char$phsFun$ph* o2_saved_296;
char* it_297;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sFun* it2_298;
void* __right_value233 = (void*)0;
char* output_299;
struct map$2char$phsFun$ph* o2_saved_300;
char* it_301;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sFun* it2_302;
void* __right_value237 = (void*)0;
char* output_303;
_Bool __result_obj__129;
    main_fun_232=((struct sFun*)(__right_value202=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value201=xsprintf("main"))))));
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value202,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    main_module_239=(_Bool)0;
    if(    main_fun_232) {
        if(        !main_fun_232->mExternal) {
            main_module_239=(_Bool)1;
        }
    }
    if(    main_module_239) {
        for(        o2_saved_240=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->uniq_funcs)),it_243=map$2char$phsFun$ph_begin((o2_saved_240));        !map$2char$phsFun$ph_end((o2_saved_240));        it_243=map$2char$phsFun$ph_next((o2_saved_240))        ){
            it2_246=((struct sFun*)(__right_value205=map$2char$phsFun$ph_operator_load_element(info->uniq_funcs,((char*)(__right_value204=__builtin_string(it_243))))));
            (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value205,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            new_fun_247=(struct sFun*)come_increment_ref_count(compile_uniq_function(it2_246,info));
            map$2char$phsFun$ph_put(info->funcs,(char*)come_increment_ref_count(__builtin_string(it_243)),(struct sFun*)come_increment_ref_count(new_fun_247));
            /*c*/ come_call_finalizer3(new_fun_247,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_240,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    output_file_name_267=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    f_268=fopen(output_file_name_267,"w");
    if(    f_268==((void*)0)) {
        (come_push_stackframe("03output_code.c", 945, 0),__exception_result_var_b1=die("fopen"), come_pop_stackframe(), __exception_result_var_b1);
    }
    fprintf(f_268,"/// previous struct definition ///\n");
    for(    o2_saved_269=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->previous_struct_definition)),it_272=map$2char$phbuffer$ph_begin((o2_saved_269));    !map$2char$phbuffer$ph_end((o2_saved_269));    it_272=map$2char$phbuffer$ph_next((o2_saved_269))    ){
        buf_275=((struct buffer*)(__right_value216=map$2char$phbuffer$ph_operator_load_element(info->previous_struct_definition,((char*)(__right_value215=__builtin_string(it_272))))));
        (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value216,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_268,"%s\n",((char*)(__right_value217=buffer_to_string(buf_275))));
        (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_269,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_268,"/// struct definition ///\n");
    for(    o2_saved_284=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->struct_definition)),it_285=map$2char$phbuffer$ph_begin((o2_saved_284));    !map$2char$phbuffer$ph_end((o2_saved_284));    it_285=map$2char$phbuffer$ph_next((o2_saved_284))    ){
        buf_286=((struct buffer*)(__right_value220=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value219=__builtin_string(it_285))))));
        (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value220,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_268,"%s\n",((char*)(__right_value221=buffer_to_string(buf_286))));
        (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_284,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_268,"// source head\n");
    fprintf(f_268,"%s\n",((char*)(__right_value222=buffer_to_string(info->module->mSourceHead))));
    (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fprintf(f_268,"// header function\n");
    for(    o2_saved_287=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_288=map$2char$phsFun$ph_begin((o2_saved_287));    !map$2char$phsFun$ph_end((o2_saved_287));    it_288=map$2char$phsFun$ph_next((o2_saved_287))    ){
        it2_289=((struct sFun*)(__right_value225=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value224=__builtin_string(it_288))))));
        (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value225,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        header_290=(char*)come_increment_ref_count(header_function(it2_289,info));
        if(        it2_289->mInline) {
        }
        else if(        string_operator_not_equals(it_288,"__builtin_va_start")&&string_operator_not_equals(it_288,"__builtin_va_end")) {
            fprintf(f_268,"%s",header_290);
        }
        (header_290 = come_decrement_ref_count(header_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_287,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_268,"// uniq global variable\n");
    if(    main_module_239) {
        for(        o2_saved_291=(struct map$2char$phchar$ph*)come_increment_ref_count((info->uniq_definition)),it_292=map$2char$phchar$ph_begin((o2_saved_291));        !map$2char$phchar$ph_end((o2_saved_291));        it_292=map$2char$phchar$ph_next((o2_saved_291))        ){
            str_293=((char*)(__right_value229=map$2char$phchar$ph_operator_load_element(info->uniq_definition,((char*)(__right_value228=__builtin_string(it_292))))));
            (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            fprintf(f_268,"%s\n",str_293);
        }
        /*c*/ come_call_finalizer3(o2_saved_291,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    fprintf(f_268,"// inline function\n");
    for(    o2_saved_296=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_297=map$2char$phsFun$ph_begin((o2_saved_296));    !map$2char$phsFun$ph_end((o2_saved_296));    it_297=map$2char$phsFun$ph_next((o2_saved_296))    ){
        it2_298=((struct sFun*)(__right_value232=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value231=__builtin_string(it_297))))));
        (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value232,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        it2_298->mInline) {
            output_299=(char*)come_increment_ref_count(output_function(it2_298,info));
            fprintf(f_268,"%s",output_299);
            (output_299 = come_decrement_ref_count(output_299, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_296,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_268,"\n");
    fprintf(f_268,"// body function\n");
    for(    o2_saved_300=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_301=map$2char$phsFun$ph_begin((o2_saved_300));    !map$2char$phsFun$ph_end((o2_saved_300));    it_301=map$2char$phsFun$ph_next((o2_saved_300))    ){
        it2_302=((struct sFun*)(__right_value236=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value235=__builtin_string(it_301))))));
        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value236,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        it2_302->mExternal) {
        }
        else if(        !main_module_239&&it2_302->mUniq) {
        }
        else if(        it2_302->mInline) {
        }
        else {
            output_303=(char*)come_increment_ref_count(output_function(it2_302,info));
            fprintf(f_268,"%s",output_303);
            fprintf(f_268,"\n");
            (output_303 = come_decrement_ref_count(output_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_300,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fclose(f_268);
    __result_obj__129 = (_Bool)1;
    (output_file_name_267 = come_decrement_ref_count(output_file_name_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__129;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_233;
unsigned int hash_234;
unsigned int it_235;
struct sFun* __result_obj__96;
struct sFun* __result_obj__97;
struct sFun* __result_obj__98;
struct sFun* __result_obj__99;
default_value_233 = (void*)0;
    memset(&default_value_233,0,sizeof(struct sFun*));
    hash_234=string_get_hash_key(((char*)key))%self->size;
    it_235=hash_234;
    while(    (_Bool)1) {
        if(        self->item_existance[it_235]) {
            if(            string_equals(self->keys[it_235],key)) {
                __result_obj__96 = (struct sFun*)come_increment_ref_count(self->items[it_235]);
                /*c*/ come_call_finalizer3(default_value_233,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__96,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__96;
            }
            it_235++;
            if(            it_235>=self->size) {
                it_235=0;
            }
            else if(            it_235==hash_234) {
                __result_obj__97 = (struct sFun*)come_increment_ref_count(default_value_233);
                /*c*/ come_call_finalizer3(default_value_233,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__97,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__97;
            }
        }
        else {
            __result_obj__98 = (struct sFun*)come_increment_ref_count(default_value_233);
            /*c*/ come_call_finalizer3(default_value_233,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__98,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__98;
        }
    }
    __result_obj__99 = (struct sFun*)come_increment_ref_count(default_value_233);
    /*c*/ come_call_finalizer3(default_value_233,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__99,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__99;
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
struct sFun* default_value_236;
unsigned int hash_237;
unsigned int it_238;
struct sFun* __result_obj__100;
struct sFun* __result_obj__101;
struct sFun* __result_obj__102;
struct sFun* __result_obj__103;
default_value_236 = (void*)0;
    memset(&default_value_236,0,sizeof(struct sFun*));
    hash_237=string_get_hash_key(((char*)key))%self->size;
    it_238=hash_237;
    while(    (_Bool)1) {
        if(        self->item_existance[it_238]) {
            if(            string_equals(self->keys[it_238],key)) {
                __result_obj__100 = (struct sFun*)come_increment_ref_count(self->items[it_238]);
                /*c*/ come_call_finalizer3(default_value_236,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__100,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__100;
            }
            it_238++;
            if(            it_238>=self->size) {
                it_238=0;
            }
            else if(            it_238==hash_237) {
                __result_obj__101 = (struct sFun*)come_increment_ref_count(default_value_236);
                /*c*/ come_call_finalizer3(default_value_236,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__101,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__101;
            }
        }
        else {
            __result_obj__102 = (struct sFun*)come_increment_ref_count(default_value_236);
            /*c*/ come_call_finalizer3(default_value_236,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__102,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__102;
        }
    }
    __result_obj__103 = (struct sFun*)come_increment_ref_count(default_value_236);
    /*c*/ come_call_finalizer3(default_value_236,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__103,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__103;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_241;
char* __result_obj__104;
char* __result_obj__105;
char* result_242;
char* __result_obj__106;
result_241 = (void*)0;
result_242 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_241,0,sizeof(char*));
        __result_obj__104 = result_241;
        return __result_obj__104;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__105 = self->key_list->it->item;
        return __result_obj__105;
    }
    memset(&result_242,0,sizeof(char*));
    __result_obj__106 = result_242;
    return __result_obj__106;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_244;
char* __result_obj__107;
char* __result_obj__108;
char* result_245;
char* __result_obj__109;
result_244 = (void*)0;
result_245 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_244,0,sizeof(char*));
        __result_obj__107 = result_244;
        return __result_obj__107;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__108 = self->key_list->it->item;
        return __result_obj__108;
    }
    memset(&result_245,0,sizeof(char*));
    __result_obj__109 = result_245;
    return __result_obj__109;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_put(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_261;
int it_262;
_Bool same_key_exist_263;
char* it2_264;
struct map$2char$phsFun$ph* __result_obj__114;
    if(    self->len*2>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_261=string_get_hash_key(((char*)key))%self->size;
    it_262=hash_261;
    while(    (_Bool)1) {
        if(        self->item_existance[it_262]) {
            if(            string_equals(self->keys[it_262],key)) {
                if(                1) {
                    (self->keys[it_262] = come_decrement_ref_count(self->keys[it_262], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_262]);
                    self->keys[it_262]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_262]);
                    self->keys[it_262]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_262],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_262]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_262]=item;
                }
                break;
            }
            it_262++;
            if(            it_262>=self->size) {
                it_262=0;
            }
            else if(            it_262==hash_261) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_262]=(_Bool)1;
            if(            1) {
                self->keys[it_262]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_262]=key;
            }
            if(            1) {
                self->items[it_262]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_262]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_263=(_Bool)0;
    for(    it2_264=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_264=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_264,key)) {
            same_key_exist_263=(_Bool)1;
        }
    }
    if(    !same_key_exist_263) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__114 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__114;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_248;
void* __right_value207 = (void*)0;
char** keys_249;
void* __right_value208 = (void*)0;
struct sFun** items_250;
void* __right_value209 = (void*)0;
_Bool* item_existance_251;
int len_252;
char* it_253;
struct sFun* default_value_254;
void* __right_value210 = (void*)0;
struct sFun* it2_255;
unsigned int hash_258;
int n_259;
struct sFun* default_value_260;
void* __right_value211 = (void*)0;
default_value_254 = (void*)0;
default_value_260 = (void*)0;
    size_248=self->size*10;
    keys_249=(char**)come_increment_ref_count(((char**)(__right_value207=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_248)), "./comelang.h", 2167, "char**"))));
    items_250=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value208=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_248)), "./comelang.h", 2168, "struct sFun**"))));
    item_existance_251=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value209=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_248)), "./comelang.h", 2169, "_Bool*"))));
    len_252=0;
    for(    it_253=map$2char$phsFun$ph_begin(self);    !map$2char$phsFun$ph_end(self);    it_253=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_254,0,sizeof(struct sFun*));
        it2_255=((struct sFun*)(__right_value210=map$2char$phsFun$ph_at(self,it_253,(struct sFun*)come_increment_ref_count(default_value_254))));
        /*c*/ come_call_finalizer3(__right_value210,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_258=string_get_hash_key(((char*)it_253))%size_248;
        n_259=hash_258;
        while(        (_Bool)1) {
            if(            item_existance_251[n_259]) {
                n_259++;
                if(                n_259>=size_248) {
                    n_259=0;
                }
                else if(                n_259==hash_258) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_251[n_259]=(_Bool)1;
                keys_249[n_259]=it_253;
                items_250[n_259]=((struct sFun*)(__right_value211=map$2char$phsFun$ph_at(self,it_253,(struct sFun*)come_increment_ref_count(default_value_260))));
                /*c*/ come_call_finalizer3(__right_value211,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_252++;
                /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_254,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_249;
    self->items=items_250;
    self->item_existance=item_existance_251;
    self->size=size_248;
    self->len=len_252;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_256;
unsigned int it_257;
struct sFun* __result_obj__110;
struct sFun* __result_obj__111;
struct sFun* __result_obj__112;
struct sFun* __result_obj__113;
    hash_256=string_get_hash_key(((char*)key))%self->size;
    it_257=hash_256;
    while(    (_Bool)1) {
        if(        self->item_existance[it_257]) {
            if(            string_equals(self->keys[it_257],key)) {
                __result_obj__110 = (struct sFun*)come_increment_ref_count(self->items[it_257]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__110,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__110;
            }
            it_257++;
            if(            it_257>=self->size) {
                it_257=0;
            }
            else if(            it_257==hash_256) {
                __result_obj__111 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__111,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__111;
            }
        }
        else {
            __result_obj__112 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__112,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__112;
        }
    }
    __result_obj__113 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__113,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__113;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_265;
int i_266;
    for(    i_265=0;    i_265<self->size;    i_265++    ){
        if(        self->item_existance[i_265]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_265],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_266=0;    i_266<self->size;    i_266++    ){
        if(        self->item_existance[i_266]) {
            if(            1) {
                (self->keys[i_266] = come_decrement_ref_count(self->keys[i_266], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_270;
char* __result_obj__115;
char* __result_obj__116;
char* result_271;
char* __result_obj__117;
result_270 = (void*)0;
result_271 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_270,0,sizeof(char*));
        __result_obj__115 = result_270;
        return __result_obj__115;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__116 = self->key_list->it->item;
        return __result_obj__116;
    }
    memset(&result_271,0,sizeof(char*));
    __result_obj__117 = result_271;
    return __result_obj__117;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_273;
char* __result_obj__118;
char* __result_obj__119;
char* result_274;
char* __result_obj__120;
result_273 = (void*)0;
result_274 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_273,0,sizeof(char*));
        __result_obj__118 = result_273;
        return __result_obj__118;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__119 = self->key_list->it->item;
        return __result_obj__119;
    }
    memset(&result_274,0,sizeof(char*));
    __result_obj__120 = result_274;
    return __result_obj__120;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_276;
unsigned int hash_277;
unsigned int it_278;
struct buffer* __result_obj__121;
struct buffer* __result_obj__122;
struct buffer* __result_obj__123;
struct buffer* __result_obj__124;
default_value_276 = (void*)0;
    memset(&default_value_276,0,sizeof(struct buffer*));
    hash_277=string_get_hash_key(((char*)key))%self->size;
    it_278=hash_277;
    while(    (_Bool)1) {
        if(        self->item_existance[it_278]) {
            if(            string_equals(self->keys[it_278],key)) {
                __result_obj__121 = (struct buffer*)come_increment_ref_count(self->items[it_278]);
                /*c*/ come_call_finalizer3(default_value_276,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__121,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__121;
            }
            it_278++;
            if(            it_278>=self->size) {
                it_278=0;
            }
            else if(            it_278==hash_277) {
                __result_obj__122 = (struct buffer*)come_increment_ref_count(default_value_276);
                /*c*/ come_call_finalizer3(default_value_276,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__122,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__122;
            }
        }
        else {
            __result_obj__123 = (struct buffer*)come_increment_ref_count(default_value_276);
            /*c*/ come_call_finalizer3(default_value_276,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__123,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__123;
        }
    }
    __result_obj__124 = (struct buffer*)come_increment_ref_count(default_value_276);
    /*c*/ come_call_finalizer3(default_value_276,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__124,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__124;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_279;
unsigned int hash_280;
unsigned int it_281;
struct buffer* __result_obj__125;
struct buffer* __result_obj__126;
struct buffer* __result_obj__127;
struct buffer* __result_obj__128;
default_value_279 = (void*)0;
    memset(&default_value_279,0,sizeof(struct buffer*));
    hash_280=string_get_hash_key(((char*)key))%self->size;
    it_281=hash_280;
    while(    (_Bool)1) {
        if(        self->item_existance[it_281]) {
            if(            string_equals(self->keys[it_281],key)) {
                __result_obj__125 = (struct buffer*)come_increment_ref_count(self->items[it_281]);
                /*c*/ come_call_finalizer3(default_value_279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__125,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__125;
            }
            it_281++;
            if(            it_281>=self->size) {
                it_281=0;
            }
            else if(            it_281==hash_280) {
                __result_obj__126 = (struct buffer*)come_increment_ref_count(default_value_279);
                /*c*/ come_call_finalizer3(default_value_279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__126,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__126;
            }
        }
        else {
            __result_obj__127 = (struct buffer*)come_increment_ref_count(default_value_279);
            /*c*/ come_call_finalizer3(default_value_279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__127,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__127;
        }
    }
    __result_obj__128 = (struct buffer*)come_increment_ref_count(default_value_279);
    /*c*/ come_call_finalizer3(default_value_279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__128,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__128;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_282;
int i_283;
    for(    i_282=0;    i_282<self->size;    i_282++    ){
        if(        self->item_existance[i_282]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_282],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_283=0;    i_283<self->size;    i_283++    ){
        if(        self->item_existance[i_283]) {
            if(            1) {
                (self->keys[i_283] = come_decrement_ref_count(self->keys[i_283], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_294;
int i_295;
    for(    i_294=0;    i_294<self->size;    i_294++    ){
        if(        self->item_existance[i_294]) {
            if(            1) {
                (self->items[i_294] = come_decrement_ref_count(self->items[i_294], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_295=0;    i_295<self->size;    i_295++    ){
        if(        self->item_existance[i_295]) {
            if(            1) {
                (self->keys[i_295] = come_decrement_ref_count(self->keys[i_295], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_header_file(struct sInfo* info){
char* output_file_name_304;
struct _IO_FILE* f_305;
struct map$2char$phchar$ph* o2_saved_306;
char* it_307;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* item_308;
struct map$2char$phchar$ph* o2_saved_309;
char* it_310;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
char* item_311;
_Bool __result_obj__130;
    output_file_name_304=(char*)come_increment_ref_count(info->output_file_name);
    f_305=fopen(output_file_name_304,"a");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_305,"#ifndef __COMMON_H__\n");
        fprintf(f_305,"#define __COMMON_H__\n");
        fprintf(f_305,"#include <comelang.h>\n");
    }
    for(    o2_saved_306=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeaderStructs)),it_307=map$2char$phchar$ph_begin((o2_saved_306));    !map$2char$phchar$ph_end((o2_saved_306));    it_307=map$2char$phchar$ph_next((o2_saved_306))    ){
        item_308=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value239=__builtin_string(it_307)))));
        (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_305,"%s",item_308);
        (item_308 = come_decrement_ref_count(item_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_306,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    o2_saved_309=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeader)),it_310=map$2char$phchar$ph_begin((o2_saved_309));    !map$2char$phchar$ph_end((o2_saved_309));    it_310=map$2char$phchar$ph_next((o2_saved_309))    ){
        item_311=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value242=__builtin_string(it_310)))));
        (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_305,"%s",item_311);
        (item_311 = come_decrement_ref_count(item_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_309,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_305,"\n");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_305,"#endif\n");
    }
    fclose(f_305);
    __result_obj__130 = (_Bool)1;
    (output_file_name_304 = come_decrement_ref_count(output_file_name_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__130;
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
char* msg2_312;
va_list args_313;
int len_314;
msg2_312 = (void*)0;
memset(&args_313, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_313,code);
    len_314=vasprintf(&msg2_312,code,args_313);
    __builtin_va_end(args_313);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_312);
    }
    free(msg2_312);
    /*c*/ come_call_finalizer3((&args_313),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
char* msg2_315;
va_list args_316;
int len_317;
msg2_315 = (void*)0;
memset(&args_316, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_316,code);
    len_317=vasprintf(&msg2_315,code,args_316);
    __builtin_va_end(args_316);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_315);
    }
    free(msg2_315);
    /*c*/ come_call_finalizer3((&args_316),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
char* __dec_obj35;
char* __dec_obj36;
    if(    info->prohibits_output_last_code) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        add_last_code_to_source_with_comma(info);
    }
    else {
        if(        info->module->mLastCode) {
            add_come_code(info,"%s;\n",info->module->mLastCode);
            __dec_obj35=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        info->module->mLastCode2) {
            add_come_code(info,"%s;\n",info->module->mLastCode2);
            __dec_obj36=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
char* __dec_obj37;
char* __dec_obj38;
    if(    info->prohibits_output_last_code) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->module->mLastCode) {
        add_come_code(info,"%s ,",info->module->mLastCode);
        __dec_obj37=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->module->mLastCode2) {
        add_come_code(info,"%s ,",info->module->mLastCode2);
        __dec_obj38=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
char* msg2_318;
va_list args_319;
int len_320;
void* __right_value244 = (void*)0;
char* __dec_obj39;
msg2_318 = (void*)0;
memset(&args_319, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_319,msg);
    len_320=vasprintf(&msg2_318,msg,args_319);
    __builtin_va_end(args_319);
    __dec_obj39=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(__builtin_string(msg2_318));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_318);
    /*c*/ come_call_finalizer3((&args_319),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
char* msg2_321;
va_list args_322;
int len_323;
void* __right_value245 = (void*)0;
char* __dec_obj40;
msg2_321 = (void*)0;
memset(&args_322, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_322,msg);
    len_323=vasprintf(&msg2_321,msg,args_322);
    __builtin_va_end(args_322);
    __dec_obj40=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(__builtin_string(msg2_321));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_321);
    /*c*/ come_call_finalizer3((&args_322),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUE$ph_delete(info->stack,-value,-1);
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail){
int tmp_324;
struct list$1CVALUE$ph* __result_obj__131;
struct list_item$1CVALUE$ph* it_327;
int i_328;
struct list_item$1CVALUE$ph* prev_it_329;
struct list_item$1CVALUE$ph* it_330;
int i_331;
struct list_item$1CVALUE$ph* prev_it_332;
struct list_item$1CVALUE$ph* it_333;
struct list_item$1CVALUE$ph* head_prev_it_334;
struct list_item$1CVALUE$ph* tail_it_335;
int i_336;
struct list_item$1CVALUE$ph* prev_it_337;
struct list$1CVALUE$ph* __result_obj__133;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_324=tail;
        tail=head;
        head=tmp_324;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__131 = self;
        return __result_obj__131;
    }
    if(    head==0&&tail==self->len) {
        list$1CVALUE$ph_reset(self);
    }
    else if(    head==0) {
        it_327=self->head;
        i_328=0;
        while(        it_327!=((void*)0)) {
            if(            i_328<tail) {
                prev_it_329=it_327;
                it_327=it_327->next;
                i_328++;
                /*c*/ come_call_finalizer3(prev_it_329,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_328==tail) {
                self->head=it_327;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_327=it_327->next;
                i_328++;
            }
        }
    }
    else if(    tail==self->len) {
        it_330=self->head;
        i_331=0;
        while(        it_330!=((void*)0)) {
            if(            i_331==head) {
                self->tail=it_330->prev;
                self->tail->next=((void*)0);
            }
            if(            i_331>=head) {
                prev_it_332=it_330;
                it_330=it_330->next;
                i_331++;
                /*c*/ come_call_finalizer3(prev_it_332,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_330=it_330->next;
                i_331++;
            }
        }
    }
    else {
        it_333=self->head;
        head_prev_it_334=((void*)0);
        tail_it_335=((void*)0);
        i_336=0;
        while(        it_333!=((void*)0)) {
            if(            i_336==head) {
                head_prev_it_334=it_333->prev;
            }
            if(            i_336==tail) {
                tail_it_335=it_333;
            }
            if(            i_336>=head&&i_336<tail) {
                prev_it_337=it_333;
                it_333=it_333->next;
                i_336++;
                /*c*/ come_call_finalizer3(prev_it_337,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_333=it_333->next;
                i_336++;
            }
        }
        if(        head_prev_it_334!=((void*)0)) {
            head_prev_it_334->next=tail_it_335;
        }
        if(        tail_it_335!=((void*)0)) {
            tail_it_335->prev=head_prev_it_334;
        }
    }
    __result_obj__133 = self;
    return __result_obj__133;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_325;
struct list_item$1CVALUE$ph* prev_it_326;
struct list$1CVALUE$ph* __result_obj__132;
    it_325=self->head;
    while(    it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        /*c*/ come_call_finalizer3(prev_it_326,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__132 = self;
    return __result_obj__132;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
char* __dec_obj41;
void* __right_value246 = (void*)0;
void* __right_value252 = (void*)0;
struct CVALUE* result_338;
void* __right_value253 = (void*)0;
struct CVALUE* __result_obj__140;
    __dec_obj41=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_338=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(((struct CVALUE*)(__right_value246=list$1CVALUE$ph_operator_load_element(info->stack,offset)))));
    /*c*/ come_call_finalizer3(__right_value246,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    result_338==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value253=err_msg(info,"invalid stack value")));
        /*c*/ come_call_finalizer3(__right_value253,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
    }
    list$1CVALUE$ph_delete(info->stack,-1,-1);
    __result_obj__140 = (struct CVALUE*)come_increment_ref_count(result_338);
    /*c*/ come_call_finalizer3(result_338,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__140,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__140;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_339;
int i_340;
struct CVALUE* __result_obj__134;
struct CVALUE* default_value_341;
struct CVALUE* __result_obj__135;
default_value_341 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_339=self->head;
    i_340=0;
    while(    it_339!=((void*)0)) {
        if(        position==i_340) {
            __result_obj__134 = (struct CVALUE*)come_increment_ref_count(it_339->item);
            /*c*/ come_call_finalizer3(__result_obj__134,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__134;
        }
        it_339=it_339->next;
        i_340++;
    }
    memset(&default_value_341,0,sizeof(struct CVALUE*));
    __result_obj__135 = (struct CVALUE*)come_increment_ref_count(default_value_341);
    /*c*/ come_call_finalizer3(default_value_341,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__135,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__135;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_342;
int i_343;
struct CVALUE* __result_obj__136;
struct CVALUE* default_value_344;
struct CVALUE* __result_obj__137;
default_value_344 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_342=self->head;
    i_343=0;
    while(    it_342!=((void*)0)) {
        if(        position==i_343) {
            __result_obj__136 = (struct CVALUE*)come_increment_ref_count(it_342->item);
            /*c*/ come_call_finalizer3(__result_obj__136,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__136;
        }
        it_342=it_342->next;
        i_343++;
    }
    memset(&default_value_344,0,sizeof(struct CVALUE*));
    __result_obj__137 = (struct CVALUE*)come_increment_ref_count(default_value_344);
    /*c*/ come_call_finalizer3(default_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__137,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__137;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__138;
void* __right_value247 = (void*)0;
struct CVALUE* result_345;
void* __right_value248 = (void*)0;
char* __dec_obj42;
void* __right_value249 = (void*)0;
struct sType* __dec_obj43;
void* __right_value250 = (void*)0;
char* __dec_obj44;
void* __right_value251 = (void*)0;
char* __dec_obj45;
struct CVALUE* __result_obj__139;
    if(    self==(void*)0) {
        __result_obj__138 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__138,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__138;
    }
    result_345=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj42=result_345->c_value,
        result_345->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj43=result_345->type,
        result_345->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_345->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_345->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj44=result_345->c_value_without_right_value_objects,
        result_345->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj45=result_345->c_value_without_cast_object_value,
        result_345->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__139 = (struct CVALUE*)come_increment_ref_count(result_345);
    /*c*/ come_call_finalizer3(result_345,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__139,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__139;
}

void transpiler_clear_last_code(struct sInfo* info){
char* __dec_obj46;
char* __dec_obj47;
    __dec_obj46=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj47=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
}

