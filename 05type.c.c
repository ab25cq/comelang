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
    _Bool mExceptionGenericsType;
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
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
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
int err_msg(struct sInfo* info, char* msg, ...);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self);
static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self);
static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self);
static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self);
static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
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
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1113, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1123, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1133, "struct list_item$1char$*"))));
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
    while(    it_125!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1113, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1123, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1133, "struct list_item$1char$p*"))));
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
    while(    it_131!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1113, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1123, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1133, "struct list_item$1short$*"))));
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
    while(    it_137!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1113, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1123, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1133, "struct list_item$1int$*"))));
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
    while(    it_143!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1113, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1123, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1133, "struct list_item$1long$*"))));
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
    while(    it_149!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1113, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1123, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1133, "struct list_item$1float$*"))));
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
    while(    it_155!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1113, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1123, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1133, "struct list_item$1double$*"))));
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
    while(    it_161!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)) {
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
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value189 = (void*)0;
struct sClass* klass_239;
void* __right_value190 = (void*)0;
struct sType* type_252;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct sClass* generics_class_259;
void* __right_value194 = (void*)0;
_Bool generics_type_name_260;
void* __right_value195 = (void*)0;
_Bool mgenerics_type_name_266;
    klass_239=((struct sClass*)(__right_value189=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    /*c*/ come_call_finalizer3(__right_value189,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type_252=((struct sType*)(__right_value190=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    /*c*/ come_call_finalizer3(__right_value190,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_class_259=((struct sClass*)(__right_value193=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value192=__builtin_string(buf))))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value193,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_type_name_260=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value194=__builtin_string(buf))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    mgenerics_type_name_266=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value195=__builtin_string(buf))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    gComeC) {
        return (type_252&&type_252->mTypedef)||(klass_239&&klass_239->mNumber)||(klass_239&&klass_239->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_259||generics_type_name_260||mgenerics_type_name_266||klass_239||type_252||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_240;
unsigned int hash_241;
unsigned int it_242;
struct sClass* __result_obj__165;
struct sClass* __result_obj__166;
struct sClass* __result_obj__167;
struct sClass* __result_obj__168;
default_value_240 = (void*)0;
    memset(&default_value_240,0,sizeof(struct sClass*));
    hash_241=string_get_hash_key(((char*)key))%self->size;
    it_242=hash_241;
    while(    (_Bool)1) {
        if(        self->item_existance[it_242]) {
            if(            string_equals(self->keys[it_242],key)) {
                __result_obj__165 = (struct sClass*)come_increment_ref_count(self->items[it_242]);
                /*c*/ come_call_finalizer3(default_value_240,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__165,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__165;
            }
            it_242++;
            if(            it_242>=self->size) {
                it_242=0;
            }
            else if(            it_242==hash_241) {
                __result_obj__166 = (struct sClass*)come_increment_ref_count(default_value_240);
                /*c*/ come_call_finalizer3(default_value_240,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__166,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__166;
            }
        }
        else {
            __result_obj__167 = (struct sClass*)come_increment_ref_count(default_value_240);
            /*c*/ come_call_finalizer3(default_value_240,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__167,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__167;
        }
    }
    __result_obj__168 = (struct sClass*)come_increment_ref_count(default_value_240);
    /*c*/ come_call_finalizer3(default_value_240,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__168,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__168;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_243;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_244;
    it_243=self->head;
    while(    it_243!=((void*)0)) {
        prev_it_244=it_243;
        it_243=it_243->next;
        /*c*/ come_call_finalizer3(prev_it_244,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sType$ph* it_245;
struct list_item$1sType$ph* prev_it_246;
    it_245=self->head;
    while(    it_245!=((void*)0)) {
        prev_it_246=it_245;
        it_245=it_245->next;
        /*c*/ come_call_finalizer3(prev_it_246,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_247;
struct list_item$1sNode$ph* prev_it_248;
    it_247=self->head;
    while(    it_247!=((void*)0)) {
        prev_it_248=it_247;
        it_247=it_247->next;
        /*c*/ come_call_finalizer3(prev_it_248,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_249;
unsigned int hash_250;
unsigned int it_251;
struct sClass* __result_obj__169;
struct sClass* __result_obj__170;
struct sClass* __result_obj__171;
struct sClass* __result_obj__172;
default_value_249 = (void*)0;
    memset(&default_value_249,0,sizeof(struct sClass*));
    hash_250=string_get_hash_key(((char*)key))%self->size;
    it_251=hash_250;
    while(    (_Bool)1) {
        if(        self->item_existance[it_251]) {
            if(            string_equals(self->keys[it_251],key)) {
                __result_obj__169 = (struct sClass*)come_increment_ref_count(self->items[it_251]);
                /*c*/ come_call_finalizer3(default_value_249,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__169,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__169;
            }
            it_251++;
            if(            it_251>=self->size) {
                it_251=0;
            }
            else if(            it_251==hash_250) {
                __result_obj__170 = (struct sClass*)come_increment_ref_count(default_value_249);
                /*c*/ come_call_finalizer3(default_value_249,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__170,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__170;
            }
        }
        else {
            __result_obj__171 = (struct sClass*)come_increment_ref_count(default_value_249);
            /*c*/ come_call_finalizer3(default_value_249,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__171,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__171;
        }
    }
    __result_obj__172 = (struct sClass*)come_increment_ref_count(default_value_249);
    /*c*/ come_call_finalizer3(default_value_249,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__172,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_253;
unsigned int hash_254;
unsigned int it_255;
struct sType* __result_obj__173;
struct sType* __result_obj__174;
struct sType* __result_obj__175;
struct sType* __result_obj__176;
default_value_253 = (void*)0;
    memset(&default_value_253,0,sizeof(struct sType*));
    hash_254=string_get_hash_key(((char*)key))%self->size;
    it_255=hash_254;
    while(    (_Bool)1) {
        if(        self->item_existance[it_255]) {
            if(            string_equals(self->keys[it_255],key)) {
                __result_obj__173 = (struct sType*)come_increment_ref_count(self->items[it_255]);
                /*c*/ come_call_finalizer3(default_value_253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__173,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__173;
            }
            it_255++;
            if(            it_255>=self->size) {
                it_255=0;
            }
            else if(            it_255==hash_254) {
                __result_obj__174 = (struct sType*)come_increment_ref_count(default_value_253);
                /*c*/ come_call_finalizer3(default_value_253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__174,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__174;
            }
        }
        else {
            __result_obj__175 = (struct sType*)come_increment_ref_count(default_value_253);
            /*c*/ come_call_finalizer3(default_value_253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__175,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__175;
        }
    }
    __result_obj__176 = (struct sType*)come_increment_ref_count(default_value_253);
    /*c*/ come_call_finalizer3(default_value_253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_256;
unsigned int hash_257;
unsigned int it_258;
struct sType* __result_obj__177;
struct sType* __result_obj__178;
struct sType* __result_obj__179;
struct sType* __result_obj__180;
default_value_256 = (void*)0;
    memset(&default_value_256,0,sizeof(struct sType*));
    hash_257=string_get_hash_key(((char*)key))%self->size;
    it_258=hash_257;
    while(    (_Bool)1) {
        if(        self->item_existance[it_258]) {
            if(            string_equals(self->keys[it_258],key)) {
                __result_obj__177 = (struct sType*)come_increment_ref_count(self->items[it_258]);
                /*c*/ come_call_finalizer3(default_value_256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__177;
            }
            it_258++;
            if(            it_258>=self->size) {
                it_258=0;
            }
            else if(            it_258==hash_257) {
                __result_obj__178 = (struct sType*)come_increment_ref_count(default_value_256);
                /*c*/ come_call_finalizer3(default_value_256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__178,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__178;
            }
        }
        else {
            __result_obj__179 = (struct sType*)come_increment_ref_count(default_value_256);
            /*c*/ come_call_finalizer3(default_value_256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__179,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__179;
        }
    }
    __result_obj__180 = (struct sType*)come_increment_ref_count(default_value_256);
    /*c*/ come_call_finalizer3(default_value_256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item){
char* it_263;
    for(    it_263=list$1char$ph_begin(self);    !list$1char$ph_end(self);    it_263=list$1char$ph_next(self)    ){
        if(        string_equals(it_263,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_261;
char* __result_obj__181;
char* __result_obj__182;
char* result_262;
char* __result_obj__183;
result_261 = (void*)0;
result_262 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_261,0,sizeof(char*));
        __result_obj__181 = result_261;
        return __result_obj__181;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__182 = self->it->item;
        return __result_obj__182;
    }
    memset(&result_262,0,sizeof(char*));
    __result_obj__183 = result_262;
    return __result_obj__183;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_264;
char* __result_obj__184;
char* __result_obj__185;
char* result_265;
char* __result_obj__186;
result_264 = (void*)0;
result_265 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_264,0,sizeof(char*));
        __result_obj__184 = result_264;
        return __result_obj__184;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__185 = self->it->item;
        return __result_obj__185;
    }
    memset(&result_265,0,sizeof(char*));
    __result_obj__186 = result_265;
    return __result_obj__186;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sType$ph* o2_saved_267;
struct sType* it_270;
_Bool __result_obj__193;
    for(    o2_saved_267=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_270=list$1sType$ph_begin((o2_saved_267));    !list$1sType$ph_end((o2_saved_267));    it_270=list$1sType$ph_next((o2_saved_267))    ){
        if(        is_contained_generics_class(it_270,info)) {
            __result_obj__193 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_267,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__193;
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_267,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_268;
struct sType* __result_obj__187;
struct sType* __result_obj__188;
struct sType* result_269;
struct sType* __result_obj__189;
result_268 = (void*)0;
result_269 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_268,0,sizeof(struct sType*));
        __result_obj__187 = result_268;
        return __result_obj__187;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__188 = self->it->item;
        return __result_obj__188;
    }
    memset(&result_269,0,sizeof(struct sType*));
    __result_obj__189 = result_269;
    return __result_obj__189;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_271;
struct sType* __result_obj__190;
struct sType* __result_obj__191;
struct sType* result_272;
struct sType* __result_obj__192;
result_271 = (void*)0;
result_272 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_271,0,sizeof(struct sType*));
        __result_obj__190 = result_271;
        return __result_obj__190;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__191 = self->it->item;
        return __result_obj__191;
    }
    memset(&result_272,0,sizeof(struct sType*));
    __result_obj__192 = result_272;
    return __result_obj__192;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct list$1sType$ph* param_types_273;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct list$1char$ph* param_names_274;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1char$ph* param_default_parametors_275;
_Bool var_args_276;
void* __right_value205 = (void*)0;
void* __right_value241 = (void*)0;
struct sType* type__280;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
_Bool void_param_301;
char* p_302;
int sline_303;
void* __right_value244 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type_304=0;
char* param_name_305=0;
_Bool err_306=0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__212;
void* __right_value251 = (void*)0;
struct sType* param_type2_317;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* p_321;
_Bool no_comma_322;
void* __right_value257 = (void*)0;
struct sNode* node_323;
char* p2_324;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__214;
    param_types_273=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 74, "struct list$1sType$ph*"))));
    param_names_274=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 75, "struct list$1char$ph*"))));
    param_default_parametors_275=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 76, "struct list$1char$ph*"))));
    var_args_276=(_Bool)0;
    if(    in_constructor_) {
        list$1char$ph_add(param_names_274,(char*)come_increment_ref_count(xsprintf("self")));
        type__280=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        type__280->mHeap=(_Bool)1;
        list$1sType$ph_add(param_types_273,(struct sType*)come_increment_ref_count(type__280));
        list$1char$ph_add(param_default_parametors_275,((void*)0));
        /*c*/ come_call_finalizer3(type__280,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->in_class) {
        list$1char$ph_add(param_names_274,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(param_types_273,(struct sType*)come_increment_ref_count(sType_clone(info->class_type)));
        list$1char$ph_add(param_default_parametors_275,((void*)0));
    }
    expected_next_character(40,info);
    void_param_301=(_Bool)0;
    {
        p_302=info->p;
        sline_303=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_301=(_Bool)1;
            }
        }
        info->p=p_302;
        info->sline=sline_303;
    }
    if(    void_param_301) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(        (_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value244=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_304=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_305=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_306=multiple_assign_var1->v3;
            /*c*/ come_call_finalizer3(__right_value244,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_306) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__212 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value250=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 138, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                /*c*/ come_call_finalizer3(param_type_304,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_305 = come_decrement_ref_count(param_name_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(param_types_273,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_274,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_275,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value250,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__212,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__212;
            }
            param_type2_317=(struct sType*)come_increment_ref_count(solve_generics(param_type_304,info->generics_type,info));
            list$1sType$ph_push_back(param_types_273,(struct sType*)come_increment_ref_count(sType_clone(param_type2_317)));
            list$1char$ph_push_back(param_names_274,(char*)come_increment_ref_count((char*)come_memdup(param_name_305, "05type.c", 144, "char*")));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_321=info->p;
                no_comma_322=info->no_comma;
                info->no_comma=(_Bool)1;
                node_323=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_322;
                p2_324=info->p;
                char buf_325[p2_324-p_321+1];
                memset(&buf_325, 0, sizeof(char)                *(p2_324-p_321+1)                );
                memcpy(buf_325,p_321,p2_324-p_321);
                buf_325[p2_324-p_321]=0;
                list$1char$ph_push_back(param_default_parametors_275,(char*)come_increment_ref_count(__builtin_string(buf_325)));
                ((node_323) ? node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors_275,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_276=(_Bool)1;
                    expected_next_character(41,info);
                    /*c*/ come_call_finalizer3(param_type_304,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_305 = come_decrement_ref_count(param_name_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(param_type2_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /*c*/ come_call_finalizer3(param_type_304,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_305 = come_decrement_ref_count(param_name_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(param_type2_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            /*c*/ come_call_finalizer3(param_type_304,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (param_name_305 = come_decrement_ref_count(param_name_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(param_type2_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    __result_obj__214 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value260=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 196, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types_273),(struct list$1char$ph*)come_increment_ref_count(param_names_274),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_275),var_args_276))));
    /*c*/ come_call_finalizer3(param_types_273,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_274,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_275,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value260,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__214,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__194;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__194 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__194,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_277;
char* __dec_obj16;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_278;
char* __dec_obj17;
void* __right_value204 = (void*)0;
struct list_item$1char$ph* litem_279;
char* __dec_obj18;
struct list$1char$ph* __result_obj__195;
    if(    self->len==0) {
        litem_277=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_277->prev=((void*)0);
        litem_277->next=((void*)0);
        __dec_obj16=litem_277->item,
        litem_277->item=(char*)come_increment_ref_count(item);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_277;
        self->head=litem_277;
    }
    else if(    self->len==1) {
        litem_278=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_278->prev=self->head;
        litem_278->next=((void*)0);
        __dec_obj17=litem_278->item,
        litem_278->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_278;
        self->head->next=litem_278;
    }
    else {
        litem_279=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value204=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_279->prev=self->tail;
        litem_279->next=((void*)0);
        __dec_obj18=litem_279->item,
        litem_279->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_279;
        self->tail=litem_279;
    }
    self->len++;
    __result_obj__195 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__195;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__196;
void* __right_value206 = (void*)0;
struct sType* result_281;
void* __right_value207 = (void*)0;
struct sType* __dec_obj19;
void* __right_value208 = (void*)0;
struct sType* __dec_obj20;
void* __right_value216 = (void*)0;
struct list$1sType$ph* __dec_obj24;
void* __right_value217 = (void*)0;
struct sType* __dec_obj25;
void* __right_value218 = (void*)0;
struct sType* __dec_obj26;
void* __right_value220 = (void*)0;
struct sNode* __dec_obj27;
void* __right_value221 = (void*)0;
struct sNode* __dec_obj28;
void* __right_value222 = (void*)0;
char* __dec_obj29;
void* __right_value223 = (void*)0;
char* __dec_obj30;
void* __right_value224 = (void*)0;
char* __dec_obj31;
void* __right_value232 = (void*)0;
struct list$1sNode$ph* __dec_obj35;
void* __right_value233 = (void*)0;
char* __dec_obj36;
void* __right_value234 = (void*)0;
struct list$1sType$ph* __dec_obj37;
void* __right_value239 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value240 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__208;
    if(    self==(void*)0) {
        __result_obj__196 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__196,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__196;
    }
    result_281=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_281->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj19=result_281->mOriginalLoadVarType,
        result_281->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj20=result_281->mChannelType,
        result_281->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj24=result_281->mGenericsTypes,
        result_281->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj25=result_281->mNoSolvedGenericsType,
        result_281->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj26=result_281->mAnyOriginalType,
        result_281->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj27=result_281->mSizeNum,
        result_281->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj28=result_281->mAlignas,
        result_281->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj29=result_281->mTupleName,
        result_281->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj30=result_281->mAttribute,
        result_281->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        result_281->mDefferRightValue=self->mDefferRightValue;
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
        result_281->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_281->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_281->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj31=result_281->mAsmName,
        result_281->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        __dec_obj35=result_281->mArrayNum,
        result_281->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
        __dec_obj36=result_281->mOriginalTypeName,
        result_281->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        __dec_obj37=result_281->mParamTypes,
        result_281->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj37,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_281->mParamNames,
        result_281->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_281->mResultType,
        result_281->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_281->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__208 = (struct sType*)come_increment_ref_count(result_281);
    /*c*/ come_call_finalizer3(result_281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__208,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__197;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct list$1sType$ph* result_282;
struct list_item$1sType$ph* it_283;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1sType$ph* __result_obj__199;
    if(    self==((void*)0)) {
        __result_obj__197 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__197,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__197;
    }
    result_282=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_283=self->head;
    while(    it_283!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_282,(struct sType*)come_increment_ref_count(sType_clone(it_283->item)));
        }
        else {
            list$1sType$ph_add(result_282,(struct sType*)come_increment_ref_count(sType_clone(it_283->item)));
        }
        it_283=it_283->next;
    }
    __result_obj__199 = (struct list$1sType$ph*)come_increment_ref_count(result_282);
    /*c*/ come_call_finalizer3(result_282,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value211 = (void*)0;
struct list_item$1sType$ph* litem_284;
struct sType* __dec_obj21;
void* __right_value212 = (void*)0;
struct list_item$1sType$ph* litem_285;
struct sType* __dec_obj22;
void* __right_value213 = (void*)0;
struct list_item$1sType$ph* litem_286;
struct sType* __dec_obj23;
struct list$1sType$ph* __result_obj__198;
    if(    self->len==0) {
        litem_284=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value211=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_284->prev=((void*)0);
        litem_284->next=((void*)0);
        __dec_obj21=litem_284->item,
        litem_284->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_284;
        self->head=litem_284;
    }
    else if(    self->len==1) {
        litem_285=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value212=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_285->prev=self->head;
        litem_285->next=((void*)0);
        __dec_obj22=litem_285->item,
        litem_285->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_285;
        self->head->next=litem_285;
    }
    else {
        litem_286=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value213=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_286->prev=self->tail;
        litem_286->next=((void*)0);
        __dec_obj23=litem_286->item,
        litem_286->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_286;
        self->tail=litem_286;
    }
    self->len++;
    __result_obj__198 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_287;
struct list_item$1sType$ph* prev_it_288;
    it_287=self->head;
    while(    it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        /*c*/ come_call_finalizer3(prev_it_288,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__200;
void* __right_value219 = (void*)0;
struct sNode* result_289;
struct sNode* __result_obj__201;
    if(    self==(void*)0) {
        __result_obj__200 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__200) ? __result_obj__200 = come_decrement_ref_count(__result_obj__200, ((struct sNode*)__result_obj__200)->finalize, ((struct sNode*)__result_obj__200)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__200;
    }
    result_289=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
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
    __result_obj__201 = (struct sNode*)come_increment_ref_count(result_289);
    ((result_289) ? result_289 = come_decrement_ref_count(result_289, ((struct sNode*)result_289)->finalize, ((struct sNode*)result_289)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__201) ? __result_obj__201 = come_decrement_ref_count(__result_obj__201, ((struct sNode*)__result_obj__201)->finalize, ((struct sNode*)__result_obj__201)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__201;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__202;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct list$1sNode$ph* result_290;
struct list_item$1sNode$ph* it_291;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct list$1sNode$ph* __result_obj__205;
    if(    self==((void*)0)) {
        __result_obj__202 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__202,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__202;
    }
    result_290=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_291=self->head;
    while(    it_291!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_290,(struct sNode*)come_increment_ref_count(sNode_clone(it_291->item)));
        }
        else {
            list$1sNode$ph_add(result_290,(struct sNode*)come_increment_ref_count(sNode_clone(it_291->item)));
        }
        it_291=it_291->next;
    }
    __result_obj__205 = (struct list$1sNode$ph*)come_increment_ref_count(result_290);
    /*c*/ come_call_finalizer3(result_290,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__203;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__203 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value227 = (void*)0;
struct list_item$1sNode$ph* litem_292;
struct sNode* __dec_obj32;
void* __right_value228 = (void*)0;
struct list_item$1sNode$ph* litem_293;
struct sNode* __dec_obj33;
void* __right_value229 = (void*)0;
struct list_item$1sNode$ph* litem_294;
struct sNode* __dec_obj34;
struct list$1sNode$ph* __result_obj__204;
    if(    self->len==0) {
        litem_292=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value227=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj32=litem_292->item,
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value228=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj33=litem_293->item,
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value229=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj34=litem_294->item,
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_294;
        self->tail=litem_294;
    }
    self->len++;
    __result_obj__204 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__204;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_295;
struct list_item$1sNode$ph* prev_it_296;
    it_295=self->head;
    while(    it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        /*c*/ come_call_finalizer3(prev_it_296,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__206;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1char$ph* result_297;
struct list_item$1char$ph* it_298;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct list$1char$ph* __result_obj__207;
    if(    self==((void*)0)) {
        __result_obj__206 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__206,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__206;
    }
    result_297=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_298=self->head;
    while(    it_298!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_297,(char*)come_increment_ref_count((char*)come_memdup(it_298->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_297,(char*)come_increment_ref_count((char*)come_memdup(it_298->item, "./comelang.h", 1032, "char*")));
        }
        it_298=it_298->next;
    }
    __result_obj__207 = (struct list$1char$ph*)come_increment_ref_count(result_297);
    /*c*/ come_call_finalizer3(result_297,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_299;
struct list_item$1char$ph* prev_it_300;
    it_299=self->head;
    while(    it_299!=((void*)0)) {
        prev_it_300=it_299;
        it_299=it_299->next;
        /*c*/ come_call_finalizer3(prev_it_300,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
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

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__209;
void* __right_value245 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* result_307;
void* __right_value246 = (void*)0;
struct list$1sType$ph* __dec_obj40;
void* __right_value247 = (void*)0;
struct list$1char$ph* __dec_obj41;
void* __right_value248 = (void*)0;
struct list$1char$ph* __dec_obj42;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__210;
    if(    self==(void*)0) {
        __result_obj__209 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__209,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__209;
    }
    result_307=(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone", 3, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj40=result_307->v1,
        result_307->v1=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj41=result_307->v2,
        result_307->v2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj42=result_307->v3,
        result_307->v3=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->v3));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_307->v4=self->v4;
    }
    __result_obj__210 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(result_307);
    /*c*/ come_call_finalizer3(result_307,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__210,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
unsigned int result_308;
    result_308=0;
    result_308+=int_get_hash_key(((int)self->v1));
    result_308+=int_get_hash_key(((int)self->v2));
    result_308+=int_get_hash_key(((int)self->v3));
    result_308+=int_get_hash_key(((int)self->v4));
    return result_308;
}

static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right){
    if(    !list$1sType$ph_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_309;
struct list_item$1sType$ph* it2_310;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_309=left->head;
    it2_310=right->head;
    while(    it_309!=((void*)0)) {
        if(        !sType_equals(it_309->item,it2_310->item)) {
            return (_Bool)0;
        }
        it_309=it_309->next;
        it2_310=it2_310->next;
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
    if(    !bool_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)) {
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_311;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_312;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_311=left->head;
    it2_312=right->head;
    while(    it_311!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_311->item,it2_312->item)) {
            return (_Bool)0;
        }
        it_311=it_311->next;
        it2_312=it2_312->next;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_313;
struct list_item$1sNode$ph* it2_314;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_313=left->head;
    it2_314=right->head;
    while(    it_313!=((void*)0)) {
        if(        !sNode_equals(it_313->item,it2_314->item)) {
            return (_Bool)0;
        }
        it_313=it_313->next;
        it2_314=it2_314->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_315;
struct list_item$1char$ph* it2_316;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_315=left->head;
    it2_316=right->head;
    while(    it_315!=((void*)0)) {
        if(        !string_equals(it_315->item,it2_316->item)) {
            return (_Bool)0;
        }
        it_315=it_315->next;
        it2_316=it2_316->next;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj43;
struct list$1char$ph* __dec_obj44;
struct list$1char$ph* __dec_obj45;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__211;
    __dec_obj43=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj43,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj44=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj44,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj45=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    /*b*/ come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->v4=v4;
    __result_obj__211 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
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

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value252 = (void*)0;
struct list_item$1sType$ph* litem_318;
struct sType* __dec_obj46;
void* __right_value253 = (void*)0;
struct list_item$1sType$ph* litem_319;
struct sType* __dec_obj47;
void* __right_value254 = (void*)0;
struct list_item$1sType$ph* litem_320;
struct sType* __dec_obj48;
struct list$1sType$ph* __result_obj__213;
    if(    self->len==0) {
        litem_318=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value252=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_318->prev=((void*)0);
        litem_318->next=((void*)0);
        __dec_obj46=litem_318->item,
        litem_318->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_318;
        self->head=litem_318;
    }
    else if(    self->len==1) {
        litem_319=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value253=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_319->prev=self->head;
        litem_319->next=((void*)0);
        __dec_obj47=litem_319->item,
        litem_319->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_319;
        self->head->next=litem_319;
    }
    else {
        litem_320=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value254=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_320->prev=self->tail;
        litem_320->next=((void*)0);
        __dec_obj48=litem_320->item,
        litem_320->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_320;
        self->tail=litem_320;
    }
    self->len++;
    __result_obj__213 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value261 = (void*)0;
struct sType* left_type2_326;
void* __right_value262 = (void*)0;
struct sType* right_type2_327;
struct sType* left_no_solved_generics_type_328;
struct sType* right_no_solved_generics_type_329;
struct sClass* left_class_330;
struct sClass* right_class_331;
_Bool parent_class_332;
void* __right_value263 = (void*)0;
_Bool __result_obj__215;
_Bool __result_obj__216;
struct sClass* klass_333;
_Bool flag__334;
void* __right_value264 = (void*)0;
_Bool __result_obj__217;
_Bool __result_obj__218;
_Bool __result_obj__219;
void* __right_value265 = (void*)0;
char* left_type3_335;
void* __right_value266 = (void*)0;
char* __dec_obj49;
void* __right_value267 = (void*)0;
struct sType* __dec_obj50;
void* __right_value268 = (void*)0;
struct sType* __dec_obj51;
_Bool __result_obj__220;
void* __right_value269 = (void*)0;
char* left_type3_336;
void* __right_value270 = (void*)0;
char* __dec_obj52;
void* __right_value271 = (void*)0;
struct sType* __dec_obj53;
void* __right_value272 = (void*)0;
struct sType* __dec_obj54;
_Bool __result_obj__221;
_Bool __result_obj__222;
_Bool __result_obj__223;
int i_337;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
_Bool __result_obj__228;
_Bool __result_obj__229;
void* __right_value275 = (void*)0;
char* left_type3_344;
void* __right_value276 = (void*)0;
char* __dec_obj55;
void* __right_value277 = (void*)0;
struct sType* __dec_obj56;
void* __right_value278 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__230;
void* __right_value279 = (void*)0;
char* left_type3_345;
void* __right_value280 = (void*)0;
char* __dec_obj58;
void* __right_value281 = (void*)0;
struct sType* __dec_obj59;
void* __right_value282 = (void*)0;
struct sType* __dec_obj60;
_Bool __result_obj__231;
void* __right_value283 = (void*)0;
char* __dec_obj61;
void* __right_value284 = (void*)0;
struct sType* __dec_obj62;
void* __right_value285 = (void*)0;
struct sType* __dec_obj63;
_Bool __result_obj__232;
void* __right_value286 = (void*)0;
char* left_type3_346;
void* __right_value287 = (void*)0;
char* __dec_obj64;
void* __right_value288 = (void*)0;
struct sType* __dec_obj65;
void* __right_value289 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__233;
void* __right_value290 = (void*)0;
char* left_type3_347;
void* __right_value291 = (void*)0;
char* __dec_obj67;
void* __right_value292 = (void*)0;
struct sType* __dec_obj68;
void* __right_value293 = (void*)0;
struct sType* __dec_obj69;
_Bool __result_obj__234;
_Bool __result_obj__235;
_Bool __result_obj__236;
_Bool __result_obj__237;
_Bool __result_obj__238;
_Bool __result_obj__239;
_Bool __result_obj__240;
_Bool __result_obj__241;
_Bool __result_obj__242;
_Bool __result_obj__243;
_Bool __result_obj__244;
_Bool __result_obj__245;
_Bool __result_obj__246;
_Bool __result_obj__247;
_Bool __result_obj__248;
_Bool __result_obj__249;
_Bool __result_obj__250;
_Bool __result_obj__251;
void* __right_value294 = (void*)0;
char* tmp_348;
void* __right_value295 = (void*)0;
char* __dec_obj70;
void* __right_value296 = (void*)0;
struct sType* __dec_obj71;
void* __right_value297 = (void*)0;
struct sType* __dec_obj72;
_Bool __result_obj__252;
_Bool __result_obj__253;
_Bool __result_obj__254;
_Bool __result_obj__255;
void* __right_value298 = (void*)0;
char* tmp_349;
void* __right_value299 = (void*)0;
char* __dec_obj73;
void* __right_value300 = (void*)0;
struct sType* __dec_obj74;
_Bool __result_obj__256;
_Bool __result_obj__257;
int i_350;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
_Bool __result_obj__258;
    left_type2_326=(struct sType*)come_increment_ref_count(sType_clone(left_type));
    right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_328=((void*)0);
    if(    left_type2_326->mNoSolvedGenericsType) {
        left_no_solved_generics_type_328=left_type2_326->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_329=((void*)0);
    if(    right_type2_327->mNoSolvedGenericsType) {
        right_no_solved_generics_type_329=right_type2_327->mNoSolvedGenericsType;
    }
    left_class_330=left_type2_326->mClass;
    right_class_331=right_type2_327->mClass;
    parent_class_332=(_Bool)0;
    if(    string_operator_not_equals(left_class_330->mName,right_class_331->mName)) {
        while(        left_class_330&&right_class_331) {
            if(            string_operator_equals(left_class_330->mName,right_class_331->mName)) {
                parent_class_332=(_Bool)1;
            }
            if(            right_class_331->mParentClassName) {
                right_class_331=((struct sClass*)(__right_value263=map$2char$phsClass$ph_operator_load_element(info->classes,right_class_331->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value263,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                right_class_331=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type2_326->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            string_operator_equals(left_type2_326->mClass->mName,"lambda")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__215 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__215;
            }
        }
        else if(        left_type2_326->mPointerNum==0&&right_type->mPointerNum>0) {
            if(            list$1sNode$ph_length(left_type2_326->mArrayNum)>0) {
            }
            else if(            string_operator_equals(left_type2_326->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__216 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__216;
            }
        }
        else if(        left_type2_326->mPointerNum>0&&right_type->mPointerNum>0) {
            klass_333=right_type->mClass;
            flag__334=(_Bool)0;
            while(            klass_333) {
                if(                string_operator_equals(klass_333->mName,left_type2_326->mClass->mName)) {
                    flag__334=(_Bool)1;
                }
                if(                klass_333->mParentClassName) {
                    klass_333=((struct sClass*)(__right_value264=map$2char$phsClass$ph_operator_load_element(info->classes,klass_333->mParentClassName)));
                    /*c*/ come_call_finalizer3(__right_value264,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    klass_333=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2_326->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_326->mClass->mName,"lambda")) {
            }
            else if(            left_type2_326->mException) {
            }
            else if(            left_no_solved_generics_type_328&&right_no_solved_generics_type_329&&(list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes)>0)) {
            }
            else if(            strlen(left_type2_326->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_326->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type2_326->mClass->mName,right_type->mClass->mName)&&!flag__334) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                    info->err_num++;
                    __result_obj__217 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__217;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_328&&right_no_solved_generics_type_329) {
        if(        strlen(left_type2_326->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_326->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__218 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__218;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_326->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_326->mClass->mNumber&&left_type2_326->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes),left_no_solved_generics_type_328->mClass->mName,left_type2_326->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes),right_no_solved_generics_type_329->mClass->mName,right_type2_327->mClass->mName);
                    info->err_num++;
                    __result_obj__219 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__219;
                }
            }
            else {
                left_type3_335=(char*)come_increment_ref_count(make_type_name_string(left_type2_326,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj49=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_335,come_value->c_value));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj50=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
                /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj51=right_type2_327,
                right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
                /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_335 = come_decrement_ref_count(left_type3_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_326->mClass->mFloat&&left_type2_326->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes),left_no_solved_generics_type_328->mClass->mName,left_type2_326->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes),right_no_solved_generics_type_329->mClass->mName,right_type2_327->mClass->mName);
                    info->err_num++;
                    __result_obj__220 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__220;
                }
            }
            else {
                left_type3_336=(char*)come_increment_ref_count(make_type_name_string(left_type2_326,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj52=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_336,come_value->c_value));
                __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj53=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
                /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj54=right_type2_327,
                right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
                /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_336 = come_decrement_ref_count(left_type3_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)&&left_type2_326->mPointerNum==right_type2_327->mPointerNum) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"void")&&left_type2_326->mPointerNum>0&&string_operator_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)&&(left_type2_326->mPointerNum!=right_type2_327->mPointerNum||left_type2_326->mHeap!=right_type2_327->mHeap)) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)&&(left_type2_326->mPointerNum!=right_type2_327->mPointerNum||left_type2_326->mHeap!=right_type2_327->mHeap)) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_326->mClass->mName);
            printf("right type class_name %s\n",right_type2_327->mClass->mName);
            printf("left type pointernum %d\n",left_type2_326->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_326->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes),left_no_solved_generics_type_328->mClass->mName,left_type2_326->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes),right_no_solved_generics_type_329->mClass->mName,right_type2_327->mClass->mName);
            info->err_num++;
            __result_obj__221 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__221;
        }
        else if(        list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_328->mClass->mName,"void")&&left_no_solved_generics_type_328->mPointerNum>0&&right_no_solved_generics_type_329->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_329->mClass->mName,"void")&&right_no_solved_generics_type_329->mPointerNum>0&&left_no_solved_generics_type_328->mPointerNum>0)) {
            }
            else {
                if(                list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes)!=list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes),left_no_solved_generics_type_328->mClass->mName,left_type2_326->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes),right_no_solved_generics_type_329->mClass->mName,right_type2_327->mClass->mName);
                        info->err_num++;
                        __result_obj__222 = (_Bool)0;
                        /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__222;
                    }
                    __result_obj__223 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__223;
                }
                for(                i_337=0;                i_337<list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes);                i_337++                ){
                    check_assign_type(msg,((struct sType*)(__right_value273=list$1sType$ph_operator_load_element(left_no_solved_generics_type_328->mGenericsTypes,i_337))),((struct sType*)(__right_value274=list$1sType$ph_operator_load_element(right_no_solved_generics_type_329->mGenericsTypes,i_337))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    /*c*/ come_call_finalizer3(__right_value273,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__right_value274,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_328,right_no_solved_generics_type_329,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
            }
        }
    }
    else if(    strlen(left_type2_326->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_326->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__228 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__228;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_326->mClass->mNumber&&left_type2_326->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes),left_no_solved_generics_type_328->mClass->mName,left_type2_326->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes),right_no_solved_generics_type_329->mClass->mName,right_type2_327->mClass->mName);
                info->err_num++;
                __result_obj__229 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__229;
            }
        }
        else {
            left_type3_344=(char*)come_increment_ref_count(make_type_name_string(left_type2_326,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj55=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_344,come_value->c_value));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj56=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj57=right_type2_327,
            right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_344 = come_decrement_ref_count(left_type3_344, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_326->mClass->mFloat&&left_type2_326->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_328->mGenericsTypes),left_no_solved_generics_type_328->mClass->mName,left_type2_326->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_329->mGenericsTypes),right_no_solved_generics_type_329->mClass->mName,right_type2_327->mClass->mName);
                info->err_num++;
                __result_obj__230 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__230;
            }
        }
        else {
            left_type3_345=(char*)come_increment_ref_count(make_type_name_string(left_type2_326,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj58=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_345,come_value->c_value));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj59=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj60=right_type2_327,
            right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_345 = come_decrement_ref_count(left_type3_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    left_type2_326->mHeap&&!right_type2_327->mHeap&&left_type2_326->mPointerNum>0&&right_type2_327->mPointerNum>0&&string_operator_not_equals(right_type2_327->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_326->mMultipleTypes&&!right_type->mMultipleTypes) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum,left_type2_326->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum,right_type2_327->mHeap);
        info->err_num++;
        __result_obj__231 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__231;
    }
    else if(    parent_class_332&&left_type2_326->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj61=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_326->mClass->mName,come_value->c_value));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj62=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
        /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj63=right_type2_327,
        right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
        /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_326->mClass->mNumber&&left_type2_326->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__232 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__232;
            }
        }
        else {
            left_type3_346=(char*)come_increment_ref_count(make_type_name_string(left_type2_326,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj64=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_346,come_value->c_value));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj65=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj66=right_type2_327,
            right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_346 = come_decrement_ref_count(left_type3_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_326->mClass->mFloat&&left_type2_326->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__233 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__233;
            }
        }
        else {
            left_type3_347=(char*)come_increment_ref_count(make_type_name_string(left_type2_326,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj67=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_347,come_value->c_value));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj68=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj69=right_type2_327,
            right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_347 = come_decrement_ref_count(left_type3_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)&&left_type2_326->mPointerNum>0&&right_type2_327->mPointerNum>0&&!right_type2_327->mAllocaValue) {
        if(        left_type2_326->mHeap&&!right_type2_327->mHeap) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum,left_type2_326->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum,right_type2_327->mHeap);
            info->err_num++;
            __result_obj__234 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__234;
        }
    }
    else if(    check_no_pointer) {
        if(        left_type2_326->mPointerNum>0) {
            if(            right_type2_327->mPointerNum>0) {
                if(                string_operator_equals(left_type2_326->mClass->mName,"void")||string_operator_equals(right_type2_327->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type2_326->mClass->mName,"va_list")||string_operator_equals(right_type2_327->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                        info->err_num++;
                        __result_obj__235 = (_Bool)0;
                        /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__235;
                    }
                    __result_obj__236 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__236;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                    info->err_num++;
                    __result_obj__237 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__237;
                }
                __result_obj__238 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__238;
            }
        }
        else if(        left_type2_326->mPointerNum==0&&right_type2_327->mPointerNum>0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__239 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__239;
            }
            __result_obj__240 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__240;
        }
        else if(        left_type2_326->mPointerNum>0&&right_type2_327->mPointerNum==0&&string_operator_equals(right_type2_327->mClass->mName,"lambda")&&string_operator_equals(left_type2_326->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__241 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
            __result_obj__242 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__242;
        }
    }
    else if(    string_operator_equals(left_type2_326->mClass->mName,"char")&&left_type2_326->mPointerNum==1) {
        if(        string_operator_equals(right_type2_327->mClass->mName,"char")&&right_type2_327->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_327->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"va_list")||string_operator_equals(right_type2_327->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_327->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__243 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__243;
            }
            __result_obj__244 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__244;
        }
        else if(        string_operator_equals(right_type2_327->mClass->mName,"void")&&right_type2_327->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_327->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__245 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__245;
            }
            __result_obj__246 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__246;
        }
        else if(        string_operator_not_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)&&!(left_type2_326->mPointerNum>0&&right_type2_327->mPointerNum==0)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__247 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__247;
            }
            __result_obj__248 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__248;
        }
    }
    else if(    string_operator_equals(left_type2_326->mClass->mName,"void")&&left_type2_326->mPointerNum==1) {
        if(        string_operator_equals(right_type2_327->mClass->mName,"void")&&right_type2_327->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_327->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"va_list")||string_operator_equals(right_type2_327->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_327->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_327->mClass->mName,"void")&&right_type2_327->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_327->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__249 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__249;
            }
            __result_obj__250 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__250;
        }
        else if(        right_type2_327->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                    info->err_num++;
                    __result_obj__251 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__251;
                }
            }
            else {
                tmp_348=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj70=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_348, "05type.c", 669, "char*"));
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj71=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
                /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj72=right_type2_327,
                right_type2_327=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
                /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (tmp_348 = come_decrement_ref_count(tmp_348, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    left_type2_326->mPointerNum>0||(left_type2_326->mPointerNum==0&&left_type2_326->mClass->mStruct)) {
        if(        right_type2_327->mPointerNum>0||(right_type2_327->mPointerNum==0&&right_type2_327->mClass->mStruct)) {
            if(            string_operator_equals(left_type2_326->mClass->mName,"void")||string_operator_equals(right_type2_327->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_326->mClass->mName,"va_list")||string_operator_equals(right_type2_327->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type2_326->mClass->mName,right_type2_327->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                    info->err_num++;
                    __result_obj__252 = (_Bool)0;
                    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__252;
                }
                __result_obj__253 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__253;
            }
            else if(            int_operator_not_equals(left_type2_326->mPointerNum,right_type2_327->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
            }
            else if(            list$1sNode$ph_length(right_type2_327->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum,list$1sNode$ph_length(left_type2_326->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum,list$1sNode$ph_length(right_type2_327->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"void")||string_operator_equals(right_type2_327->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"va_list")||string_operator_equals(right_type2_327->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_327->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_326->mClass->mName,"lambda")&&string_operator_equals(right_type2_327->mClass->mName,"lambda")) {
        }
        else if(        left_type2_326->mPointerNum>0&&right_type2_327->mPointerNum==0&&string_operator_equals(right_type2_327->mClass->mName,"lambda")&&string_operator_equals(left_type2_326->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__254 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__254;
            }
            __result_obj__255 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__255;
        }
        else if(        left_type2_326->mPointerNum>0&&!(string_operator_equals(right_type2_327->mClass->mName,"lambda")&&string_operator_equals(left_type2_326->mClass->mName,"lambda"))&&right_type2_327->mPointerNum==0) {
            tmp_349=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj73=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_349, "05type.c", 725, "char*"));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj74=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_326));
            /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __result_obj__256 = (_Bool)1;
            (tmp_349 = come_decrement_ref_count(tmp_349, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__256;
            (tmp_349 = come_decrement_ref_count(tmp_349, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph_length(left_type2_326->mGenericsTypes)>0) {
            if(            list$1sType$ph_length(left_type2_326->mGenericsTypes)!=list$1sType$ph_length(right_type2_327->mGenericsTypes)) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_326->mClass->mName,left_type2_326->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_327->mClass->mName,right_type2_327->mPointerNum);
                info->err_num++;
                __result_obj__257 = (_Bool)0;
                /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__257;
            }
            for(            i_350=0;            i_350<list$1sType$ph_length(left_type2_326->mGenericsTypes);            i_350++            ){
                check_assign_type(msg,((struct sType*)(__right_value301=list$1sType$ph_operator_load_element(left_type2_326->mGenericsTypes,i_350))),((struct sType*)(__right_value302=list$1sType$ph_operator_load_element(right_type2_327->mGenericsTypes,i_350))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                /*c*/ come_call_finalizer3(__right_value301,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__right_value302,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    __result_obj__258 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_type2_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_type2_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_338;
int i_339;
struct sType* __result_obj__224;
struct sType* default_value_340;
struct sType* __result_obj__225;
default_value_340 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_338=self->head;
    i_339=0;
    while(    it_338!=((void*)0)) {
        if(        position==i_339) {
            __result_obj__224 = (struct sType*)come_increment_ref_count(it_338->item);
            /*c*/ come_call_finalizer3(__result_obj__224,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__224;
        }
        it_338=it_338->next;
        i_339++;
    }
    memset(&default_value_340,0,sizeof(struct sType*));
    __result_obj__225 = (struct sType*)come_increment_ref_count(default_value_340);
    /*c*/ come_call_finalizer3(default_value_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__225,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_341;
int i_342;
struct sType* __result_obj__226;
struct sType* default_value_343;
struct sType* __result_obj__227;
default_value_343 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_341=self->head;
    i_342=0;
    while(    it_341!=((void*)0)) {
        if(        position==i_342) {
            __result_obj__226 = (struct sType*)come_increment_ref_count(it_341->item);
            /*c*/ come_call_finalizer3(__result_obj__226,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__226;
        }
        it_341=it_341->next;
        i_342++;
    }
    memset(&default_value_343,0,sizeof(struct sType*));
    __result_obj__227 = (struct sType*)come_increment_ref_count(default_value_343);
    /*c*/ come_call_finalizer3(default_value_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value303 = (void*)0;
struct sType* result_type_351;
char* var_name_352;
char* p_353;
int sline_354;
void* __right_value304 = (void*)0;
char* word_355;
_Bool between_brace_356;
char* p_357;
int sline_358;
void* __right_value305 = (void*)0;
char* word_359;
void* __right_value306 = (void*)0;
char* __dec_obj75;
void* __right_value307 = (void*)0;
char* __dec_obj76;
_Bool no_comma_361;
void* __right_value308 = (void*)0;
struct sNode* node_362;
struct sNode* __dec_obj77;
char* p_363;
int sline_364;
void* __right_value309 = (void*)0;
char* word_365;
void* __right_value310 = (void*)0;
struct sNode* node_366;
void* __right_value314 = (void*)0;
char* attribute_370;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj81;
char* __dec_obj82;
void* __right_value318 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__263;
    result_type_351=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first) {
        result_type_351->mPointerNum=result_type_351->mTypedefOriginalPointerNum;
    }
    var_name_352=((void*)0);
    {
        p_353=info->p;
        sline_354=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_355=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_355,"const")||string_operator_equals(word_355,"__restrict")||string_operator_equals(word_355,"restrict")||string_operator_equals(word_355,"__user")||string_operator_equals(word_355,"volatile")||string_operator_equals(word_355,"_Nonnull")||string_operator_equals(word_355,"_Nullable")||string_operator_equals(word_355,"_Null_unspecified")||string_operator_equals(word_355,"__user")||string_operator_equals(word_355,"_Addr")) {
            }
            else {
                info->p=p_353;
                info->sline=sline_354;
            }
            (word_355 = come_decrement_ref_count(word_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p=p_353;
            info->sline=sline_354;
        }
    }
    between_brace_356=(_Bool)0;
    {
        p_357=info->p;
        sline_358=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_359=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_359,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_356=(_Bool)1;
                    }
                }
                (word_359 = come_decrement_ref_count(word_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_357;
        info->sline=sline_358;
    }
    parse_sharp_v5(info);
    while(    *info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_351->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_356&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj75=var_name_352,
        var_name_352=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int num_anonymous_var_name_360=0;
        num_anonymous_var_name_360++;
        __dec_obj76=var_name_352,
        var_name_352=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_360));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    between_brace_356&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_361=info->no_comma;
        info->no_comma=(_Bool)1;
        node_362=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_361;
        __dec_obj77=result_type_351->mSizeNum,
        result_type_351->mSizeNum=(struct sNode*)come_increment_ref_count(node_362);
        (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        ((node_362) ? node_362 = come_decrement_ref_count(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_363=info->p;
            sline_364=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_365=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_365,"const")||string_operator_equals(word_365,"__restrict")||string_operator_equals(word_365,"restrict")||string_operator_equals(word_365,"__user")||string_operator_equals(word_365,"volatile")||string_operator_equals(word_365,"_Nonnull")||string_operator_equals(word_365,"_Nullable")||string_operator_equals(word_365,"_Null_unspecified")||string_operator_equals(word_365,"__user")||string_operator_equals(word_365,"_Addr")) {
                }
                else {
                    info->p=p_363;
                    info->sline=sline_364;
                }
                (word_365 = come_decrement_ref_count(word_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                info->p=p_363;
                info->sline=sline_364;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_351->mArrayPointerType=(_Bool)1;
            result_type_351->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_366=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(result_type_351->mArrayNum,(struct sNode*)come_increment_ref_count(node_366));
        parse_sharp_v5(info);
        result_type_351->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_366) ? node_366 = come_decrement_ref_count(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    attribute_370=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_370,"")) {
        if(        result_type_351->mAttribute) {
            __dec_obj81=result_type_351->mAttribute,
            result_type_351->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value316=string_operator_add(result_type_351->mAttribute," "))),attribute_370));
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj82=result_type_351->mAttribute,
            result_type_351->mAttribute=(char*)come_increment_ref_count(attribute_370);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value318=parse_attribute(info,(_Bool)0)));
    /*c*/ come_call_finalizer3(__right_value318,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__263 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value323=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 907, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_351),(char*)come_increment_ref_count(var_name_352)))));
    /*c*/ come_call_finalizer3(base_type_name,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_352 = come_decrement_ref_count(var_name_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute_370 = come_decrement_ref_count(attribute_370, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value323,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value311 = (void*)0;
struct list_item$1sNode$ph* litem_367;
struct sNode* __dec_obj78;
void* __right_value312 = (void*)0;
struct list_item$1sNode$ph* litem_368;
struct sNode* __dec_obj79;
void* __right_value313 = (void*)0;
struct list_item$1sNode$ph* litem_369;
struct sNode* __dec_obj80;
struct list$1sNode$ph* __result_obj__259;
    if(    self->len==0) {
        litem_367=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value311=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_367->prev=((void*)0);
        litem_367->next=((void*)0);
        __dec_obj78=litem_367->item,
        litem_367->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_367;
        self->head=litem_367;
    }
    else if(    self->len==1) {
        litem_368=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value312=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_368->prev=self->head;
        litem_368->next=((void*)0);
        __dec_obj79=litem_368->item,
        litem_368->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_368;
        self->head->next=litem_368;
    }
    else {
        litem_369=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value313=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_369->prev=self->tail;
        litem_369->next=((void*)0);
        __dec_obj80=litem_369->item,
        litem_369->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_369;
        self->tail=litem_369;
    }
    self->len++;
    __result_obj__259 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__259;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self){
struct tuple2$2sType$phchar$ph* __result_obj__260;
void* __right_value319 = (void*)0;
struct tuple2$2sType$phchar$ph* result_371;
void* __right_value320 = (void*)0;
struct sType* __dec_obj83;
void* __right_value321 = (void*)0;
char* __dec_obj84;
struct tuple2$2sType$phchar$ph* __result_obj__261;
    if(    self==(void*)0) {
        __result_obj__260 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__260,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__260;
    }
    result_371=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj83=result_371->v1,
        result_371->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj84=result_371->v2,
        result_371->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2sType$phchar$ph_clone", 5, "char*"));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__261 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(result_371);
    /*c*/ come_call_finalizer3(result_371,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__261,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_372;
    result_372=0;
    result_372+=int_get_hash_key(((int)self->v1));
    result_372+=int_get_hash_key(((int)self->v2));
    return result_372;
}

static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj85;
char* __dec_obj86;
struct tuple2$2sType$phchar$ph* __result_obj__262;
    __dec_obj85=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj86=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__262 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__262,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_373;
int sline_374;
void* __right_value324 = (void*)0;
char* word_375;
int nest_376;
    p_373=info->p;
    sline_374=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_375=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_375,"__attribute")||string_operator_equals(word_375,"__attribute__"))&&*info->p==40) {
            nest_376=0;
            while(            1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_376++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_376--;
                    if(                    nest_376==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_375,"const")||string_operator_equals(word_375,"__restrict")||string_operator_equals(word_375,"restrict")||string_operator_equals(word_375,"__user")||string_operator_equals(word_375,"volatile")||string_operator_equals(word_375,"_Nonnull")||string_operator_equals(word_375,"_Nullable")||string_operator_equals(word_375,"__nonnull")||string_operator_equals(word_375,"_Null_unspecified")||string_operator_equals(word_375,"__user")||string_operator_equals(word_375,"_Addr")||string_operator_equals(word_375,"__noreturn")||string_operator_equals(word_375,"_noreturn")||string_operator_equals(word_375,"_Noreturn")) {
        }
        else {
            info->p=p_373;
            info->sline=sline_374;
        }
        (word_375 = come_decrement_ref_count(word_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->p=p_373;
        info->sline=sline_374;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_377;
void* __right_value325 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type_378=0;
char* name_379=0;
_Bool err_380=0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__267;
    no_output_err_377=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value325=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_378=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_379=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_380=multiple_assign_var2->v3;
    /*c*/ come_call_finalizer3(__right_value325,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_377;
    __result_obj__267 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value330=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 964, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_378),(char*)come_increment_ref_count(name_379),err_380))));
    /*c*/ come_call_finalizer3(type_378,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_379 = come_decrement_ref_count(name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value330,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
}

static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self){
struct tuple3$3sType$phchar$phbool$* __result_obj__264;
void* __right_value326 = (void*)0;
struct tuple3$3sType$phchar$phbool$* result_381;
void* __right_value327 = (void*)0;
struct sType* __dec_obj87;
void* __right_value328 = (void*)0;
char* __dec_obj88;
struct tuple3$3sType$phchar$phbool$* __result_obj__265;
    if(    self==(void*)0) {
        __result_obj__264 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__264,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__264;
    }
    result_381=(struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "tuple3$3sType$phchar$phbool$_clone", 3, "struct tuple3$3sType$phchar$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj87=result_381->v1,
        result_381->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj88=result_381->v2,
        result_381->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phbool$_clone", 5, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->v3=self->v3;
    }
    __result_obj__265 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(result_381);
    /*c*/ come_call_finalizer3(result_381,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self){
unsigned int result_382;
    result_382=0;
    result_382+=int_get_hash_key(((int)self->v1));
    result_382+=int_get_hash_key(((int)self->v2));
    result_382+=int_get_hash_key(((int)self->v3));
    return result_382;
}

static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj89;
char* __dec_obj90;
struct tuple3$3sType$phchar$phbool$* __result_obj__266;
    __dec_obj89=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj90=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__266 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__266,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_383;
int head_sline_384;
void* __right_value331 = (void*)0;
char* type_name_385;
_Bool record__386;
_Bool exception__387;
_Bool constant_388;
_Bool static__389;
_Bool volatile__390;
_Bool register__391;
_Bool unsigned__392;
_Bool long__393;
_Bool long_long_394;
_Bool short__395;
_Bool restrict__396;
_Bool struct__397;
_Bool union__398;
_Bool enum__399;
_Bool no_heap_400;
_Bool extern__401;
_Bool inline__402;
_Bool uniq__403;
_Bool tuple__404;
struct sNode* alignas__405;
_Bool anonymous_type_406;
_Bool anonymous_name_407;
_Bool atomic__408;
_Bool object_interface_409;
void* __right_value332 = (void*)0;
char* __dec_obj91;
void* __right_value333 = (void*)0;
char* __dec_obj92;
void* __right_value334 = (void*)0;
char* __dec_obj93;
int brace_num_410;
void* __right_value335 = (void*)0;
char* __dec_obj94;
int brace_num_411;
void* __right_value336 = (void*)0;
char* __dec_obj95;
void* __right_value337 = (void*)0;
char* __dec_obj96;
void* __right_value338 = (void*)0;
char* __dec_obj97;
void* __right_value339 = (void*)0;
char* __dec_obj98;
void* __right_value340 = (void*)0;
char* __dec_obj99;
void* __right_value341 = (void*)0;
struct sNode* exp_412;
struct sNode* __dec_obj100;
void* __right_value342 = (void*)0;
char* __dec_obj101;
void* __right_value343 = (void*)0;
char* __dec_obj102;
void* __right_value344 = (void*)0;
char* __dec_obj103;
void* __right_value345 = (void*)0;
char* __dec_obj104;
void* __right_value346 = (void*)0;
char* __dec_obj105;
void* __right_value347 = (void*)0;
char* __dec_obj106;
void* __right_value348 = (void*)0;
char* __dec_obj107;
void* __right_value349 = (void*)0;
char* __dec_obj108;
void* __right_value350 = (void*)0;
char* __dec_obj109;
char* p_413;
int sline_414;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* __dec_obj110;
void* __right_value353 = (void*)0;
char* __dec_obj111;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* __dec_obj112;
char* p_415;
int sline_416;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__268;
char* p_417;
int sline_418;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__269;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* node_419;
_Bool Value_420;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__270;
char* p_421;
int sline_422;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* __dec_obj113;
void* __right_value369 = (void*)0;
char* __dec_obj114;
void* __right_value370 = (void*)0;
char* __dec_obj115;
char* p_423;
int sline_424;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__271;
void* __right_value374 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type_425=0;
char* name_426=0;
_Bool err_427=0;
char* p_428;
int sline_429;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__272;
void* __right_value379 = (void*)0;
char* __dec_obj116;
void* __right_value380 = (void*)0;
char* __dec_obj117;
void* __right_value381 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_430=0;
char* name_431=0;
_Bool err_432=0;
char* p_433;
int sline_434;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__273;
char* p_435;
int sline_436;
void* __right_value385 = (void*)0;
char* __dec_obj118;
void* __right_value386 = (void*)0;
char* __dec_obj119;
void* __right_value387 = (void*)0;
char* __dec_obj120;
void* __right_value388 = (void*)0;
char* __dec_obj121;
void* __right_value389 = (void*)0;
char* __dec_obj122;
void* __right_value390 = (void*)0;
char* __dec_obj123;
void* __right_value391 = (void*)0;
char* __dec_obj124;
char* p_437;
int sline_438;
void* __right_value392 = (void*)0;
char* __dec_obj125;
char* p_439;
int sline_440;
void* __right_value393 = (void*)0;
char* __dec_obj126;
void* __right_value394 = (void*)0;
char* __dec_obj127;
void* __right_value395 = (void*)0;
char* __dec_obj128;
char* p_441;
int sline_442;
void* __right_value396 = (void*)0;
char* __dec_obj129;
void* __right_value397 = (void*)0;
char* __dec_obj130;
void* __right_value398 = (void*)0;
char* __dec_obj131;
void* __right_value399 = (void*)0;
char* __dec_obj132;
void* __right_value400 = (void*)0;
char* __dec_obj133;
void* __right_value401 = (void*)0;
char* __dec_obj134;
void* __right_value402 = (void*)0;
char* __dec_obj135;
void* __right_value403 = (void*)0;
char* __dec_obj136;
void* __right_value404 = (void*)0;
char* __dec_obj137;
void* __right_value405 = (void*)0;
char* __dec_obj138;
void* __right_value406 = (void*)0;
char* __dec_obj139;
char* p_443;
int sline_444;
void* __right_value407 = (void*)0;
char* __dec_obj140;
void* __right_value408 = (void*)0;
char* __dec_obj141;
void* __right_value409 = (void*)0;
char* attribute_445;
int pointer_num_446;
_Bool heap_447;
_Bool refference_448;
_Bool no_refference_449;
_Bool channel_450;
_Bool any_class_451;
_Bool vtable_452;
_Bool deffer__453;
char* tuple_name_454;
void* __right_value410 = (void*)0;
char* __dec_obj142;
_Bool lambda_flag_455;
char* pX_456;
int slineX_457;
void* __right_value411 = (void*)0;
struct sType* type_458;
char* var_name_459;
_Bool function_pointer_flag_460;
char* p_461;
int sline_462;
void* __right_value412 = (void*)0;
char* word_463;
_Bool var_name_between_brace_464;
char* p_465;
int sline_466;
void* __right_value413 = (void*)0;
char* word_467;
void* __right_value414 = (void*)0;
char* __dec_obj143;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* node_469;
_Bool Value_470;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__274;
int pointer_num_471;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* __dec_obj144;
void* __right_value422 = (void*)0;
char* __dec_obj145;
void* __right_value423 = (void*)0;
struct sNode* node_472;
_Bool Value_473;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__275;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __dec_obj146;
void* __right_value429 = (void*)0;
char* __dec_obj147;
void* __right_value430 = (void*)0;
struct sNode* node_474;
_Bool Value_475;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__276;
int pointer_num_476;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* __dec_obj148;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__277;
void* __right_value438 = (void*)0;
char* attribute_477;
char* __dec_obj149;
void* __right_value439 = (void*)0;
char* __dec_obj150;
void* __right_value440 = (void*)0;
char* __dec_obj151;
void* __right_value441 = (void*)0;
char* __dec_obj152;
void* __right_value442 = (void*)0;
char* __dec_obj153;
_Bool no_comma_480;
void* __right_value443 = (void*)0;
struct sNode* node_481;
struct sNode* __dec_obj154;
void* __right_value444 = (void*)0;
char* attribute2_482;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __dec_obj155;
char* __dec_obj156;
struct sType* result_type_483;
void* __right_value448 = (void*)0;
_Bool _if_conditional1;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sType* __dec_obj157;
void* __right_value451 = (void*)0;
int i_484;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
_Bool _if_conditional2;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* __dec_obj158;
int i_491;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
_Bool _if_conditional3;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* __dec_obj159;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* __dec_obj160;
struct sNode* __dec_obj161;
void* __right_value465 = (void*)0;
char* __dec_obj162;
void* __right_value466 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var5 = (void*)0;
struct list$1sType$ph* param_types_492=0;
struct list$1char$ph* param_names_493=0;
struct list$1char$ph* param_default_parametors_494=0;
_Bool var_args_495=0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* __dec_obj163;
struct sType* __dec_obj164;
struct list$1sType$ph* __dec_obj165;
struct list$1char$ph* __dec_obj166;
int function_pointer_num_496;
struct sType* result_type_497;
void* __right_value470 = (void*)0;
_Bool _if_conditional4;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sType* __dec_obj167;
void* __right_value473 = (void*)0;
int i_498;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
_Bool _if_conditional5;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* __dec_obj168;
int i_499;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
_Bool _if_conditional6;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj169;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj170;
struct sNode* __dec_obj171;
void* __right_value487 = (void*)0;
char* __dec_obj172;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__282;
void* __right_value490 = (void*)0;
char* __dec_obj173;
_Bool function_pointer_array_501;
int function_pointer_array_num_502;
int n_503;
void* __right_value491 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var6 = (void*)0;
struct list$1sType$ph* param_types_504=0;
struct list$1char$ph* param_names_505=0;
struct list$1char$ph* param_default_parametors_506=0;
_Bool var_args_507=0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj174;
void* __right_value495 = (void*)0;
struct sType* __dec_obj175;
struct list$1sType$ph* __dec_obj176;
struct list$1char$ph* __dec_obj177;
void* __right_value496 = (void*)0;
struct sNode* exp_508;
_Bool Value_509;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__283;
void* __right_value499 = (void*)0;
struct CVALUE* come_value_510;
void* __right_value500 = (void*)0;
struct sType* __dec_obj178;
void* __right_value501 = (void*)0;
char* attribute_511;
char* __dec_obj179;
void* __right_value502 = (void*)0;
char* __dec_obj180;
void* __right_value503 = (void*)0;
char* __dec_obj181;
void* __right_value504 = (void*)0;
char* __dec_obj182;
void* __right_value505 = (void*)0;
char* __dec_obj183;
_Bool no_comma_514;
void* __right_value506 = (void*)0;
struct sNode* node_515;
struct sNode* __dec_obj184;
void* __right_value507 = (void*)0;
char* attribute2_516;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
char* __dec_obj185;
char* __dec_obj186;
void* __right_value511 = (void*)0;
_Bool _if_conditional7;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj187;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
char* __dec_obj188;
struct sNode* __dec_obj189;
char* __dec_obj190;
int i_517;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
_Bool _if_conditional8;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj191;
struct sNode* __dec_obj192;
char* __dec_obj193;
int i_518;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
_Bool _if_conditional9;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj194;
struct sNode* __dec_obj195;
char* __dec_obj196;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
_Bool _if_conditional10;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__284;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj197;
void* __right_value534 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* generics_type_519=0;
char* var_name_520=0;
_Bool err_521=0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__285;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__286;
void* __right_value539 = (void*)0;
struct sType* __dec_obj198;
void* __right_value540 = (void*)0;
char* new_name_522;
struct sNode* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value541 = (void*)0;
struct sClass* klass_523;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sClass* klass_561;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* __dec_obj202;
struct sNode* __dec_obj203;
char* __dec_obj204;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct list$1sType$ph* types_562;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_563=0;
char* name_564=0;
_Bool err_565=0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__302;
void* __right_value565 = (void*)0;
int num_tuples_566;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sType* __dec_obj205;
struct list$1sType$ph* o2_saved_567;
struct sType* it_568;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sType* __dec_obj206;
void* __right_value571 = (void*)0;
char* new_name_569;
char* __dec_obj207;
void* __right_value572 = (void*)0;
char* attribute_570;
char* __dec_obj208;
void* __right_value573 = (void*)0;
char* __dec_obj209;
void* __right_value574 = (void*)0;
char* __dec_obj210;
void* __right_value575 = (void*)0;
char* __dec_obj211;
void* __right_value576 = (void*)0;
char* __dec_obj212;
_Bool no_comma_573;
void* __right_value577 = (void*)0;
struct sNode* node_574;
struct sNode* __dec_obj213;
void* __right_value578 = (void*)0;
char* attribute2_575;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
char* __dec_obj214;
char* __dec_obj215;
void* __right_value582 = (void*)0;
struct sNode* node_576;
void* __right_value583 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var9 = (void*)0;
char* asm_name_577=0;
char* attribute2_578=0;
char* __dec_obj216;
char* __dec_obj217;
void* __right_value584 = (void*)0;
struct sType* type_before_579;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* __dec_obj218;
void* __right_value588 = (void*)0;
struct sNode* __list_values1___580[1];
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1sNode$ph* __dec_obj219;
struct sType* __dec_obj220;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* type2_584;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* type3_590;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sType* type4_591;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__308;
char* __dec_obj222;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__309;
type_458 = (void*)0;
var_name_459 = (void*)0;
result_type_483 = (void*)0;
result_type_497 = (void*)0;
    head_383=info->p;
    head_sline_384=info->sline;
    info->define_struct=(_Bool)0;
    type_name_385=(char*)come_increment_ref_count(parse_word(info));
    record__386=(_Bool)0;
    exception__387=(_Bool)0;
    constant_388=(_Bool)0;
    static__389=(_Bool)0;
    volatile__390=(_Bool)0;
    register__391=(_Bool)0;
    unsigned__392=(_Bool)0;
    long__393=(_Bool)0;
    long_long_394=(_Bool)0;
    short__395=(_Bool)0;
    restrict__396=(_Bool)0;
    struct__397=(_Bool)0;
    union__398=(_Bool)0;
    enum__399=(_Bool)0;
    no_heap_400=(_Bool)0;
    extern__401=(_Bool)0;
    inline__402=(_Bool)0;
    uniq__403=(_Bool)0;
    tuple__404=(_Bool)0;
    alignas__405=((void*)0);
    anonymous_type_406=(_Bool)0;
    anonymous_name_407=(_Bool)0;
    atomic__408=(_Bool)0;
    object_interface_409=(_Bool)0;
    while(    (_Bool)1) {
        if(        string_operator_equals(type_name_385,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_409=(_Bool)1;
            __dec_obj91=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj92=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            atomic__408=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_385,"__extension__")) {
            __dec_obj93=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_410=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_410++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_410--;
                        if(                        brace_num_410==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj94=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"__declspec")) {
            if(            *info->p==40) {
                brace_num_411=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_411++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_411--;
                        if(                        brace_num_411==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj95=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"_Noreturn")) {
            __dec_obj96=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"__noreturn")) {
            __dec_obj97=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"_Nullable")) {
            __dec_obj98=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"_noreturn")) {
            __dec_obj99=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"_Alignas")) {
            expected_next_character(40,info);
            exp_412=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj100=alignas__405,
            alignas__405=(struct sNode*)come_increment_ref_count(exp_412);
            (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            expected_next_character(41,info);
            __dec_obj101=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            ((exp_412) ? exp_412 = come_decrement_ref_count(exp_412, ((struct sNode*)exp_412)->finalize, ((struct sNode*)exp_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_385,"const")) {
            constant_388=(_Bool)1;
            __dec_obj102=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"static")) {
            static__389=(_Bool)1;
            __dec_obj103=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"uniq")) {
            uniq__403=(_Bool)1;
            __dec_obj104=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"record")) {
            record__386=(_Bool)1;
            __dec_obj105=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"exception")) {
            exception__387=(_Bool)1;
            __dec_obj106=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"extern")) {
            extern__401=(_Bool)1;
            __dec_obj107=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"inline")||string_operator_equals(type_name_385,"__inline")||string_operator_equals(type_name_385,"__inline__")||string_operator_equals(type_name_385,"__always_inline")||string_operator_equals(type_name_385,"__forceinline")) {
            inline__402=(_Bool)1;
            __dec_obj108=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"volatile")) {
            volatile__390=(_Bool)1;
            __dec_obj109=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"struct")) {
            struct__397=(_Bool)1;
            if(            *info->p==123) {
                p_413=info->p;
                sline_414=info->sline;
                ((char*)(__right_value351=skip_block(info)));
                (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    anonymous_name_407=(_Bool)1;
                    anonymous_type_406=(_Bool)1;
                    __dec_obj110=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_413;
                    info->sline=sline_414;
                    break;
                }
                else {
                    anonymous_type_406=(_Bool)1;
                    __dec_obj111=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_413;
                    info->sline=sline_414;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value354=parse_struct_attribute(info)));
                (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj112=type_name_385,
                type_name_385=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_415=info->p;
                    sline_416=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_415;
                                info->sline=sline_416;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result_obj__268 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value357=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1193, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(__right_value357,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__result_obj__268,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__268;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_417=info->p;
                    sline_418=info->sline;
                    ((char*)(__right_value358=skip_block(info)));
                    (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (void)((char*)(__right_value359=parse_struct_attribute(info)));
                    (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        info->p=head_383;
                        info->sline=head_sline_384;
                        info->define_struct=(_Bool)1;
                        __result_obj__269 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value361=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1213, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(__right_value361,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(__result_obj__269,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__269;
                    }
                    else {
                        info->p=p_417;
                        info->sline=sline_418;
                        node_419=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_385),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_420=node_compile(node_419,info);
                        if(                        !Value_420) {
                            __result_obj__270 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value365=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1225, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_419) ? node_419 = come_decrement_ref_count(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(__right_value365,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(__result_obj__270,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__270;
                        }
                        else {
                        }
                        ((node_419) ? node_419 = come_decrement_ref_count(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                        ((node_419) ? node_419 = come_decrement_ref_count(node_419, ((struct sNode*)node_419)->finalize, ((struct sNode*)node_419)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_385,"union")) {
            union__398=(_Bool)1;
            if(            *info->p==123) {
                p_421=info->p;
                sline_422=info->sline;
                ((char*)(__right_value366=skip_block(info)));
                (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value367=parse_attribute(info,(_Bool)0)));
                    /*c*/ come_call_finalizer3(__right_value367,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_383;
                    info->sline=head_sline_384;
                    info->define_struct=(_Bool)0;
                    anonymous_type_406=(_Bool)1;
                    __dec_obj113=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_421;
                    info->sline=sline_422;
                    break;
                }
                else {
                    anonymous_type_406=(_Bool)1;
                    __dec_obj114=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_421;
                    info->sline=sline_422;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj115=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_423=info->p;
                sline_424=info->sline;
                ((char*)(__right_value371=skip_block(info)));
                (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_383;
                    info->sline=head_sline_384;
                    info->define_struct=(_Bool)1;
                    __result_obj__271 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value373=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1282, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value373,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__271,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__271;
                }
                else {
                    anonymous_type_406=(_Bool)1;
                    info->p=p_423;
                    info->sline=sline_424;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_385,"enum")) {
            enum__399=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value374=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_425=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_426=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_427=multiple_assign_var3->v3;
                /*c*/ come_call_finalizer3(__right_value374,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_425,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_426 = come_decrement_ref_count(name_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_428=info->p;
                sline_429=info->sline;
                ((char*)(__right_value375=skip_block(info)));
                (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value376=parse_attribute(info,(_Bool)0)));
                    /*c*/ come_call_finalizer3(__right_value376,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_383;
                    info->sline=head_sline_384;
                    info->define_struct=(_Bool)1;
                    __result_obj__272 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value378=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1320, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value378,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__272,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__272;
                }
                else {
                    anonymous_type_406=(_Bool)1;
                    __dec_obj116=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_428;
                    info->sline=sline_429;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj117=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value381=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_430=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_431=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_432=multiple_assign_var4->v3;
                /*c*/ come_call_finalizer3(__right_value381,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_430,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_431 = come_decrement_ref_count(name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_433=info->p;
                sline_434=info->sline;
                ((char*)(__right_value382=skip_block(info)));
                (__right_value382 = come_decrement_ref_count(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_383;
                    info->sline=head_sline_384;
                    info->define_struct=(_Bool)1;
                    __result_obj__273 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value384=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1356, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(__right_value384,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__273,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__273;
                }
                else {
                    anonymous_type_406=(_Bool)1;
                    info->p=p_433;
                    info->sline=sline_434;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_385,"long")) {
            {
                p_435=info->p;
                sline_436=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)) {
                    info->p=p_435;
                    info->sline=sline_436;
                    __dec_obj118=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    break;
                }
                else {
                    __dec_obj119=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    if(                    string_operator_equals(type_name_385,"unsigned")) {
                        __dec_obj120=type_name_385,
                        type_name_385=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_385,"int")) {
                            long__393=(_Bool)1;
                            unsigned__392=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_385,"signed")) {
                        __dec_obj121=type_name_385,
                        type_name_385=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_385,"int")) {
                            long__393=(_Bool)1;
                            unsigned__392=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_385,"long")) {
                        p_435=info->p;
                        sline_436=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            long_long_394=(_Bool)1;
                            __dec_obj122=type_name_385,
                            type_name_385=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            long__393=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_385,"int")) {
                            long_long_394=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_385,info)) {
                            __dec_obj123=type_name_385,
                            type_name_385=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            long_long_394=(_Bool)1;
                            info->p=p_435;
                            info->sline=sline_436;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_385,info)) {
                        if(                        long__393) {
                            long_long_394=(_Bool)1;
                            long__393=(_Bool)0;
                        }
                        else {
                            long__393=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_435;
                        info->sline=sline_436;
                        __dec_obj124=type_name_385,
                        type_name_385=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_385,"unsigned")) {
            unsigned__392=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_437=info->p;
                sline_438=info->sline;
                __dec_obj125=type_name_385,
                type_name_385=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_385,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_439=info->p;
                        sline_440=info->sline;
                        __dec_obj126=type_name_385,
                        type_name_385=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_385,info)) {
                            short__395=(_Bool)1;
                        }
                        else {
                            short__395=(_Bool)1;
                            __dec_obj127=type_name_385,
                            type_name_385=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_439;
                            info->sline=sline_440;
                        }
                    }
                    else {
                        short__395=(_Bool)1;
                        __dec_obj128=type_name_385,
                        type_name_385=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_385,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_441=info->p;
                        sline_442=info->sline;
                        __dec_obj129=type_name_385,
                        type_name_385=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_385,info)) {
                            long__393=(_Bool)1;
                        }
                        else {
                            long__393=(_Bool)1;
                            __dec_obj130=type_name_385,
                            type_name_385=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_441;
                            info->sline=sline_442;
                        }
                    }
                    else {
                        long__393=(_Bool)1;
                        __dec_obj131=type_name_385,
                        type_name_385=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_385,info)) {
                    __dec_obj132=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_437;
                    info->sline=sline_438;
                    break;
                }
            }
            else {
                __dec_obj133=type_name_385,
                type_name_385=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_385,"signed")||string_operator_equals(type_name_385,"__signed__")) {
            unsigned__392=(_Bool)0;
            __dec_obj134=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"register")) {
            register__391=(_Bool)1;
            __dec_obj135=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"restrict")) {
            restrict__396=(_Bool)1;
            __dec_obj136=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"_Addr")) {
            __dec_obj137=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"__restrict")) {
            restrict__396=(_Bool)1;
            __dec_obj138=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_385,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj139=type_name_385,
            type_name_385=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__404=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_385,"short")) {
            short__395=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_443=info->p;
                sline_444=info->sline;
                __dec_obj140=type_name_385,
                type_name_385=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_385,"int")) {
                    short__395=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_385,"short")) {
                    short__395=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_385,info)) {
                    info->p=p_443;
                    info->sline=sline_444;
                }
                else {
                    __dec_obj141=type_name_385,
                    type_name_385=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_443;
                    info->sline=sline_444;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_445=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_446=0;
    heap_447=(_Bool)0;
    refference_448=(_Bool)0;
    no_refference_449=(_Bool)0;
    channel_450=(_Bool)0;
    any_class_451=(_Bool)0;
    vtable_452=(_Bool)0;
    deffer__453=(_Bool)0;
    while(    1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_446++;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            deffer__453=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_447=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_450=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_454=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__404) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj142=tuple_name_454,
        tuple_name_454=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    atomic__408) {
        expected_next_character(41,info);
    }
    lambda_flag_455=(_Bool)0;
    {
        pX_456=info->p;
        slineX_457=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value411=parse_word(info)));
            (__right_value411 = come_decrement_ref_count(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_455=(_Bool)1;
            }
        }
        info->p=pX_456;
        info->sline=slineX_457;
    }
    function_pointer_flag_460=(_Bool)0;
    {
        p_461=info->p;
        sline_462=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_460=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_463=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_460=(_Bool)1;
                    }
                }
                (word_463 = come_decrement_ref_count(word_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_461;
        info->sline=sline_462;
    }
    var_name_between_brace_464=(_Bool)0;
    {
        p_465=info->p;
        sline_466=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_467=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_467,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_464=(_Bool)1;
                    }
                }
                (word_467 = come_decrement_ref_count(word_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_465;
        info->sline=sline_466;
    }
    if(    anonymous_type_406&&*info->p==123) {
        static int anonymous_num_468=0;
        if(        struct__397) {
            if(            string_operator_equals(type_name_385,"")) {
                __dec_obj143=type_name_385,
                type_name_385=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_468));
                __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_469=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_385),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_470=node_compile(node_469,info);
            if(            !Value_470) {
                err_msg(info,"parse_struct is failed");
                __result_obj__274 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value418=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1763, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_469) ? node_469 = come_decrement_ref_count(node_469, ((struct sNode*)node_469)->finalize, ((struct sNode*)node_469)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value418,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__274,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__274;
            }
            else {
            }
            pointer_num_471=0;
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_471++;
            }
            __dec_obj144=type_458,
            type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1776, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_458->mPointerNum=pointer_num_471;
            ((node_469) ? node_469 = come_decrement_ref_count(node_469, ((struct sNode*)node_469)->finalize, ((struct sNode*)node_469)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        enum__399) {
            if(            string_operator_equals(type_name_385,"")) {
                __dec_obj145=type_name_385,
                type_name_385=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_468));
                __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_472=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_385),info));
            if(            !info->no_output_err) {
                Value_473=node_compile(node_472,info);
                if(                !Value_473) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__275 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value425=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1790, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_472) ? node_472 = come_decrement_ref_count(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value425,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__275,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__275;
                }
                else {
                }
            }
            __dec_obj146=type_458,
            type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1794, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((node_472) ? node_472 = come_decrement_ref_count(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        union__398) {
            if(            string_operator_equals(type_name_385,"")) {
                __dec_obj147=type_name_385,
                type_name_385=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_468));
                __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_474=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_385),info));
            Value_475=node_compile(node_474,info);
            if(            !Value_475) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__276 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value432=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1806, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_474) ? node_474 = come_decrement_ref_count(node_474, ((struct sNode*)node_474)->finalize, ((struct sNode*)node_474)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value432,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__276,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__276;
            }
            else {
            }
            pointer_num_476=0;
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_476++;
            }
            __dec_obj148=type_458,
            type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1820, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_458->mPointerNum=pointer_num_476;
            ((node_474) ? node_474 = come_decrement_ref_count(node_474, ((struct sNode*)node_474)->finalize, ((struct sNode*)node_474)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            err_msg(info,"unexpected { character");
            __result_obj__277 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value437=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1826, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value437,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__277,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__277;
        }
        attribute_477=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_477,"")) {
            __dec_obj149=type_458->mAttribute,
            type_458->mAttribute=(char*)come_increment_ref_count(attribute_477);
            __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_464&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj150=var_name_459,
                var_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_407) {
                static int num_anonymous_var_name_478=0;
                num_anonymous_var_name_478++;
                __dec_obj151=var_name_459,
                var_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_478));
                __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj152=var_name_459,
                var_name_459=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_479=0;
                num_anonymous_var_name_479++;
                __dec_obj153=var_name_459,
                var_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_479));
                __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_464&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_480=info->no_comma;
                info->no_comma=(_Bool)1;
                node_481=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_480;
                __dec_obj154=type_458->mSizeNum,
                type_458->mSizeNum=(struct sNode*)come_increment_ref_count(node_481);
                (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_481) ? node_481 = come_decrement_ref_count(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_482=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_477,"")&&string_operator_not_equals(attribute2_482,"")) {
                __dec_obj155=type_458->mAttribute,
                type_458->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value446=string_operator_add(attribute_477," "))),attribute2_482));
                __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_482,"")) {
                __dec_obj156=type_458->mAttribute,
                type_458->mAttribute=(char*)come_increment_ref_count(attribute2_482);
                __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_482 = come_decrement_ref_count(attribute2_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_477 = come_decrement_ref_count(attribute_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    lambda_flag_455) {
        if(        (_if_conditional1=(((struct sType*)(__right_value448=map$2char$phsType$ph_operator_load_element(info->types,type_name_385))))),        /*c*/ come_call_finalizer3(__right_value448,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional1) {
            __dec_obj157=result_type_483,
            result_type_483=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value449=map$2char$phsType$ph_operator_load_element(info->types,type_name_385)))));
            /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value449,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_483->mClass=((struct sClass*)(__right_value451=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_483->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value451,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_385)) {
            for(            i_484=0;            i_484<list$1char$ph_length(info->generics_type_names);            i_484++            ){
                if(                (_if_conditional2=(string_operator_equals(((char*)(__right_value453=list$1char$ph_operator_load_element(info->generics_type_names,i_484))),type_name_385))),                (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value453 = come_decrement_ref_count(__right_value453, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional2) {
                    __dec_obj158=result_type_483,
                    result_type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1894, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_484)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_385)) {
            for(            i_491=0;            i_491<list$1char$ph_length(info->method_generics_type_names);            i_491++            ){
                if(                (_if_conditional3=(string_operator_equals(((char*)(__right_value458=list$1char$ph_operator_load_element(info->method_generics_type_names,i_491))),type_name_385))),                (__right_value457 = come_decrement_ref_count(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value458 = come_decrement_ref_count(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional3) {
                    __dec_obj159=result_type_483,
                    result_type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1901, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_491)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj159,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj160=result_type_483,
            result_type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1906, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_483->mAtomic=result_type_483->mAtomic||atomic__408;
        result_type_483->mConstant=result_type_483->mConstant||constant_388;
        __dec_obj161=result_type_483->mAlignas,
        result_type_483->mAlignas=(struct sNode*)come_increment_ref_count(alignas__405);
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        result_type_483->mRegister=register__391;
        result_type_483->mUnsigned=result_type_483->mUnsigned||unsigned__392;
        result_type_483->mVolatile=volatile__390;
        result_type_483->mRecord=result_type_483->mRecord||record__386;
        result_type_483->mUniq=result_type_483->mUniq||uniq__403;
        result_type_483->mStatic=(result_type_483->mStatic||static__389)&&!result_type_483->mUniq;
        result_type_483->mException=result_type_483->mException||exception__387;
        result_type_483->mExtern=result_type_483->mExtern||extern__401;
        result_type_483->mInline=result_type_483->mInline||inline__402;
        result_type_483->mRestrict=result_type_483->mRestrict||restrict__396;
        result_type_483->mLongLong=result_type_483->mLongLong||long_long_394;
        result_type_483->mLong=result_type_483->mLong||long__393;
        result_type_483->mShort=result_type_483->mShort||short__395;
        result_type_483->mPointerNum=pointer_num_446;
        result_type_483->mHeap=result_type_483->mHeap||heap_447;
        result_type_483->mChannel=result_type_483->mChannel||channel_450;
        result_type_483->mDefferRightValue=result_type_483->mDefferRightValue||deffer__453;
        __dec_obj162=var_name_459,
        var_name_459=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value466=parse_params(info,(_Bool)0)));
        param_types_492=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_493=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_494=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_495=multiple_assign_var5->v4;
        /*c*/ come_call_finalizer3(__right_value466,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj163=type_458,
        type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1934, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj164=type_458->mResultType,
        type_458->mResultType=(struct sType*)come_increment_ref_count(result_type_483);
        /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj165=type_458->mParamTypes,
        type_458->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_492);
        /*b*/ come_call_finalizer3(__dec_obj165,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj166=type_458->mParamNames,
        type_458->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_493);
        /*b*/ come_call_finalizer3(__dec_obj166,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_458->mVarArgs=var_args_495;
        type_458->mExtern=extern__401;
        /*c*/ come_call_finalizer3(result_type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_492,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_493,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_494,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    function_pointer_flag_460) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_496=0;
        while(        *info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_496++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional4=(((struct sType*)(__right_value470=map$2char$phsType$ph_operator_load_element(info->types,type_name_385))))),        /*c*/ come_call_finalizer3(__right_value470,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional4) {
            __dec_obj167=result_type_497,
            result_type_497=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value471=map$2char$phsType$ph_operator_load_element(info->types,type_name_385)))));
            /*b*/ come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value471,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_497->mClass=((struct sClass*)(__right_value473=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_497->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value473,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_385)) {
            for(            i_498=0;            i_498<list$1char$ph_length(info->generics_type_names);            i_498++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value475=list$1char$ph_operator_load_element(info->generics_type_names,i_498))),type_name_385))),                (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value475 = come_decrement_ref_count(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional5) {
                    __dec_obj168=result_type_497,
                    result_type_497=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1967, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_498)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_385)) {
            for(            i_499=0;            i_499<list$1char$ph_length(info->method_generics_type_names);            i_499++            ){
                if(                (_if_conditional6=(string_operator_equals(((char*)(__right_value480=list$1char$ph_operator_load_element(info->method_generics_type_names,i_499))),type_name_385))),                (__right_value479 = come_decrement_ref_count(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value480 = come_decrement_ref_count(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional6) {
                    __dec_obj169=result_type_497,
                    result_type_497=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1974, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_499)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj170=result_type_497,
            result_type_497=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1979, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_497->mConstant=result_type_497->mConstant||constant_388;
        result_type_497->mAtomic=result_type_497->mAtomic||atomic__408;
        __dec_obj171=result_type_497->mAlignas,
        result_type_497->mAlignas=(struct sNode*)come_increment_ref_count(alignas__405);
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        result_type_497->mRegister=register__391;
        result_type_497->mUnsigned=result_type_497->mUnsigned||unsigned__392;
        result_type_497->mVolatile=volatile__390;
        result_type_497->mUniq=result_type_497->mUniq||uniq__403;
        result_type_497->mStatic=(result_type_497->mStatic||static__389)&&!result_type_497->mUniq;
        result_type_497->mRecord=result_type_497->mRecord||record__386;
        result_type_497->mException=result_type_497->mException||exception__387;
        result_type_497->mExtern=result_type_497->mExtern||extern__401;
        result_type_497->mInline=result_type_497->mInline||inline__402;
        result_type_497->mRestrict=result_type_497->mRestrict||restrict__396;
        result_type_497->mLongLong=result_type_497->mLongLong||long_long_394;
        result_type_497->mLong=result_type_497->mLong||long__393;
        result_type_497->mShort=result_type_497->mShort||short__395;
        result_type_497->mPointerNum+=pointer_num_446;
        result_type_497->mHeap=result_type_497->mHeap||heap_447;
        result_type_497->mChannel=result_type_497->mChannel||channel_450;
        result_type_497->mDefferRightValue=result_type_497->mDefferRightValue||deffer__453;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj172=var_name_459,
            var_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            *info->p==40) {
                __result_obj__282 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value489=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2006, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(result_type_497),(char*)come_increment_ref_count(var_name_459),(_Bool)0))));
                /*c*/ come_call_finalizer3(result_type_497,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value489,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__282,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__282;
            }
        }
        else {
            static int num_anonymous_var_name_500=0;
            num_anonymous_var_name_500++;
            __dec_obj173=var_name_459,
            var_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_500));
            __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        function_pointer_array_501=(_Bool)0;
        function_pointer_array_num_502=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_503=0;
            while(            xisdigit(*info->p)) {
                n_503=n_503*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_502=n_503;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_501=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value491=parse_params(info,(_Bool)0)));
        param_types_504=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_505=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_506=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_507=multiple_assign_var6->v4;
        /*c*/ come_call_finalizer3(__right_value491,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj174=type_458,
        type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2038, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj175=type_458->mResultType,
        type_458->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type_497));
        /*b*/ come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj176=type_458->mParamTypes,
        type_458->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_504);
        /*b*/ come_call_finalizer3(__dec_obj176,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj177=type_458->mParamNames,
        type_458->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_505);
        /*b*/ come_call_finalizer3(__dec_obj177,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_458->mVarArgs=var_args_507;
        type_458->mExtern=extern__401;
        if(        function_pointer_array_501) {
            type_458->mLambdaArray=(_Bool)1;
            type_458->mLambdaArrayNum=function_pointer_array_num_502;
        }
        type_458->mFunctionPointerNum=function_pointer_num_496;
        /*c*/ come_call_finalizer3(result_type_497,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_504,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_505,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_506,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(type_name_385,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_508=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_509=node_compile(exp_508,info);
        if(        !Value_509) {
            err_msg(info,"invalid __typeof__ expression");
            __result_obj__283 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value498=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2062, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            ((exp_508) ? exp_508 = come_decrement_ref_count(exp_508, ((struct sNode*)exp_508)->finalize, ((struct sNode*)exp_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value498,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__283,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__283;
        }
        else {
        }
        come_value_510=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj178=type_458,
        type_458=(struct sType*)come_increment_ref_count(sType_clone(come_value_510->type));
        /*b*/ come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        attribute_511=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_511,"")) {
            __dec_obj179=type_458->mAttribute,
            type_458->mAttribute=(char*)come_increment_ref_count(attribute_511);
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_464&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj180=var_name_459,
                var_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_407) {
                static int num_anonymous_var_name_512=0;
                num_anonymous_var_name_512++;
                __dec_obj181=var_name_459,
                var_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_512));
                __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj182=var_name_459,
                var_name_459=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_513=0;
                num_anonymous_var_name_513++;
                __dec_obj183=var_name_459,
                var_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_513));
                __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_464&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_514=info->no_comma;
                info->no_comma=(_Bool)1;
                node_515=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_514;
                __dec_obj184=type_458->mSizeNum,
                type_458->mSizeNum=(struct sNode*)come_increment_ref_count(node_515);
                (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_515) ? node_515 = come_decrement_ref_count(node_515, ((struct sNode*)node_515)->finalize, ((struct sNode*)node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_516=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_511,"")&&string_operator_not_equals(attribute2_516,"")) {
                __dec_obj185=type_458->mAttribute,
                type_458->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value509=string_operator_add(attribute_511," "))),attribute2_516));
                __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_516,"")) {
                __dec_obj186=type_458->mAttribute,
                type_458->mAttribute=(char*)come_increment_ref_count(attribute2_516);
                __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_516 = come_decrement_ref_count(attribute2_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        ((exp_508) ? exp_508 = come_decrement_ref_count(exp_508, ((struct sNode*)exp_508)->finalize, ((struct sNode*)exp_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_510,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_511 = come_decrement_ref_count(attribute_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        (_if_conditional7=(((struct sType*)(__right_value511=map$2char$phsType$ph_operator_load_element(info->types,type_name_385))))),        /*c*/ come_call_finalizer3(__right_value511,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional7) {
            __dec_obj187=type_458,
            type_458=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value512=map$2char$phsType$ph_operator_load_element(info->types,type_name_385)))));
            /*b*/ come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value512,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_458->mTypedefOriginalPointerNum=type_458->mPointerNum;
            type_458->mClass=((struct sClass*)(__right_value514=map$2char$phsClass$ph_operator_load_element(info->classes,type_458->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value514,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj188=type_458->mOriginalTypeName,
            type_458->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_385));
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            type_458->mOriginalTypeNamePointerNum=pointer_num_446;
            type_458->mOriginalTypeNameHeap=heap_447;
            type_458->mConstant=type_458->mConstant||constant_388;
            type_458->mAtomic=type_458->mAtomic||atomic__408;
            __dec_obj189=type_458->mAlignas,
            type_458->mAlignas=(struct sNode*)come_increment_ref_count(alignas__405);
            (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_458->mRegister=register__391;
            type_458->mUnsigned=type_458->mUnsigned||unsigned__392;
            type_458->mVolatile=volatile__390;
            type_458->mUniq=type_458->mUniq||uniq__403;
            type_458->mStatic=(type_458->mStatic||static__389)&&!type_458->mUniq;
            type_458->mRecord=type_458->mRecord||record__386;
            type_458->mException=type_458->mException||exception__387;
            type_458->mExtern=type_458->mExtern||extern__401;
            type_458->mInline=type_458->mInline||inline__402;
            type_458->mRestrict=type_458->mRestrict||restrict__396;
            type_458->mLongLong=type_458->mLongLong||long_long_394;
            type_458->mLong=type_458->mLong||long__393;
            type_458->mShort=type_458->mShort||short__395;
            type_458->mPointerNum+=pointer_num_446;
            type_458->mHeap=type_458->mHeap||heap_447;
            type_458->mChannel=type_458->mChannel||channel_450;
            type_458->mDefferRightValue=type_458->mDefferRightValue||deffer__453;
            __dec_obj190=type_458->mTupleName,
            type_458->mTupleName=(char*)come_increment_ref_count(tuple_name_454);
            __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_385)) {
            for(            i_517=0;            i_517<list$1char$ph_length(info->generics_type_names);            i_517++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value517=list$1char$ph_operator_load_element(info->generics_type_names,i_517))),type_name_385))),                (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value517 = come_decrement_ref_count(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional8) {
                    __dec_obj191=type_458,
                    type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2159, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_517)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_458->mConstant=type_458->mConstant||constant_388;
            type_458->mAtomic=type_458->mAtomic||atomic__408;
            __dec_obj192=type_458->mAlignas,
            type_458->mAlignas=(struct sNode*)come_increment_ref_count(alignas__405);
            (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_458->mRegister=register__391;
            type_458->mUnsigned=type_458->mUnsigned||unsigned__392;
            type_458->mVolatile=volatile__390;
            type_458->mUniq=type_458->mUniq||uniq__403;
            type_458->mStatic=(type_458->mStatic||static__389)&&!type_458->mUniq;
            type_458->mRecord=type_458->mRecord||record__386;
            type_458->mException=type_458->mException||exception__387;
            type_458->mExtern=type_458->mExtern||extern__401;
            type_458->mInline=type_458->mInline||inline__402;
            type_458->mRestrict=type_458->mRestrict||restrict__396;
            type_458->mLongLong=type_458->mLongLong||long_long_394;
            type_458->mLong=type_458->mLong||long__393;
            type_458->mShort=type_458->mShort||short__395;
            type_458->mPointerNum+=pointer_num_446;
            type_458->mHeap=type_458->mHeap||heap_447;
            type_458->mChannel=type_458->mChannel||channel_450;
            type_458->mDefferRightValue=type_458->mDefferRightValue||deffer__453;
            __dec_obj193=type_458->mTupleName,
            type_458->mTupleName=(char*)come_increment_ref_count(tuple_name_454);
            __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_385)) {
            for(            i_518=0;            i_518<list$1char$ph_length(info->method_generics_type_names);            i_518++            ){
                if(                (_if_conditional9=(string_operator_equals(((char*)(__right_value522=list$1char$ph_operator_load_element(info->method_generics_type_names,i_518))),type_name_385))),                (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional9) {
                    __dec_obj194=type_458,
                    type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2188, "struct sType*")),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_518)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj194,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_458->mConstant=type_458->mConstant||constant_388;
            type_458->mAtomic=type_458->mAtomic||atomic__408;
            __dec_obj195=type_458->mAlignas,
            type_458->mAlignas=(struct sNode*)come_increment_ref_count(alignas__405);
            (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_458->mRegister=register__391;
            type_458->mUnsigned=type_458->mUnsigned||unsigned__392;
            type_458->mVolatile=volatile__390;
            type_458->mUniq=type_458->mUniq||uniq__403;
            type_458->mStatic=(type_458->mStatic||static__389)&&!type_458->mUniq;
            type_458->mRecord=type_458->mRecord||record__386;
            type_458->mException=type_458->mException||exception__387;
            type_458->mExtern=type_458->mExtern||extern__401;
            type_458->mInline=type_458->mInline||inline__402;
            type_458->mRestrict=type_458->mRestrict||restrict__396;
            type_458->mLongLong=type_458->mLongLong||long_long_394;
            type_458->mLong=type_458->mLong||long__393;
            type_458->mShort=type_458->mShort||short__395;
            type_458->mPointerNum+=pointer_num_446;
            type_458->mHeap=type_458->mHeap||heap_447;
            type_458->mChannel=type_458->mChannel||channel_450;
            type_458->mDefferRightValue=type_458->mDefferRightValue||deffer__453;
            __dec_obj196=type_458->mTupleName,
            type_458->mTupleName=(char*)come_increment_ref_count(tuple_name_454);
            __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional10=(((struct sClass*)(__right_value528=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value527=__builtin_string(type_name_385))))))==((void*)0))),            (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value528,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional10) {
                __result_obj__284 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value530=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2220, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value530,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__284,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__284;
            }
            __dec_obj197=type_458,
            type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2223, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj197,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value534=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_519=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_520=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_521=multiple_assign_var7->v3;
                /*c*/ come_call_finalizer3(__right_value534,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_521) {
                    __result_obj__285 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value536=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2229, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(generics_type_519,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value536,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__285,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__285;
                }
                list$1sType$ph_push_back(type_458->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_519));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*c*/ come_call_finalizer3(generics_type_519,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2));
                    __result_obj__286 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value538=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2246, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(generics_type_519,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value538,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__286,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__286;
                }
                /*c*/ come_call_finalizer3(generics_type_519,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            exception__387) {
            }
            else if(            is_contained_generics_class(type_458,info)) {
                __dec_obj198=type_458,
                type_458=(struct sType*)come_increment_ref_count(solve_generics(type_458,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_458,type_458,info)) {
                    new_name_522=(char*)come_increment_ref_count(create_generics_name(type_458,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_522);
                    exit(7);
                    (new_name_522 = come_decrement_ref_count(new_name_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_458->mConstant=type_458->mConstant||constant_388;
            type_458->mAtomic=type_458->mAtomic||atomic__408;
            __dec_obj199=type_458->mAlignas,
            type_458->mAlignas=(struct sNode*)come_increment_ref_count(alignas__405);
            (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_458->mRegister=register__391;
            type_458->mUnsigned=type_458->mUnsigned||unsigned__392;
            type_458->mVolatile=volatile__390;
            type_458->mUniq=type_458->mUniq||uniq__403;
            type_458->mStatic=(type_458->mStatic||static__389)&&!type_458->mUniq;
            type_458->mRecord=type_458->mRecord||record__386;
            type_458->mException=type_458->mException||exception__387;
            type_458->mExtern=type_458->mExtern||extern__401;
            type_458->mInline=type_458->mInline||inline__402;
            type_458->mRestrict=type_458->mRestrict||restrict__396;
            type_458->mLongLong=type_458->mLongLong||long_long_394;
            type_458->mLong=type_458->mLong||long__393;
            type_458->mShort=type_458->mShort||short__395;
            type_458->mPointerNum+=pointer_num_446;
            type_458->mHeap=type_458->mHeap||heap_447;
            type_458->mChannel=type_458->mChannel||channel_450;
            type_458->mDefferRightValue=type_458->mDefferRightValue||deffer__453;
            __dec_obj200=type_458->mTupleName,
            type_458->mTupleName=(char*)come_increment_ref_count(tuple_name_454);
            __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj201=type_name_385,
            type_name_385=(char*)come_increment_ref_count(type_458->mClass->mName);
            __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            if(            struct__397) {
                klass_523=((struct sClass*)(__right_value541=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_385)));
                /*c*/ come_call_finalizer3(__right_value541,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_523==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_385)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2293, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__398) {
                klass_561=((struct sClass*)(__right_value551=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_385)));
                /*c*/ come_call_finalizer3(__right_value551,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_561==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_385)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2300, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj202=type_458,
            type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2304, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_385)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj202,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_458->mConstant=type_458->mConstant||constant_388;
            type_458->mAtomic=type_458->mAtomic||atomic__408;
            __dec_obj203=type_458->mAlignas,
            type_458->mAlignas=(struct sNode*)come_increment_ref_count(alignas__405);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            type_458->mRegister=register__391;
            type_458->mUnsigned=type_458->mUnsigned||unsigned__392;
            type_458->mVolatile=volatile__390;
            type_458->mUniq=type_458->mUniq||uniq__403;
            type_458->mStatic=(type_458->mStatic||static__389)&&!type_458->mUniq;
            type_458->mRecord=type_458->mRecord||record__386;
            type_458->mException=type_458->mException||exception__387;
            type_458->mExtern=type_458->mExtern||extern__401;
            type_458->mInline=type_458->mInline||inline__402;
            type_458->mRestrict=type_458->mRestrict||restrict__396;
            type_458->mLongLong=type_458->mLongLong||long_long_394;
            type_458->mLong=type_458->mLong||long__393;
            type_458->mShort=type_458->mShort||short__395;
            type_458->mPointerNum+=pointer_num_446;
            type_458->mHeap=type_458->mHeap||heap_447;
            type_458->mChannel=type_458->mChannel||channel_450;
            type_458->mDefferRightValue=type_458->mDefferRightValue||deffer__453;
            __dec_obj204=type_458->mTupleName,
            type_458->mTupleName=(char*)come_increment_ref_count(tuple_name_454);
            __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        skip_pointer_attribute(info);
        while(        1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_458->mPointerNum++;
                if(                type_458->mNoSolvedGenericsType) {
                    type_458->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_458->mHeap=(_Bool)1;
                if(                type_458->mNoSolvedGenericsType) {
                    type_458->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_458->mNoHeap=(_Bool)1;
                if(                type_458->mNoSolvedGenericsType) {
                    type_458->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_458->mGuardValue=(_Bool)1;
                }
                else {
                    type_458->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_458->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(        1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_458->mPointerNum++;
                if(                type_458->mNoSolvedGenericsType) {
                    type_458->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_458->mHeap=(_Bool)1;
                if(                type_458->mNoSolvedGenericsType) {
                    type_458->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_458->mDefferRightValue=(_Bool)1;
                if(                type_458->mNoSolvedGenericsType) {
                    type_458->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_458->mChannel=(_Bool)1;
                if(                type_458->mNoSolvedGenericsType) {
                    type_458->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_562=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 2436, "struct list$1sType$ph*"))));
            list$1sType$ph_push_back(types_562,(struct sType*)come_increment_ref_count(sType_clone(type_458)));
            while(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value562=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_563=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_564=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_565=multiple_assign_var8->v3;
                /*c*/ come_call_finalizer3(__right_value562,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_565) {
                    __result_obj__302 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value564=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2447, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    /*c*/ come_call_finalizer3(type2_563,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_564 = come_decrement_ref_count(name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(types_562,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value564,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__302,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__302;
                }
                list$1sType$ph_push_back(types_562,(struct sType*)come_increment_ref_count(sType_clone(type2_563)));
                /*c*/ come_call_finalizer3(type2_563,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_564 = come_decrement_ref_count(name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_566=list$1sType$ph_length(types_562);
            __dec_obj205=type_458,
            type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2460, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples_566)),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj205,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_458->mPointerNum++;
            type_458->mHeap=(_Bool)1;
            for(            o2_saved_567=(struct list$1sType$ph*)come_increment_ref_count((types_562)),it_568=list$1sType$ph_begin((o2_saved_567));            !list$1sType$ph_end((o2_saved_567));            it_568=list$1sType$ph_next((o2_saved_567))            ){
                list$1sType$ph_push_back(type_458->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value569=sType_clone(it_568))))));
                /*c*/ come_call_finalizer3(__right_value569,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_567,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            while(            1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_458->mPointerNum++;
                    if(                    type_458->mNoSolvedGenericsType) {
                        type_458->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_458->mHeap=(_Bool)1;
                    if(                    type_458->mNoSolvedGenericsType) {
                        type_458->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_458->mDefferRightValue=(_Bool)1;
                    if(                    type_458->mNoSolvedGenericsType) {
                        type_458->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_458->mChannel=(_Bool)1;
                    if(                    type_458->mNoSolvedGenericsType) {
                        type_458->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            exception__387) {
            }
            else if(            is_contained_generics_class(type_458,info)) {
                __dec_obj206=type_458,
                type_458=(struct sType*)come_increment_ref_count(solve_generics(type_458,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_458,type_458,info)) {
                    new_name_569=(char*)come_increment_ref_count(create_generics_name(type_458,info));
                    printf("output generics is failed(%s)\n",new_name_569);
                    exit(9);
                    (new_name_569 = come_decrement_ref_count(new_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_458->mMultipleTypes=(_Bool)1;
            __dec_obj207=type_name_385,
            type_name_385=(char*)come_increment_ref_count(type_458->mClass->mName);
            __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(types_562,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        attribute_570=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_570,"")) {
            __dec_obj208=type_458->mAttribute,
            type_458->mAttribute=(char*)come_increment_ref_count(attribute_570);
            __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_464&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj209=var_name_459,
                var_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_407) {
                static int num_anonymous_var_name_571=0;
                num_anonymous_var_name_571++;
                __dec_obj210=var_name_459,
                var_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_571));
                __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj211=var_name_459,
                var_name_459=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_572=0;
                num_anonymous_var_name_572++;
                __dec_obj212=var_name_459,
                var_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_572));
                __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_464&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_573=info->no_comma;
                info->no_comma=(_Bool)1;
                node_574=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_573;
                __dec_obj213=type_458->mSizeNum,
                type_458->mSizeNum=(struct sNode*)come_increment_ref_count(node_574);
                (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                ((node_574) ? node_574 = come_decrement_ref_count(node_574, ((struct sNode*)node_574)->finalize, ((struct sNode*)node_574)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_575=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_570,"")&&string_operator_not_equals(attribute2_575,"")) {
                __dec_obj214=type_458->mAttribute,
                type_458->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value580=string_operator_add(attribute_570," "))),attribute2_575));
                __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value579 = come_decrement_ref_count(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value580 = come_decrement_ref_count(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_575,"")) {
                __dec_obj215=type_458->mAttribute,
                type_458->mAttribute=(char*)come_increment_ref_count(attribute2_575);
                __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_575 = come_decrement_ref_count(attribute2_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_570 = come_decrement_ref_count(attribute_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_458->mArrayPointerType=(_Bool)1;
            type_458->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_576=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(type_458->mArrayNum,(struct sNode*)come_increment_ref_count(node_576));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_576) ? node_576 = come_decrement_ref_count(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var9=((struct tuple2$2char$phchar$ph*)(__right_value583=parse_attribute(info,(_Bool)0)));
    asm_name_577=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_578=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    /*c*/ come_call_finalizer3(__right_value583,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(attribute2_578,"")) {
        __dec_obj216=type_458->mAttribute,
        type_458->mAttribute=(char*)come_increment_ref_count(attribute2_578);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj217=type_458->mAsmName,
    type_458->mAsmName=(char*)come_increment_ref_count(asm_name_577);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    parse_sharp_v5(info);
    if(    type_458->mChannel) {
        type_before_579=(struct sType*)come_increment_ref_count(sType_clone(type_458));
        __dec_obj218=type_458,
        type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2626, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj219=type_458->mArrayNum,
        type_458->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___580[0]=((struct sNode*)(__right_value588=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2627, "struct list$1sNode$ph")),1,__list_values1___580)));
        /*b*/ come_call_finalizer3(__dec_obj219,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        ((__right_value588) ? __right_value588 = come_decrement_ref_count(__right_value588, ((struct sNode*)__right_value588)->finalize, ((struct sNode*)__right_value588)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        __dec_obj220=type_458->mChannelType,
        type_458->mChannelType=(struct sType*)come_increment_ref_count(type_before_579);
        /*b*/ come_call_finalizer3(__dec_obj220,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_458->mChannel=(_Bool)1;
        /*c*/ come_call_finalizer3(type_before_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    type_458->mException) {
        type2_584=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2632, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type2_584->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2633, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type0")),(_Bool)0,info)));
        list$1sType$ph$p_operator_store_element(type2_584->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2634, "struct sType*")),(char*)come_increment_ref_count(xsprintf("generics_type1")),(_Bool)0,info)));
        type2_584->mPointerNum=1;
        type2_584->mHeap=(_Bool)1;
        type3_590=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2638, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type3_590->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_458));
        list$1sType$ph$p_operator_store_element(type3_590->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2640, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info)));
        type4_591=(struct sType*)come_increment_ref_count(solve_generics(type2_584,type3_590,info));
        type4_591->mException=(_Bool)1;
        type4_591->mUniq=type_458->mUniq;
        if(        type_458->mClass->mGenerics||type_458->mClass->mMethodGenerics) {
            type4_591->mExceptionGenericsType=(_Bool)1;
        }
        __result_obj__308 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value609=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2651, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type4_591),(char*)come_increment_ref_count(var_name_459),(_Bool)1))));
        /*c*/ come_call_finalizer3(type2_584,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type4_591,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (asm_name_577 = come_decrement_ref_count(asm_name_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute2_578 = come_decrement_ref_count(attribute2_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value609,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__308,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__308;
        /*c*/ come_call_finalizer3(type2_584,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type3_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type4_591,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_not_equals(attribute_445,"")) {
        __dec_obj222=type_458->mAttribute,
        type_458->mAttribute=(char*)come_increment_ref_count(attribute_445);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__309 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value611=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2658, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_458),(char*)come_increment_ref_count(var_name_459),(_Bool)1))));
    (type_name_385 = come_decrement_ref_count(type_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((alignas__405) ? alignas__405 = come_decrement_ref_count(alignas__405, ((struct sNode*)alignas__405)->finalize, ((struct sNode*)alignas__405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute_445 = come_decrement_ref_count(attribute_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (tuple_name_454 = come_decrement_ref_count(tuple_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_459 = come_decrement_ref_count(var_name_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (asm_name_577 = come_decrement_ref_count(asm_name_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute2_578 = come_decrement_ref_count(attribute2_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value611,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__309,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_485;
int i_486;
char* __result_obj__278;
char* default_value_487;
char* __result_obj__279;
default_value_487 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_485=self->head;
    i_486=0;
    while(    it_485!=((void*)0)) {
        if(        position==i_486) {
            __result_obj__278 = (char*)come_increment_ref_count(it_485->item);
            (__result_obj__278 = come_decrement_ref_count(__result_obj__278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__278;
        }
        it_485=it_485->next;
        i_486++;
    }
    memset(&default_value_487,0,sizeof(char*));
    __result_obj__279 = (char*)come_increment_ref_count(default_value_487);
    (default_value_487 = come_decrement_ref_count(default_value_487, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__279 = come_decrement_ref_count(__result_obj__279, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__279;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_488;
int i_489;
char* __result_obj__280;
char* default_value_490;
char* __result_obj__281;
default_value_490 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_488=self->head;
    i_489=0;
    while(    it_488!=((void*)0)) {
        if(        position==i_489) {
            __result_obj__280 = (char*)come_increment_ref_count(it_488->item);
            (__result_obj__280 = come_decrement_ref_count(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__280;
        }
        it_488=it_488->next;
        i_489++;
    }
    memset(&default_value_490,0,sizeof(char*));
    __result_obj__281 = (char*)come_increment_ref_count(default_value_490);
    (default_value_490 = come_decrement_ref_count(default_value_490, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__281 = come_decrement_ref_count(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_541;
unsigned int it_542;
_Bool same_key_exist_559;
char* it2_560;
struct map$2char$phsClass$ph* __result_obj__301;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_541=string_get_hash_key(((char*)key))%self->size;
    it_542=hash_541;
    while(    (_Bool)1) {
        if(        self->item_existance[it_542]) {
            if(            string_equals(self->keys[it_542],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_542]);
                    (self->keys[it_542] = come_decrement_ref_count(self->keys[it_542], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_542]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_542]);
                    self->keys[it_542]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_542],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_542]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_542]=item;
                }
                break;
            }
            it_542++;
            if(            it_542>=self->size) {
                it_542=0;
            }
            else if(            it_542==hash_541) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_542]=(_Bool)1;
            if(            1) {
                self->keys[it_542]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_542]=key;
            }
            if(            1) {
                self->items[it_542]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_542]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_559=(_Bool)0;
    for(    it2_560=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_560=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_560,key)) {
            same_key_exist_559=(_Bool)1;
        }
    }
    if(    !same_key_exist_559) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__301 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_524;
void* __right_value542 = (void*)0;
char** keys_525;
void* __right_value543 = (void*)0;
struct sClass** items_526;
void* __right_value544 = (void*)0;
_Bool* item_existance_527;
int len_528;
char* it_531;
struct sClass* default_value_534;
void* __right_value545 = (void*)0;
struct sClass* it2_535;
unsigned int hash_538;
int n_539;
struct sClass* default_value_540;
void* __right_value546 = (void*)0;
default_value_534 = (void*)0;
default_value_540 = (void*)0;
    size_524=self->size*10;
    keys_525=(char**)come_increment_ref_count(((char**)(__right_value542=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_524)), "./comelang.h", 2167, "char**"))));
    items_526=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value543=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_524)), "./comelang.h", 2168, "struct sClass**"))));
    item_existance_527=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value544=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_524)), "./comelang.h", 2169, "_Bool*"))));
    len_528=0;
    for(    it_531=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_531=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_534,0,sizeof(struct sClass*));
        it2_535=((struct sClass*)(__right_value545=map$2char$phsClass$ph_at(self,it_531,(struct sClass*)come_increment_ref_count(default_value_534))));
        /*c*/ come_call_finalizer3(__right_value545,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_538=string_get_hash_key(((char*)it_531))%size_524;
        n_539=hash_538;
        while(        (_Bool)1) {
            if(            item_existance_527[n_539]) {
                n_539++;
                if(                n_539>=size_524) {
                    n_539=0;
                }
                else if(                n_539==hash_538) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_527[n_539]=(_Bool)1;
                keys_525[n_539]=it_531;
                items_526[n_539]=((struct sClass*)(__right_value546=map$2char$phsClass$ph_at(self,it_531,(struct sClass*)come_increment_ref_count(default_value_540))));
                /*c*/ come_call_finalizer3(__right_value546,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_528++;
                /*c*/ come_call_finalizer3(default_value_540,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_540,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_534,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_525;
    self->items=items_526;
    self->item_existance=item_existance_527;
    self->size=size_524;
    self->len=len_528;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_529;
char* __result_obj__287;
char* __result_obj__288;
char* result_530;
char* __result_obj__289;
result_529 = (void*)0;
result_530 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_529,0,sizeof(char*));
        __result_obj__287 = result_529;
        return __result_obj__287;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__288 = self->key_list->it->item;
        return __result_obj__288;
    }
    memset(&result_530,0,sizeof(char*));
    __result_obj__289 = result_530;
    return __result_obj__289;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_532;
char* __result_obj__290;
char* __result_obj__291;
char* result_533;
char* __result_obj__292;
result_532 = (void*)0;
result_533 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_532,0,sizeof(char*));
        __result_obj__290 = result_532;
        return __result_obj__290;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__291 = self->key_list->it->item;
        return __result_obj__291;
    }
    memset(&result_533,0,sizeof(char*));
    __result_obj__292 = result_533;
    return __result_obj__292;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_536;
unsigned int it_537;
struct sClass* __result_obj__293;
struct sClass* __result_obj__294;
struct sClass* __result_obj__295;
struct sClass* __result_obj__296;
    hash_536=string_get_hash_key(((char*)key))%self->size;
    it_537=hash_536;
    while(    (_Bool)1) {
        if(        self->item_existance[it_537]) {
            if(            string_equals(self->keys[it_537],key)) {
                __result_obj__293 = (struct sClass*)come_increment_ref_count(self->items[it_537]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__293,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__293;
            }
            it_537++;
            if(            it_537>=self->size) {
                it_537=0;
            }
            else if(            it_537==hash_536) {
                __result_obj__294 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__294,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__294;
            }
        }
        else {
            __result_obj__295 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__295,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__295;
        }
    }
    __result_obj__296 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__296,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_543;
struct list_item$1char$ph* it_544;
struct list$1char$ph* __result_obj__300;
    it2_543=0;
    it_544=self->head;
    while(    it_544!=((void*)0)) {
        if(        string_equals(it_544->item,item)) {
            list$1char$ph_delete(self,it2_543,it2_543+1);
            break;
        }
        it2_543++;
        it_544=it_544->next;
    }
    __result_obj__300 = self;
    return __result_obj__300;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_545;
struct list$1char$ph* __result_obj__297;
struct list_item$1char$ph* it_548;
int i_549;
struct list_item$1char$ph* prev_it_550;
struct list_item$1char$ph* it_551;
int i_552;
struct list_item$1char$ph* prev_it_553;
struct list_item$1char$ph* it_554;
struct list_item$1char$ph* head_prev_it_555;
struct list_item$1char$ph* tail_it_556;
int i_557;
struct list_item$1char$ph* prev_it_558;
struct list$1char$ph* __result_obj__299;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_545=tail;
        tail=head;
        head=tmp_545;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__297 = self;
        return __result_obj__297;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_548=self->head;
        i_549=0;
        while(        it_548!=((void*)0)) {
            if(            i_549<tail) {
                prev_it_550=it_548;
                it_548=it_548->next;
                i_549++;
                /*c*/ come_call_finalizer3(prev_it_550,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_549==tail) {
                self->head=it_548;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_548=it_548->next;
                i_549++;
            }
        }
    }
    else if(    tail==self->len) {
        it_551=self->head;
        i_552=0;
        while(        it_551!=((void*)0)) {
            if(            i_552==head) {
                self->tail=it_551->prev;
                self->tail->next=((void*)0);
            }
            if(            i_552>=head) {
                prev_it_553=it_551;
                it_551=it_551->next;
                i_552++;
                /*c*/ come_call_finalizer3(prev_it_553,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_551=it_551->next;
                i_552++;
            }
        }
    }
    else {
        it_554=self->head;
        head_prev_it_555=((void*)0);
        tail_it_556=((void*)0);
        i_557=0;
        while(        it_554!=((void*)0)) {
            if(            i_557==head) {
                head_prev_it_555=it_554->prev;
            }
            if(            i_557==tail) {
                tail_it_556=it_554;
            }
            if(            i_557>=head&&i_557<tail) {
                prev_it_558=it_554;
                it_554=it_554->next;
                i_557++;
                /*c*/ come_call_finalizer3(prev_it_558,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_554=it_554->next;
                i_557++;
            }
        }
        if(        head_prev_it_555!=((void*)0)) {
            head_prev_it_555->next=tail_it_556;
        }
        if(        tail_it_556!=((void*)0)) {
            tail_it_556->prev=head_prev_it_555;
        }
    }
    __result_obj__299 = self;
    return __result_obj__299;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_546;
struct list_item$1char$ph* prev_it_547;
struct list$1char$ph* __result_obj__298;
    it_546=self->head;
    while(    it_546!=((void*)0)) {
        prev_it_547=it_546;
        it_546=it_546->next;
        /*c*/ come_call_finalizer3(prev_it_547,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__298 = self;
    return __result_obj__298;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_581;
struct list$1sNode$ph* __result_obj__303;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_581=0;    i_581<num_value;    i_581++    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i_581]));
    }
    __result_obj__303 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__304;
void* __right_value589 = (void*)0;
struct list$1sNode$ph* result_582;
struct list$1sNode$ph* __result_obj__305;
    if(    self==(void*)0) {
        __result_obj__304 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__304,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__304;
    }
    result_582=(struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "list$1sNode$ph_clone", 3, "struct list$1sNode$ph*"));
    if(    self!=((void*)0)) {
        result_582->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_582->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_582->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_582->it=self->it;
    }
    __result_obj__305 = (struct list$1sNode$ph*)come_increment_ref_count(result_582);
    /*c*/ come_call_finalizer3(result_582,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__305,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self){
unsigned int result_583;
    result_583=0;
    result_583+=int_get_hash_key(((int)self->head));
    result_583+=int_get_hash_key(((int)self->tail));
    result_583+=int_get_hash_key(((int)self->len));
    result_583+=int_get_hash_key(((int)self->it));
    return result_583;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_585;
int i_586;
struct sType* default_value_587;
struct list$1sType$ph* __result_obj__306;
struct list_item$1sType$ph* it_588;
int i_589;
struct sType* __dec_obj221;
struct list$1sType$ph* __result_obj__307;
default_value_587 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_585=self->len;
        for(        i_586=0;        i_586<position-len_585;        i_586++        ){
            memset(&default_value_587,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_587));
            /*c*/ come_call_finalizer3(default_value_587,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__306 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__306;
    }
    it_588=self->head;
    i_589=0;
    while(    it_588!=((void*)0)) {
        if(        position==i_589) {
            __dec_obj221=it_588->item,
            it_588->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj221,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_588=it_588->next;
        i_589++;
    }
    __result_obj__307 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__307;
}

