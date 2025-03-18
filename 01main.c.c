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
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
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
int main(int argc, char** argv);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
void sVarTable_finalize(struct sVarTable* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void sBlock_finalize(struct sBlock* self);
static void sFun_finalize(struct sFun* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
_Bool parsecmp(char* str, struct sInfo* info);
// uniq global variable
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
int i_1;
void* __right_value2 = (void*)0;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 180, "struct buffer*"))));
    buffer_append_format(buf_0,"%s %d\n",sname,sline);
    for(    i_1=gNumComeStackFrame-2;    i_1>=0;    i_1--    ){
        buffer_append_format(buf_0,"%s %d #%d\n",gComeStackFrameSName[i_1],gComeStackFrameSLine[i_1],gComeStackFrameID[i_1]);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_0))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_0,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void stackframe(){
int i_2;
    for(    i_2=gNumComeStackFrame-1;    i_2>=0;    i_2--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_2],gComeStackFrameSLine[i_2],gComeStackFrameID[i_2]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__1;
    __result_obj__1 = come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__1 = come_decrement_ref_count(__result_obj__1, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__1;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__2;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result_obj__2 = mem;
    return __result_obj__2;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__3;
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result_obj__3 = mem;
    return __result_obj__3;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_3;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_3=0;    i_3<gHeapPages.mSizePages;    i_3++    ){
        gHeapPages.mPages[i_3]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_4;
int n_5;
_Bool flag_6;
int i_7;
struct sMemHeaderTiny* it_8;
int n_9;
int i_10;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_4=gAllocMem;
        n_5=0;
        while(it_4) {
            n_5++;
            flag_6=(_Bool)0;
            printf("#%d ",n_5);
            if(            it_4->class_name) {
                printf("%p (%s): ",(char*)it_4+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_4->class_name);
            }
            for(            i_7=0;            i_7<16;            i_7++            ){
                if(                it_4->sname[i_7]) {
                    printf("%s %d #%d, ",it_4->sname[i_7],it_4->sline[i_7],it_4->id[i_7]);
                    flag_6=(_Bool)1;
                }
            }
            if(            flag_6) {
                puts("");
            }
            it_4=it_4->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_5,gNumAlloc,gNumFree);
    }
    else {
        it_8=(struct sMemHeaderTiny*)gAllocMem;
        n_9=0;
        while(it_8) {
            n_9++;
            if(            it_8->class_name) {
                printf("#%d %p (%s) %s %d\n",n_9,(char*)it_8+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_8->class_name,it_8->sname,it_8->sline);
            }
            it_8=it_8->next;
        }
        if(        n_9>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_9,gNumAlloc,gNumFree);
        }
    }
    for(    i_10=0;    i_10<gHeapPages.mSizePages;    i_10++    ){
        free(gHeapPages.mPages[i_10]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_11;
unsigned long  int free_area_12;
int new_size_pages_13;
char** new_pages_14;
int i_15;
void* __result_obj__4;
    result_11=((void*)0);
    if(    size<4096) {
        if(        gHeapPages.mFreeMem[size]) {
            result_11=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_11,0,size);
        }
        if(        result_11==((void*)0)) {
            free_area_12=gHeapPages.mPages[gHeapPages.mCurrentPages]+4096-gHeapPages.mTop;
            if(            size>=free_area_12) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_13=gHeapPages.mSizePages*2;
                    new_pages_14=calloc(1,sizeof(char*)*new_size_pages_13);
                    i_15=0;
                    for(                    ;                    i_15<gHeapPages.mSizePages;                    i_15++                    ){
                        new_pages_14[i_15]=gHeapPages.mPages[i_15];
                    }
                    for(                    ;                    i_15<new_size_pages_13;                    i_15++                    ){
                        new_pages_14[i_15]=calloc(1,sizeof(char)*4096);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_14;
                    gHeapPages.mSizePages=new_size_pages_13;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_11=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_11=calloc(1,size);
    }
    __result_obj__4 = result_11;
    return __result_obj__4;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_16;
struct sMemHeader* it_17;
int i_18;
int i_19;
void* __result_obj__5;
void* result_20;
struct sMemHeaderTiny* it_21;
void* __result_obj__6;
memset(&i_18, 0, sizeof(int));
memset(&i_19, 0, sizeof(int));
    if(    gComeDebugLib) {
        result_16=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_17=result_16;
        it_17->allocated=177783;
        it_17->size=size+sizeof(struct sMemHeader);
        it_17->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            for(            i_18=0;            i_18<gNumComeStackFrame;            i_18++            ){
                it_17->sname[i_18]=gComeStackFrameSName[i_18];
                it_17->sline[i_18]=gComeStackFrameSLine[i_18];
                it_17->id[i_18]=gComeStackFrameID[i_18];
            }
        }
        else {
            for(            i_19=0;            i_19<16;            i_19++            ){
                it_17->sname[i_19]=gComeStackFrameSName[gNumComeStackFrame-1-i_19];
                it_17->sline[i_19]=gComeStackFrameSLine[gNumComeStackFrame-1-i_19];
                it_17->id[i_19]=gComeStackFrameID[gNumComeStackFrame-1-i_19];
            }
        }
        come_pop_stackframe();
        it_17->next=gAllocMem;
        it_17->prev=((void*)0);
        it_17->class_name=class_name;
        if(        gAllocMem) {
            gAllocMem->prev=it_17;
        }
        gAllocMem=it_17;
        gNumAlloc++;
        __result_obj__5 = (char*)result_16+sizeof(struct sMemHeader);
        return __result_obj__5;
    }
    else {
        result_20=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_21=result_20;
        it_21->allocated=177783;
        it_21->class_name=class_name;
        it_21->sname=sname;
        it_21->sline=sline;
        it_21->size=size+sizeof(struct sMemHeaderTiny);
        it_21->free_next=((void*)0);
        it_21->next=(struct sMemHeaderTiny*)gAllocMem;
        it_21->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_21;
        }
        gAllocMem=(struct sMemHeader*)it_21;
        gNumAlloc++;
        __result_obj__6 = (char*)result_20+sizeof(struct sMemHeaderTiny);
        return __result_obj__6;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_22;
struct sMemHeader* prev_it_23;
struct sMemHeader* next_it_24;
unsigned long  int size_25;
struct sMemHeaderTiny* it_26;
struct sMemHeaderTiny* prev_it_27;
struct sMemHeaderTiny* next_it_28;
unsigned long  int size_29;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_22=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_22->allocated!=177783) {
                return;
            }
            it_22->allocated=0;
            prev_it_23=it_22->prev;
            next_it_24=it_22->next;
            if(            gAllocMem==it_22) {
                gAllocMem=next_it_24;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_23) {
                    prev_it_23->next=next_it_24;
                }
                if(                next_it_24) {
                    next_it_24->prev=prev_it_23;
                }
            }
            size_25=it_22->size;
            if(            size_25<4096) {
                if(                gHeapPages.mFreeMem[size_25]==((void*)0)) {
                    it_22->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_25]=(struct sMemHeaderTiny*)it_22;
                }
                else {
                    it_22->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_25];
                    gHeapPages.mFreeMem[size_25]=(struct sMemHeaderTiny*)it_22;
                }
            }
            else {
                free(it_22);
            }
            gNumFree++;
        }
        else {
            it_26=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_26->allocated!=177783) {
                return;
            }
            it_26->allocated=0;
            prev_it_27=it_26->prev;
            next_it_28=it_26->next;
            if(            gAllocMem==it_26) {
                gAllocMem=(struct sMemHeader*)next_it_28;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_27) {
                    prev_it_27->next=next_it_28;
                }
                if(                next_it_28) {
                    next_it_28->prev=prev_it_27;
                }
            }
            size_29=it_26->size;
            if(            size_29<4096) {
                if(                gHeapPages.mFreeMem[size_29]==((void*)0)) {
                    it_26->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_29]=it_26;
                }
                else {
                    it_26->free_next=gHeapPages.mFreeMem[size_29];
                    gHeapPages.mFreeMem[size_29]=it_26;
                }
            }
            else {
                free(it_26);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_30;
char* __result_obj__7;
struct sMemHeaderTiny* it_31;
char* __result_obj__8;
    if(    gComeDebugLib) {
        it_30=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_30->allocated!=177783) {
            printf("invalid heap object(%p)(1)\n",it_30);
            exit(2);
        }
        __result_obj__7 = it_30->class_name;
        return __result_obj__7;
    }
    else {
        it_31=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_31->allocated!=177783) {
            printf("invalid heap object(%p)(2)\n",it_31);
            exit(2);
        }
        __result_obj__8 = it_31->class_name;
        return __result_obj__8;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_32;
int i_33;
struct sMemHeaderTiny* it_34;
    if(    gComeDebugLib) {
        it_32=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_32->allocated!=177783) {
            return;
        }
        printf("%p ",mem);
        if(        it_32->class_name) {
            printf("(%s): ",it_32->class_name);
        }
        for(        i_33=0;        i_33<16;        i_33++        ){
            if(            it_32->sname[i_33]) {
                printf("%s %d #%d, ",it_32->sname[i_33],it_32->sline[i_33],it_32->id[i_33]);
            }
        }
        puts("");
    }
    else {
        it_34=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_34->allocated!=177783) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_34->class_name,it_34->sname,it_34->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_35;
unsigned long  int* ref_count_36;
unsigned long  int* size2_37;
void* __result_obj__9;
    mem_35=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_36=(unsigned long  int*)mem_35;
    *ref_count_36=0;
    size2_37=(unsigned long  int*)(mem_35+sizeof(unsigned long  int));
    *size2_37=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__9 = mem_35+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__9;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_38;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_38=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_38);
}

void come_free(void* mem){
unsigned long  int* ref_count_39;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_39=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_39);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__10;
char* mem_40;
unsigned long  int* size_p_41;
unsigned long  int size_42;
void* result_43;
void* __result_obj__11;
    if(    !block) {
        __result_obj__10 = ((void*)0);
        return __result_obj__10;
    }
    mem_40=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_41=(unsigned long  int*)(mem_40+sizeof(unsigned long  int));
    size_42=*size_p_41-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_43=come_calloc(1,size_42,sname,sline,class_name);
    memcpy(result_43,block,size_42);
    __result_obj__11 = result_43;
    return __result_obj__11;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__12;
unsigned long  int* ref_count_44;
void* __result_obj__13;
    if(    mem==((void*)0)) {
        __result_obj__12 = mem;
        return __result_obj__12;
    }
    ref_count_44=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_44)++;
    __result_obj__13 = mem;
    return __result_obj__13;
}

void* come_print_ref_count(void* mem){
void* __result_obj__14;
unsigned long  int* ref_count_45;
void* __result_obj__15;
    if(    mem==((void*)0)) {
        __result_obj__14 = mem;
        return __result_obj__14;
    }
    ref_count_45=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_45);
    __result_obj__15 = mem;
    return __result_obj__15;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__16;
void* __result_obj__17;
unsigned long  int* ref_count_46;
unsigned long  int count_47;
void (*finalizer_48)(void*);
void* __result_obj__18;
void* __result_obj__19;
memset(&finalizer_48, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result_obj__16 = mem;
            return __result_obj__16;
        }
    }
    if(    mem==((void*)0)) {
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    ref_count_46=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_46)--;
    }
    count_47=*ref_count_46;
    if(    !no_free&&(count_47<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_48=protocol_fun;
            finalizer_48(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result_obj__18 = ((void*)0);
        return __result_obj__18;
    }
    __result_obj__19 = mem;
    return __result_obj__19;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_49)(void*);
void (*finalizer_50)(void*);
unsigned long  int* ref_count_51;
unsigned long  int count_52;
void (*finalizer_53)(void*);
void (*finalizer_54)(void*);
memset(&finalizer_49, 0, sizeof(void (*)(void*)));
memset(&finalizer_50, 0, sizeof(void (*)(void*)));
memset(&finalizer_53, 0, sizeof(void (*)(void*)));
memset(&finalizer_54, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_49=protocol_fun;
                finalizer_49(protocol_obj);
            }
            finalizer_50=fun;
            finalizer_50(mem);
        }
    }
    else {
        ref_count_51=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_51)--;
        }
        count_52=*ref_count_51;
        if(        !no_free&&(count_52<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_53=protocol_fun;
                        finalizer_53(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_54=fun;
                        finalizer_54(mem);
                    }
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_55)(void*);
void (*finalizer_56)(void*);
unsigned long  int* ref_count_57;
unsigned long  int count_58;
void (*finalizer_59)(void*);
void (*finalizer_60)(void*);
memset(&finalizer_55, 0, sizeof(void (*)(void*)));
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
memset(&finalizer_59, 0, sizeof(void (*)(void*)));
memset(&finalizer_60, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_55=protocol_fun;
                finalizer_55(protocol_obj);
            }
            finalizer_56=fun;
            finalizer_56(mem);
        }
    }
    else {
        ref_count_57=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_57)--;
        }
        count_58=*ref_count_57;
        if(        !no_free&&(count_58<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_59=protocol_fun;
                        finalizer_59(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_60=fun;
                        finalizer_60(mem);
                    }
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_61)(void*);
unsigned long  int* ref_count_62;
unsigned long  int count_63;
void (*finalizer_64)(void*);
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            fun) {
                finalizer_61=fun;
                finalizer_61(mem);
            }
        }
    }
    else {
        ref_count_62=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_62)--;
        }
        count_63=*ref_count_62;
        if(        !no_free&&(count_63<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    finalizer_64=fun;
                    finalizer_64(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void* come_call_cloner(void* fun, void* mem){
void* __result_obj__20;
void* mem2_65;
void* (*cloner_66)(void*);
struct sMemHeader* it_67;
struct sMemHeader* it2_68;
void* __result_obj__21;
struct sMemHeaderTiny* it_69;
struct sMemHeaderTiny* it2_70;
void* __result_obj__22;
void* __result_obj__23;
memset(&cloner_66, 0, sizeof(void* (*)(void*)));
    if(    mem==((void*)0)) {
        __result_obj__20 = ((void*)0);
        return __result_obj__20;
    }
    mem2_65=((void*)0);
    if(    fun) {
        cloner_66=fun;
        mem2_65=cloner_66(mem);
    }
    if(    mem2_65) {
        if(        gComeDebugLib) {
            it_67=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_68=(struct sMemHeader*)((char*)mem2_65-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_68->class_name=it_67->class_name;
            memcpy(it2_68->sname,it_67->sname,sizeof(char*)*16);
            memcpy(it2_68->sline,it_67->sline,sizeof(int)*16);
            memcpy(it2_68->id,it_67->id,sizeof(int)*16);
            __result_obj__21 = mem2_65;
            return __result_obj__21;
        }
        else {
            it_69=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_70=(struct sMemHeaderTiny*)((char*)mem2_65-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_70->class_name=it_69->class_name;
            it2_70->sname=it_69->sname;
            it2_70->sline=it_69->sline;
            __result_obj__22 = mem2_65;
            return __result_obj__22;
        }
    }
    __result_obj__23 = ((void*)0);
    return __result_obj__23;
}

unsigned int come_call_get_hash_key(void* fun, void* mem){
unsigned int (*cloner_71)(void*);
memset(&cloner_71, 0, sizeof(unsigned int (*)(void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    if(    fun) {
        cloner_71=fun;
        return cloner_71(mem);
    }
    return 0;
}

unsigned int come_call_equals(void* fun, void* mem, void* mem2){
unsigned int (*equaler_72)(void*,void*);
memset(&equaler_72, 0, sizeof(unsigned int (*)(void*,void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    if(    fun) {
        equaler_72=fun;
        return equaler_72(mem,mem2);
    }
    return 0;
}

char* __builtin_string(char* str){
char* __result_obj__24;
int len_73;
void* __right_value4 = (void*)0;
char* result_74;
char* __result_obj__25;
    if(    str==((void*)0)) {
        __result_obj__24 = come_increment_ref_count(((void*)0));
        (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__24;
    }
    len_73=strlen(str)+1;
    result_74=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_73)), "./comelang.h", 1067, "char*"));
    strncpy(result_74,str,len_73);
    __result_obj__25 = come_increment_ref_count(result_74);
    (result_74 = come_decrement_ref_count(result_74, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__25 = come_decrement_ref_count(__result_obj__25, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__25;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_75;
int i_76;
    found_75=(_Bool)0;
    for(    i_76=0;    i_76<len;    i_76++    ){
        if(        array[i_76]==element) {
            found_75=(_Bool)1;
            break;
        }
    }
    return found_75;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__26;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3022, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__26 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__26,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__26;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__27;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3032, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__27 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__27,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__27;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__28;
void* __right_value7 = (void*)0;
struct buffer* result_77;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__29;
    if(    self==((void*)0)) {
        __result_obj__28 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__28,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__28;
    }
    result_77=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3052, "struct buffer*"));
    result_77->size=self->size;
    __dec_obj3=result_77->buf,
    result_77->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3055, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_77->len=self->len;
    memcpy(result_77->buf,self->buf,self->len);
    __result_obj__29 = come_increment_ref_count(result_77);
    /*c*/ come_call_finalizer3(result_77,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__29,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__29;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
_Bool __result_obj__30;
    if(    left==((void*)0)||right==((void*)0)) {
        return (_Bool)0;
    }
    __result_obj__30 = string_equals(((char*)(__right_value9=buffer_to_string(left))),((char*)(__right_value10=buffer_to_string(right))));
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__30;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
struct buffer* __result_obj__31;
void* __right_value11 = (void*)0;
char* old_buf_78;
int old_len_79;
int new_size_80;
void* __right_value12 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__32;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result_obj__31 = self;
        return __result_obj__31;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_78=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3103, "char*"));
        memcpy(old_buf_78,self->buf,self->size);
        old_len_79=self->len;
        new_size_80=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_80)), "./comelang.h", 3107, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_78,old_len_79);
        self->buf[old_len_79]=0;
        self->size=new_size_80;
        (old_buf_78 = come_decrement_ref_count(old_buf_78, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__32 = self;
    return __result_obj__32;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__33;
void* __right_value13 = (void*)0;
char* old_buf_81;
int old_len_82;
int new_size_83;
void* __right_value14 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__34;
    if(    self==((void*)0)) {
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_81=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang.h", 3126, "char*"));
        old_len_82=self->len;
        new_size_83=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_83)), "./comelang.h", 3130, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_81,old_len_82);
        self->buf[old_len_82]=0;
        self->size=new_size_83;
        (old_buf_81 = come_decrement_ref_count(old_buf_81, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__34 = self;
    return __result_obj__34;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__35;
int size_84;
void* __right_value15 = (void*)0;
char* old_buf_85;
int old_len_86;
int new_size_87;
void* __right_value16 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__36;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result_obj__35 = self;
        return __result_obj__35;
    }
    size_84=strlen(mem);
    if(    self->len+size_84+1+1>=self->size) {
        old_buf_85=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3152, "char*"));
        memcpy(old_buf_85,self->buf,self->size);
        old_len_86=self->len;
        new_size_87=(self->size+size_84+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_87)), "./comelang.h", 3156, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_85,old_len_86);
        self->buf[old_len_86]=0;
        self->size=new_size_87;
        (old_buf_85 = come_decrement_ref_count(old_buf_85, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_84);
    self->len+=size_84;
    self->buf[self->len]=0;
    __result_obj__36 = self;
    return __result_obj__36;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__37;
va_list args_88;
char* result_89;
int len_90;
struct buffer* __result_obj__38;
void* __right_value17 = (void*)0;
char* mem_91;
int size_92;
void* __right_value18 = (void*)0;
char* old_buf_93;
int old_len_94;
int new_size_95;
void* __right_value19 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__39;
memset(&args_88, 0, sizeof(va_list));
result_89 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result_obj__37 = self;
        return __result_obj__37;
    }
    __builtin_va_start(args_88,msg);
    len_90=vasprintf(&result_89,msg,args_88);
    __builtin_va_end(args_88);
    if(    len_90<0) {
        __result_obj__38 = self;
        /*c*/ come_call_finalizer3((&args_88),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__38;
    }
    mem_91=(char*)come_increment_ref_count(__builtin_string(result_89));
    size_92=strlen(mem_91);
    if(    self->len+size_92+1+1>=self->size) {
        old_buf_93=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3189, "char*"));
        memcpy(old_buf_93,self->buf,self->size);
        old_len_94=self->len;
        new_size_95=(self->size+size_92+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_95)), "./comelang.h", 3193, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_93,old_len_94);
        self->buf[old_len_94]=0;
        self->size=new_size_95;
        (old_buf_93 = come_decrement_ref_count(old_buf_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_91,size_92);
    self->len+=size_92;
    self->buf[self->len]=0;
    free(result_89);
    __result_obj__39 = self;
    /*c*/ come_call_finalizer3((&args_88),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (mem_91 = come_decrement_ref_count(mem_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__39;
}

static void va_list_finalize(va_list self){
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__40;
int size_96;
void* __right_value20 = (void*)0;
char* old_buf_97;
int old_len_98;
int new_size_99;
void* __right_value21 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__41;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result_obj__40 = self;
        return __result_obj__40;
    }
    size_96=strlen(mem)+1;
    if(    self->len+size_96+1+1+1>=self->size) {
        old_buf_97=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3215, "char*"));
        memcpy(old_buf_97,self->buf,self->size);
        old_len_98=self->len;
        new_size_99=(self->size+size_96+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_99)), "./comelang.h", 3219, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_97,old_len_98);
        self->buf[old_len_98]=0;
        self->size=new_size_99;
        (old_buf_97 = come_decrement_ref_count(old_buf_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_96);
    self->len+=size_96;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__41 = self;
    return __result_obj__41;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__42;
int* mem_100;
int size_101;
void* __right_value22 = (void*)0;
char* old_buf_102;
int old_len_103;
int new_size_104;
void* __right_value23 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__43;
    if(    self==((void*)0)) {
        __result_obj__42 = ((void*)0);
        return __result_obj__42;
    }
    mem_100=&value;
    size_101=sizeof(int);
    if(    self->len+size_101+1+1>=self->size) {
        old_buf_102=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3242, "char*"));
        memcpy(old_buf_102,self->buf,self->size);
        old_len_103=self->len;
        new_size_104=(self->size+size_101+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_104)), "./comelang.h", 3246, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_102,old_len_103);
        self->buf[old_len_103]=0;
        self->size=new_size_104;
        (old_buf_102 = come_decrement_ref_count(old_buf_102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_100,size_101);
    self->len+=size_101;
    self->buf[self->len]=0;
    __result_obj__43 = self;
    return __result_obj__43;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_105;
int size_106;
void* __right_value24 = (void*)0;
char* old_buf_107;
int old_len_108;
int new_size_109;
void* __right_value25 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__44;
    mem_105=&value;
    size_106=sizeof(long);
    if(    self->len+size_106+1+1>=self->size) {
        old_buf_107=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3265, "char*"));
        memcpy(old_buf_107,self->buf,self->size);
        old_len_108=self->len;
        new_size_109=(self->size+size_106+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_109)), "./comelang.h", 3269, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_107,old_len_108);
        self->buf[old_len_108]=0;
        self->size=new_size_109;
        (old_buf_107 = come_decrement_ref_count(old_buf_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_105,size_106);
    self->len+=size_106;
    self->buf[self->len]=0;
    __result_obj__44 = self;
    return __result_obj__44;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__45;
short* mem_110;
int size_111;
void* __right_value26 = (void*)0;
char* old_buf_112;
int old_len_113;
int new_size_114;
void* __right_value27 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__46;
    if(    self==((void*)0)) {
        __result_obj__45 = ((void*)0);
        return __result_obj__45;
    }
    mem_110=&value;
    size_111=sizeof(short);
    if(    self->len+size_111+1+1>=self->size) {
        old_buf_112=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3292, "char*"));
        memcpy(old_buf_112,self->buf,self->size);
        old_len_113=self->len;
        new_size_114=(self->size+size_111+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_114)), "./comelang.h", 3296, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        memcpy(self->buf,old_buf_112,old_len_113);
        self->buf[old_len_113]=0;
        self->size=new_size_114;
        (old_buf_112 = come_decrement_ref_count(old_buf_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_110,size_111);
    self->len+=size_111;
    self->buf[self->len]=0;
    __result_obj__46 = self;
    return __result_obj__46;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__47;
int len_115;
int new_size_116;
void* __right_value28 = (void*)0;
char* __dec_obj12;
int i_117;
struct buffer* __result_obj__48;
    if(    self==((void*)0)) {
        __result_obj__47 = ((void*)0);
        return __result_obj__47;
    }
    len_115=self->len;
    len_115=(len_115+3)&~3;
    if(    len_115>=self->size) {
        new_size_116=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_116)), "./comelang.h", 3320, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->size=new_size_116;
    }
    for(    i_117=self->len;    i_117<len_115;    i_117++    ){
        self->buf[i_117]=0;
    }
    self->len=len_115;
    __result_obj__48 = self;
    return __result_obj__48;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_118;
struct buffer* __result_obj__49;
struct buffer* __result_obj__50;
    result_118=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3350, "struct buffer*"))));
    if(    self==((void*)0)) {
        __result_obj__49 = come_increment_ref_count(result_118);
        /*c*/ come_call_finalizer3(result_118,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__49,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__49;
    }
    buffer_append_str(result_118,self);
    __result_obj__50 = come_increment_ref_count(result_118);
    /*c*/ come_call_finalizer3(result_118,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__50,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__50;
}

char* buffer_to_string(struct buffer* self){
void* __right_value31 = (void*)0;
char* __result_obj__51;
void* __right_value32 = (void*)0;
char* __result_obj__52;
    if(    self==((void*)0)) {
        __result_obj__51 = come_increment_ref_count(((char*)(__right_value31=__builtin_string(""))));
        (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__51;
    }
    __result_obj__52 = come_increment_ref_count(((char*)(__right_value32=__builtin_string(self->buf))));
    (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__52;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__53;
    __result_obj__53 = self->buf;
    return __result_obj__53;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_119;
struct buffer* __result_obj__54;
    result_119=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3377, "struct buffer*"))));
    buffer_append(result_119,self,sizeof(char)*len);
    __result_obj__54 = come_increment_ref_count(result_119);
    /*c*/ come_call_finalizer3(result_119,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__54,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__54;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_120;
int i_121;
struct buffer* __result_obj__55;
    result_120=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3384, "struct buffer*"))));
    for(    i_121=0;    i_121<len;    i_121++    ){
        buffer_append(result_120,self[i_121],strlen(self[i_121]));
    }
    __result_obj__55 = come_increment_ref_count(result_120);
    /*c*/ come_call_finalizer3(result_120,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__55,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__55;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_122;
struct buffer* __result_obj__56;
    result_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3393, "struct buffer*"))));
    buffer_append(result_122,(char*)self,sizeof(short)*len);
    __result_obj__56 = come_increment_ref_count(result_122);
    /*c*/ come_call_finalizer3(result_122,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__56,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__56;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_123;
struct buffer* __result_obj__57;
    result_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3400, "struct buffer*"))));
    buffer_append(result_123,(char*)self,sizeof(int)*len);
    __result_obj__57 = come_increment_ref_count(result_123);
    /*c*/ come_call_finalizer3(result_123,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__57,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__57;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_124;
struct buffer* __result_obj__58;
    result_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3407, "struct buffer*"))));
    buffer_append(result_124,(char*)self,sizeof(long)*len);
    __result_obj__58 = come_increment_ref_count(result_124);
    /*c*/ come_call_finalizer3(result_124,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__58,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__58;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_125;
struct buffer* __result_obj__59;
    result_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3414, "struct buffer*"))));
    buffer_append(result_125,(char*)self,sizeof(float)*len);
    __result_obj__59 = come_increment_ref_count(result_125);
    /*c*/ come_call_finalizer3(result_125,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_126;
struct buffer* __result_obj__60;
    result_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3421, "struct buffer*"))));
    buffer_append(result_126,(char*)self,sizeof(double)*len);
    __result_obj__60 = come_increment_ref_count(result_126);
    /*c*/ come_call_finalizer3(result_126,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__60,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__60;
}

char* buffer_printable(struct buffer* self){
int len_127;
void* __right_value47 = (void*)0;
char* result_128;
int n_129;
int i_130;
unsigned char c_131;
char* __result_obj__61;
    len_127=self->len;
    result_128=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_127*2+1)), "./comelang.h", 3429, "char*"));
    n_129=0;
    for(    i_130=0;    i_130<len_127;    i_130++    ){
        c_131=self->buf[i_130];
        if(        (c_131>=0&&c_131<32)||c_131==127) {
            result_128[n_129++]=94;
            result_128[n_129++]=c_131+65-1;
        }
        else if(        c_131>127) {
            result_128[n_129++]=63;
        }
        else {
            result_128[n_129++]=c_131;
        }
    }
    result_128[n_129]=0;
    __result_obj__61 = come_increment_ref_count(result_128);
    (result_128 = come_decrement_ref_count(result_128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__61;
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value48 = (void*)0;
void* __right_value52 = (void*)0;
struct list$1char$* __result_obj__64;
    __result_obj__64 = come_increment_ref_count(((struct list$1char$*)(__right_value52=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./comelang.h", 3470, "struct list$1char$*")),len,self))));
    /*c*/ come_call_finalizer3(__right_value52,list$1char$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__64,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__64;
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

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value53 = (void*)0;
void* __right_value57 = (void*)0;
struct list$1char$p* __result_obj__67;
    __result_obj__67 = come_increment_ref_count(((struct list$1char$p*)(__right_value57=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 3475, "struct list$1char$p*")),len,self))));
    /*c*/ come_call_finalizer3(__right_value57,list$1char$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__67,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__67;
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

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value58 = (void*)0;
void* __right_value62 = (void*)0;
struct list$1short$* __result_obj__70;
    __result_obj__70 = come_increment_ref_count(((struct list$1short$*)(__right_value62=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./comelang.h", 3480, "struct list$1short$*")),len,self))));
    /*c*/ come_call_finalizer3(__right_value62,list$1short$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__70,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__70;
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

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value67 = (void*)0;
struct list$1int$* __result_obj__73;
    __result_obj__73 = come_increment_ref_count(((struct list$1int$*)(__right_value67=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./comelang.h", 3485, "struct list$1int$*")),len,self))));
    /*c*/ come_call_finalizer3(__right_value67,list$1int$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__73,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__73;
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

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value72 = (void*)0;
struct list$1long$* __result_obj__76;
    __result_obj__76 = come_increment_ref_count(((struct list$1long$*)(__right_value72=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./comelang.h", 3490, "struct list$1long$*")),len,self))));
    /*c*/ come_call_finalizer3(__right_value72,list$1long$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__76,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
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

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1float$* __result_obj__79;
    __result_obj__79 = come_increment_ref_count(((struct list$1float$*)(__right_value77=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./comelang.h", 3495, "struct list$1float$*")),len,self))));
    /*c*/ come_call_finalizer3(__right_value77,list$1float$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__79,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__79;
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

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value78 = (void*)0;
void* __right_value82 = (void*)0;
struct list$1double$* __result_obj__82;
    __result_obj__82 = come_increment_ref_count(((struct list$1double$*)(__right_value82=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./comelang.h", 3500, "struct list$1double$*")),len,self))));
    /*c*/ come_call_finalizer3(__right_value82,list$1double$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
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

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __right_value83 = (void*)0;
char* __result_obj__83;
int len_174;
void* __right_value84 = (void*)0;
char* result_175;
char* __result_obj__84;
    if(    self==((void*)0)||right==((void*)0)) {
        __result_obj__83 = come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__83;
    }
    len_174=strlen(self)+strlen(right);
    result_175=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_174+1)), "./comelang.h", 3714, "char*"));
    strncpy(result_175,self,len_174+1);
    strncat(result_175,right,len_174+1);
    __result_obj__84 = come_increment_ref_count(result_175);
    (result_175 = come_decrement_ref_count(result_175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__84;
}

char* string_operator_add(char* self, char* right){
void* __right_value85 = (void*)0;
char* __result_obj__85;
int len_176;
void* __right_value86 = (void*)0;
char* result_177;
char* __result_obj__86;
    if(    self==((void*)0)||right==((void*)0)) {
        __result_obj__85 = come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__85;
    }
    len_176=strlen(self)+strlen(right);
    result_177=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_176+1)), "./comelang.h", 3729, "char*"));
    strncpy(result_177,self,len_176+1);
    strncat(result_177,right,len_176+1);
    __result_obj__86 = come_increment_ref_count(result_177);
    (result_177 = come_decrement_ref_count(result_177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__86;
}

char* charp_operator_mult(char* self, int right){
void* __right_value87 = (void*)0;
char* __result_obj__87;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct buffer* buf_178;
int i_179;
void* __right_value90 = (void*)0;
char* __result_obj__88;
    if(    self==((void*)0)) {
        __result_obj__87 = come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__87 = come_decrement_ref_count(__result_obj__87, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__87;
    }
    buf_178=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3742, "struct buffer*"))));
    for(    i_179=0;    i_179<right;    i_179++    ){
        buffer_append_str(buf_178,self);
    }
    __result_obj__88 = come_increment_ref_count(((char*)(__right_value90=buffer_to_string(buf_178))));
    /*c*/ come_call_finalizer3(buf_178,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__88;
}

char* string_operator_mult(char* self, int right){
void* __right_value91 = (void*)0;
char* __result_obj__89;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_180;
int i_181;
void* __right_value94 = (void*)0;
char* __result_obj__90;
    if(    self==((void*)0)) {
        __result_obj__89 = come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__89;
    }
    buf_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3756, "struct buffer*"))));
    for(    i_181=0;    i_181<right;    i_181++    ){
        buffer_append_str(buf_180,self);
    }
    __result_obj__90 = come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_180))));
    /*c*/ come_call_finalizer3(buf_180,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__90;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_182;
int i_183;
    result_182=(_Bool)0;
    for(    i_183=0;    i_183<len;    i_183++    ){
        if(        strncmp(self[i_183],str,strlen(self[i_183]))==0) {
            result_182=(_Bool)1;
            break;
        }
    }
    return result_182;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_184;
char* p_185;
    if(    value==((void*)0)) {
        return 0;
    }
    result_184=0;
    p_185=value;
    while(*p_185) {
        result_184+=(*p_185);
        p_185++;
    }
    return result_184;
}

unsigned int string_get_hash_key(char* value){
int result_186;
char* p_187;
    if(    value==((void*)0)) {
        return 0;
    }
    result_186=0;
    p_187=value;
    while(*p_187) {
        result_186+=(*p_187);
        p_187++;
    }
    return result_186;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xiswalpha(unsigned int c){
_Bool result_188;
    result_188=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_188;
}

_Bool xiswblank(unsigned int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_189;
    result_189=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_189;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_190;
    result_190=(c>=32&&c<=126);
    return result_190;
}

_Bool xiswascii(unsigned int c){
_Bool result_191;
    result_191=(c>=32&&c<=126);
    return result_191;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __right_value95 = (void*)0;
char* __result_obj__91;
int len_192;
void* __right_value96 = (void*)0;
char* result_193;
int i_194;
char* __result_obj__92;
    if(    str==((void*)0)) {
        __result_obj__91 = come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__91 = come_decrement_ref_count(__result_obj__91, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__91;
    }
    len_192=strlen(str);
    result_193=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_192+1)), "./comelang.h", 4007, "char*"));
    for(    i_194=0;    i_194<len_192;    i_194++    ){
        result_193[i_194]=str[len_192-i_194-1];
    }
    result_193[len_192]=0;
    __result_obj__92 = come_increment_ref_count(result_193);
    (result_193 = come_decrement_ref_count(result_193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__92;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value97 = (void*)0;
char* __result_obj__93;
int len_195;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
char* __result_obj__94;
void* __right_value100 = (void*)0;
char* __result_obj__95;
void* __right_value101 = (void*)0;
char* __result_obj__96;
void* __right_value102 = (void*)0;
char* result_196;
char* __result_obj__97;
    if(    str==((void*)0)) {
        __result_obj__93 = come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__93;
    }
    len_195=strlen(str);
    if(    head<0) {
        head+=len_195;
    }
    if(    tail<0) {
        tail+=len_195+1;
    }
    if(    head>tail) {
        __result_obj__94 = come_increment_ref_count(((char*)(__right_value99=charp_reverse(((char*)(__right_value98=charp_substring(str,tail,head)))))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__94;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_195) {
        tail=len_195;
    }
    if(    head==tail) {
        __result_obj__95 = come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__95;
    }
    if(    tail-head+1<1) {
        __result_obj__96 = come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__96;
    }
    result_196=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4053, "char*"));
    memcpy(result_196,str+head,tail-head);
    result_196[tail-head]=0;
    __result_obj__97 = come_increment_ref_count(result_196);
    (result_196 = come_decrement_ref_count(result_196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__97;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value103 = (void*)0;
char* __result_obj__98;
int len_197;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
char* __result_obj__99;
void* __right_value106 = (void*)0;
char* __result_obj__100;
void* __right_value107 = (void*)0;
char* __result_obj__101;
void* __right_value108 = (void*)0;
char* result_198;
char* __result_obj__102;
    if(    str==((void*)0)) {
        __result_obj__98 = come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__98;
    }
    len_197=strlen(str);
    if(    head<0) {
        head+=len_197;
    }
    if(    tail<0) {
        tail+=len_197+1;
    }
    if(    head>tail) {
        __result_obj__99 = come_increment_ref_count(((char*)(__right_value105=charp_reverse(((char*)(__right_value104=charp_substring(str,tail,head)))))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__99 = come_decrement_ref_count(__result_obj__99, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__99;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_197) {
        tail=len_197;
    }
    if(    head==tail) {
        __result_obj__100 = come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__100;
    }
    if(    tail-head+1<1) {
        __result_obj__101 = come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__101;
    }
    result_198=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4096, "char*"));
    memcpy(result_198,str+head,tail-head);
    result_198[tail-head]=0;
    __result_obj__102 = come_increment_ref_count(result_198);
    (result_198 = come_decrement_ref_count(result_198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__102;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value109 = (void*)0;
char* __result_obj__103;
int len_199;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
char* __result_obj__104;
void* __right_value112 = (void*)0;
char* __result_obj__105;
void* __right_value113 = (void*)0;
char* __result_obj__106;
void* __right_value114 = (void*)0;
char* result_200;
char* __result_obj__107;
    if(    str==((void*)0)) {
        __result_obj__103 = come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__103;
    }
    len_199=strlen(str);
    if(    head<0) {
        head+=len_199;
    }
    if(    tail<0) {
        tail+=len_199+1;
    }
    if(    head>tail) {
        __result_obj__104 = come_increment_ref_count(((char*)(__right_value111=charp_reverse(((char*)(__right_value110=charp_substring(str,tail,head)))))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__104;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_199) {
        tail=len_199;
    }
    if(    head==tail) {
        __result_obj__105 = come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__105;
    }
    if(    tail-head+1<1) {
        __result_obj__106 = come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__106;
    }
    result_200=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4139, "char*"));
    memcpy(result_200,str+head,tail-head);
    result_200[tail-head]=0;
    __result_obj__107 = come_increment_ref_count(result_200);
    (result_200 = come_decrement_ref_count(result_200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__107;
}

char* xsprintf(char* msg, ...){
void* __right_value115 = (void*)0;
char* __result_obj__108;
va_list args_201;
char* result_202;
int len_203;
void* __right_value116 = (void*)0;
char* __result_obj__109;
void* __right_value117 = (void*)0;
char* result2_204;
char* __result_obj__110;
memset(&args_201, 0, sizeof(va_list));
result_202 = (void*)0;
    if(    msg==((void*)0)) {
        __result_obj__108 = come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__108;
    }
    __builtin_va_start(args_201,msg);
    len_203=vasprintf(&result_202,msg,args_201);
    __builtin_va_end(args_201);
    if(    len_203<0) {
        __result_obj__109 = come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        /*c*/ come_call_finalizer3((&args_201),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__109;
    }
    result2_204=(char*)come_increment_ref_count(__builtin_string(result_202));
    free(result_202);
    __result_obj__110 = come_increment_ref_count(result2_204);
    /*c*/ come_call_finalizer3((&args_201),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result2_204 = come_decrement_ref_count(result2_204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__110;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value118 = (void*)0;
char* __result_obj__111;
int len_205;
void* __right_value119 = (void*)0;
char* __result_obj__112;
void* __right_value120 = (void*)0;
char* __result_obj__113;
void* __right_value121 = (void*)0;
char* result_206;
char* __result_obj__114;
    if(    str==((void*)0)) {
        __result_obj__111 = come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__111;
    }
    len_205=strlen(str);
    if(    strcmp(str,"")==0) {
        __result_obj__112 = come_increment_ref_count(((char*)(__right_value119=__builtin_string(str))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__112;
    }
    if(    head<0) {
        head+=len_205;
    }
    if(    tail<0) {
        tail+=len_205+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result_obj__113 = come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__113;
    }
    if(    tail>=len_205) {
        tail=len_205;
    }
    result_206=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_205-(tail-head)+1)), "./comelang.h", 4201, "char*"));
    memcpy(result_206,str,head);
    memcpy(result_206+head,str+tail,len_205-tail);
    result_206[len_205-(tail-head)]=0;
    __result_obj__114 = come_increment_ref_count(result_206);
    (result_206 = come_decrement_ref_count(result_206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__114;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1char$ph* __result_obj__116;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* result_209;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct buffer* str_210;
int i_211;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1char$ph* __result_obj__118;
    if(    self==((void*)0)) {
        __result_obj__116 = come_increment_ref_count(((struct list$1char$ph*)(__right_value123=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 4214, "struct list$1char$ph*"))))));
        /*c*/ come_call_finalizer3(__right_value123,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__116,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__116;
    }
    result_209=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 4217, "struct list$1char$ph*"))));
    str_210=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4219, "struct buffer*"))));
    for(    i_211=0;    i_211<charp_length(self);    i_211++    ){
        if(        self[i_211]==c) {
            list$1char$ph_push_back(result_209,(char*)come_increment_ref_count(__builtin_string(str_210->buf)));
            buffer_reset(str_210);
        }
        else {
            buffer_append_char(str_210,self[i_211]);
        }
    }
    if(    buffer_length(str_210)!=0) {
        list$1char$ph_push_back(result_209,(char*)come_increment_ref_count(__builtin_string(str_210->buf)));
    }
    __result_obj__118 = come_increment_ref_count(result_209);
    /*c*/ come_call_finalizer3(result_209,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(str_210,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__118,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__118;
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

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value133 = (void*)0;
char* __result_obj__119;
    __result_obj__119 = come_increment_ref_count(((char*)(__right_value133=xsprintf(msg,self))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__119;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__120;
    __result_obj__120 = come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__120;
}

char* charp_printable(char* str){
int len_215;
void* __right_value135 = (void*)0;
char* result_216;
int n_217;
int i_218;
char c_219;
char* __result_obj__121;
    len_215=charp_length(str);
    result_216=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_215*2+1)), "./comelang.h", 4251, "char*"));
    n_217=0;
    for(    i_218=0;    i_218<len_215;    i_218++    ){
        c_219=str[i_218];
        if(        (c_219>=0&&c_219<32)||c_219==127) {
            result_216[n_217++]=94;
            result_216[n_217++]=c_219+65-1;
        }
        else {
            result_216[n_217++]=c_219;
        }
    }
    result_216[n_217]=0;
    __result_obj__121 = come_increment_ref_count(result_216);
    (result_216 = come_decrement_ref_count(result_216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__121;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value136 = (void*)0;
char* __result_obj__122;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct buffer* result_220;
char* p_221;
char* p2_222;
void* __right_value139 = (void*)0;
char* __result_obj__123;
    if(    str==((void*)0)||replace==((void*)0)) {
        __result_obj__122 = come_increment_ref_count(((char*)(__right_value136=__builtin_string(self))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__122;
    }
    result_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4279, "struct buffer*"))));
    p_221=self;
    while((_Bool)1) {
        p2_222=strstr(p_221,str);
        if(        p2_222==((void*)0)) {
            p2_222=p_221;
            while(*p2_222) {
                p2_222++;
            }
            buffer_append(result_220,p_221,p2_222-p_221);
            break;
        }
        buffer_append(result_220,p_221,p2_222-p_221);
        buffer_append_str(result_220,replace);
        p_221=p2_222+strlen(str);
    }
    __result_obj__123 = come_increment_ref_count(((char*)(__right_value139=buffer_to_string(result_220))));
    /*c*/ come_call_finalizer3(result_220,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__123;
}

char* xbasename(char* path){
void* __right_value140 = (void*)0;
char* __result_obj__124;
char* p_223;
void* __right_value141 = (void*)0;
char* __result_obj__125;
void* __right_value142 = (void*)0;
char* __result_obj__126;
void* __right_value143 = (void*)0;
char* __result_obj__127;
    if(    path==((void*)0)) {
        __result_obj__124 = come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__124;
    }
    p_223=path+strlen(path);
    while(p_223>=path) {
        if(        *p_223==47) {
            break;
        }
        else {
            p_223--;
        }
    }
    if(    p_223<path) {
        __result_obj__125 = come_increment_ref_count(((char*)(__right_value141=__builtin_string(path))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__125;
    }
    else {
        __result_obj__126 = come_increment_ref_count(((char*)(__right_value142=__builtin_string(p_223+1))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__126;
    }
    __result_obj__127 = come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__127;
}

char* xnoextname(char* path){
void* __right_value144 = (void*)0;
char* __result_obj__128;
void* __right_value145 = (void*)0;
char* path2_224;
char* p_225;
void* __right_value146 = (void*)0;
char* __result_obj__129;
void* __right_value147 = (void*)0;
char* __result_obj__130;
void* __right_value148 = (void*)0;
char* __result_obj__131;
    if(    path==((void*)0)) {
        __result_obj__128 = come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__128;
    }
    path2_224=(char*)come_increment_ref_count(xbasename(path));
    p_225=path2_224+strlen(path2_224);
    while(p_225>=path2_224) {
        if(        *p_225==46) {
            break;
        }
        else {
            p_225--;
        }
    }
    if(    p_225<path2_224) {
        __result_obj__129 = come_increment_ref_count(((char*)(__right_value146=__builtin_string(path2_224))));
        (path2_224 = come_decrement_ref_count(path2_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__129;
    }
    else {
        __result_obj__130 = come_increment_ref_count(((char*)(__right_value147=charp_substring(path2_224,0,p_225-path2_224))));
        (path2_224 = come_decrement_ref_count(path2_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__130;
    }
    __result_obj__131 = come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
    (path2_224 = come_decrement_ref_count(path2_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__131;
}

char* xextname(char* path){
void* __right_value149 = (void*)0;
char* __result_obj__132;
char* p_226;
void* __right_value150 = (void*)0;
char* __result_obj__133;
void* __right_value151 = (void*)0;
char* __result_obj__134;
void* __right_value152 = (void*)0;
char* __result_obj__135;
    if(    path==((void*)0)) {
        __result_obj__132 = come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__132;
    }
    p_226=path+strlen(path);
    while(p_226>=path) {
        if(        *p_226==46) {
            break;
        }
        else {
            p_226--;
        }
    }
    if(    p_226<path) {
        __result_obj__133 = come_increment_ref_count(((char*)(__right_value150=__builtin_string(path))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__133;
    }
    else {
        __result_obj__134 = come_increment_ref_count(((char*)(__right_value151=__builtin_string(p_226+1))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__134;
    }
    __result_obj__135 = come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__135;
}

char* bool_to_string(_Bool self){
void* __right_value153 = (void*)0;
char* __result_obj__136;
void* __right_value154 = (void*)0;
char* __result_obj__137;
    if(    self) {
        __result_obj__136 = come_increment_ref_count(((char*)(__right_value153=__builtin_string("true"))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__136;
    }
    else {
        __result_obj__137 = come_increment_ref_count(((char*)(__right_value154=__builtin_string("false"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__137;
    }
}

char* char_to_string(char self){
void* __right_value155 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = come_increment_ref_count(((char*)(__right_value155=xsprintf("%c",self))));
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__138;
}

char* short_to_string(short self){
void* __right_value156 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = come_increment_ref_count(((char*)(__right_value156=xsprintf("%d",self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__139;
}

char* int_to_string(int self){
void* __right_value157 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = come_increment_ref_count(((char*)(__right_value157=xsprintf("%d",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__140;
}

char* long_to_string(long self){
void* __right_value158 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = come_increment_ref_count(((char*)(__right_value158=xsprintf("%ld",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__141;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value159 = (void*)0;
char* __result_obj__142;
    __result_obj__142 = come_increment_ref_count(((char*)(__right_value159=xsprintf("%ld",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__142;
}

char* float_to_string(float self){
void* __right_value160 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = come_increment_ref_count(((char*)(__right_value160=xsprintf("%f",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__143;
}

char* double_to_string(double self){
void* __right_value161 = (void*)0;
char* __result_obj__144;
    __result_obj__144 = come_increment_ref_count(((char*)(__right_value161=xsprintf("%lf",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__144;
}

char* string_to_string(char* self){
void* __right_value162 = (void*)0;
char* __result_obj__145;
void* __right_value163 = (void*)0;
char* __result_obj__146;
    if(    self==((void*)0)) {
        __result_obj__145 = come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__145;
    }
    __result_obj__146 = come_increment_ref_count(((char*)(__right_value163=__builtin_string(self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__146;
}

char* charp_to_string(char* self){
void* __right_value164 = (void*)0;
char* __result_obj__147;
void* __right_value165 = (void*)0;
char* __result_obj__148;
    if(    self==((void*)0)) {
        __result_obj__147 = come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__147;
    }
    __result_obj__148 = come_increment_ref_count(((char*)(__right_value165=__builtin_string(self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__148;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct _IO_FILE* f){
void* __right_value166 = (void*)0;
char* __result_obj__149;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct buffer* buf_227;
int size_229;
void* __right_value169 = (void*)0;
char* __result_obj__150;
    if(    f==((void*)0)) {
        __result_obj__149 = come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__149;
    }
    buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4615, "struct buffer*"))));
    while(1) {
        char buf2_228[1024];
        memset(&buf2_228, 0, sizeof(char)        *(1024)        );
        size_229=fread(buf2_228,1,1024,f);
        buffer_append(buf_227,buf2_228,size_229);
        if(        size_229<1024) {
            break;
        }
    }
    __result_obj__150 = come_increment_ref_count(((char*)(__right_value169=buffer_to_string(buf_227))));
    /*c*/ come_call_finalizer3(buf_227,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__150;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_230;
    if(    f==((void*)0)) {
        return -1;
    }
    result_230=fclose(f);
    if(    result_230<0) {
        return result_230;
    }
    return result_230;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
struct _IO_FILE* __result_obj__151;
va_list args_232;
int result_233;
struct _IO_FILE* __result_obj__152;
struct _IO_FILE* __result_obj__153;
memset(&args_232, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result_obj__151 = f;
        return __result_obj__151;
    }
    char msg2_231[1024*2*2*2];
    memset(&msg2_231, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_232,msg);
    vsnprintf(msg2_231,1024*2*2*2,msg,args_232);
    __builtin_va_end(args_232);
    result_233=fprintf(f,"%s",msg2_231);
    if(    result_233<0) {
        __result_obj__152 = f;
        /*c*/ come_call_finalizer3((&args_232),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__152;
    }
    __result_obj__153 = f;
    /*c*/ come_call_finalizer3((&args_232),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__153;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_234;
int result_235;
int result2_236;
f_234 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_234=fopen(file_name,"a");
    }
    else {
        f_234=fopen(file_name,"w");
    }
    if(    f_234==((void*)0)) {
        return -1;
    }
    result_235=fwrite(self,strlen(self),1,f_234);
    if(    result_235<0) {
        return result_235;
    }
    result2_236=fclose(f_234);
    if(    result2_236<0) {
        return result2_236;
    }
    return result_235;
}

char* charp_read(char* file_name){
void* __right_value170 = (void*)0;
char* __result_obj__154;
struct _IO_FILE* f_237;
void* __right_value171 = (void*)0;
char* __result_obj__155;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct buffer* buf_238;
int size_240;
void* __right_value174 = (void*)0;
char* result_241;
int result2_242;
void* __right_value175 = (void*)0;
char* __result_obj__156;
char* __result_obj__157;
    if(    file_name==((void*)0)) {
        __result_obj__154 = come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__154;
    }
    f_237=fopen(file_name,"r");
    if(    f_237==((void*)0)) {
        __result_obj__155 = come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__155;
    }
    buf_238=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4723, "struct buffer*"))));
    while(1) {
        char buf2_239[1024];
        memset(&buf2_239, 0, sizeof(char)        *(1024)        );
        size_240=fread(buf2_239,1,1024,f_237);
        buffer_append(buf_238,buf2_239,size_240);
        if(        size_240<1024) {
            break;
        }
    }
    result_241=(char*)come_increment_ref_count(buffer_to_string(buf_238));
    result2_242=fclose(f_237);
    if(    result2_242<0) {
        __result_obj__156 = come_increment_ref_count(((char*)(__right_value175=__builtin_string(""))));
        /*c*/ come_call_finalizer3(buf_238,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__156;
    }
    __result_obj__157 = come_increment_ref_count(result_241);
    /*c*/ come_call_finalizer3(buf_238,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__157;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE* f){
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct list$1char$ph* result_243;
struct list$1char$ph* __result_obj__158;
void* __right_value178 = (void*)0;
struct list$1char$ph* __result_obj__159;
    result_243=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 4750, "struct list$1char$ph*"))));
    if(    f==((void*)0)) {
        __result_obj__158 = come_increment_ref_count(result_243);
        /*c*/ come_call_finalizer3(result_243,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__158,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__158;
    }
    while(1) {
        char buf_244[1024];
        memset(&buf_244, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_244,1024,f)==((void*)0)) {
            break;
        }
        list$1char$ph_push_back(result_243,(char*)come_increment_ref_count(__builtin_string(buf_244)));
    }
    __result_obj__159 = come_increment_ref_count(result_243);
    /*c*/ come_call_finalizer3(result_243,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__159,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__159;
}

char* charp_puts(char* self){
void* __right_value179 = (void*)0;
char* __result_obj__160;
void* __right_value180 = (void*)0;
char* __result_obj__161;
    if(    self==((void*)0)) {
        __result_obj__160 = come_increment_ref_count(((char*)(__right_value179=__builtin_string(""))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__160;
    }
    puts(self);
    __result_obj__161 = come_increment_ref_count(((char*)(__right_value180=__builtin_string(self))));
    (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__161;
}

char* charp_print(char* self){
void* __right_value181 = (void*)0;
char* __result_obj__162;
void* __right_value182 = (void*)0;
char* __result_obj__163;
    if(    self==((void*)0)) {
        __result_obj__162 = come_increment_ref_count(((char*)(__right_value181=__builtin_string(""))));
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__162;
    }
    printf("%s",self);
    __result_obj__163 = come_increment_ref_count(((char*)(__right_value182=__builtin_string(self))));
    (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__163;
}

char* charp_printf(char* self, ...){
void* __right_value183 = (void*)0;
char* __result_obj__164;
char* msg2_245;
va_list args_246;
void* __right_value184 = (void*)0;
char* __result_obj__165;
msg2_245 = (void*)0;
memset(&args_246, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result_obj__164 = come_increment_ref_count(((char*)(__right_value183=__builtin_string(""))));
        (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__164;
    }
    __builtin_va_start(args_246,self);
    vasprintf(&msg2_245,self,args_246);
    __builtin_va_end(args_246);
    printf("%s",msg2_245);
    free(msg2_245);
    __result_obj__165 = come_increment_ref_count(((char*)(__right_value184=__builtin_string(self))));
    /*c*/ come_call_finalizer3((&args_246),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__165;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_tp_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
    return left!=right;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
    return value;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
unsigned int result_247;
unsigned int* p_248;
    result_247=0;
    p_248=value;
    while(*p_248) {
        result_247+=*p_248;
        p_248++;
    }
    return result_247;
}

char* wchar_t_to_string(unsigned int wc){
void* __right_value185 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = come_increment_ref_count(((char*)(__right_value185=xsprintf("%ls",wc))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__166;
}

int main(int argc, char** argv){
int __result_obj__167;
    come_heap_init(0, 0, 0);
    setlocale(6,"");
    __result_obj__167 = come_main(argc,argv);
    /*c*/ come_call_finalizer3(gExceptionRightValueObjects,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_heap_final();
    return __result_obj__167;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_249;
struct list_item$1sRightValueObject$ph* prev_it_250;
    it_249=self->head;
    while(it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        /*c*/ come_call_finalizer3(prev_it_250,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sType$ph* it_251;
struct list_item$1sType$ph* prev_it_252;
    it_251=self->head;
    while(it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        /*c*/ come_call_finalizer3(prev_it_252,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_253;
struct list_item$1sNode$ph* prev_it_254;
    it_253=self->head;
    while(it_253!=((void*)0)) {
        prev_it_254=it_253;
        it_253=it_253->next;
        /*c*/ come_call_finalizer3(prev_it_254,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
struct CVALUE* __result_obj__168;
    __result_obj__168 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__168,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__168;
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

struct sModule* sModule_initialize(struct sModule* self){
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct buffer* __dec_obj16;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct buffer* __dec_obj17;
char* __dec_obj18;
char* __dec_obj19;
void* __right_value190 = (void*)0;
void* __right_value196 = (void*)0;
struct map$2char$phchar$ph* __dec_obj21;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct map$2char$phchar$ph* __dec_obj22;
struct sModule* __result_obj__171;
    __dec_obj16=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 16, "struct buffer*"))));
    /*b*/ come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj17=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 17, "struct buffer*"))));
    /*b*/ come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj18=self->mLastCode,
    self->mLastCode=((void*)0);
    __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj19=self->mLastCode2,
    self->mLastCode2=((void*)0);
    __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj21=self->mHeader,
    self->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "01main.c", 20, "struct map$2char$phchar$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj21,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj22=self->mHeaderStructs,
    self->mHeaderStructs=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "01main.c", 21, "struct map$2char$phchar$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj22,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__171 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,sModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
int i_255;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1char$ph* __dec_obj20;
struct map$2char$phchar$ph* __result_obj__170;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value191=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2042, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value192=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2043, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value193=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2044, "_Bool*"))));
    for(    i_255=0;    i_255<128;    i_255++    ){
        self->item_existance[i_255]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj20=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2054, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj20,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__170 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__170,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__169;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__169 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_256;
struct list_item$1char$ph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        /*c*/ come_call_finalizer3(prev_it_257,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_258;
int i_259;
    for(    i_258=0;    i_258<self->size;    i_258++    ){
        if(        self->item_existance[i_258]) {
            if(            1) {
                (self->items[i_258] = come_decrement_ref_count(self->items[i_258], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_259=0;    i_259<self->size;    i_259++    ){
        if(        self->item_existance[i_259]) {
            if(            1) {
                (self->keys[i_259] = come_decrement_ref_count(self->keys[i_259], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_260;
int i_261;
    for(    i_260=0;    i_260<self->size;    i_260++    ){
        if(        self->item_existance[i_260]) {
            if(            1) {
                (self->items[i_260] = come_decrement_ref_count(self->items[i_260], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_261=0;    i_261<self->size;    i_261++    ){
        if(        self->item_existance[i_261]) {
            if(            1) {
                (self->keys[i_261] = come_decrement_ref_count(self->keys[i_261], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeader,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeaderStructs,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __right_value199 = (void*)0;
void* __right_value205 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj24;
struct sVarTable* __result_obj__173;
    __dec_obj24=self->mVars,
    self->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "01main.c", 28, "struct map$2char$phsVar$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj24,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    __result_obj__173 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
int i_262;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct list$1char$ph* __dec_obj23;
struct map$2char$phsVar$ph* __result_obj__172;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value200=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2042, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value201=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2043, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value202=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2044, "_Bool*"))));
    for(    i_262=0;    i_262<128;    i_262++    ){
        self->item_existance[i_262]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj23=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2054, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__172 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__172,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_263;
int i_264;
    for(    i_263=0;    i_263<self->size;    i_263++    ){
        if(        self->item_existance[i_263]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_263],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_264=0;    i_264<self->size;    i_264++    ){
        if(        self->item_existance[i_264]) {
            if(            1) {
                (self->keys[i_264] = come_decrement_ref_count(self->keys[i_264], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_265;
int i_266;
    for(    i_265=0;    i_265<self->size;    i_265++    ){
        if(        self->item_existance[i_265]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_265],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_266=0;    i_266<self->size;    i_266++    ){
        if(        self->item_existance[i_266]) {
            if(            1) {
                (self->keys[i_266] = come_decrement_ref_count(self->keys[i_266], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

void sVarTable_finalize(struct sVarTable* self){
    /*c*/ come_call_finalizer3(self->mVars,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
int pointer_num_267;
char* p_268;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
char* name2_269;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sClass* klass_270;
void* __right_value210 = (void*)0;
struct sClass* generics_class_276;
void* __right_value211 = (void*)0;
struct sClass* klass2_277;
void* __right_value212 = (void*)0;
char* __dec_obj25;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __dec_obj26;
struct sType* __dec_obj27;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1sType$ph* __dec_obj28;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1sNode$ph* __dec_obj29;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct list$1sType$ph* __dec_obj30;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1char$ph* __dec_obj31;
struct sType* __dec_obj32;
struct sNode* __dec_obj33;
void* __right_value229 = (void*)0;
char* __dec_obj34;
struct sType* __result_obj__201;
    pointer_num_267=0;
    p_268=name;
    while(*p_268) {
        if(        xisalpha(*p_268)||*p_268==95) {
            p_268++;
        }
        else {
            break;
        }
    }
    while(*p_268==42) {
        pointer_num_267++;
        p_268++;
    }
    name2_269=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value206=__builtin_string(name))),0,-pointer_num_267-1));
    (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    klass_270=((struct sClass*)(__right_value209=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value208=__builtin_string(name2_269))))));
    (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value209,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_class_276=((struct sClass*)(__right_value210=map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,name2_269)));
    /*c*/ come_call_finalizer3(__right_value210,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass_270==((void*)0)&&generics_class_276==((void*)0)) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_269);
    }
    if(    klass_270) {
        self->mClass=klass_270;
    }
    else {
        klass2_277=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 70, "struct sClass*"));
        __dec_obj25=klass2_277->mName,
        klass2_277->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2_277));
        self->mClass=((struct sClass*)(__right_value220=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value219=__builtin_string(name))))));
        (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value220,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(klass2_277,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __dec_obj26=self->mNoSolvedGenericsType,
    self->mNoSolvedGenericsType=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj27=self->mOriginalLoadVarType,
    self->mOriginalLoadVarType=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj28=self->mGenericsTypes,
    self->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "01main.c", 80, "struct list$1sType$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj28,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj29=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "01main.c", 81, "struct list$1sNode$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj29,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj30=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "01main.c", 82, "struct list$1sType$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj30,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj31=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "01main.c", 83, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj31,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj32=self->mResultType,
    self->mResultType=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num_267;
    __dec_obj33=self->mSizeNum,
    self->mSizeNum=((void*)0);
    (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj34=self->mOriginalTypeName,
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->mOriginalPointerNum=0;
    __result_obj__201 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (name2_269 = come_decrement_ref_count(name2_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__201,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_271;
unsigned int hash_272;
unsigned int it_273;
struct sClass* __result_obj__174;
struct sClass* __result_obj__175;
struct sClass* __result_obj__176;
struct sClass* __result_obj__177;
default_value_271 = (void*)0;
    memset(&default_value_271,0,sizeof(struct sClass*));
    hash_272=string_get_hash_key(((char*)key))%self->size;
    it_273=hash_272;
    while((_Bool)1) {
        if(        self->item_existance[it_273]) {
            if(            string_equals(self->keys[it_273],key)) {
                __result_obj__174 = come_increment_ref_count(self->items[it_273]);
                /*c*/ come_call_finalizer3(default_value_271,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__174,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__174;
            }
            it_273++;
            if(            it_273>=self->size) {
                it_273=0;
            }
            else if(            it_273==hash_272) {
                __result_obj__175 = come_increment_ref_count(default_value_271);
                /*c*/ come_call_finalizer3(default_value_271,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__175,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__175;
            }
        }
        else {
            __result_obj__176 = come_increment_ref_count(default_value_271);
            /*c*/ come_call_finalizer3(default_value_271,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__176,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__176;
        }
    }
    __result_obj__177 = come_increment_ref_count(default_value_271);
    /*c*/ come_call_finalizer3(default_value_271,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_274;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*c*/ come_call_finalizer3(prev_it_275,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_295;
unsigned int it_296;
_Bool same_key_exist_313;
char* it2_316;
struct map$2char$phsClass$ph* __result_obj__198;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_295=string_get_hash_key(((char*)key))%self->size;
    it_296=hash_295;
    while((_Bool)1) {
        if(        self->item_existance[it_296]) {
            if(            string_equals(self->keys[it_296],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_296]);
                    (self->keys[it_296] = come_decrement_ref_count(self->keys[it_296], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_296]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_296]);
                    self->keys[it_296]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_296],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_296]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_296]=item;
                }
                break;
            }
            it_296++;
            if(            it_296>=self->size) {
                it_296=0;
            }
            else if(            it_296==hash_295) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_296]=(_Bool)1;
            if(            1) {
                self->keys[it_296]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_296]=key;
            }
            if(            1) {
                self->items[it_296]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_296]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_313=(_Bool)0;
    for(    it2_316=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_316=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_316,key)) {
            same_key_exist_313=(_Bool)1;
        }
    }
    if(    !same_key_exist_313) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__198 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_278;
void* __right_value213 = (void*)0;
char** keys_279;
void* __right_value214 = (void*)0;
struct sClass** items_280;
void* __right_value215 = (void*)0;
_Bool* item_existance_281;
int len_282;
char* it_285;
struct sClass* default_value_288;
void* __right_value216 = (void*)0;
struct sClass* it2_289;
unsigned int hash_292;
int n_293;
struct sClass* default_value_294;
void* __right_value217 = (void*)0;
default_value_288 = (void*)0;
default_value_294 = (void*)0;
    size_278=self->size*10;
    keys_279=(char**)come_increment_ref_count(((char**)(__right_value213=(char**)come_calloc(1, sizeof(char*)*(1*(size_278)), "./comelang.h", 2281, "char**"))));
    items_280=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value214=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_278)), "./comelang.h", 2282, "struct sClass**"))));
    item_existance_281=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value215=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_278)), "./comelang.h", 2283, "_Bool*"))));
    len_282=0;
    for(    it_285=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_285=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_288,0,sizeof(struct sClass*));
        it2_289=((struct sClass*)(__right_value216=map$2char$phsClass$ph_at(self,it_285,(struct sClass*)come_increment_ref_count(default_value_288))));
        /*c*/ come_call_finalizer3(__right_value216,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_292=string_get_hash_key(((char*)it_285))%size_278;
        n_293=hash_292;
        while((_Bool)1) {
            if(            item_existance_281[n_293]) {
                n_293++;
                if(                n_293>=size_278) {
                    n_293=0;
                }
                else if(                n_293==hash_292) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_281[n_293]=(_Bool)1;
                keys_279[n_293]=it_285;
                items_280[n_293]=((struct sClass*)(__right_value217=map$2char$phsClass$ph_at(self,it_285,(struct sClass*)come_increment_ref_count(default_value_294))));
                /*c*/ come_call_finalizer3(__right_value217,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_282++;
                /*c*/ come_call_finalizer3(default_value_294,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_294,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_288,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_279;
    self->items=items_280;
    self->item_existance=item_existance_281;
    self->size=size_278;
    self->len=len_282;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_283;
char* __result_obj__178;
char* __result_obj__179;
char* result_284;
char* __result_obj__180;
result_283 = (void*)0;
result_284 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_283,0,sizeof(char*));
        __result_obj__178 = result_283;
        return __result_obj__178;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__179 = self->key_list->it->item;
        return __result_obj__179;
    }
    memset(&result_284,0,sizeof(char*));
    __result_obj__180 = result_284;
    return __result_obj__180;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_286;
char* __result_obj__181;
char* __result_obj__182;
char* result_287;
char* __result_obj__183;
result_286 = (void*)0;
result_287 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_286,0,sizeof(char*));
        __result_obj__181 = result_286;
        return __result_obj__181;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__182 = self->key_list->it->item;
        return __result_obj__182;
    }
    memset(&result_287,0,sizeof(char*));
    __result_obj__183 = result_287;
    return __result_obj__183;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_290;
unsigned int it_291;
struct sClass* __result_obj__184;
struct sClass* __result_obj__185;
struct sClass* __result_obj__186;
struct sClass* __result_obj__187;
    hash_290=string_get_hash_key(((char*)key))%self->size;
    it_291=hash_290;
    while((_Bool)1) {
        if(        self->item_existance[it_291]) {
            if(            string_equals(self->keys[it_291],key)) {
                __result_obj__184 = come_increment_ref_count(self->items[it_291]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__184,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__184;
            }
            it_291++;
            if(            it_291>=self->size) {
                it_291=0;
            }
            else if(            it_291==hash_290) {
                __result_obj__185 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__185,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__185;
            }
        }
        else {
            __result_obj__186 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__186,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__186;
        }
    }
    __result_obj__187 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_297;
struct list_item$1char$ph* it_298;
struct list$1char$ph* __result_obj__191;
    it2_297=0;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        if(        string_equals(it_298->item,item)) {
            list$1char$ph_delete(self,it2_297,it2_297+1);
            break;
        }
        it2_297++;
        it_298=it_298->next;
    }
    __result_obj__191 = self;
    return __result_obj__191;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_299;
struct list$1char$ph* __result_obj__188;
struct list_item$1char$ph* it_302;
int i_303;
struct list_item$1char$ph* prev_it_304;
struct list_item$1char$ph* it_305;
int i_306;
struct list_item$1char$ph* prev_it_307;
struct list_item$1char$ph* it_308;
struct list_item$1char$ph* head_prev_it_309;
struct list_item$1char$ph* tail_it_310;
int i_311;
struct list_item$1char$ph* prev_it_312;
struct list$1char$ph* __result_obj__190;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_299=tail;
        tail=head;
        head=tmp_299;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__188 = self;
        return __result_obj__188;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_302=self->head;
        i_303=0;
        while(it_302!=((void*)0)) {
            if(            i_303<tail) {
                prev_it_304=it_302;
                it_302=it_302->next;
                i_303++;
                /*c*/ come_call_finalizer3(prev_it_304,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_303==tail) {
                self->head=it_302;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_302=it_302->next;
                i_303++;
            }
        }
    }
    else if(    tail==self->len) {
        it_305=self->head;
        i_306=0;
        while(it_305!=((void*)0)) {
            if(            i_306==head) {
                self->tail=it_305->prev;
                self->tail->next=((void*)0);
            }
            if(            i_306>=head) {
                prev_it_307=it_305;
                it_305=it_305->next;
                i_306++;
                /*c*/ come_call_finalizer3(prev_it_307,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_305=it_305->next;
                i_306++;
            }
        }
    }
    else {
        it_308=self->head;
        head_prev_it_309=((void*)0);
        tail_it_310=((void*)0);
        i_311=0;
        while(it_308!=((void*)0)) {
            if(            i_311==head) {
                head_prev_it_309=it_308->prev;
            }
            if(            i_311==tail) {
                tail_it_310=it_308;
            }
            if(            i_311>=head&&i_311<tail) {
                prev_it_312=it_308;
                it_308=it_308->next;
                i_311++;
                /*c*/ come_call_finalizer3(prev_it_312,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_308=it_308->next;
                i_311++;
            }
        }
        if(        head_prev_it_309!=((void*)0)) {
            head_prev_it_309->next=tail_it_310;
        }
        if(        tail_it_310!=((void*)0)) {
            tail_it_310->prev=head_prev_it_309;
        }
    }
    __result_obj__190 = self;
    return __result_obj__190;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_300;
struct list_item$1char$ph* prev_it_301;
struct list$1char$ph* __result_obj__189;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        /*c*/ come_call_finalizer3(prev_it_301,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__189 = self;
    return __result_obj__189;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_314;
char* __result_obj__192;
char* __result_obj__193;
char* result_315;
char* __result_obj__194;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(char*));
        __result_obj__192 = result_314;
        return __result_obj__192;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__193 = self->it->item;
        return __result_obj__193;
    }
    memset(&result_315,0,sizeof(char*));
    __result_obj__194 = result_315;
    return __result_obj__194;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_317;
char* __result_obj__195;
char* __result_obj__196;
char* result_318;
char* __result_obj__197;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_317,0,sizeof(char*));
        __result_obj__195 = result_317;
        return __result_obj__195;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__196 = self->it->item;
        return __result_obj__196;
    }
    memset(&result_318,0,sizeof(char*));
    __result_obj__197 = result_318;
    return __result_obj__197;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__199;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__199 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_319;
struct list_item$1sType$ph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        /*c*/ come_call_finalizer3(prev_it_320,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__200;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__200 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__200,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_321;
struct list_item$1sNode$ph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        /*c*/ come_call_finalizer3(prev_it_322,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __right_value230 = (void*)0;
char* __dec_obj35;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj36;
struct sClass* __result_obj__203;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj35=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj36=self->mFields,
    self->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "01main.c", 123, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj36,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__203 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__203,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__202;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__202 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__202,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_323;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_324;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        /*c*/ come_call_finalizer3(prev_it_324,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __right_value233 = (void*)0;
char* __dec_obj37;
void* __right_value234 = (void*)0;
char* __dec_obj38;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1char$ph* __dec_obj39;
void* __right_value237 = (void*)0;
char* __dec_obj40;
struct sClassModule* __result_obj__204;
    __dec_obj37=self->mName,
    self->mName=(char*)come_increment_ref_count((char*)come_memdup(name, "01main.c", 130, "char*"));
    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj38=self->mText,
    self->mText=(char*)come_increment_ref_count((char*)come_memdup(text, "01main.c", 131, "char*"));
    __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj39=self->mParams,
    self->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "01main.c", 132, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj39,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj40=self->mSName,
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->mSLine=sline;
    __result_obj__204 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__204,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
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

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute){
char* __dec_obj41;
struct sType* __dec_obj42;
struct list$1sType$ph* __dec_obj43;
struct list$1char$ph* __dec_obj44;
struct list$1char$ph* __dec_obj45;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* __dec_obj46;
struct list$1sType$ph* o2_saved_325;
struct sType* it_328;
void* __right_value282 = (void*)0;
struct list$1char$ph* o2_saved_351;
char* it_352;
void* __right_value283 = (void*)0;
struct sType* __dec_obj74;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct buffer* __dec_obj75;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct buffer* __dec_obj76;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct buffer* __dec_obj77;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct buffer* __dec_obj78;
struct sBlock* __dec_obj79;
char* __dec_obj80;
char* __dec_obj81;
struct sFun* __result_obj__225;
    __dec_obj41=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj42=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj43=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    /*b*/ come_call_finalizer3(__dec_obj43,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj44=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    /*b*/ come_call_finalizer3(__dec_obj44,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj45=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    /*b*/ come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mGenerate=generate_;
    __dec_obj46=self->mLambdaType,
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 153, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_325=(struct list$1sType$ph*)come_increment_ref_count((param_types)),it_328=list$1sType$ph_begin((o2_saved_325));    !list$1sType$ph_end((o2_saved_325));    it_328=list$1sType$ph_next((o2_saved_325))    ){
        list$1sType$ph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_328)));
    }
    /*c*/ come_call_finalizer3(o2_saved_325,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    o2_saved_351=(struct list$1char$ph*)come_increment_ref_count((param_names)),it_352=list$1char$ph_begin((o2_saved_351));    !list$1char$ph_end((o2_saved_351));    it_352=list$1char$ph_next((o2_saved_351))    ){
        list$1char$ph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count((char*)come_memdup(it_352, "01main.c", 160, "char*")));
    }
    /*c*/ come_call_finalizer3(o2_saved_351,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj74=self->mLambdaType->mResultType,
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj75=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 166, "struct buffer*"))));
    /*b*/ come_call_finalizer3(__dec_obj75,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj76=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 167, "struct buffer*"))));
    /*b*/ come_call_finalizer3(__dec_obj76,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj77=self->mSourceHead2,
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 168, "struct buffer*"))));
    /*b*/ come_call_finalizer3(__dec_obj77,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj78=self->mSourceDefer,
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 169, "struct buffer*"))));
    /*b*/ come_call_finalizer3(__dec_obj78,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj79=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    /*b*/ come_call_finalizer3(__dec_obj79,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    (result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj80=self->mAttribute,
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj81=self->mFunAttribute,
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__225 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__225,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_326;
struct sType* __result_obj__205;
struct sType* __result_obj__206;
struct sType* result_327;
struct sType* __result_obj__207;
result_326 = (void*)0;
result_327 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_326,0,sizeof(struct sType*));
        __result_obj__205 = result_326;
        return __result_obj__205;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__206 = self->it->item;
        return __result_obj__206;
    }
    memset(&result_327,0,sizeof(struct sType*));
    __result_obj__207 = result_327;
    return __result_obj__207;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_329;
struct sType* __result_obj__208;
struct sType* __result_obj__209;
struct sType* result_330;
struct sType* __result_obj__210;
result_329 = (void*)0;
result_330 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_329,0,sizeof(struct sType*));
        __result_obj__208 = result_329;
        return __result_obj__208;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__209 = self->it->item;
        return __result_obj__209;
    }
    memset(&result_330,0,sizeof(struct sType*));
    __result_obj__210 = result_330;
    return __result_obj__210;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value241 = (void*)0;
struct list_item$1sType$ph* litem_331;
struct sType* __dec_obj47;
void* __right_value242 = (void*)0;
struct list_item$1sType$ph* litem_332;
struct sType* __dec_obj48;
void* __right_value243 = (void*)0;
struct list_item$1sType$ph* litem_333;
struct sType* __dec_obj49;
struct list$1sType$ph* __result_obj__211;
    if(    self->len==0) {
        litem_331=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value241=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1227, "struct list_item$1sType$ph*"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj47=litem_331->item,
        litem_331->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value242=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1237, "struct list_item$1sType$ph*"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj48=litem_332->item,
        litem_332->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value243=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1247, "struct list_item$1sType$ph*"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj49=litem_333->item,
        litem_333->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result_obj__211 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__212;
void* __right_value244 = (void*)0;
struct sType* result_334;
void* __right_value245 = (void*)0;
struct sType* __dec_obj50;
void* __right_value246 = (void*)0;
struct sType* __dec_obj51;
void* __right_value254 = (void*)0;
struct list$1sType$ph* __dec_obj55;
void* __right_value255 = (void*)0;
struct sType* __dec_obj56;
void* __right_value256 = (void*)0;
struct sType* __dec_obj57;
void* __right_value258 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value259 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value260 = (void*)0;
char* __dec_obj60;
void* __right_value261 = (void*)0;
char* __dec_obj61;
void* __right_value262 = (void*)0;
char* __dec_obj62;
void* __right_value270 = (void*)0;
struct list$1sNode$ph* __dec_obj66;
void* __right_value271 = (void*)0;
char* __dec_obj67;
void* __right_value272 = (void*)0;
struct list$1sType$ph* __dec_obj68;
void* __right_value280 = (void*)0;
struct list$1char$ph* __dec_obj72;
void* __right_value281 = (void*)0;
struct sType* __dec_obj73;
struct sType* __result_obj__224;
    if(    self==(void*)0) {
        __result_obj__212 = (void*)0;
        return __result_obj__212;
    }
    result_334=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_334->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj50=result_334->mOriginalLoadVarType,
        result_334->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj51=result_334->mChannelType,
        result_334->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj55=result_334->mGenericsTypes,
        result_334->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj55,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_334->mNoSolvedGenericsType,
        result_334->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_334->mAnyOriginalType,
        result_334->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj58=result_334->mSizeNum,
        result_334->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_334->mAlignas,
        result_334->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj60=result_334->mTupleName,
        result_334->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj61=result_334->mAttribute,
        result_334->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_334->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_334->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_334->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_334->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_334->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_334->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_334->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_334->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_334->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_334->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_334->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_334->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_334->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_334->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_334->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_334->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_334->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_334->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_334->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_334->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_334->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_334->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_334->mAsmName,
        result_334->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_334->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_334->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=result_334->mArrayNum,
        result_334->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj66,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_334->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj67=result_334->mOriginalTypeName,
        result_334->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_334->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_334->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_334->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_334->mParamTypes,
        result_334->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj68,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_334->mParamNames,
        result_334->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj72,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_334->mResultType,
        result_334->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_334->mVarArgs=self->mVarArgs;
    }
    __result_obj__224 = result_334;
    /*c*/ come_call_finalizer3(result_334,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__224;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__213;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct list$1sType$ph* result_335;
struct list_item$1sType$ph* it_336;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1sType$ph* __result_obj__215;
    if(    self==((void*)0)) {
        __result_obj__213 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__213,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__213;
    }
    result_335=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_336=self->head;
    while(it_336!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_335,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_336->item)));
        }
        else {
            list$1sType$ph_add(result_335,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_336->item)));
        }
        it_336=it_336->next;
    }
    __result_obj__215 = come_increment_ref_count(result_335);
    /*c*/ come_call_finalizer3(result_335,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value249 = (void*)0;
struct list_item$1sType$ph* litem_337;
struct sType* __dec_obj52;
void* __right_value250 = (void*)0;
struct list_item$1sType$ph* litem_338;
struct sType* __dec_obj53;
void* __right_value251 = (void*)0;
struct list_item$1sType$ph* litem_339;
struct sType* __dec_obj54;
struct list$1sType$ph* __result_obj__214;
    if(    self->len==0) {
        litem_337=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value249=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj52=litem_337->item,
        litem_337->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value250=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj53=litem_338->item,
        litem_338->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value251=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj54=litem_339->item,
        litem_339->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result_obj__214 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__216;
void* __right_value257 = (void*)0;
struct sNode* result_340;
struct sNode* __result_obj__217;
    if(    self==(void*)0) {
        __result_obj__216 = come_increment_ref_count((void*)0);
        ((__result_obj__216) ? __result_obj__216 = come_decrement_ref_count(__result_obj__216, ((struct sNode*)__result_obj__216)->finalize, ((struct sNode*)__result_obj__216)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__216;
    }
    result_340=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_340->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_340->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_340->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_340->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_340->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_340->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_340->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_340->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_340->kind=self->kind;
    }
    __result_obj__217 = come_increment_ref_count(result_340);
    ((result_340) ? result_340 = come_decrement_ref_count(result_340, ((struct sNode*)result_340)->finalize, ((struct sNode*)result_340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__217) ? __result_obj__217 = come_decrement_ref_count(__result_obj__217, ((struct sNode*)__result_obj__217)->finalize, ((struct sNode*)__result_obj__217)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__217;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__218;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1sNode$ph* result_341;
struct list_item$1sNode$ph* it_342;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNode$ph* __result_obj__220;
    if(    self==((void*)0)) {
        __result_obj__218 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__218,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__218;
    }
    result_341=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_342=self->head;
    while(it_342!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_341,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_342->item)));
        }
        else {
            list$1sNode$ph_add(result_341,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_342->item)));
        }
        it_342=it_342->next;
    }
    __result_obj__220 = come_increment_ref_count(result_341);
    /*c*/ come_call_finalizer3(result_341,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__220,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value265 = (void*)0;
struct list_item$1sNode$ph* litem_343;
struct sNode* __dec_obj63;
void* __right_value266 = (void*)0;
struct list_item$1sNode$ph* litem_344;
struct sNode* __dec_obj64;
void* __right_value267 = (void*)0;
struct list_item$1sNode$ph* litem_345;
struct sNode* __dec_obj65;
struct list$1sNode$ph* __result_obj__219;
    if(    self->len==0) {
        litem_343=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value265=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_343->prev=((void*)0);
        litem_343->next=((void*)0);
        __dec_obj63=litem_343->item,
        litem_343->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_343;
        self->head=litem_343;
    }
    else if(    self->len==1) {
        litem_344=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value266=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_344->prev=self->head;
        litem_344->next=((void*)0);
        __dec_obj64=litem_344->item,
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_344;
        self->head->next=litem_344;
    }
    else {
        litem_345=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value267=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_345->prev=self->tail;
        litem_345->next=((void*)0);
        __dec_obj65=litem_345->item,
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_345;
        self->tail=litem_345;
    }
    self->len++;
    __result_obj__219 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__219;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__221;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1char$ph* result_346;
struct list_item$1char$ph* it_347;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1char$ph* __result_obj__223;
    if(    self==((void*)0)) {
        __result_obj__221 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__221,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__221;
    }
    result_346=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_347=self->head;
    while(it_347!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_346,(char*)come_increment_ref_count((char*)come_memdup(it_347->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_346,(char*)come_increment_ref_count((char*)come_memdup(it_347->item, "./comelang.h", 1146, "char*")));
        }
        it_347=it_347->next;
    }
    __result_obj__223 = come_increment_ref_count(result_346);
    /*c*/ come_call_finalizer3(result_346,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value275 = (void*)0;
struct list_item$1char$ph* litem_348;
char* __dec_obj69;
void* __right_value276 = (void*)0;
struct list_item$1char$ph* litem_349;
char* __dec_obj70;
void* __right_value277 = (void*)0;
struct list_item$1char$ph* litem_350;
char* __dec_obj71;
struct list$1char$ph* __result_obj__222;
    if(    self->len==0) {
        litem_348=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value275=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_348->prev=((void*)0);
        litem_348->next=((void*)0);
        __dec_obj69=litem_348->item,
        litem_348->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_348;
        self->head=litem_348;
    }
    else if(    self->len==1) {
        litem_349=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value276=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_349->prev=self->head;
        litem_349->next=((void*)0);
        __dec_obj70=litem_349->item,
        litem_349->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_349;
        self->head->next=litem_349;
    }
    else {
        litem_350=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value277=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_350->prev=self->tail;
        litem_350->next=((void*)0);
        __dec_obj71=litem_350->item,
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_350;
        self->tail=litem_350;
    }
    self->len++;
    __result_obj__222 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__222;
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __right_value292 = (void*)0;
char* __dec_obj82;
struct sNodeBase* __result_obj__226;
    self->sline=info->sline;
    __dec_obj82=self->sname,
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->sline_real=info->sline_real;
    __result_obj__226 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNodeBase_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sNodeBase_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
    return self->sline;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info){
    return self->sline_real;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
    return (_Bool)0;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __right_value293 = (void*)0;
char* __result_obj__227;
    __result_obj__227 = come_increment_ref_count(((char*)(__right_value293=__builtin_string(self->sname))));
    (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__227;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __right_value294 = (void*)0;
struct list$1char$ph* __dec_obj83;
void* __right_value295 = (void*)0;
struct list$1char$ph* __dec_obj84;
char* __dec_obj85;
struct sType* __dec_obj86;
struct list$1sType$ph* __dec_obj87;
struct list$1char$ph* __dec_obj88;
struct list$1char$ph* __dec_obj89;
char* __dec_obj90;
void* __right_value296 = (void*)0;
char* __dec_obj91;
struct sGenericsFun* __result_obj__228;
    __dec_obj83=self->mGenericsTypeNames,
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_type_names));
    /*b*/ come_call_finalizer3(__dec_obj83,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj84=self->mMethodGenericsTypeNames,
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, method_generics_type_names));
    /*b*/ come_call_finalizer3(__dec_obj84,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj85=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj86=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj87=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    /*b*/ come_call_finalizer3(__dec_obj87,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj88=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    /*b*/ come_call_finalizer3(__dec_obj88,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj89=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    /*b*/ come_call_finalizer3(__dec_obj89,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj90=self->mBlock,
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->mSLine=info->sline;
    __dec_obj91=self->mGenericsSName,
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result_obj__228 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(impl_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__228,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
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

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1sNode$ph* __dec_obj92;
struct sBlock* __result_obj__229;
    __dec_obj92=self->mNodes,
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "01main.c", 235, "struct list$1sNode$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj92,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__229 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__229,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_353;
char* p3_354;
int i_355;
    terminated_353=(_Bool)0;
    p3_354=p;
    for(    i_355=0;    i_355<strlen(p2);    i_355++    ){
        if(        *p3_354==0) {
            terminated_353=(_Bool)1;
            break;
        }
        p3_354++;
    }
    return !terminated_353&&memcmp(p,p2,strlen(p2))==0;
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_356;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_356=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_356==59||c_356==32||c_356==9||c_356==10||c_356==10||c_356==40);
}

